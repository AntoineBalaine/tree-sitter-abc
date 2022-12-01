#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 107
#define LARGE_STATE_COUNT 3
#define SYMBOL_COUNT 43
#define ALIAS_COUNT 0
#define TOKEN_COUNT 23
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 9
#define PRODUCTION_ID_COUNT 1

enum {
  anon_sym_BQUOTE = 1,
  sym_slur_open = 2,
  sym_slur_close = 3,
  aux_sym_note_construct_token1 = 4,
  anon_sym_LBRACK = 5,
  anon_sym_RBRACK = 6,
  sym_alteration = 7,
  sym_note_letter = 8,
  sym_octave = 9,
  sym_rest = 10,
  anon_sym_Z = 11,
  anon_sym_X = 12,
  aux_sym_multimeasure_rest_token1 = 13,
  sym_rhythm = 14,
  aux_sym_grace_note_token1 = 15,
  aux_sym_grace_note_token2 = 16,
  aux_sym_chord_symbol_token1 = 17,
  aux_sym_chord_symbol_token2 = 18,
  sym_annotation = 19,
  sym_tuplet_marker = 20,
  sym_chord_type = 21,
  sym_decoration_shorthand = 22,
  sym_source_file = 23,
  sym_music_content = 24,
  sym_nte_or_chrd = 25,
  sym_beam = 26,
  sym_note_construct = 27,
  sym_chord_cstrct = 28,
  sym_note = 29,
  sym_chord_note = 30,
  sym_pitch = 31,
  sym_multimeasure_rest = 32,
  sym_grace_note = 33,
  sym_chord_symbol_note = 34,
  sym_chord_symbol = 35,
  sym_decoration = 36,
  aux_sym_beam_repeat1 = 37,
  aux_sym_beam_repeat2 = 38,
  aux_sym_note_construct_repeat1 = 39,
  aux_sym_chord_cstrct_repeat1 = 40,
  aux_sym_pitch_repeat1 = 41,
  aux_sym_grace_note_repeat1 = 42,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_BQUOTE] = "`",
  [sym_slur_open] = "slur_open",
  [sym_slur_close] = "slur_close",
  [aux_sym_note_construct_token1] = "note_construct_token1",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [sym_alteration] = "alteration",
  [sym_note_letter] = "note_letter",
  [sym_octave] = "octave",
  [sym_rest] = "rest",
  [anon_sym_Z] = "Z",
  [anon_sym_X] = "X",
  [aux_sym_multimeasure_rest_token1] = "multimeasure_rest_token1",
  [sym_rhythm] = "rhythm",
  [aux_sym_grace_note_token1] = "grace_note_token1",
  [aux_sym_grace_note_token2] = "grace_note_token2",
  [aux_sym_chord_symbol_token1] = "chord_symbol_token1",
  [aux_sym_chord_symbol_token2] = "chord_symbol_token2",
  [sym_annotation] = "annotation",
  [sym_tuplet_marker] = "tuplet_marker",
  [sym_chord_type] = "chord_type",
  [sym_decoration_shorthand] = "decoration_shorthand",
  [sym_source_file] = "source_file",
  [sym_music_content] = "music_content",
  [sym_nte_or_chrd] = "nte_or_chrd",
  [sym_beam] = "beam",
  [sym_note_construct] = "note_construct",
  [sym_chord_cstrct] = "chord_cstrct",
  [sym_note] = "note",
  [sym_chord_note] = "chord_note",
  [sym_pitch] = "pitch",
  [sym_multimeasure_rest] = "multimeasure_rest",
  [sym_grace_note] = "grace_note",
  [sym_chord_symbol_note] = "chord_symbol_note",
  [sym_chord_symbol] = "chord_symbol",
  [sym_decoration] = "decoration",
  [aux_sym_beam_repeat1] = "beam_repeat1",
  [aux_sym_beam_repeat2] = "beam_repeat2",
  [aux_sym_note_construct_repeat1] = "note_construct_repeat1",
  [aux_sym_chord_cstrct_repeat1] = "chord_cstrct_repeat1",
  [aux_sym_pitch_repeat1] = "pitch_repeat1",
  [aux_sym_grace_note_repeat1] = "grace_note_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym_slur_open] = sym_slur_open,
  [sym_slur_close] = sym_slur_close,
  [aux_sym_note_construct_token1] = aux_sym_note_construct_token1,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [sym_alteration] = sym_alteration,
  [sym_note_letter] = sym_note_letter,
  [sym_octave] = sym_octave,
  [sym_rest] = sym_rest,
  [anon_sym_Z] = anon_sym_Z,
  [anon_sym_X] = anon_sym_X,
  [aux_sym_multimeasure_rest_token1] = aux_sym_multimeasure_rest_token1,
  [sym_rhythm] = sym_rhythm,
  [aux_sym_grace_note_token1] = aux_sym_grace_note_token1,
  [aux_sym_grace_note_token2] = aux_sym_grace_note_token2,
  [aux_sym_chord_symbol_token1] = aux_sym_chord_symbol_token1,
  [aux_sym_chord_symbol_token2] = aux_sym_chord_symbol_token2,
  [sym_annotation] = sym_annotation,
  [sym_tuplet_marker] = sym_tuplet_marker,
  [sym_chord_type] = sym_chord_type,
  [sym_decoration_shorthand] = sym_decoration_shorthand,
  [sym_source_file] = sym_source_file,
  [sym_music_content] = sym_music_content,
  [sym_nte_or_chrd] = sym_nte_or_chrd,
  [sym_beam] = sym_beam,
  [sym_note_construct] = sym_note_construct,
  [sym_chord_cstrct] = sym_chord_cstrct,
  [sym_note] = sym_note,
  [sym_chord_note] = sym_chord_note,
  [sym_pitch] = sym_pitch,
  [sym_multimeasure_rest] = sym_multimeasure_rest,
  [sym_grace_note] = sym_grace_note,
  [sym_chord_symbol_note] = sym_chord_symbol_note,
  [sym_chord_symbol] = sym_chord_symbol,
  [sym_decoration] = sym_decoration,
  [aux_sym_beam_repeat1] = aux_sym_beam_repeat1,
  [aux_sym_beam_repeat2] = aux_sym_beam_repeat2,
  [aux_sym_note_construct_repeat1] = aux_sym_note_construct_repeat1,
  [aux_sym_chord_cstrct_repeat1] = aux_sym_chord_cstrct_repeat1,
  [aux_sym_pitch_repeat1] = aux_sym_pitch_repeat1,
  [aux_sym_grace_note_repeat1] = aux_sym_grace_note_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_BQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_slur_open] = {
    .visible = true,
    .named = true,
  },
  [sym_slur_close] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_note_construct_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [sym_alteration] = {
    .visible = true,
    .named = true,
  },
  [sym_note_letter] = {
    .visible = true,
    .named = true,
  },
  [sym_octave] = {
    .visible = true,
    .named = true,
  },
  [sym_rest] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_Z] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_X] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_multimeasure_rest_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_rhythm] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_grace_note_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grace_note_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chord_symbol_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chord_symbol_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_tuplet_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_chord_type] = {
    .visible = true,
    .named = true,
  },
  [sym_decoration_shorthand] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_music_content] = {
    .visible = true,
    .named = true,
  },
  [sym_nte_or_chrd] = {
    .visible = true,
    .named = true,
  },
  [sym_beam] = {
    .visible = true,
    .named = true,
  },
  [sym_note_construct] = {
    .visible = true,
    .named = true,
  },
  [sym_chord_cstrct] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [sym_chord_note] = {
    .visible = true,
    .named = true,
  },
  [sym_pitch] = {
    .visible = true,
    .named = true,
  },
  [sym_multimeasure_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_grace_note] = {
    .visible = true,
    .named = true,
  },
  [sym_chord_symbol_note] = {
    .visible = true,
    .named = true,
  },
  [sym_chord_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_decoration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_beam_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_beam_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_construct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_chord_cstrct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pitch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grace_note_repeat1] = {
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

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 39,
  [40] = 40,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 63,
  [64] = 64,
  [65] = 65,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 75,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 88,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '0') ADVANCE(33);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(24);
      if (lookahead == 'X') ADVANCE(31);
      if (lookahead == 'Z') ADVANCE(30);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(28);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(37);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'O' ||
          lookahead == 'P' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(27);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(76);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(24);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(49);
      if (lookahead == 'a') ADVANCE(74);
      if (lookahead == 'd') ADVANCE(58);
      if (lookahead == 'm') ADVANCE(50);
      if (lookahead == 's') ADVANCE(75);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(24);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(24);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      END_STATE();
    case 5:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(24);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(13);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 9:
      if (lookahead == ':') ADVANCE(8);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 10:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 11:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(9);
      END_STATE();
    case 13:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 14:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '(') ADVANCE(19);
      if (lookahead == ')') ADVANCE(20);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(44);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(24);
      if (lookahead == 'X') ADVANCE(31);
      if (lookahead == 'Z') ADVANCE(30);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14)
      if (lookahead == '.' ||
          lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'O' ||
          lookahead == 'P' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(77);
      END_STATE();
    case 15:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '/') ADVANCE(35);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(24);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(28);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(37);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'O' ||
          lookahead == 'P' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(77);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(27);
      END_STATE();
    case 16:
      if (eof) ADVANCE(17);
      if (lookahead == '"') ADVANCE(43);
      if (lookahead == '(') ADVANCE(11);
      if (lookahead == '-') ADVANCE(21);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(24);
      if (lookahead == '[') ADVANCE(22);
      if (lookahead == ']') ADVANCE(23);
      if (lookahead == '^') ADVANCE(25);
      if (lookahead == '_') ADVANCE(26);
      if (lookahead == '`') ADVANCE(18);
      if (lookahead == '{') ADVANCE(40);
      if (lookahead == '}') ADVANCE(41);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(29);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(16)
      if (lookahead == '.' ||
          lookahead == 'H' ||
          lookahead == 'L' ||
          lookahead == 'M' ||
          lookahead == 'O' ||
          lookahead == 'P' ||
          lookahead == 'S' ||
          lookahead == 'T' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(77);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(24);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(24);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(10);
      if (lookahead == '0') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(34);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(10);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(37);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(39);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(45);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(12);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(47);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(48);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(61);
      if (lookahead == 'i') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(55);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(71);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(76);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 15},
  [7] = {.lex_state = 15},
  [8] = {.lex_state = 15},
  [9] = {.lex_state = 15},
  [10] = {.lex_state = 15},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 15},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 0},
  [22] = {.lex_state = 0},
  [23] = {.lex_state = 0},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 15},
  [31] = {.lex_state = 15},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 15},
  [35] = {.lex_state = 15},
  [36] = {.lex_state = 15},
  [37] = {.lex_state = 15},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 0},
  [59] = {.lex_state = 0},
  [60] = {.lex_state = 0},
  [61] = {.lex_state = 0},
  [62] = {.lex_state = 0},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 0},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 0},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 0},
  [70] = {.lex_state = 0},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 0},
  [77] = {.lex_state = 0},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 0},
  [81] = {.lex_state = 0},
  [82] = {.lex_state = 0},
  [83] = {.lex_state = 0},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 0},
  [86] = {.lex_state = 0},
  [87] = {.lex_state = 0},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 2},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 5},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 2},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 5},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_slur_open] = ACTIONS(1),
    [sym_slur_close] = ACTIONS(1),
    [aux_sym_note_construct_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_alteration] = ACTIONS(1),
    [sym_note_letter] = ACTIONS(1),
    [sym_octave] = ACTIONS(1),
    [sym_rest] = ACTIONS(1),
    [anon_sym_Z] = ACTIONS(1),
    [anon_sym_X] = ACTIONS(1),
    [aux_sym_multimeasure_rest_token1] = ACTIONS(1),
    [sym_rhythm] = ACTIONS(1),
    [aux_sym_grace_note_token1] = ACTIONS(1),
    [aux_sym_grace_note_token2] = ACTIONS(1),
    [aux_sym_chord_symbol_token1] = ACTIONS(1),
    [aux_sym_chord_symbol_token2] = ACTIONS(1),
    [sym_annotation] = ACTIONS(1),
    [sym_tuplet_marker] = ACTIONS(1),
    [sym_decoration_shorthand] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(105),
    [sym_music_content] = STATE(104),
    [sym_nte_or_chrd] = STATE(2),
    [sym_beam] = STATE(99),
    [sym_note_construct] = STATE(51),
    [sym_chord_cstrct] = STATE(51),
    [sym_note] = STATE(33),
    [sym_pitch] = STATE(16),
    [sym_multimeasure_rest] = STATE(99),
    [sym_grace_note] = STATE(11),
    [sym_chord_symbol] = STATE(54),
    [sym_decoration] = STATE(79),
    [aux_sym_note_construct_repeat1] = STATE(11),
    [sym_slur_open] = ACTIONS(3),
    [sym_slur_close] = ACTIONS(5),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_alteration] = ACTIONS(9),
    [sym_note_letter] = ACTIONS(11),
    [sym_rest] = ACTIONS(13),
    [anon_sym_Z] = ACTIONS(15),
    [anon_sym_X] = ACTIONS(15),
    [aux_sym_grace_note_token1] = ACTIONS(17),
    [aux_sym_chord_symbol_token1] = ACTIONS(19),
    [sym_annotation] = ACTIONS(21),
    [sym_tuplet_marker] = ACTIONS(23),
    [sym_decoration_shorthand] = ACTIONS(25),
  },
  [2] = {
    [sym_nte_or_chrd] = STATE(4),
    [sym_note_construct] = STATE(51),
    [sym_chord_cstrct] = STATE(51),
    [sym_note] = STATE(33),
    [sym_pitch] = STATE(16),
    [sym_grace_note] = STATE(11),
    [sym_chord_symbol] = STATE(54),
    [sym_decoration] = STATE(79),
    [aux_sym_beam_repeat1] = STATE(4),
    [aux_sym_beam_repeat2] = STATE(91),
    [aux_sym_note_construct_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(27),
    [anon_sym_BQUOTE] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(7),
    [sym_alteration] = ACTIONS(9),
    [sym_note_letter] = ACTIONS(11),
    [sym_rest] = ACTIONS(13),
    [aux_sym_grace_note_token1] = ACTIONS(17),
    [aux_sym_chord_symbol_token1] = ACTIONS(19),
    [sym_annotation] = ACTIONS(31),
    [sym_tuplet_marker] = ACTIONS(33),
    [sym_decoration_shorthand] = ACTIONS(25),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 17,
    ACTIONS(35), 1,
      ts_builtin_sym_end,
    ACTIONS(37), 1,
      anon_sym_LBRACK,
    ACTIONS(40), 1,
      sym_alteration,
    ACTIONS(43), 1,
      sym_note_letter,
    ACTIONS(46), 1,
      sym_rest,
    ACTIONS(49), 1,
      aux_sym_grace_note_token1,
    ACTIONS(52), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(55), 1,
      sym_annotation,
    ACTIONS(58), 1,
      sym_tuplet_marker,
    ACTIONS(61), 1,
      sym_decoration_shorthand,
    STATE(16), 1,
      sym_pitch,
    STATE(33), 1,
      sym_note,
    STATE(54), 1,
      sym_chord_symbol,
    STATE(79), 1,
      sym_decoration,
    STATE(3), 2,
      sym_nte_or_chrd,
      aux_sym_beam_repeat1,
    STATE(11), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(51), 2,
      sym_note_construct,
      sym_chord_cstrct,
  [55] = 17,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(19), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(31), 1,
      sym_annotation,
    ACTIONS(33), 1,
      sym_tuplet_marker,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(16), 1,
      sym_pitch,
    STATE(33), 1,
      sym_note,
    STATE(54), 1,
      sym_chord_symbol,
    STATE(79), 1,
      sym_decoration,
    STATE(3), 2,
      sym_nte_or_chrd,
      aux_sym_beam_repeat1,
    STATE(11), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(51), 2,
      sym_note_construct,
      sym_chord_cstrct,
  [110] = 16,
    ACTIONS(7), 1,
      anon_sym_LBRACK,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(19), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(31), 1,
      sym_annotation,
    ACTIONS(33), 1,
      sym_tuplet_marker,
    STATE(16), 1,
      sym_pitch,
    STATE(33), 1,
      sym_note,
    STATE(54), 1,
      sym_chord_symbol,
    STATE(79), 1,
      sym_decoration,
    STATE(93), 1,
      sym_nte_or_chrd,
    STATE(11), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(51), 2,
      sym_note_construct,
      sym_chord_cstrct,
  [161] = 4,
    ACTIONS(68), 1,
      sym_octave,
    ACTIONS(71), 1,
      aux_sym_chord_symbol_token1,
    STATE(6), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(66), 14,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [187] = 4,
    ACTIONS(75), 1,
      sym_octave,
    ACTIONS(77), 1,
      aux_sym_chord_symbol_token1,
    STATE(6), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(73), 14,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [213] = 4,
    ACTIONS(75), 1,
      sym_octave,
    ACTIONS(81), 1,
      aux_sym_chord_symbol_token1,
    STATE(6), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(79), 14,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [239] = 4,
    ACTIONS(85), 1,
      sym_octave,
    ACTIONS(87), 1,
      aux_sym_chord_symbol_token1,
    STATE(7), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(83), 14,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [265] = 4,
    ACTIONS(77), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(89), 1,
      sym_octave,
    STATE(8), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(73), 14,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [291] = 14,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(19), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      sym_annotation,
    ACTIONS(95), 1,
      sym_tuplet_marker,
    STATE(16), 1,
      sym_pitch,
    STATE(27), 1,
      sym_note,
    STATE(56), 1,
      sym_chord_symbol,
    STATE(80), 1,
      sym_decoration,
    STATE(45), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [335] = 12,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(97), 1,
      anon_sym_RBRACK,
    ACTIONS(99), 1,
      sym_annotation,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(15), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [374] = 12,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(99), 1,
      sym_annotation,
    ACTIONS(101), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(15), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [413] = 12,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(99), 1,
      sym_annotation,
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(15), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [452] = 12,
    ACTIONS(105), 1,
      anon_sym_RBRACK,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(113), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(119), 1,
      sym_annotation,
    ACTIONS(122), 1,
      sym_decoration_shorthand,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(15), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [491] = 3,
    ACTIONS(127), 1,
      sym_rhythm,
    ACTIONS(129), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(125), 12,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [512] = 12,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(99), 1,
      sym_annotation,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(15), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [551] = 12,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(99), 1,
      sym_annotation,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(15), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [590] = 12,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(99), 1,
      sym_annotation,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(15), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [629] = 11,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(99), 1,
      sym_annotation,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(13), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [665] = 11,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(99), 1,
      sym_annotation,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(19), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [701] = 2,
    ACTIONS(139), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(137), 12,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [719] = 11,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(99), 1,
      sym_annotation,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(17), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [755] = 11,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(99), 1,
      sym_annotation,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(14), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [791] = 11,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(99), 1,
      sym_annotation,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(12), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [827] = 11,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(99), 1,
      sym_annotation,
    STATE(16), 1,
      sym_pitch,
    STATE(67), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
    STATE(18), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [863] = 3,
    ACTIONS(143), 1,
      aux_sym_note_construct_token1,
    ACTIONS(145), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(141), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [882] = 3,
    ACTIONS(149), 1,
      aux_sym_note_construct_token1,
    ACTIONS(151), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(147), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [901] = 3,
    ACTIONS(155), 1,
      aux_sym_note_construct_token1,
    ACTIONS(157), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(153), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [920] = 3,
    ACTIONS(161), 1,
      sym_rhythm,
    ACTIONS(163), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(159), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [939] = 3,
    ACTIONS(167), 1,
      sym_rhythm,
    ACTIONS(169), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(165), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [958] = 3,
    ACTIONS(173), 1,
      aux_sym_note_construct_token1,
    ACTIONS(175), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(171), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [977] = 3,
    ACTIONS(179), 1,
      aux_sym_note_construct_token1,
    ACTIONS(181), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(177), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [996] = 3,
    ACTIONS(185), 1,
      sym_rhythm,
    ACTIONS(187), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(183), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1015] = 3,
    ACTIONS(191), 1,
      sym_rhythm,
    ACTIONS(193), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(189), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1034] = 3,
    ACTIONS(197), 1,
      sym_rhythm,
    ACTIONS(199), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(195), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1053] = 3,
    ACTIONS(203), 1,
      sym_rhythm,
    ACTIONS(205), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(201), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1072] = 3,
    ACTIONS(209), 1,
      aux_sym_note_construct_token1,
    ACTIONS(211), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(207), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1091] = 2,
    ACTIONS(215), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(213), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1107] = 2,
    ACTIONS(211), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(207), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1123] = 2,
    ACTIONS(205), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(201), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1139] = 2,
    ACTIONS(145), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(141), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1155] = 2,
    ACTIONS(193), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(189), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1171] = 2,
    ACTIONS(157), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(153), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1187] = 4,
    ACTIONS(219), 1,
      aux_sym_grace_note_token1,
    ACTIONS(222), 1,
      aux_sym_chord_symbol_token1,
    STATE(45), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(217), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1207] = 2,
    ACTIONS(163), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(159), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1223] = 2,
    ACTIONS(175), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(171), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1239] = 10,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(17), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(224), 1,
      sym_annotation,
    STATE(16), 1,
      sym_pitch,
    STATE(70), 1,
      sym_note,
    STATE(83), 1,
      sym_decoration,
    STATE(45), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1271] = 2,
    ACTIONS(169), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(165), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1287] = 2,
    ACTIONS(187), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(183), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1303] = 2,
    ACTIONS(228), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(226), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1319] = 2,
    ACTIONS(232), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(230), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1335] = 2,
    ACTIONS(151), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(147), 10,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1351] = 10,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(93), 1,
      sym_annotation,
    ACTIONS(95), 1,
      sym_tuplet_marker,
    STATE(16), 1,
      sym_pitch,
    STATE(27), 1,
      sym_note,
    STATE(80), 1,
      sym_decoration,
  [1382] = 10,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      sym_tuplet_marker,
    STATE(16), 1,
      sym_pitch,
    STATE(27), 1,
      sym_note,
    STATE(80), 1,
      sym_decoration,
  [1413] = 10,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(236), 1,
      sym_annotation,
    ACTIONS(238), 1,
      sym_tuplet_marker,
    STATE(16), 1,
      sym_pitch,
    STATE(29), 1,
      sym_note,
    STATE(76), 1,
      sym_decoration,
  [1444] = 9,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    ACTIONS(238), 1,
      sym_tuplet_marker,
    STATE(16), 1,
      sym_pitch,
    STATE(29), 1,
      sym_note,
    STATE(76), 1,
      sym_decoration,
  [1472] = 9,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(27), 1,
      sym_note,
    STATE(80), 1,
      sym_decoration,
  [1500] = 2,
    ACTIONS(242), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(240), 8,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1514] = 9,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    ACTIONS(95), 1,
      sym_tuplet_marker,
    STATE(16), 1,
      sym_pitch,
    STATE(27), 1,
      sym_note,
    STATE(80), 1,
      sym_decoration,
  [1542] = 9,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    ACTIONS(246), 1,
      sym_tuplet_marker,
    STATE(16), 1,
      sym_pitch,
    STATE(38), 1,
      sym_note,
    STATE(78), 1,
      sym_decoration,
  [1570] = 8,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(29), 1,
      sym_note,
    STATE(76), 1,
      sym_decoration,
  [1595] = 8,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(32), 1,
      sym_note,
    STATE(77), 1,
      sym_decoration,
  [1620] = 8,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(27), 1,
      sym_note,
    STATE(80), 1,
      sym_decoration,
  [1645] = 8,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(38), 1,
      sym_note,
    STATE(78), 1,
      sym_decoration,
  [1670] = 1,
    ACTIONS(250), 7,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_decoration_shorthand,
  [1680] = 1,
    ACTIONS(252), 7,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_decoration_shorthand,
  [1690] = 1,
    ACTIONS(254), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1700] = 1,
    ACTIONS(256), 7,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_decoration_shorthand,
  [1710] = 1,
    ACTIONS(258), 7,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_decoration_shorthand,
  [1720] = 1,
    ACTIONS(260), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1730] = 1,
    ACTIONS(262), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1740] = 1,
    ACTIONS(264), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1750] = 7,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    STATE(16), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(85), 1,
      sym_decoration,
  [1772] = 7,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    STATE(16), 1,
      sym_pitch,
    STATE(70), 1,
      sym_note,
    STATE(83), 1,
      sym_decoration,
  [1794] = 6,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(38), 1,
      sym_note,
  [1813] = 6,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(28), 1,
      sym_note,
  [1832] = 6,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(248), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(32), 1,
      sym_note,
  [1851] = 6,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(27), 1,
      sym_note,
  [1870] = 6,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(234), 1,
      anon_sym_LBRACK,
    STATE(16), 1,
      sym_pitch,
    STATE(29), 1,
      sym_note,
  [1889] = 4,
    ACTIONS(268), 1,
      sym_alteration,
    ACTIONS(271), 1,
      sym_note_letter,
    ACTIONS(274), 1,
      aux_sym_grace_note_token2,
    STATE(81), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [1903] = 5,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    STATE(16), 1,
      sym_pitch,
    STATE(70), 1,
      sym_note,
  [1919] = 5,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    STATE(16), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
  [1935] = 4,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(276), 1,
      aux_sym_grace_note_token2,
    STATE(81), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [1949] = 5,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    STATE(16), 1,
      sym_pitch,
    STATE(66), 1,
      sym_note,
  [1965] = 3,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    STATE(84), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [1976] = 1,
    ACTIONS(278), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [1983] = 2,
    ACTIONS(280), 1,
      sym_alteration,
    ACTIONS(282), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [1992] = 1,
    ACTIONS(284), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [1998] = 3,
    ACTIONS(286), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(288), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(290), 1,
      sym_chord_type,
  [2008] = 3,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      aux_sym_beam_repeat2,
  [2018] = 3,
    ACTIONS(292), 1,
      ts_builtin_sym_end,
    ACTIONS(294), 1,
      anon_sym_BQUOTE,
    STATE(92), 1,
      aux_sym_beam_repeat2,
  [2028] = 1,
    ACTIONS(292), 2,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
  [2033] = 2,
    ACTIONS(297), 1,
      sym_note_letter,
    STATE(106), 1,
      sym_chord_symbol_note,
  [2040] = 2,
    ACTIONS(297), 1,
      sym_note_letter,
    STATE(101), 1,
      sym_chord_symbol_note,
  [2047] = 2,
    ACTIONS(299), 1,
      sym_note_letter,
    STATE(90), 1,
      sym_chord_symbol_note,
  [2054] = 2,
    ACTIONS(301), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(303), 1,
      aux_sym_chord_symbol_token2,
  [2061] = 2,
    ACTIONS(282), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(305), 1,
      sym_alteration,
  [2068] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [2072] = 1,
    ACTIONS(307), 1,
      ts_builtin_sym_end,
  [2076] = 1,
    ACTIONS(309), 1,
      aux_sym_chord_symbol_token1,
  [2080] = 1,
    ACTIONS(311), 1,
      sym_note_letter,
  [2084] = 1,
    ACTIONS(313), 1,
      aux_sym_multimeasure_rest_token1,
  [2088] = 1,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
  [2092] = 1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
  [2096] = 1,
    ACTIONS(319), 1,
      aux_sym_chord_symbol_token1,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(3)] = 0,
  [SMALL_STATE(4)] = 55,
  [SMALL_STATE(5)] = 110,
  [SMALL_STATE(6)] = 161,
  [SMALL_STATE(7)] = 187,
  [SMALL_STATE(8)] = 213,
  [SMALL_STATE(9)] = 239,
  [SMALL_STATE(10)] = 265,
  [SMALL_STATE(11)] = 291,
  [SMALL_STATE(12)] = 335,
  [SMALL_STATE(13)] = 374,
  [SMALL_STATE(14)] = 413,
  [SMALL_STATE(15)] = 452,
  [SMALL_STATE(16)] = 491,
  [SMALL_STATE(17)] = 512,
  [SMALL_STATE(18)] = 551,
  [SMALL_STATE(19)] = 590,
  [SMALL_STATE(20)] = 629,
  [SMALL_STATE(21)] = 665,
  [SMALL_STATE(22)] = 701,
  [SMALL_STATE(23)] = 719,
  [SMALL_STATE(24)] = 755,
  [SMALL_STATE(25)] = 791,
  [SMALL_STATE(26)] = 827,
  [SMALL_STATE(27)] = 863,
  [SMALL_STATE(28)] = 882,
  [SMALL_STATE(29)] = 901,
  [SMALL_STATE(30)] = 920,
  [SMALL_STATE(31)] = 939,
  [SMALL_STATE(32)] = 958,
  [SMALL_STATE(33)] = 977,
  [SMALL_STATE(34)] = 996,
  [SMALL_STATE(35)] = 1015,
  [SMALL_STATE(36)] = 1034,
  [SMALL_STATE(37)] = 1053,
  [SMALL_STATE(38)] = 1072,
  [SMALL_STATE(39)] = 1091,
  [SMALL_STATE(40)] = 1107,
  [SMALL_STATE(41)] = 1123,
  [SMALL_STATE(42)] = 1139,
  [SMALL_STATE(43)] = 1155,
  [SMALL_STATE(44)] = 1171,
  [SMALL_STATE(45)] = 1187,
  [SMALL_STATE(46)] = 1207,
  [SMALL_STATE(47)] = 1223,
  [SMALL_STATE(48)] = 1239,
  [SMALL_STATE(49)] = 1271,
  [SMALL_STATE(50)] = 1287,
  [SMALL_STATE(51)] = 1303,
  [SMALL_STATE(52)] = 1319,
  [SMALL_STATE(53)] = 1335,
  [SMALL_STATE(54)] = 1351,
  [SMALL_STATE(55)] = 1382,
  [SMALL_STATE(56)] = 1413,
  [SMALL_STATE(57)] = 1444,
  [SMALL_STATE(58)] = 1472,
  [SMALL_STATE(59)] = 1500,
  [SMALL_STATE(60)] = 1514,
  [SMALL_STATE(61)] = 1542,
  [SMALL_STATE(62)] = 1570,
  [SMALL_STATE(63)] = 1595,
  [SMALL_STATE(64)] = 1620,
  [SMALL_STATE(65)] = 1645,
  [SMALL_STATE(66)] = 1670,
  [SMALL_STATE(67)] = 1680,
  [SMALL_STATE(68)] = 1690,
  [SMALL_STATE(69)] = 1700,
  [SMALL_STATE(70)] = 1710,
  [SMALL_STATE(71)] = 1720,
  [SMALL_STATE(72)] = 1730,
  [SMALL_STATE(73)] = 1740,
  [SMALL_STATE(74)] = 1750,
  [SMALL_STATE(75)] = 1772,
  [SMALL_STATE(76)] = 1794,
  [SMALL_STATE(77)] = 1813,
  [SMALL_STATE(78)] = 1832,
  [SMALL_STATE(79)] = 1851,
  [SMALL_STATE(80)] = 1870,
  [SMALL_STATE(81)] = 1889,
  [SMALL_STATE(82)] = 1903,
  [SMALL_STATE(83)] = 1919,
  [SMALL_STATE(84)] = 1935,
  [SMALL_STATE(85)] = 1949,
  [SMALL_STATE(86)] = 1965,
  [SMALL_STATE(87)] = 1976,
  [SMALL_STATE(88)] = 1983,
  [SMALL_STATE(89)] = 1992,
  [SMALL_STATE(90)] = 1998,
  [SMALL_STATE(91)] = 2008,
  [SMALL_STATE(92)] = 2018,
  [SMALL_STATE(93)] = 2028,
  [SMALL_STATE(94)] = 2033,
  [SMALL_STATE(95)] = 2040,
  [SMALL_STATE(96)] = 2047,
  [SMALL_STATE(97)] = 2054,
  [SMALL_STATE(98)] = 2061,
  [SMALL_STATE(99)] = 2068,
  [SMALL_STATE(100)] = 2072,
  [SMALL_STATE(101)] = 2076,
  [SMALL_STATE(102)] = 2080,
  [SMALL_STATE(103)] = 2084,
  [SMALL_STATE(104)] = 2088,
  [SMALL_STATE(105)] = 2092,
  [SMALL_STATE(106)] = 2096,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_music_content, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(21),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(102),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(16),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(86),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(96),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(60),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(64),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(87),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pitch_repeat1, 2),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pitch_repeat1, 2), SHIFT_REPEAT(6),
  [71] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pitch_repeat1, 2),
  [73] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 2),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [77] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 2),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 3),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 3),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 1),
  [85] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 1),
  [89] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [101] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [105] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(102),
  [110] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(9),
  [113] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(16),
  [116] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(86),
  [119] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(75),
  [122] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(87),
  [125] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 6),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 6),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 3),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 6),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 6),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 8),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 8),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 5),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 1),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 7),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 7),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 4),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 4),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 3),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 3),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 5),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 5),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 4),
  [213] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 7),
  [215] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 7),
  [217] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(86),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nte_or_chrd, 1),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nte_or_chrd, 1),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 9),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 9),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grace_note, 3),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 4),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [268] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(102),
  [271] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(9),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [282] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [284] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [292] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2),
  [294] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2), SHIFT_REPEAT(5),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [317] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ABC(void) {
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
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
