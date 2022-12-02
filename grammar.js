module.exports = grammar({
  name: 'ABC',


  extras: $ => [$._space, $.NEWLINE],
  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => $.body_inline_info,

    _space: _ => / /,
    NEWLINE: _ => /\n/,
    TEXTLINE: $ => seq($.TEXT, $.NEWLINE),





    // TYPES OF LINES
    COMMENTLINE: $ => seq(/%[^%]/, $.TEXTLINE),
    stylesheet_directives: $ => seq("%%", $.TEXTLINE),
    MUSIC_CODE: $ => seq(repeat1(choice($.bar, $.music_content)), optional(choice("\\", "$")), choice($.COMMENTLINE, $.NEWLINE)),

    // FILE STRUCTURE
    tune_body: $ => seq(repeat(choice($.MUSIC_CODE, $.body_info_line, $.COMMENTLINE, $.stylesheet_directives))),

    // BODY
    music_content: $ => choice(
      $.beam,
      $.annotation,
      $.nte_or_chrd,
      $.slur_open,
      $.slur_close,
      $.tuplet_marker,
      $.multimeasure_rest,
      $.Nth_ending
    ),

    //NOTES
    //the note prefixes can't be included as a rule, since they will match an empty string
    nte_or_chrd: $ => choice($.note_construct, $.chord_cstrct),
    beam: $ => prec(1, seq($.nte_or_chrd, choice(repeat1($.nte_or_chrd), repeat1(seq("`", $.nte_or_chrd))))),

    slur_open: $ => "(",
    slur_close: $ => ")",
    note_construct: $ => seq(seq(repeat($.grace_note), optional($.chord_symbol), optional($.decoration)), $.note, optional(/-/)),
    chord_cstrct: $ => seq(seq(repeat($.grace_note), optional($.chord_symbol), optional($.decoration)), "[", repeat1($.chord_note), "]", optional($.rhythm)),

    note: $ => seq(choice($.pitch, $.rest), optional($.rhythm)),
    chord_note: $ => seq(repeat($.grace_note), optional($.decoration), $.note),

    pitch: $ => seq(optional($.alteration), $.note_letter, repeat($.octave)),
    alteration: $ => /(=|_|\^|\^\^|__|♭|♮|♯|𝄫|𝄪)/,
    note_letter: $ => token.immediate(/[a-gA-G]/),
    octave: $ => token.immediate(/[',]/),

    rest: $ => /[xz]/,
    multimeasure_rest: $ => seq(choice("Z", "X"), token.immediate(/[0-9]+/)),
    rhythm: $ => token.immediate(/[1-9]*\/[1-9]+|[<>]+|[1-9]+|[\/]+/),

    //note prefixes
    // shouldn't the chord-symbols go before the grace notes?
    // note_prefixes: $ => seq(repeat($.grace_note), optional($.chord_symbol), optional($.annotation), optional($.tuplet_marker), optional($.decoration)),
    grace_note: $ => seq(/\{(\/)?/, repeat1($.pitch), /\}/),
    chord_symbol_note: $ => seq($.note_letter, optional($.alteration)),
    chord_symbol: $ => seq(/\"/, $.chord_symbol_note, optional($.chord_type), optional(seq(/\//, $.chord_symbol_note)), /\"/),
    annotation: $ => /\"[^\"\n]*\"/,
    tuplet_marker: $ => /\(\d+(((:\d+){1,2})(::\d+))?\s*/,
    decoration: $ => $.decoration_shorthand,
    chord_type: $ => token.immediate(choice("minor", "major", "diminished", "augmented", "suspended", "7", "9", /\w+/)),
    decoration_shorthand: $ => /[\.~HLMOPSTuv]/,

    //BAR LINES

    bar: $ => seq(repeat($.music_content), $.generic_bar_line),
    Nth_ending: $ => seq($.nth_ending_number, $.music_content,
      choice($.bar_line, $.thin_double_bar_line
        , $.end_of_repeated_section, $.close_thin_thick_double_bar_line, $.open_thick_thin_double_bar_line)),
    // variant_ending: $ => seq($.parts_line, /\n/, repeat1($.Nth_ending)), // TBFinished: add music inside the bars,

    nth_ending_number: $ => seq("[", /[0-9]/, optional(repeat(seq(choice(",", "-"), /[0-9]/)))),
    bar_line: $ => "|",
    close_thin_thick_double_bar_line: $ => "|]",
    thin_double_bar_line: $ => "||",
    open_thick_thin_double_bar_line: $ => "[|",
    start_of_repeated_section: $ => "|:",
    end_of_repeated_section: $ => ":|",
    start_end_of_two_repeated_sections: $ => "::",
    generic_bar_line: $ => choice($.thin_double_bar_line, $.close_thin_thick_double_bar_line,
      $.open_thick_thin_double_bar_line,
      $.start_of_repeated_section, $.end_of_repeated_section,
      $.start_end_of_two_repeated_sections, $.first_repeat_bar, $.second_repeat_bar, $.bar_line),
    first_repeat_bar: $ => seq($.bar_line, optional(seq(/\s/, "[")), /[0-9]+/),
    second_repeat_bar: $ => seq(($.end_of_repeated_section), optional(seq(/\s/, "[")), /[0-9]+/),

    //LYRICS
    lyric_line: $ => seq($.words_postbody, $.NEWLINE),
    lyric_section: $ => repeat1($.lyric_line),

    lyric_syllable: $ => seq(/\w+/),
    verse_number: $ => seq(/\d/, "."),
    lyric_text: $ => choice($.verse_number, $.lyric_syllable,
      $.bar_line, /-/, /_/,
      /\~/, /\*/),

    //SYMBOLS
    symbol: $ => seq("!trill!", "!trill(!", "!trill)!", "!lowermordent!", "!uppermordent!", "!mordent!", "!pralltriller!", "!roll!", "!turn!", "!turnx!", "!invertedturn!", "!invertedturnx!", "!arpeggio!", "!>!", "!accent!", "!emphasis!", "!fermata!", "!invertedfermata!", "!tenuto!", "!0! - !5!", "!+!", "!plus!", "!snap!", "!slide!", "!wedge!", "!upbow!", "!downbow!", "!open!", "!thumb!", "!breath!", "!pppp!", "!ppp!", "!pp!", "!p!", "!mp!", "!mf!", "!f!", "!ff!", "!fff!", "!ffff!", "!sfz!", "!crescendo(!", "!<(!", "!crescendo)!", "!<)!", "!diminuendo(!", "!>(!", "!diminuendo)!", "!>)!", "!segno!", "!coda!", "!D.S.!", "!D.C.!", "!dacoda!", "!dacapo!", "!fine!", "!shortphrase!", "!mediumphrase!", "!longphrase!"),


    // // INFO LINES
    part_line_content: $ => choice(repeat1($.sections_group), repeat1($.section_name)),
    parts_line: $ => seq("P:", repeat1($.part_line_content)),

    section_name: $ => seq(optional("."), /\w+/, /[0-9]*/),
    sections_group: $ => seq((optional("."), "(", repeat1(choice($.sections_group, $.section_name)), ")", /[0-9]*/)),


    body_inline_info: $ => seq("[", choice(
      //   $.instruction,
      $.key,
      $.macros,
      $.meter,
      $.notes,
      $.parts_line,
      $.remark,
      $.rhythm_line,
      $.symbol_line,
      $.tempo,
      $.unit_note_length,
      $.user_defined,
      $.voice
    ), "]"),

    TEXT: $ => /[^\]]*/,

    abc_version: $ => seq("%abc-", /[0-9]/, repeat(seq(".", /[0-9]/))),
    area: $ => seq("A:", $.TEXT),
    book: $ => seq("B:", $.TEXT),
    composer: $ => seq("C:", $.TEXT),
    discography: $ => seq("D:", $.TEXT),
    file: $ => seq("F:", $.TEXT),
    group: $ => seq("G:", $.TEXT),
    history: $ => seq("H:", $.TEXT),
    instruction: $ => seq("I:", $.TEXT),
    key: $ => seq("K:", $.TEXT),
    macros: $ => seq("m:", $.TEXT),
    meter: $ => seq("M:", $.TEXT),
    notes: $ => seq("N:", $.TEXT),
    origin: $ => seq("O:", $.TEXT),
    parts_line: $ => seq("P:", $.part_line_content),
    reference_number: $ => seq("X:", /[0-9]/),
    remark: $ => seq("r:", $.TEXT),
    rhythm_line: $ => seq("R:", $.TEXT),
    source: $ => seq("S:", $.TEXT),
    symbol_line: $ => seq("s:", repeat1(choice($.symbol, $.chord_symbol, $.annotation, $.generic_bar_line, /\*/))),
    tempo: $ => seq("Q:", $.TEXT),
    transcription: $ => seq("Z:", $.TEXT),
    tune_title: $ => seq("T:", $.TEXT),
    unit_note_length: $ => seq("L:", $.TEXT),
    user_defined: $ => seq("U:", choice(/[h-w]/, /H-W/), "=", $.symbol),
    voice: $ => seq("V:", $.TEXT),
    words_line: $ => seq("w:", repeat1($.lyric_text), $.NEWLINE, repeat(seq(/\+:/, repeat1($.lyric_text)))),
    words_postbody: $ => seq("W:", $.TEXT),

  }
});
