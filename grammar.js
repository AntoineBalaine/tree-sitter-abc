module.exports = grammar({
  name: 'ABC',

  rules: {
    // TODO: add the actual grammar rules
    source_file: $ => $.note_construct,
    //notes
    note_construct: $ => seq($.note_prefixes, $.note, optional(/-/)),
    note: $ => seq(choice($.pitch, $.rest), optional($.rhythm)),
    octave: $ => /'|,/,
    alteration: $ => /(=|_|\^|\^\^|__|♭|♮|♯|𝄫|𝄪)/,
    note_letter: $ => /[a-gA-G]/,
    pitch: $ => seq(optional($.alteration), $.note_letter, repeat($.octave)),
    rest: $ => /[xz]/,
    rhythm: $ => /[1-9]*\/[1-9]+|[\/><1-9]+|[<>]+|[1-9]+/,

    //note prefixes
    note_prefixes: $ => seq(repeat($.grace_note), optional($.chord_symbol), optional($.annotation), optional($.tuplet_marker), optional($.decoration)),
    grace_note: $ => seq(/\{\/?/, $.pitch, /\}/),
    chord_symbol_note: $ => seq($.note_letter, optional($.alteration)),
    chord_symbol: $ => seq(/\"/, $.chord_symbol_note, optional($.chord_type), optional(seq(/\//, $.chord_symbol_note)), /\"/),
    annotation: $ => /\"[^\"\n]*\"/,
    tuplet_marker: $ => /\(\d+(((:\d+){1,2})|(::\d+))?\s*/,
    decoration: $ => $.decoration_shorthand,
    chord_type: $ => choice("minor", "major", "diminished", "augmented", "suspended", "7", "9", /\w+/),
    decoration_shorthand: $ => /[\.~HLMOPSTuv]/,
  }
});
