#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 12
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 15
#define ALIAS_COUNT 0
#define TOKEN_COUNT 11
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 3
#define PRODUCTION_ID_COUNT 1

enum {
  sym_octave = 1,
  sym_alteration = 2,
  aux_sym_pitch_token1 = 3,
  sym_rest = 4,
  sym_rhythm = 5,
  sym_tuplet_marker = 6,
  aux_sym_grace_note_token1 = 7,
  aux_sym_grace_note_token2 = 8,
  sym_decoration_option = 9,
  sym_annotation = 10,
  sym_source_file = 11,
  sym_pitch = 12,
  sym_note = 13,
  aux_sym_pitch_repeat1 = 14,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym_octave] = "octave",
  [sym_alteration] = "alteration",
  [aux_sym_pitch_token1] = "pitch_token1",
  [sym_rest] = "rest",
  [sym_rhythm] = "rhythm",
  [sym_tuplet_marker] = "tuplet_marker",
  [aux_sym_grace_note_token1] = "grace_note_token1",
  [aux_sym_grace_note_token2] = "grace_note_token2",
  [sym_decoration_option] = "decoration_option",
  [sym_annotation] = "annotation",
  [sym_source_file] = "source_file",
  [sym_pitch] = "pitch",
  [sym_note] = "note",
  [aux_sym_pitch_repeat1] = "pitch_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym_octave] = sym_octave,
  [sym_alteration] = sym_alteration,
  [aux_sym_pitch_token1] = aux_sym_pitch_token1,
  [sym_rest] = sym_rest,
  [sym_rhythm] = sym_rhythm,
  [sym_tuplet_marker] = sym_tuplet_marker,
  [aux_sym_grace_note_token1] = aux_sym_grace_note_token1,
  [aux_sym_grace_note_token2] = aux_sym_grace_note_token2,
  [sym_decoration_option] = sym_decoration_option,
  [sym_annotation] = sym_annotation,
  [sym_source_file] = sym_source_file,
  [sym_pitch] = sym_pitch,
  [sym_note] = sym_note,
  [aux_sym_pitch_repeat1] = aux_sym_pitch_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [sym_octave] = {
    .visible = true,
    .named = true,
  },
  [sym_alteration] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pitch_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_rest] = {
    .visible = true,
    .named = true,
  },
  [sym_rhythm] = {
    .visible = true,
    .named = true,
  },
  [sym_tuplet_marker] = {
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
  [sym_decoration_option] = {
    .visible = true,
    .named = true,
  },
  [sym_annotation] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_pitch] = {
    .visible = true,
    .named = true,
  },
  [sym_note] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_pitch_repeat1] = {
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
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(5);
      if (lookahead == '"') ADVANCE(1);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(6);
      if (lookahead == '(') ADVANCE(3);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(7);
      if (lookahead == '^') ADVANCE(8);
      if (lookahead == '_') ADVANCE(9);
      if (lookahead == '{') ADVANCE(21);
      if (lookahead == '}') ADVANCE(22);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(13);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(11);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0)
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(12);
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
          lookahead == '~') ADVANCE(23);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(10);
      END_STATE();
    case 1:
      if (lookahead == '"') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(1);
      END_STATE();
    case 2:
      if (lookahead == ':') ADVANCE(4);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 3:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 4:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 5:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 6:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(7);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(7);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(aux_sym_pitch_token1);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(14);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(12);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(13);
      if (lookahead == '/' ||
          ('1' <= lookahead && lookahead <= '9')) ADVANCE(15);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/' ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(15);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/' ||
          ('1' <= lookahead && lookahead <= '9') ||
          lookahead == '<' ||
          lookahead == '>') ADVANCE(15);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(2);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(4);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(17);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(18);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(19);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(20);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_decoration_option);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_annotation);
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
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym_octave] = ACTIONS(1),
    [sym_alteration] = ACTIONS(1),
    [aux_sym_pitch_token1] = ACTIONS(1),
    [sym_rest] = ACTIONS(1),
    [sym_rhythm] = ACTIONS(1),
    [sym_tuplet_marker] = ACTIONS(1),
    [aux_sym_grace_note_token1] = ACTIONS(1),
    [aux_sym_grace_note_token2] = ACTIONS(1),
    [sym_decoration_option] = ACTIONS(1),
    [sym_annotation] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(9),
    [sym_pitch] = STATE(7),
    [sym_note] = STATE(10),
    [sym_alteration] = ACTIONS(3),
    [aux_sym_pitch_token1] = ACTIONS(5),
    [sym_rest] = ACTIONS(7),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 3,
    ACTIONS(11), 1,
      sym_octave,
    STATE(4), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(9), 2,
      ts_builtin_sym_end,
      sym_rhythm,
  [11] = 3,
    ACTIONS(15), 1,
      sym_octave,
    STATE(5), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_rhythm,
  [22] = 3,
    ACTIONS(17), 1,
      sym_octave,
    STATE(6), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(13), 2,
      ts_builtin_sym_end,
      sym_rhythm,
  [33] = 3,
    ACTIONS(17), 1,
      sym_octave,
    STATE(6), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym_rhythm,
  [44] = 3,
    ACTIONS(23), 1,
      sym_octave,
    STATE(6), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(21), 2,
      ts_builtin_sym_end,
      sym_rhythm,
  [55] = 2,
    ACTIONS(26), 1,
      ts_builtin_sym_end,
    ACTIONS(28), 1,
      sym_rhythm,
  [62] = 1,
    ACTIONS(30), 1,
      aux_sym_pitch_token1,
  [66] = 1,
    ACTIONS(32), 1,
      ts_builtin_sym_end,
  [70] = 1,
    ACTIONS(34), 1,
      ts_builtin_sym_end,
  [74] = 1,
    ACTIONS(36), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 11,
  [SMALL_STATE(4)] = 22,
  [SMALL_STATE(5)] = 33,
  [SMALL_STATE(6)] = 44,
  [SMALL_STATE(7)] = 55,
  [SMALL_STATE(8)] = 62,
  [SMALL_STATE(9)] = 66,
  [SMALL_STATE(10)] = 70,
  [SMALL_STATE(11)] = 74,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [9] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 1),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [13] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 2),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 3),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pitch_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pitch_repeat1, 2), SHIFT_REPEAT(6),
  [26] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [30] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [32] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
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
