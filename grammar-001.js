
// CAVEATS
//
// This parser requires document start and stop commands
// This parser considers zero characters after the stop command to be an error


// Note: the escaped backslash _must_ be the last character in this array (ug)
var escaped_chars = ['#', '$', '%', '&', '^', '_', '{', '}', '|', '~', '\\'];

module.exports = grammar({
  name: 'context',
  
  // extras: $ => [" ", "\t"],
  
  externals: $ => [
    $.command_stop,
    $.paragraph_stop,
    $._eol,
    $.preamble_stop,
  ],

  rules: {
    // The production rules of the context-free grammar for the ConTeXt markup language

    // GENERAL DOCUMENT CONTENT
    
    // document: $ => repeat($._document_content),
    
    document: $ => seq($.preamble, $.main, $.postamble),
    

    // AREAS AND AREA MARKERS
    //
    // These ConTeXt commands divide the context file into areas:
    //   - Preamble (interpreted commands, but content is not displayed)
    //   - Main (Content is displayed)
    //   - Postamble (Everything is ignored by the processor)
    
    main_stop: $ => prec(20, choice("\\stoptext","\\stopcomponent")),  
    
    main_start: $ => prec(20, choice("\\starttext","\\startcomponent")), 
    
    preamble: $ => prec.left(seq(repeat($.preamble_content), $.preamble_stop)),

    main: $ => prec.right(18, seq($.main_start, repeat1($.paragraph), $.main_stop)),
    
    postamble: $ => prec(16, repeat1($.paragraph)),
    
    // PREAMBLE CONTENT
    //
    // Todo: handle buffers?
    
    preamble_content: $ => prec.left(16,
      choice(
        seq($.text, optional($._end_of_line)),
        // seq($.brace_group, optional($._end_of_line)),
        // seq($.escaped, optional($._end_of_line)),
        seq($.comment, $._end_of_line),
        // seq($.command, optional($._end_of_line)),
        // seq($.command_group, optional($._end_of_line_or_paragraph)),
      )
    ), 
    
    // PARAGRAPH CONTENT
    //
    // Paragraphs are the primary content unit.
    
    _end_of_line_or_paragraph: $ => choice($._eol, $.paragraph_stop),
    
    paragraph: $ => prec.right(14,
                      seq( 
                        repeat1(
                          $._paragraph_content
                        ),
                        $.paragraph_stop,
                      )
                    ),
      
    _paragraph_content: $ => prec.left(14,
                              choice(
                                seq($.text, optional($._end_of_line)),
                                seq($.brace_group, optional($._end_of_line)),
                                seq($.escaped, optional($._end_of_line)),
                                seq($.comment, $._end_of_line),
                                seq($.command, optional($._end_of_line)),
                                seq($.command_group, optional($._end_of_line_or_paragraph)),
                                seq($.inline_math, optional($._end_of_line)),
                                seq($.metapost_inclusion, optional($._end_of_line)), 
                                seq($.tikz_inclusion, optional($._end_of_line)), 
                                seq($.typing_inclusion, optional($._end_of_line)),
                                seq($.typing_html_inclusion, optional($._end_of_line)),
                              )
                            ), 
      
    // MISC TEXT CONTENT
                              
    // We have to double the slashes at the end of the regexp to account for the under-interpolation of escape in this context
    text: $ => new RegExp('[^\\n\\]\\['+escaped_chars.slice(1).join('')+'\\]+'),
       
    _end_of_line: $ =>  prec(5, choice('\n', '\r', '\r\n')),  
      
        
    // COMMENTS
    
    // TODO: tokenize multi-line comments?
    
    comment: $ => prec(10, token(seq('%', /[^\n]*/))),


    // ESCAPED CHARACTERS

    escapechar: $ => choice(...escaped_chars),

    escaped: $ => prec(10, seq('\\', $.escapechar)),


    // BRACE GROUP
    //  
    // This grouping class can accept either a '{' or a '\bgroup' to start the group, 
    // and a '}' or a '\egroup' to end the group. They do not need to match.
      
    brace_group_start: $ => prec(10, choice("{","\\bgroup")),  
    
    brace_group_stop: $ => prec(10, choice("}","\\egroup")), 
     
    _group_content: $ => choice(
      seq($.text, optional($._end_of_line)),
      seq($.brace_group, optional($._end_of_line)),
      seq($.escaped, optional($._end_of_line)),
      seq($.comment, $._end_of_line),
      seq($.command, optional($._end_of_line)),
      seq($.command_group, optional($._end_of_line_or_paragraph)),
      seq($.inline_math, optional($._end_of_line)),
      seq($.metapost_inclusion, optional($._end_of_line)), 
      seq($.tikz_inclusion, optional($._end_of_line)), 
      seq($.typing_inclusion, optional($._end_of_line)),
      seq($.typing_html_inclusion, optional($._end_of_line)),
    ),  
       
    brace_group: $ => prec(10, 
      seq(
        $.brace_group_start, 
        repeat($._group_content), 
        $.brace_group_stop
      )
    ),
  
    // COMMAND GROUP
    //
    // ConTeXt can also group document content between the commands "\start" and "\stop"
    //
    // FIXME: these tokens eat the trailing newline, which can suppress paragraph_stop detection
    
    command_group_start: $ => /\\start[^a-zA-Z]/,
    
    command_group_stop: $ => /\\stop[^a-zA-Z]/,
    
    command_group: $ => prec(10, seq($.command_group_start, repeat($._group_content), $.command_group_stop)),
    

    // INLINE MATH
    //
    // ConTeXt can handle inline math mode like TeX, marking the start and stop of math mode with a dollar sign ('$').
    // Brace groups ({}) are needed in inline math mode.
    
    math_group: $ => seq("{", repeat($._math_content), "}"),
    
    _math_content: $=> choice($.comment, $.escaped, $.math_group, $.math_text),
    
    math_text: $ => /[^${}]+/,
  
    inline_math: $ => prec(10,seq('$', repeat1($._math_content), '$')),

    
    // ENVIRONMENTS
    //
    // ConTeXt can embed other languages: Metafun, TiKz, and anything supported with typing
    // environments or the filter module.
    // 
    // (A non-goal for this grammar is discovery of any user-generated start/stop commands
    // in a document. We can support typing, and common environments like HTML and CSS, but
    // nothing bespoke...)
    
    // Metafun/Post
    metapost_start: $ => prec(10, choice("\\startMPinclusions","\\startuseMPgraphic","\\startreusableMPgraphic","\\startMPcode","\\startMPpage","\\startstaticMPfigure")),
    
    metapost_stop: $ => prec(10, choice("\\stopMPinclusions","\\stopuseMPgraphic","\\stopreusableMPgraphic","\\stopMPcode","\\stopMPpage","\\stopstaticMPfigure")),
    
    metapost_body: $ => /[^\\]*/,
    
    metapost_inclusion: $ => prec(10, seq($.metapost_start,$.metapost_body,$.metapost_stop)),
    
    // TiKz
    tikz_start: $ => prec(10, "\\starttikzpicture"),
    
    tikz_stop: $ => prec(10, "\\stoptikzpicture"),
    
    tikz_body: $ => /[^\\]*/,
    
    tikz_inclusion: $ => prec(10, seq($.tikz_start,$.tikz_body,$.tikz_stop)),
    
    // Typing 
    typing_start: $ => prec(10, choice("\\starttyping","\\startLUA","\\startMP","\\startPARSEDXML","\\startTEX","\\startXML","\\startCSS")),
    
    typing_stop: $ => prec(10, choice("\\stoptyping","\\stopLUA","\\stopMP","\\stopPARSEDXML","\\stopTEX","\\stopXML","\\stopCSS")),
    
    typing_body: $ => /[^\\]*/,
    
    typing_inclusion: $ => prec(10, seq($.typing_start,$.typing_body,$.typing_stop)),
    
    //HTML
    typing_html_start: $ => prec(10, "\\startHTML"),
     
    typing_html_stop: $ => prec(10, "\\stopHTML"),
     
    typing_html_body: $ => /[^\\]*/,
     
    typing_html_inclusion: $ => prec(10, seq($.typing_html_start,$.typing_html_body,$.typing_html_stop)),   
    
    
    // COMMANDS
    
    // For this parser, we'll use the following labels: option blocks of keywords, and settings blocks of key/value pairs.
    //
    // An _option block_ is a square bracket delimited set of none or more keywords, separated by commas. 
    // A _keyword_ is a switch to modify command behavior. Keywords may contain spaces.
    //
    // A _settings block_ is a square bracket delimited set of none or more key/value pairs, separated by commas (",").
    // A key/value pair is separated by an equals sign ("="). Keys may not have spaces in them. Values can be grouped
    // with curly braces.
    //
    // Arbitrary white space can occur between a command name and any options or settings blocks _except_ for a sequence of
    // two or more EOLs. Two EOLs in sequence terminate the command. 
    
    
    // Command names cannot contain numbers
    command_name: $ => /\\[a-zA-Z]+/,
    
    // Labels for tokenizing the boundaries of option blocks and settings blocks
    command_block_start: $ => "[",
    
    command_block_stop: $ => "]",
    
    // Option block    
    option_block: $ => prec(
                        11, 
                         seq(
                            $.command_block_start, 
                            optional(
                              seq(
                                $.keyword, 
                                repeat(
                                  seq(
                                    ',',
                                    optional($._end_of_line), 
                                    $.keyword, 
                                  )
                                )
                              )
                            ), 
                            optional(','),
                            optional($._end_of_line), 
                            $.command_block_stop
                          )
                        ),
     
    keyword: $ =>  /[^\s=,\[\]]+/,
     
    // Settings block    
    settings_block: $ => prec(
                          13, 
                          seq(
                            $.command_block_start, 
                            optional(
                              seq(
                                choice(
                                  $.setting,
                                  $.title_setting,  
                                ), 
                                repeat(
                                  seq(
                                    ',',
                                    optional($._end_of_line), 
                                    choice(
                                      $.setting,
                                      $.title_setting,
                                    )  
                                  )
                                )
                              )
                            ), 
                            optional(','),
                            optional($._end_of_line), 
                            $.command_block_stop,
                            )
                          ),
    
    setting: $ => seq($.key, '=', $.value),
    
    // We want special treatment for settings that have values of reader-presented text, like the
    // titles of sections or figures.
    title_setting: $ => prec.right(seq("title", '=', optional($.title_value))),
    
    title_value: $ => prec.right(repeat1($._title_content)),
    
    _title_content: $ => choice($.comment, $.escaped, $.title_brace_group, $.title_text, $.command, $._end_of_line),
    
    title_brace_group: $ => seq("{", repeat($._title_content), "}"),
    
    title_text: $ => /[^\\{}\[\]\s,][^\\{}\[\],]*/,
    
    // End special cases
    
    
    key: $ => /[^\s=,\[\]]+/,
    
    value: $ => prec.right(repeat1($._value_content)),
    
    _value_content: $ => choice($.comment, $.escaped, $.value_brace_group, $.value_text, $.command, $._end_of_line),
    
    value_text: $ => /[^\\{}\[\]\s,][^\\{}\[\],]*/,
    
    value_brace_group: $ => seq("{", repeat($._value_content), "}"),
        
    // The complete command rule
    command: $ => prec.right(
                    10, 
                      seq(
                        $.command_name,
                        repeat(
                          choice(
                            $.option_block, 
                            $.settings_block,
                            $.comment,
                            $._end_of_line,
                          )
                        ),
                        $.command_stop,
                      )
                    ),
    
    
 
        
  },
});