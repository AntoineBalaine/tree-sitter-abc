#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 11
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 40
#define ALIAS_COUNT 0
#define TOKEN_COUNT 36
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
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
  sym_tuplet_marker = 21,
  sym_decoration_shorthand = 22,
  aux_sym_nth_ending_number_token1 = 23,
  anon_sym_COMMA = 24,
  anon_sym_DASH = 25,
  sym_bar_line = 26,
  sym_close_thin_thick_double_bar_line = 27,
  sym_open_thick_thin_double_bar_line = 28,
  sym_end_of_repeated_section = 29,
  sym_start_end_of_two_repeated_sections = 30,
  aux_sym_first_repeat_bar_token1 = 31,
  aux_sym_first_repeat_bar_token2 = 32,
  sym_TEXT = 33,
  anon_sym_K_COLON = 34,
  anon_sym_Q_COLON = 35,
  sym_source_file = 36,
  sym_body_inline_info = 37,
  sym_key = 38,
  sym_tempo = 39,
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
  [sym_tuplet_marker] = "tuplet_marker",
  [sym_decoration_shorthand] = "decoration_shorthand",
  [aux_sym_nth_ending_number_token1] = "nth_ending_number_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
  [sym_bar_line] = "bar_line",
  [sym_close_thin_thick_double_bar_line] = "close_thin_thick_double_bar_line",
  [sym_open_thick_thin_double_bar_line] = "open_thick_thin_double_bar_line",
  [sym_end_of_repeated_section] = "end_of_repeated_section",
  [sym_start_end_of_two_repeated_sections] = "start_end_of_two_repeated_sections",
  [aux_sym_first_repeat_bar_token1] = "first_repeat_bar_token1",
  [aux_sym_first_repeat_bar_token2] = "first_repeat_bar_token2",
  [sym_TEXT] = "TEXT",
  [anon_sym_K_COLON] = "K:",
  [anon_sym_Q_COLON] = "Q:",
  [sym_source_file] = "source_file",
  [sym_body_inline_info] = "body_inline_info",
  [sym_key] = "key",
  [sym_tempo] = "tempo",
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
  [sym_tuplet_marker] = sym_tuplet_marker,
  [sym_decoration_shorthand] = sym_decoration_shorthand,
  [aux_sym_nth_ending_number_token1] = aux_sym_nth_ending_number_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_bar_line] = sym_bar_line,
  [sym_close_thin_thick_double_bar_line] = sym_close_thin_thick_double_bar_line,
  [sym_open_thick_thin_double_bar_line] = sym_open_thick_thin_double_bar_line,
  [sym_end_of_repeated_section] = sym_end_of_repeated_section,
  [sym_start_end_of_two_repeated_sections] = sym_start_end_of_two_repeated_sections,
  [aux_sym_first_repeat_bar_token1] = aux_sym_first_repeat_bar_token1,
  [aux_sym_first_repeat_bar_token2] = aux_sym_first_repeat_bar_token2,
  [sym_TEXT] = sym_TEXT,
  [anon_sym_K_COLON] = anon_sym_K_COLON,
  [anon_sym_Q_COLON] = anon_sym_Q_COLON,
  [sym_source_file] = sym_source_file,
  [sym_body_inline_info] = sym_body_inline_info,
  [sym_key] = sym_key,
  [sym_tempo] = sym_tempo,
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
  [sym_tuplet_marker] = {
    .visible = true,
    .named = true,
  },
  [sym_decoration_shorthand] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_nth_ending_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_bar_line] = {
    .visible = true,
    .named = true,
  },
  [sym_close_thin_thick_double_bar_line] = {
    .visible = true,
    .named = true,
  },
  [sym_open_thick_thin_double_bar_line] = {
    .visible = true,
    .named = true,
  },
  [sym_end_of_repeated_section] = {
    .visible = true,
    .named = true,
  },
  [sym_start_end_of_two_repeated_sections] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_first_repeat_bar_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_first_repeat_bar_token2] = {
    .visible = false,
    .named = false,
  },
  [sym_TEXT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_K_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Q_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_body_inline_info] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_tempo] = {
    .visible = true,
    .named = true,
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == '"') ADVANCE(40);
      if (lookahead == '\'') ADVANCE(27);
      if (lookahead == '(') ADVANCE(18);
      if (lookahead == ')') ADVANCE(19);
      if (lookahead == ',') ADVANCE(45);
      if (lookahead == '-') ADVANCE(46);
      if (lookahead == '/') ADVANCE(34);
      if (lookahead == '0') ADVANCE(32);
      if (lookahead == ':') ADVANCE(1);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(23);
      if (lookahead == 'K') ADVANCE(2);
      if (lookahead == 'Q') ADVANCE(3);
      if (lookahead == 'X') ADVANCE(30);
      if (lookahead == 'Z') ADVANCE(29);
      if (lookahead == '[') ADVANCE(21);
      if (lookahead == ']') ADVANCE(22);
      if (lookahead == '^') ADVANCE(24);
      if (lookahead == '_') ADVANCE(25);
      if (lookahead == '`') ADVANCE(17);
      if (lookahead == '{') ADVANCE(38);
      if (lookahead == '|') ADVANCE(47);
      if (lookahead == '}') ADVANCE(39);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(52);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(35);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(28);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
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
          lookahead == '~') ADVANCE(44);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(26);
      END_STATE();
    case 1:
      if (lookahead == ':') ADVANCE(51);
      if (lookahead == '|') ADVANCE(50);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(55);
      END_STATE();
    case 3:
      if (lookahead == ':') ADVANCE(56);
      END_STATE();
    case 4:
      if (lookahead == ':') ADVANCE(10);
      END_STATE();
    case 5:
      if (lookahead == ':') ADVANCE(10);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 6:
      if (lookahead == ':') ADVANCE(5);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 7:
      if (lookahead == ':') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(7);
      END_STATE();
    case 8:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 9:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(6);
      END_STATE();
    case 10:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 11:
      if (eof) ADVANCE(12);
      if (lookahead == '\n') ADVANCE(15);
      if (lookahead == ' ') ADVANCE(13);
      if (lookahead == 'K') ADVANCE(2);
      if (lookahead == 'Q') ADVANCE(3);
      if (lookahead == '[') ADVANCE(20);
      if (lookahead == ']') ADVANCE(22);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(54);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_newline);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_newline);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(54);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(49);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(23);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(23);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(8);
      if (lookahead == '0') ADVANCE(32);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(31);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(32);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(33);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(33);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(36);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(37);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 41:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(9);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(41);
      END_STATE();
    case 42:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      END_STATE();
    case 43:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(42);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(43);
      END_STATE();
    case 44:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    case 45:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 46:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 47:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ']') ADVANCE(48);
      END_STATE();
    case 48:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 49:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 50:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token1);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '\n') ADVANCE(16);
      if (lookahead == ' ') ADVANCE(14);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(54);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(54);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_K_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(anon_sym_Q_COLON);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 11},
  [2] = {.lex_state = 11},
  [3] = {.lex_state = 11},
  [4] = {.lex_state = 11},
  [5] = {.lex_state = 53},
  [6] = {.lex_state = 53},
  [7] = {.lex_state = 11},
  [8] = {.lex_state = 11},
  [9] = {.lex_state = 11},
  [10] = {.lex_state = 11},
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
    [sym_tuplet_marker] = ACTIONS(1),
    [sym_decoration_shorthand] = ACTIONS(1),
    [aux_sym_nth_ending_number_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_bar_line] = ACTIONS(1),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(1),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(1),
    [sym_end_of_repeated_section] = ACTIONS(1),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(1),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(1),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(1),
    [anon_sym_K_COLON] = ACTIONS(1),
    [anon_sym_Q_COLON] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(3),
    [sym_body_inline_info] = STATE(4),
    [sym__space] = ACTIONS(3),
    [sym_newline] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 4,
    ACTIONS(7), 1,
      anon_sym_K_COLON,
    ACTIONS(9), 1,
      anon_sym_Q_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
    STATE(7), 2,
      sym_key,
      sym_tempo,
  [15] = 2,
    ACTIONS(11), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [23] = 2,
    ACTIONS(13), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [31] = 2,
    ACTIONS(17), 1,
      sym_TEXT,
    ACTIONS(15), 2,
      sym__space,
      sym_newline,
  [39] = 2,
    ACTIONS(19), 1,
      sym_TEXT,
    ACTIONS(15), 2,
      sym__space,
      sym_newline,
  [47] = 2,
    ACTIONS(21), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [55] = 2,
    ACTIONS(23), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [63] = 2,
    ACTIONS(25), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
  [71] = 2,
    ACTIONS(27), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_newline,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 15,
  [SMALL_STATE(4)] = 23,
  [SMALL_STATE(5)] = 31,
  [SMALL_STATE(6)] = 39,
  [SMALL_STATE(7)] = 47,
  [SMALL_STATE(8)] = 55,
  [SMALL_STATE(9)] = 63,
  [SMALL_STATE(10)] = 71,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [11] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [15] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [17] = {.entry = {.count = 1, .reusable = false}}, SHIFT(8),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(9),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tempo, 2),
  [27] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_inline_info, 3),
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
