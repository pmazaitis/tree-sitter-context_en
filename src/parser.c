#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 13
#define STATE_COUNT 193
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 118
#define ALIAS_COUNT 0
#define TOKEN_COUNT 67
#define EXTERNAL_TOKEN_COUNT 1
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 5
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BSLASHstarttext = 1,
  anon_sym_BSLASHstartcomponent = 2,
  anon_sym_BSLASHstoptext = 3,
  anon_sym_BSLASHstopcomponent = 4,
  aux_sym_comment_token1 = 5,
  anon_sym_POUND = 6,
  anon_sym_DOLLAR = 7,
  anon_sym_PERCENT = 8,
  anon_sym_AMP = 9,
  anon_sym_CARET = 10,
  anon_sym__ = 11,
  anon_sym_LBRACE = 12,
  anon_sym_RBRACE = 13,
  anon_sym_PIPE = 14,
  anon_sym_TILDE = 15,
  anon_sym_BSLASH = 16,
  anon_sym_BSLASHbgroup = 17,
  anon_sym_BSLASHegroup = 18,
  sym_command_group_start = 19,
  sym_command_group_stop = 20,
  sym_math_text = 21,
  anon_sym_BSLASHstartMPinclusions = 22,
  anon_sym_BSLASHstartuseMPgraphic = 23,
  anon_sym_BSLASHstartreusableMPgraphic = 24,
  anon_sym_BSLASHstartMPcode = 25,
  anon_sym_BSLASHstartMPpage = 26,
  anon_sym_BSLASHstartstaticMPfigure = 27,
  anon_sym_BSLASHstopMPinclusions = 28,
  anon_sym_BSLASHstopuseMPgraphic = 29,
  anon_sym_BSLASHstopreusableMPgraphic = 30,
  anon_sym_BSLASHstopMPcode = 31,
  anon_sym_BSLASHstopMPpage = 32,
  anon_sym_BSLASHstopstaticMPfigure = 33,
  aux_sym_metapost_body_token1 = 34,
  anon_sym_BSLASHstarttikzpicture = 35,
  anon_sym_BSLASHstoptikzpicture = 36,
  anon_sym_BSLASHstarttyping = 37,
  anon_sym_BSLASHstartLUA = 38,
  anon_sym_BSLASHstartMP = 39,
  anon_sym_BSLASHstartPARSEDXML = 40,
  anon_sym_BSLASHstartTEX = 41,
  anon_sym_BSLASHstartXML = 42,
  anon_sym_BSLASHstartCSS = 43,
  anon_sym_BSLASHstoptyping = 44,
  anon_sym_BSLASHstopLUA = 45,
  anon_sym_BSLASHstopMP = 46,
  anon_sym_BSLASHstopPARSEDXML = 47,
  anon_sym_BSLASHstopTEX = 48,
  anon_sym_BSLASHstopXML = 49,
  anon_sym_BSLASHstopCSS = 50,
  anon_sym_BSLASHstartHTML = 51,
  anon_sym_BSLASHstopHTML = 52,
  sym_command_name = 53,
  sym_command_block_start = 54,
  sym_command_block_stop = 55,
  anon_sym_COMMA = 56,
  sym_keyword = 57,
  anon_sym_EQ = 58,
  anon_sym_title = 59,
  aux_sym_title_text_token1 = 60,
  sym_key = 61,
  sym_text = 62,
  anon_sym_LF = 63,
  anon_sym_CR = 64,
  anon_sym_CR_LF = 65,
  sym_command_stop = 66,
  sym_document = 67,
  sym__content = 68,
  sym_main_start = 69,
  sym_main_stop = 70,
  sym_comment = 71,
  sym_escapechar = 72,
  sym_escaped = 73,
  sym_brace_group_start = 74,
  sym_brace_group_stop = 75,
  sym_brace_group = 76,
  sym_command_group = 77,
  sym_math_group = 78,
  sym__math_content = 79,
  sym_inline_math = 80,
  sym_metapost_start = 81,
  sym_metapost_stop = 82,
  sym_metapost_body = 83,
  sym_metapost_inclusion = 84,
  sym_tikz_start = 85,
  sym_tikz_stop = 86,
  sym_tikz_body = 87,
  sym_tikz_inclusion = 88,
  sym_typing_start = 89,
  sym_typing_stop = 90,
  sym_typing_body = 91,
  sym_typing_inclusion = 92,
  sym_typing_html_start = 93,
  sym_typing_html_stop = 94,
  sym_typing_html_body = 95,
  sym_typing_html_inclusion = 96,
  sym_option_block = 97,
  sym_settings_block = 98,
  sym_setting = 99,
  sym_title_setting = 100,
  sym_title_value = 101,
  sym__title_content = 102,
  sym_title_brace_group = 103,
  sym_title_text = 104,
  sym_value = 105,
  sym__value_content = 106,
  sym_value_text = 107,
  sym_value_brace_group = 108,
  sym_command = 109,
  sym__end_of_line = 110,
  aux_sym_document_repeat1 = 111,
  aux_sym_math_group_repeat1 = 112,
  aux_sym_option_block_repeat1 = 113,
  aux_sym_settings_block_repeat1 = 114,
  aux_sym_title_value_repeat1 = 115,
  aux_sym_value_repeat1 = 116,
  aux_sym_command_repeat1 = 117,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BSLASHstarttext] = "\\starttext",
  [anon_sym_BSLASHstartcomponent] = "\\startcomponent",
  [anon_sym_BSLASHstoptext] = "\\stoptext",
  [anon_sym_BSLASHstopcomponent] = "\\stopcomponent",
  [aux_sym_comment_token1] = "comment_token1",
  [anon_sym_POUND] = "#",
  [anon_sym_DOLLAR] = "$",
  [anon_sym_PERCENT] = "%",
  [anon_sym_AMP] = "&",
  [anon_sym_CARET] = "^",
  [anon_sym__] = "_",
  [anon_sym_LBRACE] = "{",
  [anon_sym_RBRACE] = "}",
  [anon_sym_PIPE] = "|",
  [anon_sym_TILDE] = "~",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_BSLASHbgroup] = "\\bgroup",
  [anon_sym_BSLASHegroup] = "\\egroup",
  [sym_command_group_start] = "command_group_start",
  [sym_command_group_stop] = "command_group_stop",
  [sym_math_text] = "math_text",
  [anon_sym_BSLASHstartMPinclusions] = "\\startMPinclusions",
  [anon_sym_BSLASHstartuseMPgraphic] = "\\startuseMPgraphic",
  [anon_sym_BSLASHstartreusableMPgraphic] = "\\startreusableMPgraphic",
  [anon_sym_BSLASHstartMPcode] = "\\startMPcode",
  [anon_sym_BSLASHstartMPpage] = "\\startMPpage",
  [anon_sym_BSLASHstartstaticMPfigure] = "\\startstaticMPfigure",
  [anon_sym_BSLASHstopMPinclusions] = "\\stopMPinclusions",
  [anon_sym_BSLASHstopuseMPgraphic] = "\\stopuseMPgraphic",
  [anon_sym_BSLASHstopreusableMPgraphic] = "\\stopreusableMPgraphic",
  [anon_sym_BSLASHstopMPcode] = "\\stopMPcode",
  [anon_sym_BSLASHstopMPpage] = "\\stopMPpage",
  [anon_sym_BSLASHstopstaticMPfigure] = "\\stopstaticMPfigure",
  [aux_sym_metapost_body_token1] = "metapost_body_token1",
  [anon_sym_BSLASHstarttikzpicture] = "\\starttikzpicture",
  [anon_sym_BSLASHstoptikzpicture] = "\\stoptikzpicture",
  [anon_sym_BSLASHstarttyping] = "\\starttyping",
  [anon_sym_BSLASHstartLUA] = "\\startLUA",
  [anon_sym_BSLASHstartMP] = "\\startMP",
  [anon_sym_BSLASHstartPARSEDXML] = "\\startPARSEDXML",
  [anon_sym_BSLASHstartTEX] = "\\startTEX",
  [anon_sym_BSLASHstartXML] = "\\startXML",
  [anon_sym_BSLASHstartCSS] = "\\startCSS",
  [anon_sym_BSLASHstoptyping] = "\\stoptyping",
  [anon_sym_BSLASHstopLUA] = "\\stopLUA",
  [anon_sym_BSLASHstopMP] = "\\stopMP",
  [anon_sym_BSLASHstopPARSEDXML] = "\\stopPARSEDXML",
  [anon_sym_BSLASHstopTEX] = "\\stopTEX",
  [anon_sym_BSLASHstopXML] = "\\stopXML",
  [anon_sym_BSLASHstopCSS] = "\\stopCSS",
  [anon_sym_BSLASHstartHTML] = "\\startHTML",
  [anon_sym_BSLASHstopHTML] = "\\stopHTML",
  [sym_command_name] = "command_name",
  [sym_command_block_start] = "command_block_start",
  [sym_command_block_stop] = "command_block_stop",
  [anon_sym_COMMA] = ",",
  [sym_keyword] = "keyword",
  [anon_sym_EQ] = "=",
  [anon_sym_title] = "title",
  [aux_sym_title_text_token1] = "title_text_token1",
  [sym_key] = "key",
  [sym_text] = "text",
  [anon_sym_LF] = "\n",
  [anon_sym_CR] = "\r",
  [anon_sym_CR_LF] = "\r\n",
  [sym_command_stop] = "command_stop",
  [sym_document] = "document",
  [sym__content] = "_content",
  [sym_main_start] = "main_start",
  [sym_main_stop] = "main_stop",
  [sym_comment] = "comment",
  [sym_escapechar] = "escapechar",
  [sym_escaped] = "escaped",
  [sym_brace_group_start] = "brace_group_start",
  [sym_brace_group_stop] = "brace_group_stop",
  [sym_brace_group] = "brace_group",
  [sym_command_group] = "command_group",
  [sym_math_group] = "math_group",
  [sym__math_content] = "_math_content",
  [sym_inline_math] = "inline_math",
  [sym_metapost_start] = "metapost_start",
  [sym_metapost_stop] = "metapost_stop",
  [sym_metapost_body] = "metapost_body",
  [sym_metapost_inclusion] = "metapost_inclusion",
  [sym_tikz_start] = "tikz_start",
  [sym_tikz_stop] = "tikz_stop",
  [sym_tikz_body] = "tikz_body",
  [sym_tikz_inclusion] = "tikz_inclusion",
  [sym_typing_start] = "typing_start",
  [sym_typing_stop] = "typing_stop",
  [sym_typing_body] = "typing_body",
  [sym_typing_inclusion] = "typing_inclusion",
  [sym_typing_html_start] = "typing_html_start",
  [sym_typing_html_stop] = "typing_html_stop",
  [sym_typing_html_body] = "typing_html_body",
  [sym_typing_html_inclusion] = "typing_html_inclusion",
  [sym_option_block] = "option_block",
  [sym_settings_block] = "settings_block",
  [sym_setting] = "setting",
  [sym_title_setting] = "title_setting",
  [sym_title_value] = "title_value",
  [sym__title_content] = "_title_content",
  [sym_title_brace_group] = "title_brace_group",
  [sym_title_text] = "title_text",
  [sym_value] = "value",
  [sym__value_content] = "_value_content",
  [sym_value_text] = "value_text",
  [sym_value_brace_group] = "value_brace_group",
  [sym_command] = "command",
  [sym__end_of_line] = "_end_of_line",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_math_group_repeat1] = "math_group_repeat1",
  [aux_sym_option_block_repeat1] = "option_block_repeat1",
  [aux_sym_settings_block_repeat1] = "settings_block_repeat1",
  [aux_sym_title_value_repeat1] = "title_value_repeat1",
  [aux_sym_value_repeat1] = "value_repeat1",
  [aux_sym_command_repeat1] = "command_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BSLASHstarttext] = anon_sym_BSLASHstarttext,
  [anon_sym_BSLASHstartcomponent] = anon_sym_BSLASHstartcomponent,
  [anon_sym_BSLASHstoptext] = anon_sym_BSLASHstoptext,
  [anon_sym_BSLASHstopcomponent] = anon_sym_BSLASHstopcomponent,
  [aux_sym_comment_token1] = aux_sym_comment_token1,
  [anon_sym_POUND] = anon_sym_POUND,
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [anon_sym_PERCENT] = anon_sym_PERCENT,
  [anon_sym_AMP] = anon_sym_AMP,
  [anon_sym_CARET] = anon_sym_CARET,
  [anon_sym__] = anon_sym__,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_PIPE] = anon_sym_PIPE,
  [anon_sym_TILDE] = anon_sym_TILDE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_BSLASHbgroup] = anon_sym_BSLASHbgroup,
  [anon_sym_BSLASHegroup] = anon_sym_BSLASHegroup,
  [sym_command_group_start] = sym_command_group_start,
  [sym_command_group_stop] = sym_command_group_stop,
  [sym_math_text] = sym_math_text,
  [anon_sym_BSLASHstartMPinclusions] = anon_sym_BSLASHstartMPinclusions,
  [anon_sym_BSLASHstartuseMPgraphic] = anon_sym_BSLASHstartuseMPgraphic,
  [anon_sym_BSLASHstartreusableMPgraphic] = anon_sym_BSLASHstartreusableMPgraphic,
  [anon_sym_BSLASHstartMPcode] = anon_sym_BSLASHstartMPcode,
  [anon_sym_BSLASHstartMPpage] = anon_sym_BSLASHstartMPpage,
  [anon_sym_BSLASHstartstaticMPfigure] = anon_sym_BSLASHstartstaticMPfigure,
  [anon_sym_BSLASHstopMPinclusions] = anon_sym_BSLASHstopMPinclusions,
  [anon_sym_BSLASHstopuseMPgraphic] = anon_sym_BSLASHstopuseMPgraphic,
  [anon_sym_BSLASHstopreusableMPgraphic] = anon_sym_BSLASHstopreusableMPgraphic,
  [anon_sym_BSLASHstopMPcode] = anon_sym_BSLASHstopMPcode,
  [anon_sym_BSLASHstopMPpage] = anon_sym_BSLASHstopMPpage,
  [anon_sym_BSLASHstopstaticMPfigure] = anon_sym_BSLASHstopstaticMPfigure,
  [aux_sym_metapost_body_token1] = aux_sym_metapost_body_token1,
  [anon_sym_BSLASHstarttikzpicture] = anon_sym_BSLASHstarttikzpicture,
  [anon_sym_BSLASHstoptikzpicture] = anon_sym_BSLASHstoptikzpicture,
  [anon_sym_BSLASHstarttyping] = anon_sym_BSLASHstarttyping,
  [anon_sym_BSLASHstartLUA] = anon_sym_BSLASHstartLUA,
  [anon_sym_BSLASHstartMP] = anon_sym_BSLASHstartMP,
  [anon_sym_BSLASHstartPARSEDXML] = anon_sym_BSLASHstartPARSEDXML,
  [anon_sym_BSLASHstartTEX] = anon_sym_BSLASHstartTEX,
  [anon_sym_BSLASHstartXML] = anon_sym_BSLASHstartXML,
  [anon_sym_BSLASHstartCSS] = anon_sym_BSLASHstartCSS,
  [anon_sym_BSLASHstoptyping] = anon_sym_BSLASHstoptyping,
  [anon_sym_BSLASHstopLUA] = anon_sym_BSLASHstopLUA,
  [anon_sym_BSLASHstopMP] = anon_sym_BSLASHstopMP,
  [anon_sym_BSLASHstopPARSEDXML] = anon_sym_BSLASHstopPARSEDXML,
  [anon_sym_BSLASHstopTEX] = anon_sym_BSLASHstopTEX,
  [anon_sym_BSLASHstopXML] = anon_sym_BSLASHstopXML,
  [anon_sym_BSLASHstopCSS] = anon_sym_BSLASHstopCSS,
  [anon_sym_BSLASHstartHTML] = anon_sym_BSLASHstartHTML,
  [anon_sym_BSLASHstopHTML] = anon_sym_BSLASHstopHTML,
  [sym_command_name] = sym_command_name,
  [sym_command_block_start] = sym_command_block_start,
  [sym_command_block_stop] = sym_command_block_stop,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_keyword] = sym_keyword,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_title] = anon_sym_title,
  [aux_sym_title_text_token1] = aux_sym_title_text_token1,
  [sym_key] = sym_key,
  [sym_text] = sym_text,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_CR] = anon_sym_CR,
  [anon_sym_CR_LF] = anon_sym_CR_LF,
  [sym_command_stop] = sym_command_stop,
  [sym_document] = sym_document,
  [sym__content] = sym__content,
  [sym_main_start] = sym_main_start,
  [sym_main_stop] = sym_main_stop,
  [sym_comment] = sym_comment,
  [sym_escapechar] = sym_escapechar,
  [sym_escaped] = sym_escaped,
  [sym_brace_group_start] = sym_brace_group_start,
  [sym_brace_group_stop] = sym_brace_group_stop,
  [sym_brace_group] = sym_brace_group,
  [sym_command_group] = sym_command_group,
  [sym_math_group] = sym_math_group,
  [sym__math_content] = sym__math_content,
  [sym_inline_math] = sym_inline_math,
  [sym_metapost_start] = sym_metapost_start,
  [sym_metapost_stop] = sym_metapost_stop,
  [sym_metapost_body] = sym_metapost_body,
  [sym_metapost_inclusion] = sym_metapost_inclusion,
  [sym_tikz_start] = sym_tikz_start,
  [sym_tikz_stop] = sym_tikz_stop,
  [sym_tikz_body] = sym_tikz_body,
  [sym_tikz_inclusion] = sym_tikz_inclusion,
  [sym_typing_start] = sym_typing_start,
  [sym_typing_stop] = sym_typing_stop,
  [sym_typing_body] = sym_typing_body,
  [sym_typing_inclusion] = sym_typing_inclusion,
  [sym_typing_html_start] = sym_typing_html_start,
  [sym_typing_html_stop] = sym_typing_html_stop,
  [sym_typing_html_body] = sym_typing_html_body,
  [sym_typing_html_inclusion] = sym_typing_html_inclusion,
  [sym_option_block] = sym_option_block,
  [sym_settings_block] = sym_settings_block,
  [sym_setting] = sym_setting,
  [sym_title_setting] = sym_title_setting,
  [sym_title_value] = sym_title_value,
  [sym__title_content] = sym__title_content,
  [sym_title_brace_group] = sym_title_brace_group,
  [sym_title_text] = sym_title_text,
  [sym_value] = sym_value,
  [sym__value_content] = sym__value_content,
  [sym_value_text] = sym_value_text,
  [sym_value_brace_group] = sym_value_brace_group,
  [sym_command] = sym_command,
  [sym__end_of_line] = sym__end_of_line,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_math_group_repeat1] = aux_sym_math_group_repeat1,
  [aux_sym_option_block_repeat1] = aux_sym_option_block_repeat1,
  [aux_sym_settings_block_repeat1] = aux_sym_settings_block_repeat1,
  [aux_sym_title_value_repeat1] = aux_sym_title_value_repeat1,
  [aux_sym_value_repeat1] = aux_sym_value_repeat1,
  [aux_sym_command_repeat1] = aux_sym_command_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BSLASHstarttext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartcomponent] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstoptext] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopcomponent] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_POUND] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_AMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CARET] = {
    .visible = true,
    .named = false,
  },
  [anon_sym__] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PIPE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_TILDE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHbgroup] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHegroup] = {
    .visible = true,
    .named = false,
  },
  [sym_command_group_start] = {
    .visible = true,
    .named = true,
  },
  [sym_command_group_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_math_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASHstartMPinclusions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartuseMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartreusableMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartMPcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartMPpage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartstaticMPfigure] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMPinclusions] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopuseMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopreusableMPgraphic] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMPcode] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMPpage] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopstaticMPfigure] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_metapost_body_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASHstarttikzpicture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstoptikzpicture] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstarttyping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartLUA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartPARSEDXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartTEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartCSS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstoptyping] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopLUA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopMP] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopPARSEDXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopTEX] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopXML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopCSS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstartHTML] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BSLASHstopHTML] = {
    .visible = true,
    .named = false,
  },
  [sym_command_name] = {
    .visible = true,
    .named = true,
  },
  [sym_command_block_start] = {
    .visible = true,
    .named = true,
  },
  [sym_command_block_stop] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [sym_keyword] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_title] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_title_text_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_text] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_CR_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_command_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__content] = {
    .visible = false,
    .named = true,
  },
  [sym_main_start] = {
    .visible = true,
    .named = true,
  },
  [sym_main_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_escapechar] = {
    .visible = true,
    .named = true,
  },
  [sym_escaped] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_group_start] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_group_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_brace_group] = {
    .visible = true,
    .named = true,
  },
  [sym_command_group] = {
    .visible = true,
    .named = true,
  },
  [sym_math_group] = {
    .visible = true,
    .named = true,
  },
  [sym__math_content] = {
    .visible = false,
    .named = true,
  },
  [sym_inline_math] = {
    .visible = true,
    .named = true,
  },
  [sym_metapost_start] = {
    .visible = true,
    .named = true,
  },
  [sym_metapost_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_metapost_body] = {
    .visible = true,
    .named = true,
  },
  [sym_metapost_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_start] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_body] = {
    .visible = true,
    .named = true,
  },
  [sym_tikz_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_start] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_body] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_html_start] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_html_stop] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_html_body] = {
    .visible = true,
    .named = true,
  },
  [sym_typing_html_inclusion] = {
    .visible = true,
    .named = true,
  },
  [sym_option_block] = {
    .visible = true,
    .named = true,
  },
  [sym_settings_block] = {
    .visible = true,
    .named = true,
  },
  [sym_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_title_setting] = {
    .visible = true,
    .named = true,
  },
  [sym_title_value] = {
    .visible = true,
    .named = true,
  },
  [sym__title_content] = {
    .visible = false,
    .named = true,
  },
  [sym_title_brace_group] = {
    .visible = true,
    .named = true,
  },
  [sym_title_text] = {
    .visible = true,
    .named = true,
  },
  [sym_value] = {
    .visible = true,
    .named = true,
  },
  [sym__value_content] = {
    .visible = false,
    .named = true,
  },
  [sym_value_text] = {
    .visible = true,
    .named = true,
  },
  [sym_value_brace_group] = {
    .visible = true,
    .named = true,
  },
  [sym_command] = {
    .visible = true,
    .named = true,
  },
  [sym__end_of_line] = {
    .visible = false,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_math_group_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_option_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_settings_block_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_title_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_value_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_command_repeat1] = {
    .visible = false,
    .named = false,
  },
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(0)
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(336);
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(254);
      if (lookahead == '&') ADVANCE(255);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '=') ADVANCE(322);
      if (lookahead == '[') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(263);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '_') ADVANCE(257);
      if (lookahead == 't') ADVANCE(307);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '|') ADVANCE(260);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead == '~') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 1:
      if (lookahead == 'A') ADVANCE(41);
      END_STATE();
    case 2:
      if (lookahead == 'A') ADVANCE(291);
      END_STATE();
    case 3:
      if (lookahead == 'A') ADVANCE(298);
      END_STATE();
    case 4:
      if (lookahead == 'A') ADVANCE(42);
      END_STATE();
    case 5:
      if (lookahead == 'C') ADVANCE(45);
      if (lookahead == 'H') ADVANCE(49);
      if (lookahead == 'L') ADVANCE(51);
      if (lookahead == 'M') ADVANCE(32);
      if (lookahead == 'P') ADVANCE(1);
      if (lookahead == 'T') ADVANCE(9);
      if (lookahead == 'X') ADVANCE(19);
      if (lookahead == 'c') ADVANCE(166);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(206);
      if (lookahead == 't') ADVANCE(98);
      if (lookahead == 'u') ADVANCE(196);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(270);
      END_STATE();
    case 6:
      if (lookahead == 'C') ADVANCE(47);
      if (lookahead == 'H') ADVANCE(50);
      if (lookahead == 'L') ADVANCE(52);
      if (lookahead == 'M') ADVANCE(34);
      if (lookahead == 'P') ADVANCE(4);
      if (lookahead == 'T') ADVANCE(11);
      if (lookahead == 'X') ADVANCE(24);
      if (lookahead == 't') ADVANCE(136);
      END_STATE();
    case 7:
      if (lookahead == 'D') ADVANCE(55);
      END_STATE();
    case 8:
      if (lookahead == 'D') ADVANCE(56);
      END_STATE();
    case 9:
      if (lookahead == 'E') ADVANCE(53);
      END_STATE();
    case 10:
      if (lookahead == 'E') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == 'E') ADVANCE(54);
      END_STATE();
    case 12:
      if (lookahead == 'E') ADVANCE(8);
      END_STATE();
    case 13:
      if (lookahead == 'L') ADVANCE(295);
      END_STATE();
    case 14:
      if (lookahead == 'L') ADVANCE(304);
      END_STATE();
    case 15:
      if (lookahead == 'L') ADVANCE(293);
      END_STATE();
    case 16:
      if (lookahead == 'L') ADVANCE(302);
      END_STATE();
    case 17:
      if (lookahead == 'L') ADVANCE(305);
      END_STATE();
    case 18:
      if (lookahead == 'L') ADVANCE(300);
      END_STATE();
    case 19:
      if (lookahead == 'M') ADVANCE(13);
      END_STATE();
    case 20:
      if (lookahead == 'M') ADVANCE(36);
      END_STATE();
    case 21:
      if (lookahead == 'M') ADVANCE(14);
      END_STATE();
    case 22:
      if (lookahead == 'M') ADVANCE(33);
      END_STATE();
    case 23:
      if (lookahead == 'M') ADVANCE(15);
      END_STATE();
    case 24:
      if (lookahead == 'M') ADVANCE(16);
      END_STATE();
    case 25:
      if (lookahead == 'M') ADVANCE(35);
      if (lookahead == 'r') ADVANCE(103);
      if (lookahead == 's') ADVANCE(218);
      if (lookahead == 'u') ADVANCE(202);
      END_STATE();
    case 26:
      if (lookahead == 'M') ADVANCE(17);
      END_STATE();
    case 27:
      if (lookahead == 'M') ADVANCE(18);
      END_STATE();
    case 28:
      if (lookahead == 'M') ADVANCE(37);
      END_STATE();
    case 29:
      if (lookahead == 'M') ADVANCE(38);
      END_STATE();
    case 30:
      if (lookahead == 'M') ADVANCE(39);
      END_STATE();
    case 31:
      if (lookahead == 'M') ADVANCE(40);
      END_STATE();
    case 32:
      if (lookahead == 'P') ADVANCE(292);
      END_STATE();
    case 33:
      if (lookahead == 'P') ADVANCE(104);
      END_STATE();
    case 34:
      if (lookahead == 'P') ADVANCE(299);
      END_STATE();
    case 35:
      if (lookahead == 'P') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == 'P') ADVANCE(109);
      END_STATE();
    case 37:
      if (lookahead == 'P') ADVANCE(105);
      END_STATE();
    case 38:
      if (lookahead == 'P') ADVANCE(115);
      END_STATE();
    case 39:
      if (lookahead == 'P') ADVANCE(116);
      END_STATE();
    case 40:
      if (lookahead == 'P') ADVANCE(117);
      END_STATE();
    case 41:
      if (lookahead == 'R') ADVANCE(46);
      END_STATE();
    case 42:
      if (lookahead == 'R') ADVANCE(48);
      END_STATE();
    case 43:
      if (lookahead == 'S') ADVANCE(296);
      END_STATE();
    case 44:
      if (lookahead == 'S') ADVANCE(303);
      END_STATE();
    case 45:
      if (lookahead == 'S') ADVANCE(43);
      END_STATE();
    case 46:
      if (lookahead == 'S') ADVANCE(10);
      END_STATE();
    case 47:
      if (lookahead == 'S') ADVANCE(44);
      END_STATE();
    case 48:
      if (lookahead == 'S') ADVANCE(12);
      END_STATE();
    case 49:
      if (lookahead == 'T') ADVANCE(21);
      END_STATE();
    case 50:
      if (lookahead == 'T') ADVANCE(26);
      END_STATE();
    case 51:
      if (lookahead == 'U') ADVANCE(2);
      END_STATE();
    case 52:
      if (lookahead == 'U') ADVANCE(3);
      END_STATE();
    case 53:
      if (lookahead == 'X') ADVANCE(294);
      END_STATE();
    case 54:
      if (lookahead == 'X') ADVANCE(301);
      END_STATE();
    case 55:
      if (lookahead == 'X') ADVANCE(23);
      END_STATE();
    case 56:
      if (lookahead == 'X') ADVANCE(27);
      END_STATE();
    case 57:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 58:
      if (lookahead == 'a') ADVANCE(110);
      END_STATE();
    case 59:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(167);
      END_STATE();
    case 60:
      if (lookahead == 'a') ADVANCE(184);
      if (lookahead == 'o') ADVANCE(172);
      END_STATE();
    case 61:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 62:
      if (lookahead == 'a') ADVANCE(171);
      END_STATE();
    case 63:
      if (lookahead == 'a') ADVANCE(111);
      END_STATE();
    case 64:
      if (lookahead == 'a') ADVANCE(178);
      END_STATE();
    case 65:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 66:
      if (lookahead == 'a') ADVANCE(181);
      END_STATE();
    case 67:
      if (lookahead == 'a') ADVANCE(217);
      END_STATE();
    case 68:
      if (lookahead == 'a') ADVANCE(70);
      END_STATE();
    case 69:
      if (lookahead == 'b') ADVANCE(141);
      END_STATE();
    case 70:
      if (lookahead == 'b') ADVANCE(142);
      END_STATE();
    case 71:
      if (lookahead == 'c') ADVANCE(139);
      END_STATE();
    case 72:
      if (lookahead == 'c') ADVANCE(275);
      END_STATE();
    case 73:
      if (lookahead == 'c') ADVANCE(276);
      END_STATE();
    case 74:
      if (lookahead == 'c') ADVANCE(281);
      END_STATE();
    case 75:
      if (lookahead == 'c') ADVANCE(282);
      END_STATE();
    case 76:
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 't') ADVANCE(86);
      END_STATE();
    case 77:
      if (lookahead == 'c') ADVANCE(156);
      if (lookahead == 't') ADVANCE(86);
      if (lookahead != 0 &&
          (lookahead < 'A' || 'Z' < lookahead) &&
          (lookahead < 'a' || 'z' < lookahead)) ADVANCE(271);
      END_STATE();
    case 78:
      if (lookahead == 'c') ADVANCE(22);
      END_STATE();
    case 79:
      if (lookahead == 'c') ADVANCE(212);
      END_STATE();
    case 80:
      if (lookahead == 'c') ADVANCE(164);
      if (lookahead == 'i') ADVANCE(154);
      if (lookahead == 'p') ADVANCE(63);
      END_STATE();
    case 81:
      if (lookahead == 'c') ADVANCE(216);
      END_STATE();
    case 82:
      if (lookahead == 'c') ADVANCE(140);
      END_STATE();
    case 83:
      if (lookahead == 'c') ADVANCE(28);
      END_STATE();
    case 84:
      if (lookahead == 'd') ADVANCE(87);
      END_STATE();
    case 85:
      if (lookahead == 'd') ADVANCE(92);
      END_STATE();
    case 86:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 87:
      if (lookahead == 'e') ADVANCE(277);
      END_STATE();
    case 88:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 89:
      if (lookahead == 'e') ADVANCE(288);
      END_STATE();
    case 90:
      if (lookahead == 'e') ADVANCE(279);
      END_STATE();
    case 91:
      if (lookahead == 'e') ADVANCE(289);
      END_STATE();
    case 92:
      if (lookahead == 'e') ADVANCE(283);
      END_STATE();
    case 93:
      if (lookahead == 'e') ADVANCE(284);
      END_STATE();
    case 94:
      if (lookahead == 'e') ADVANCE(285);
      END_STATE();
    case 95:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 96:
      if (lookahead == 'e') ADVANCE(20);
      END_STATE();
    case 97:
      if (lookahead == 'e') ADVANCE(151);
      END_STATE();
    case 98:
      if (lookahead == 'e') ADVANCE(230);
      if (lookahead == 'i') ADVANCE(137);
      if (lookahead == 'y') ADVANCE(170);
      END_STATE();
    case 99:
      if (lookahead == 'e') ADVANCE(152);
      END_STATE();
    case 100:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 101:
      if (lookahead == 'e') ADVANCE(30);
      END_STATE();
    case 102:
      if (lookahead == 'e') ADVANCE(31);
      END_STATE();
    case 103:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 104:
      if (lookahead == 'f') ADVANCE(125);
      END_STATE();
    case 105:
      if (lookahead == 'f') ADVANCE(134);
      END_STATE();
    case 106:
      if (lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 107:
      if (lookahead == 'g') ADVANCE(290);
      END_STATE();
    case 108:
      if (lookahead == 'g') ADVANCE(297);
      END_STATE();
    case 109:
      if (lookahead == 'g') ADVANCE(185);
      END_STATE();
    case 110:
      if (lookahead == 'g') ADVANCE(88);
      END_STATE();
    case 111:
      if (lookahead == 'g') ADVANCE(93);
      END_STATE();
    case 112:
      if (lookahead == 'g') ADVANCE(224);
      END_STATE();
    case 113:
      if (lookahead == 'g') ADVANCE(226);
      END_STATE();
    case 114:
      if (lookahead == 'g') ADVANCE(190);
      END_STATE();
    case 115:
      if (lookahead == 'g') ADVANCE(191);
      END_STATE();
    case 116:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 117:
      if (lookahead == 'g') ADVANCE(193);
      END_STATE();
    case 118:
      if (lookahead == 'h') ADVANCE(126);
      END_STATE();
    case 119:
      if (lookahead == 'h') ADVANCE(128);
      END_STATE();
    case 120:
      if (lookahead == 'h') ADVANCE(129);
      END_STATE();
    case 121:
      if (lookahead == 'h') ADVANCE(130);
      END_STATE();
    case 122:
      if (lookahead == 'i') ADVANCE(146);
      END_STATE();
    case 123:
      if (lookahead == 'i') ADVANCE(78);
      END_STATE();
    case 124:
      if (lookahead == 'i') ADVANCE(79);
      END_STATE();
    case 125:
      if (lookahead == 'i') ADVANCE(112);
      END_STATE();
    case 126:
      if (lookahead == 'i') ADVANCE(72);
      END_STATE();
    case 127:
      if (lookahead == 'i') ADVANCE(159);
      END_STATE();
    case 128:
      if (lookahead == 'i') ADVANCE(73);
      END_STATE();
    case 129:
      if (lookahead == 'i') ADVANCE(74);
      END_STATE();
    case 130:
      if (lookahead == 'i') ADVANCE(75);
      END_STATE();
    case 131:
      if (lookahead == 'i') ADVANCE(148);
      END_STATE();
    case 132:
      if (lookahead == 'i') ADVANCE(160);
      END_STATE();
    case 133:
      if (lookahead == 'i') ADVANCE(81);
      END_STATE();
    case 134:
      if (lookahead == 'i') ADVANCE(113);
      END_STATE();
    case 135:
      if (lookahead == 'i') ADVANCE(83);
      END_STATE();
    case 136:
      if (lookahead == 'i') ADVANCE(138);
      if (lookahead == 'y') ADVANCE(177);
      END_STATE();
    case 137:
      if (lookahead == 'k') ADVANCE(231);
      END_STATE();
    case 138:
      if (lookahead == 'k') ADVANCE(232);
      END_STATE();
    case 139:
      if (lookahead == 'l') ADVANCE(222);
      END_STATE();
    case 140:
      if (lookahead == 'l') ADVANCE(227);
      END_STATE();
    case 141:
      if (lookahead == 'l') ADVANCE(100);
      END_STATE();
    case 142:
      if (lookahead == 'l') ADVANCE(102);
      END_STATE();
    case 143:
      if (lookahead == 'm') ADVANCE(175);
      END_STATE();
    case 144:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 145:
      if (lookahead == 'n') ADVANCE(71);
      END_STATE();
    case 146:
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 147:
      if (lookahead == 'n') ADVANCE(194);
      END_STATE();
    case 148:
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 149:
      if (lookahead == 'n') ADVANCE(97);
      END_STATE();
    case 150:
      if (lookahead == 'n') ADVANCE(195);
      END_STATE();
    case 151:
      if (lookahead == 'n') ADVANCE(209);
      END_STATE();
    case 152:
      if (lookahead == 'n') ADVANCE(210);
      END_STATE();
    case 153:
      if (lookahead == 'n') ADVANCE(99);
      END_STATE();
    case 154:
      if (lookahead == 'n') ADVANCE(82);
      END_STATE();
    case 155:
      if (lookahead == 'o') ADVANCE(219);
      END_STATE();
    case 156:
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 157:
      if (lookahead == 'o') ADVANCE(84);
      END_STATE();
    case 158:
      if (lookahead == 'o') ADVANCE(149);
      END_STATE();
    case 159:
      if (lookahead == 'o') ADVANCE(147);
      END_STATE();
    case 160:
      if (lookahead == 'o') ADVANCE(150);
      END_STATE();
    case 161:
      if (lookahead == 'o') ADVANCE(173);
      END_STATE();
    case 162:
      if (lookahead == 'o') ADVANCE(174);
      END_STATE();
    case 163:
      if (lookahead == 'o') ADVANCE(221);
      END_STATE();
    case 164:
      if (lookahead == 'o') ADVANCE(85);
      END_STATE();
    case 165:
      if (lookahead == 'o') ADVANCE(153);
      END_STATE();
    case 166:
      if (lookahead == 'o') ADVANCE(144);
      END_STATE();
    case 167:
      if (lookahead == 'p') ADVANCE(77);
      END_STATE();
    case 168:
      if (lookahead == 'p') ADVANCE(268);
      END_STATE();
    case 169:
      if (lookahead == 'p') ADVANCE(269);
      END_STATE();
    case 170:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 171:
      if (lookahead == 'p') ADVANCE(118);
      END_STATE();
    case 172:
      if (lookahead == 'p') ADVANCE(76);
      END_STATE();
    case 173:
      if (lookahead == 'p') ADVANCE(6);
      END_STATE();
    case 174:
      if (lookahead == 'p') ADVANCE(25);
      END_STATE();
    case 175:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 176:
      if (lookahead == 'p') ADVANCE(124);
      END_STATE();
    case 177:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 178:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 179:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 180:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 181:
      if (lookahead == 'p') ADVANCE(121);
      END_STATE();
    case 182:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 183:
      if (lookahead == 'r') ADVANCE(155);
      END_STATE();
    case 184:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 185:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 186:
      if (lookahead == 'r') ADVANCE(89);
      END_STATE();
    case 187:
      if (lookahead == 'r') ADVANCE(90);
      END_STATE();
    case 188:
      if (lookahead == 'r') ADVANCE(91);
      END_STATE();
    case 189:
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 190:
      if (lookahead == 'r') ADVANCE(163);
      END_STATE();
    case 191:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 192:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 193:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 194:
      if (lookahead == 's') ADVANCE(274);
      END_STATE();
    case 195:
      if (lookahead == 's') ADVANCE(280);
      END_STATE();
    case 196:
      if (lookahead == 's') ADVANCE(96);
      END_STATE();
    case 197:
      if (lookahead == 's') ADVANCE(57);
      END_STATE();
    case 198:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 199:
      if (lookahead == 's') ADVANCE(213);
      END_STATE();
    case 200:
      if (lookahead == 's') ADVANCE(215);
      END_STATE();
    case 201:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 202:
      if (lookahead == 's') ADVANCE(101);
      END_STATE();
    case 203:
      if (lookahead == 's') ADVANCE(68);
      END_STATE();
    case 204:
      if (lookahead == 't') ADVANCE(59);
      END_STATE();
    case 205:
      if (lookahead == 't') ADVANCE(5);
      END_STATE();
    case 206:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 207:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 208:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 209:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 210:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 211:
      if (lookahead == 't') ADVANCE(123);
      END_STATE();
    case 212:
      if (lookahead == 't') ADVANCE(223);
      END_STATE();
    case 213:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 214:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 215:
      if (lookahead == 't') ADVANCE(162);
      END_STATE();
    case 216:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 217:
      if (lookahead == 't') ADVANCE(135);
      END_STATE();
    case 218:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 219:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 220:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 221:
      if (lookahead == 'u') ADVANCE(169);
      END_STATE();
    case 222:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 223:
      if (lookahead == 'u') ADVANCE(186);
      END_STATE();
    case 224:
      if (lookahead == 'u') ADVANCE(187);
      END_STATE();
    case 225:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 226:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 227:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 228:
      if (lookahead == 'u') ADVANCE(203);
      END_STATE();
    case 229:
      if (lookahead == 'x') ADVANCE(207);
      END_STATE();
    case 230:
      if (lookahead == 'x') ADVANCE(208);
      END_STATE();
    case 231:
      if (lookahead == 'z') ADVANCE(176);
      END_STATE();
    case 232:
      if (lookahead == 'z') ADVANCE(182);
      END_STATE();
    case 233:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(265);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(333);
      END_STATE();
    case 234:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(264);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(333);
      END_STATE();
    case 235:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(235)
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(336);
      if (lookahead == '%') ADVANCE(249);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead != 0 &&
          lookahead != '[') ADVANCE(326);
      END_STATE();
    case 236:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(236)
      if (lookahead == '#') ADVANCE(252);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(254);
      if (lookahead == '&') ADVANCE(255);
      if (lookahead == '\\') ADVANCE(262);
      if (lookahead == '^') ADVANCE(256);
      if (lookahead == '_') ADVANCE(257);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '|') ADVANCE(260);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead == '~') ADVANCE(261);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 237:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(237)
      if (lookahead == '\n') ADVANCE(334);
      if (lookahead == '\r') ADVANCE(336);
      if (lookahead == '%') ADVANCE(251);
      if (lookahead == '[') ADVANCE(311);
      if (lookahead == '\\') ADVANCE(199);
      END_STATE();
    case 238:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead == '}') ADVANCE(259);
      if (lookahead != 0) ADVANCE(273);
      END_STATE();
    case 239:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(239)
      if (lookahead == '\\') ADVANCE(200);
      END_STATE();
    case 240:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == ',') ADVANCE(313);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(320);
      END_STATE();
    case 241:
      if (lookahead == '\t' ||
          lookahead == ' ') SKIP(241)
      if (lookahead == ']') ADVANCE(312);
      if (lookahead == 't') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(331);
      END_STATE();
    case 242:
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == ']') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[') ADVANCE(321);
      END_STATE();
    case 243:
      if (eof) ADVANCE(244);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead == '$') ADVANCE(253);
      if (lookahead == '%') ADVANCE(251);
      if (lookahead == '\\') ADVANCE(266);
      if (lookahead == '{') ADVANCE(258);
      if (lookahead != 0 &&
          lookahead != '&' &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '|' || '~' < lookahead)) ADVANCE(333);
      END_STATE();
    case 244:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 245:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttext);
      END_STATE();
    case 246:
      ACCEPT_TOKEN(anon_sym_BSLASHstartcomponent);
      END_STATE();
    case 247:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptext);
      END_STATE();
    case 248:
      ACCEPT_TOKEN(anon_sym_BSLASHstopcomponent);
      END_STATE();
    case 249:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(326);
      if (lookahead == ',' ||
          ('[' <= lookahead && lookahead <= ']') ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(251);
      if (lookahead != 0) ADVANCE(249);
      END_STATE();
    case 250:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead == '\n') ADVANCE(273);
      if (lookahead == '$' ||
          lookahead == '{' ||
          lookahead == '}') ADVANCE(251);
      if (lookahead != 0) ADVANCE(250);
      END_STATE();
    case 251:
      ACCEPT_TOKEN(aux_sym_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(251);
      END_STATE();
    case 252:
      ACCEPT_TOKEN(anon_sym_POUND);
      END_STATE();
    case 253:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 254:
      ACCEPT_TOKEN(anon_sym_PERCENT);
      END_STATE();
    case 255:
      ACCEPT_TOKEN(anon_sym_AMP);
      END_STATE();
    case 256:
      ACCEPT_TOKEN(anon_sym_CARET);
      END_STATE();
    case 257:
      ACCEPT_TOKEN(anon_sym__);
      END_STATE();
    case 258:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 259:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 260:
      ACCEPT_TOKEN(anon_sym_PIPE);
      END_STATE();
    case 261:
      ACCEPT_TOKEN(anon_sym_TILDE);
      END_STATE();
    case 262:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 263:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 264:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(114);
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 265:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 's') ADVANCE(204);
      END_STATE();
    case 266:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead == 'b') ADVANCE(106);
      if (lookahead == 's') ADVANCE(214);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(273);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(anon_sym_BSLASHbgroup);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(anon_sym_BSLASHegroup);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_command_group_start);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_command_group_stop);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(272);
      if (lookahead == '%') ADVANCE(250);
      if (lookahead == '\\') ADVANCE(267);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(273);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(sym_math_text);
      if (lookahead != 0 &&
          lookahead != '$' &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(273);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPinclusions);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(anon_sym_BSLASHstartuseMPgraphic);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_BSLASHstartreusableMPgraphic);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPcode);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMPpage);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_BSLASHstartstaticMPfigure);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPinclusions);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(anon_sym_BSLASHstopuseMPgraphic);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(anon_sym_BSLASHstopreusableMPgraphic);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPcode);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMPpage);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_BSLASHstopstaticMPfigure);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(286);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(287);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(aux_sym_metapost_body_token1);
      if (lookahead != 0 &&
          lookahead != '\\') ADVANCE(287);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttikzpicture);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptikzpicture);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(anon_sym_BSLASHstarttyping);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_BSLASHstartLUA);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_BSLASHstartMP);
      if (lookahead == 'c') ADVANCE(157);
      if (lookahead == 'i') ADVANCE(145);
      if (lookahead == 'p') ADVANCE(58);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_BSLASHstartPARSEDXML);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_BSLASHstartTEX);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_BSLASHstartXML);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_BSLASHstartCSS);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_BSLASHstoptyping);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_BSLASHstopLUA);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_BSLASHstopMP);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_BSLASHstopPARSEDXML);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_BSLASHstopTEX);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_BSLASHstopXML);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_BSLASHstopCSS);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_BSLASHstartHTML);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(anon_sym_BSLASHstopHTML);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'e') ADVANCE(324);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'i') ADVANCE(309);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 'l') ADVANCE(306);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_command_name);
      if (lookahead == 't') ADVANCE(308);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_command_name);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_command_block_start);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_command_block_stop);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'e') ADVANCE(323);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(320);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'i') ADVANCE(317);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(320);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 'l') ADVANCE(314);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(320);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == 't') ADVANCE(316);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(320);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == 't') ADVANCE(315);
      if (lookahead == '\n' ||
          lookahead == '\r') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(320);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(321);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(320);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_keyword);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(321);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(320);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_title);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(310);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_title);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(331);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_title_text_token1);
      if (lookahead != 0 &&
          lookahead != ',' &&
          (lookahead < '[' || ']' < lookahead) &&
          lookahead != '{' &&
          lookahead != '}') ADVANCE(326);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'e') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(331);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'i') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(331);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(331);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_key);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(331);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_key);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != ' ' &&
          lookahead != ',' &&
          lookahead != '=' &&
          lookahead != '[' &&
          lookahead != ']') ADVANCE(331);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_text);
      if (lookahead == '\t' ||
          lookahead == ' ') ADVANCE(332);
      if (lookahead == '\n') ADVANCE(335);
      if (lookahead == '\r') ADVANCE(337);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(333);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_text);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(333);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(333);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(338);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(anon_sym_CR);
      if (lookahead == '\n') ADVANCE(339);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(333);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_CR_LF);
      if (lookahead != 0 &&
          (lookahead < '$' || '&' < lookahead) &&
          (lookahead < '[' || '_' < lookahead) &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(333);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0, .external_lex_state = 1},
  [1] = {.lex_state = 243},
  [2] = {.lex_state = 234},
  [3] = {.lex_state = 234},
  [4] = {.lex_state = 234},
  [5] = {.lex_state = 234},
  [6] = {.lex_state = 234},
  [7] = {.lex_state = 234},
  [8] = {.lex_state = 234},
  [9] = {.lex_state = 243},
  [10] = {.lex_state = 233},
  [11] = {.lex_state = 233},
  [12] = {.lex_state = 233},
  [13] = {.lex_state = 243},
  [14] = {.lex_state = 233},
  [15] = {.lex_state = 233},
  [16] = {.lex_state = 233},
  [17] = {.lex_state = 233},
  [18] = {.lex_state = 234},
  [19] = {.lex_state = 234},
  [20] = {.lex_state = 234},
  [21] = {.lex_state = 234},
  [22] = {.lex_state = 234},
  [23] = {.lex_state = 234},
  [24] = {.lex_state = 234},
  [25] = {.lex_state = 234},
  [26] = {.lex_state = 234},
  [27] = {.lex_state = 234},
  [28] = {.lex_state = 234},
  [29] = {.lex_state = 234},
  [30] = {.lex_state = 234},
  [31] = {.lex_state = 234},
  [32] = {.lex_state = 234},
  [33] = {.lex_state = 234},
  [34] = {.lex_state = 234},
  [35] = {.lex_state = 234},
  [36] = {.lex_state = 234},
  [37] = {.lex_state = 234},
  [38] = {.lex_state = 234},
  [39] = {.lex_state = 234},
  [40] = {.lex_state = 243},
  [41] = {.lex_state = 233},
  [42] = {.lex_state = 233},
  [43] = {.lex_state = 243},
  [44] = {.lex_state = 233},
  [45] = {.lex_state = 243},
  [46] = {.lex_state = 233},
  [47] = {.lex_state = 233},
  [48] = {.lex_state = 243},
  [49] = {.lex_state = 243},
  [50] = {.lex_state = 243},
  [51] = {.lex_state = 243},
  [52] = {.lex_state = 243},
  [53] = {.lex_state = 243},
  [54] = {.lex_state = 243},
  [55] = {.lex_state = 243},
  [56] = {.lex_state = 243},
  [57] = {.lex_state = 233},
  [58] = {.lex_state = 233},
  [59] = {.lex_state = 243},
  [60] = {.lex_state = 233},
  [61] = {.lex_state = 243},
  [62] = {.lex_state = 233},
  [63] = {.lex_state = 233},
  [64] = {.lex_state = 243},
  [65] = {.lex_state = 233},
  [66] = {.lex_state = 233},
  [67] = {.lex_state = 233},
  [68] = {.lex_state = 233},
  [69] = {.lex_state = 243},
  [70] = {.lex_state = 233},
  [71] = {.lex_state = 233},
  [72] = {.lex_state = 243},
  [73] = {.lex_state = 233},
  [74] = {.lex_state = 243},
  [75] = {.lex_state = 243},
  [76] = {.lex_state = 243},
  [77] = {.lex_state = 243},
  [78] = {.lex_state = 233},
  [79] = {.lex_state = 233},
  [80] = {.lex_state = 233},
  [81] = {.lex_state = 233},
  [82] = {.lex_state = 235},
  [83] = {.lex_state = 235},
  [84] = {.lex_state = 235},
  [85] = {.lex_state = 235},
  [86] = {.lex_state = 235},
  [87] = {.lex_state = 235},
  [88] = {.lex_state = 235},
  [89] = {.lex_state = 235},
  [90] = {.lex_state = 235},
  [91] = {.lex_state = 235},
  [92] = {.lex_state = 236},
  [93] = {.lex_state = 236},
  [94] = {.lex_state = 236},
  [95] = {.lex_state = 236},
  [96] = {.lex_state = 236},
  [97] = {.lex_state = 237, .external_lex_state = 1},
  [98] = {.lex_state = 237, .external_lex_state = 1},
  [99] = {.lex_state = 237, .external_lex_state = 1},
  [100] = {.lex_state = 237, .external_lex_state = 1},
  [101] = {.lex_state = 237, .external_lex_state = 1},
  [102] = {.lex_state = 237, .external_lex_state = 1},
  [103] = {.lex_state = 237, .external_lex_state = 1},
  [104] = {.lex_state = 237, .external_lex_state = 1},
  [105] = {.lex_state = 238},
  [106] = {.lex_state = 237, .external_lex_state = 1},
  [107] = {.lex_state = 235},
  [108] = {.lex_state = 235},
  [109] = {.lex_state = 238},
  [110] = {.lex_state = 238},
  [111] = {.lex_state = 235},
  [112] = {.lex_state = 235},
  [113] = {.lex_state = 238},
  [114] = {.lex_state = 235},
  [115] = {.lex_state = 235},
  [116] = {.lex_state = 238},
  [117] = {.lex_state = 235},
  [118] = {.lex_state = 235},
  [119] = {.lex_state = 235},
  [120] = {.lex_state = 235},
  [121] = {.lex_state = 235},
  [122] = {.lex_state = 238},
  [123] = {.lex_state = 238},
  [124] = {.lex_state = 238},
  [125] = {.lex_state = 238},
  [126] = {.lex_state = 237},
  [127] = {.lex_state = 237},
  [128] = {.lex_state = 237},
  [129] = {.lex_state = 239},
  [130] = {.lex_state = 239},
  [131] = {.lex_state = 239},
  [132] = {.lex_state = 240},
  [133] = {.lex_state = 237},
  [134] = {.lex_state = 238},
  [135] = {.lex_state = 237, .external_lex_state = 1},
  [136] = {.lex_state = 238},
  [137] = {.lex_state = 239},
  [138] = {.lex_state = 237, .external_lex_state = 1},
  [139] = {.lex_state = 238},
  [140] = {.lex_state = 238},
  [141] = {.lex_state = 237, .external_lex_state = 1},
  [142] = {.lex_state = 237, .external_lex_state = 1},
  [143] = {.lex_state = 237, .external_lex_state = 1},
  [144] = {.lex_state = 237, .external_lex_state = 1},
  [145] = {.lex_state = 238},
  [146] = {.lex_state = 237, .external_lex_state = 1},
  [147] = {.lex_state = 237, .external_lex_state = 1},
  [148] = {.lex_state = 237, .external_lex_state = 1},
  [149] = {.lex_state = 241},
  [150] = {.lex_state = 241},
  [151] = {.lex_state = 241},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 237},
  [159] = {.lex_state = 286},
  [160] = {.lex_state = 286},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 242},
  [163] = {.lex_state = 286},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 237},
  [166] = {.lex_state = 286},
  [167] = {.lex_state = 237},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 286},
  [170] = {.lex_state = 242},
  [171] = {.lex_state = 286},
  [172] = {.lex_state = 286},
  [173] = {.lex_state = 286},
  [174] = {.lex_state = 286},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 237},
  [177] = {.lex_state = 286},
  [178] = {.lex_state = 237},
  [179] = {.lex_state = 237},
  [180] = {.lex_state = 286},
  [181] = {.lex_state = 286},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 286},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 242},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 286},
  [189] = {.lex_state = 286},
  [190] = {.lex_state = 237},
  [191] = {.lex_state = 237},
  [192] = {.lex_state = 286},
};

enum {
  ts_external_token_command_stop = 0,
};

static const TSSymbol ts_external_scanner_symbol_map[EXTERNAL_TOKEN_COUNT] = {
  [ts_external_token_command_stop] = sym_command_stop,
};

static const bool ts_external_scanner_states[2][EXTERNAL_TOKEN_COUNT] = {
  [1] = {
    [ts_external_token_command_stop] = true,
  },
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BSLASHstarttext] = ACTIONS(1),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(1),
    [anon_sym_BSLASHstoptext] = ACTIONS(1),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(1),
    [anon_sym_POUND] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_PERCENT] = ACTIONS(1),
    [anon_sym_AMP] = ACTIONS(1),
    [anon_sym_CARET] = ACTIONS(1),
    [anon_sym__] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_PIPE] = ACTIONS(1),
    [anon_sym_TILDE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_BSLASHbgroup] = ACTIONS(1),
    [anon_sym_BSLASHegroup] = ACTIONS(1),
    [sym_command_group_start] = ACTIONS(1),
    [sym_command_group_stop] = ACTIONS(1),
    [anon_sym_BSLASHstartMPinclusions] = ACTIONS(1),
    [anon_sym_BSLASHstartuseMPgraphic] = ACTIONS(1),
    [anon_sym_BSLASHstartreusableMPgraphic] = ACTIONS(1),
    [anon_sym_BSLASHstartMPcode] = ACTIONS(1),
    [anon_sym_BSLASHstartMPpage] = ACTIONS(1),
    [anon_sym_BSLASHstartstaticMPfigure] = ACTIONS(1),
    [anon_sym_BSLASHstarttikzpicture] = ACTIONS(1),
    [anon_sym_BSLASHstarttyping] = ACTIONS(1),
    [anon_sym_BSLASHstartLUA] = ACTIONS(1),
    [anon_sym_BSLASHstartMP] = ACTIONS(1),
    [anon_sym_BSLASHstartPARSEDXML] = ACTIONS(1),
    [anon_sym_BSLASHstartTEX] = ACTIONS(1),
    [anon_sym_BSLASHstartXML] = ACTIONS(1),
    [anon_sym_BSLASHstartCSS] = ACTIONS(1),
    [anon_sym_BSLASHstartHTML] = ACTIONS(1),
    [sym_command_name] = ACTIONS(1),
    [sym_command_block_start] = ACTIONS(1),
    [sym_command_block_stop] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [anon_sym_title] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_CR] = ACTIONS(1),
    [anon_sym_CR_LF] = ACTIONS(1),
    [sym_command_stop] = ACTIONS(1),
  },
  [1] = {
    [sym_document] = STATE(184),
    [sym__content] = STATE(9),
    [sym_main_start] = STATE(9),
    [sym_main_stop] = STATE(9),
    [sym_comment] = STATE(9),
    [sym_escaped] = STATE(9),
    [sym_brace_group_start] = STATE(6),
    [sym_brace_group] = STATE(9),
    [sym_command_group] = STATE(9),
    [sym_inline_math] = STATE(9),
    [sym_metapost_start] = STATE(159),
    [sym_metapost_inclusion] = STATE(9),
    [sym_tikz_start] = STATE(177),
    [sym_tikz_inclusion] = STATE(9),
    [sym_typing_start] = STATE(180),
    [sym_typing_inclusion] = STATE(9),
    [sym_typing_html_start] = STATE(181),
    [sym_typing_html_inclusion] = STATE(9),
    [sym_command] = STATE(9),
    [sym__end_of_line] = STATE(9),
    [aux_sym_document_repeat1] = STATE(9),
    [anon_sym_BSLASHstarttext] = ACTIONS(3),
    [anon_sym_BSLASHstartcomponent] = ACTIONS(3),
    [anon_sym_BSLASHstoptext] = ACTIONS(5),
    [anon_sym_BSLASHstopcomponent] = ACTIONS(5),
    [aux_sym_comment_token1] = ACTIONS(7),
    [anon_sym_DOLLAR] = ACTIONS(9),
    [anon_sym_LBRACE] = ACTIONS(11),
    [anon_sym_BSLASH] = ACTIONS(13),
    [anon_sym_BSLASHbgroup] = ACTIONS(11),
    [sym_command_group_start] = ACTIONS(15),
    [anon_sym_BSLASHstartMPinclusions] = ACTIONS(17),
    [anon_sym_BSLASHstartuseMPgraphic] = ACTIONS(17),
    [anon_sym_BSLASHstartreusableMPgraphic] = ACTIONS(17),
    [anon_sym_BSLASHstartMPcode] = ACTIONS(17),
    [anon_sym_BSLASHstartMPpage] = ACTIONS(17),
    [anon_sym_BSLASHstartstaticMPfigure] = ACTIONS(17),
    [anon_sym_BSLASHstarttikzpicture] = ACTIONS(19),
    [anon_sym_BSLASHstarttyping] = ACTIONS(21),
    [anon_sym_BSLASHstartLUA] = ACTIONS(21),
    [anon_sym_BSLASHstartMP] = ACTIONS(21),
    [anon_sym_BSLASHstartPARSEDXML] = ACTIONS(21),
    [anon_sym_BSLASHstartTEX] = ACTIONS(21),
    [anon_sym_BSLASHstartXML] = ACTIONS(21),
    [anon_sym_BSLASHstartCSS] = ACTIONS(21),
    [anon_sym_BSLASHstartHTML] = ACTIONS(23),
    [sym_text] = ACTIONS(25),
    [anon_sym_LF] = ACTIONS(25),
    [anon_sym_CR] = ACTIONS(25),
    [anon_sym_CR_LF] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(32), 1,
      sym_brace_group_stop,
    STATE(160), 1,
      sym_typing_html_start,
    STATE(163), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(41), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(5), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [93] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(42), 1,
      sym_brace_group_stop,
    STATE(160), 1,
      sym_typing_html_start,
    STATE(163), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(43), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(45), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(4), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [186] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(63), 1,
      sym_brace_group_stop,
    STATE(160), 1,
      sym_typing_html_start,
    STATE(163), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(43), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(47), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [279] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(24), 1,
      sym_brace_group_stop,
    STATE(160), 1,
      sym_typing_html_start,
    STATE(163), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(35), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(47), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [372] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(77), 1,
      sym_brace_group_stop,
    STATE(160), 1,
      sym_typing_html_start,
    STATE(163), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(49), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(51), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(7), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [465] = 20,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(31), 1,
      aux_sym_comment_token1,
    ACTIONS(33), 1,
      anon_sym_DOLLAR,
    ACTIONS(37), 1,
      anon_sym_BSLASH,
    ACTIONS(39), 1,
      sym_command_group_start,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(40), 1,
      sym_brace_group_stop,
    STATE(160), 1,
      sym_typing_html_start,
    STATE(163), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(27), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(29), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(49), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(47), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [558] = 19,
    ACTIONS(59), 1,
      aux_sym_comment_token1,
    ACTIONS(62), 1,
      anon_sym_DOLLAR,
    ACTIONS(70), 1,
      anon_sym_BSLASH,
    ACTIONS(73), 1,
      sym_command_group_start,
    ACTIONS(79), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(85), 1,
      anon_sym_BSLASHstartHTML,
    STATE(2), 1,
      sym_brace_group_start,
    STATE(160), 1,
      sym_typing_html_start,
    STATE(163), 1,
      sym_typing_start,
    STATE(166), 1,
      sym_tikz_start,
    STATE(169), 1,
      sym_metapost_start,
    ACTIONS(53), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(56), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(65), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(68), 2,
      anon_sym_RBRACE,
      anon_sym_BSLASHegroup,
    ACTIONS(88), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(76), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(82), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(8), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [648] = 19,
    ACTIONS(7), 1,
      aux_sym_comment_token1,
    ACTIONS(9), 1,
      anon_sym_DOLLAR,
    ACTIONS(13), 1,
      anon_sym_BSLASH,
    ACTIONS(15), 1,
      sym_command_group_start,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(91), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(159), 1,
      sym_metapost_start,
    STATE(177), 1,
      sym_tikz_start,
    STATE(180), 1,
      sym_typing_start,
    STATE(181), 1,
      sym_typing_html_start,
    ACTIONS(3), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(5), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(93), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(13), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [737] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(99), 1,
      aux_sym_comment_token1,
    ACTIONS(101), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      sym_command_group_start,
    ACTIONS(107), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(171), 1,
      sym_typing_html_start,
    STATE(172), 1,
      sym_typing_start,
    STATE(173), 1,
      sym_tikz_start,
    STATE(174), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(95), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(97), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(109), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(16), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [826] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(99), 1,
      aux_sym_comment_token1,
    ACTIONS(101), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      sym_command_group_start,
    ACTIONS(111), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(171), 1,
      sym_typing_html_start,
    STATE(172), 1,
      sym_typing_start,
    STATE(173), 1,
      sym_tikz_start,
    STATE(174), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(95), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(97), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(113), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(10), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [915] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(99), 1,
      aux_sym_comment_token1,
    ACTIONS(101), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      sym_command_group_start,
    ACTIONS(115), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(171), 1,
      sym_typing_html_start,
    STATE(172), 1,
      sym_typing_start,
    STATE(173), 1,
      sym_tikz_start,
    STATE(174), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(95), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(97), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(109), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(16), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1004] = 19,
    ACTIONS(79), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(85), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(117), 1,
      ts_builtin_sym_end,
    ACTIONS(125), 1,
      aux_sym_comment_token1,
    ACTIONS(128), 1,
      anon_sym_DOLLAR,
    ACTIONS(131), 1,
      anon_sym_BSLASH,
    ACTIONS(134), 1,
      sym_command_group_start,
    STATE(6), 1,
      sym_brace_group_start,
    STATE(159), 1,
      sym_metapost_start,
    STATE(177), 1,
      sym_tikz_start,
    STATE(180), 1,
      sym_typing_start,
    STATE(181), 1,
      sym_typing_html_start,
    ACTIONS(65), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(119), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(122), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(137), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(76), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(82), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(13), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1093] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(99), 1,
      aux_sym_comment_token1,
    ACTIONS(101), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      sym_command_group_start,
    ACTIONS(140), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(171), 1,
      sym_typing_html_start,
    STATE(172), 1,
      sym_typing_start,
    STATE(173), 1,
      sym_tikz_start,
    STATE(174), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(95), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(97), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(142), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(17), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1182] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(99), 1,
      aux_sym_comment_token1,
    ACTIONS(101), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      sym_command_group_start,
    ACTIONS(144), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(171), 1,
      sym_typing_html_start,
    STATE(172), 1,
      sym_typing_start,
    STATE(173), 1,
      sym_tikz_start,
    STATE(174), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(95), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(97), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(146), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(12), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1271] = 19,
    ACTIONS(68), 1,
      sym_command_group_stop,
    ACTIONS(79), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(85), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(154), 1,
      aux_sym_comment_token1,
    ACTIONS(157), 1,
      anon_sym_DOLLAR,
    ACTIONS(160), 1,
      anon_sym_BSLASH,
    ACTIONS(163), 1,
      sym_command_group_start,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(171), 1,
      sym_typing_html_start,
    STATE(172), 1,
      sym_typing_start,
    STATE(173), 1,
      sym_tikz_start,
    STATE(174), 1,
      sym_metapost_start,
    ACTIONS(65), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(148), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(151), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(166), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(76), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(82), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(16), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1360] = 19,
    ACTIONS(19), 1,
      anon_sym_BSLASHstarttikzpicture,
    ACTIONS(23), 1,
      anon_sym_BSLASHstartHTML,
    ACTIONS(99), 1,
      aux_sym_comment_token1,
    ACTIONS(101), 1,
      anon_sym_DOLLAR,
    ACTIONS(103), 1,
      anon_sym_BSLASH,
    ACTIONS(105), 1,
      sym_command_group_start,
    ACTIONS(169), 1,
      sym_command_group_stop,
    STATE(3), 1,
      sym_brace_group_start,
    STATE(171), 1,
      sym_typing_html_start,
    STATE(172), 1,
      sym_typing_start,
    STATE(173), 1,
      sym_tikz_start,
    STATE(174), 1,
      sym_metapost_start,
    ACTIONS(11), 2,
      anon_sym_LBRACE,
      anon_sym_BSLASHbgroup,
    ACTIONS(95), 2,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
    ACTIONS(97), 2,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
    ACTIONS(109), 4,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
    ACTIONS(17), 6,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
    ACTIONS(21), 7,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
    STATE(16), 15,
      sym__content,
      sym_main_start,
      sym_main_stop,
      sym_comment,
      sym_escaped,
      sym_brace_group,
      sym_command_group,
      sym_inline_math,
      sym_metapost_inclusion,
      sym_tikz_inclusion,
      sym_typing_inclusion,
      sym_typing_html_inclusion,
      sym_command,
      sym__end_of_line,
      aux_sym_document_repeat1,
  [1449] = 1,
    ACTIONS(171), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1483] = 1,
    ACTIONS(173), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1517] = 1,
    ACTIONS(175), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1551] = 1,
    ACTIONS(177), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1585] = 1,
    ACTIONS(179), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1619] = 1,
    ACTIONS(181), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1653] = 1,
    ACTIONS(183), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1687] = 1,
    ACTIONS(185), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1721] = 1,
    ACTIONS(187), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1755] = 1,
    ACTIONS(189), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1789] = 1,
    ACTIONS(191), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1823] = 1,
    ACTIONS(193), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1857] = 1,
    ACTIONS(195), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1891] = 1,
    ACTIONS(197), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1925] = 1,
    ACTIONS(199), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1959] = 1,
    ACTIONS(201), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [1993] = 1,
    ACTIONS(203), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2027] = 1,
    ACTIONS(205), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2061] = 1,
    ACTIONS(207), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2095] = 1,
    ACTIONS(209), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2129] = 1,
    ACTIONS(211), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2163] = 1,
    ACTIONS(213), 31,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      anon_sym_BSLASHegroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2197] = 2,
    ACTIONS(215), 1,
      ts_builtin_sym_end,
    ACTIONS(183), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2232] = 1,
    ACTIONS(193), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2265] = 1,
    ACTIONS(199), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2298] = 2,
    ACTIONS(217), 1,
      ts_builtin_sym_end,
    ACTIONS(191), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2333] = 1,
    ACTIONS(201), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2366] = 2,
    ACTIONS(219), 1,
      ts_builtin_sym_end,
    ACTIONS(187), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2401] = 1,
    ACTIONS(205), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2434] = 1,
    ACTIONS(207), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2467] = 2,
    ACTIONS(221), 1,
      ts_builtin_sym_end,
    ACTIONS(185), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2502] = 2,
    ACTIONS(223), 1,
      ts_builtin_sym_end,
    ACTIONS(181), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2537] = 2,
    ACTIONS(225), 1,
      ts_builtin_sym_end,
    ACTIONS(179), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2572] = 2,
    ACTIONS(227), 1,
      ts_builtin_sym_end,
    ACTIONS(177), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2607] = 2,
    ACTIONS(229), 1,
      ts_builtin_sym_end,
    ACTIONS(175), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2642] = 2,
    ACTIONS(231), 1,
      ts_builtin_sym_end,
    ACTIONS(193), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2677] = 2,
    ACTIONS(233), 1,
      ts_builtin_sym_end,
    ACTIONS(173), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2712] = 2,
    ACTIONS(235), 1,
      ts_builtin_sym_end,
    ACTIONS(195), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2747] = 2,
    ACTIONS(237), 1,
      ts_builtin_sym_end,
    ACTIONS(197), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2782] = 1,
    ACTIONS(203), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2815] = 1,
    ACTIONS(191), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2848] = 2,
    ACTIONS(239), 1,
      ts_builtin_sym_end,
    ACTIONS(205), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2883] = 1,
    ACTIONS(187), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2916] = 2,
    ACTIONS(241), 1,
      ts_builtin_sym_end,
    ACTIONS(211), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2951] = 1,
    ACTIONS(185), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [2984] = 1,
    ACTIONS(183), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3017] = 2,
    ACTIONS(243), 1,
      ts_builtin_sym_end,
    ACTIONS(209), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3052] = 1,
    ACTIONS(181), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3085] = 1,
    ACTIONS(179), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3118] = 1,
    ACTIONS(177), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3151] = 1,
    ACTIONS(175), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3184] = 2,
    ACTIONS(245), 1,
      ts_builtin_sym_end,
    ACTIONS(207), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3219] = 1,
    ACTIONS(173), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3252] = 1,
    ACTIONS(195), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3285] = 2,
    ACTIONS(247), 1,
      ts_builtin_sym_end,
    ACTIONS(213), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3320] = 1,
    ACTIONS(197), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3353] = 2,
    ACTIONS(249), 1,
      ts_builtin_sym_end,
    ACTIONS(171), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3388] = 2,
    ACTIONS(251), 1,
      ts_builtin_sym_end,
    ACTIONS(203), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3423] = 2,
    ACTIONS(253), 1,
      ts_builtin_sym_end,
    ACTIONS(201), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3458] = 2,
    ACTIONS(255), 1,
      ts_builtin_sym_end,
    ACTIONS(199), 29,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3493] = 1,
    ACTIONS(171), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3526] = 1,
    ACTIONS(209), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3559] = 1,
    ACTIONS(213), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3592] = 1,
    ACTIONS(211), 30,
      anon_sym_BSLASHstarttext,
      anon_sym_BSLASHstartcomponent,
      anon_sym_BSLASHstoptext,
      anon_sym_BSLASHstopcomponent,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_BSLASH,
      anon_sym_BSLASHbgroup,
      sym_command_group_start,
      sym_command_group_stop,
      anon_sym_BSLASHstartMPinclusions,
      anon_sym_BSLASHstartuseMPgraphic,
      anon_sym_BSLASHstartreusableMPgraphic,
      anon_sym_BSLASHstartMPcode,
      anon_sym_BSLASHstartMPpage,
      anon_sym_BSLASHstartstaticMPfigure,
      anon_sym_BSLASHstarttikzpicture,
      anon_sym_BSLASHstarttyping,
      anon_sym_BSLASHstartLUA,
      anon_sym_BSLASHstartMP,
      anon_sym_BSLASHstartPARSEDXML,
      anon_sym_BSLASHstartTEX,
      anon_sym_BSLASHstartXML,
      anon_sym_BSLASHstartCSS,
      anon_sym_BSLASHstartHTML,
      sym_text,
      anon_sym_LF,
      anon_sym_CR,
      anon_sym_CR_LF,
  [3625] = 9,
    ACTIONS(257), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(265), 1,
      aux_sym_title_text_token1,
    ACTIONS(269), 1,
      anon_sym_CR,
    STATE(168), 1,
      sym_title_value,
    ACTIONS(263), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(267), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(86), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3662] = 8,
    ACTIONS(271), 1,
      aux_sym_comment_token1,
    ACTIONS(274), 1,
      anon_sym_LBRACE,
    ACTIONS(279), 1,
      anon_sym_BSLASH,
    ACTIONS(282), 1,
      aux_sym_title_text_token1,
    ACTIONS(288), 1,
      anon_sym_CR,
    ACTIONS(285), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(277), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(83), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3697] = 8,
    ACTIONS(291), 1,
      aux_sym_comment_token1,
    ACTIONS(294), 1,
      anon_sym_LBRACE,
    ACTIONS(299), 1,
      anon_sym_BSLASH,
    ACTIONS(302), 1,
      aux_sym_title_text_token1,
    ACTIONS(308), 1,
      anon_sym_CR,
    ACTIONS(305), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    ACTIONS(297), 3,
      anon_sym_RBRACE,
      sym_command_block_stop,
      anon_sym_COMMA,
    STATE(84), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3732] = 9,
    ACTIONS(257), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      aux_sym_title_text_token1,
    ACTIONS(319), 1,
      anon_sym_CR,
    STATE(164), 1,
      sym_value,
    ACTIONS(313), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(317), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(87), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3769] = 8,
    ACTIONS(257), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(265), 1,
      aux_sym_title_text_token1,
    ACTIONS(325), 1,
      anon_sym_CR,
    ACTIONS(321), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(323), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(84), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3803] = 8,
    ACTIONS(257), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      aux_sym_title_text_token1,
    ACTIONS(331), 1,
      anon_sym_CR,
    ACTIONS(327), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
    ACTIONS(329), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(83), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3837] = 8,
    ACTIONS(257), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(265), 1,
      aux_sym_title_text_token1,
    ACTIONS(325), 1,
      anon_sym_CR,
    ACTIONS(333), 1,
      anon_sym_RBRACE,
    ACTIONS(323), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(84), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3870] = 8,
    ACTIONS(257), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      aux_sym_title_text_token1,
    ACTIONS(335), 1,
      anon_sym_RBRACE,
    ACTIONS(339), 1,
      anon_sym_CR,
    ACTIONS(337), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(90), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3903] = 8,
    ACTIONS(257), 1,
      aux_sym_comment_token1,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(311), 1,
      anon_sym_LBRACE,
    ACTIONS(315), 1,
      aux_sym_title_text_token1,
    ACTIONS(331), 1,
      anon_sym_CR,
    ACTIONS(341), 1,
      anon_sym_RBRACE,
    ACTIONS(329), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(83), 8,
      sym_comment,
      sym_escaped,
      sym__value_content,
      sym_value_text,
      sym_value_brace_group,
      sym_command,
      sym__end_of_line,
      aux_sym_value_repeat1,
  [3936] = 8,
    ACTIONS(257), 1,
      aux_sym_comment_token1,
    ACTIONS(259), 1,
      anon_sym_LBRACE,
    ACTIONS(261), 1,
      anon_sym_BSLASH,
    ACTIONS(265), 1,
      aux_sym_title_text_token1,
    ACTIONS(343), 1,
      anon_sym_RBRACE,
    ACTIONS(347), 1,
      anon_sym_CR,
    ACTIONS(345), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(88), 8,
      sym_comment,
      sym_escaped,
      sym__title_content,
      sym_title_brace_group,
      sym_title_text,
      sym_command,
      sym__end_of_line,
      aux_sym_title_value_repeat1,
  [3969] = 3,
    ACTIONS(351), 1,
      sym_command_name,
    STATE(78), 1,
      sym_escapechar,
    ACTIONS(349), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [3989] = 3,
    ACTIONS(355), 1,
      sym_command_name,
    STATE(74), 1,
      sym_escapechar,
    ACTIONS(353), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [4009] = 3,
    ACTIONS(359), 1,
      sym_command_name,
    STATE(18), 1,
      sym_escapechar,
    ACTIONS(357), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [4029] = 3,
    ACTIONS(363), 1,
      sym_command_name,
    STATE(120), 1,
      sym_escapechar,
    ACTIONS(361), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [4049] = 2,
    STATE(139), 1,
      sym_escapechar,
    ACTIONS(365), 11,
      anon_sym_POUND,
      anon_sym_DOLLAR,
      anon_sym_PERCENT,
      anon_sym_AMP,
      anon_sym_CARET,
      anon_sym__,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_PIPE,
      anon_sym_TILDE,
      anon_sym_BSLASH,
  [4066] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_command_block_start,
    ACTIONS(373), 1,
      anon_sym_CR,
    ACTIONS(375), 1,
      sym_command_stop,
    ACTIONS(371), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(100), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4090] = 6,
    ACTIONS(377), 1,
      aux_sym_comment_token1,
    ACTIONS(380), 1,
      sym_command_block_start,
    ACTIONS(386), 1,
      anon_sym_CR,
    ACTIONS(389), 1,
      sym_command_stop,
    ACTIONS(383), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(98), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4114] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_command_block_start,
    ACTIONS(393), 1,
      anon_sym_CR,
    ACTIONS(395), 1,
      sym_command_stop,
    ACTIONS(391), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(103), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4138] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_command_block_start,
    ACTIONS(399), 1,
      anon_sym_CR,
    ACTIONS(401), 1,
      sym_command_stop,
    ACTIONS(397), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(98), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4162] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_command_block_start,
    ACTIONS(405), 1,
      anon_sym_CR,
    ACTIONS(407), 1,
      sym_command_stop,
    ACTIONS(403), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(102), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4186] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_command_block_start,
    ACTIONS(399), 1,
      anon_sym_CR,
    ACTIONS(409), 1,
      sym_command_stop,
    ACTIONS(397), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(98), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4210] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_command_block_start,
    ACTIONS(399), 1,
      anon_sym_CR,
    ACTIONS(411), 1,
      sym_command_stop,
    ACTIONS(397), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(98), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4234] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_command_block_start,
    ACTIONS(415), 1,
      anon_sym_CR,
    ACTIONS(417), 1,
      sym_command_stop,
    ACTIONS(413), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(106), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4258] = 6,
    ACTIONS(419), 1,
      aux_sym_comment_token1,
    ACTIONS(424), 1,
      anon_sym_LBRACE,
    ACTIONS(427), 1,
      anon_sym_BSLASH,
    ACTIONS(430), 1,
      sym_math_text,
    ACTIONS(422), 2,
      anon_sym_DOLLAR,
      anon_sym_RBRACE,
    STATE(105), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4282] = 6,
    ACTIONS(367), 1,
      aux_sym_comment_token1,
    ACTIONS(369), 1,
      sym_command_block_start,
    ACTIONS(399), 1,
      anon_sym_CR,
    ACTIONS(433), 1,
      sym_command_stop,
    ACTIONS(397), 2,
      anon_sym_LF,
      anon_sym_CR_LF,
    STATE(98), 5,
      sym_comment,
      sym_option_block,
      sym_settings_block,
      sym__end_of_line,
      aux_sym_command_repeat1,
  [4306] = 2,
    ACTIONS(435), 3,
      aux_sym_comment_token1,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(437), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4321] = 2,
    ACTIONS(209), 3,
      aux_sym_comment_token1,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(243), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4336] = 6,
    ACTIONS(439), 1,
      aux_sym_comment_token1,
    ACTIONS(441), 1,
      anon_sym_DOLLAR,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_BSLASH,
    ACTIONS(447), 1,
      sym_math_text,
    STATE(105), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4359] = 6,
    ACTIONS(439), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_BSLASH,
    ACTIONS(449), 1,
      anon_sym_RBRACE,
    ACTIONS(451), 1,
      sym_math_text,
    STATE(113), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4382] = 2,
    ACTIONS(453), 3,
      aux_sym_comment_token1,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(455), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4397] = 2,
    ACTIONS(187), 3,
      aux_sym_comment_token1,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(219), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4412] = 6,
    ACTIONS(439), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_BSLASH,
    ACTIONS(447), 1,
      sym_math_text,
    ACTIONS(457), 1,
      anon_sym_RBRACE,
    STATE(105), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4435] = 2,
    ACTIONS(459), 3,
      aux_sym_comment_token1,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(461), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4450] = 2,
    ACTIONS(463), 3,
      aux_sym_comment_token1,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(465), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4465] = 6,
    ACTIONS(439), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_BSLASH,
    ACTIONS(447), 1,
      sym_math_text,
    ACTIONS(467), 1,
      anon_sym_DOLLAR,
    STATE(105), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4488] = 2,
    ACTIONS(469), 3,
      aux_sym_comment_token1,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(471), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4503] = 2,
    ACTIONS(473), 3,
      aux_sym_comment_token1,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(475), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4518] = 2,
    ACTIONS(213), 3,
      aux_sym_comment_token1,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(247), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4533] = 2,
    ACTIONS(171), 3,
      aux_sym_comment_token1,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(249), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4548] = 2,
    ACTIONS(211), 3,
      aux_sym_comment_token1,
      aux_sym_title_text_token1,
      anon_sym_CR,
    ACTIONS(241), 7,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_command_block_stop,
      anon_sym_COMMA,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4563] = 6,
    ACTIONS(439), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_BSLASH,
    ACTIONS(447), 1,
      sym_math_text,
    ACTIONS(477), 1,
      anon_sym_DOLLAR,
    STATE(105), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4586] = 5,
    ACTIONS(439), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_BSLASH,
    ACTIONS(479), 1,
      sym_math_text,
    STATE(109), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4606] = 5,
    ACTIONS(439), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_BSLASH,
    ACTIONS(481), 1,
      sym_math_text,
    STATE(122), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4626] = 5,
    ACTIONS(439), 1,
      aux_sym_comment_token1,
    ACTIONS(443), 1,
      anon_sym_LBRACE,
    ACTIONS(445), 1,
      anon_sym_BSLASH,
    ACTIONS(483), 1,
      sym_math_text,
    STATE(116), 5,
      sym_comment,
      sym_escaped,
      sym_math_group,
      sym__math_content,
      aux_sym_math_group_repeat1,
  [4646] = 2,
    STATE(70), 1,
      sym_typing_stop,
    ACTIONS(485), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4659] = 2,
    STATE(54), 1,
      sym_typing_stop,
    ACTIONS(487), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4672] = 2,
    STATE(19), 1,
      sym_typing_stop,
    ACTIONS(489), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4685] = 2,
    STATE(66), 1,
      sym_metapost_stop,
    ACTIONS(491), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4697] = 2,
    STATE(50), 1,
      sym_metapost_stop,
    ACTIONS(493), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4709] = 2,
    STATE(22), 1,
      sym_metapost_stop,
    ACTIONS(495), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4721] = 6,
    ACTIONS(497), 1,
      sym_command_block_stop,
    ACTIONS(499), 1,
      anon_sym_COMMA,
    ACTIONS(501), 1,
      sym_keyword,
    ACTIONS(503), 1,
      anon_sym_title,
    ACTIONS(505), 1,
      sym_key,
    STATE(153), 2,
      sym_setting,
      sym_title_setting,
  [4741] = 1,
    ACTIONS(507), 7,
      anon_sym_BSLASHstoptyping,
      anon_sym_BSLASHstopLUA,
      anon_sym_BSLASHstopMP,
      anon_sym_BSLASHstopPARSEDXML,
      anon_sym_BSLASHstopTEX,
      anon_sym_BSLASHstopXML,
      anon_sym_BSLASHstopCSS,
  [4751] = 1,
    ACTIONS(509), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4760] = 2,
    ACTIONS(513), 1,
      anon_sym_CR,
    ACTIONS(511), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4771] = 1,
    ACTIONS(213), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4780] = 1,
    ACTIONS(515), 6,
      anon_sym_BSLASHstopMPinclusions,
      anon_sym_BSLASHstopuseMPgraphic,
      anon_sym_BSLASHstopreusableMPgraphic,
      anon_sym_BSLASHstopMPcode,
      anon_sym_BSLASHstopMPpage,
      anon_sym_BSLASHstopstaticMPfigure,
  [4789] = 2,
    ACTIONS(519), 1,
      anon_sym_CR,
    ACTIONS(517), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4800] = 1,
    ACTIONS(171), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4809] = 1,
    ACTIONS(521), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4818] = 2,
    ACTIONS(525), 1,
      anon_sym_CR,
    ACTIONS(523), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4829] = 2,
    ACTIONS(529), 1,
      anon_sym_CR,
    ACTIONS(527), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4840] = 2,
    ACTIONS(211), 1,
      anon_sym_CR,
    ACTIONS(241), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4851] = 2,
    ACTIONS(533), 1,
      anon_sym_CR,
    ACTIONS(531), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4862] = 1,
    ACTIONS(211), 6,
      aux_sym_comment_token1,
      anon_sym_DOLLAR,
      anon_sym_LBRACE,
      anon_sym_RBRACE,
      anon_sym_BSLASH,
      sym_math_text,
  [4871] = 2,
    ACTIONS(533), 1,
      anon_sym_CR,
    ACTIONS(531), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4882] = 2,
    ACTIONS(537), 1,
      anon_sym_CR,
    ACTIONS(535), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4893] = 2,
    ACTIONS(541), 1,
      anon_sym_CR,
    ACTIONS(539), 5,
      sym_command_stop,
      aux_sym_comment_token1,
      sym_command_block_start,
      anon_sym_LF,
      anon_sym_CR_LF,
  [4904] = 4,
    ACTIONS(503), 1,
      anon_sym_title,
    ACTIONS(505), 1,
      sym_key,
    ACTIONS(543), 1,
      sym_command_block_stop,
    STATE(161), 2,
      sym_setting,
      sym_title_setting,
  [4918] = 4,
    ACTIONS(503), 1,
      anon_sym_title,
    ACTIONS(505), 1,
      sym_key,
    ACTIONS(545), 1,
      sym_command_block_stop,
    STATE(161), 2,
      sym_setting,
      sym_title_setting,
  [4932] = 3,
    ACTIONS(503), 1,
      anon_sym_title,
    ACTIONS(505), 1,
      sym_key,
    STATE(161), 2,
      sym_setting,
      sym_title_setting,
  [4943] = 3,
    ACTIONS(547), 1,
      sym_command_block_stop,
    ACTIONS(549), 1,
      anon_sym_COMMA,
    STATE(154), 1,
      aux_sym_option_block_repeat1,
  [4953] = 3,
    ACTIONS(551), 1,
      sym_command_block_stop,
    ACTIONS(553), 1,
      anon_sym_COMMA,
    STATE(156), 1,
      aux_sym_settings_block_repeat1,
  [4963] = 3,
    ACTIONS(555), 1,
      sym_command_block_stop,
    ACTIONS(557), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_option_block_repeat1,
  [4973] = 3,
    ACTIONS(559), 1,
      sym_command_block_stop,
    ACTIONS(561), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_settings_block_repeat1,
  [4983] = 3,
    ACTIONS(543), 1,
      sym_command_block_stop,
    ACTIONS(564), 1,
      anon_sym_COMMA,
    STATE(155), 1,
      aux_sym_settings_block_repeat1,
  [4993] = 3,
    ACTIONS(566), 1,
      sym_command_block_stop,
    ACTIONS(568), 1,
      anon_sym_COMMA,
    STATE(157), 1,
      aux_sym_option_block_repeat1,
  [5003] = 2,
    ACTIONS(571), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(20), 1,
      sym_tikz_stop,
  [5010] = 2,
    ACTIONS(573), 1,
      aux_sym_metapost_body_token1,
    STATE(130), 1,
      sym_metapost_body,
  [5017] = 2,
    ACTIONS(575), 1,
      aux_sym_metapost_body_token1,
    STATE(178), 1,
      sym_typing_html_body,
  [5024] = 1,
    ACTIONS(559), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5029] = 2,
    ACTIONS(577), 1,
      sym_command_block_stop,
    ACTIONS(579), 1,
      sym_keyword,
  [5036] = 2,
    ACTIONS(581), 1,
      aux_sym_metapost_body_token1,
    STATE(128), 1,
      sym_typing_body,
  [5043] = 1,
    ACTIONS(583), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5048] = 2,
    ACTIONS(585), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(68), 1,
      sym_tikz_stop,
  [5055] = 2,
    ACTIONS(587), 1,
      aux_sym_metapost_body_token1,
    STATE(158), 1,
      sym_tikz_body,
  [5062] = 2,
    ACTIONS(589), 1,
      anon_sym_BSLASHstopHTML,
    STATE(73), 1,
      sym_typing_html_stop,
  [5069] = 1,
    ACTIONS(591), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5074] = 2,
    ACTIONS(573), 1,
      aux_sym_metapost_body_token1,
    STATE(131), 1,
      sym_metapost_body,
  [5081] = 2,
    ACTIONS(579), 1,
      sym_keyword,
    ACTIONS(593), 1,
      sym_command_block_stop,
  [5088] = 2,
    ACTIONS(575), 1,
      aux_sym_metapost_body_token1,
    STATE(167), 1,
      sym_typing_html_body,
  [5095] = 2,
    ACTIONS(581), 1,
      aux_sym_metapost_body_token1,
    STATE(126), 1,
      sym_typing_body,
  [5102] = 2,
    ACTIONS(587), 1,
      aux_sym_metapost_body_token1,
    STATE(165), 1,
      sym_tikz_body,
  [5109] = 2,
    ACTIONS(573), 1,
      aux_sym_metapost_body_token1,
    STATE(129), 1,
      sym_metapost_body,
  [5116] = 1,
    ACTIONS(566), 2,
      sym_command_block_stop,
      anon_sym_COMMA,
  [5121] = 2,
    ACTIONS(595), 1,
      anon_sym_BSLASHstoptikzpicture,
    STATE(52), 1,
      sym_tikz_stop,
  [5128] = 2,
    ACTIONS(587), 1,
      aux_sym_metapost_body_token1,
    STATE(176), 1,
      sym_tikz_body,
  [5135] = 2,
    ACTIONS(597), 1,
      anon_sym_BSLASHstopHTML,
    STATE(31), 1,
      sym_typing_html_stop,
  [5142] = 2,
    ACTIONS(599), 1,
      anon_sym_BSLASHstopHTML,
    STATE(56), 1,
      sym_typing_html_stop,
  [5149] = 2,
    ACTIONS(581), 1,
      aux_sym_metapost_body_token1,
    STATE(127), 1,
      sym_typing_body,
  [5156] = 2,
    ACTIONS(575), 1,
      aux_sym_metapost_body_token1,
    STATE(179), 1,
      sym_typing_html_body,
  [5163] = 1,
    ACTIONS(601), 1,
      sym_command_block_stop,
  [5167] = 1,
    ACTIONS(603), 1,
      aux_sym_metapost_body_token1,
  [5171] = 1,
    ACTIONS(605), 1,
      ts_builtin_sym_end,
  [5175] = 1,
    ACTIONS(607), 1,
      anon_sym_EQ,
  [5179] = 1,
    ACTIONS(579), 1,
      sym_keyword,
  [5183] = 1,
    ACTIONS(609), 1,
      anon_sym_EQ,
  [5187] = 1,
    ACTIONS(611), 1,
      aux_sym_metapost_body_token1,
  [5191] = 1,
    ACTIONS(613), 1,
      aux_sym_metapost_body_token1,
  [5195] = 1,
    ACTIONS(615), 1,
      anon_sym_BSLASHstopHTML,
  [5199] = 1,
    ACTIONS(617), 1,
      anon_sym_BSLASHstoptikzpicture,
  [5203] = 1,
    ACTIONS(619), 1,
      aux_sym_metapost_body_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 93,
  [SMALL_STATE(4)] = 186,
  [SMALL_STATE(5)] = 279,
  [SMALL_STATE(6)] = 372,
  [SMALL_STATE(7)] = 465,
  [SMALL_STATE(8)] = 558,
  [SMALL_STATE(9)] = 648,
  [SMALL_STATE(10)] = 737,
  [SMALL_STATE(11)] = 826,
  [SMALL_STATE(12)] = 915,
  [SMALL_STATE(13)] = 1004,
  [SMALL_STATE(14)] = 1093,
  [SMALL_STATE(15)] = 1182,
  [SMALL_STATE(16)] = 1271,
  [SMALL_STATE(17)] = 1360,
  [SMALL_STATE(18)] = 1449,
  [SMALL_STATE(19)] = 1483,
  [SMALL_STATE(20)] = 1517,
  [SMALL_STATE(21)] = 1551,
  [SMALL_STATE(22)] = 1585,
  [SMALL_STATE(23)] = 1619,
  [SMALL_STATE(24)] = 1653,
  [SMALL_STATE(25)] = 1687,
  [SMALL_STATE(26)] = 1721,
  [SMALL_STATE(27)] = 1755,
  [SMALL_STATE(28)] = 1789,
  [SMALL_STATE(29)] = 1823,
  [SMALL_STATE(30)] = 1857,
  [SMALL_STATE(31)] = 1891,
  [SMALL_STATE(32)] = 1925,
  [SMALL_STATE(33)] = 1959,
  [SMALL_STATE(34)] = 1993,
  [SMALL_STATE(35)] = 2027,
  [SMALL_STATE(36)] = 2061,
  [SMALL_STATE(37)] = 2095,
  [SMALL_STATE(38)] = 2129,
  [SMALL_STATE(39)] = 2163,
  [SMALL_STATE(40)] = 2197,
  [SMALL_STATE(41)] = 2232,
  [SMALL_STATE(42)] = 2265,
  [SMALL_STATE(43)] = 2298,
  [SMALL_STATE(44)] = 2333,
  [SMALL_STATE(45)] = 2366,
  [SMALL_STATE(46)] = 2401,
  [SMALL_STATE(47)] = 2434,
  [SMALL_STATE(48)] = 2467,
  [SMALL_STATE(49)] = 2502,
  [SMALL_STATE(50)] = 2537,
  [SMALL_STATE(51)] = 2572,
  [SMALL_STATE(52)] = 2607,
  [SMALL_STATE(53)] = 2642,
  [SMALL_STATE(54)] = 2677,
  [SMALL_STATE(55)] = 2712,
  [SMALL_STATE(56)] = 2747,
  [SMALL_STATE(57)] = 2782,
  [SMALL_STATE(58)] = 2815,
  [SMALL_STATE(59)] = 2848,
  [SMALL_STATE(60)] = 2883,
  [SMALL_STATE(61)] = 2916,
  [SMALL_STATE(62)] = 2951,
  [SMALL_STATE(63)] = 2984,
  [SMALL_STATE(64)] = 3017,
  [SMALL_STATE(65)] = 3052,
  [SMALL_STATE(66)] = 3085,
  [SMALL_STATE(67)] = 3118,
  [SMALL_STATE(68)] = 3151,
  [SMALL_STATE(69)] = 3184,
  [SMALL_STATE(70)] = 3219,
  [SMALL_STATE(71)] = 3252,
  [SMALL_STATE(72)] = 3285,
  [SMALL_STATE(73)] = 3320,
  [SMALL_STATE(74)] = 3353,
  [SMALL_STATE(75)] = 3388,
  [SMALL_STATE(76)] = 3423,
  [SMALL_STATE(77)] = 3458,
  [SMALL_STATE(78)] = 3493,
  [SMALL_STATE(79)] = 3526,
  [SMALL_STATE(80)] = 3559,
  [SMALL_STATE(81)] = 3592,
  [SMALL_STATE(82)] = 3625,
  [SMALL_STATE(83)] = 3662,
  [SMALL_STATE(84)] = 3697,
  [SMALL_STATE(85)] = 3732,
  [SMALL_STATE(86)] = 3769,
  [SMALL_STATE(87)] = 3803,
  [SMALL_STATE(88)] = 3837,
  [SMALL_STATE(89)] = 3870,
  [SMALL_STATE(90)] = 3903,
  [SMALL_STATE(91)] = 3936,
  [SMALL_STATE(92)] = 3969,
  [SMALL_STATE(93)] = 3989,
  [SMALL_STATE(94)] = 4009,
  [SMALL_STATE(95)] = 4029,
  [SMALL_STATE(96)] = 4049,
  [SMALL_STATE(97)] = 4066,
  [SMALL_STATE(98)] = 4090,
  [SMALL_STATE(99)] = 4114,
  [SMALL_STATE(100)] = 4138,
  [SMALL_STATE(101)] = 4162,
  [SMALL_STATE(102)] = 4186,
  [SMALL_STATE(103)] = 4210,
  [SMALL_STATE(104)] = 4234,
  [SMALL_STATE(105)] = 4258,
  [SMALL_STATE(106)] = 4282,
  [SMALL_STATE(107)] = 4306,
  [SMALL_STATE(108)] = 4321,
  [SMALL_STATE(109)] = 4336,
  [SMALL_STATE(110)] = 4359,
  [SMALL_STATE(111)] = 4382,
  [SMALL_STATE(112)] = 4397,
  [SMALL_STATE(113)] = 4412,
  [SMALL_STATE(114)] = 4435,
  [SMALL_STATE(115)] = 4450,
  [SMALL_STATE(116)] = 4465,
  [SMALL_STATE(117)] = 4488,
  [SMALL_STATE(118)] = 4503,
  [SMALL_STATE(119)] = 4518,
  [SMALL_STATE(120)] = 4533,
  [SMALL_STATE(121)] = 4548,
  [SMALL_STATE(122)] = 4563,
  [SMALL_STATE(123)] = 4586,
  [SMALL_STATE(124)] = 4606,
  [SMALL_STATE(125)] = 4626,
  [SMALL_STATE(126)] = 4646,
  [SMALL_STATE(127)] = 4659,
  [SMALL_STATE(128)] = 4672,
  [SMALL_STATE(129)] = 4685,
  [SMALL_STATE(130)] = 4697,
  [SMALL_STATE(131)] = 4709,
  [SMALL_STATE(132)] = 4721,
  [SMALL_STATE(133)] = 4741,
  [SMALL_STATE(134)] = 4751,
  [SMALL_STATE(135)] = 4760,
  [SMALL_STATE(136)] = 4771,
  [SMALL_STATE(137)] = 4780,
  [SMALL_STATE(138)] = 4789,
  [SMALL_STATE(139)] = 4800,
  [SMALL_STATE(140)] = 4809,
  [SMALL_STATE(141)] = 4818,
  [SMALL_STATE(142)] = 4829,
  [SMALL_STATE(143)] = 4840,
  [SMALL_STATE(144)] = 4851,
  [SMALL_STATE(145)] = 4862,
  [SMALL_STATE(146)] = 4871,
  [SMALL_STATE(147)] = 4882,
  [SMALL_STATE(148)] = 4893,
  [SMALL_STATE(149)] = 4904,
  [SMALL_STATE(150)] = 4918,
  [SMALL_STATE(151)] = 4932,
  [SMALL_STATE(152)] = 4943,
  [SMALL_STATE(153)] = 4953,
  [SMALL_STATE(154)] = 4963,
  [SMALL_STATE(155)] = 4973,
  [SMALL_STATE(156)] = 4983,
  [SMALL_STATE(157)] = 4993,
  [SMALL_STATE(158)] = 5003,
  [SMALL_STATE(159)] = 5010,
  [SMALL_STATE(160)] = 5017,
  [SMALL_STATE(161)] = 5024,
  [SMALL_STATE(162)] = 5029,
  [SMALL_STATE(163)] = 5036,
  [SMALL_STATE(164)] = 5043,
  [SMALL_STATE(165)] = 5048,
  [SMALL_STATE(166)] = 5055,
  [SMALL_STATE(167)] = 5062,
  [SMALL_STATE(168)] = 5069,
  [SMALL_STATE(169)] = 5074,
  [SMALL_STATE(170)] = 5081,
  [SMALL_STATE(171)] = 5088,
  [SMALL_STATE(172)] = 5095,
  [SMALL_STATE(173)] = 5102,
  [SMALL_STATE(174)] = 5109,
  [SMALL_STATE(175)] = 5116,
  [SMALL_STATE(176)] = 5121,
  [SMALL_STATE(177)] = 5128,
  [SMALL_STATE(178)] = 5135,
  [SMALL_STATE(179)] = 5142,
  [SMALL_STATE(180)] = 5149,
  [SMALL_STATE(181)] = 5156,
  [SMALL_STATE(182)] = 5163,
  [SMALL_STATE(183)] = 5167,
  [SMALL_STATE(184)] = 5171,
  [SMALL_STATE(185)] = 5175,
  [SMALL_STATE(186)] = 5179,
  [SMALL_STATE(187)] = 5183,
  [SMALL_STATE(188)] = 5187,
  [SMALL_STATE(189)] = 5191,
  [SMALL_STATE(190)] = 5195,
  [SMALL_STATE(191)] = 5199,
  [SMALL_STATE(192)] = 5203,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(59),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(36),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [31] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [35] = {.entry = {.count = 1, .reusable = false}}, SHIFT(33),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(5),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(76),
  [51] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [53] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(36),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(35),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(38),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(125),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(27),
  [68] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(94),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(11),
  [76] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(192),
  [79] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(183),
  [82] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(189),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(188),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [97] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(81),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [103] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [107] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [109] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [111] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [113] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2),
  [119] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(69),
  [122] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(59),
  [125] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(61),
  [128] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(123),
  [131] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(93),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(14),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(13),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(75),
  [142] = {.entry = {.count = 1, .reusable = false}}, SHIFT(17),
  [144] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [146] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [148] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(47),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(46),
  [154] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(81),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(124),
  [160] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(92),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(15),
  [166] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_document_repeat1, 2), SHIFT_REPEAT(16),
  [169] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escaped, 2),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_inclusion, 3),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_inclusion, 3),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tikz_stop, 1),
  [179] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_inclusion, 3),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_metapost_stop, 1),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 3),
  [185] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 3),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 3),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_start, 1),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_inline_math, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_stop, 1),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_stop, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_typing_html_inclusion, 3),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group, 2),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_brace_group_stop, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command_group, 2),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_stop, 1),
  [207] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_main_start, 1),
  [209] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_command, 4),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_comment, 1),
  [213] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_escapechar, 1),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 3),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_inline_math, 3),
  [219] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 3),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 3),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_stop, 1),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_inclusion, 3),
  [227] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_stop, 1),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_inclusion, 3),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_stop, 1),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_inclusion, 3),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_stop, 1),
  [237] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_inclusion, 3),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_stop, 1),
  [241] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_comment, 1),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command, 4),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_main_start, 1),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escapechar, 1),
  [249] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_escaped, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_command_group, 2),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group_stop, 1),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_brace_group, 2),
  [257] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_setting, 2),
  [265] = {.entry = {.count = 1, .reusable = false}}, SHIFT(107),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(86),
  [271] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(121),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(89),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2),
  [279] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(95),
  [282] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(115),
  [285] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(83),
  [288] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_value_repeat1, 2), SHIFT_REPEAT(83),
  [291] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(121),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(91),
  [297] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_title_value_repeat1, 2),
  [299] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(95),
  [302] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(107),
  [305] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(84),
  [308] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_title_value_repeat1, 2), SHIFT_REPEAT(84),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [313] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 2),
  [315] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [319] = {.entry = {.count = 1, .reusable = false}}, SHIFT(87),
  [321] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_value, 1),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(84),
  [327] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value, 1),
  [329] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [341] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [347] = {.entry = {.count = 1, .reusable = false}}, SHIFT(88),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [353] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [359] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [361] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [365] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [371] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [373] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(143),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(132),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(98),
  [386] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_command_repeat1, 2), SHIFT_REPEAT(98),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_command_repeat1, 2),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [393] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [399] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [405] = {.entry = {.count = 1, .reusable = false}}, SHIFT(102),
  [407] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [411] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [415] = {.entry = {.count = 1, .reusable = false}}, SHIFT(106),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [419] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(145),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(110),
  [427] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(96),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_math_group_repeat1, 2), SHIFT_REPEAT(105),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_text, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_text, 1),
  [439] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [441] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [443] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(134),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(113),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 3),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_brace_group, 3),
  [457] = {.entry = {.count = 1, .reusable = false}}, SHIFT(140),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 3),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_brace_group, 3),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_text, 1),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_text, 1),
  [467] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [469] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_value_brace_group, 2),
  [471] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_value_brace_group, 2),
  [473] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_title_brace_group, 2),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_brace_group, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [479] = {.entry = {.count = 1, .reusable = false}}, SHIFT(109),
  [481] = {.entry = {.count = 1, .reusable = false}}, SHIFT(122),
  [483] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(182),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(185),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [507] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_body, 1),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 2),
  [511] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 2),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 2),
  [515] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_body, 1),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 4),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 4),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_math_group, 3),
  [523] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 4),
  [525] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 4),
  [527] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 3),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 3),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 3),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 3),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_settings_block, 5),
  [537] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_settings_block, 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_option_block, 5),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_option_block, 5),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2),
  [561] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_settings_block_repeat1, 2), SHIFT_REPEAT(151),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_option_block_repeat1, 2),
  [568] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_option_block_repeat1, 2), SHIFT_REPEAT(186),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [577] = {.entry = {.count = 1, .reusable = false}}, SHIFT(141),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [583] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_setting, 3),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_title_setting, 3),
  [593] = {.entry = {.count = 1, .reusable = false}}, SHIFT(148),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [603] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_start, 1),
  [605] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [609] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [611] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_start, 1),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_start, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_typing_html_body, 1),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tikz_body, 1),
  [619] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_metapost_start, 1),
};

#ifdef __cplusplus
extern "C" {
#endif
void *tree_sitter_context_external_scanner_create(void);
void tree_sitter_context_external_scanner_destroy(void *);
bool tree_sitter_context_external_scanner_scan(void *, TSLexer *, const bool *);
unsigned tree_sitter_context_external_scanner_serialize(void *, char *);
void tree_sitter_context_external_scanner_deserialize(void *, const char *, unsigned);

#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_context(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .external_scanner = {
      &ts_external_scanner_states[0][0],
      ts_external_scanner_symbol_map,
      tree_sitter_context_external_scanner_create,
      tree_sitter_context_external_scanner_destroy,
      tree_sitter_context_external_scanner_scan,
      tree_sitter_context_external_scanner_serialize,
      tree_sitter_context_external_scanner_deserialize,
    },
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
