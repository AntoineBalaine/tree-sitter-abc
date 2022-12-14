


module.exports = grammar({
  name: 'abc',

  conflicts: $ => [[$.beam]],
  extras: _ => [],
  rules: {
    // TODO: add the actual grammar rules
    source_file: $ =>
      $.file_structure,

    _space: _ => / /,
    _NL: _ => "\n",
    TEXTLINE: $ => seq($.TEXT, $._NL),
    noCommentText: _ => (/[^%\n]+/),


    SLASH: _ => seq("\\"),
    plus: _ => seq("+"),
    //ms_cnt_ln: $ => seq($.TEXT, $.SLASH, $._NL),
    field_header: _ => seq(/\w/, ":"),
    note_skip: _ => ("*"),
    HYPHEN: _ => ("-"),
    UNDERSCORE: _ => ("_"),
    TILDE: _ => ("~"),
    BEAM_SEPARATOR: _ => "`",
    open_chord: _ => "[",
    close_chord: _ => "]",

    // TYPES OF LINES
    // info_field: $ => seq($.field_header, $.TEXTLINE, repeat(seq($.plus, $.TEXTLINE))),
    COMMENT: _ => /%[^%\n]*/,
    stylesheet_directives: $ => seq("%%", $.noCommentText),
    _MUSIC_CODE: $ => seq(
      $._music_content,
      optional(/[\s]+/)
    ),


    // FILE STRUCTURE
    file_structure: $ => seq(
      optional($.file_header),
      repeat1(seq($.tune, repeat($._NL))),
    ),
    file_header: $ => repeat1(
      seq(
        choice($.file_header_info_line, $.stylesheet_directives, $.COMMENT),
        repeat1($._NL)
      ),
    ),
    tune: $ => prec.left(seq($.tune_header, optional(seq($.tune_body, repeat($._NL))), optional($.lyric_section))),
    tune_header: $ => prec.left(seq(
      $.reference_number_line,
      repeat(seq(choice($.tune_header_info_line, $.COMMENT), $._NL)),
    )),
    tune_body: $ => seq($._MUSIC_CODE, repeat(
      seq(choice(
        $._MUSIC_CODE,
        seq($.body_info_line, $._NL),
        seq($.COMMENT, $._NL),
        $.stylesheet_directives),
      ))),

    // BODY
    _music_content: $ => choice(
      $.generic_bar_line,
      $.beam,
      $.annotation,
      seq($._nte_or_chrd, /[\s]+/),
      $.slur_open,
      $.slur_close,
      $.multimeasure_rest,
      $.symbol,
      $.body_inline_info,
      "\\",
    ),
    //NOTES
    //the note prefixes can't be included as a rule, since they will match an empty string
    _nte_or_chrd: $ => choice($.note_construct, $._chord_cstrct),
    beam: $ => seq(
      $._nte_or_chrd,
      repeat1(
        seq(optional($.BEAM_SEPARATOR),
          $._nte_or_chrd)),
    ),

    slur_open: _ => "(",
    slur_close: _ => ")",
    note_construct: $ => seq(seq(repeat($.grace_note), optional($.chord_symbol), optional($.tuplet_marker), optional($.decoration)), $.note, optional(/-/)),
    _chord_cstrct: $ => seq(seq(repeat($.grace_note), optional($.chord_symbol), optional($.tuplet_marker), optional($.decoration)), $.open_chord, repeat1($.chord_note), $.close_chord, optional($.rhythm)),

    note: $ => seq(choice($._pitch, $.rest), optional($.rhythm)),
    chord_note: $ => seq(repeat($.grace_note), optional($.decoration), $.note),

    _pitch: $ => seq(optional($.alteration), $.note_letter, repeat($.octave)),
    alteration: _ => /(=|_|\^|\^\^|__|♭|♮|♯|𝄫|𝄪)/,
    note_letter: _ => token.immediate(/[a-gA-G]/),
    octave: _ => token.immediate(/[',]/),

    rest: _ => /[xz]/,
    multimeasure_rest: _ => seq(choice("Z", "X"), token.immediate(/[0-9]+/)),
    rhythm: _ => token.immediate(/[1-9]*\/[1-9]+|[<>]+|[1-9]+|[\/]+/),

    // NOTE PREFIXES
    // shouldn't the chord-symbols go before the grace notes?
    // note_prefixes: $ => seq(repeat($.grace_note), optional($.chord_symbol), optional($.annotation), optional($.tuplet_marker), optional($.decoration)),
    grace_note: $ => seq(/\{(\/)?/, repeat1($._pitch), /\}/),
    chord_symbol_note: $ => seq($.note_letter, optional($.alteration)),
    chord_symbol: $ => seq(/\"/, $.chord_symbol_note, optional($.chord_type), optional(seq(/\//, $.chord_symbol_note)), /\"/),
    annotation: _ => /\"[^\"\n]*\"/,
    tuplet_marker: _ => /\(\d+(((:\d+){1,2})(::\d+))?\s*/,
    decoration: $ => $.decoration_shorthand,
    chord_type: _ => token.immediate(choice("minor", "major", "diminished", "augmented", "suspended", "7", "9", /\w+/)),
    decoration_shorthand: _ => /[\.~HLMOPSTuv]/,

    //BAR LINES
    // bar: $ => seq(repeat($._music_content), $.generic_bar_line),
    nth_ending_barline: $ => prec(2, seq(
      choice(
        $.bar_line,
        $.thin_double_bar_line,
        $.end_of_repeated_section,
        $.close_thin_thick_double_bar_line,
        $.open_thick_thin_double_bar_line),
      optional(/[\s]+/),
      $.nth_ending_number)),
    // Nth_ending: $ => seq($.nth_ending_number, $._music_content,
    // choice($.bar_line, $.thin_double_bar_line
    //   , $.end_of_repeated_section, $.close_thin_thick_double_bar_line, $.open_thick_thin_double_bar_line)),
    // variant_ending: $ => seq($.parts_line, /\n/, repeat1($.Nth_ending)), // TBFinished: add music inside the bars,

    nth_ending_number: _ => seq("[", /[0-9]/, optional(repeat(seq(choice(",", "-"), /[0-9]/)))),
    bar_line: _ => "|",
    close_thin_thick_double_bar_line: _ => "|]",
    thin_double_bar_line: _ => "||",
    open_thick_thin_double_bar_line: _ => "[|",
    start_of_repeated_section: _ => "|:",
    end_of_repeated_section: _ => ":|",
    start_end_of_two_repeated_sections: _ => "::",
    generic_bar_line: $ => choice(
      $.nth_ending_barline,
      $.thin_double_bar_line,
      $.close_thin_thick_double_bar_line,
      $.open_thick_thin_double_bar_line,
      $.start_of_repeated_section, $.end_of_repeated_section,
      $.start_end_of_two_repeated_sections,
      $.first_repeat_bar,
      $.second_repeat_bar,
      $.bar_line,
    ),
    first_repeat_bar: $ => seq($.bar_line, optional(seq(/\s/, "[")), /[0-9]+/),
    second_repeat_bar: $ => seq(($.end_of_repeated_section), optional(seq(/\s/, "[")), /[0-9]+/),

    //LYRICS
    lyric_line: $ => seq($.words_postbody, /[^\n]*/, $._NL),
    lyric_section: $ => repeat1($.lyric_line),

    lyric_syllable: _ => seq(/\w+/),
    verse_number: _ => seq(/\d/, "."),
    lyric_text: $ => choice($.verse_number, $.lyric_syllable,
      $.bar_line, $.HYPHEN, $.UNDERSCORE,
      $.TILDE, $.note_skip),

    //SYMBOLS
    symbol: _ => choice("!trill!", "!trill(!", "!trill)!", "!lowermordent!", "!uppermordent!", "!mordent!", "!pralltriller!", "!roll!", "!turn!", "!turnx!", "!invertedturn!", "!invertedturnx!", "!arpeggio!", "!>!", "!accent!", "!emphasis!", "!fermata!", "!invertedfermata!", "!tenuto!", "!0! - !5!", "!+!", "!plus!", "!snap!", "!slide!", "!wedge!", "!upbow!", "!downbow!", "!open!", "!thumb!", "!breath!", "!pppp!", "!ppp!", "!pp!", "!p!", "!mp!", "!mf!", "!f!", "!ff!", "!fff!", "!ffff!", "!sfz!", "!crescendo(!", "!<(!", "!crescendo)!", "!<)!", "!diminuendo(!", "!>(!", "!diminuendo)!", "!>)!", "!segno!", "!coda!", "!D.S.!", "!D.C.!", "!dacoda!", "!dacapo!", "!fine!", "!shortphrase!", "!mediumphrase!", "!longphrase!"),


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
    ), /[^%\n\]]*/, "]"),

    TEXT: _ => /[^\]]*/,
    abc_version: _ => seq("%abc-", /[0-9]/, repeat(seq(".", /[0-9]/))),
    area: _ => "A:",
    book: _ => "B:",
    composer: _ => "C:",
    discography: _ => "D:",
    file: _ => "F:",
    group: _ => "G:",
    history: _ => "H:",
    instruction: _ => "I:",
    key: _ => "K:",
    macros: _ => "m:",
    meter: _ => "M:",
    notes: _ => "N:",
    origin: _ => "O:",
    parts_line: _ => "P:",
    reference_number_line: $ => seq("X:", /[0-9]/, /[^\n]*/, optional($.COMMENT), $._NL),
    remark: _ => "r:",
    rhythm_line: _ => "R:",
    source: _ => "S:",
    symbol_line: $ => seq("s:", repeat1(choice($.symbol, $.chord_symbol, $.annotation, $.generic_bar_line, $.note_skip))),
    tempo: _ => "Q:",
    transcription: _ => "Z:",
    tune_title: _ => "T:",
    unit_note_length: _ => "L:",
    user_defined: $ => seq("U:", choice(/[h-w]/, /H-W/), "=", $.symbol),
    voice: _ => "V:",
    words_tag: _ => "w:",
    words_postbody: _ => "W:",



    body_info_line: $ => prec.left(seq(choice(
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
      field("type", $.words_tag),
    ), $.noCommentText, optional($.COMMENT))),

    tune_header_info_line: $ => seq(
      choice(
        field("type", $.abc_version),
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
      ), $.noCommentText, optional($.COMMENT)),


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
    ), $.noCommentText, optional($.COMMENT)),


  }
})
