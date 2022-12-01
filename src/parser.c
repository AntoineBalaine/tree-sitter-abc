#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 81
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 46
#define ALIAS_COUNT 0
#define TOKEN_COUNT 25
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym__space = 1,
  sym_newline = 2,
  anon_sym_BQUOTE = 3,
  sym_slur_open = 4,
  sym_slur_close = 5,
  aux_sym_note_construct_token1 = 6,
  anon_sym_LBRACK = 7,
  anon_sym_RBRACK = 8,
  sym_alteration = 9,
  sym_note_letter = 10,
  sym_octave = 11,
  sym_rest = 12,
  anon_sym_Z = 13,
  anon_sym_X = 14,
  aux_sym_multimeasure_rest_token1 = 15,
  sym_rhythm = 16,
  aux_sym_grace_note_token1 = 17,
  aux_sym_grace_note_token2 = 18,
  aux_sym_chord_symbol_token1 = 19,
  aux_sym_chord_symbol_token2 = 20,
  sym_annotation = 21,
  sym_tuplet_marker = 22,
  sym_chord_type = 23,
  sym_decoration_shorthand = 24,
  sym_source_file = 25,
  sym_music_content = 26,
  sym_nte_or_chrd = 27,
  sym_beam = 28,
  sym_note_construct = 29,
  sym_chord_cstrct = 30,
  sym_note = 31,
  sym_chord_note = 32,
  sym_pitch = 33,
  sym_multimeasure_rest = 34,
  sym_grace_note = 35,
  sym_chord_symbol_note = 36,
  sym_chord_symbol = 37,
  sym_decoration = 38,
  aux_sym_source_file_repeat1 = 39,
  aux_sym_beam_repeat1 = 40,
  aux_sym_beam_repeat2 = 41,
  aux_sym_note_construct_repeat1 = 42,
  aux_sym_chord_cstrct_repeat1 = 43,
  aux_sym_pitch_repeat1 = 44,
  aux_sym_grace_note_repeat1 = 45,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [sym_newline] = "newline",
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
  [aux_sym_source_file_repeat1] = "source_file_repeat1",
  [aux_sym_beam_repeat1] = "beam_repeat1",
  [aux_sym_beam_repeat2] = "beam_repeat2",
  [aux_sym_note_construct_repeat1] = "note_construct_repeat1",
  [aux_sym_chord_cstrct_repeat1] = "chord_cstrct_repeat1",
  [aux_sym_pitch_repeat1] = "pitch_repeat1",
  [aux_sym_grace_note_repeat1] = "grace_note_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__space] = sym__space,
  [sym_newline] = sym_newline,
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
  [aux_sym_source_file_repeat1] = aux_sym_source_file_repeat1,
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
  [sym__space] = {
    .visible = false,
    .named = true,
  },
  [sym_newline] = {
    .visible = true,
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
  [aux_sym_source_file_repeat1] = {
    .visible = false,
    .named = false,
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
  [75] = 66,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '0') ADVANCE(30);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(21);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == 'Z') ADVANCE(27);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '^') ADVANCE(22);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(25);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(34);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
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
          lookahead == '~') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(73);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(21);
      if (lookahead == '^') ADVANCE(22);
      if (lookahead == '_') ADVANCE(46);
      if (lookahead == 'a') ADVANCE(71);
      if (lookahead == 'd') ADVANCE(55);
      if (lookahead == 'm') ADVANCE(47);
      if (lookahead == 's') ADVANCE(72);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '"') ADVANCE(39);
      if (lookahead == '/') ADVANCE(41);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(21);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == '^') ADVANCE(22);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(26);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
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
          lookahead == '~') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(24);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(10);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(4);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(6);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(14);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      if (lookahead == '-') ADVANCE(18);
      if (lookahead == '/') ADVANCE(32);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(21);
      if (lookahead == 'X') ADVANCE(28);
      if (lookahead == 'Z') ADVANCE(27);
      if (lookahead == '[') ADVANCE(19);
      if (lookahead == ']') ADVANCE(20);
      if (lookahead == '^') ADVANCE(22);
      if (lookahead == '_') ADVANCE(23);
      if (lookahead == '`') ADVANCE(15);
      if (lookahead == '{') ADVANCE(37);
      if (lookahead == '}') ADVANCE(38);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(25);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(34);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(26);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
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
          lookahead == '~') ADVANCE(74);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(24);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(21);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(21);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(30);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(29);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(31);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(8);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(34);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(36);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(42);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(3);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(44);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(45);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(58);
      if (lookahead == 'i') ADVANCE(61);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(48);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(62);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(63);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(59);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(60);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(64);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(69);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(51);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(65);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(70);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(49);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(57);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(67);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(52);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(66);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(54);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(50);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(53);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(68);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(73);
      END_STATE();
    case 74:
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
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
  [11] = {.lex_state = 11},
  [12] = {.lex_state = 11},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 11},
  [17] = {.lex_state = 0},
  [18] = {.lex_state = 0},
  [19] = {.lex_state = 0},
  [20] = {.lex_state = 0},
  [21] = {.lex_state = 11},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 11},
  [24] = {.lex_state = 11},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 2},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 0},
  [51] = {.lex_state = 2},
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
  [66] = {.lex_state = 1},
  [67] = {.lex_state = 0},
  [68] = {.lex_state = 0},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 0},
  [72] = {.lex_state = 0},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 2},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 0},
  [79] = {.lex_state = 0},
  [80] = {.lex_state = 2},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_newline] = ACTIONS(3),
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
    [sym_source_file] = STATE(79),
    [sym_music_content] = STATE(2),
    [sym_nte_or_chrd] = STATE(4),
    [sym_beam] = STATE(35),
    [sym_note_construct] = STATE(33),
    [sym_chord_cstrct] = STATE(33),
    [sym_note] = STATE(15),
    [sym_pitch] = STATE(12),
    [sym_multimeasure_rest] = STATE(35),
    [sym_grace_note] = STATE(40),
    [sym_chord_symbol] = STATE(49),
    [sym_decoration] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(5),
    [sym__space] = ACTIONS(3),
    [sym_newline] = ACTIONS(3),
    [sym_slur_open] = ACTIONS(7),
    [sym_slur_close] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_alteration] = ACTIONS(13),
    [sym_note_letter] = ACTIONS(15),
    [sym_rest] = ACTIONS(17),
    [anon_sym_Z] = ACTIONS(19),
    [anon_sym_X] = ACTIONS(19),
    [aux_sym_grace_note_token1] = ACTIONS(21),
    [aux_sym_chord_symbol_token1] = ACTIONS(23),
    [sym_annotation] = ACTIONS(9),
    [sym_tuplet_marker] = ACTIONS(9),
    [sym_decoration_shorthand] = ACTIONS(25),
  },
  [2] = {
    [sym_music_content] = STATE(3),
    [sym_nte_or_chrd] = STATE(4),
    [sym_beam] = STATE(35),
    [sym_note_construct] = STATE(33),
    [sym_chord_cstrct] = STATE(33),
    [sym_note] = STATE(15),
    [sym_pitch] = STATE(12),
    [sym_multimeasure_rest] = STATE(35),
    [sym_grace_note] = STATE(40),
    [sym_chord_symbol] = STATE(49),
    [sym_decoration] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(27),
    [sym__space] = ACTIONS(3),
    [sym_newline] = ACTIONS(3),
    [sym_slur_open] = ACTIONS(7),
    [sym_slur_close] = ACTIONS(9),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_alteration] = ACTIONS(13),
    [sym_note_letter] = ACTIONS(15),
    [sym_rest] = ACTIONS(17),
    [anon_sym_Z] = ACTIONS(19),
    [anon_sym_X] = ACTIONS(19),
    [aux_sym_grace_note_token1] = ACTIONS(21),
    [aux_sym_chord_symbol_token1] = ACTIONS(23),
    [sym_annotation] = ACTIONS(9),
    [sym_tuplet_marker] = ACTIONS(9),
    [sym_decoration_shorthand] = ACTIONS(25),
  },
  [3] = {
    [sym_music_content] = STATE(3),
    [sym_nte_or_chrd] = STATE(4),
    [sym_beam] = STATE(35),
    [sym_note_construct] = STATE(33),
    [sym_chord_cstrct] = STATE(33),
    [sym_note] = STATE(15),
    [sym_pitch] = STATE(12),
    [sym_multimeasure_rest] = STATE(35),
    [sym_grace_note] = STATE(40),
    [sym_chord_symbol] = STATE(49),
    [sym_decoration] = STATE(53),
    [aux_sym_source_file_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(29),
    [sym__space] = ACTIONS(3),
    [sym_newline] = ACTIONS(3),
    [sym_slur_open] = ACTIONS(31),
    [sym_slur_close] = ACTIONS(34),
    [anon_sym_LBRACK] = ACTIONS(37),
    [sym_alteration] = ACTIONS(40),
    [sym_note_letter] = ACTIONS(43),
    [sym_rest] = ACTIONS(46),
    [anon_sym_Z] = ACTIONS(49),
    [anon_sym_X] = ACTIONS(49),
    [aux_sym_grace_note_token1] = ACTIONS(52),
    [aux_sym_chord_symbol_token1] = ACTIONS(55),
    [sym_annotation] = ACTIONS(34),
    [sym_tuplet_marker] = ACTIONS(34),
    [sym_decoration_shorthand] = ACTIONS(58),
  },
  [4] = {
    [sym_nte_or_chrd] = STATE(6),
    [sym_note_construct] = STATE(33),
    [sym_chord_cstrct] = STATE(33),
    [sym_note] = STATE(15),
    [sym_pitch] = STATE(12),
    [sym_grace_note] = STATE(40),
    [sym_chord_symbol] = STATE(49),
    [sym_decoration] = STATE(53),
    [aux_sym_beam_repeat1] = STATE(6),
    [aux_sym_beam_repeat2] = STATE(19),
    [aux_sym_note_construct_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(61),
    [sym__space] = ACTIONS(3),
    [sym_newline] = ACTIONS(3),
    [anon_sym_BQUOTE] = ACTIONS(63),
    [sym_slur_open] = ACTIONS(65),
    [sym_slur_close] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(11),
    [sym_alteration] = ACTIONS(13),
    [sym_note_letter] = ACTIONS(15),
    [sym_rest] = ACTIONS(17),
    [anon_sym_Z] = ACTIONS(61),
    [anon_sym_X] = ACTIONS(61),
    [aux_sym_grace_note_token1] = ACTIONS(21),
    [aux_sym_chord_symbol_token1] = ACTIONS(23),
    [sym_annotation] = ACTIONS(61),
    [sym_tuplet_marker] = ACTIONS(61),
    [sym_decoration_shorthand] = ACTIONS(25),
  },
  [5] = {
    [sym_nte_or_chrd] = STATE(5),
    [sym_note_construct] = STATE(33),
    [sym_chord_cstrct] = STATE(33),
    [sym_note] = STATE(15),
    [sym_pitch] = STATE(12),
    [sym_grace_note] = STATE(40),
    [sym_chord_symbol] = STATE(49),
    [sym_decoration] = STATE(53),
    [aux_sym_beam_repeat1] = STATE(5),
    [aux_sym_note_construct_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(67),
    [sym__space] = ACTIONS(3),
    [sym_newline] = ACTIONS(3),
    [sym_slur_open] = ACTIONS(69),
    [sym_slur_close] = ACTIONS(67),
    [anon_sym_LBRACK] = ACTIONS(71),
    [sym_alteration] = ACTIONS(74),
    [sym_note_letter] = ACTIONS(77),
    [sym_rest] = ACTIONS(80),
    [anon_sym_Z] = ACTIONS(67),
    [anon_sym_X] = ACTIONS(67),
    [aux_sym_grace_note_token1] = ACTIONS(83),
    [aux_sym_chord_symbol_token1] = ACTIONS(86),
    [sym_annotation] = ACTIONS(67),
    [sym_tuplet_marker] = ACTIONS(67),
    [sym_decoration_shorthand] = ACTIONS(89),
  },
  [6] = {
    [sym_nte_or_chrd] = STATE(5),
    [sym_note_construct] = STATE(33),
    [sym_chord_cstrct] = STATE(33),
    [sym_note] = STATE(15),
    [sym_pitch] = STATE(12),
    [sym_grace_note] = STATE(40),
    [sym_chord_symbol] = STATE(49),
    [sym_decoration] = STATE(53),
    [aux_sym_beam_repeat1] = STATE(5),
    [aux_sym_note_construct_repeat1] = STATE(40),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym__space] = ACTIONS(3),
    [sym_newline] = ACTIONS(3),
    [sym_slur_open] = ACTIONS(94),
    [sym_slur_close] = ACTIONS(92),
    [anon_sym_LBRACK] = ACTIONS(92),
    [sym_alteration] = ACTIONS(92),
    [sym_note_letter] = ACTIONS(92),
    [sym_rest] = ACTIONS(92),
    [anon_sym_Z] = ACTIONS(92),
    [anon_sym_X] = ACTIONS(92),
    [aux_sym_grace_note_token1] = ACTIONS(92),
    [aux_sym_chord_symbol_token1] = ACTIONS(94),
    [sym_annotation] = ACTIONS(92),
    [sym_tuplet_marker] = ACTIONS(92),
    [sym_decoration_shorthand] = ACTIONS(92),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 5,
    ACTIONS(100), 1,
      sym_octave,
    STATE(8), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(98), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(96), 17,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [34] = 5,
    ACTIONS(106), 1,
      sym_octave,
    STATE(8), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(104), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(102), 17,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [68] = 5,
    ACTIONS(113), 1,
      sym_octave,
    STATE(7), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(111), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(109), 17,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [102] = 5,
    ACTIONS(115), 1,
      sym_octave,
    STATE(11), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(98), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(96), 17,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [136] = 5,
    ACTIONS(100), 1,
      sym_octave,
    STATE(8), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(119), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(117), 17,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [170] = 4,
    ACTIONS(125), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(123), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(121), 15,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [199] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(129), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(127), 15,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [225] = 5,
    ACTIONS(133), 1,
      anon_sym_BQUOTE,
    STATE(14), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(136), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(131), 12,
      ts_builtin_sym_end,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [254] = 4,
    ACTIONS(142), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(140), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(138), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [281] = 4,
    ACTIONS(148), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(146), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(144), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [308] = 4,
    ACTIONS(154), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(152), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(150), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [335] = 4,
    ACTIONS(160), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(158), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(156), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [362] = 5,
    ACTIONS(63), 1,
      anon_sym_BQUOTE,
    STATE(14), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(94), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(92), 12,
      ts_builtin_sym_end,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [391] = 4,
    ACTIONS(166), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(164), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(162), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [418] = 4,
    ACTIONS(172), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(170), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(168), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [445] = 15,
    ACTIONS(11), 1,
      anon_sym_LBRACK,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(21), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(174), 1,
      aux_sym_chord_symbol_token1,
    STATE(12), 1,
      sym_pitch,
    STATE(15), 1,
      sym_note,
    STATE(32), 1,
      sym_nte_or_chrd,
    STATE(49), 1,
      sym_chord_symbol,
    STATE(53), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(33), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(40), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [494] = 4,
    ACTIONS(180), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(178), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(176), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [521] = 4,
    ACTIONS(186), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(184), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(182), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [548] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(164), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(162), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [572] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(184), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(182), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [596] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(158), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(156), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [620] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(152), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(150), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [644] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(190), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(188), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [668] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(178), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(176), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [692] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(146), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(144), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [716] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(136), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(131), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [740] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(194), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(192), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [764] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(198), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(196), 13,
      ts_builtin_sym_end,
      anon_sym_BQUOTE,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [788] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(65), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(61), 12,
      ts_builtin_sym_end,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [811] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(202), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(200), 12,
      ts_builtin_sym_end,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [834] = 12,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(21), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(204), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(54), 1,
      sym_note,
    STATE(65), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(42), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(47), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [874] = 12,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(21), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(54), 1,
      sym_note,
    STATE(65), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(42), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(47), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [914] = 12,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(21), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(208), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(54), 1,
      sym_note,
    STATE(65), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(42), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(47), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [954] = 13,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(21), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(174), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(17), 1,
      sym_note,
    STATE(50), 1,
      sym_chord_symbol,
    STATE(57), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [996] = 12,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(21), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(212), 1,
      anon_sym_RBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(54), 1,
      sym_note,
    STATE(65), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(42), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(47), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1036] = 12,
    ACTIONS(214), 1,
      anon_sym_RBRACK,
    ACTIONS(216), 1,
      sym_alteration,
    ACTIONS(219), 1,
      sym_note_letter,
    ACTIONS(222), 1,
      sym_rest,
    ACTIONS(225), 1,
      aux_sym_grace_note_token1,
    ACTIONS(228), 1,
      sym_decoration_shorthand,
    STATE(12), 1,
      sym_pitch,
    STATE(54), 1,
      sym_note,
    STATE(65), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(42), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(47), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1076] = 11,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(21), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    STATE(12), 1,
      sym_pitch,
    STATE(54), 1,
      sym_note,
    STATE(65), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(41), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(47), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1113] = 11,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(21), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    STATE(12), 1,
      sym_pitch,
    STATE(54), 1,
      sym_note,
    STATE(65), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(37), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(47), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1150] = 11,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(21), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    STATE(12), 1,
      sym_pitch,
    STATE(54), 1,
      sym_note,
    STATE(65), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(38), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(47), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1187] = 11,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(21), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    STATE(12), 1,
      sym_pitch,
    STATE(54), 1,
      sym_note,
    STATE(65), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(39), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(47), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1224] = 10,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(21), 1,
      aux_sym_grace_note_token1,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    STATE(12), 1,
      sym_pitch,
    STATE(52), 1,
      sym_note,
    STATE(62), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1257] = 4,
    ACTIONS(233), 1,
      aux_sym_grace_note_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(48), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(231), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
  [1277] = 9,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(17), 1,
      sym_note,
    STATE(57), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1306] = 9,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(25), 1,
      sym_decoration_shorthand,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(18), 1,
      sym_note,
    STATE(55), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1335] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(238), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
  [1349] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(240), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [1362] = 7,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(210), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(17), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1385] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(242), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [1398] = 7,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(244), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(20), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1421] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(246), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [1434] = 7,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    ACTIONS(236), 1,
      anon_sym_LBRACK,
    STATE(12), 1,
      sym_pitch,
    STATE(18), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1457] = 5,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(248), 1,
      aux_sym_grace_note_token2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(61), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [1475] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(250), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [1487] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(252), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [1499] = 5,
    ACTIONS(254), 1,
      sym_alteration,
    ACTIONS(257), 1,
      sym_note_letter,
    ACTIONS(260), 1,
      aux_sym_grace_note_token2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(61), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [1517] = 6,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    STATE(12), 1,
      sym_pitch,
    STATE(56), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1537] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(262), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [1549] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(264), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [1561] = 6,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(17), 1,
      sym_rest,
    STATE(12), 1,
      sym_pitch,
    STATE(52), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1581] = 3,
    ACTIONS(266), 1,
      sym_alteration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(268), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [1594] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(270), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [1605] = 4,
    ACTIONS(13), 1,
      sym_alteration,
    ACTIONS(15), 1,
      sym_note_letter,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(58), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [1620] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    ACTIONS(272), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [1630] = 4,
    ACTIONS(274), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(276), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(278), 1,
      sym_chord_type,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1644] = 3,
    ACTIONS(280), 1,
      sym_note_letter,
    STATE(77), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1655] = 3,
    ACTIONS(280), 1,
      sym_note_letter,
    STATE(76), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1666] = 3,
    ACTIONS(282), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(284), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1677] = 3,
    ACTIONS(286), 1,
      sym_note_letter,
    STATE(70), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1688] = 3,
    ACTIONS(268), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(288), 1,
      sym_alteration,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1699] = 2,
    ACTIONS(290), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1707] = 2,
    ACTIONS(292), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1715] = 2,
    ACTIONS(294), 1,
      sym_note_letter,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1723] = 2,
    ACTIONS(296), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [1731] = 2,
    ACTIONS(298), 1,
      aux_sym_multimeasure_rest_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 34,
  [SMALL_STATE(9)] = 68,
  [SMALL_STATE(10)] = 102,
  [SMALL_STATE(11)] = 136,
  [SMALL_STATE(12)] = 170,
  [SMALL_STATE(13)] = 199,
  [SMALL_STATE(14)] = 225,
  [SMALL_STATE(15)] = 254,
  [SMALL_STATE(16)] = 281,
  [SMALL_STATE(17)] = 308,
  [SMALL_STATE(18)] = 335,
  [SMALL_STATE(19)] = 362,
  [SMALL_STATE(20)] = 391,
  [SMALL_STATE(21)] = 418,
  [SMALL_STATE(22)] = 445,
  [SMALL_STATE(23)] = 494,
  [SMALL_STATE(24)] = 521,
  [SMALL_STATE(25)] = 548,
  [SMALL_STATE(26)] = 572,
  [SMALL_STATE(27)] = 596,
  [SMALL_STATE(28)] = 620,
  [SMALL_STATE(29)] = 644,
  [SMALL_STATE(30)] = 668,
  [SMALL_STATE(31)] = 692,
  [SMALL_STATE(32)] = 716,
  [SMALL_STATE(33)] = 740,
  [SMALL_STATE(34)] = 764,
  [SMALL_STATE(35)] = 788,
  [SMALL_STATE(36)] = 811,
  [SMALL_STATE(37)] = 834,
  [SMALL_STATE(38)] = 874,
  [SMALL_STATE(39)] = 914,
  [SMALL_STATE(40)] = 954,
  [SMALL_STATE(41)] = 996,
  [SMALL_STATE(42)] = 1036,
  [SMALL_STATE(43)] = 1076,
  [SMALL_STATE(44)] = 1113,
  [SMALL_STATE(45)] = 1150,
  [SMALL_STATE(46)] = 1187,
  [SMALL_STATE(47)] = 1224,
  [SMALL_STATE(48)] = 1257,
  [SMALL_STATE(49)] = 1277,
  [SMALL_STATE(50)] = 1306,
  [SMALL_STATE(51)] = 1335,
  [SMALL_STATE(52)] = 1349,
  [SMALL_STATE(53)] = 1362,
  [SMALL_STATE(54)] = 1385,
  [SMALL_STATE(55)] = 1398,
  [SMALL_STATE(56)] = 1421,
  [SMALL_STATE(57)] = 1434,
  [SMALL_STATE(58)] = 1457,
  [SMALL_STATE(59)] = 1475,
  [SMALL_STATE(60)] = 1487,
  [SMALL_STATE(61)] = 1499,
  [SMALL_STATE(62)] = 1517,
  [SMALL_STATE(63)] = 1537,
  [SMALL_STATE(64)] = 1549,
  [SMALL_STATE(65)] = 1561,
  [SMALL_STATE(66)] = 1581,
  [SMALL_STATE(67)] = 1594,
  [SMALL_STATE(68)] = 1605,
  [SMALL_STATE(69)] = 1620,
  [SMALL_STATE(70)] = 1630,
  [SMALL_STATE(71)] = 1644,
  [SMALL_STATE(72)] = 1655,
  [SMALL_STATE(73)] = 1666,
  [SMALL_STATE(74)] = 1677,
  [SMALL_STATE(75)] = 1688,
  [SMALL_STATE(76)] = 1699,
  [SMALL_STATE(77)] = 1707,
  [SMALL_STATE(78)] = 1715,
  [SMALL_STATE(79)] = 1723,
  [SMALL_STATE(80)] = 1731,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 0),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(35),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(45),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(78),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(9),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(12),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(80),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(68),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(74),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_source_file_repeat1, 2), SHIFT_REPEAT(67),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_music_content, 1),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [65] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_music_content, 1),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(45),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(78),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(9),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(12),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(68),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(74),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(67),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 2),
  [96] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 2),
  [98] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 2),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [102] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pitch_repeat1, 2),
  [104] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pitch_repeat1, 2),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pitch_repeat1, 2), SHIFT_REPEAT(8),
  [109] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 1),
  [111] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 1),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [117] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 3),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 3),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [123] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [125] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2), SHIFT_REPEAT(22),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat2, 2),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 5),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 5),
  [148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [156] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [158] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 3),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 4),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 3),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 3),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [176] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 4),
  [178] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 4),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 6),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 6),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 7),
  [190] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 7),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nte_or_chrd, 1),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nte_or_chrd, 1),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 5),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2),
  [216] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(78),
  [219] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(9),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(12),
  [225] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(68),
  [228] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(67),
  [231] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(68),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [254] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(78),
  [257] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(9),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [266] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [296] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
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
