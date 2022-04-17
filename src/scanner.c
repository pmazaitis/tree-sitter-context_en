#include <tree_sitter/parser.h>
#include <string.h>
#include <wctype.h>
#include <stdio.h>

#define UNUSED(x) (void)(x)

// #define DEBUG

enum TokenType {
  COMMAND_STOP,
  PARAGRAPH_MARK,
  TEXT,
  CODE_TIKZ_BODY,
  CODE_LUA_BODY,
  TYPING_HTML_BODY,
  TYPING_CSS_BODY,
  TYPING_MP_BODY,
  TYPING_LUA_BODY,
  TYPING_XML_BODY,
  TYPING_PARSEDXML_BODY,
  TYPING_TEX_BODY,
  TYPING_UNNAMED_BODY,
};

// FIXME this scanner is not line ending agnostic

void *tree_sitter_context_external_scanner_create() { return NULL; }
void tree_sitter_context_external_scanner_destroy(void *p) {UNUSED(p);}
void tree_sitter_jcontext_external_scanner_reset(void *p) {UNUSED(p);}
unsigned tree_sitter_context_external_scanner_serialize(void *p, char *buffer) { UNUSED(p); UNUSED(buffer); return 0; }
void tree_sitter_context_external_scanner_deserialize(void *p, const char *b, unsigned n) {UNUSED(p); UNUSED(b); UNUSED(n);}

static bool isctxspecial(char c);
static void debuglookahead(char c, char* msg);

static void advance(TSLexer *lexer) { lexer->advance(lexer, false); }
static void skip(TSLexer *lexer) { lexer->advance(lexer, true); }

// # UTILITY FUNCTIONS

// Check for a ConTeXt special character
static bool isctxspecial(char c) {
  switch (c) {
    case '^': return true;      
    case '#': return true;
    case '$': return true;
    case '%': return true;
    case '&': return true;
    case '_': return true;
    case '{': return true;
    case '}': return true;
    case '|': return true;
    case '~': return true;
    case '\\': return true;
  }
  return false;
}

// Helpful for tracking state
static void debuglookahead(char c, char* msg) {
  #ifdef DEBUG
  printf("#### %s\n", msg);
  printf("#### [Character under test: \'%c\' ]\n", c);
  fflush(stdout);
  #endif
}


// TOKEN FUNCTIONS

//
static bool scan_command_stop(TSLexer *lexer) {
  // Determine if a command has ended in the source file.
  //
  // ConTeXt commands have a name, then zero or more square bracket blocks with 
  // options or settings, then one or more scopes.
  lexer->result_symbol = COMMAND_STOP;
  lexer->mark_end(lexer);
  
  while (lexer->lookahead != 0) {
  // while (!lexer->eof(lexer)) {

    // We have the start of an option block; still in command
    if (lexer->lookahead == '[') return false;
    // If we find the stop of an option block, the closing option block ends the command
    if (lexer->lookahead == ']') {lexer->mark_end(lexer); return true;}
    // We have a comment; this is not necessarily a stop
    if (lexer->lookahead == '%') return false;
    // We enter or leave a scope; the command is over
    if (lexer->lookahead == '{') {lexer->mark_end(lexer); return false;}
    if (lexer->lookahead == '}') {lexer->mark_end(lexer); return true;}
    // Found another command
    if (lexer->lookahead == '\\') {lexer->mark_end(lexer); return true;}
    // We find a numeric, the command is over
    if (iswdigit(lexer->lookahead)) {lexer->mark_end(lexer); return true;}
    
      
    if (lexer->lookahead == '\n') {
      advance(lexer);
      if (lexer->lookahead == '[') return false;
      if (lexer->lookahead == ']') {lexer->mark_end(lexer); return true;}
      if (lexer->lookahead == '%') return false;
      if (lexer->lookahead == '{') {lexer->mark_end(lexer); return true;}
      if (lexer->lookahead == '}') {lexer->mark_end(lexer); return true;}
      if (lexer->lookahead == '\\') {lexer->mark_end(lexer); return true;}
      if (lexer->lookahead == '\n') return true;
      advance(lexer);
      continue;
    } 

    advance(lexer);
  }
  
  // lexer->mark_end(lexer);
  return true;
}


static bool scan_paragraph_mark(TSLexer *lexer) {
  // Scan for two or more consecutive EOLs, and form a token to indicate a paragraph break.
  // FIXME the EOLs should be system agnostic.
  lexer->result_symbol = PARAGRAPH_MARK;
  lexer->mark_end(lexer);
  
  debuglookahead(lexer->lookahead, "Scanning for PARAGRAPH_MARK");
  
  if (lexer->lookahead == '\n') {
    debuglookahead(lexer->lookahead, "PARAGRAPH_MARK-Found EOL");
    advance(lexer);
    if (lexer->lookahead == '0') {
      debuglookahead(lexer->lookahead, "PARAGRAPH_MARK-Found EOF");
      return false;
    }
    if (lexer->lookahead == '\n') {
      debuglookahead(lexer->lookahead, "PARAGRAPH_MARK-Found EOL, EOL");
      advance(lexer);
      lexer->mark_end(lexer);
      return true;
    } 
  }
  return false;
}


static bool scan_text(TSLexer *lexer) {
  // Scan forward to form a text token, stopping before consuming:
  // - a special character
  // - EOF
  // - a sequence of two EOLs
  // FIXME the EOLs should be system agnostic.
  // FIXME we also need to stop a text block upon finding a starttext or startcomponent?
  
  lexer->result_symbol = TEXT;
  lexer->mark_end(lexer);
  
  debuglookahead(lexer->lookahead, "Scanning for TEXT");
  
  int step = 0;
  
  while (lexer->lookahead != 0) {

    debuglookahead(lexer->lookahead, "TEXT - In scan loop");

    if (isctxspecial(lexer->lookahead)) {
      debuglookahead(lexer->lookahead, "TEXT - Found Special"); 
      if (step > 0) { 
        return true;
      } else {
        return false;
      }
    }
 
    if (lexer->lookahead == '\n') {
      // ???: will setting this to skip break the token?
      debuglookahead(lexer->lookahead, "TEXT - Found EOL");
      advance(lexer);
      
      if (lexer->lookahead == 0) {
        debuglookahead(lexer->lookahead, "TEXT - Found EOF");
        lexer->mark_end(lexer);
        return true;
      }
      
      if (lexer->lookahead == '\n') {
        debuglookahead(lexer->lookahead, "TEXT - Found EOL,EOL");
        if (step > 0) { 
          return true;
        } else {
          return false;
        }
      }
      
      if (isctxspecial(lexer->lookahead)) {
        debuglookahead(lexer->lookahead, "TEXT - Found Special");
        lexer->mark_end(lexer); 
        return true;
      }
      
    } 
    step = step + 1;
    advance(lexer);
    lexer->mark_end(lexer);
  }
  lexer->mark_end(lexer);
  return true;
}

static bool find_verbatim(TSLexer *lexer, const char *keyword) {
  bool has_marked = false;
  while (true) {
    if (lexer->eof(lexer)) {
      break;
    }

    bool advanced = false;
    bool failed = false;
    for (size_t i = 0; keyword[i]; i++) {
      if (lexer->eof(lexer)) {
        return has_marked;
      }

      if (lexer->lookahead != keyword[i]) {
        failed = true;
        break;
      }

      advance(lexer);
      advanced = true;
    }

    if (failed && !advanced) {
      advance(lexer);
      lexer->mark_end(lexer);
      has_marked = true;
      continue;
    }
  }

  return has_marked;
}

bool tree_sitter_context_external_scanner_scan(void *payload, TSLexer *lexer, const bool *valid_symbols) {

  UNUSED(payload);

  if (valid_symbols[COMMAND_STOP]) {
    return scan_command_stop(lexer);
  }
  
  if (valid_symbols[PARAGRAPH_MARK]) {
    return scan_paragraph_mark(lexer);
  }
  
  if (valid_symbols[TEXT]) {
    return scan_text(lexer);
  }
  
  if (valid_symbols[CODE_TIKZ_BODY]) {
    lexer->result_symbol = CODE_TIKZ_BODY;
    return find_verbatim(lexer, "\\stoptikzpicture");
  }
  
  if (valid_symbols[CODE_LUA_BODY]) {
    lexer->result_symbol = CODE_LUA_BODY;
    return find_verbatim(lexer, "\\stopluacode");
  }
  
  if (valid_symbols[TYPING_HTML_BODY]) {
    lexer->result_symbol = TYPING_HTML_BODY;
    return find_verbatim(lexer, "\\stopHTML");
  }

  if (valid_symbols[TYPING_CSS_BODY]) {
    lexer->result_symbol = TYPING_CSS_BODY;
    return find_verbatim(lexer, "\\stopCSS");
  }
  
  if (valid_symbols[TYPING_MP_BODY]) {
    lexer->result_symbol = TYPING_MP_BODY;
    return find_verbatim(lexer, "\\stopMP");
  }
  
  if (valid_symbols[TYPING_LUA_BODY]) {
    lexer->result_symbol = TYPING_LUA_BODY;
    return find_verbatim(lexer, "\\stopLUA");
  }
  
  if (valid_symbols[TYPING_XML_BODY]) {
    lexer->result_symbol = TYPING_XML_BODY;
    return find_verbatim(lexer, "\\stopXML");
  }
  
  if (valid_symbols[TYPING_PARSEDXML_BODY]) {
    lexer->result_symbol = TYPING_PARSEDXML_BODY;
    return find_verbatim(lexer, "\\stopPARSEDXML");
  }
  
  if (valid_symbols[TYPING_TEX_BODY]) {
    lexer->result_symbol = TYPING_TEX_BODY;
    return find_verbatim(lexer, "\\stopTEX");
  }
  
  if (valid_symbols[TYPING_UNNAMED_BODY]) {
    lexer->result_symbol = TYPING_UNNAMED_BODY;
    return find_verbatim(lexer, "\\stoptyping");
  }
  
  
  
  return false;  
}
