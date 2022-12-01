#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 108
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 51
#define ALIAS_COUNT 0
#define TOKEN_COUNT 30
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
  anon_sym_minor = 21,
  anon_sym_major = 22,
  anon_sym_diminished = 23,
  anon_sym_augmented = 24,
  anon_sym_suspended = 25,
  anon_sym_7 = 26,
  anon_sym_9 = 27,
  aux_sym_chord_type_token1 = 28,
  sym_decoration_shorthand = 29,
  sym_source_file = 30,
  sym_music_content = 31,
  sym_nte_or_chrd = 32,
  sym_beam = 33,
  sym_note_construct = 34,
  sym_chord_cstrct = 35,
  sym_note = 36,
  sym_chord_note = 37,
  sym_pitch = 38,
  sym_multimeasure_rest = 39,
  sym_grace_note = 40,
  sym_chord_symbol_note = 41,
  sym_chord_symbol = 42,
  sym_decoration = 43,
  sym_chord_type = 44,
  aux_sym_beam_repeat1 = 45,
  aux_sym_beam_repeat2 = 46,
  aux_sym_note_construct_repeat1 = 47,
  aux_sym_chord_cstrct_repeat1 = 48,
  aux_sym_pitch_repeat1 = 49,
  aux_sym_grace_note_repeat1 = 50,
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
  [anon_sym_minor] = "minor",
  [anon_sym_major] = "major",
  [anon_sym_diminished] = "diminished",
  [anon_sym_augmented] = "augmented",
  [anon_sym_suspended] = "suspended",
  [anon_sym_7] = "7",
  [anon_sym_9] = "9",
  [aux_sym_chord_type_token1] = "chord_type_token1",
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
  [sym_chord_type] = "chord_type",
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
  [anon_sym_minor] = anon_sym_minor,
  [anon_sym_major] = anon_sym_major,
  [anon_sym_diminished] = anon_sym_diminished,
  [anon_sym_augmented] = anon_sym_augmented,
  [anon_sym_suspended] = anon_sym_suspended,
  [anon_sym_7] = anon_sym_7,
  [anon_sym_9] = anon_sym_9,
  [aux_sym_chord_type_token1] = aux_sym_chord_type_token1,
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
  [sym_chord_type] = sym_chord_type,
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
  [anon_sym_minor] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_major] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_diminished] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_augmented] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_suspended] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_7] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_9] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_chord_type_token1] = {
    .visible = false,
    .named = false,
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
  [sym_chord_type] = {
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
  [98] = 98,
  [99] = 50,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '(') ADVANCE(31);
      if (lookahead == ')') ADVANCE(32);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '7') ADVANCE(70);
      if (lookahead == '9') ADVANCE(72);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(36);
      if (lookahead == 'X') ADVANCE(45);
      if (lookahead == 'Z') ADVANCE(44);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == 'm') ADVANCE(9);
      if (lookahead == 's') ADVANCE(23);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(42);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('0' <= lookahead && lookahead <= '8')) ADVANCE(46);
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
          lookahead == '~') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(41);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '7') ADVANCE(71);
      if (lookahead == '9') ADVANCE(73);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(2)
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '/') ADVANCE(57);
      if (lookahead == '7') ADVANCE(71);
      if (lookahead == '9') ADVANCE(73);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(36);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'a') ADVANCE(104);
      if (lookahead == 'd') ADVANCE(86);
      if (lookahead == 'm') ADVANCE(74);
      if (lookahead == 's') ADVANCE(105);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(3)
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 4:
      if (lookahead == '"') ADVANCE(55);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(36);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(4)
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(27);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(27);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(5);
      END_STATE();
    case 8:
      if (lookahead == ':') ADVANCE(7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == 'a') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(16);
      END_STATE();
    case 10:
      if (lookahead == 'd') ADVANCE(68);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(13);
      END_STATE();
    case 12:
      if (lookahead == 'e') ADVANCE(15);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(10);
      END_STATE();
    case 14:
      if (lookahead == 'j') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'n') ADVANCE(11);
      END_STATE();
    case 16:
      if (lookahead == 'n') ADVANCE(18);
      END_STATE();
    case 17:
      if (lookahead == 'o') ADVANCE(20);
      END_STATE();
    case 18:
      if (lookahead == 'o') ADVANCE(21);
      END_STATE();
    case 19:
      if (lookahead == 'p') ADVANCE(12);
      END_STATE();
    case 20:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 21:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 22:
      if (lookahead == 's') ADVANCE(19);
      END_STATE();
    case 23:
      if (lookahead == 'u') ADVANCE(22);
      END_STATE();
    case 24:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 25:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 26:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(8);
      END_STATE();
    case 27:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 28:
      if (eof) ADVANCE(29);
      if (lookahead == '"') ADVANCE(56);
      if (lookahead == '(') ADVANCE(25);
      if (lookahead == '-') ADVANCE(33);
      if (lookahead == '/') ADVANCE(48);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(36);
      if (lookahead == '[') ADVANCE(34);
      if (lookahead == ']') ADVANCE(35);
      if (lookahead == '^') ADVANCE(37);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == '`') ADVANCE(30);
      if (lookahead == '{') ADVANCE(53);
      if (lookahead == '}') ADVANCE(54);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(42);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(50);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(43);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(28)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
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
          lookahead == '~') ADVANCE(107);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(41);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(36);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(sym_alteration);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(47);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(47);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(24);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(49);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(51);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(52);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(58);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(26);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(59);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(61);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(anon_sym_minor);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(anon_sym_minor);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(anon_sym_major);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(anon_sym_major);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(anon_sym_diminished);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(anon_sym_augmented);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(anon_sym_suspended);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(anon_sym_suspended);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(anon_sym_7);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(anon_sym_7);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(anon_sym_9);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(46);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(anon_sym_9);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'a') ADVANCE(89);
      if (lookahead == 'i') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'd') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'd') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'd') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'd') ADVANCE(81);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'e') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'e') ADVANCE(92);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'e') ADVANCE(76);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'e') ADVANCE(93);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'e') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'g') ADVANCE(90);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'h') ADVANCE(83);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'i') ADVANCE(91);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'i') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'i') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'j') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'm') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'm') ADVANCE(87);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'n') ADVANCE(103);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 93:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'n') ADVANCE(78);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 94:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'n') ADVANCE(88);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 95:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'n') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 96:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'o') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 97:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'o') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 98:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'p') ADVANCE(82);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 99:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'r') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 100:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'r') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 101:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 's') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 102:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 's') ADVANCE(85);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 103:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 't') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 104:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'u') ADVANCE(84);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 105:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (lookahead == 'u') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 106:
      ACCEPT_TOKEN(aux_sym_chord_type_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(106);
      END_STATE();
    case 107:
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
  [6] = {.lex_state = 28},
  [7] = {.lex_state = 28},
  [8] = {.lex_state = 28},
  [9] = {.lex_state = 28},
  [10] = {.lex_state = 28},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 28},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
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
  [28] = {.lex_state = 28},
  [29] = {.lex_state = 28},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 28},
  [33] = {.lex_state = 28},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 28},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 28},
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
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 3},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 0},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 0},
  [57] = {.lex_state = 0},
  [58] = {.lex_state = 2},
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
  [88] = {.lex_state = 0},
  [89] = {.lex_state = 0},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 4},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 4},
  [107] = {.lex_state = 0},
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
    [aux_sym_grace_note_token1] = ACTIONS(1),
    [aux_sym_grace_note_token2] = ACTIONS(1),
    [aux_sym_chord_symbol_token1] = ACTIONS(1),
    [aux_sym_chord_symbol_token2] = ACTIONS(1),
    [sym_annotation] = ACTIONS(1),
    [sym_tuplet_marker] = ACTIONS(1),
    [anon_sym_minor] = ACTIONS(1),
    [anon_sym_major] = ACTIONS(1),
    [anon_sym_suspended] = ACTIONS(1),
    [anon_sym_7] = ACTIONS(1),
    [anon_sym_9] = ACTIONS(1),
    [sym_decoration_shorthand] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(103),
    [sym_music_content] = STATE(102),
    [sym_nte_or_chrd] = STATE(2),
    [sym_beam] = STATE(105),
    [sym_note_construct] = STATE(47),
    [sym_chord_cstrct] = STATE(47),
    [sym_note] = STATE(34),
    [sym_pitch] = STATE(12),
    [sym_multimeasure_rest] = STATE(105),
    [sym_grace_note] = STATE(11),
    [sym_chord_symbol] = STATE(59),
    [sym_decoration] = STATE(83),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 19,
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
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(31), 1,
      sym_annotation,
    ACTIONS(33), 1,
      sym_tuplet_marker,
    STATE(12), 1,
      sym_pitch,
    STATE(34), 1,
      sym_note,
    STATE(59), 1,
      sym_chord_symbol,
    STATE(83), 1,
      sym_decoration,
    STATE(91), 1,
      aux_sym_beam_repeat2,
    STATE(4), 2,
      sym_nte_or_chrd,
      aux_sym_beam_repeat1,
    STATE(11), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(47), 2,
      sym_note_construct,
      sym_chord_cstrct,
  [61] = 17,
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
    STATE(12), 1,
      sym_pitch,
    STATE(34), 1,
      sym_note,
    STATE(59), 1,
      sym_chord_symbol,
    STATE(83), 1,
      sym_decoration,
    STATE(3), 2,
      sym_nte_or_chrd,
      aux_sym_beam_repeat1,
    STATE(11), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(47), 2,
      sym_note_construct,
      sym_chord_cstrct,
  [116] = 17,
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
    STATE(12), 1,
      sym_pitch,
    STATE(34), 1,
      sym_note,
    STATE(59), 1,
      sym_chord_symbol,
    STATE(83), 1,
      sym_decoration,
    STATE(3), 2,
      sym_nte_or_chrd,
      aux_sym_beam_repeat1,
    STATE(11), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(47), 2,
      sym_note_construct,
      sym_chord_cstrct,
  [171] = 16,
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
    STATE(12), 1,
      sym_pitch,
    STATE(34), 1,
      sym_note,
    STATE(59), 1,
      sym_chord_symbol,
    STATE(83), 1,
      sym_decoration,
    STATE(96), 1,
      sym_nte_or_chrd,
    STATE(11), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(47), 2,
      sym_note_construct,
      sym_chord_cstrct,
  [222] = 4,
    ACTIONS(68), 1,
      sym_octave,
    ACTIONS(70), 1,
      aux_sym_chord_symbol_token1,
    STATE(10), 1,
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
  [248] = 4,
    ACTIONS(74), 1,
      sym_octave,
    ACTIONS(76), 1,
      aux_sym_chord_symbol_token1,
    STATE(8), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(72), 14,
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
  [274] = 4,
    ACTIONS(70), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(78), 1,
      sym_octave,
    STATE(9), 1,
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
  [300] = 4,
    ACTIONS(82), 1,
      sym_octave,
    ACTIONS(85), 1,
      aux_sym_chord_symbol_token1,
    STATE(9), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(80), 14,
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
  [326] = 4,
    ACTIONS(78), 1,
      sym_octave,
    ACTIONS(89), 1,
      aux_sym_chord_symbol_token1,
    STATE(9), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(87), 14,
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
  [352] = 14,
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
    STATE(12), 1,
      sym_pitch,
    STATE(35), 1,
      sym_note,
    STATE(56), 1,
      sym_chord_symbol,
    STATE(81), 1,
      sym_decoration,
    STATE(45), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [396] = 3,
    ACTIONS(99), 1,
      sym_rhythm,
    ACTIONS(101), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(97), 12,
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
  [417] = 12,
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
    ACTIONS(103), 1,
      anon_sym_RBRACK,
    ACTIONS(105), 1,
      sym_annotation,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(14), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [456] = 12,
    ACTIONS(107), 1,
      anon_sym_RBRACK,
    ACTIONS(109), 1,
      sym_alteration,
    ACTIONS(112), 1,
      sym_note_letter,
    ACTIONS(115), 1,
      sym_rest,
    ACTIONS(118), 1,
      aux_sym_grace_note_token1,
    ACTIONS(121), 1,
      sym_annotation,
    ACTIONS(124), 1,
      sym_decoration_shorthand,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(14), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [495] = 12,
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
    ACTIONS(105), 1,
      sym_annotation,
    ACTIONS(127), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(14), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [534] = 12,
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
    ACTIONS(105), 1,
      sym_annotation,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(14), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [573] = 12,
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
    ACTIONS(105), 1,
      sym_annotation,
    ACTIONS(131), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(14), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [612] = 12,
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
    ACTIONS(105), 1,
      sym_annotation,
    ACTIONS(133), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(14), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [651] = 12,
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
    ACTIONS(105), 1,
      sym_annotation,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(14), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [690] = 11,
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
    ACTIONS(105), 1,
      sym_annotation,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(15), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [726] = 11,
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
    ACTIONS(105), 1,
      sym_annotation,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(19), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [762] = 11,
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
    ACTIONS(105), 1,
      sym_annotation,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(16), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [798] = 11,
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
    ACTIONS(105), 1,
      sym_annotation,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(17), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [834] = 2,
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
  [852] = 11,
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
    ACTIONS(105), 1,
      sym_annotation,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(18), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [888] = 11,
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
    ACTIONS(105), 1,
      sym_annotation,
    STATE(12), 1,
      sym_pitch,
    STATE(69), 1,
      sym_note,
    STATE(88), 1,
      sym_decoration,
    STATE(13), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [924] = 3,
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
  [943] = 3,
    ACTIONS(149), 1,
      sym_rhythm,
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
  [962] = 3,
    ACTIONS(155), 1,
      sym_rhythm,
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
  [981] = 3,
    ACTIONS(161), 1,
      aux_sym_note_construct_token1,
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
  [1000] = 3,
    ACTIONS(167), 1,
      aux_sym_note_construct_token1,
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
  [1019] = 3,
    ACTIONS(173), 1,
      sym_rhythm,
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
  [1038] = 3,
    ACTIONS(179), 1,
      sym_rhythm,
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
  [1057] = 3,
    ACTIONS(185), 1,
      aux_sym_note_construct_token1,
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
  [1076] = 3,
    ACTIONS(191), 1,
      aux_sym_note_construct_token1,
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
  [1095] = 3,
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
  [1114] = 3,
    ACTIONS(203), 1,
      aux_sym_note_construct_token1,
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
  [1133] = 3,
    ACTIONS(209), 1,
      sym_rhythm,
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
  [1152] = 2,
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
  [1168] = 10,
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
    ACTIONS(213), 1,
      sym_annotation,
    STATE(12), 1,
      sym_pitch,
    STATE(76), 1,
      sym_note,
    STATE(86), 1,
      sym_decoration,
    STATE(45), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1200] = 2,
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
  [1216] = 2,
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
  [1232] = 2,
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
  [1248] = 2,
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
  [1264] = 4,
    ACTIONS(217), 1,
      aux_sym_grace_note_token1,
    ACTIONS(220), 1,
      aux_sym_chord_symbol_token1,
    STATE(45), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(215), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1284] = 2,
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
  [1300] = 2,
    ACTIONS(224), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(222), 10,
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
  [1316] = 2,
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
  [1332] = 4,
    ACTIONS(230), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(232), 1,
      aux_sym_chord_symbol_token2,
    STATE(95), 1,
      sym_chord_type,
    ACTIONS(234), 8,
      anon_sym_minor,
      anon_sym_major,
      anon_sym_diminished,
      anon_sym_augmented,
      anon_sym_suspended,
      anon_sym_7,
      anon_sym_9,
      aux_sym_chord_type_token1,
  [1352] = 3,
    ACTIONS(236), 1,
      sym_alteration,
    ACTIONS(238), 2,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
    ACTIONS(240), 8,
      anon_sym_minor,
      anon_sym_major,
      anon_sym_diminished,
      anon_sym_augmented,
      anon_sym_suspended,
      anon_sym_7,
      anon_sym_9,
      aux_sym_chord_type_token1,
  [1370] = 2,
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
  [1386] = 2,
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
  [1402] = 2,
    ACTIONS(244), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(242), 10,
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
  [1418] = 2,
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
  [1434] = 2,
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
  [1450] = 10,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(248), 1,
      sym_annotation,
    ACTIONS(250), 1,
      sym_tuplet_marker,
    STATE(12), 1,
      sym_pitch,
    STATE(30), 1,
      sym_note,
    STATE(80), 1,
      sym_decoration,
  [1481] = 10,
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
    STATE(12), 1,
      sym_pitch,
    STATE(35), 1,
      sym_note,
    STATE(81), 1,
      sym_decoration,
  [1512] = 2,
    ACTIONS(252), 2,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
    ACTIONS(254), 8,
      anon_sym_minor,
      anon_sym_major,
      anon_sym_diminished,
      anon_sym_augmented,
      anon_sym_suspended,
      anon_sym_7,
      anon_sym_9,
      aux_sym_chord_type_token1,
  [1527] = 10,
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
    STATE(12), 1,
      sym_pitch,
    STATE(35), 1,
      sym_note,
    STATE(81), 1,
      sym_decoration,
  [1558] = 2,
    ACTIONS(258), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(256), 8,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1572] = 9,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    ACTIONS(262), 1,
      sym_tuplet_marker,
    STATE(12), 1,
      sym_pitch,
    STATE(37), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
  [1600] = 9,
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
    STATE(12), 1,
      sym_pitch,
    STATE(35), 1,
      sym_note,
    STATE(81), 1,
      sym_decoration,
  [1628] = 9,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    ACTIONS(250), 1,
      sym_tuplet_marker,
    STATE(12), 1,
      sym_pitch,
    STATE(30), 1,
      sym_note,
    STATE(80), 1,
      sym_decoration,
  [1656] = 9,
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
    STATE(12), 1,
      sym_pitch,
    STATE(35), 1,
      sym_note,
    STATE(81), 1,
      sym_decoration,
  [1684] = 8,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(264), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(27), 1,
      sym_note,
    STATE(79), 1,
      sym_decoration,
  [1709] = 8,
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
    STATE(12), 1,
      sym_pitch,
    STATE(35), 1,
      sym_note,
    STATE(81), 1,
      sym_decoration,
  [1734] = 8,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(30), 1,
      sym_note,
    STATE(80), 1,
      sym_decoration,
  [1759] = 8,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(37), 1,
      sym_note,
    STATE(82), 1,
      sym_decoration,
  [1784] = 1,
    ACTIONS(266), 7,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_decoration_shorthand,
  [1794] = 1,
    ACTIONS(268), 7,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_decoration_shorthand,
  [1804] = 1,
    ACTIONS(270), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1814] = 1,
    ACTIONS(272), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1824] = 1,
    ACTIONS(274), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1834] = 7,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    STATE(12), 1,
      sym_pitch,
    STATE(70), 1,
      sym_note,
    STATE(85), 1,
      sym_decoration,
  [1856] = 1,
    ACTIONS(276), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1866] = 1,
    ACTIONS(278), 7,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_decoration_shorthand,
  [1876] = 7,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    STATE(12), 1,
      sym_pitch,
    STATE(76), 1,
      sym_note,
    STATE(86), 1,
      sym_decoration,
  [1898] = 1,
    ACTIONS(280), 7,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_decoration_shorthand,
  [1908] = 6,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(282), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(31), 1,
      sym_note,
  [1927] = 6,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(37), 1,
      sym_note,
  [1946] = 6,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(30), 1,
      sym_note,
  [1965] = 6,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(264), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(27), 1,
      sym_note,
  [1984] = 6,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    ACTIONS(91), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(35), 1,
      sym_note,
  [2003] = 4,
    ACTIONS(284), 1,
      sym_alteration,
    ACTIONS(287), 1,
      sym_note_letter,
    ACTIONS(290), 1,
      aux_sym_grace_note_token2,
    STATE(84), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [2017] = 5,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    STATE(12), 1,
      sym_pitch,
    STATE(78), 1,
      sym_note,
  [2033] = 5,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    STATE(12), 1,
      sym_pitch,
    STATE(70), 1,
      sym_note,
  [2049] = 4,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(292), 1,
      aux_sym_grace_note_token2,
    STATE(84), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [2063] = 5,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    ACTIONS(13), 1,
      sym_rest,
    STATE(12), 1,
      sym_pitch,
    STATE(76), 1,
      sym_note,
  [2079] = 3,
    ACTIONS(9), 1,
      sym_alteration,
    ACTIONS(11), 1,
      sym_note_letter,
    STATE(87), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [2090] = 1,
    ACTIONS(294), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [2097] = 3,
    ACTIONS(29), 1,
      anon_sym_BQUOTE,
    ACTIONS(64), 1,
      ts_builtin_sym_end,
    STATE(92), 1,
      aux_sym_beam_repeat2,
  [2107] = 3,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(298), 1,
      anon_sym_BQUOTE,
    STATE(92), 1,
      aux_sym_beam_repeat2,
  [2117] = 2,
    ACTIONS(301), 1,
      sym_note_letter,
    STATE(104), 1,
      sym_chord_symbol_note,
  [2124] = 2,
    ACTIONS(301), 1,
      sym_note_letter,
    STATE(100), 1,
      sym_chord_symbol_note,
  [2131] = 2,
    ACTIONS(303), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(305), 1,
      aux_sym_chord_symbol_token2,
  [2138] = 1,
    ACTIONS(296), 2,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
  [2143] = 1,
    ACTIONS(307), 2,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
  [2148] = 2,
    ACTIONS(309), 1,
      sym_note_letter,
    STATE(49), 1,
      sym_chord_symbol_note,
  [2155] = 2,
    ACTIONS(238), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(311), 1,
      sym_alteration,
  [2162] = 1,
    ACTIONS(313), 1,
      aux_sym_chord_symbol_token1,
  [2166] = 1,
    ACTIONS(315), 1,
      ts_builtin_sym_end,
  [2170] = 1,
    ACTIONS(317), 1,
      ts_builtin_sym_end,
  [2174] = 1,
    ACTIONS(319), 1,
      ts_builtin_sym_end,
  [2178] = 1,
    ACTIONS(321), 1,
      aux_sym_chord_symbol_token1,
  [2182] = 1,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
  [2186] = 1,
    ACTIONS(323), 1,
      aux_sym_multimeasure_rest_token1,
  [2190] = 1,
    ACTIONS(325), 1,
      sym_note_letter,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 61,
  [SMALL_STATE(4)] = 116,
  [SMALL_STATE(5)] = 171,
  [SMALL_STATE(6)] = 222,
  [SMALL_STATE(7)] = 248,
  [SMALL_STATE(8)] = 274,
  [SMALL_STATE(9)] = 300,
  [SMALL_STATE(10)] = 326,
  [SMALL_STATE(11)] = 352,
  [SMALL_STATE(12)] = 396,
  [SMALL_STATE(13)] = 417,
  [SMALL_STATE(14)] = 456,
  [SMALL_STATE(15)] = 495,
  [SMALL_STATE(16)] = 534,
  [SMALL_STATE(17)] = 573,
  [SMALL_STATE(18)] = 612,
  [SMALL_STATE(19)] = 651,
  [SMALL_STATE(20)] = 690,
  [SMALL_STATE(21)] = 726,
  [SMALL_STATE(22)] = 762,
  [SMALL_STATE(23)] = 798,
  [SMALL_STATE(24)] = 834,
  [SMALL_STATE(25)] = 852,
  [SMALL_STATE(26)] = 888,
  [SMALL_STATE(27)] = 924,
  [SMALL_STATE(28)] = 943,
  [SMALL_STATE(29)] = 962,
  [SMALL_STATE(30)] = 981,
  [SMALL_STATE(31)] = 1000,
  [SMALL_STATE(32)] = 1019,
  [SMALL_STATE(33)] = 1038,
  [SMALL_STATE(34)] = 1057,
  [SMALL_STATE(35)] = 1076,
  [SMALL_STATE(36)] = 1095,
  [SMALL_STATE(37)] = 1114,
  [SMALL_STATE(38)] = 1133,
  [SMALL_STATE(39)] = 1152,
  [SMALL_STATE(40)] = 1168,
  [SMALL_STATE(41)] = 1200,
  [SMALL_STATE(42)] = 1216,
  [SMALL_STATE(43)] = 1232,
  [SMALL_STATE(44)] = 1248,
  [SMALL_STATE(45)] = 1264,
  [SMALL_STATE(46)] = 1284,
  [SMALL_STATE(47)] = 1300,
  [SMALL_STATE(48)] = 1316,
  [SMALL_STATE(49)] = 1332,
  [SMALL_STATE(50)] = 1352,
  [SMALL_STATE(51)] = 1370,
  [SMALL_STATE(52)] = 1386,
  [SMALL_STATE(53)] = 1402,
  [SMALL_STATE(54)] = 1418,
  [SMALL_STATE(55)] = 1434,
  [SMALL_STATE(56)] = 1450,
  [SMALL_STATE(57)] = 1481,
  [SMALL_STATE(58)] = 1512,
  [SMALL_STATE(59)] = 1527,
  [SMALL_STATE(60)] = 1558,
  [SMALL_STATE(61)] = 1572,
  [SMALL_STATE(62)] = 1600,
  [SMALL_STATE(63)] = 1628,
  [SMALL_STATE(64)] = 1656,
  [SMALL_STATE(65)] = 1684,
  [SMALL_STATE(66)] = 1709,
  [SMALL_STATE(67)] = 1734,
  [SMALL_STATE(68)] = 1759,
  [SMALL_STATE(69)] = 1784,
  [SMALL_STATE(70)] = 1794,
  [SMALL_STATE(71)] = 1804,
  [SMALL_STATE(72)] = 1814,
  [SMALL_STATE(73)] = 1824,
  [SMALL_STATE(74)] = 1834,
  [SMALL_STATE(75)] = 1856,
  [SMALL_STATE(76)] = 1866,
  [SMALL_STATE(77)] = 1876,
  [SMALL_STATE(78)] = 1898,
  [SMALL_STATE(79)] = 1908,
  [SMALL_STATE(80)] = 1927,
  [SMALL_STATE(81)] = 1946,
  [SMALL_STATE(82)] = 1965,
  [SMALL_STATE(83)] = 1984,
  [SMALL_STATE(84)] = 2003,
  [SMALL_STATE(85)] = 2017,
  [SMALL_STATE(86)] = 2033,
  [SMALL_STATE(87)] = 2049,
  [SMALL_STATE(88)] = 2063,
  [SMALL_STATE(89)] = 2079,
  [SMALL_STATE(90)] = 2090,
  [SMALL_STATE(91)] = 2097,
  [SMALL_STATE(92)] = 2107,
  [SMALL_STATE(93)] = 2117,
  [SMALL_STATE(94)] = 2124,
  [SMALL_STATE(95)] = 2131,
  [SMALL_STATE(96)] = 2138,
  [SMALL_STATE(97)] = 2143,
  [SMALL_STATE(98)] = 2148,
  [SMALL_STATE(99)] = 2155,
  [SMALL_STATE(100)] = 2162,
  [SMALL_STATE(101)] = 2166,
  [SMALL_STATE(102)] = 2170,
  [SMALL_STATE(103)] = 2174,
  [SMALL_STATE(104)] = 2178,
  [SMALL_STATE(105)] = 2182,
  [SMALL_STATE(106)] = 2186,
  [SMALL_STATE(107)] = 2190,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(98),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_music_content, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [35] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(21),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(107),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(7),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(12),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(89),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(98),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(64),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(66),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(90),
  [64] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 2),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 2),
  [68] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 2),
  [72] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 1),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [76] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 1),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [80] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pitch_repeat1, 2),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pitch_repeat1, 2), SHIFT_REPEAT(9),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pitch_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 3),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 3),
  [91] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [93] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [95] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [99] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [105] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(107),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(7),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(12),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(89),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(77),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(90),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [137] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [139] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [143] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 5),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 7),
  [149] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [151] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 7),
  [153] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 8),
  [155] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 8),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [161] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 3),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 6),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 6),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 3),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 3),
  [177] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 4),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 4),
  [183] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 1),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 2),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 6),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 6),
  [201] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 4),
  [207] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 5),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 5),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [217] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(89),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nte_or_chrd, 1),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nte_or_chrd, 1),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 9),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 9),
  [230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [234] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol_note, 1),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 7),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 7),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol_note, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_grace_note, 3),
  [260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [278] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 4),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [284] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(107),
  [287] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(7),
  [290] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [294] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2),
  [298] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2), SHIFT_REPEAT(5),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [305] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [307] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_type, 1),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [315] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [319] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [325] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
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
