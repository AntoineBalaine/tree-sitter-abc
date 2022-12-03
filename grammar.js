module.exports = grammar({
  name: 'abc',

  conflicts: $ => [[$._MUSIC_CODE, $.bar],
  [$._MUSIC_CODE],
  [$.tune_header]
  ],
  extras: $ => [$._space, $._NEWLINE],
  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => $.tune,

    _space: _ => / /,
    _NEWLINE: _ => /\n/,
    TEXTLINE: $ => seq($.TEXT, $._NEWLINE),



    SLASH: $ => seq("\\"),
    plus: $ => seq("+"),
    //ms_cnt_ln: $ => seq($.TEXT, $.SLASH, $._NEWLINE),
    field_header: $ => seq(/\w/, ":"),
    note_skip: $ => ("*"),
    HYPHEN: $ => ("-"),
    UNDERSCORE: $ => ("_"),
    TILDE: $ => ("~"),


    // TYPES OF LINES
    // info_field: $ => seq($.field_header, $.TEXTLINE, repeat(seq($.plus, $.TEXTLINE))),
    COMMENTLINE: $ => /%[^%\n]*/,
    stylesheet_directives: $ => seq("%%", $.TEXTLINE),
    _MUSIC_CODE: $ => seq(
      repeat1(
        choice($.bar, $._music_content)),
      optional(choice("\\", "$")),
      /* choice($.COMMENTLINE, $._NEWLINE) */),

    // FILE STRUCTURE
    file_structure: $ => seq(
      optional($.file_header), $.tune, repeat(seq($._NEWLINE, $.tune))
    ),
    file_header: $ => seq(repeat1(choice($.file_header_info_line, $.stylesheet_directives, $.COMMENTLINE)), $._NEWLINE),
    tune: $ => seq($.tune_header, optional($.tune_body), optional($.lyric_section)),
    tune_header: $ => seq($.reference_number, repeat(choice($.tune_header_info_line, $.COMMENTLINE))),
    tune_body: $ => seq($._MUSIC_CODE, repeat1(
      choice(
        $._MUSIC_CODE,
        $.body_info_line,
        $.COMMENTLINE,
        $.stylesheet_directives))),

    // BODY
    _music_content: $ => choice(
      $.beam,
      $.annotation,
      $._nte_or_chrd,
      $.slur_open,
      $.slur_close,
      $.tuplet_marker,
      $.multimeasure_rest,
      $.Nth_ending
    ),
    body_info_line: $ => seq(choice(
      field("type", $.instruction),
      field("type", $.key),
      field("type", $.macros),
      field("type", $.meter),
      field("type", $.notes),
      field("type", $.parts_line),
      field("type", $.remark),
      field("type", $.rhythm_line),
      field("type", $.symbol_line),
      field("type", $.tempo),
      field("type", $.tune_title),
      field("type", $.unit_note_length),
      field("type", $.user_defined),
      field("type", $.voice),
      field("type", $.words_line),
    ), /.*/, choice($._NEWLINE, $.COMMENTLINE)),

    tune_header_info_line: $ => seq(
      choice(field("type", $.abc_version),
        field("type", $.area),
        field("type", $.book),
        field("type", $.composer),
        field("type", $.discography),
        field("type", $.file),
        field("type", $.group),
        field("type", $.history),
        field("type", $.instruction),
        field("type", $.key),
        field("type", $.macros),
        field("type", $.meter),
        field("type", $.notes),
        field("type", $.origin),
        field("type", $.parts_line),
        field("type", $.reference_number),
        field("type", $.remark),
        field("type", $.rhythm_line),
        field("type", $.source),
        field("type", $.symbol_line),
        field("type", $.tempo),
        field("type", $.transcription),
        field("type", $.tune_title),
        field("type", $.unit_note_length),
        field("type", $.user_defined),
        field("type", $.voice),
        field("type", $.words_postbody)
      ), /.*/),

    file_header_info_line: $ => seq(choice(
      field("type", $.abc_version),
      field("type", $.area),
      field("type", $.book),
      field("type", $.composer),
      field("type", $.discography),
      field("type", $.file),
      field("type", $.group),
      field("type", $.history),
      field("type", $.instruction),
      field("type", $.macros),
      field("type", $.meter),
      field("type", $.notes),
      field("type", $.origin),
      field("type", $.remark),
      field("type", $.rhythm_line),
      field("type", $.source),
      field("type", $.transcription),
      field("type", $.unit_note_length),
      field("type", $.user_defined),
    ), /.*/, choice($._NEWLINE, $.COMMENTLINE)),

    //NOTES
    //the note prefixes can't be included as a rule, since they will match an empty string
    _nte_or_chrd: $ => choice($._note_construct, $._chord_cstrct),
    beam: $ => prec(1, seq($._nte_or_chrd, choice(repeat1($._nte_or_chrd), repeat1(seq("`", $._nte_or_chrd))))),

    slur_open: $ => "(",
    slur_close: $ => ")",
    _note_construct: $ => seq(seq(repeat($.grace_note), optional($.chord_symbol), optional($.decoration)), $.note, optional(/-/)),
    _chord_cstrct: $ => seq(seq(repeat($.grace_note), optional($.chord_symbol), optional($.decoration)), "[", repeat1($.chord_note), "]", optional($.rhythm)),

    note: $ => seq(choice($._pitch, $.rest), optional($.rhythm)),
    chord_note: $ => seq(repeat($.grace_note), optional($.decoration), $.note),

    _pitch: $ => seq(optional($.alteration), $.note_letter, repeat($.octave)),
    alteration: $ => /(=|_|\^|\^\^|__|♭|♮|♯|𝄫|𝄪)/,
    note_letter: $ => token.immediate(/[a-gA-G]/),
    octave: $ => token.immediate(/[',]/),

    rest: $ => /[xz]/,
    multimeasure_rest: $ => seq(choice("Z", "X"), token.immediate(/[0-9]+/)),
    rhythm: $ => token.immediate(/[1-9]*\/[1-9]+|[<>]+|[1-9]+|[\/]+/),

    // NOTE PREFIXES
    // shouldn't the chord-symbols go before the grace notes?
    // note_prefixes: $ => seq(repeat($.grace_note), optional($.chord_symbol), optional($.annotation), optional($.tuplet_marker), optional($.decoration)),
    grace_note: $ => seq(/\{(\/)?/, repeat1($._pitch), /\}/),
    chord_symbol_note: $ => seq($.note_letter, optional($.alteration)),
    chord_symbol: $ => seq(/\"/, $.chord_symbol_note, optional($.chord_type), optional(seq(/\//, $.chord_symbol_note)), /\"/),
    annotation: $ => /\"[^\"\n]*\"/,
    tuplet_marker: $ => /\(\d+(((:\d+){1,2})(::\d+))?\s*/,
    decoration: $ => $.decoration_shorthand,
    chord_type: $ => token.immediate(choice("minor", "major", "diminished", "augmented", "suspended", "7", "9", /\w+/)),
    decoration_shorthand: $ => /[\.~HLMOPSTuv]/,

    //BAR LINES
    bar: $ => seq(repeat($._music_content), $.generic_bar_line),
    Nth_ending: $ => seq($.nth_ending_number, $._music_content,
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
    lyric_line: $ => seq($.words_postbody, $._NEWLINE),
    lyric_section: $ => repeat1($.lyric_line),

    lyric_syllable: $ => seq(/\w+/),
    verse_number: $ => seq(/\d/, "."),
    lyric_text: $ => choice($.verse_number, $.lyric_syllable,
      $.bar_line, $.HYPHEN, $.UNDERSCORE,
      $.TILDE, $.note_skip),

    //SYMBOLS
    symbol: $ => seq("!trill!", "!trill(!", "!trill)!", "!lowermordent!", "!uppermordent!", "!mordent!", "!pralltriller!", "!roll!", "!turn!", "!turnx!", "!invertedturn!", "!invertedturnx!", "!arpeggio!", "!>!", "!accent!", "!emphasis!", "!fermata!", "!invertedfermata!", "!tenuto!", "!0! - !5!", "!+!", "!plus!", "!snap!", "!slide!", "!wedge!", "!upbow!", "!downbow!", "!open!", "!thumb!", "!breath!", "!pppp!", "!ppp!", "!pp!", "!p!", "!mp!", "!mf!", "!f!", "!ff!", "!fff!", "!ffff!", "!sfz!", "!crescendo(!", "!<(!", "!crescendo)!", "!<)!", "!diminuendo(!", "!>(!", "!diminuendo)!", "!>)!", "!segno!", "!coda!", "!D.S.!", "!D.C.!", "!dacoda!", "!dacapo!", "!fine!", "!shortphrase!", "!mediumphrase!", "!longphrase!"),


    // // INFO LINES
    part_line_content: $ => choice(repeat1($.sections_group), repeat1($.section_name)),
    parts_line: $ => seq("P:", repeat1($.part_line_content)),

    section_name: $ => seq(optional("."), /\w+/, /[0-9]*/),
    sections_group: $ => seq((optional("."), "(", repeat1(choice($.sections_group, $.section_name)), ")", /[0-9]*/)),


    body_inline_info: $ => seq("[", choice(
      $.instruction,
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
    ), /[^\]]*/, "]"),

    TEXT: $ => /[^\]]*/,
    abc_version: $ => seq("%abc-", /[0-9]/, repeat(seq(".", /[0-9]/))),
    area: $ => "A:",
    book: $ => "B:",
    composer: $ => "C:",
    discography: $ => "D:",
    file: $ => "F:",
    group: $ => "G:",
    history: $ => "H:",
    instruction: $ => "I:",
    key: $ => "K:",
    macros: $ => "m:",
    meter: $ => "M:",
    notes: $ => "N:",
    origin: $ => "O:",
    parts_line: $ => "P:",
    reference_number: $ => seq("X:", /[0-9]/),
    remark: $ => "r:",
    rhythm_line: $ => "R:",
    source: $ => "S:",
    symbol_line: $ => seq("s:", repeat1(choice($.symbol, $.chord_symbol, $.annotation, $.generic_bar_line, $.note_skip))),
    tempo: $ => "Q:",
    transcription: $ => "Z:",
    tune_title: $ => "T:",
    unit_note_length: $ => "L:",
    user_defined: $ => seq("U:", choice(/[h-w]/, /H-W/), "=", $.symbol),
    voice: $ => "V:",
    words_line: $ => seq("w:", repeat1($.lyric_text), $._NEWLINE, repeat(seq(/\+:/, repeat1($.lyric_text)))),
    words_postbody: $ => "W:",

  }
})
