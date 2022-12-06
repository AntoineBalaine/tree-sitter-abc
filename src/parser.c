#include <tree_sitter/parser.h>

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#ifdef _MSC_VER
#pragma optimize("", off)
#elif defined(__clang__)
#pragma clang optimize off
#elif defined(__GNUC__)
#pragma GCC optimize ("O0")
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 318
#define LARGE_STATE_COUNT 108
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 0
#define TOKEN_COUNT 143
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  sym__space = 1,
  sym__NL = 2,
  sym_noCommentText = 3,
  anon_sym_BSLASH = 4,
  anon_sym_PLUS = 5,
  anon_sym_COLON = 6,
  sym_note_skip = 7,
  anon_sym_DASH = 8,
  sym_UNDERSCORE = 9,
  sym_TILDE = 10,
  sym_BEAM_SEPARATOR = 11,
  sym_COMMENT = 12,
  anon_sym_PERCENT_PERCENT = 13,
  aux_sym__MUSIC_CODE_token1 = 14,
  sym_slur_open = 15,
  sym_slur_close = 16,
  aux_sym_note_construct_token1 = 17,
  anon_sym_LBRACK = 18,
  anon_sym_RBRACK = 19,
  sym_alteration = 20,
  sym_note_letter = 21,
  sym_octave = 22,
  sym_rest = 23,
  anon_sym_Z = 24,
  anon_sym_X = 25,
  aux_sym_multimeasure_rest_token1 = 26,
  sym_rhythm = 27,
  aux_sym_grace_note_token1 = 28,
  aux_sym_grace_note_token2 = 29,
  aux_sym_chord_symbol_token1 = 30,
  aux_sym_chord_symbol_token2 = 31,
  sym_annotation = 32,
  sym_tuplet_marker = 33,
  sym_chord_type = 34,
  sym_decoration_shorthand = 35,
  aux_sym_nth_ending_number_token1 = 36,
  anon_sym_COMMA = 37,
  sym_bar_line = 38,
  sym_close_thin_thick_double_bar_line = 39,
  sym_thin_double_bar_line = 40,
  sym_open_thick_thin_double_bar_line = 41,
  sym_start_of_repeated_section = 42,
  sym_end_of_repeated_section = 43,
  sym_start_end_of_two_repeated_sections = 44,
  aux_sym_first_repeat_bar_token1 = 45,
  aux_sym_first_repeat_bar_token2 = 46,
  aux_sym_lyric_line_token1 = 47,
  aux_sym_lyric_syllable_token1 = 48,
  aux_sym_verse_number_token1 = 49,
  anon_sym_DOT = 50,
  anon_sym_BANGtrill_BANG = 51,
  anon_sym_BANGtrill_LPAREN_BANG = 52,
  anon_sym_BANGtrill_RPAREN_BANG = 53,
  anon_sym_BANGlowermordent_BANG = 54,
  anon_sym_BANGuppermordent_BANG = 55,
  anon_sym_BANGmordent_BANG = 56,
  anon_sym_BANGpralltriller_BANG = 57,
  anon_sym_BANGroll_BANG = 58,
  anon_sym_BANGturn_BANG = 59,
  anon_sym_BANGturnx_BANG = 60,
  anon_sym_BANGinvertedturn_BANG = 61,
  anon_sym_BANGinvertedturnx_BANG = 62,
  anon_sym_BANGarpeggio_BANG = 63,
  anon_sym_BANG_GT_BANG = 64,
  anon_sym_BANGaccent_BANG = 65,
  anon_sym_BANGemphasis_BANG = 66,
  anon_sym_BANGfermata_BANG = 67,
  anon_sym_BANGinvertedfermata_BANG = 68,
  anon_sym_BANGtenuto_BANG = 69,
  anon_sym_BANG0_BANG_DASH_BANG5_BANG = 70,
  anon_sym_BANG_PLUS_BANG = 71,
  anon_sym_BANGplus_BANG = 72,
  anon_sym_BANGsnap_BANG = 73,
  anon_sym_BANGslide_BANG = 74,
  anon_sym_BANGwedge_BANG = 75,
  anon_sym_BANGupbow_BANG = 76,
  anon_sym_BANGdownbow_BANG = 77,
  anon_sym_BANGopen_BANG = 78,
  anon_sym_BANGthumb_BANG = 79,
  anon_sym_BANGbreath_BANG = 80,
  anon_sym_BANGpppp_BANG = 81,
  anon_sym_BANGppp_BANG = 82,
  anon_sym_BANGpp_BANG = 83,
  anon_sym_BANGp_BANG = 84,
  anon_sym_BANGmp_BANG = 85,
  anon_sym_BANGmf_BANG = 86,
  anon_sym_BANGf_BANG = 87,
  anon_sym_BANGff_BANG = 88,
  anon_sym_BANGfff_BANG = 89,
  anon_sym_BANGffff_BANG = 90,
  anon_sym_BANGsfz_BANG = 91,
  anon_sym_BANGcrescendo_LPAREN_BANG = 92,
  anon_sym_BANG_LT_LPAREN_BANG = 93,
  anon_sym_BANGcrescendo_RPAREN_BANG = 94,
  anon_sym_BANG_LT_RPAREN_BANG = 95,
  anon_sym_BANGdiminuendo_LPAREN_BANG = 96,
  anon_sym_BANG_GT_LPAREN_BANG = 97,
  anon_sym_BANGdiminuendo_RPAREN_BANG = 98,
  anon_sym_BANG_GT_RPAREN_BANG = 99,
  anon_sym_BANGsegno_BANG = 100,
  anon_sym_BANGcoda_BANG = 101,
  anon_sym_BANGD_DOTS_DOT_BANG = 102,
  anon_sym_BANGD_DOTC_DOT_BANG = 103,
  anon_sym_BANGdacoda_BANG = 104,
  anon_sym_BANGdacapo_BANG = 105,
  anon_sym_BANGfine_BANG = 106,
  anon_sym_BANGshortphrase_BANG = 107,
  anon_sym_BANGmediumphrase_BANG = 108,
  anon_sym_BANGlongphrase_BANG = 109,
  sym_parts_line = 110,
  aux_sym_body_inline_info_token1 = 111,
  anon_sym_PERCENTabc_DASH = 112,
  sym_area = 113,
  sym_book = 114,
  sym_composer = 115,
  sym_discography = 116,
  sym_file = 117,
  sym_group = 118,
  sym_history = 119,
  sym_instruction = 120,
  sym_key = 121,
  sym_macros = 122,
  sym_meter = 123,
  sym_notes = 124,
  sym_origin = 125,
  anon_sym_X_COLON = 126,
  sym_remark = 127,
  sym_rhythm_line = 128,
  sym_source = 129,
  anon_sym_s_COLON = 130,
  sym_tempo = 131,
  sym_transcription = 132,
  sym_tune_title = 133,
  sym_unit_note_length = 134,
  anon_sym_U_COLON = 135,
  aux_sym_user_defined_token1 = 136,
  aux_sym_user_defined_token2 = 137,
  anon_sym_EQ = 138,
  sym_voice = 139,
  anon_sym_w_COLON = 140,
  aux_sym_words_line_token1 = 141,
  sym_words_postbody = 142,
  sym_source_file = 143,
  sym_HYPHEN = 144,
  sym_stylesheet_directives = 145,
  sym__MUSIC_CODE = 146,
  sym_file_structure = 147,
  sym_file_header = 148,
  sym_tune = 149,
  sym_tune_header = 150,
  sym_tune_body = 151,
  sym__music_content = 152,
  sym__nte_or_chrd = 153,
  sym_beam = 154,
  sym_note_construct = 155,
  sym__chord_cstrct = 156,
  sym_note = 157,
  sym_chord_note = 158,
  sym__pitch = 159,
  sym_multimeasure_rest = 160,
  sym_grace_note = 161,
  sym_chord_symbol_note = 162,
  sym_chord_symbol = 163,
  sym_decoration = 164,
  sym_nth_ending_barline = 165,
  sym_nth_ending_number = 166,
  sym_generic_bar_line = 167,
  sym_first_repeat_bar = 168,
  sym_second_repeat_bar = 169,
  sym_lyric_line = 170,
  sym_lyric_section = 171,
  sym_lyric_syllable = 172,
  sym_verse_number = 173,
  sym_lyric_text = 174,
  sym_symbol = 175,
  sym_body_inline_info = 176,
  sym_abc_version = 177,
  sym_reference_number_line = 178,
  sym_symbol_line = 179,
  sym_user_defined = 180,
  sym_words_line = 181,
  sym_body_info_line = 182,
  sym_tune_header_info_line = 183,
  sym_file_header_info_line = 184,
  aux_sym_file_structure_repeat1 = 185,
  aux_sym_file_structure_repeat2 = 186,
  aux_sym_file_header_repeat1 = 187,
  aux_sym_tune_header_repeat1 = 188,
  aux_sym_tune_body_repeat1 = 189,
  aux_sym_beam_repeat1 = 190,
  aux_sym_note_construct_repeat1 = 191,
  aux_sym__chord_cstrct_repeat1 = 192,
  aux_sym__pitch_repeat1 = 193,
  aux_sym_grace_note_repeat1 = 194,
  aux_sym_nth_ending_number_repeat1 = 195,
  aux_sym_lyric_section_repeat1 = 196,
  aux_sym_abc_version_repeat1 = 197,
  aux_sym_symbol_line_repeat1 = 198,
  aux_sym_words_line_repeat1 = 199,
  aux_sym_words_line_repeat2 = 200,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [sym__NL] = "_NL",
  [sym_noCommentText] = "noCommentText",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [sym_note_skip] = "note_skip",
  [anon_sym_DASH] = "-",
  [sym_UNDERSCORE] = "UNDERSCORE",
  [sym_TILDE] = "TILDE",
  [sym_BEAM_SEPARATOR] = "BEAM_SEPARATOR",
  [sym_COMMENT] = "COMMENT",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [aux_sym__MUSIC_CODE_token1] = "_MUSIC_CODE_token1",
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
  [aux_sym_nth_ending_number_token1] = "nth_ending_number_token1",
  [anon_sym_COMMA] = ",",
  [sym_bar_line] = "bar_line",
  [sym_close_thin_thick_double_bar_line] = "close_thin_thick_double_bar_line",
  [sym_thin_double_bar_line] = "thin_double_bar_line",
  [sym_open_thick_thin_double_bar_line] = "open_thick_thin_double_bar_line",
  [sym_start_of_repeated_section] = "start_of_repeated_section",
  [sym_end_of_repeated_section] = "end_of_repeated_section",
  [sym_start_end_of_two_repeated_sections] = "start_end_of_two_repeated_sections",
  [aux_sym_first_repeat_bar_token1] = "first_repeat_bar_token1",
  [aux_sym_first_repeat_bar_token2] = "first_repeat_bar_token2",
  [aux_sym_lyric_line_token1] = "lyric_line_token1",
  [aux_sym_lyric_syllable_token1] = "lyric_syllable_token1",
  [aux_sym_verse_number_token1] = "verse_number_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_BANGtrill_BANG] = "!trill!",
  [anon_sym_BANGtrill_LPAREN_BANG] = "!trill(!",
  [anon_sym_BANGtrill_RPAREN_BANG] = "!trill)!",
  [anon_sym_BANGlowermordent_BANG] = "!lowermordent!",
  [anon_sym_BANGuppermordent_BANG] = "!uppermordent!",
  [anon_sym_BANGmordent_BANG] = "!mordent!",
  [anon_sym_BANGpralltriller_BANG] = "!pralltriller!",
  [anon_sym_BANGroll_BANG] = "!roll!",
  [anon_sym_BANGturn_BANG] = "!turn!",
  [anon_sym_BANGturnx_BANG] = "!turnx!",
  [anon_sym_BANGinvertedturn_BANG] = "!invertedturn!",
  [anon_sym_BANGinvertedturnx_BANG] = "!invertedturnx!",
  [anon_sym_BANGarpeggio_BANG] = "!arpeggio!",
  [anon_sym_BANG_GT_BANG] = "!>!",
  [anon_sym_BANGaccent_BANG] = "!accent!",
  [anon_sym_BANGemphasis_BANG] = "!emphasis!",
  [anon_sym_BANGfermata_BANG] = "!fermata!",
  [anon_sym_BANGinvertedfermata_BANG] = "!invertedfermata!",
  [anon_sym_BANGtenuto_BANG] = "!tenuto!",
  [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = "!0! - !5!",
  [anon_sym_BANG_PLUS_BANG] = "!+!",
  [anon_sym_BANGplus_BANG] = "!plus!",
  [anon_sym_BANGsnap_BANG] = "!snap!",
  [anon_sym_BANGslide_BANG] = "!slide!",
  [anon_sym_BANGwedge_BANG] = "!wedge!",
  [anon_sym_BANGupbow_BANG] = "!upbow!",
  [anon_sym_BANGdownbow_BANG] = "!downbow!",
  [anon_sym_BANGopen_BANG] = "!open!",
  [anon_sym_BANGthumb_BANG] = "!thumb!",
  [anon_sym_BANGbreath_BANG] = "!breath!",
  [anon_sym_BANGpppp_BANG] = "!pppp!",
  [anon_sym_BANGppp_BANG] = "!ppp!",
  [anon_sym_BANGpp_BANG] = "!pp!",
  [anon_sym_BANGp_BANG] = "!p!",
  [anon_sym_BANGmp_BANG] = "!mp!",
  [anon_sym_BANGmf_BANG] = "!mf!",
  [anon_sym_BANGf_BANG] = "!f!",
  [anon_sym_BANGff_BANG] = "!ff!",
  [anon_sym_BANGfff_BANG] = "!fff!",
  [anon_sym_BANGffff_BANG] = "!ffff!",
  [anon_sym_BANGsfz_BANG] = "!sfz!",
  [anon_sym_BANGcrescendo_LPAREN_BANG] = "!crescendo(!",
  [anon_sym_BANG_LT_LPAREN_BANG] = "!<(!",
  [anon_sym_BANGcrescendo_RPAREN_BANG] = "!crescendo)!",
  [anon_sym_BANG_LT_RPAREN_BANG] = "!<)!",
  [anon_sym_BANGdiminuendo_LPAREN_BANG] = "!diminuendo(!",
  [anon_sym_BANG_GT_LPAREN_BANG] = "!>(!",
  [anon_sym_BANGdiminuendo_RPAREN_BANG] = "!diminuendo)!",
  [anon_sym_BANG_GT_RPAREN_BANG] = "!>)!",
  [anon_sym_BANGsegno_BANG] = "!segno!",
  [anon_sym_BANGcoda_BANG] = "!coda!",
  [anon_sym_BANGD_DOTS_DOT_BANG] = "!D.S.!",
  [anon_sym_BANGD_DOTC_DOT_BANG] = "!D.C.!",
  [anon_sym_BANGdacoda_BANG] = "!dacoda!",
  [anon_sym_BANGdacapo_BANG] = "!dacapo!",
  [anon_sym_BANGfine_BANG] = "!fine!",
  [anon_sym_BANGshortphrase_BANG] = "!shortphrase!",
  [anon_sym_BANGmediumphrase_BANG] = "!mediumphrase!",
  [anon_sym_BANGlongphrase_BANG] = "!longphrase!",
  [sym_parts_line] = "parts_line",
  [aux_sym_body_inline_info_token1] = "body_inline_info_token1",
  [anon_sym_PERCENTabc_DASH] = "%abc-",
  [sym_area] = "area",
  [sym_book] = "book",
  [sym_composer] = "composer",
  [sym_discography] = "discography",
  [sym_file] = "file",
  [sym_group] = "group",
  [sym_history] = "history",
  [sym_instruction] = "instruction",
  [sym_key] = "key",
  [sym_macros] = "macros",
  [sym_meter] = "meter",
  [sym_notes] = "notes",
  [sym_origin] = "origin",
  [anon_sym_X_COLON] = "X:",
  [sym_remark] = "remark",
  [sym_rhythm_line] = "rhythm_line",
  [sym_source] = "source",
  [anon_sym_s_COLON] = "s:",
  [sym_tempo] = "tempo",
  [sym_transcription] = "transcription",
  [sym_tune_title] = "tune_title",
  [sym_unit_note_length] = "unit_note_length",
  [anon_sym_U_COLON] = "U:",
  [aux_sym_user_defined_token1] = "user_defined_token1",
  [aux_sym_user_defined_token2] = "user_defined_token2",
  [anon_sym_EQ] = "=",
  [sym_voice] = "voice",
  [anon_sym_w_COLON] = "w:",
  [aux_sym_words_line_token1] = "words_line_token1",
  [sym_words_postbody] = "words_postbody",
  [sym_source_file] = "source_file",
  [sym_HYPHEN] = "HYPHEN",
  [sym_stylesheet_directives] = "stylesheet_directives",
  [sym__MUSIC_CODE] = "_MUSIC_CODE",
  [sym_file_structure] = "file_structure",
  [sym_file_header] = "file_header",
  [sym_tune] = "tune",
  [sym_tune_header] = "tune_header",
  [sym_tune_body] = "tune_body",
  [sym__music_content] = "_music_content",
  [sym__nte_or_chrd] = "_nte_or_chrd",
  [sym_beam] = "beam",
  [sym_note_construct] = "note_construct",
  [sym__chord_cstrct] = "_chord_cstrct",
  [sym_note] = "note",
  [sym_chord_note] = "chord_note",
  [sym__pitch] = "_pitch",
  [sym_multimeasure_rest] = "multimeasure_rest",
  [sym_grace_note] = "grace_note",
  [sym_chord_symbol_note] = "chord_symbol_note",
  [sym_chord_symbol] = "chord_symbol",
  [sym_decoration] = "decoration",
  [sym_nth_ending_barline] = "nth_ending_barline",
  [sym_nth_ending_number] = "nth_ending_number",
  [sym_generic_bar_line] = "generic_bar_line",
  [sym_first_repeat_bar] = "first_repeat_bar",
  [sym_second_repeat_bar] = "second_repeat_bar",
  [sym_lyric_line] = "lyric_line",
  [sym_lyric_section] = "lyric_section",
  [sym_lyric_syllable] = "lyric_syllable",
  [sym_verse_number] = "verse_number",
  [sym_lyric_text] = "lyric_text",
  [sym_symbol] = "symbol",
  [sym_body_inline_info] = "body_inline_info",
  [sym_abc_version] = "abc_version",
  [sym_reference_number_line] = "reference_number_line",
  [sym_symbol_line] = "symbol_line",
  [sym_user_defined] = "user_defined",
  [sym_words_line] = "words_line",
  [sym_body_info_line] = "body_info_line",
  [sym_tune_header_info_line] = "tune_header_info_line",
  [sym_file_header_info_line] = "file_header_info_line",
  [aux_sym_file_structure_repeat1] = "file_structure_repeat1",
  [aux_sym_file_structure_repeat2] = "file_structure_repeat2",
  [aux_sym_file_header_repeat1] = "file_header_repeat1",
  [aux_sym_tune_header_repeat1] = "tune_header_repeat1",
  [aux_sym_tune_body_repeat1] = "tune_body_repeat1",
  [aux_sym_beam_repeat1] = "beam_repeat1",
  [aux_sym_note_construct_repeat1] = "note_construct_repeat1",
  [aux_sym__chord_cstrct_repeat1] = "_chord_cstrct_repeat1",
  [aux_sym__pitch_repeat1] = "_pitch_repeat1",
  [aux_sym_grace_note_repeat1] = "grace_note_repeat1",
  [aux_sym_nth_ending_number_repeat1] = "nth_ending_number_repeat1",
  [aux_sym_lyric_section_repeat1] = "lyric_section_repeat1",
  [aux_sym_abc_version_repeat1] = "abc_version_repeat1",
  [aux_sym_symbol_line_repeat1] = "symbol_line_repeat1",
  [aux_sym_words_line_repeat1] = "words_line_repeat1",
  [aux_sym_words_line_repeat2] = "words_line_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__space] = sym__space,
  [sym__NL] = sym__NL,
  [sym_noCommentText] = sym_noCommentText,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_note_skip] = sym_note_skip,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_UNDERSCORE] = sym_UNDERSCORE,
  [sym_TILDE] = sym_TILDE,
  [sym_BEAM_SEPARATOR] = sym_BEAM_SEPARATOR,
  [sym_COMMENT] = sym_COMMENT,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [aux_sym__MUSIC_CODE_token1] = aux_sym__MUSIC_CODE_token1,
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
  [aux_sym_nth_ending_number_token1] = aux_sym_nth_ending_number_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_bar_line] = sym_bar_line,
  [sym_close_thin_thick_double_bar_line] = sym_close_thin_thick_double_bar_line,
  [sym_thin_double_bar_line] = sym_thin_double_bar_line,
  [sym_open_thick_thin_double_bar_line] = sym_open_thick_thin_double_bar_line,
  [sym_start_of_repeated_section] = sym_start_of_repeated_section,
  [sym_end_of_repeated_section] = sym_end_of_repeated_section,
  [sym_start_end_of_two_repeated_sections] = sym_start_end_of_two_repeated_sections,
  [aux_sym_first_repeat_bar_token1] = aux_sym_first_repeat_bar_token1,
  [aux_sym_first_repeat_bar_token2] = aux_sym_first_repeat_bar_token2,
  [aux_sym_lyric_line_token1] = aux_sym_lyric_line_token1,
  [aux_sym_lyric_syllable_token1] = aux_sym_lyric_syllable_token1,
  [aux_sym_verse_number_token1] = aux_sym_verse_number_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_BANGtrill_BANG] = anon_sym_BANGtrill_BANG,
  [anon_sym_BANGtrill_LPAREN_BANG] = anon_sym_BANGtrill_LPAREN_BANG,
  [anon_sym_BANGtrill_RPAREN_BANG] = anon_sym_BANGtrill_RPAREN_BANG,
  [anon_sym_BANGlowermordent_BANG] = anon_sym_BANGlowermordent_BANG,
  [anon_sym_BANGuppermordent_BANG] = anon_sym_BANGuppermordent_BANG,
  [anon_sym_BANGmordent_BANG] = anon_sym_BANGmordent_BANG,
  [anon_sym_BANGpralltriller_BANG] = anon_sym_BANGpralltriller_BANG,
  [anon_sym_BANGroll_BANG] = anon_sym_BANGroll_BANG,
  [anon_sym_BANGturn_BANG] = anon_sym_BANGturn_BANG,
  [anon_sym_BANGturnx_BANG] = anon_sym_BANGturnx_BANG,
  [anon_sym_BANGinvertedturn_BANG] = anon_sym_BANGinvertedturn_BANG,
  [anon_sym_BANGinvertedturnx_BANG] = anon_sym_BANGinvertedturnx_BANG,
  [anon_sym_BANGarpeggio_BANG] = anon_sym_BANGarpeggio_BANG,
  [anon_sym_BANG_GT_BANG] = anon_sym_BANG_GT_BANG,
  [anon_sym_BANGaccent_BANG] = anon_sym_BANGaccent_BANG,
  [anon_sym_BANGemphasis_BANG] = anon_sym_BANGemphasis_BANG,
  [anon_sym_BANGfermata_BANG] = anon_sym_BANGfermata_BANG,
  [anon_sym_BANGinvertedfermata_BANG] = anon_sym_BANGinvertedfermata_BANG,
  [anon_sym_BANGtenuto_BANG] = anon_sym_BANGtenuto_BANG,
  [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = anon_sym_BANG0_BANG_DASH_BANG5_BANG,
  [anon_sym_BANG_PLUS_BANG] = anon_sym_BANG_PLUS_BANG,
  [anon_sym_BANGplus_BANG] = anon_sym_BANGplus_BANG,
  [anon_sym_BANGsnap_BANG] = anon_sym_BANGsnap_BANG,
  [anon_sym_BANGslide_BANG] = anon_sym_BANGslide_BANG,
  [anon_sym_BANGwedge_BANG] = anon_sym_BANGwedge_BANG,
  [anon_sym_BANGupbow_BANG] = anon_sym_BANGupbow_BANG,
  [anon_sym_BANGdownbow_BANG] = anon_sym_BANGdownbow_BANG,
  [anon_sym_BANGopen_BANG] = anon_sym_BANGopen_BANG,
  [anon_sym_BANGthumb_BANG] = anon_sym_BANGthumb_BANG,
  [anon_sym_BANGbreath_BANG] = anon_sym_BANGbreath_BANG,
  [anon_sym_BANGpppp_BANG] = anon_sym_BANGpppp_BANG,
  [anon_sym_BANGppp_BANG] = anon_sym_BANGppp_BANG,
  [anon_sym_BANGpp_BANG] = anon_sym_BANGpp_BANG,
  [anon_sym_BANGp_BANG] = anon_sym_BANGp_BANG,
  [anon_sym_BANGmp_BANG] = anon_sym_BANGmp_BANG,
  [anon_sym_BANGmf_BANG] = anon_sym_BANGmf_BANG,
  [anon_sym_BANGf_BANG] = anon_sym_BANGf_BANG,
  [anon_sym_BANGff_BANG] = anon_sym_BANGff_BANG,
  [anon_sym_BANGfff_BANG] = anon_sym_BANGfff_BANG,
  [anon_sym_BANGffff_BANG] = anon_sym_BANGffff_BANG,
  [anon_sym_BANGsfz_BANG] = anon_sym_BANGsfz_BANG,
  [anon_sym_BANGcrescendo_LPAREN_BANG] = anon_sym_BANGcrescendo_LPAREN_BANG,
  [anon_sym_BANG_LT_LPAREN_BANG] = anon_sym_BANG_LT_LPAREN_BANG,
  [anon_sym_BANGcrescendo_RPAREN_BANG] = anon_sym_BANGcrescendo_RPAREN_BANG,
  [anon_sym_BANG_LT_RPAREN_BANG] = anon_sym_BANG_LT_RPAREN_BANG,
  [anon_sym_BANGdiminuendo_LPAREN_BANG] = anon_sym_BANGdiminuendo_LPAREN_BANG,
  [anon_sym_BANG_GT_LPAREN_BANG] = anon_sym_BANG_GT_LPAREN_BANG,
  [anon_sym_BANGdiminuendo_RPAREN_BANG] = anon_sym_BANGdiminuendo_RPAREN_BANG,
  [anon_sym_BANG_GT_RPAREN_BANG] = anon_sym_BANG_GT_RPAREN_BANG,
  [anon_sym_BANGsegno_BANG] = anon_sym_BANGsegno_BANG,
  [anon_sym_BANGcoda_BANG] = anon_sym_BANGcoda_BANG,
  [anon_sym_BANGD_DOTS_DOT_BANG] = anon_sym_BANGD_DOTS_DOT_BANG,
  [anon_sym_BANGD_DOTC_DOT_BANG] = anon_sym_BANGD_DOTC_DOT_BANG,
  [anon_sym_BANGdacoda_BANG] = anon_sym_BANGdacoda_BANG,
  [anon_sym_BANGdacapo_BANG] = anon_sym_BANGdacapo_BANG,
  [anon_sym_BANGfine_BANG] = anon_sym_BANGfine_BANG,
  [anon_sym_BANGshortphrase_BANG] = anon_sym_BANGshortphrase_BANG,
  [anon_sym_BANGmediumphrase_BANG] = anon_sym_BANGmediumphrase_BANG,
  [anon_sym_BANGlongphrase_BANG] = anon_sym_BANGlongphrase_BANG,
  [sym_parts_line] = sym_parts_line,
  [aux_sym_body_inline_info_token1] = aux_sym_body_inline_info_token1,
  [anon_sym_PERCENTabc_DASH] = anon_sym_PERCENTabc_DASH,
  [sym_area] = sym_area,
  [sym_book] = sym_book,
  [sym_composer] = sym_composer,
  [sym_discography] = sym_discography,
  [sym_file] = sym_file,
  [sym_group] = sym_group,
  [sym_history] = sym_history,
  [sym_instruction] = sym_instruction,
  [sym_key] = sym_key,
  [sym_macros] = sym_macros,
  [sym_meter] = sym_meter,
  [sym_notes] = sym_notes,
  [sym_origin] = sym_origin,
  [anon_sym_X_COLON] = anon_sym_X_COLON,
  [sym_remark] = sym_remark,
  [sym_rhythm_line] = sym_rhythm_line,
  [sym_source] = sym_source,
  [anon_sym_s_COLON] = anon_sym_s_COLON,
  [sym_tempo] = sym_tempo,
  [sym_transcription] = sym_transcription,
  [sym_tune_title] = sym_tune_title,
  [sym_unit_note_length] = sym_unit_note_length,
  [anon_sym_U_COLON] = anon_sym_U_COLON,
  [aux_sym_user_defined_token1] = aux_sym_user_defined_token1,
  [aux_sym_user_defined_token2] = aux_sym_user_defined_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_voice] = sym_voice,
  [anon_sym_w_COLON] = anon_sym_w_COLON,
  [aux_sym_words_line_token1] = aux_sym_words_line_token1,
  [sym_words_postbody] = sym_words_postbody,
  [sym_source_file] = sym_source_file,
  [sym_HYPHEN] = sym_HYPHEN,
  [sym_stylesheet_directives] = sym_stylesheet_directives,
  [sym__MUSIC_CODE] = sym__MUSIC_CODE,
  [sym_file_structure] = sym_file_structure,
  [sym_file_header] = sym_file_header,
  [sym_tune] = sym_tune,
  [sym_tune_header] = sym_tune_header,
  [sym_tune_body] = sym_tune_body,
  [sym__music_content] = sym__music_content,
  [sym__nte_or_chrd] = sym__nte_or_chrd,
  [sym_beam] = sym_beam,
  [sym_note_construct] = sym_note_construct,
  [sym__chord_cstrct] = sym__chord_cstrct,
  [sym_note] = sym_note,
  [sym_chord_note] = sym_chord_note,
  [sym__pitch] = sym__pitch,
  [sym_multimeasure_rest] = sym_multimeasure_rest,
  [sym_grace_note] = sym_grace_note,
  [sym_chord_symbol_note] = sym_chord_symbol_note,
  [sym_chord_symbol] = sym_chord_symbol,
  [sym_decoration] = sym_decoration,
  [sym_nth_ending_barline] = sym_nth_ending_barline,
  [sym_nth_ending_number] = sym_nth_ending_number,
  [sym_generic_bar_line] = sym_generic_bar_line,
  [sym_first_repeat_bar] = sym_first_repeat_bar,
  [sym_second_repeat_bar] = sym_second_repeat_bar,
  [sym_lyric_line] = sym_lyric_line,
  [sym_lyric_section] = sym_lyric_section,
  [sym_lyric_syllable] = sym_lyric_syllable,
  [sym_verse_number] = sym_verse_number,
  [sym_lyric_text] = sym_lyric_text,
  [sym_symbol] = sym_symbol,
  [sym_body_inline_info] = sym_body_inline_info,
  [sym_abc_version] = sym_abc_version,
  [sym_reference_number_line] = sym_reference_number_line,
  [sym_symbol_line] = sym_symbol_line,
  [sym_user_defined] = sym_user_defined,
  [sym_words_line] = sym_words_line,
  [sym_body_info_line] = sym_body_info_line,
  [sym_tune_header_info_line] = sym_tune_header_info_line,
  [sym_file_header_info_line] = sym_file_header_info_line,
  [aux_sym_file_structure_repeat1] = aux_sym_file_structure_repeat1,
  [aux_sym_file_structure_repeat2] = aux_sym_file_structure_repeat2,
  [aux_sym_file_header_repeat1] = aux_sym_file_header_repeat1,
  [aux_sym_tune_header_repeat1] = aux_sym_tune_header_repeat1,
  [aux_sym_tune_body_repeat1] = aux_sym_tune_body_repeat1,
  [aux_sym_beam_repeat1] = aux_sym_beam_repeat1,
  [aux_sym_note_construct_repeat1] = aux_sym_note_construct_repeat1,
  [aux_sym__chord_cstrct_repeat1] = aux_sym__chord_cstrct_repeat1,
  [aux_sym__pitch_repeat1] = aux_sym__pitch_repeat1,
  [aux_sym_grace_note_repeat1] = aux_sym_grace_note_repeat1,
  [aux_sym_nth_ending_number_repeat1] = aux_sym_nth_ending_number_repeat1,
  [aux_sym_lyric_section_repeat1] = aux_sym_lyric_section_repeat1,
  [aux_sym_abc_version_repeat1] = aux_sym_abc_version_repeat1,
  [aux_sym_symbol_line_repeat1] = aux_sym_symbol_line_repeat1,
  [aux_sym_words_line_repeat1] = aux_sym_words_line_repeat1,
  [aux_sym_words_line_repeat2] = aux_sym_words_line_repeat2,
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
  [sym__NL] = {
    .visible = false,
    .named = true,
  },
  [sym_noCommentText] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_BSLASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_PLUS] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_note_skip] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_UNDERSCORE] = {
    .visible = true,
    .named = true,
  },
  [sym_TILDE] = {
    .visible = true,
    .named = true,
  },
  [sym_BEAM_SEPARATOR] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMENT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENT_PERCENT] = {
    .visible = true,
    .named = false,
  },
  [aux_sym__MUSIC_CODE_token1] = {
    .visible = false,
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
  [aux_sym_nth_ending_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
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
  [sym_thin_double_bar_line] = {
    .visible = true,
    .named = true,
  },
  [sym_open_thick_thin_double_bar_line] = {
    .visible = true,
    .named = true,
  },
  [sym_start_of_repeated_section] = {
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
  [aux_sym_lyric_line_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lyric_syllable_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verse_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGtrill_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGtrill_LPAREN_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGtrill_RPAREN_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGlowermordent_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGuppermordent_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGmordent_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGpralltriller_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGroll_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGturn_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGturnx_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGinvertedturn_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGinvertedturnx_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGarpeggio_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_GT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGaccent_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGemphasis_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGfermata_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGinvertedfermata_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGtenuto_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_PLUS_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGplus_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGsnap_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGslide_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGwedge_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGupbow_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGdownbow_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGopen_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGthumb_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGbreath_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGpppp_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGppp_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGpp_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGp_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGmp_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGmf_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGf_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGff_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGfff_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGffff_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGsfz_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGcrescendo_LPAREN_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_LT_LPAREN_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGcrescendo_RPAREN_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_LT_RPAREN_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGdiminuendo_LPAREN_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_GT_LPAREN_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGdiminuendo_RPAREN_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANG_GT_RPAREN_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGsegno_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGcoda_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGD_DOTS_DOT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGD_DOTC_DOT_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGdacoda_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGdacapo_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGfine_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGshortphrase_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGmediumphrase_BANG] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_BANGlongphrase_BANG] = {
    .visible = true,
    .named = false,
  },
  [sym_parts_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_body_inline_info_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_PERCENTabc_DASH] = {
    .visible = true,
    .named = false,
  },
  [sym_area] = {
    .visible = true,
    .named = true,
  },
  [sym_book] = {
    .visible = true,
    .named = true,
  },
  [sym_composer] = {
    .visible = true,
    .named = true,
  },
  [sym_discography] = {
    .visible = true,
    .named = true,
  },
  [sym_file] = {
    .visible = true,
    .named = true,
  },
  [sym_group] = {
    .visible = true,
    .named = true,
  },
  [sym_history] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_key] = {
    .visible = true,
    .named = true,
  },
  [sym_macros] = {
    .visible = true,
    .named = true,
  },
  [sym_meter] = {
    .visible = true,
    .named = true,
  },
  [sym_notes] = {
    .visible = true,
    .named = true,
  },
  [sym_origin] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_X_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_remark] = {
    .visible = true,
    .named = true,
  },
  [sym_rhythm_line] = {
    .visible = true,
    .named = true,
  },
  [sym_source] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_s_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_tempo] = {
    .visible = true,
    .named = true,
  },
  [sym_transcription] = {
    .visible = true,
    .named = true,
  },
  [sym_tune_title] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_note_length] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_U_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_user_defined_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_user_defined_token2] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_voice] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_w_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_words_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_words_postbody] = {
    .visible = true,
    .named = true,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_HYPHEN] = {
    .visible = true,
    .named = true,
  },
  [sym_stylesheet_directives] = {
    .visible = true,
    .named = true,
  },
  [sym__MUSIC_CODE] = {
    .visible = false,
    .named = true,
  },
  [sym_file_structure] = {
    .visible = true,
    .named = true,
  },
  [sym_file_header] = {
    .visible = true,
    .named = true,
  },
  [sym_tune] = {
    .visible = true,
    .named = true,
  },
  [sym_tune_header] = {
    .visible = true,
    .named = true,
  },
  [sym_tune_body] = {
    .visible = true,
    .named = true,
  },
  [sym__music_content] = {
    .visible = false,
    .named = true,
  },
  [sym__nte_or_chrd] = {
    .visible = false,
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
  [sym__chord_cstrct] = {
    .visible = false,
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
  [sym__pitch] = {
    .visible = false,
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
  [sym_nth_ending_barline] = {
    .visible = true,
    .named = true,
  },
  [sym_nth_ending_number] = {
    .visible = true,
    .named = true,
  },
  [sym_generic_bar_line] = {
    .visible = true,
    .named = true,
  },
  [sym_first_repeat_bar] = {
    .visible = true,
    .named = true,
  },
  [sym_second_repeat_bar] = {
    .visible = true,
    .named = true,
  },
  [sym_lyric_line] = {
    .visible = true,
    .named = true,
  },
  [sym_lyric_section] = {
    .visible = true,
    .named = true,
  },
  [sym_lyric_syllable] = {
    .visible = true,
    .named = true,
  },
  [sym_verse_number] = {
    .visible = true,
    .named = true,
  },
  [sym_lyric_text] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_body_inline_info] = {
    .visible = true,
    .named = true,
  },
  [sym_abc_version] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_number_line] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_line] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined] = {
    .visible = true,
    .named = true,
  },
  [sym_words_line] = {
    .visible = true,
    .named = true,
  },
  [sym_body_info_line] = {
    .visible = true,
    .named = true,
  },
  [sym_tune_header_info_line] = {
    .visible = true,
    .named = true,
  },
  [sym_file_header_info_line] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_file_structure_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_structure_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tune_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_tune_body_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_beam_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_note_construct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__chord_cstrct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__pitch_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_grace_note_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_nth_ending_number_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lyric_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_abc_version_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_words_line_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_words_line_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum {
  field_type = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_type] = "type",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_type, 0},
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
  [66] = 64,
  [67] = 65,
  [68] = 68,
  [69] = 68,
  [70] = 19,
  [71] = 23,
  [72] = 23,
  [73] = 19,
  [74] = 37,
  [75] = 20,
  [76] = 22,
  [77] = 24,
  [78] = 22,
  [79] = 20,
  [80] = 37,
  [81] = 24,
  [82] = 34,
  [83] = 34,
  [84] = 55,
  [85] = 56,
  [86] = 86,
  [87] = 49,
  [88] = 88,
  [89] = 53,
  [90] = 88,
  [91] = 54,
  [92] = 53,
  [93] = 52,
  [94] = 50,
  [95] = 95,
  [96] = 56,
  [97] = 49,
  [98] = 55,
  [99] = 54,
  [100] = 100,
  [101] = 51,
  [102] = 86,
  [103] = 51,
  [104] = 95,
  [105] = 50,
  [106] = 52,
  [107] = 100,
  [108] = 108,
  [109] = 108,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 18,
  [118] = 13,
  [119] = 16,
  [120] = 17,
  [121] = 15,
  [122] = 122,
  [123] = 122,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 21,
  [129] = 129,
  [130] = 130,
  [131] = 126,
  [132] = 132,
  [133] = 124,
  [134] = 134,
  [135] = 130,
  [136] = 132,
  [137] = 137,
  [138] = 127,
  [139] = 129,
  [140] = 140,
  [141] = 30,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 143,
  [147] = 144,
  [148] = 148,
  [149] = 148,
  [150] = 140,
  [151] = 151,
  [152] = 36,
  [153] = 33,
  [154] = 27,
  [155] = 35,
  [156] = 31,
  [157] = 28,
  [158] = 32,
  [159] = 25,
  [160] = 29,
  [161] = 26,
  [162] = 45,
  [163] = 39,
  [164] = 38,
  [165] = 48,
  [166] = 166,
  [167] = 47,
  [168] = 46,
  [169] = 40,
  [170] = 170,
  [171] = 44,
  [172] = 43,
  [173] = 42,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 177,
  [181] = 179,
  [182] = 182,
  [183] = 178,
  [184] = 184,
  [185] = 174,
  [186] = 175,
  [187] = 184,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 189,
  [192] = 188,
  [193] = 193,
  [194] = 176,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 95,
  [201] = 201,
  [202] = 88,
  [203] = 86,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 206,
  [210] = 199,
  [211] = 211,
  [212] = 100,
  [213] = 196,
  [214] = 201,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 224,
  [225] = 225,
  [226] = 226,
  [227] = 226,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 226,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 242,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 245,
  [250] = 244,
  [251] = 242,
  [252] = 252,
  [253] = 240,
  [254] = 254,
  [255] = 255,
  [256] = 239,
  [257] = 221,
  [258] = 252,
  [259] = 240,
  [260] = 244,
  [261] = 239,
  [262] = 252,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 56,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 56,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 267,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 272,
  [291] = 291,
  [292] = 284,
  [293] = 285,
  [294] = 286,
  [295] = 267,
  [296] = 296,
  [297] = 284,
  [298] = 285,
  [299] = 287,
  [300] = 289,
  [301] = 272,
  [302] = 302,
  [303] = 302,
  [304] = 304,
  [305] = 266,
  [306] = 265,
  [307] = 282,
  [308] = 308,
  [309] = 309,
  [310] = 287,
  [311] = 275,
  [312] = 312,
  [313] = 266,
  [314] = 265,
  [315] = 289,
  [316] = 316,
  [317] = 317,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(290);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '!') ADVANCE(75);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(568);
      if (lookahead == '\'') ADVANCE(595);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(556);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == ',') ADVANCE(657);
      if (lookahead == '-') ADVANCE(559);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '/') ADVANCE(603);
      if (lookahead == '0') ADVANCE(601);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead == '=') ADVANCE(1155);
      if (lookahead == 'A') ADVANCE(589);
      if (lookahead == 'B') ADVANCE(590);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'D') ADVANCE(592);
      if (lookahead == 'F') ADVANCE(593);
      if (lookahead == 'G') ADVANCE(594);
      if (lookahead == 'H') ADVANCE(648);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'K') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == 'O') ADVANCE(652);
      if (lookahead == 'P') ADVANCE(653);
      if (lookahead == 'Q') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(654);
      if (lookahead == 'T') ADVANCE(655);
      if (lookahead == 'U') ADVANCE(90);
      if (lookahead == 'V') ADVANCE(91);
      if (lookahead == 'W') ADVANCE(92);
      if (lookahead == 'X') ADVANCE(599);
      if (lookahead == 'Z') ADVANCE(598);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(553);
      if (lookahead == ']') ADVANCE(584);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(562);
      if (lookahead == '`') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(1150);
      if (lookahead == 'r') ADVANCE(1151);
      if (lookahead == 's') ADVANCE(1152);
      if (lookahead == 'w') ADVANCE(1153);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == '}') ADVANCE(609);
      if (lookahead == '~') ADVANCE(565);
      if ((9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(576);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(605);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == 'u' ||
          lookahead == 'v') ADVANCE(647);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(600);
      if (('h' <= lookahead && lookahead <= 't')) ADVANCE(1149);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == ':') ADVANCE(369);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == '|') ADVANCE(663);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(292);
      if (lookahead == '"') ADVANCE(610);
      if (lookahead == '*') ADVANCE(556);
      if (lookahead == '-') ADVANCE(559);
      if (lookahead == '.') ADVANCE(686);
      if (lookahead == '/') ADVANCE(613);
      if (lookahead == '=') ADVANCE(1155);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '|') ADVANCE(660);
      if (lookahead == '~') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(685);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(78);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(748);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(727);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(796);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(787);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(814);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(820);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(826);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(832);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(799);
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(793);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(790);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(784);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(802);
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(781);
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(808);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(844);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(841);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(838);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(805);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(853);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(769);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(751);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(778);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(709);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(754);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(712);
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(83);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(835);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(757);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(772);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(688);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(715);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(763);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(760);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(730);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(775);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(850);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(847);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(742);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(691);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(694);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(745);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(766);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(736);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(703);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(724);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(733);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(811);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(817);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(862);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(823);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(829);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(856);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(718);
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(697);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(859);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(706);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(700);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(721);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(739);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == ',') ADVANCE(659);
      if (lookahead == '-') ADVANCE(561);
      if (lookahead == ':') ADVANCE(369);
      if (lookahead == '[') ADVANCE(549);
      if (lookahead == '|') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 67:
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == ':') ADVANCE(369);
      if (lookahead == '[') ADVANCE(549);
      if (lookahead == '|') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(610);
      if (lookahead == '(') ADVANCE(283);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == '/') ADVANCE(603);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == ']') ADVANCE(584);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == '`') ADVANCE(567);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '}') ADVANCE(609);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(595);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(605);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(604);
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
          lookahead == '~') ADVANCE(647);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(610);
      if (lookahead == '/') ADVANCE(613);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(646);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(619);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'd') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(620);
      if (lookahead == 's') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 71:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      END_STATE();
    case 72:
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      END_STATE();
    case 73:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      END_STATE();
    case 74:
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(561);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == '|') ADVANCE(664);
      if (lookahead == '~') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 75:
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == 'D') ADVANCE(79);
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'b') ADVANCE(236);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(105);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 76:
      if (lookahead == '+') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(103);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(101);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 83:
      if (lookahead == '5') ADVANCE(47);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(679);
      if (lookahead == '|') ADVANCE(676);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(1133);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(1134);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(1137);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(1144);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(1141);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(1148);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(1156);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(1159);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(1135);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(1140);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(1143);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(1157);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(285);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(82);
      END_STATE();
    case 102:
      if (lookahead == 'H') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (('h' <= lookahead && lookahead <= 'w')) ADVANCE(1149);
      END_STATE();
    case 103:
      if (lookahead == 'W') ADVANCE(1154);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(147);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(168);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(151);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(166);
      if (lookahead == 'f') ADVANCE(281);
      if (lookahead == 'h') ADVANCE(217);
      if (lookahead == 'l') ADVANCE(175);
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'h') ADVANCE(273);
      if (lookahead == 'r') ADVANCE(178);
      if (lookahead == 'u') ADVANCE(242);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(104);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(164);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(241);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(203);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 163:
      if (lookahead == 'f') ADVANCE(161);
      if (lookahead == 't') ADVANCE(275);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(165);
      END_STATE();
    case 165:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 166:
      if (lookahead == 'g') ADVANCE(204);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(229);
      END_STATE();
    case 168:
      if (lookahead == 'g') ADVANCE(152);
      END_STATE();
    case 169:
      if (lookahead == 'h') ADVANCE(106);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(243);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(248);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(132);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(221);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(181);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(148);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(120);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(228);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(177);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(235);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(121);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(272);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(218);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(150);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(130);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(136);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(200);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(237);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(119);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(219);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(176);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(125);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(171);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(234);
      END_STATE();
    case 271:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(268);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(189);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(196);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(160);
      END_STATE();
    case 277:
      if (lookahead == 'v') ADVANCE(145);
      END_STATE();
    case 278:
      if (lookahead == 'w') ADVANCE(198);
      END_STATE();
    case 279:
      if (lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 280:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 281:
      if (lookahead == 'z') ADVANCE(20);
      END_STATE();
    case 282:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 283:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 286:
      if (eof) ADVANCE(290);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == '!') ADVANCE(75);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(569);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == ',') ADVANCE(657);
      if (lookahead == '-') ADVANCE(559);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'K') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == 'P') ADVANCE(653);
      if (lookahead == 'Q') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(655);
      if (lookahead == 'U') ADVANCE(90);
      if (lookahead == 'V') ADVANCE(91);
      if (lookahead == 'W') ADVANCE(92);
      if (lookahead == 'X') ADVANCE(599);
      if (lookahead == 'Z') ADVANCE(597);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(553);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(96);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(682);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      END_STATE();
    case 287:
      if (eof) ADVANCE(290);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == '!') ADVANCE(75);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(569);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == '/') ADVANCE(603);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'K') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == 'P') ADVANCE(653);
      if (lookahead == 'Q') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(655);
      if (lookahead == 'U') ADVANCE(90);
      if (lookahead == 'V') ADVANCE(91);
      if (lookahead == 'W') ADVANCE(92);
      if (lookahead == 'X') ADVANCE(599);
      if (lookahead == 'Z') ADVANCE(597);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(553);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == '`') ADVANCE(567);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(96);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(595);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(605);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(647);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(604);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      END_STATE();
    case 288:
      if (eof) ADVANCE(290);
      if (lookahead == '\n') ADVANCE(292);
      if (lookahead == '!') ADVANCE(75);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(568);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(556);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == 'A') ADVANCE(589);
      if (lookahead == 'B') ADVANCE(590);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'D') ADVANCE(592);
      if (lookahead == 'F') ADVANCE(593);
      if (lookahead == 'G') ADVANCE(594);
      if (lookahead == 'H') ADVANCE(649);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'K') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == 'O') ADVANCE(652);
      if (lookahead == 'P') ADVANCE(653);
      if (lookahead == 'Q') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == 'S') ADVANCE(654);
      if (lookahead == 'T') ADVANCE(655);
      if (lookahead == 'U') ADVANCE(90);
      if (lookahead == 'V') ADVANCE(91);
      if (lookahead == 'W') ADVANCE(92);
      if (lookahead == 'X') ADVANCE(599);
      if (lookahead == 'Z') ADVANCE(598);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(553);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(647);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(656);
      END_STATE();
    case 289:
      if (eof) ADVANCE(290);
      if (lookahead == '\n') ADVANCE(292);
      if (lookahead == '!') ADVANCE(75);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(569);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == 'I') ADVANCE(85);
      if (lookahead == 'K') ADVANCE(86);
      if (lookahead == 'L') ADVANCE(650);
      if (lookahead == 'M') ADVANCE(651);
      if (lookahead == 'N') ADVANCE(87);
      if (lookahead == 'P') ADVANCE(653);
      if (lookahead == 'Q') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == 'T') ADVANCE(655);
      if (lookahead == 'U') ADVANCE(90);
      if (lookahead == 'V') ADVANCE(91);
      if (lookahead == 'W') ADVANCE(92);
      if (lookahead == 'X') ADVANCE(599);
      if (lookahead == 'Z') ADVANCE(597);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(553);
      if (lookahead == ']') ADVANCE(584);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(96);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == '}') ADVANCE(609);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(682);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__NL);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__NL);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ' ') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ' ') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(295);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(729);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(798);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(789);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(801);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(786);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(804);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(783);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(807);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(855);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(714);
      if (lookahead == 'x') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(690);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == ')') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(852);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(849);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(705);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(864);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(858);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(720);
      if (lookahead == 'x') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(861);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '"') ADVANCE(552);
      if (lookahead == '%') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(302);
      if (lookahead == ')') ADVANCE(303);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(345);
      if (lookahead == ')') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == '0') ADVANCE(298);
      if (lookahead == '<') ADVANCE(359);
      if (lookahead == '>') ADVANCE(299);
      if (lookahead == 'D') ADVANCE(364);
      if (lookahead == 'a') ADVANCE(389);
      if (lookahead == 'b') ADVANCE(503);
      if (lookahead == 'c') ADVANCE(480);
      if (lookahead == 'd') ADVANCE(372);
      if (lookahead == 'e') ADVANCE(457);
      if (lookahead == 'f') ADVANCE(300);
      if (lookahead == 'i') ADVANCE(464);
      if (lookahead == 'l') ADVANCE(481);
      if (lookahead == 'm') ADVANCE(406);
      if (lookahead == 'o') ADVANCE(497);
      if (lookahead == 'p') ADVANCE(301);
      if (lookahead == 'r') ADVANCE(482);
      if (lookahead == 's') ADVANCE(404);
      if (lookahead == 't') ADVANCE(407);
      if (lookahead == 'u') ADVANCE(494);
      if (lookahead == 'w') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '-') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '5') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ':') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ':') ADVANCE(681);
      if (lookahead == '|') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'C') ADVANCE(365);
      if (lookahead == 'S') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(390);
      if (lookahead == 'i') ADVANCE(458);
      if (lookahead == 'o') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(500);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(483);
      if (lookahead == 'p') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead == 'r') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead == 'f') ADVANCE(548);
      if (lookahead == 'h') ADVANCE(484);
      if (lookahead == 'l') ADVANCE(442);
      if (lookahead == 'n') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead == 'f') ADVANCE(307);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead == 'p') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(469);
      if (lookahead == 'h') ADVANCE(540);
      if (lookahead == 'r') ADVANCE(445);
      if (lookahead == 'u') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'f') ADVANCE(428);
      if (lookahead == 't') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(434);
      if (lookahead == 'w') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(395);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'v') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'z') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '|') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_noCommentText);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_noCommentText);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == ':') ADVANCE(1158);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(679);
      if (lookahead == '|') ADVANCE(676);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_note_skip);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_note_skip);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_note_skip);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (lookahead == '_') ADVANCE(585);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_TILDE);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_BEAM_SEPARATOR);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '%') ADVANCE(574);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(573);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '%') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(573);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '-') ADVANCE(1125);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(573);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'b') ADVANCE(572);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(573);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'c') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(573);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(573);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__MUSIC_CODE_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__MUSIC_CODE_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(670);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(585);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(585);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(1126);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(1127);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(1128);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(1129);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(1130);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(1131);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == ':') ADVANCE(1145);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == ':') ADVANCE(1139);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(282);
      if (lookahead == '0') ADVANCE(601);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(602);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(602);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(282);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(607);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(615);
      if (lookahead == '%' ||
          lookahead == ']') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(933);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(631);
      if (lookahead == 'i') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == '-') ADVANCE(103);
      if (lookahead == ':') ADVANCE(1132);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(1132);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(1147);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(1136);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(1138);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(865);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(1142);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(1146);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_nth_ending_number_token1);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_bar_line);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(673);
      if (lookahead == ']') ADVANCE(665);
      if (lookahead == '|') ADVANCE(667);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == ']') ADVANCE(665);
      if (lookahead == '|') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(1124);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(675);
      if (lookahead == ']') ADVANCE(666);
      if (lookahead == '|') ADVANCE(669);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(682);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_lyric_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(684);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(685);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 855:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 856:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 857:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 858:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 859:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 860:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 861:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 862:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 863:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 864:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 865:
      ACCEPT_TOKEN(sym_parts_line);
      END_STATE();
    case 866:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == '!') ADVANCE(937);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '[') ADVANCE(582);
      if (lookahead == '|') ADVANCE(662);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 867:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == '!') ADVANCE(937);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '[') ADVANCE(582);
      if (lookahead == '|') ADVANCE(662);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      if (lookahead != 0 &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 868:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == ' ') ADVANCE(938);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 869:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == ' ') ADVANCE(899);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 870:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(937);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == ',') ADVANCE(658);
      if (lookahead == '-') ADVANCE(560);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '[') ADVANCE(1123);
      if (lookahead == '|') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 871:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(937);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == ':') ADVANCE(943);
      if (lookahead == '[') ADVANCE(1123);
      if (lookahead == '|') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 872:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 873:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(868);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 874:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(728);
      if (lookahead == '(') ADVANCE(879);
      if (lookahead == ')') ADVANCE(880);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 875:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(797);
      if (lookahead == 'e') ADVANCE(1079);
      if (lookahead == 'f') ADVANCE(881);
      if (lookahead == 'i') ADVANCE(1047);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 876:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(788);
      if (lookahead == 'l') ADVANCE(1112);
      if (lookahead == 'p') ADVANCE(884);
      if (lookahead == 'r') ADVANCE(956);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 877:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 878:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 879:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 880:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 881:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(800);
      if (lookahead == 'f') ADVANCE(885);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 882:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 883:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 884:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(785);
      if (lookahead == 'p') ADVANCE(886);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 885:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(803);
      if (lookahead == 'f') ADVANCE(891);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 886:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(782);
      if (lookahead == 'p') ADVANCE(895);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 887:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 888:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 889:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 890:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(839);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 891:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 892:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(854);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 893:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 894:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 895:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 896:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 897:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 898:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(713);
      if (lookahead == 'x') ADVANCE(904);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 899:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(942);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 900:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 901:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 902:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 903:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(689);
      if (lookahead == '(') ADVANCE(912);
      if (lookahead == ')') ADVANCE(913);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 904:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 905:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 906:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 907:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 908:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 909:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(851);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 910:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 911:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(743);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 912:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 913:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 914:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 915:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 916:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 917:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 918:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 919:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 920:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 921:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 922:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(863);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 923:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 924:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 925:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(857);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 926:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(719);
      if (lookahead == 'x') ADVANCE(931);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 927:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 928:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(860);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 929:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 930:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 931:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 932:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '!') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 933:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '"') ADVANCE(615);
      if (lookahead == '%' ||
          lookahead == ']') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(933);
      END_STATE();
    case 934:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '(') ADVANCE(877);
      if (lookahead == ')') ADVANCE(878);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 935:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '(') ADVANCE(920);
      if (lookahead == ')') ADVANCE(921);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 936:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '(') ADVANCE(923);
      if (lookahead == ')') ADVANCE(924);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 937:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '+') ADVANCE(872);
      if (lookahead == '0') ADVANCE(873);
      if (lookahead == '<') ADVANCE(934);
      if (lookahead == '>') ADVANCE(874);
      if (lookahead == 'D') ADVANCE(939);
      if (lookahead == 'a') ADVANCE(963);
      if (lookahead == 'b') ADVANCE(1077);
      if (lookahead == 'c') ADVANCE(1054);
      if (lookahead == 'd') ADVANCE(946);
      if (lookahead == 'e') ADVANCE(1031);
      if (lookahead == 'f') ADVANCE(875);
      if (lookahead == 'i') ADVANCE(1038);
      if (lookahead == 'l') ADVANCE(1055);
      if (lookahead == 'm') ADVANCE(980);
      if (lookahead == 'o') ADVANCE(1071);
      if (lookahead == 'p') ADVANCE(876);
      if (lookahead == 'r') ADVANCE(1056);
      if (lookahead == 's') ADVANCE(978);
      if (lookahead == 't') ADVANCE(981);
      if (lookahead == 'u') ADVANCE(1068);
      if (lookahead == 'w') ADVANCE(982);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 938:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '-') ADVANCE(869);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 939:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '.') ADVANCE(944);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 940:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '.') ADVANCE(888);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 941:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '.') ADVANCE(889);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 942:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '5') ADVANCE(914);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 943:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == ':') ADVANCE(680);
      if (lookahead == '|') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 944:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'C') ADVANCE(940);
      if (lookahead == 'S') ADVANCE(941);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 945:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(1101);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 946:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(964);
      if (lookahead == 'i') ADVANCE(1032);
      if (lookahead == 'o') ADVANCE(1119);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 947:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(1094);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 948:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(1073);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 949:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(1097);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 950:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(1074);
      if (lookahead == 'o') ADVANCE(972);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 951:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(1108);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 952:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(890);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 953:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(910);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 954:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(916);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 955:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(932);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 956:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(1024);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 957:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(1098);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 958:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(1110);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 959:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'a') ADVANCE(1099);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 960:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'b') ADVANCE(1057);
      if (lookahead == 'p') ADVANCE(1003);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 961:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'b') ADVANCE(902);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 962:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'b') ADVANCE(1064);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 963:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'c') ADVANCE(965);
      if (lookahead == 'r') ADVANCE(1072);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 964:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'c') ADVANCE(950);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 965:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'c') ADVANCE(988);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 966:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'c') ADVANCE(990);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 967:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'd') ADVANCE(1004);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 968:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'd') ADVANCE(1009);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 969:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'd') ADVANCE(952);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 970:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'd') ADVANCE(1015);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 971:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'd') ADVANCE(1063);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 972:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'd') ADVANCE(953);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 973:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'd') ADVANCE(992);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 974:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'd') ADVANCE(998);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 975:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'd') ADVANCE(999);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 976:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'd') ADVANCE(1000);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 977:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'd') ADVANCE(1065);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 978:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1007);
      if (lookahead == 'f') ADVANCE(1122);
      if (lookahead == 'h') ADVANCE(1058);
      if (lookahead == 'l') ADVANCE(1016);
      if (lookahead == 'n') ADVANCE(948);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 979:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1100);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 980:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(970);
      if (lookahead == 'f') ADVANCE(882);
      if (lookahead == 'o') ADVANCE(1080);
      if (lookahead == 'p') ADVANCE(883);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 981:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1043);
      if (lookahead == 'h') ADVANCE(1114);
      if (lookahead == 'r') ADVANCE(1019);
      if (lookahead == 'u') ADVANCE(1083);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 982:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(968);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 983:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(945);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 984:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1005);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 985:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1049);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 986:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1082);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 987:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(967);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 988:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1044);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 989:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1086);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 990:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1048);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 991:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(892);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 992:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(901);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 993:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(906);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 994:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(922);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 995:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(925);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 996:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(928);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 997:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1081);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 998:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1050);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 999:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1051);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1000:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1052);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1001:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1053);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1002:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1092);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1003:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'e') ADVANCE(1093);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1004:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'f') ADVANCE(1002);
      if (lookahead == 't') ADVANCE(1116);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1005:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'g') ADVANCE(1006);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1006:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'g') ADVANCE(1021);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1007:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'g') ADVANCE(1045);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1008:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'g') ADVANCE(1070);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1009:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'g') ADVANCE(993);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1010:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'h') ADVANCE(947);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1011:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'h') ADVANCE(1084);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1012:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'h') ADVANCE(908);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1013:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'h') ADVANCE(1089);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1014:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'h') ADVANCE(1091);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1015:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'i') ADVANCE(1115);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1016:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'i') ADVANCE(973);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1017:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'i') ADVANCE(1096);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1018:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'i') ADVANCE(1046);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1019:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'i') ADVANCE(1025);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1020:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'i') ADVANCE(1026);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1021:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'i') ADVANCE(1062);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1022:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'l') ADVANCE(903);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1023:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'l') ADVANCE(1029);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1024:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'l') ADVANCE(1027);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1025:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'l') ADVANCE(1022);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1026:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'l') ADVANCE(1028);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1027:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'l') ADVANCE(1102);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1028:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'l') ADVANCE(989);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1029:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'l') ADVANCE(896);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1030:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'm') ADVANCE(961);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1031:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'm') ADVANCE(1069);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1032:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'm') ADVANCE(1018);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1033:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'm') ADVANCE(1066);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1034:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'm') ADVANCE(951);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1035:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'm') ADVANCE(958);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1036:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'm') ADVANCE(1067);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1037:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'm') ADVANCE(1076);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1038:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(1118);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1039:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(962);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1040:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(898);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1041:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(1008);
      if (lookahead == 'w') ADVANCE(997);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1042:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(926);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1043:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(1113);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1044:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(1103);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1045:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(1059);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1046:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(1117);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1047:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(991);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1048:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(971);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1049:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(893);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1050:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(1104);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1051:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(1105);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1052:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(1106);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1053:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'n') ADVANCE(977);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1054:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(969);
      if (lookahead == 'r') ADVANCE(979);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1055:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(1041);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1056:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(1023);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1057:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(1120);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1058:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(1078);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1059:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(900);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1060:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(909);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1061:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(911);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1062:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(918);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1063:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(935);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1064:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(1121);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1065:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(936);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1066:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(1088);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1067:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'o') ADVANCE(1090);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1068:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'p') ADVANCE(960);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1069:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'p') ADVANCE(1010);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1070:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'p') ADVANCE(1011);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1071:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'p') ADVANCE(985);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1072:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'p') ADVANCE(984);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1073:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'p') ADVANCE(897);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1074:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'p') ADVANCE(1060);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1075:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'p') ADVANCE(1013);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1076:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'p') ADVANCE(1014);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1077:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(983);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1078:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(1111);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1079:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(1034);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1080:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(974);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1081:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(1033);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1082:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(1107);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1083:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(1040);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1084:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(949);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1085:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(1042);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1086:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(929);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1087:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(1020);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1088:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(975);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1089:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(957);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1090:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(976);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1091:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(959);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1092:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(1035);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1093:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'r') ADVANCE(1036);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1094:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 's') ADVANCE(1017);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1095:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 's') ADVANCE(894);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1096:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 's') ADVANCE(919);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1097:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 's') ADVANCE(994);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1098:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 's') ADVANCE(995);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1099:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 's') ADVANCE(996);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1100:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 's') ADVANCE(966);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1101:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 't') ADVANCE(1012);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1102:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 't') ADVANCE(1087);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1103:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 't') ADVANCE(907);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1104:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 't') ADVANCE(917);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1105:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 't') ADVANCE(927);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1106:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 't') ADVANCE(930);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1107:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 't') ADVANCE(987);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1108:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 't') ADVANCE(954);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1109:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 't') ADVANCE(1061);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1110:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 't') ADVANCE(955);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1111:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 't') ADVANCE(1075);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1112:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'u') ADVANCE(1095);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1113:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'u') ADVANCE(1109);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1114:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'u') ADVANCE(1030);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1115:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'u') ADVANCE(1037);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1116:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'u') ADVANCE(1085);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1117:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'u') ADVANCE(1001);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1118:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'v') ADVANCE(986);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1119:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'w') ADVANCE(1039);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1120:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'w') ADVANCE(905);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1121:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'w') ADVANCE(915);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1122:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == 'z') ADVANCE(887);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1123:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '|') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1124:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%' &&
          lookahead != ']') ADVANCE(1124);
      END_STATE();
    case 1125:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(573);
      END_STATE();
    case 1126:
      ACCEPT_TOKEN(sym_area);
      END_STATE();
    case 1127:
      ACCEPT_TOKEN(sym_book);
      END_STATE();
    case 1128:
      ACCEPT_TOKEN(sym_composer);
      END_STATE();
    case 1129:
      ACCEPT_TOKEN(sym_discography);
      END_STATE();
    case 1130:
      ACCEPT_TOKEN(sym_file);
      END_STATE();
    case 1131:
      ACCEPT_TOKEN(sym_group);
      END_STATE();
    case 1132:
      ACCEPT_TOKEN(sym_history);
      END_STATE();
    case 1133:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 1134:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 1135:
      ACCEPT_TOKEN(sym_macros);
      END_STATE();
    case 1136:
      ACCEPT_TOKEN(sym_meter);
      END_STATE();
    case 1137:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 1138:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 1139:
      ACCEPT_TOKEN(anon_sym_X_COLON);
      END_STATE();
    case 1140:
      ACCEPT_TOKEN(sym_remark);
      END_STATE();
    case 1141:
      ACCEPT_TOKEN(sym_rhythm_line);
      END_STATE();
    case 1142:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 1143:
      ACCEPT_TOKEN(anon_sym_s_COLON);
      END_STATE();
    case 1144:
      ACCEPT_TOKEN(sym_tempo);
      END_STATE();
    case 1145:
      ACCEPT_TOKEN(sym_transcription);
      END_STATE();
    case 1146:
      ACCEPT_TOKEN(sym_tune_title);
      END_STATE();
    case 1147:
      ACCEPT_TOKEN(sym_unit_note_length);
      END_STATE();
    case 1148:
      ACCEPT_TOKEN(anon_sym_U_COLON);
      END_STATE();
    case 1149:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      END_STATE();
    case 1150:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(1135);
      END_STATE();
    case 1151:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(1140);
      END_STATE();
    case 1152:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(1143);
      END_STATE();
    case 1153:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(1157);
      END_STATE();
    case 1154:
      ACCEPT_TOKEN(aux_sym_user_defined_token2);
      END_STATE();
    case 1155:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 1156:
      ACCEPT_TOKEN(sym_voice);
      END_STATE();
    case 1157:
      ACCEPT_TOKEN(anon_sym_w_COLON);
      END_STATE();
    case 1158:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    case 1159:
      ACCEPT_TOKEN(sym_words_postbody);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 288},
  [2] = {.lex_state = 289},
  [3] = {.lex_state = 289},
  [4] = {.lex_state = 289},
  [5] = {.lex_state = 288},
  [6] = {.lex_state = 288},
  [7] = {.lex_state = 288},
  [8] = {.lex_state = 287},
  [9] = {.lex_state = 287},
  [10] = {.lex_state = 288},
  [11] = {.lex_state = 288},
  [12] = {.lex_state = 288},
  [13] = {.lex_state = 287},
  [14] = {.lex_state = 289},
  [15] = {.lex_state = 287},
  [16] = {.lex_state = 287},
  [17] = {.lex_state = 287},
  [18] = {.lex_state = 287},
  [19] = {.lex_state = 286},
  [20] = {.lex_state = 286},
  [21] = {.lex_state = 287},
  [22] = {.lex_state = 286},
  [23] = {.lex_state = 286},
  [24] = {.lex_state = 286},
  [25] = {.lex_state = 287},
  [26] = {.lex_state = 287},
  [27] = {.lex_state = 287},
  [28] = {.lex_state = 287},
  [29] = {.lex_state = 287},
  [30] = {.lex_state = 287},
  [31] = {.lex_state = 287},
  [32] = {.lex_state = 287},
  [33] = {.lex_state = 287},
  [34] = {.lex_state = 286},
  [35] = {.lex_state = 287},
  [36] = {.lex_state = 287},
  [37] = {.lex_state = 287},
  [38] = {.lex_state = 287},
  [39] = {.lex_state = 287},
  [40] = {.lex_state = 287},
  [41] = {.lex_state = 287},
  [42] = {.lex_state = 287},
  [43] = {.lex_state = 287},
  [44] = {.lex_state = 287},
  [45] = {.lex_state = 287},
  [46] = {.lex_state = 287},
  [47] = {.lex_state = 287},
  [48] = {.lex_state = 287},
  [49] = {.lex_state = 287},
  [50] = {.lex_state = 287},
  [51] = {.lex_state = 287},
  [52] = {.lex_state = 287},
  [53] = {.lex_state = 287},
  [54] = {.lex_state = 287},
  [55] = {.lex_state = 287},
  [56] = {.lex_state = 287},
  [57] = {.lex_state = 287},
  [58] = {.lex_state = 287},
  [59] = {.lex_state = 287},
  [60] = {.lex_state = 287},
  [61] = {.lex_state = 289},
  [62] = {.lex_state = 289},
  [63] = {.lex_state = 289},
  [64] = {.lex_state = 871},
  [65] = {.lex_state = 67},
  [66] = {.lex_state = 67},
  [67] = {.lex_state = 871},
  [68] = {.lex_state = 288},
  [69] = {.lex_state = 288},
  [70] = {.lex_state = 866},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 866},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 867},
  [75] = {.lex_state = 66},
  [76] = {.lex_state = 66},
  [77] = {.lex_state = 66},
  [78] = {.lex_state = 870},
  [79] = {.lex_state = 870},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 870},
  [82] = {.lex_state = 66},
  [83] = {.lex_state = 870},
  [84] = {.lex_state = 871},
  [85] = {.lex_state = 871},
  [86] = {.lex_state = 871},
  [87] = {.lex_state = 871},
  [88] = {.lex_state = 67},
  [89] = {.lex_state = 871},
  [90] = {.lex_state = 871},
  [91] = {.lex_state = 871},
  [92] = {.lex_state = 67},
  [93] = {.lex_state = 871},
  [94] = {.lex_state = 871},
  [95] = {.lex_state = 871},
  [96] = {.lex_state = 67},
  [97] = {.lex_state = 67},
  [98] = {.lex_state = 67},
  [99] = {.lex_state = 67},
  [100] = {.lex_state = 871},
  [101] = {.lex_state = 67},
  [102] = {.lex_state = 67},
  [103] = {.lex_state = 871},
  [104] = {.lex_state = 67},
  [105] = {.lex_state = 67},
  [106] = {.lex_state = 67},
  [107] = {.lex_state = 67},
  [108] = {.lex_state = 0},
  [109] = {.lex_state = 0},
  [110] = {.lex_state = 288},
  [111] = {.lex_state = 289},
  [112] = {.lex_state = 288},
  [113] = {.lex_state = 288},
  [114] = {.lex_state = 288},
  [115] = {.lex_state = 69},
  [116] = {.lex_state = 69},
  [117] = {.lex_state = 69},
  [118] = {.lex_state = 69},
  [119] = {.lex_state = 69},
  [120] = {.lex_state = 69},
  [121] = {.lex_state = 69},
  [122] = {.lex_state = 69},
  [123] = {.lex_state = 69},
  [124] = {.lex_state = 74},
  [125] = {.lex_state = 74},
  [126] = {.lex_state = 289},
  [127] = {.lex_state = 289},
  [128] = {.lex_state = 69},
  [129] = {.lex_state = 289},
  [130] = {.lex_state = 289},
  [131] = {.lex_state = 289},
  [132] = {.lex_state = 289},
  [133] = {.lex_state = 2},
  [134] = {.lex_state = 289},
  [135] = {.lex_state = 289},
  [136] = {.lex_state = 289},
  [137] = {.lex_state = 2},
  [138] = {.lex_state = 289},
  [139] = {.lex_state = 289},
  [140] = {.lex_state = 289},
  [141] = {.lex_state = 69},
  [142] = {.lex_state = 2},
  [143] = {.lex_state = 289},
  [144] = {.lex_state = 289},
  [145] = {.lex_state = 289},
  [146] = {.lex_state = 289},
  [147] = {.lex_state = 289},
  [148] = {.lex_state = 289},
  [149] = {.lex_state = 289},
  [150] = {.lex_state = 289},
  [151] = {.lex_state = 2},
  [152] = {.lex_state = 69},
  [153] = {.lex_state = 69},
  [154] = {.lex_state = 69},
  [155] = {.lex_state = 69},
  [156] = {.lex_state = 69},
  [157] = {.lex_state = 69},
  [158] = {.lex_state = 69},
  [159] = {.lex_state = 69},
  [160] = {.lex_state = 69},
  [161] = {.lex_state = 69},
  [162] = {.lex_state = 69},
  [163] = {.lex_state = 69},
  [164] = {.lex_state = 69},
  [165] = {.lex_state = 69},
  [166] = {.lex_state = 69},
  [167] = {.lex_state = 69},
  [168] = {.lex_state = 69},
  [169] = {.lex_state = 69},
  [170] = {.lex_state = 289},
  [171] = {.lex_state = 69},
  [172] = {.lex_state = 69},
  [173] = {.lex_state = 69},
  [174] = {.lex_state = 74},
  [175] = {.lex_state = 74},
  [176] = {.lex_state = 74},
  [177] = {.lex_state = 289},
  [178] = {.lex_state = 74},
  [179] = {.lex_state = 289},
  [180] = {.lex_state = 289},
  [181] = {.lex_state = 289},
  [182] = {.lex_state = 69},
  [183] = {.lex_state = 2},
  [184] = {.lex_state = 289},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 2},
  [187] = {.lex_state = 289},
  [188] = {.lex_state = 289},
  [189] = {.lex_state = 289},
  [190] = {.lex_state = 288},
  [191] = {.lex_state = 289},
  [192] = {.lex_state = 289},
  [193] = {.lex_state = 288},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 289},
  [196] = {.lex_state = 289},
  [197] = {.lex_state = 0},
  [198] = {.lex_state = 289},
  [199] = {.lex_state = 289},
  [200] = {.lex_state = 289},
  [201] = {.lex_state = 289},
  [202] = {.lex_state = 289},
  [203] = {.lex_state = 289},
  [204] = {.lex_state = 288},
  [205] = {.lex_state = 288},
  [206] = {.lex_state = 289},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 289},
  [209] = {.lex_state = 289},
  [210] = {.lex_state = 289},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 289},
  [213] = {.lex_state = 289},
  [214] = {.lex_state = 289},
  [215] = {.lex_state = 289},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 289},
  [218] = {.lex_state = 289},
  [219] = {.lex_state = 289},
  [220] = {.lex_state = 289},
  [221] = {.lex_state = 70},
  [222] = {.lex_state = 288},
  [223] = {.lex_state = 288},
  [224] = {.lex_state = 288},
  [225] = {.lex_state = 289},
  [226] = {.lex_state = 70},
  [227] = {.lex_state = 70},
  [228] = {.lex_state = 80},
  [229] = {.lex_state = 288},
  [230] = {.lex_state = 288},
  [231] = {.lex_state = 70},
  [232] = {.lex_state = 76},
  [233] = {.lex_state = 80},
  [234] = {.lex_state = 80},
  [235] = {.lex_state = 288},
  [236] = {.lex_state = 70},
  [237] = {.lex_state = 76},
  [238] = {.lex_state = 76},
  [239] = {.lex_state = 289},
  [240] = {.lex_state = 289},
  [241] = {.lex_state = 289},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 2},
  [244] = {.lex_state = 0},
  [245] = {.lex_state = 102},
  [246] = {.lex_state = 288},
  [247] = {.lex_state = 289},
  [248] = {.lex_state = 289},
  [249] = {.lex_state = 102},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 2},
  [252] = {.lex_state = 289},
  [253] = {.lex_state = 289},
  [254] = {.lex_state = 80},
  [255] = {.lex_state = 289},
  [256] = {.lex_state = 289},
  [257] = {.lex_state = 69},
  [258] = {.lex_state = 289},
  [259] = {.lex_state = 289},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 289},
  [262] = {.lex_state = 289},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 288},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 288},
  [268] = {.lex_state = 76},
  [269] = {.lex_state = 76},
  [270] = {.lex_state = 76},
  [271] = {.lex_state = 288},
  [272] = {.lex_state = 69},
  [273] = {.lex_state = 288},
  [274] = {.lex_state = 1124},
  [275] = {.lex_state = 289},
  [276] = {.lex_state = 76},
  [277] = {.lex_state = 1124},
  [278] = {.lex_state = 288},
  [279] = {.lex_state = 288},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 288},
  [282] = {.lex_state = 76},
  [283] = {.lex_state = 288},
  [284] = {.lex_state = 289},
  [285] = {.lex_state = 289},
  [286] = {.lex_state = 2},
  [287] = {.lex_state = 69},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 288},
  [290] = {.lex_state = 69},
  [291] = {.lex_state = 288},
  [292] = {.lex_state = 289},
  [293] = {.lex_state = 289},
  [294] = {.lex_state = 2},
  [295] = {.lex_state = 288},
  [296] = {.lex_state = 684},
  [297] = {.lex_state = 289},
  [298] = {.lex_state = 289},
  [299] = {.lex_state = 69},
  [300] = {.lex_state = 288},
  [301] = {.lex_state = 69},
  [302] = {.lex_state = 2},
  [303] = {.lex_state = 2},
  [304] = {.lex_state = 76},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 1124},
  [308] = {.lex_state = 288},
  [309] = {.lex_state = 288},
  [310] = {.lex_state = 69},
  [311] = {.lex_state = 289},
  [312] = {.lex_state = 102},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 288},
  [316] = {.lex_state = 684},
  [317] = {.lex_state = 288},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__NL] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_note_skip] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_UNDERSCORE] = ACTIONS(1),
    [sym_TILDE] = ACTIONS(1),
    [sym_BEAM_SEPARATOR] = ACTIONS(1),
    [sym_COMMENT] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(1),
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
    [aux_sym_nth_ending_number_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_bar_line] = ACTIONS(1),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(1),
    [sym_thin_double_bar_line] = ACTIONS(1),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(1),
    [sym_start_of_repeated_section] = ACTIONS(1),
    [sym_end_of_repeated_section] = ACTIONS(1),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(1),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(1),
    [aux_sym_verse_number_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_BANGtrill_BANG] = ACTIONS(1),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(1),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(1),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(1),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(1),
    [anon_sym_BANGmordent_BANG] = ACTIONS(1),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(1),
    [anon_sym_BANGroll_BANG] = ACTIONS(1),
    [anon_sym_BANGturn_BANG] = ACTIONS(1),
    [anon_sym_BANGturnx_BANG] = ACTIONS(1),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(1),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(1),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(1),
    [anon_sym_BANG_GT_BANG] = ACTIONS(1),
    [anon_sym_BANGaccent_BANG] = ACTIONS(1),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(1),
    [anon_sym_BANGfermata_BANG] = ACTIONS(1),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(1),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(1),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(1),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(1),
    [anon_sym_BANGplus_BANG] = ACTIONS(1),
    [anon_sym_BANGsnap_BANG] = ACTIONS(1),
    [anon_sym_BANGslide_BANG] = ACTIONS(1),
    [anon_sym_BANGwedge_BANG] = ACTIONS(1),
    [anon_sym_BANGupbow_BANG] = ACTIONS(1),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(1),
    [anon_sym_BANGopen_BANG] = ACTIONS(1),
    [anon_sym_BANGthumb_BANG] = ACTIONS(1),
    [anon_sym_BANGbreath_BANG] = ACTIONS(1),
    [anon_sym_BANGpppp_BANG] = ACTIONS(1),
    [anon_sym_BANGppp_BANG] = ACTIONS(1),
    [anon_sym_BANGpp_BANG] = ACTIONS(1),
    [anon_sym_BANGp_BANG] = ACTIONS(1),
    [anon_sym_BANGmp_BANG] = ACTIONS(1),
    [anon_sym_BANGmf_BANG] = ACTIONS(1),
    [anon_sym_BANGf_BANG] = ACTIONS(1),
    [anon_sym_BANGff_BANG] = ACTIONS(1),
    [anon_sym_BANGfff_BANG] = ACTIONS(1),
    [anon_sym_BANGffff_BANG] = ACTIONS(1),
    [anon_sym_BANGsfz_BANG] = ACTIONS(1),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(1),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(1),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(1),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(1),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(1),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(1),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(1),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(1),
    [anon_sym_BANGsegno_BANG] = ACTIONS(1),
    [anon_sym_BANGcoda_BANG] = ACTIONS(1),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(1),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(1),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(1),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(1),
    [anon_sym_BANGfine_BANG] = ACTIONS(1),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(1),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(1),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(1),
    [sym_parts_line] = ACTIONS(1),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(1),
    [sym_area] = ACTIONS(1),
    [sym_book] = ACTIONS(1),
    [sym_composer] = ACTIONS(1),
    [sym_discography] = ACTIONS(1),
    [sym_file] = ACTIONS(1),
    [sym_group] = ACTIONS(1),
    [sym_history] = ACTIONS(1),
    [sym_instruction] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_macros] = ACTIONS(1),
    [sym_meter] = ACTIONS(1),
    [sym_notes] = ACTIONS(1),
    [sym_origin] = ACTIONS(1),
    [anon_sym_X_COLON] = ACTIONS(1),
    [sym_remark] = ACTIONS(1),
    [sym_rhythm_line] = ACTIONS(1),
    [sym_source] = ACTIONS(1),
    [anon_sym_s_COLON] = ACTIONS(1),
    [sym_tempo] = ACTIONS(1),
    [sym_transcription] = ACTIONS(1),
    [sym_tune_title] = ACTIONS(1),
    [sym_unit_note_length] = ACTIONS(1),
    [anon_sym_U_COLON] = ACTIONS(1),
    [aux_sym_user_defined_token1] = ACTIONS(1),
    [aux_sym_user_defined_token2] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_voice] = ACTIONS(1),
    [anon_sym_w_COLON] = ACTIONS(1),
    [aux_sym_words_line_token1] = ACTIONS(1),
    [sym_words_postbody] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(263),
    [sym_stylesheet_directives] = STATE(246),
    [sym_file_structure] = STATE(280),
    [sym_file_header] = STATE(216),
    [sym_tune] = STATE(223),
    [sym_tune_header] = STATE(14),
    [sym_abc_version] = STATE(276),
    [sym_reference_number_line] = STATE(7),
    [sym_user_defined] = STATE(276),
    [sym_file_header_info_line] = STATE(246),
    [aux_sym_file_structure_repeat2] = STATE(197),
    [aux_sym_file_header_repeat1] = STATE(110),
    [sym_COMMENT] = ACTIONS(3),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(5),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(7),
    [sym_area] = ACTIONS(9),
    [sym_book] = ACTIONS(9),
    [sym_composer] = ACTIONS(9),
    [sym_discography] = ACTIONS(9),
    [sym_file] = ACTIONS(9),
    [sym_group] = ACTIONS(9),
    [sym_history] = ACTIONS(9),
    [sym_instruction] = ACTIONS(9),
    [sym_macros] = ACTIONS(9),
    [sym_meter] = ACTIONS(9),
    [sym_notes] = ACTIONS(9),
    [sym_origin] = ACTIONS(9),
    [anon_sym_X_COLON] = ACTIONS(11),
    [sym_remark] = ACTIONS(9),
    [sym_rhythm_line] = ACTIONS(9),
    [sym_source] = ACTIONS(9),
    [sym_transcription] = ACTIONS(9),
    [sym_unit_note_length] = ACTIONS(9),
    [anon_sym_U_COLON] = ACTIONS(13),
  },
  [2] = {
    [sym_stylesheet_directives] = STATE(3),
    [sym__MUSIC_CODE] = STATE(3),
    [sym__music_content] = STATE(58),
    [sym__nte_or_chrd] = STATE(115),
    [sym_beam] = STATE(58),
    [sym_note_construct] = STATE(115),
    [sym__chord_cstrct] = STATE(115),
    [sym_note] = STATE(158),
    [sym__pitch] = STATE(128),
    [sym_multimeasure_rest] = STATE(58),
    [sym_grace_note] = STATE(122),
    [sym_chord_symbol] = STATE(179),
    [sym_decoration] = STATE(210),
    [sym_nth_ending_barline] = STATE(51),
    [sym_generic_bar_line] = STATE(58),
    [sym_first_repeat_bar] = STATE(51),
    [sym_second_repeat_bar] = STATE(51),
    [sym_symbol] = STATE(58),
    [sym_body_inline_info] = STATE(58),
    [sym_symbol_line] = STATE(270),
    [sym_user_defined] = STATE(270),
    [sym_words_line] = STATE(270),
    [sym_body_info_line] = STATE(271),
    [aux_sym_tune_body_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__NL] = ACTIONS(15),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_COMMENT] = ACTIONS(19),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(5),
    [sym_slur_open] = ACTIONS(21),
    [sym_slur_close] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_alteration] = ACTIONS(25),
    [sym_note_letter] = ACTIONS(27),
    [sym_rest] = ACTIONS(29),
    [anon_sym_Z] = ACTIONS(31),
    [anon_sym_X] = ACTIONS(33),
    [aux_sym_grace_note_token1] = ACTIONS(35),
    [aux_sym_chord_symbol_token1] = ACTIONS(37),
    [sym_annotation] = ACTIONS(17),
    [sym_tuplet_marker] = ACTIONS(39),
    [sym_decoration_shorthand] = ACTIONS(41),
    [sym_bar_line] = ACTIONS(43),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(45),
    [sym_thin_double_bar_line] = ACTIONS(45),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(45),
    [sym_start_of_repeated_section] = ACTIONS(47),
    [sym_end_of_repeated_section] = ACTIONS(49),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(47),
    [anon_sym_BANGtrill_BANG] = ACTIONS(51),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(51),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(51),
    [anon_sym_BANGmordent_BANG] = ACTIONS(51),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(51),
    [anon_sym_BANGroll_BANG] = ACTIONS(51),
    [anon_sym_BANGturn_BANG] = ACTIONS(51),
    [anon_sym_BANGturnx_BANG] = ACTIONS(51),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(51),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(51),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(51),
    [anon_sym_BANG_GT_BANG] = ACTIONS(51),
    [anon_sym_BANGaccent_BANG] = ACTIONS(51),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(51),
    [anon_sym_BANGfermata_BANG] = ACTIONS(51),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(51),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(51),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(51),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(51),
    [anon_sym_BANGplus_BANG] = ACTIONS(51),
    [anon_sym_BANGsnap_BANG] = ACTIONS(51),
    [anon_sym_BANGslide_BANG] = ACTIONS(51),
    [anon_sym_BANGwedge_BANG] = ACTIONS(51),
    [anon_sym_BANGupbow_BANG] = ACTIONS(51),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(51),
    [anon_sym_BANGopen_BANG] = ACTIONS(51),
    [anon_sym_BANGthumb_BANG] = ACTIONS(51),
    [anon_sym_BANGbreath_BANG] = ACTIONS(51),
    [anon_sym_BANGpppp_BANG] = ACTIONS(51),
    [anon_sym_BANGppp_BANG] = ACTIONS(51),
    [anon_sym_BANGpp_BANG] = ACTIONS(51),
    [anon_sym_BANGp_BANG] = ACTIONS(51),
    [anon_sym_BANGmp_BANG] = ACTIONS(51),
    [anon_sym_BANGmf_BANG] = ACTIONS(51),
    [anon_sym_BANGf_BANG] = ACTIONS(51),
    [anon_sym_BANGff_BANG] = ACTIONS(51),
    [anon_sym_BANGfff_BANG] = ACTIONS(51),
    [anon_sym_BANGffff_BANG] = ACTIONS(51),
    [anon_sym_BANGsfz_BANG] = ACTIONS(51),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGsegno_BANG] = ACTIONS(51),
    [anon_sym_BANGcoda_BANG] = ACTIONS(51),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(51),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(51),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(51),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(51),
    [anon_sym_BANGfine_BANG] = ACTIONS(51),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(51),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(51),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(51),
    [sym_parts_line] = ACTIONS(53),
    [sym_instruction] = ACTIONS(53),
    [sym_key] = ACTIONS(53),
    [sym_macros] = ACTIONS(53),
    [sym_meter] = ACTIONS(53),
    [sym_notes] = ACTIONS(53),
    [anon_sym_X_COLON] = ACTIONS(15),
    [sym_remark] = ACTIONS(53),
    [sym_rhythm_line] = ACTIONS(53),
    [anon_sym_s_COLON] = ACTIONS(55),
    [sym_tempo] = ACTIONS(53),
    [sym_tune_title] = ACTIONS(53),
    [sym_unit_note_length] = ACTIONS(53),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(53),
    [anon_sym_w_COLON] = ACTIONS(57),
    [sym_words_postbody] = ACTIONS(15),
  },
  [3] = {
    [sym_stylesheet_directives] = STATE(3),
    [sym__MUSIC_CODE] = STATE(3),
    [sym__music_content] = STATE(58),
    [sym__nte_or_chrd] = STATE(115),
    [sym_beam] = STATE(58),
    [sym_note_construct] = STATE(115),
    [sym__chord_cstrct] = STATE(115),
    [sym_note] = STATE(158),
    [sym__pitch] = STATE(128),
    [sym_multimeasure_rest] = STATE(58),
    [sym_grace_note] = STATE(122),
    [sym_chord_symbol] = STATE(179),
    [sym_decoration] = STATE(210),
    [sym_nth_ending_barline] = STATE(51),
    [sym_generic_bar_line] = STATE(58),
    [sym_first_repeat_bar] = STATE(51),
    [sym_second_repeat_bar] = STATE(51),
    [sym_symbol] = STATE(58),
    [sym_body_inline_info] = STATE(58),
    [sym_symbol_line] = STATE(270),
    [sym_user_defined] = STATE(270),
    [sym_words_line] = STATE(270),
    [sym_body_info_line] = STATE(271),
    [aux_sym_tune_body_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym__NL] = ACTIONS(59),
    [anon_sym_BSLASH] = ACTIONS(61),
    [sym_COMMENT] = ACTIONS(64),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(67),
    [sym_slur_open] = ACTIONS(70),
    [sym_slur_close] = ACTIONS(61),
    [anon_sym_LBRACK] = ACTIONS(73),
    [sym_alteration] = ACTIONS(76),
    [sym_note_letter] = ACTIONS(79),
    [sym_rest] = ACTIONS(82),
    [anon_sym_Z] = ACTIONS(85),
    [anon_sym_X] = ACTIONS(88),
    [aux_sym_grace_note_token1] = ACTIONS(91),
    [aux_sym_chord_symbol_token1] = ACTIONS(94),
    [sym_annotation] = ACTIONS(61),
    [sym_tuplet_marker] = ACTIONS(97),
    [sym_decoration_shorthand] = ACTIONS(100),
    [sym_bar_line] = ACTIONS(103),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(106),
    [sym_thin_double_bar_line] = ACTIONS(106),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(106),
    [sym_start_of_repeated_section] = ACTIONS(109),
    [sym_end_of_repeated_section] = ACTIONS(112),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(109),
    [anon_sym_BANGtrill_BANG] = ACTIONS(115),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(115),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(115),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(115),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(115),
    [anon_sym_BANGmordent_BANG] = ACTIONS(115),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(115),
    [anon_sym_BANGroll_BANG] = ACTIONS(115),
    [anon_sym_BANGturn_BANG] = ACTIONS(115),
    [anon_sym_BANGturnx_BANG] = ACTIONS(115),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(115),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(115),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(115),
    [anon_sym_BANG_GT_BANG] = ACTIONS(115),
    [anon_sym_BANGaccent_BANG] = ACTIONS(115),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(115),
    [anon_sym_BANGfermata_BANG] = ACTIONS(115),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(115),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(115),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(115),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(115),
    [anon_sym_BANGplus_BANG] = ACTIONS(115),
    [anon_sym_BANGsnap_BANG] = ACTIONS(115),
    [anon_sym_BANGslide_BANG] = ACTIONS(115),
    [anon_sym_BANGwedge_BANG] = ACTIONS(115),
    [anon_sym_BANGupbow_BANG] = ACTIONS(115),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(115),
    [anon_sym_BANGopen_BANG] = ACTIONS(115),
    [anon_sym_BANGthumb_BANG] = ACTIONS(115),
    [anon_sym_BANGbreath_BANG] = ACTIONS(115),
    [anon_sym_BANGpppp_BANG] = ACTIONS(115),
    [anon_sym_BANGppp_BANG] = ACTIONS(115),
    [anon_sym_BANGpp_BANG] = ACTIONS(115),
    [anon_sym_BANGp_BANG] = ACTIONS(115),
    [anon_sym_BANGmp_BANG] = ACTIONS(115),
    [anon_sym_BANGmf_BANG] = ACTIONS(115),
    [anon_sym_BANGf_BANG] = ACTIONS(115),
    [anon_sym_BANGff_BANG] = ACTIONS(115),
    [anon_sym_BANGfff_BANG] = ACTIONS(115),
    [anon_sym_BANGffff_BANG] = ACTIONS(115),
    [anon_sym_BANGsfz_BANG] = ACTIONS(115),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(115),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(115),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(115),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(115),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(115),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(115),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(115),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(115),
    [anon_sym_BANGsegno_BANG] = ACTIONS(115),
    [anon_sym_BANGcoda_BANG] = ACTIONS(115),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(115),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(115),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(115),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(115),
    [anon_sym_BANGfine_BANG] = ACTIONS(115),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(115),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(115),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(115),
    [sym_parts_line] = ACTIONS(118),
    [sym_instruction] = ACTIONS(118),
    [sym_key] = ACTIONS(118),
    [sym_macros] = ACTIONS(118),
    [sym_meter] = ACTIONS(118),
    [sym_notes] = ACTIONS(118),
    [anon_sym_X_COLON] = ACTIONS(59),
    [sym_remark] = ACTIONS(118),
    [sym_rhythm_line] = ACTIONS(118),
    [anon_sym_s_COLON] = ACTIONS(121),
    [sym_tempo] = ACTIONS(118),
    [sym_tune_title] = ACTIONS(118),
    [sym_unit_note_length] = ACTIONS(118),
    [anon_sym_U_COLON] = ACTIONS(124),
    [sym_voice] = ACTIONS(118),
    [anon_sym_w_COLON] = ACTIONS(127),
    [sym_words_postbody] = ACTIONS(59),
  },
  [4] = {
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(58),
    [sym__nte_or_chrd] = STATE(115),
    [sym_beam] = STATE(58),
    [sym_note_construct] = STATE(115),
    [sym__chord_cstrct] = STATE(115),
    [sym_note] = STATE(158),
    [sym__pitch] = STATE(128),
    [sym_multimeasure_rest] = STATE(58),
    [sym_grace_note] = STATE(122),
    [sym_chord_symbol] = STATE(179),
    [sym_decoration] = STATE(210),
    [sym_nth_ending_barline] = STATE(51),
    [sym_generic_bar_line] = STATE(58),
    [sym_first_repeat_bar] = STATE(51),
    [sym_second_repeat_bar] = STATE(51),
    [sym_symbol] = STATE(58),
    [sym_body_inline_info] = STATE(58),
    [sym_symbol_line] = STATE(270),
    [sym_user_defined] = STATE(270),
    [sym_words_line] = STATE(270),
    [sym_body_info_line] = STATE(271),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(122),
    [ts_builtin_sym_end] = ACTIONS(130),
    [sym__NL] = ACTIONS(130),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_COMMENT] = ACTIONS(19),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(5),
    [sym_slur_open] = ACTIONS(21),
    [sym_slur_close] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_alteration] = ACTIONS(25),
    [sym_note_letter] = ACTIONS(27),
    [sym_rest] = ACTIONS(29),
    [anon_sym_Z] = ACTIONS(31),
    [anon_sym_X] = ACTIONS(33),
    [aux_sym_grace_note_token1] = ACTIONS(35),
    [aux_sym_chord_symbol_token1] = ACTIONS(37),
    [sym_annotation] = ACTIONS(17),
    [sym_tuplet_marker] = ACTIONS(39),
    [sym_decoration_shorthand] = ACTIONS(41),
    [sym_bar_line] = ACTIONS(43),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(45),
    [sym_thin_double_bar_line] = ACTIONS(45),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(45),
    [sym_start_of_repeated_section] = ACTIONS(47),
    [sym_end_of_repeated_section] = ACTIONS(49),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(47),
    [anon_sym_BANGtrill_BANG] = ACTIONS(51),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(51),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(51),
    [anon_sym_BANGmordent_BANG] = ACTIONS(51),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(51),
    [anon_sym_BANGroll_BANG] = ACTIONS(51),
    [anon_sym_BANGturn_BANG] = ACTIONS(51),
    [anon_sym_BANGturnx_BANG] = ACTIONS(51),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(51),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(51),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(51),
    [anon_sym_BANG_GT_BANG] = ACTIONS(51),
    [anon_sym_BANGaccent_BANG] = ACTIONS(51),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(51),
    [anon_sym_BANGfermata_BANG] = ACTIONS(51),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(51),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(51),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(51),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(51),
    [anon_sym_BANGplus_BANG] = ACTIONS(51),
    [anon_sym_BANGsnap_BANG] = ACTIONS(51),
    [anon_sym_BANGslide_BANG] = ACTIONS(51),
    [anon_sym_BANGwedge_BANG] = ACTIONS(51),
    [anon_sym_BANGupbow_BANG] = ACTIONS(51),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(51),
    [anon_sym_BANGopen_BANG] = ACTIONS(51),
    [anon_sym_BANGthumb_BANG] = ACTIONS(51),
    [anon_sym_BANGbreath_BANG] = ACTIONS(51),
    [anon_sym_BANGpppp_BANG] = ACTIONS(51),
    [anon_sym_BANGppp_BANG] = ACTIONS(51),
    [anon_sym_BANGpp_BANG] = ACTIONS(51),
    [anon_sym_BANGp_BANG] = ACTIONS(51),
    [anon_sym_BANGmp_BANG] = ACTIONS(51),
    [anon_sym_BANGmf_BANG] = ACTIONS(51),
    [anon_sym_BANGf_BANG] = ACTIONS(51),
    [anon_sym_BANGff_BANG] = ACTIONS(51),
    [anon_sym_BANGfff_BANG] = ACTIONS(51),
    [anon_sym_BANGffff_BANG] = ACTIONS(51),
    [anon_sym_BANGsfz_BANG] = ACTIONS(51),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGsegno_BANG] = ACTIONS(51),
    [anon_sym_BANGcoda_BANG] = ACTIONS(51),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(51),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(51),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(51),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(51),
    [anon_sym_BANGfine_BANG] = ACTIONS(51),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(51),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(51),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(51),
    [sym_parts_line] = ACTIONS(53),
    [sym_instruction] = ACTIONS(53),
    [sym_key] = ACTIONS(53),
    [sym_macros] = ACTIONS(53),
    [sym_meter] = ACTIONS(53),
    [sym_notes] = ACTIONS(53),
    [anon_sym_X_COLON] = ACTIONS(130),
    [sym_remark] = ACTIONS(53),
    [sym_rhythm_line] = ACTIONS(53),
    [anon_sym_s_COLON] = ACTIONS(55),
    [sym_tempo] = ACTIONS(53),
    [sym_tune_title] = ACTIONS(53),
    [sym_unit_note_length] = ACTIONS(53),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(53),
    [anon_sym_w_COLON] = ACTIONS(57),
    [sym_words_postbody] = ACTIONS(130),
  },
  [5] = {
    [sym_abc_version] = STATE(304),
    [sym_symbol_line] = STATE(304),
    [sym_user_defined] = STATE(304),
    [sym_tune_header_info_line] = STATE(308),
    [aux_sym_tune_header_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym__NL] = ACTIONS(132),
    [anon_sym_BSLASH] = ACTIONS(132),
    [sym_COMMENT] = ACTIONS(134),
    [sym_slur_open] = ACTIONS(137),
    [sym_slur_close] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym_alteration] = ACTIONS(132),
    [sym_note_letter] = ACTIONS(137),
    [sym_rest] = ACTIONS(132),
    [anon_sym_Z] = ACTIONS(137),
    [anon_sym_X] = ACTIONS(137),
    [aux_sym_grace_note_token1] = ACTIONS(132),
    [aux_sym_chord_symbol_token1] = ACTIONS(137),
    [sym_annotation] = ACTIONS(132),
    [sym_tuplet_marker] = ACTIONS(132),
    [sym_decoration_shorthand] = ACTIONS(137),
    [sym_bar_line] = ACTIONS(137),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(132),
    [sym_thin_double_bar_line] = ACTIONS(132),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(132),
    [sym_start_of_repeated_section] = ACTIONS(132),
    [sym_end_of_repeated_section] = ACTIONS(132),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(132),
    [anon_sym_BANGtrill_BANG] = ACTIONS(132),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(132),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(132),
    [anon_sym_BANGmordent_BANG] = ACTIONS(132),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(132),
    [anon_sym_BANGroll_BANG] = ACTIONS(132),
    [anon_sym_BANGturn_BANG] = ACTIONS(132),
    [anon_sym_BANGturnx_BANG] = ACTIONS(132),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(132),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(132),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(132),
    [anon_sym_BANG_GT_BANG] = ACTIONS(132),
    [anon_sym_BANGaccent_BANG] = ACTIONS(132),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(132),
    [anon_sym_BANGfermata_BANG] = ACTIONS(132),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(132),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(132),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(132),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(132),
    [anon_sym_BANGplus_BANG] = ACTIONS(132),
    [anon_sym_BANGsnap_BANG] = ACTIONS(132),
    [anon_sym_BANGslide_BANG] = ACTIONS(132),
    [anon_sym_BANGwedge_BANG] = ACTIONS(132),
    [anon_sym_BANGupbow_BANG] = ACTIONS(132),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(132),
    [anon_sym_BANGopen_BANG] = ACTIONS(132),
    [anon_sym_BANGthumb_BANG] = ACTIONS(132),
    [anon_sym_BANGbreath_BANG] = ACTIONS(132),
    [anon_sym_BANGpppp_BANG] = ACTIONS(132),
    [anon_sym_BANGppp_BANG] = ACTIONS(132),
    [anon_sym_BANGpp_BANG] = ACTIONS(132),
    [anon_sym_BANGp_BANG] = ACTIONS(132),
    [anon_sym_BANGmp_BANG] = ACTIONS(132),
    [anon_sym_BANGmf_BANG] = ACTIONS(132),
    [anon_sym_BANGf_BANG] = ACTIONS(132),
    [anon_sym_BANGff_BANG] = ACTIONS(132),
    [anon_sym_BANGfff_BANG] = ACTIONS(132),
    [anon_sym_BANGffff_BANG] = ACTIONS(132),
    [anon_sym_BANGsfz_BANG] = ACTIONS(132),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGsegno_BANG] = ACTIONS(132),
    [anon_sym_BANGcoda_BANG] = ACTIONS(132),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(132),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(132),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(132),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(132),
    [anon_sym_BANGfine_BANG] = ACTIONS(132),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(132),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(132),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(132),
    [sym_parts_line] = ACTIONS(139),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(142),
    [sym_area] = ACTIONS(139),
    [sym_book] = ACTIONS(139),
    [sym_composer] = ACTIONS(139),
    [sym_discography] = ACTIONS(139),
    [sym_file] = ACTIONS(139),
    [sym_group] = ACTIONS(139),
    [sym_history] = ACTIONS(139),
    [sym_instruction] = ACTIONS(139),
    [sym_key] = ACTIONS(139),
    [sym_macros] = ACTIONS(139),
    [sym_meter] = ACTIONS(139),
    [sym_notes] = ACTIONS(139),
    [sym_origin] = ACTIONS(139),
    [anon_sym_X_COLON] = ACTIONS(132),
    [sym_remark] = ACTIONS(139),
    [sym_rhythm_line] = ACTIONS(139),
    [sym_source] = ACTIONS(139),
    [anon_sym_s_COLON] = ACTIONS(145),
    [sym_tempo] = ACTIONS(139),
    [sym_transcription] = ACTIONS(139),
    [sym_tune_title] = ACTIONS(139),
    [sym_unit_note_length] = ACTIONS(139),
    [anon_sym_U_COLON] = ACTIONS(148),
    [sym_voice] = ACTIONS(139),
    [sym_words_postbody] = ACTIONS(139),
  },
  [6] = {
    [sym_abc_version] = STATE(304),
    [sym_symbol_line] = STATE(304),
    [sym_user_defined] = STATE(304),
    [sym_tune_header_info_line] = STATE(308),
    [aux_sym_tune_header_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(151),
    [sym__NL] = ACTIONS(151),
    [anon_sym_BSLASH] = ACTIONS(151),
    [sym_COMMENT] = ACTIONS(153),
    [sym_slur_open] = ACTIONS(155),
    [sym_slur_close] = ACTIONS(151),
    [anon_sym_LBRACK] = ACTIONS(155),
    [sym_alteration] = ACTIONS(151),
    [sym_note_letter] = ACTIONS(155),
    [sym_rest] = ACTIONS(151),
    [anon_sym_Z] = ACTIONS(155),
    [anon_sym_X] = ACTIONS(155),
    [aux_sym_grace_note_token1] = ACTIONS(151),
    [aux_sym_chord_symbol_token1] = ACTIONS(155),
    [sym_annotation] = ACTIONS(151),
    [sym_tuplet_marker] = ACTIONS(151),
    [sym_decoration_shorthand] = ACTIONS(155),
    [sym_bar_line] = ACTIONS(155),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(151),
    [sym_thin_double_bar_line] = ACTIONS(151),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(151),
    [sym_start_of_repeated_section] = ACTIONS(151),
    [sym_end_of_repeated_section] = ACTIONS(151),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(151),
    [anon_sym_BANGtrill_BANG] = ACTIONS(151),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(151),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(151),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(151),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(151),
    [anon_sym_BANGmordent_BANG] = ACTIONS(151),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(151),
    [anon_sym_BANGroll_BANG] = ACTIONS(151),
    [anon_sym_BANGturn_BANG] = ACTIONS(151),
    [anon_sym_BANGturnx_BANG] = ACTIONS(151),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(151),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(151),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(151),
    [anon_sym_BANG_GT_BANG] = ACTIONS(151),
    [anon_sym_BANGaccent_BANG] = ACTIONS(151),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(151),
    [anon_sym_BANGfermata_BANG] = ACTIONS(151),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(151),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(151),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(151),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(151),
    [anon_sym_BANGplus_BANG] = ACTIONS(151),
    [anon_sym_BANGsnap_BANG] = ACTIONS(151),
    [anon_sym_BANGslide_BANG] = ACTIONS(151),
    [anon_sym_BANGwedge_BANG] = ACTIONS(151),
    [anon_sym_BANGupbow_BANG] = ACTIONS(151),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(151),
    [anon_sym_BANGopen_BANG] = ACTIONS(151),
    [anon_sym_BANGthumb_BANG] = ACTIONS(151),
    [anon_sym_BANGbreath_BANG] = ACTIONS(151),
    [anon_sym_BANGpppp_BANG] = ACTIONS(151),
    [anon_sym_BANGppp_BANG] = ACTIONS(151),
    [anon_sym_BANGpp_BANG] = ACTIONS(151),
    [anon_sym_BANGp_BANG] = ACTIONS(151),
    [anon_sym_BANGmp_BANG] = ACTIONS(151),
    [anon_sym_BANGmf_BANG] = ACTIONS(151),
    [anon_sym_BANGf_BANG] = ACTIONS(151),
    [anon_sym_BANGff_BANG] = ACTIONS(151),
    [anon_sym_BANGfff_BANG] = ACTIONS(151),
    [anon_sym_BANGffff_BANG] = ACTIONS(151),
    [anon_sym_BANGsfz_BANG] = ACTIONS(151),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(151),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(151),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(151),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(151),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(151),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(151),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(151),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(151),
    [anon_sym_BANGsegno_BANG] = ACTIONS(151),
    [anon_sym_BANGcoda_BANG] = ACTIONS(151),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(151),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(151),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(151),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(151),
    [anon_sym_BANGfine_BANG] = ACTIONS(151),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(151),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(151),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(151),
    [sym_parts_line] = ACTIONS(157),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(7),
    [sym_area] = ACTIONS(157),
    [sym_book] = ACTIONS(157),
    [sym_composer] = ACTIONS(157),
    [sym_discography] = ACTIONS(157),
    [sym_file] = ACTIONS(157),
    [sym_group] = ACTIONS(157),
    [sym_history] = ACTIONS(157),
    [sym_instruction] = ACTIONS(157),
    [sym_key] = ACTIONS(157),
    [sym_macros] = ACTIONS(157),
    [sym_meter] = ACTIONS(157),
    [sym_notes] = ACTIONS(157),
    [sym_origin] = ACTIONS(157),
    [anon_sym_X_COLON] = ACTIONS(151),
    [sym_remark] = ACTIONS(157),
    [sym_rhythm_line] = ACTIONS(157),
    [sym_source] = ACTIONS(157),
    [anon_sym_s_COLON] = ACTIONS(55),
    [sym_tempo] = ACTIONS(157),
    [sym_transcription] = ACTIONS(157),
    [sym_tune_title] = ACTIONS(157),
    [sym_unit_note_length] = ACTIONS(157),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(157),
    [sym_words_postbody] = ACTIONS(151),
  },
  [7] = {
    [sym_abc_version] = STATE(304),
    [sym_symbol_line] = STATE(304),
    [sym_user_defined] = STATE(304),
    [sym_tune_header_info_line] = STATE(308),
    [aux_sym_tune_header_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym__NL] = ACTIONS(159),
    [anon_sym_BSLASH] = ACTIONS(159),
    [sym_COMMENT] = ACTIONS(153),
    [sym_slur_open] = ACTIONS(161),
    [sym_slur_close] = ACTIONS(159),
    [anon_sym_LBRACK] = ACTIONS(161),
    [sym_alteration] = ACTIONS(159),
    [sym_note_letter] = ACTIONS(161),
    [sym_rest] = ACTIONS(159),
    [anon_sym_Z] = ACTIONS(161),
    [anon_sym_X] = ACTIONS(161),
    [aux_sym_grace_note_token1] = ACTIONS(159),
    [aux_sym_chord_symbol_token1] = ACTIONS(161),
    [sym_annotation] = ACTIONS(159),
    [sym_tuplet_marker] = ACTIONS(159),
    [sym_decoration_shorthand] = ACTIONS(161),
    [sym_bar_line] = ACTIONS(161),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(159),
    [sym_thin_double_bar_line] = ACTIONS(159),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(159),
    [sym_start_of_repeated_section] = ACTIONS(159),
    [sym_end_of_repeated_section] = ACTIONS(159),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(159),
    [anon_sym_BANGtrill_BANG] = ACTIONS(159),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(159),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(159),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(159),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(159),
    [anon_sym_BANGmordent_BANG] = ACTIONS(159),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(159),
    [anon_sym_BANGroll_BANG] = ACTIONS(159),
    [anon_sym_BANGturn_BANG] = ACTIONS(159),
    [anon_sym_BANGturnx_BANG] = ACTIONS(159),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(159),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(159),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(159),
    [anon_sym_BANG_GT_BANG] = ACTIONS(159),
    [anon_sym_BANGaccent_BANG] = ACTIONS(159),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(159),
    [anon_sym_BANGfermata_BANG] = ACTIONS(159),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(159),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(159),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(159),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(159),
    [anon_sym_BANGplus_BANG] = ACTIONS(159),
    [anon_sym_BANGsnap_BANG] = ACTIONS(159),
    [anon_sym_BANGslide_BANG] = ACTIONS(159),
    [anon_sym_BANGwedge_BANG] = ACTIONS(159),
    [anon_sym_BANGupbow_BANG] = ACTIONS(159),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(159),
    [anon_sym_BANGopen_BANG] = ACTIONS(159),
    [anon_sym_BANGthumb_BANG] = ACTIONS(159),
    [anon_sym_BANGbreath_BANG] = ACTIONS(159),
    [anon_sym_BANGpppp_BANG] = ACTIONS(159),
    [anon_sym_BANGppp_BANG] = ACTIONS(159),
    [anon_sym_BANGpp_BANG] = ACTIONS(159),
    [anon_sym_BANGp_BANG] = ACTIONS(159),
    [anon_sym_BANGmp_BANG] = ACTIONS(159),
    [anon_sym_BANGmf_BANG] = ACTIONS(159),
    [anon_sym_BANGf_BANG] = ACTIONS(159),
    [anon_sym_BANGff_BANG] = ACTIONS(159),
    [anon_sym_BANGfff_BANG] = ACTIONS(159),
    [anon_sym_BANGffff_BANG] = ACTIONS(159),
    [anon_sym_BANGsfz_BANG] = ACTIONS(159),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(159),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(159),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(159),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(159),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(159),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(159),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(159),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(159),
    [anon_sym_BANGsegno_BANG] = ACTIONS(159),
    [anon_sym_BANGcoda_BANG] = ACTIONS(159),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(159),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(159),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(159),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(159),
    [anon_sym_BANGfine_BANG] = ACTIONS(159),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(159),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(159),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(159),
    [sym_parts_line] = ACTIONS(157),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(7),
    [sym_area] = ACTIONS(157),
    [sym_book] = ACTIONS(157),
    [sym_composer] = ACTIONS(157),
    [sym_discography] = ACTIONS(157),
    [sym_file] = ACTIONS(157),
    [sym_group] = ACTIONS(157),
    [sym_history] = ACTIONS(157),
    [sym_instruction] = ACTIONS(157),
    [sym_key] = ACTIONS(157),
    [sym_macros] = ACTIONS(157),
    [sym_meter] = ACTIONS(157),
    [sym_notes] = ACTIONS(157),
    [sym_origin] = ACTIONS(157),
    [anon_sym_X_COLON] = ACTIONS(159),
    [sym_remark] = ACTIONS(157),
    [sym_rhythm_line] = ACTIONS(157),
    [sym_source] = ACTIONS(157),
    [anon_sym_s_COLON] = ACTIONS(55),
    [sym_tempo] = ACTIONS(157),
    [sym_transcription] = ACTIONS(157),
    [sym_tune_title] = ACTIONS(157),
    [sym_unit_note_length] = ACTIONS(157),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(157),
    [sym_words_postbody] = ACTIONS(159),
  },
  [8] = {
    [sym__nte_or_chrd] = STATE(9),
    [sym_note_construct] = STATE(9),
    [sym__chord_cstrct] = STATE(9),
    [sym_note] = STATE(32),
    [sym__pitch] = STATE(21),
    [sym_grace_note] = STATE(123),
    [sym_chord_symbol] = STATE(181),
    [sym_decoration] = STATE(199),
    [aux_sym_beam_repeat1] = STATE(9),
    [aux_sym_note_construct_repeat1] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym__NL] = ACTIONS(165),
    [anon_sym_BSLASH] = ACTIONS(163),
    [sym_BEAM_SEPARATOR] = ACTIONS(167),
    [sym_COMMENT] = ACTIONS(165),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(163),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(165),
    [sym_slur_open] = ACTIONS(165),
    [sym_slur_close] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym_alteration] = ACTIONS(172),
    [sym_note_letter] = ACTIONS(175),
    [sym_rest] = ACTIONS(178),
    [anon_sym_Z] = ACTIONS(163),
    [anon_sym_X] = ACTIONS(165),
    [aux_sym_grace_note_token1] = ACTIONS(181),
    [aux_sym_chord_symbol_token1] = ACTIONS(184),
    [sym_annotation] = ACTIONS(163),
    [sym_tuplet_marker] = ACTIONS(187),
    [sym_decoration_shorthand] = ACTIONS(190),
    [sym_bar_line] = ACTIONS(165),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(163),
    [sym_thin_double_bar_line] = ACTIONS(163),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(163),
    [sym_start_of_repeated_section] = ACTIONS(163),
    [sym_end_of_repeated_section] = ACTIONS(163),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(163),
    [anon_sym_BANGtrill_BANG] = ACTIONS(163),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(163),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(163),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(163),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(163),
    [anon_sym_BANGmordent_BANG] = ACTIONS(163),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(163),
    [anon_sym_BANGroll_BANG] = ACTIONS(163),
    [anon_sym_BANGturn_BANG] = ACTIONS(163),
    [anon_sym_BANGturnx_BANG] = ACTIONS(163),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(163),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(163),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(163),
    [anon_sym_BANG_GT_BANG] = ACTIONS(163),
    [anon_sym_BANGaccent_BANG] = ACTIONS(163),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(163),
    [anon_sym_BANGfermata_BANG] = ACTIONS(163),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(163),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(163),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(163),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(163),
    [anon_sym_BANGplus_BANG] = ACTIONS(163),
    [anon_sym_BANGsnap_BANG] = ACTIONS(163),
    [anon_sym_BANGslide_BANG] = ACTIONS(163),
    [anon_sym_BANGwedge_BANG] = ACTIONS(163),
    [anon_sym_BANGupbow_BANG] = ACTIONS(163),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(163),
    [anon_sym_BANGopen_BANG] = ACTIONS(163),
    [anon_sym_BANGthumb_BANG] = ACTIONS(163),
    [anon_sym_BANGbreath_BANG] = ACTIONS(163),
    [anon_sym_BANGpppp_BANG] = ACTIONS(163),
    [anon_sym_BANGppp_BANG] = ACTIONS(163),
    [anon_sym_BANGpp_BANG] = ACTIONS(163),
    [anon_sym_BANGp_BANG] = ACTIONS(163),
    [anon_sym_BANGmp_BANG] = ACTIONS(163),
    [anon_sym_BANGmf_BANG] = ACTIONS(163),
    [anon_sym_BANGf_BANG] = ACTIONS(163),
    [anon_sym_BANGff_BANG] = ACTIONS(163),
    [anon_sym_BANGfff_BANG] = ACTIONS(163),
    [anon_sym_BANGffff_BANG] = ACTIONS(163),
    [anon_sym_BANGsfz_BANG] = ACTIONS(163),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(163),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(163),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(163),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(163),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(163),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(163),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(163),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(163),
    [anon_sym_BANGsegno_BANG] = ACTIONS(163),
    [anon_sym_BANGcoda_BANG] = ACTIONS(163),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(163),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(163),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(163),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(163),
    [anon_sym_BANGfine_BANG] = ACTIONS(163),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(163),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(163),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(163),
    [sym_parts_line] = ACTIONS(163),
    [sym_instruction] = ACTIONS(163),
    [sym_key] = ACTIONS(163),
    [sym_macros] = ACTIONS(163),
    [sym_meter] = ACTIONS(163),
    [sym_notes] = ACTIONS(163),
    [anon_sym_X_COLON] = ACTIONS(163),
    [sym_remark] = ACTIONS(163),
    [sym_rhythm_line] = ACTIONS(163),
    [anon_sym_s_COLON] = ACTIONS(163),
    [sym_tempo] = ACTIONS(163),
    [sym_tune_title] = ACTIONS(163),
    [sym_unit_note_length] = ACTIONS(163),
    [anon_sym_U_COLON] = ACTIONS(163),
    [sym_voice] = ACTIONS(163),
    [anon_sym_w_COLON] = ACTIONS(163),
    [sym_words_postbody] = ACTIONS(163),
  },
  [9] = {
    [sym__nte_or_chrd] = STATE(9),
    [sym_note_construct] = STATE(9),
    [sym__chord_cstrct] = STATE(9),
    [sym_note] = STATE(32),
    [sym__pitch] = STATE(21),
    [sym_grace_note] = STATE(123),
    [sym_chord_symbol] = STATE(181),
    [sym_decoration] = STATE(199),
    [aux_sym_beam_repeat1] = STATE(9),
    [aux_sym_note_construct_repeat1] = STATE(123),
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym__NL] = ACTIONS(195),
    [anon_sym_BSLASH] = ACTIONS(193),
    [sym_BEAM_SEPARATOR] = ACTIONS(197),
    [sym_COMMENT] = ACTIONS(195),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(193),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(195),
    [sym_slur_open] = ACTIONS(195),
    [sym_slur_close] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(200),
    [sym_alteration] = ACTIONS(203),
    [sym_note_letter] = ACTIONS(206),
    [sym_rest] = ACTIONS(209),
    [anon_sym_Z] = ACTIONS(193),
    [anon_sym_X] = ACTIONS(195),
    [aux_sym_grace_note_token1] = ACTIONS(212),
    [aux_sym_chord_symbol_token1] = ACTIONS(215),
    [sym_annotation] = ACTIONS(193),
    [sym_tuplet_marker] = ACTIONS(218),
    [sym_decoration_shorthand] = ACTIONS(221),
    [sym_bar_line] = ACTIONS(195),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(193),
    [sym_thin_double_bar_line] = ACTIONS(193),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(193),
    [sym_start_of_repeated_section] = ACTIONS(193),
    [sym_end_of_repeated_section] = ACTIONS(193),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(193),
    [anon_sym_BANGtrill_BANG] = ACTIONS(193),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(193),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(193),
    [anon_sym_BANGmordent_BANG] = ACTIONS(193),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(193),
    [anon_sym_BANGroll_BANG] = ACTIONS(193),
    [anon_sym_BANGturn_BANG] = ACTIONS(193),
    [anon_sym_BANGturnx_BANG] = ACTIONS(193),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(193),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(193),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(193),
    [anon_sym_BANG_GT_BANG] = ACTIONS(193),
    [anon_sym_BANGaccent_BANG] = ACTIONS(193),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(193),
    [anon_sym_BANGfermata_BANG] = ACTIONS(193),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(193),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(193),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(193),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(193),
    [anon_sym_BANGplus_BANG] = ACTIONS(193),
    [anon_sym_BANGsnap_BANG] = ACTIONS(193),
    [anon_sym_BANGslide_BANG] = ACTIONS(193),
    [anon_sym_BANGwedge_BANG] = ACTIONS(193),
    [anon_sym_BANGupbow_BANG] = ACTIONS(193),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(193),
    [anon_sym_BANGopen_BANG] = ACTIONS(193),
    [anon_sym_BANGthumb_BANG] = ACTIONS(193),
    [anon_sym_BANGbreath_BANG] = ACTIONS(193),
    [anon_sym_BANGpppp_BANG] = ACTIONS(193),
    [anon_sym_BANGppp_BANG] = ACTIONS(193),
    [anon_sym_BANGpp_BANG] = ACTIONS(193),
    [anon_sym_BANGp_BANG] = ACTIONS(193),
    [anon_sym_BANGmp_BANG] = ACTIONS(193),
    [anon_sym_BANGmf_BANG] = ACTIONS(193),
    [anon_sym_BANGf_BANG] = ACTIONS(193),
    [anon_sym_BANGff_BANG] = ACTIONS(193),
    [anon_sym_BANGfff_BANG] = ACTIONS(193),
    [anon_sym_BANGffff_BANG] = ACTIONS(193),
    [anon_sym_BANGsfz_BANG] = ACTIONS(193),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGsegno_BANG] = ACTIONS(193),
    [anon_sym_BANGcoda_BANG] = ACTIONS(193),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(193),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(193),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(193),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(193),
    [anon_sym_BANGfine_BANG] = ACTIONS(193),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(193),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(193),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(193),
    [sym_parts_line] = ACTIONS(193),
    [sym_instruction] = ACTIONS(193),
    [sym_key] = ACTIONS(193),
    [sym_macros] = ACTIONS(193),
    [sym_meter] = ACTIONS(193),
    [sym_notes] = ACTIONS(193),
    [anon_sym_X_COLON] = ACTIONS(193),
    [sym_remark] = ACTIONS(193),
    [sym_rhythm_line] = ACTIONS(193),
    [anon_sym_s_COLON] = ACTIONS(193),
    [sym_tempo] = ACTIONS(193),
    [sym_tune_title] = ACTIONS(193),
    [sym_unit_note_length] = ACTIONS(193),
    [anon_sym_U_COLON] = ACTIONS(193),
    [sym_voice] = ACTIONS(193),
    [anon_sym_w_COLON] = ACTIONS(193),
    [sym_words_postbody] = ACTIONS(193),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(132),
    [sym__NL] = ACTIONS(132),
    [anon_sym_BSLASH] = ACTIONS(132),
    [sym_COMMENT] = ACTIONS(137),
    [sym_slur_open] = ACTIONS(137),
    [sym_slur_close] = ACTIONS(132),
    [anon_sym_LBRACK] = ACTIONS(137),
    [sym_alteration] = ACTIONS(132),
    [sym_note_letter] = ACTIONS(137),
    [sym_rest] = ACTIONS(132),
    [anon_sym_Z] = ACTIONS(137),
    [anon_sym_X] = ACTIONS(137),
    [aux_sym_grace_note_token1] = ACTIONS(132),
    [aux_sym_chord_symbol_token1] = ACTIONS(137),
    [sym_annotation] = ACTIONS(132),
    [sym_tuplet_marker] = ACTIONS(132),
    [sym_decoration_shorthand] = ACTIONS(137),
    [sym_bar_line] = ACTIONS(137),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(132),
    [sym_thin_double_bar_line] = ACTIONS(132),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(132),
    [sym_start_of_repeated_section] = ACTIONS(132),
    [sym_end_of_repeated_section] = ACTIONS(132),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(132),
    [anon_sym_BANGtrill_BANG] = ACTIONS(132),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(132),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(132),
    [anon_sym_BANGmordent_BANG] = ACTIONS(132),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(132),
    [anon_sym_BANGroll_BANG] = ACTIONS(132),
    [anon_sym_BANGturn_BANG] = ACTIONS(132),
    [anon_sym_BANGturnx_BANG] = ACTIONS(132),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(132),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(132),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(132),
    [anon_sym_BANG_GT_BANG] = ACTIONS(132),
    [anon_sym_BANGaccent_BANG] = ACTIONS(132),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(132),
    [anon_sym_BANGfermata_BANG] = ACTIONS(132),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(132),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(132),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(132),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(132),
    [anon_sym_BANGplus_BANG] = ACTIONS(132),
    [anon_sym_BANGsnap_BANG] = ACTIONS(132),
    [anon_sym_BANGslide_BANG] = ACTIONS(132),
    [anon_sym_BANGwedge_BANG] = ACTIONS(132),
    [anon_sym_BANGupbow_BANG] = ACTIONS(132),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(132),
    [anon_sym_BANGopen_BANG] = ACTIONS(132),
    [anon_sym_BANGthumb_BANG] = ACTIONS(132),
    [anon_sym_BANGbreath_BANG] = ACTIONS(132),
    [anon_sym_BANGpppp_BANG] = ACTIONS(132),
    [anon_sym_BANGppp_BANG] = ACTIONS(132),
    [anon_sym_BANGpp_BANG] = ACTIONS(132),
    [anon_sym_BANGp_BANG] = ACTIONS(132),
    [anon_sym_BANGmp_BANG] = ACTIONS(132),
    [anon_sym_BANGmf_BANG] = ACTIONS(132),
    [anon_sym_BANGf_BANG] = ACTIONS(132),
    [anon_sym_BANGff_BANG] = ACTIONS(132),
    [anon_sym_BANGfff_BANG] = ACTIONS(132),
    [anon_sym_BANGffff_BANG] = ACTIONS(132),
    [anon_sym_BANGsfz_BANG] = ACTIONS(132),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(132),
    [anon_sym_BANGsegno_BANG] = ACTIONS(132),
    [anon_sym_BANGcoda_BANG] = ACTIONS(132),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(132),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(132),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(132),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(132),
    [anon_sym_BANGfine_BANG] = ACTIONS(132),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(132),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(132),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(132),
    [sym_parts_line] = ACTIONS(132),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(137),
    [sym_area] = ACTIONS(132),
    [sym_book] = ACTIONS(132),
    [sym_composer] = ACTIONS(132),
    [sym_discography] = ACTIONS(132),
    [sym_file] = ACTIONS(132),
    [sym_group] = ACTIONS(132),
    [sym_history] = ACTIONS(132),
    [sym_instruction] = ACTIONS(132),
    [sym_key] = ACTIONS(132),
    [sym_macros] = ACTIONS(132),
    [sym_meter] = ACTIONS(132),
    [sym_notes] = ACTIONS(132),
    [sym_origin] = ACTIONS(132),
    [anon_sym_X_COLON] = ACTIONS(132),
    [sym_remark] = ACTIONS(132),
    [sym_rhythm_line] = ACTIONS(132),
    [sym_source] = ACTIONS(132),
    [anon_sym_s_COLON] = ACTIONS(132),
    [sym_tempo] = ACTIONS(132),
    [sym_transcription] = ACTIONS(132),
    [sym_tune_title] = ACTIONS(132),
    [sym_unit_note_length] = ACTIONS(132),
    [anon_sym_U_COLON] = ACTIONS(132),
    [sym_voice] = ACTIONS(132),
    [sym_words_postbody] = ACTIONS(132),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(224),
    [sym__NL] = ACTIONS(224),
    [anon_sym_BSLASH] = ACTIONS(224),
    [sym_COMMENT] = ACTIONS(226),
    [sym_slur_open] = ACTIONS(226),
    [sym_slur_close] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(226),
    [sym_alteration] = ACTIONS(224),
    [sym_note_letter] = ACTIONS(226),
    [sym_rest] = ACTIONS(224),
    [anon_sym_Z] = ACTIONS(226),
    [anon_sym_X] = ACTIONS(226),
    [aux_sym_grace_note_token1] = ACTIONS(224),
    [aux_sym_chord_symbol_token1] = ACTIONS(226),
    [sym_annotation] = ACTIONS(224),
    [sym_tuplet_marker] = ACTIONS(224),
    [sym_decoration_shorthand] = ACTIONS(226),
    [sym_bar_line] = ACTIONS(226),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(224),
    [sym_thin_double_bar_line] = ACTIONS(224),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(224),
    [sym_start_of_repeated_section] = ACTIONS(224),
    [sym_end_of_repeated_section] = ACTIONS(224),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(224),
    [anon_sym_BANGtrill_BANG] = ACTIONS(224),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(224),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(224),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(224),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(224),
    [anon_sym_BANGmordent_BANG] = ACTIONS(224),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(224),
    [anon_sym_BANGroll_BANG] = ACTIONS(224),
    [anon_sym_BANGturn_BANG] = ACTIONS(224),
    [anon_sym_BANGturnx_BANG] = ACTIONS(224),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(224),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(224),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(224),
    [anon_sym_BANG_GT_BANG] = ACTIONS(224),
    [anon_sym_BANGaccent_BANG] = ACTIONS(224),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(224),
    [anon_sym_BANGfermata_BANG] = ACTIONS(224),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(224),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(224),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(224),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(224),
    [anon_sym_BANGplus_BANG] = ACTIONS(224),
    [anon_sym_BANGsnap_BANG] = ACTIONS(224),
    [anon_sym_BANGslide_BANG] = ACTIONS(224),
    [anon_sym_BANGwedge_BANG] = ACTIONS(224),
    [anon_sym_BANGupbow_BANG] = ACTIONS(224),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(224),
    [anon_sym_BANGopen_BANG] = ACTIONS(224),
    [anon_sym_BANGthumb_BANG] = ACTIONS(224),
    [anon_sym_BANGbreath_BANG] = ACTIONS(224),
    [anon_sym_BANGpppp_BANG] = ACTIONS(224),
    [anon_sym_BANGppp_BANG] = ACTIONS(224),
    [anon_sym_BANGpp_BANG] = ACTIONS(224),
    [anon_sym_BANGp_BANG] = ACTIONS(224),
    [anon_sym_BANGmp_BANG] = ACTIONS(224),
    [anon_sym_BANGmf_BANG] = ACTIONS(224),
    [anon_sym_BANGf_BANG] = ACTIONS(224),
    [anon_sym_BANGff_BANG] = ACTIONS(224),
    [anon_sym_BANGfff_BANG] = ACTIONS(224),
    [anon_sym_BANGffff_BANG] = ACTIONS(224),
    [anon_sym_BANGsfz_BANG] = ACTIONS(224),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(224),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(224),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(224),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(224),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(224),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(224),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(224),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(224),
    [anon_sym_BANGsegno_BANG] = ACTIONS(224),
    [anon_sym_BANGcoda_BANG] = ACTIONS(224),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(224),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(224),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(224),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(224),
    [anon_sym_BANGfine_BANG] = ACTIONS(224),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(224),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(224),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(224),
    [sym_parts_line] = ACTIONS(224),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(226),
    [sym_area] = ACTIONS(224),
    [sym_book] = ACTIONS(224),
    [sym_composer] = ACTIONS(224),
    [sym_discography] = ACTIONS(224),
    [sym_file] = ACTIONS(224),
    [sym_group] = ACTIONS(224),
    [sym_history] = ACTIONS(224),
    [sym_instruction] = ACTIONS(224),
    [sym_key] = ACTIONS(224),
    [sym_macros] = ACTIONS(224),
    [sym_meter] = ACTIONS(224),
    [sym_notes] = ACTIONS(224),
    [sym_origin] = ACTIONS(224),
    [anon_sym_X_COLON] = ACTIONS(224),
    [sym_remark] = ACTIONS(224),
    [sym_rhythm_line] = ACTIONS(224),
    [sym_source] = ACTIONS(224),
    [anon_sym_s_COLON] = ACTIONS(224),
    [sym_tempo] = ACTIONS(224),
    [sym_transcription] = ACTIONS(224),
    [sym_tune_title] = ACTIONS(224),
    [sym_unit_note_length] = ACTIONS(224),
    [anon_sym_U_COLON] = ACTIONS(224),
    [sym_voice] = ACTIONS(224),
    [sym_words_postbody] = ACTIONS(224),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(228),
    [sym__NL] = ACTIONS(228),
    [anon_sym_BSLASH] = ACTIONS(228),
    [sym_COMMENT] = ACTIONS(230),
    [sym_slur_open] = ACTIONS(230),
    [sym_slur_close] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(230),
    [sym_alteration] = ACTIONS(228),
    [sym_note_letter] = ACTIONS(230),
    [sym_rest] = ACTIONS(228),
    [anon_sym_Z] = ACTIONS(230),
    [anon_sym_X] = ACTIONS(230),
    [aux_sym_grace_note_token1] = ACTIONS(228),
    [aux_sym_chord_symbol_token1] = ACTIONS(230),
    [sym_annotation] = ACTIONS(228),
    [sym_tuplet_marker] = ACTIONS(228),
    [sym_decoration_shorthand] = ACTIONS(230),
    [sym_bar_line] = ACTIONS(230),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(228),
    [sym_thin_double_bar_line] = ACTIONS(228),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(228),
    [sym_start_of_repeated_section] = ACTIONS(228),
    [sym_end_of_repeated_section] = ACTIONS(228),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(228),
    [anon_sym_BANGtrill_BANG] = ACTIONS(228),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(228),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(228),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(228),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(228),
    [anon_sym_BANGmordent_BANG] = ACTIONS(228),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(228),
    [anon_sym_BANGroll_BANG] = ACTIONS(228),
    [anon_sym_BANGturn_BANG] = ACTIONS(228),
    [anon_sym_BANGturnx_BANG] = ACTIONS(228),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(228),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(228),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(228),
    [anon_sym_BANG_GT_BANG] = ACTIONS(228),
    [anon_sym_BANGaccent_BANG] = ACTIONS(228),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(228),
    [anon_sym_BANGfermata_BANG] = ACTIONS(228),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(228),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(228),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(228),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(228),
    [anon_sym_BANGplus_BANG] = ACTIONS(228),
    [anon_sym_BANGsnap_BANG] = ACTIONS(228),
    [anon_sym_BANGslide_BANG] = ACTIONS(228),
    [anon_sym_BANGwedge_BANG] = ACTIONS(228),
    [anon_sym_BANGupbow_BANG] = ACTIONS(228),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(228),
    [anon_sym_BANGopen_BANG] = ACTIONS(228),
    [anon_sym_BANGthumb_BANG] = ACTIONS(228),
    [anon_sym_BANGbreath_BANG] = ACTIONS(228),
    [anon_sym_BANGpppp_BANG] = ACTIONS(228),
    [anon_sym_BANGppp_BANG] = ACTIONS(228),
    [anon_sym_BANGpp_BANG] = ACTIONS(228),
    [anon_sym_BANGp_BANG] = ACTIONS(228),
    [anon_sym_BANGmp_BANG] = ACTIONS(228),
    [anon_sym_BANGmf_BANG] = ACTIONS(228),
    [anon_sym_BANGf_BANG] = ACTIONS(228),
    [anon_sym_BANGff_BANG] = ACTIONS(228),
    [anon_sym_BANGfff_BANG] = ACTIONS(228),
    [anon_sym_BANGffff_BANG] = ACTIONS(228),
    [anon_sym_BANGsfz_BANG] = ACTIONS(228),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(228),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(228),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(228),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(228),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(228),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(228),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(228),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(228),
    [anon_sym_BANGsegno_BANG] = ACTIONS(228),
    [anon_sym_BANGcoda_BANG] = ACTIONS(228),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(228),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(228),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(228),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(228),
    [anon_sym_BANGfine_BANG] = ACTIONS(228),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(228),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(228),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(228),
    [sym_parts_line] = ACTIONS(228),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(230),
    [sym_area] = ACTIONS(228),
    [sym_book] = ACTIONS(228),
    [sym_composer] = ACTIONS(228),
    [sym_discography] = ACTIONS(228),
    [sym_file] = ACTIONS(228),
    [sym_group] = ACTIONS(228),
    [sym_history] = ACTIONS(228),
    [sym_instruction] = ACTIONS(228),
    [sym_key] = ACTIONS(228),
    [sym_macros] = ACTIONS(228),
    [sym_meter] = ACTIONS(228),
    [sym_notes] = ACTIONS(228),
    [sym_origin] = ACTIONS(228),
    [anon_sym_X_COLON] = ACTIONS(228),
    [sym_remark] = ACTIONS(228),
    [sym_rhythm_line] = ACTIONS(228),
    [sym_source] = ACTIONS(228),
    [anon_sym_s_COLON] = ACTIONS(228),
    [sym_tempo] = ACTIONS(228),
    [sym_transcription] = ACTIONS(228),
    [sym_tune_title] = ACTIONS(228),
    [sym_unit_note_length] = ACTIONS(228),
    [anon_sym_U_COLON] = ACTIONS(228),
    [sym_voice] = ACTIONS(228),
    [sym_words_postbody] = ACTIONS(228),
  },
  [13] = {
    [aux_sym__pitch_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(232),
    [sym__NL] = ACTIONS(234),
    [anon_sym_BSLASH] = ACTIONS(232),
    [sym_BEAM_SEPARATOR] = ACTIONS(232),
    [sym_COMMENT] = ACTIONS(234),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(232),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(234),
    [sym_slur_open] = ACTIONS(234),
    [sym_slur_close] = ACTIONS(232),
    [aux_sym_note_construct_token1] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(234),
    [sym_alteration] = ACTIONS(232),
    [sym_note_letter] = ACTIONS(232),
    [sym_octave] = ACTIONS(236),
    [sym_rest] = ACTIONS(232),
    [anon_sym_Z] = ACTIONS(232),
    [anon_sym_X] = ACTIONS(234),
    [sym_rhythm] = ACTIONS(232),
    [aux_sym_grace_note_token1] = ACTIONS(232),
    [aux_sym_chord_symbol_token1] = ACTIONS(234),
    [sym_annotation] = ACTIONS(232),
    [sym_tuplet_marker] = ACTIONS(232),
    [sym_decoration_shorthand] = ACTIONS(234),
    [sym_bar_line] = ACTIONS(234),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(232),
    [sym_thin_double_bar_line] = ACTIONS(232),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(232),
    [sym_start_of_repeated_section] = ACTIONS(232),
    [sym_end_of_repeated_section] = ACTIONS(232),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(232),
    [anon_sym_BANGtrill_BANG] = ACTIONS(232),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(232),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(232),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(232),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(232),
    [anon_sym_BANGmordent_BANG] = ACTIONS(232),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(232),
    [anon_sym_BANGroll_BANG] = ACTIONS(232),
    [anon_sym_BANGturn_BANG] = ACTIONS(232),
    [anon_sym_BANGturnx_BANG] = ACTIONS(232),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(232),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(232),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(232),
    [anon_sym_BANG_GT_BANG] = ACTIONS(232),
    [anon_sym_BANGaccent_BANG] = ACTIONS(232),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(232),
    [anon_sym_BANGfermata_BANG] = ACTIONS(232),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(232),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(232),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(232),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(232),
    [anon_sym_BANGplus_BANG] = ACTIONS(232),
    [anon_sym_BANGsnap_BANG] = ACTIONS(232),
    [anon_sym_BANGslide_BANG] = ACTIONS(232),
    [anon_sym_BANGwedge_BANG] = ACTIONS(232),
    [anon_sym_BANGupbow_BANG] = ACTIONS(232),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(232),
    [anon_sym_BANGopen_BANG] = ACTIONS(232),
    [anon_sym_BANGthumb_BANG] = ACTIONS(232),
    [anon_sym_BANGbreath_BANG] = ACTIONS(232),
    [anon_sym_BANGpppp_BANG] = ACTIONS(232),
    [anon_sym_BANGppp_BANG] = ACTIONS(232),
    [anon_sym_BANGpp_BANG] = ACTIONS(232),
    [anon_sym_BANGp_BANG] = ACTIONS(232),
    [anon_sym_BANGmp_BANG] = ACTIONS(232),
    [anon_sym_BANGmf_BANG] = ACTIONS(232),
    [anon_sym_BANGf_BANG] = ACTIONS(232),
    [anon_sym_BANGff_BANG] = ACTIONS(232),
    [anon_sym_BANGfff_BANG] = ACTIONS(232),
    [anon_sym_BANGffff_BANG] = ACTIONS(232),
    [anon_sym_BANGsfz_BANG] = ACTIONS(232),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(232),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(232),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(232),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(232),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(232),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(232),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(232),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(232),
    [anon_sym_BANGsegno_BANG] = ACTIONS(232),
    [anon_sym_BANGcoda_BANG] = ACTIONS(232),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(232),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(232),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(232),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(232),
    [anon_sym_BANGfine_BANG] = ACTIONS(232),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(232),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(232),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(232),
    [sym_parts_line] = ACTIONS(232),
    [sym_instruction] = ACTIONS(232),
    [sym_key] = ACTIONS(232),
    [sym_macros] = ACTIONS(232),
    [sym_meter] = ACTIONS(232),
    [sym_notes] = ACTIONS(232),
    [anon_sym_X_COLON] = ACTIONS(232),
    [sym_remark] = ACTIONS(232),
    [sym_rhythm_line] = ACTIONS(232),
    [anon_sym_s_COLON] = ACTIONS(232),
    [sym_tempo] = ACTIONS(232),
    [sym_tune_title] = ACTIONS(232),
    [sym_unit_note_length] = ACTIONS(232),
    [anon_sym_U_COLON] = ACTIONS(232),
    [sym_voice] = ACTIONS(232),
    [anon_sym_w_COLON] = ACTIONS(232),
    [sym_words_postbody] = ACTIONS(232),
  },
  [14] = {
    [sym__MUSIC_CODE] = STATE(4),
    [sym_tune_body] = STATE(190),
    [sym__music_content] = STATE(58),
    [sym__nte_or_chrd] = STATE(115),
    [sym_beam] = STATE(58),
    [sym_note_construct] = STATE(115),
    [sym__chord_cstrct] = STATE(115),
    [sym_note] = STATE(158),
    [sym__pitch] = STATE(128),
    [sym_multimeasure_rest] = STATE(58),
    [sym_grace_note] = STATE(122),
    [sym_chord_symbol] = STATE(179),
    [sym_decoration] = STATE(210),
    [sym_nth_ending_barline] = STATE(51),
    [sym_generic_bar_line] = STATE(58),
    [sym_first_repeat_bar] = STATE(51),
    [sym_second_repeat_bar] = STATE(51),
    [sym_lyric_line] = STATE(205),
    [sym_lyric_section] = STATE(230),
    [sym_symbol] = STATE(58),
    [sym_body_inline_info] = STATE(58),
    [aux_sym_note_construct_repeat1] = STATE(122),
    [aux_sym_lyric_section_repeat1] = STATE(205),
    [ts_builtin_sym_end] = ACTIONS(238),
    [sym__NL] = ACTIONS(238),
    [anon_sym_BSLASH] = ACTIONS(17),
    [sym_slur_open] = ACTIONS(21),
    [sym_slur_close] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(23),
    [sym_alteration] = ACTIONS(25),
    [sym_note_letter] = ACTIONS(27),
    [sym_rest] = ACTIONS(29),
    [anon_sym_Z] = ACTIONS(31),
    [anon_sym_X] = ACTIONS(33),
    [aux_sym_grace_note_token1] = ACTIONS(35),
    [aux_sym_chord_symbol_token1] = ACTIONS(37),
    [sym_annotation] = ACTIONS(17),
    [sym_tuplet_marker] = ACTIONS(39),
    [sym_decoration_shorthand] = ACTIONS(240),
    [sym_bar_line] = ACTIONS(43),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(45),
    [sym_thin_double_bar_line] = ACTIONS(45),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(45),
    [sym_start_of_repeated_section] = ACTIONS(47),
    [sym_end_of_repeated_section] = ACTIONS(49),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(47),
    [anon_sym_BANGtrill_BANG] = ACTIONS(51),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(51),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(51),
    [anon_sym_BANGmordent_BANG] = ACTIONS(51),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(51),
    [anon_sym_BANGroll_BANG] = ACTIONS(51),
    [anon_sym_BANGturn_BANG] = ACTIONS(51),
    [anon_sym_BANGturnx_BANG] = ACTIONS(51),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(51),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(51),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(51),
    [anon_sym_BANG_GT_BANG] = ACTIONS(51),
    [anon_sym_BANGaccent_BANG] = ACTIONS(51),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(51),
    [anon_sym_BANGfermata_BANG] = ACTIONS(51),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(51),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(51),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(51),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(51),
    [anon_sym_BANGplus_BANG] = ACTIONS(51),
    [anon_sym_BANGsnap_BANG] = ACTIONS(51),
    [anon_sym_BANGslide_BANG] = ACTIONS(51),
    [anon_sym_BANGwedge_BANG] = ACTIONS(51),
    [anon_sym_BANGupbow_BANG] = ACTIONS(51),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(51),
    [anon_sym_BANGopen_BANG] = ACTIONS(51),
    [anon_sym_BANGthumb_BANG] = ACTIONS(51),
    [anon_sym_BANGbreath_BANG] = ACTIONS(51),
    [anon_sym_BANGpppp_BANG] = ACTIONS(51),
    [anon_sym_BANGppp_BANG] = ACTIONS(51),
    [anon_sym_BANGpp_BANG] = ACTIONS(51),
    [anon_sym_BANGp_BANG] = ACTIONS(51),
    [anon_sym_BANGmp_BANG] = ACTIONS(51),
    [anon_sym_BANGmf_BANG] = ACTIONS(51),
    [anon_sym_BANGf_BANG] = ACTIONS(51),
    [anon_sym_BANGff_BANG] = ACTIONS(51),
    [anon_sym_BANGfff_BANG] = ACTIONS(51),
    [anon_sym_BANGffff_BANG] = ACTIONS(51),
    [anon_sym_BANGsfz_BANG] = ACTIONS(51),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(51),
    [anon_sym_BANGsegno_BANG] = ACTIONS(51),
    [anon_sym_BANGcoda_BANG] = ACTIONS(51),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(51),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(51),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(51),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(51),
    [anon_sym_BANGfine_BANG] = ACTIONS(51),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(51),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(51),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(51),
    [anon_sym_X_COLON] = ACTIONS(238),
    [sym_words_postbody] = ACTIONS(242),
  },
  [15] = {
    [aux_sym__pitch_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym__NL] = ACTIONS(246),
    [anon_sym_BSLASH] = ACTIONS(244),
    [sym_BEAM_SEPARATOR] = ACTIONS(244),
    [sym_COMMENT] = ACTIONS(246),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(244),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(246),
    [sym_slur_open] = ACTIONS(246),
    [sym_slur_close] = ACTIONS(244),
    [aux_sym_note_construct_token1] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(246),
    [sym_alteration] = ACTIONS(244),
    [sym_note_letter] = ACTIONS(244),
    [sym_octave] = ACTIONS(248),
    [sym_rest] = ACTIONS(244),
    [anon_sym_Z] = ACTIONS(244),
    [anon_sym_X] = ACTIONS(246),
    [sym_rhythm] = ACTIONS(244),
    [aux_sym_grace_note_token1] = ACTIONS(244),
    [aux_sym_chord_symbol_token1] = ACTIONS(246),
    [sym_annotation] = ACTIONS(244),
    [sym_tuplet_marker] = ACTIONS(244),
    [sym_decoration_shorthand] = ACTIONS(246),
    [sym_bar_line] = ACTIONS(246),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(244),
    [sym_thin_double_bar_line] = ACTIONS(244),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(244),
    [sym_start_of_repeated_section] = ACTIONS(244),
    [sym_end_of_repeated_section] = ACTIONS(244),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(244),
    [anon_sym_BANGtrill_BANG] = ACTIONS(244),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(244),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(244),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(244),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(244),
    [anon_sym_BANGmordent_BANG] = ACTIONS(244),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(244),
    [anon_sym_BANGroll_BANG] = ACTIONS(244),
    [anon_sym_BANGturn_BANG] = ACTIONS(244),
    [anon_sym_BANGturnx_BANG] = ACTIONS(244),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(244),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(244),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(244),
    [anon_sym_BANG_GT_BANG] = ACTIONS(244),
    [anon_sym_BANGaccent_BANG] = ACTIONS(244),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(244),
    [anon_sym_BANGfermata_BANG] = ACTIONS(244),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(244),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(244),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(244),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(244),
    [anon_sym_BANGplus_BANG] = ACTIONS(244),
    [anon_sym_BANGsnap_BANG] = ACTIONS(244),
    [anon_sym_BANGslide_BANG] = ACTIONS(244),
    [anon_sym_BANGwedge_BANG] = ACTIONS(244),
    [anon_sym_BANGupbow_BANG] = ACTIONS(244),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(244),
    [anon_sym_BANGopen_BANG] = ACTIONS(244),
    [anon_sym_BANGthumb_BANG] = ACTIONS(244),
    [anon_sym_BANGbreath_BANG] = ACTIONS(244),
    [anon_sym_BANGpppp_BANG] = ACTIONS(244),
    [anon_sym_BANGppp_BANG] = ACTIONS(244),
    [anon_sym_BANGpp_BANG] = ACTIONS(244),
    [anon_sym_BANGp_BANG] = ACTIONS(244),
    [anon_sym_BANGmp_BANG] = ACTIONS(244),
    [anon_sym_BANGmf_BANG] = ACTIONS(244),
    [anon_sym_BANGf_BANG] = ACTIONS(244),
    [anon_sym_BANGff_BANG] = ACTIONS(244),
    [anon_sym_BANGfff_BANG] = ACTIONS(244),
    [anon_sym_BANGffff_BANG] = ACTIONS(244),
    [anon_sym_BANGsfz_BANG] = ACTIONS(244),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(244),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(244),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(244),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(244),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(244),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(244),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(244),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(244),
    [anon_sym_BANGsegno_BANG] = ACTIONS(244),
    [anon_sym_BANGcoda_BANG] = ACTIONS(244),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(244),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(244),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(244),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(244),
    [anon_sym_BANGfine_BANG] = ACTIONS(244),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(244),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(244),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(244),
    [sym_parts_line] = ACTIONS(244),
    [sym_instruction] = ACTIONS(244),
    [sym_key] = ACTIONS(244),
    [sym_macros] = ACTIONS(244),
    [sym_meter] = ACTIONS(244),
    [sym_notes] = ACTIONS(244),
    [anon_sym_X_COLON] = ACTIONS(244),
    [sym_remark] = ACTIONS(244),
    [sym_rhythm_line] = ACTIONS(244),
    [anon_sym_s_COLON] = ACTIONS(244),
    [sym_tempo] = ACTIONS(244),
    [sym_tune_title] = ACTIONS(244),
    [sym_unit_note_length] = ACTIONS(244),
    [anon_sym_U_COLON] = ACTIONS(244),
    [sym_voice] = ACTIONS(244),
    [anon_sym_w_COLON] = ACTIONS(244),
    [sym_words_postbody] = ACTIONS(244),
  },
  [16] = {
    [aux_sym__pitch_repeat1] = STATE(13),
    [ts_builtin_sym_end] = ACTIONS(250),
    [sym__NL] = ACTIONS(252),
    [anon_sym_BSLASH] = ACTIONS(250),
    [sym_BEAM_SEPARATOR] = ACTIONS(250),
    [sym_COMMENT] = ACTIONS(252),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(250),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(252),
    [sym_slur_open] = ACTIONS(252),
    [sym_slur_close] = ACTIONS(250),
    [aux_sym_note_construct_token1] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(252),
    [sym_alteration] = ACTIONS(250),
    [sym_note_letter] = ACTIONS(250),
    [sym_octave] = ACTIONS(254),
    [sym_rest] = ACTIONS(250),
    [anon_sym_Z] = ACTIONS(250),
    [anon_sym_X] = ACTIONS(252),
    [sym_rhythm] = ACTIONS(250),
    [aux_sym_grace_note_token1] = ACTIONS(250),
    [aux_sym_chord_symbol_token1] = ACTIONS(252),
    [sym_annotation] = ACTIONS(250),
    [sym_tuplet_marker] = ACTIONS(250),
    [sym_decoration_shorthand] = ACTIONS(252),
    [sym_bar_line] = ACTIONS(252),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(250),
    [sym_thin_double_bar_line] = ACTIONS(250),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(250),
    [sym_start_of_repeated_section] = ACTIONS(250),
    [sym_end_of_repeated_section] = ACTIONS(250),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(250),
    [anon_sym_BANGtrill_BANG] = ACTIONS(250),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(250),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(250),
    [anon_sym_BANGmordent_BANG] = ACTIONS(250),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(250),
    [anon_sym_BANGroll_BANG] = ACTIONS(250),
    [anon_sym_BANGturn_BANG] = ACTIONS(250),
    [anon_sym_BANGturnx_BANG] = ACTIONS(250),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(250),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(250),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(250),
    [anon_sym_BANG_GT_BANG] = ACTIONS(250),
    [anon_sym_BANGaccent_BANG] = ACTIONS(250),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(250),
    [anon_sym_BANGfermata_BANG] = ACTIONS(250),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(250),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(250),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(250),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(250),
    [anon_sym_BANGplus_BANG] = ACTIONS(250),
    [anon_sym_BANGsnap_BANG] = ACTIONS(250),
    [anon_sym_BANGslide_BANG] = ACTIONS(250),
    [anon_sym_BANGwedge_BANG] = ACTIONS(250),
    [anon_sym_BANGupbow_BANG] = ACTIONS(250),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(250),
    [anon_sym_BANGopen_BANG] = ACTIONS(250),
    [anon_sym_BANGthumb_BANG] = ACTIONS(250),
    [anon_sym_BANGbreath_BANG] = ACTIONS(250),
    [anon_sym_BANGpppp_BANG] = ACTIONS(250),
    [anon_sym_BANGppp_BANG] = ACTIONS(250),
    [anon_sym_BANGpp_BANG] = ACTIONS(250),
    [anon_sym_BANGp_BANG] = ACTIONS(250),
    [anon_sym_BANGmp_BANG] = ACTIONS(250),
    [anon_sym_BANGmf_BANG] = ACTIONS(250),
    [anon_sym_BANGf_BANG] = ACTIONS(250),
    [anon_sym_BANGff_BANG] = ACTIONS(250),
    [anon_sym_BANGfff_BANG] = ACTIONS(250),
    [anon_sym_BANGffff_BANG] = ACTIONS(250),
    [anon_sym_BANGsfz_BANG] = ACTIONS(250),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGsegno_BANG] = ACTIONS(250),
    [anon_sym_BANGcoda_BANG] = ACTIONS(250),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(250),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(250),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(250),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(250),
    [anon_sym_BANGfine_BANG] = ACTIONS(250),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(250),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(250),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(250),
    [sym_parts_line] = ACTIONS(250),
    [sym_instruction] = ACTIONS(250),
    [sym_key] = ACTIONS(250),
    [sym_macros] = ACTIONS(250),
    [sym_meter] = ACTIONS(250),
    [sym_notes] = ACTIONS(250),
    [anon_sym_X_COLON] = ACTIONS(250),
    [sym_remark] = ACTIONS(250),
    [sym_rhythm_line] = ACTIONS(250),
    [anon_sym_s_COLON] = ACTIONS(250),
    [sym_tempo] = ACTIONS(250),
    [sym_tune_title] = ACTIONS(250),
    [sym_unit_note_length] = ACTIONS(250),
    [anon_sym_U_COLON] = ACTIONS(250),
    [sym_voice] = ACTIONS(250),
    [anon_sym_w_COLON] = ACTIONS(250),
    [sym_words_postbody] = ACTIONS(250),
  },
  [17] = {
    [aux_sym__pitch_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(250),
    [sym__NL] = ACTIONS(252),
    [anon_sym_BSLASH] = ACTIONS(250),
    [sym_BEAM_SEPARATOR] = ACTIONS(250),
    [sym_COMMENT] = ACTIONS(252),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(250),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(252),
    [sym_slur_open] = ACTIONS(252),
    [sym_slur_close] = ACTIONS(250),
    [aux_sym_note_construct_token1] = ACTIONS(250),
    [anon_sym_LBRACK] = ACTIONS(252),
    [sym_alteration] = ACTIONS(250),
    [sym_note_letter] = ACTIONS(250),
    [sym_octave] = ACTIONS(236),
    [sym_rest] = ACTIONS(250),
    [anon_sym_Z] = ACTIONS(250),
    [anon_sym_X] = ACTIONS(252),
    [sym_rhythm] = ACTIONS(250),
    [aux_sym_grace_note_token1] = ACTIONS(250),
    [aux_sym_chord_symbol_token1] = ACTIONS(252),
    [sym_annotation] = ACTIONS(250),
    [sym_tuplet_marker] = ACTIONS(250),
    [sym_decoration_shorthand] = ACTIONS(252),
    [sym_bar_line] = ACTIONS(252),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(250),
    [sym_thin_double_bar_line] = ACTIONS(250),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(250),
    [sym_start_of_repeated_section] = ACTIONS(250),
    [sym_end_of_repeated_section] = ACTIONS(250),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(250),
    [anon_sym_BANGtrill_BANG] = ACTIONS(250),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(250),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(250),
    [anon_sym_BANGmordent_BANG] = ACTIONS(250),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(250),
    [anon_sym_BANGroll_BANG] = ACTIONS(250),
    [anon_sym_BANGturn_BANG] = ACTIONS(250),
    [anon_sym_BANGturnx_BANG] = ACTIONS(250),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(250),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(250),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(250),
    [anon_sym_BANG_GT_BANG] = ACTIONS(250),
    [anon_sym_BANGaccent_BANG] = ACTIONS(250),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(250),
    [anon_sym_BANGfermata_BANG] = ACTIONS(250),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(250),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(250),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(250),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(250),
    [anon_sym_BANGplus_BANG] = ACTIONS(250),
    [anon_sym_BANGsnap_BANG] = ACTIONS(250),
    [anon_sym_BANGslide_BANG] = ACTIONS(250),
    [anon_sym_BANGwedge_BANG] = ACTIONS(250),
    [anon_sym_BANGupbow_BANG] = ACTIONS(250),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(250),
    [anon_sym_BANGopen_BANG] = ACTIONS(250),
    [anon_sym_BANGthumb_BANG] = ACTIONS(250),
    [anon_sym_BANGbreath_BANG] = ACTIONS(250),
    [anon_sym_BANGpppp_BANG] = ACTIONS(250),
    [anon_sym_BANGppp_BANG] = ACTIONS(250),
    [anon_sym_BANGpp_BANG] = ACTIONS(250),
    [anon_sym_BANGp_BANG] = ACTIONS(250),
    [anon_sym_BANGmp_BANG] = ACTIONS(250),
    [anon_sym_BANGmf_BANG] = ACTIONS(250),
    [anon_sym_BANGf_BANG] = ACTIONS(250),
    [anon_sym_BANGff_BANG] = ACTIONS(250),
    [anon_sym_BANGfff_BANG] = ACTIONS(250),
    [anon_sym_BANGffff_BANG] = ACTIONS(250),
    [anon_sym_BANGsfz_BANG] = ACTIONS(250),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(250),
    [anon_sym_BANGsegno_BANG] = ACTIONS(250),
    [anon_sym_BANGcoda_BANG] = ACTIONS(250),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(250),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(250),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(250),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(250),
    [anon_sym_BANGfine_BANG] = ACTIONS(250),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(250),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(250),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(250),
    [sym_parts_line] = ACTIONS(250),
    [sym_instruction] = ACTIONS(250),
    [sym_key] = ACTIONS(250),
    [sym_macros] = ACTIONS(250),
    [sym_meter] = ACTIONS(250),
    [sym_notes] = ACTIONS(250),
    [anon_sym_X_COLON] = ACTIONS(250),
    [sym_remark] = ACTIONS(250),
    [sym_rhythm_line] = ACTIONS(250),
    [anon_sym_s_COLON] = ACTIONS(250),
    [sym_tempo] = ACTIONS(250),
    [sym_tune_title] = ACTIONS(250),
    [sym_unit_note_length] = ACTIONS(250),
    [anon_sym_U_COLON] = ACTIONS(250),
    [sym_voice] = ACTIONS(250),
    [anon_sym_w_COLON] = ACTIONS(250),
    [sym_words_postbody] = ACTIONS(250),
  },
  [18] = {
    [aux_sym__pitch_repeat1] = STATE(18),
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym__NL] = ACTIONS(258),
    [anon_sym_BSLASH] = ACTIONS(256),
    [sym_BEAM_SEPARATOR] = ACTIONS(256),
    [sym_COMMENT] = ACTIONS(258),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(256),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(258),
    [sym_slur_open] = ACTIONS(258),
    [sym_slur_close] = ACTIONS(256),
    [aux_sym_note_construct_token1] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(258),
    [sym_alteration] = ACTIONS(256),
    [sym_note_letter] = ACTIONS(256),
    [sym_octave] = ACTIONS(260),
    [sym_rest] = ACTIONS(256),
    [anon_sym_Z] = ACTIONS(256),
    [anon_sym_X] = ACTIONS(258),
    [sym_rhythm] = ACTIONS(256),
    [aux_sym_grace_note_token1] = ACTIONS(256),
    [aux_sym_chord_symbol_token1] = ACTIONS(258),
    [sym_annotation] = ACTIONS(256),
    [sym_tuplet_marker] = ACTIONS(256),
    [sym_decoration_shorthand] = ACTIONS(258),
    [sym_bar_line] = ACTIONS(258),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(256),
    [sym_thin_double_bar_line] = ACTIONS(256),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(256),
    [sym_start_of_repeated_section] = ACTIONS(256),
    [sym_end_of_repeated_section] = ACTIONS(256),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(256),
    [anon_sym_BANGtrill_BANG] = ACTIONS(256),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(256),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(256),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(256),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(256),
    [anon_sym_BANGmordent_BANG] = ACTIONS(256),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(256),
    [anon_sym_BANGroll_BANG] = ACTIONS(256),
    [anon_sym_BANGturn_BANG] = ACTIONS(256),
    [anon_sym_BANGturnx_BANG] = ACTIONS(256),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(256),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(256),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(256),
    [anon_sym_BANG_GT_BANG] = ACTIONS(256),
    [anon_sym_BANGaccent_BANG] = ACTIONS(256),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(256),
    [anon_sym_BANGfermata_BANG] = ACTIONS(256),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(256),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(256),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(256),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(256),
    [anon_sym_BANGplus_BANG] = ACTIONS(256),
    [anon_sym_BANGsnap_BANG] = ACTIONS(256),
    [anon_sym_BANGslide_BANG] = ACTIONS(256),
    [anon_sym_BANGwedge_BANG] = ACTIONS(256),
    [anon_sym_BANGupbow_BANG] = ACTIONS(256),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(256),
    [anon_sym_BANGopen_BANG] = ACTIONS(256),
    [anon_sym_BANGthumb_BANG] = ACTIONS(256),
    [anon_sym_BANGbreath_BANG] = ACTIONS(256),
    [anon_sym_BANGpppp_BANG] = ACTIONS(256),
    [anon_sym_BANGppp_BANG] = ACTIONS(256),
    [anon_sym_BANGpp_BANG] = ACTIONS(256),
    [anon_sym_BANGp_BANG] = ACTIONS(256),
    [anon_sym_BANGmp_BANG] = ACTIONS(256),
    [anon_sym_BANGmf_BANG] = ACTIONS(256),
    [anon_sym_BANGf_BANG] = ACTIONS(256),
    [anon_sym_BANGff_BANG] = ACTIONS(256),
    [anon_sym_BANGfff_BANG] = ACTIONS(256),
    [anon_sym_BANGffff_BANG] = ACTIONS(256),
    [anon_sym_BANGsfz_BANG] = ACTIONS(256),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(256),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(256),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(256),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(256),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(256),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(256),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(256),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(256),
    [anon_sym_BANGsegno_BANG] = ACTIONS(256),
    [anon_sym_BANGcoda_BANG] = ACTIONS(256),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(256),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(256),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(256),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(256),
    [anon_sym_BANGfine_BANG] = ACTIONS(256),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(256),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(256),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(256),
    [sym_parts_line] = ACTIONS(256),
    [sym_instruction] = ACTIONS(256),
    [sym_key] = ACTIONS(256),
    [sym_macros] = ACTIONS(256),
    [sym_meter] = ACTIONS(256),
    [sym_notes] = ACTIONS(256),
    [anon_sym_X_COLON] = ACTIONS(256),
    [sym_remark] = ACTIONS(256),
    [sym_rhythm_line] = ACTIONS(256),
    [anon_sym_s_COLON] = ACTIONS(256),
    [sym_tempo] = ACTIONS(256),
    [sym_tune_title] = ACTIONS(256),
    [sym_unit_note_length] = ACTIONS(256),
    [anon_sym_U_COLON] = ACTIONS(256),
    [sym_voice] = ACTIONS(256),
    [anon_sym_w_COLON] = ACTIONS(256),
    [sym_words_postbody] = ACTIONS(256),
  },
  [19] = {
    [sym_nth_ending_number] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym__NL] = ACTIONS(265),
    [anon_sym_BSLASH] = ACTIONS(263),
    [sym_COMMENT] = ACTIONS(265),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(263),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(267),
    [sym_slur_open] = ACTIONS(265),
    [sym_slur_close] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(269),
    [sym_alteration] = ACTIONS(263),
    [sym_note_letter] = ACTIONS(263),
    [sym_rest] = ACTIONS(263),
    [anon_sym_Z] = ACTIONS(263),
    [anon_sym_X] = ACTIONS(265),
    [aux_sym_grace_note_token1] = ACTIONS(263),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(263),
    [sym_tuplet_marker] = ACTIONS(263),
    [sym_decoration_shorthand] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(263),
    [sym_thin_double_bar_line] = ACTIONS(263),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(263),
    [sym_start_of_repeated_section] = ACTIONS(263),
    [sym_end_of_repeated_section] = ACTIONS(263),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(263),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(271),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(273),
    [anon_sym_BANGtrill_BANG] = ACTIONS(263),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(263),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(263),
    [anon_sym_BANGmordent_BANG] = ACTIONS(263),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(263),
    [anon_sym_BANGroll_BANG] = ACTIONS(263),
    [anon_sym_BANGturn_BANG] = ACTIONS(263),
    [anon_sym_BANGturnx_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(263),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_BANG] = ACTIONS(263),
    [anon_sym_BANGaccent_BANG] = ACTIONS(263),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(263),
    [anon_sym_BANGfermata_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(263),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(263),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(263),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(263),
    [anon_sym_BANGplus_BANG] = ACTIONS(263),
    [anon_sym_BANGsnap_BANG] = ACTIONS(263),
    [anon_sym_BANGslide_BANG] = ACTIONS(263),
    [anon_sym_BANGwedge_BANG] = ACTIONS(263),
    [anon_sym_BANGupbow_BANG] = ACTIONS(263),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(263),
    [anon_sym_BANGopen_BANG] = ACTIONS(263),
    [anon_sym_BANGthumb_BANG] = ACTIONS(263),
    [anon_sym_BANGbreath_BANG] = ACTIONS(263),
    [anon_sym_BANGpppp_BANG] = ACTIONS(263),
    [anon_sym_BANGppp_BANG] = ACTIONS(263),
    [anon_sym_BANGpp_BANG] = ACTIONS(263),
    [anon_sym_BANGp_BANG] = ACTIONS(263),
    [anon_sym_BANGmp_BANG] = ACTIONS(263),
    [anon_sym_BANGmf_BANG] = ACTIONS(263),
    [anon_sym_BANGf_BANG] = ACTIONS(263),
    [anon_sym_BANGff_BANG] = ACTIONS(263),
    [anon_sym_BANGfff_BANG] = ACTIONS(263),
    [anon_sym_BANGffff_BANG] = ACTIONS(263),
    [anon_sym_BANGsfz_BANG] = ACTIONS(263),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGsegno_BANG] = ACTIONS(263),
    [anon_sym_BANGcoda_BANG] = ACTIONS(263),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(263),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(263),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(263),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(263),
    [anon_sym_BANGfine_BANG] = ACTIONS(263),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(263),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(263),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(263),
    [sym_parts_line] = ACTIONS(263),
    [sym_instruction] = ACTIONS(263),
    [sym_key] = ACTIONS(263),
    [sym_macros] = ACTIONS(263),
    [sym_meter] = ACTIONS(263),
    [sym_notes] = ACTIONS(263),
    [anon_sym_X_COLON] = ACTIONS(263),
    [sym_remark] = ACTIONS(263),
    [sym_rhythm_line] = ACTIONS(263),
    [anon_sym_s_COLON] = ACTIONS(263),
    [sym_tempo] = ACTIONS(263),
    [sym_tune_title] = ACTIONS(263),
    [sym_unit_note_length] = ACTIONS(263),
    [anon_sym_U_COLON] = ACTIONS(263),
    [sym_voice] = ACTIONS(263),
    [anon_sym_w_COLON] = ACTIONS(263),
    [sym_words_postbody] = ACTIONS(263),
  },
  [20] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(24),
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym__NL] = ACTIONS(277),
    [anon_sym_BSLASH] = ACTIONS(275),
    [anon_sym_DASH] = ACTIONS(279),
    [sym_COMMENT] = ACTIONS(277),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(275),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(277),
    [sym_slur_open] = ACTIONS(277),
    [sym_slur_close] = ACTIONS(275),
    [anon_sym_LBRACK] = ACTIONS(277),
    [sym_alteration] = ACTIONS(275),
    [sym_note_letter] = ACTIONS(275),
    [sym_rest] = ACTIONS(275),
    [anon_sym_Z] = ACTIONS(275),
    [anon_sym_X] = ACTIONS(277),
    [aux_sym_grace_note_token1] = ACTIONS(275),
    [aux_sym_chord_symbol_token1] = ACTIONS(277),
    [sym_annotation] = ACTIONS(275),
    [sym_tuplet_marker] = ACTIONS(275),
    [sym_decoration_shorthand] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(279),
    [sym_bar_line] = ACTIONS(277),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(275),
    [sym_thin_double_bar_line] = ACTIONS(275),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(275),
    [sym_start_of_repeated_section] = ACTIONS(275),
    [sym_end_of_repeated_section] = ACTIONS(275),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(275),
    [anon_sym_BANGtrill_BANG] = ACTIONS(275),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(275),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(275),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(275),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(275),
    [anon_sym_BANGmordent_BANG] = ACTIONS(275),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(275),
    [anon_sym_BANGroll_BANG] = ACTIONS(275),
    [anon_sym_BANGturn_BANG] = ACTIONS(275),
    [anon_sym_BANGturnx_BANG] = ACTIONS(275),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(275),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(275),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(275),
    [anon_sym_BANG_GT_BANG] = ACTIONS(275),
    [anon_sym_BANGaccent_BANG] = ACTIONS(275),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(275),
    [anon_sym_BANGfermata_BANG] = ACTIONS(275),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(275),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(275),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(275),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(275),
    [anon_sym_BANGplus_BANG] = ACTIONS(275),
    [anon_sym_BANGsnap_BANG] = ACTIONS(275),
    [anon_sym_BANGslide_BANG] = ACTIONS(275),
    [anon_sym_BANGwedge_BANG] = ACTIONS(275),
    [anon_sym_BANGupbow_BANG] = ACTIONS(275),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(275),
    [anon_sym_BANGopen_BANG] = ACTIONS(275),
    [anon_sym_BANGthumb_BANG] = ACTIONS(275),
    [anon_sym_BANGbreath_BANG] = ACTIONS(275),
    [anon_sym_BANGpppp_BANG] = ACTIONS(275),
    [anon_sym_BANGppp_BANG] = ACTIONS(275),
    [anon_sym_BANGpp_BANG] = ACTIONS(275),
    [anon_sym_BANGp_BANG] = ACTIONS(275),
    [anon_sym_BANGmp_BANG] = ACTIONS(275),
    [anon_sym_BANGmf_BANG] = ACTIONS(275),
    [anon_sym_BANGf_BANG] = ACTIONS(275),
    [anon_sym_BANGff_BANG] = ACTIONS(275),
    [anon_sym_BANGfff_BANG] = ACTIONS(275),
    [anon_sym_BANGffff_BANG] = ACTIONS(275),
    [anon_sym_BANGsfz_BANG] = ACTIONS(275),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(275),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(275),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(275),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(275),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(275),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(275),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(275),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(275),
    [anon_sym_BANGsegno_BANG] = ACTIONS(275),
    [anon_sym_BANGcoda_BANG] = ACTIONS(275),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(275),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(275),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(275),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(275),
    [anon_sym_BANGfine_BANG] = ACTIONS(275),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(275),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(275),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(275),
    [sym_parts_line] = ACTIONS(275),
    [sym_instruction] = ACTIONS(275),
    [sym_key] = ACTIONS(275),
    [sym_macros] = ACTIONS(275),
    [sym_meter] = ACTIONS(275),
    [sym_notes] = ACTIONS(275),
    [anon_sym_X_COLON] = ACTIONS(275),
    [sym_remark] = ACTIONS(275),
    [sym_rhythm_line] = ACTIONS(275),
    [anon_sym_s_COLON] = ACTIONS(275),
    [sym_tempo] = ACTIONS(275),
    [sym_tune_title] = ACTIONS(275),
    [sym_unit_note_length] = ACTIONS(275),
    [anon_sym_U_COLON] = ACTIONS(275),
    [sym_voice] = ACTIONS(275),
    [anon_sym_w_COLON] = ACTIONS(275),
    [sym_words_postbody] = ACTIONS(275),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(281),
    [sym__NL] = ACTIONS(283),
    [anon_sym_BSLASH] = ACTIONS(281),
    [sym_BEAM_SEPARATOR] = ACTIONS(281),
    [sym_COMMENT] = ACTIONS(283),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(281),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(283),
    [sym_slur_open] = ACTIONS(283),
    [sym_slur_close] = ACTIONS(281),
    [aux_sym_note_construct_token1] = ACTIONS(281),
    [anon_sym_LBRACK] = ACTIONS(283),
    [sym_alteration] = ACTIONS(281),
    [sym_note_letter] = ACTIONS(281),
    [sym_rest] = ACTIONS(281),
    [anon_sym_Z] = ACTIONS(281),
    [anon_sym_X] = ACTIONS(283),
    [sym_rhythm] = ACTIONS(285),
    [aux_sym_grace_note_token1] = ACTIONS(281),
    [aux_sym_chord_symbol_token1] = ACTIONS(283),
    [sym_annotation] = ACTIONS(281),
    [sym_tuplet_marker] = ACTIONS(281),
    [sym_decoration_shorthand] = ACTIONS(283),
    [sym_bar_line] = ACTIONS(283),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(281),
    [sym_thin_double_bar_line] = ACTIONS(281),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(281),
    [sym_start_of_repeated_section] = ACTIONS(281),
    [sym_end_of_repeated_section] = ACTIONS(281),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(281),
    [anon_sym_BANGtrill_BANG] = ACTIONS(281),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(281),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(281),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(281),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(281),
    [anon_sym_BANGmordent_BANG] = ACTIONS(281),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(281),
    [anon_sym_BANGroll_BANG] = ACTIONS(281),
    [anon_sym_BANGturn_BANG] = ACTIONS(281),
    [anon_sym_BANGturnx_BANG] = ACTIONS(281),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(281),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(281),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(281),
    [anon_sym_BANG_GT_BANG] = ACTIONS(281),
    [anon_sym_BANGaccent_BANG] = ACTIONS(281),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(281),
    [anon_sym_BANGfermata_BANG] = ACTIONS(281),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(281),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(281),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(281),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(281),
    [anon_sym_BANGplus_BANG] = ACTIONS(281),
    [anon_sym_BANGsnap_BANG] = ACTIONS(281),
    [anon_sym_BANGslide_BANG] = ACTIONS(281),
    [anon_sym_BANGwedge_BANG] = ACTIONS(281),
    [anon_sym_BANGupbow_BANG] = ACTIONS(281),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(281),
    [anon_sym_BANGopen_BANG] = ACTIONS(281),
    [anon_sym_BANGthumb_BANG] = ACTIONS(281),
    [anon_sym_BANGbreath_BANG] = ACTIONS(281),
    [anon_sym_BANGpppp_BANG] = ACTIONS(281),
    [anon_sym_BANGppp_BANG] = ACTIONS(281),
    [anon_sym_BANGpp_BANG] = ACTIONS(281),
    [anon_sym_BANGp_BANG] = ACTIONS(281),
    [anon_sym_BANGmp_BANG] = ACTIONS(281),
    [anon_sym_BANGmf_BANG] = ACTIONS(281),
    [anon_sym_BANGf_BANG] = ACTIONS(281),
    [anon_sym_BANGff_BANG] = ACTIONS(281),
    [anon_sym_BANGfff_BANG] = ACTIONS(281),
    [anon_sym_BANGffff_BANG] = ACTIONS(281),
    [anon_sym_BANGsfz_BANG] = ACTIONS(281),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(281),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(281),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(281),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(281),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(281),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(281),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(281),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(281),
    [anon_sym_BANGsegno_BANG] = ACTIONS(281),
    [anon_sym_BANGcoda_BANG] = ACTIONS(281),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(281),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(281),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(281),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(281),
    [anon_sym_BANGfine_BANG] = ACTIONS(281),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(281),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(281),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(281),
    [sym_parts_line] = ACTIONS(281),
    [sym_instruction] = ACTIONS(281),
    [sym_key] = ACTIONS(281),
    [sym_macros] = ACTIONS(281),
    [sym_meter] = ACTIONS(281),
    [sym_notes] = ACTIONS(281),
    [anon_sym_X_COLON] = ACTIONS(281),
    [sym_remark] = ACTIONS(281),
    [sym_rhythm_line] = ACTIONS(281),
    [anon_sym_s_COLON] = ACTIONS(281),
    [sym_tempo] = ACTIONS(281),
    [sym_tune_title] = ACTIONS(281),
    [sym_unit_note_length] = ACTIONS(281),
    [anon_sym_U_COLON] = ACTIONS(281),
    [sym_voice] = ACTIONS(281),
    [anon_sym_w_COLON] = ACTIONS(281),
    [sym_words_postbody] = ACTIONS(281),
  },
  [22] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym__NL] = ACTIONS(289),
    [anon_sym_BSLASH] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(291),
    [sym_COMMENT] = ACTIONS(289),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(287),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(289),
    [sym_slur_open] = ACTIONS(289),
    [sym_slur_close] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(289),
    [sym_alteration] = ACTIONS(287),
    [sym_note_letter] = ACTIONS(287),
    [sym_rest] = ACTIONS(287),
    [anon_sym_Z] = ACTIONS(287),
    [anon_sym_X] = ACTIONS(289),
    [aux_sym_grace_note_token1] = ACTIONS(287),
    [aux_sym_chord_symbol_token1] = ACTIONS(289),
    [sym_annotation] = ACTIONS(287),
    [sym_tuplet_marker] = ACTIONS(287),
    [sym_decoration_shorthand] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(291),
    [sym_bar_line] = ACTIONS(289),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(287),
    [sym_thin_double_bar_line] = ACTIONS(287),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(287),
    [sym_start_of_repeated_section] = ACTIONS(287),
    [sym_end_of_repeated_section] = ACTIONS(287),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(287),
    [anon_sym_BANGtrill_BANG] = ACTIONS(287),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(287),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(287),
    [anon_sym_BANGmordent_BANG] = ACTIONS(287),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(287),
    [anon_sym_BANGroll_BANG] = ACTIONS(287),
    [anon_sym_BANGturn_BANG] = ACTIONS(287),
    [anon_sym_BANGturnx_BANG] = ACTIONS(287),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(287),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(287),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(287),
    [anon_sym_BANG_GT_BANG] = ACTIONS(287),
    [anon_sym_BANGaccent_BANG] = ACTIONS(287),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(287),
    [anon_sym_BANGfermata_BANG] = ACTIONS(287),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(287),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(287),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(287),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(287),
    [anon_sym_BANGplus_BANG] = ACTIONS(287),
    [anon_sym_BANGsnap_BANG] = ACTIONS(287),
    [anon_sym_BANGslide_BANG] = ACTIONS(287),
    [anon_sym_BANGwedge_BANG] = ACTIONS(287),
    [anon_sym_BANGupbow_BANG] = ACTIONS(287),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(287),
    [anon_sym_BANGopen_BANG] = ACTIONS(287),
    [anon_sym_BANGthumb_BANG] = ACTIONS(287),
    [anon_sym_BANGbreath_BANG] = ACTIONS(287),
    [anon_sym_BANGpppp_BANG] = ACTIONS(287),
    [anon_sym_BANGppp_BANG] = ACTIONS(287),
    [anon_sym_BANGpp_BANG] = ACTIONS(287),
    [anon_sym_BANGp_BANG] = ACTIONS(287),
    [anon_sym_BANGmp_BANG] = ACTIONS(287),
    [anon_sym_BANGmf_BANG] = ACTIONS(287),
    [anon_sym_BANGf_BANG] = ACTIONS(287),
    [anon_sym_BANGff_BANG] = ACTIONS(287),
    [anon_sym_BANGfff_BANG] = ACTIONS(287),
    [anon_sym_BANGffff_BANG] = ACTIONS(287),
    [anon_sym_BANGsfz_BANG] = ACTIONS(287),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGsegno_BANG] = ACTIONS(287),
    [anon_sym_BANGcoda_BANG] = ACTIONS(287),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(287),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(287),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(287),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(287),
    [anon_sym_BANGfine_BANG] = ACTIONS(287),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(287),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(287),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(287),
    [sym_parts_line] = ACTIONS(287),
    [sym_instruction] = ACTIONS(287),
    [sym_key] = ACTIONS(287),
    [sym_macros] = ACTIONS(287),
    [sym_meter] = ACTIONS(287),
    [sym_notes] = ACTIONS(287),
    [anon_sym_X_COLON] = ACTIONS(287),
    [sym_remark] = ACTIONS(287),
    [sym_rhythm_line] = ACTIONS(287),
    [anon_sym_s_COLON] = ACTIONS(287),
    [sym_tempo] = ACTIONS(287),
    [sym_tune_title] = ACTIONS(287),
    [sym_unit_note_length] = ACTIONS(287),
    [anon_sym_U_COLON] = ACTIONS(287),
    [sym_voice] = ACTIONS(287),
    [anon_sym_w_COLON] = ACTIONS(287),
    [sym_words_postbody] = ACTIONS(287),
  },
  [23] = {
    [sym_nth_ending_number] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym__NL] = ACTIONS(265),
    [anon_sym_BSLASH] = ACTIONS(263),
    [sym_COMMENT] = ACTIONS(265),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(263),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(267),
    [sym_slur_open] = ACTIONS(265),
    [sym_slur_close] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(269),
    [sym_alteration] = ACTIONS(263),
    [sym_note_letter] = ACTIONS(263),
    [sym_rest] = ACTIONS(263),
    [anon_sym_Z] = ACTIONS(263),
    [anon_sym_X] = ACTIONS(265),
    [aux_sym_grace_note_token1] = ACTIONS(263),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(263),
    [sym_tuplet_marker] = ACTIONS(263),
    [sym_decoration_shorthand] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(263),
    [sym_thin_double_bar_line] = ACTIONS(263),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(263),
    [sym_start_of_repeated_section] = ACTIONS(263),
    [sym_end_of_repeated_section] = ACTIONS(263),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(263),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(294),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(296),
    [anon_sym_BANGtrill_BANG] = ACTIONS(263),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(263),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(263),
    [anon_sym_BANGmordent_BANG] = ACTIONS(263),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(263),
    [anon_sym_BANGroll_BANG] = ACTIONS(263),
    [anon_sym_BANGturn_BANG] = ACTIONS(263),
    [anon_sym_BANGturnx_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(263),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_BANG] = ACTIONS(263),
    [anon_sym_BANGaccent_BANG] = ACTIONS(263),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(263),
    [anon_sym_BANGfermata_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(263),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(263),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(263),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(263),
    [anon_sym_BANGplus_BANG] = ACTIONS(263),
    [anon_sym_BANGsnap_BANG] = ACTIONS(263),
    [anon_sym_BANGslide_BANG] = ACTIONS(263),
    [anon_sym_BANGwedge_BANG] = ACTIONS(263),
    [anon_sym_BANGupbow_BANG] = ACTIONS(263),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(263),
    [anon_sym_BANGopen_BANG] = ACTIONS(263),
    [anon_sym_BANGthumb_BANG] = ACTIONS(263),
    [anon_sym_BANGbreath_BANG] = ACTIONS(263),
    [anon_sym_BANGpppp_BANG] = ACTIONS(263),
    [anon_sym_BANGppp_BANG] = ACTIONS(263),
    [anon_sym_BANGpp_BANG] = ACTIONS(263),
    [anon_sym_BANGp_BANG] = ACTIONS(263),
    [anon_sym_BANGmp_BANG] = ACTIONS(263),
    [anon_sym_BANGmf_BANG] = ACTIONS(263),
    [anon_sym_BANGf_BANG] = ACTIONS(263),
    [anon_sym_BANGff_BANG] = ACTIONS(263),
    [anon_sym_BANGfff_BANG] = ACTIONS(263),
    [anon_sym_BANGffff_BANG] = ACTIONS(263),
    [anon_sym_BANGsfz_BANG] = ACTIONS(263),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGsegno_BANG] = ACTIONS(263),
    [anon_sym_BANGcoda_BANG] = ACTIONS(263),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(263),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(263),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(263),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(263),
    [anon_sym_BANGfine_BANG] = ACTIONS(263),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(263),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(263),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(263),
    [sym_parts_line] = ACTIONS(263),
    [sym_instruction] = ACTIONS(263),
    [sym_key] = ACTIONS(263),
    [sym_macros] = ACTIONS(263),
    [sym_meter] = ACTIONS(263),
    [sym_notes] = ACTIONS(263),
    [anon_sym_X_COLON] = ACTIONS(263),
    [sym_remark] = ACTIONS(263),
    [sym_rhythm_line] = ACTIONS(263),
    [anon_sym_s_COLON] = ACTIONS(263),
    [sym_tempo] = ACTIONS(263),
    [sym_tune_title] = ACTIONS(263),
    [sym_unit_note_length] = ACTIONS(263),
    [anon_sym_U_COLON] = ACTIONS(263),
    [sym_voice] = ACTIONS(263),
    [anon_sym_w_COLON] = ACTIONS(263),
    [sym_words_postbody] = ACTIONS(263),
  },
  [24] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(22),
    [ts_builtin_sym_end] = ACTIONS(298),
    [sym__NL] = ACTIONS(300),
    [anon_sym_BSLASH] = ACTIONS(298),
    [anon_sym_DASH] = ACTIONS(279),
    [sym_COMMENT] = ACTIONS(300),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(298),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(300),
    [sym_slur_open] = ACTIONS(300),
    [sym_slur_close] = ACTIONS(298),
    [anon_sym_LBRACK] = ACTIONS(300),
    [sym_alteration] = ACTIONS(298),
    [sym_note_letter] = ACTIONS(298),
    [sym_rest] = ACTIONS(298),
    [anon_sym_Z] = ACTIONS(298),
    [anon_sym_X] = ACTIONS(300),
    [aux_sym_grace_note_token1] = ACTIONS(298),
    [aux_sym_chord_symbol_token1] = ACTIONS(300),
    [sym_annotation] = ACTIONS(298),
    [sym_tuplet_marker] = ACTIONS(298),
    [sym_decoration_shorthand] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(279),
    [sym_bar_line] = ACTIONS(300),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(298),
    [sym_thin_double_bar_line] = ACTIONS(298),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(298),
    [sym_start_of_repeated_section] = ACTIONS(298),
    [sym_end_of_repeated_section] = ACTIONS(298),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(298),
    [anon_sym_BANGtrill_BANG] = ACTIONS(298),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(298),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(298),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(298),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(298),
    [anon_sym_BANGmordent_BANG] = ACTIONS(298),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(298),
    [anon_sym_BANGroll_BANG] = ACTIONS(298),
    [anon_sym_BANGturn_BANG] = ACTIONS(298),
    [anon_sym_BANGturnx_BANG] = ACTIONS(298),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(298),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(298),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(298),
    [anon_sym_BANG_GT_BANG] = ACTIONS(298),
    [anon_sym_BANGaccent_BANG] = ACTIONS(298),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(298),
    [anon_sym_BANGfermata_BANG] = ACTIONS(298),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(298),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(298),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(298),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(298),
    [anon_sym_BANGplus_BANG] = ACTIONS(298),
    [anon_sym_BANGsnap_BANG] = ACTIONS(298),
    [anon_sym_BANGslide_BANG] = ACTIONS(298),
    [anon_sym_BANGwedge_BANG] = ACTIONS(298),
    [anon_sym_BANGupbow_BANG] = ACTIONS(298),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(298),
    [anon_sym_BANGopen_BANG] = ACTIONS(298),
    [anon_sym_BANGthumb_BANG] = ACTIONS(298),
    [anon_sym_BANGbreath_BANG] = ACTIONS(298),
    [anon_sym_BANGpppp_BANG] = ACTIONS(298),
    [anon_sym_BANGppp_BANG] = ACTIONS(298),
    [anon_sym_BANGpp_BANG] = ACTIONS(298),
    [anon_sym_BANGp_BANG] = ACTIONS(298),
    [anon_sym_BANGmp_BANG] = ACTIONS(298),
    [anon_sym_BANGmf_BANG] = ACTIONS(298),
    [anon_sym_BANGf_BANG] = ACTIONS(298),
    [anon_sym_BANGff_BANG] = ACTIONS(298),
    [anon_sym_BANGfff_BANG] = ACTIONS(298),
    [anon_sym_BANGffff_BANG] = ACTIONS(298),
    [anon_sym_BANGsfz_BANG] = ACTIONS(298),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(298),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(298),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(298),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(298),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(298),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(298),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(298),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(298),
    [anon_sym_BANGsegno_BANG] = ACTIONS(298),
    [anon_sym_BANGcoda_BANG] = ACTIONS(298),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(298),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(298),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(298),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(298),
    [anon_sym_BANGfine_BANG] = ACTIONS(298),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(298),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(298),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(298),
    [sym_parts_line] = ACTIONS(298),
    [sym_instruction] = ACTIONS(298),
    [sym_key] = ACTIONS(298),
    [sym_macros] = ACTIONS(298),
    [sym_meter] = ACTIONS(298),
    [sym_notes] = ACTIONS(298),
    [anon_sym_X_COLON] = ACTIONS(298),
    [sym_remark] = ACTIONS(298),
    [sym_rhythm_line] = ACTIONS(298),
    [anon_sym_s_COLON] = ACTIONS(298),
    [sym_tempo] = ACTIONS(298),
    [sym_tune_title] = ACTIONS(298),
    [sym_unit_note_length] = ACTIONS(298),
    [anon_sym_U_COLON] = ACTIONS(298),
    [sym_voice] = ACTIONS(298),
    [anon_sym_w_COLON] = ACTIONS(298),
    [sym_words_postbody] = ACTIONS(298),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym__NL] = ACTIONS(304),
    [anon_sym_BSLASH] = ACTIONS(302),
    [sym_BEAM_SEPARATOR] = ACTIONS(302),
    [sym_COMMENT] = ACTIONS(304),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(302),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(304),
    [sym_slur_open] = ACTIONS(304),
    [sym_slur_close] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(304),
    [sym_alteration] = ACTIONS(302),
    [sym_note_letter] = ACTIONS(302),
    [sym_rest] = ACTIONS(302),
    [anon_sym_Z] = ACTIONS(302),
    [anon_sym_X] = ACTIONS(304),
    [sym_rhythm] = ACTIONS(306),
    [aux_sym_grace_note_token1] = ACTIONS(302),
    [aux_sym_chord_symbol_token1] = ACTIONS(304),
    [sym_annotation] = ACTIONS(302),
    [sym_tuplet_marker] = ACTIONS(302),
    [sym_decoration_shorthand] = ACTIONS(304),
    [sym_bar_line] = ACTIONS(304),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(302),
    [sym_thin_double_bar_line] = ACTIONS(302),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(302),
    [sym_start_of_repeated_section] = ACTIONS(302),
    [sym_end_of_repeated_section] = ACTIONS(302),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(302),
    [anon_sym_BANGtrill_BANG] = ACTIONS(302),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(302),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(302),
    [anon_sym_BANGmordent_BANG] = ACTIONS(302),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(302),
    [anon_sym_BANGroll_BANG] = ACTIONS(302),
    [anon_sym_BANGturn_BANG] = ACTIONS(302),
    [anon_sym_BANGturnx_BANG] = ACTIONS(302),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(302),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(302),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(302),
    [anon_sym_BANG_GT_BANG] = ACTIONS(302),
    [anon_sym_BANGaccent_BANG] = ACTIONS(302),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(302),
    [anon_sym_BANGfermata_BANG] = ACTIONS(302),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(302),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(302),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(302),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(302),
    [anon_sym_BANGplus_BANG] = ACTIONS(302),
    [anon_sym_BANGsnap_BANG] = ACTIONS(302),
    [anon_sym_BANGslide_BANG] = ACTIONS(302),
    [anon_sym_BANGwedge_BANG] = ACTIONS(302),
    [anon_sym_BANGupbow_BANG] = ACTIONS(302),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(302),
    [anon_sym_BANGopen_BANG] = ACTIONS(302),
    [anon_sym_BANGthumb_BANG] = ACTIONS(302),
    [anon_sym_BANGbreath_BANG] = ACTIONS(302),
    [anon_sym_BANGpppp_BANG] = ACTIONS(302),
    [anon_sym_BANGppp_BANG] = ACTIONS(302),
    [anon_sym_BANGpp_BANG] = ACTIONS(302),
    [anon_sym_BANGp_BANG] = ACTIONS(302),
    [anon_sym_BANGmp_BANG] = ACTIONS(302),
    [anon_sym_BANGmf_BANG] = ACTIONS(302),
    [anon_sym_BANGf_BANG] = ACTIONS(302),
    [anon_sym_BANGff_BANG] = ACTIONS(302),
    [anon_sym_BANGfff_BANG] = ACTIONS(302),
    [anon_sym_BANGffff_BANG] = ACTIONS(302),
    [anon_sym_BANGsfz_BANG] = ACTIONS(302),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGsegno_BANG] = ACTIONS(302),
    [anon_sym_BANGcoda_BANG] = ACTIONS(302),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(302),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(302),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(302),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(302),
    [anon_sym_BANGfine_BANG] = ACTIONS(302),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(302),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(302),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(302),
    [sym_parts_line] = ACTIONS(302),
    [sym_instruction] = ACTIONS(302),
    [sym_key] = ACTIONS(302),
    [sym_macros] = ACTIONS(302),
    [sym_meter] = ACTIONS(302),
    [sym_notes] = ACTIONS(302),
    [anon_sym_X_COLON] = ACTIONS(302),
    [sym_remark] = ACTIONS(302),
    [sym_rhythm_line] = ACTIONS(302),
    [anon_sym_s_COLON] = ACTIONS(302),
    [sym_tempo] = ACTIONS(302),
    [sym_tune_title] = ACTIONS(302),
    [sym_unit_note_length] = ACTIONS(302),
    [anon_sym_U_COLON] = ACTIONS(302),
    [sym_voice] = ACTIONS(302),
    [anon_sym_w_COLON] = ACTIONS(302),
    [sym_words_postbody] = ACTIONS(302),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [sym__NL] = ACTIONS(310),
    [anon_sym_BSLASH] = ACTIONS(308),
    [sym_BEAM_SEPARATOR] = ACTIONS(308),
    [sym_COMMENT] = ACTIONS(310),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(308),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(310),
    [sym_slur_open] = ACTIONS(310),
    [sym_slur_close] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(310),
    [sym_alteration] = ACTIONS(308),
    [sym_note_letter] = ACTIONS(308),
    [sym_rest] = ACTIONS(308),
    [anon_sym_Z] = ACTIONS(308),
    [anon_sym_X] = ACTIONS(310),
    [sym_rhythm] = ACTIONS(312),
    [aux_sym_grace_note_token1] = ACTIONS(308),
    [aux_sym_chord_symbol_token1] = ACTIONS(310),
    [sym_annotation] = ACTIONS(308),
    [sym_tuplet_marker] = ACTIONS(308),
    [sym_decoration_shorthand] = ACTIONS(310),
    [sym_bar_line] = ACTIONS(310),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(308),
    [sym_thin_double_bar_line] = ACTIONS(308),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(308),
    [sym_start_of_repeated_section] = ACTIONS(308),
    [sym_end_of_repeated_section] = ACTIONS(308),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(308),
    [anon_sym_BANGtrill_BANG] = ACTIONS(308),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(308),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(308),
    [anon_sym_BANGmordent_BANG] = ACTIONS(308),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(308),
    [anon_sym_BANGroll_BANG] = ACTIONS(308),
    [anon_sym_BANGturn_BANG] = ACTIONS(308),
    [anon_sym_BANGturnx_BANG] = ACTIONS(308),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(308),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(308),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(308),
    [anon_sym_BANG_GT_BANG] = ACTIONS(308),
    [anon_sym_BANGaccent_BANG] = ACTIONS(308),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(308),
    [anon_sym_BANGfermata_BANG] = ACTIONS(308),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(308),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(308),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(308),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(308),
    [anon_sym_BANGplus_BANG] = ACTIONS(308),
    [anon_sym_BANGsnap_BANG] = ACTIONS(308),
    [anon_sym_BANGslide_BANG] = ACTIONS(308),
    [anon_sym_BANGwedge_BANG] = ACTIONS(308),
    [anon_sym_BANGupbow_BANG] = ACTIONS(308),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(308),
    [anon_sym_BANGopen_BANG] = ACTIONS(308),
    [anon_sym_BANGthumb_BANG] = ACTIONS(308),
    [anon_sym_BANGbreath_BANG] = ACTIONS(308),
    [anon_sym_BANGpppp_BANG] = ACTIONS(308),
    [anon_sym_BANGppp_BANG] = ACTIONS(308),
    [anon_sym_BANGpp_BANG] = ACTIONS(308),
    [anon_sym_BANGp_BANG] = ACTIONS(308),
    [anon_sym_BANGmp_BANG] = ACTIONS(308),
    [anon_sym_BANGmf_BANG] = ACTIONS(308),
    [anon_sym_BANGf_BANG] = ACTIONS(308),
    [anon_sym_BANGff_BANG] = ACTIONS(308),
    [anon_sym_BANGfff_BANG] = ACTIONS(308),
    [anon_sym_BANGffff_BANG] = ACTIONS(308),
    [anon_sym_BANGsfz_BANG] = ACTIONS(308),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGsegno_BANG] = ACTIONS(308),
    [anon_sym_BANGcoda_BANG] = ACTIONS(308),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(308),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(308),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(308),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(308),
    [anon_sym_BANGfine_BANG] = ACTIONS(308),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(308),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(308),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(308),
    [sym_parts_line] = ACTIONS(308),
    [sym_instruction] = ACTIONS(308),
    [sym_key] = ACTIONS(308),
    [sym_macros] = ACTIONS(308),
    [sym_meter] = ACTIONS(308),
    [sym_notes] = ACTIONS(308),
    [anon_sym_X_COLON] = ACTIONS(308),
    [sym_remark] = ACTIONS(308),
    [sym_rhythm_line] = ACTIONS(308),
    [anon_sym_s_COLON] = ACTIONS(308),
    [sym_tempo] = ACTIONS(308),
    [sym_tune_title] = ACTIONS(308),
    [sym_unit_note_length] = ACTIONS(308),
    [anon_sym_U_COLON] = ACTIONS(308),
    [sym_voice] = ACTIONS(308),
    [anon_sym_w_COLON] = ACTIONS(308),
    [sym_words_postbody] = ACTIONS(308),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(314),
    [sym__NL] = ACTIONS(316),
    [anon_sym_BSLASH] = ACTIONS(314),
    [sym_BEAM_SEPARATOR] = ACTIONS(314),
    [sym_COMMENT] = ACTIONS(316),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(314),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(316),
    [sym_slur_open] = ACTIONS(316),
    [sym_slur_close] = ACTIONS(314),
    [anon_sym_LBRACK] = ACTIONS(316),
    [sym_alteration] = ACTIONS(314),
    [sym_note_letter] = ACTIONS(314),
    [sym_rest] = ACTIONS(314),
    [anon_sym_Z] = ACTIONS(314),
    [anon_sym_X] = ACTIONS(316),
    [sym_rhythm] = ACTIONS(318),
    [aux_sym_grace_note_token1] = ACTIONS(314),
    [aux_sym_chord_symbol_token1] = ACTIONS(316),
    [sym_annotation] = ACTIONS(314),
    [sym_tuplet_marker] = ACTIONS(314),
    [sym_decoration_shorthand] = ACTIONS(316),
    [sym_bar_line] = ACTIONS(316),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(314),
    [sym_thin_double_bar_line] = ACTIONS(314),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(314),
    [sym_start_of_repeated_section] = ACTIONS(314),
    [sym_end_of_repeated_section] = ACTIONS(314),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(314),
    [anon_sym_BANGtrill_BANG] = ACTIONS(314),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(314),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(314),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(314),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(314),
    [anon_sym_BANGmordent_BANG] = ACTIONS(314),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(314),
    [anon_sym_BANGroll_BANG] = ACTIONS(314),
    [anon_sym_BANGturn_BANG] = ACTIONS(314),
    [anon_sym_BANGturnx_BANG] = ACTIONS(314),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(314),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(314),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(314),
    [anon_sym_BANG_GT_BANG] = ACTIONS(314),
    [anon_sym_BANGaccent_BANG] = ACTIONS(314),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(314),
    [anon_sym_BANGfermata_BANG] = ACTIONS(314),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(314),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(314),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(314),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(314),
    [anon_sym_BANGplus_BANG] = ACTIONS(314),
    [anon_sym_BANGsnap_BANG] = ACTIONS(314),
    [anon_sym_BANGslide_BANG] = ACTIONS(314),
    [anon_sym_BANGwedge_BANG] = ACTIONS(314),
    [anon_sym_BANGupbow_BANG] = ACTIONS(314),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(314),
    [anon_sym_BANGopen_BANG] = ACTIONS(314),
    [anon_sym_BANGthumb_BANG] = ACTIONS(314),
    [anon_sym_BANGbreath_BANG] = ACTIONS(314),
    [anon_sym_BANGpppp_BANG] = ACTIONS(314),
    [anon_sym_BANGppp_BANG] = ACTIONS(314),
    [anon_sym_BANGpp_BANG] = ACTIONS(314),
    [anon_sym_BANGp_BANG] = ACTIONS(314),
    [anon_sym_BANGmp_BANG] = ACTIONS(314),
    [anon_sym_BANGmf_BANG] = ACTIONS(314),
    [anon_sym_BANGf_BANG] = ACTIONS(314),
    [anon_sym_BANGff_BANG] = ACTIONS(314),
    [anon_sym_BANGfff_BANG] = ACTIONS(314),
    [anon_sym_BANGffff_BANG] = ACTIONS(314),
    [anon_sym_BANGsfz_BANG] = ACTIONS(314),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(314),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(314),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(314),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(314),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(314),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(314),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(314),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(314),
    [anon_sym_BANGsegno_BANG] = ACTIONS(314),
    [anon_sym_BANGcoda_BANG] = ACTIONS(314),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(314),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(314),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(314),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(314),
    [anon_sym_BANGfine_BANG] = ACTIONS(314),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(314),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(314),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(314),
    [sym_parts_line] = ACTIONS(314),
    [sym_instruction] = ACTIONS(314),
    [sym_key] = ACTIONS(314),
    [sym_macros] = ACTIONS(314),
    [sym_meter] = ACTIONS(314),
    [sym_notes] = ACTIONS(314),
    [anon_sym_X_COLON] = ACTIONS(314),
    [sym_remark] = ACTIONS(314),
    [sym_rhythm_line] = ACTIONS(314),
    [anon_sym_s_COLON] = ACTIONS(314),
    [sym_tempo] = ACTIONS(314),
    [sym_tune_title] = ACTIONS(314),
    [sym_unit_note_length] = ACTIONS(314),
    [anon_sym_U_COLON] = ACTIONS(314),
    [sym_voice] = ACTIONS(314),
    [anon_sym_w_COLON] = ACTIONS(314),
    [sym_words_postbody] = ACTIONS(314),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [sym__NL] = ACTIONS(322),
    [anon_sym_BSLASH] = ACTIONS(320),
    [sym_BEAM_SEPARATOR] = ACTIONS(320),
    [sym_COMMENT] = ACTIONS(322),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(320),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(322),
    [sym_slur_open] = ACTIONS(322),
    [sym_slur_close] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym_alteration] = ACTIONS(320),
    [sym_note_letter] = ACTIONS(320),
    [sym_rest] = ACTIONS(320),
    [anon_sym_Z] = ACTIONS(320),
    [anon_sym_X] = ACTIONS(322),
    [sym_rhythm] = ACTIONS(324),
    [aux_sym_grace_note_token1] = ACTIONS(320),
    [aux_sym_chord_symbol_token1] = ACTIONS(322),
    [sym_annotation] = ACTIONS(320),
    [sym_tuplet_marker] = ACTIONS(320),
    [sym_decoration_shorthand] = ACTIONS(322),
    [sym_bar_line] = ACTIONS(322),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(320),
    [sym_thin_double_bar_line] = ACTIONS(320),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(320),
    [sym_start_of_repeated_section] = ACTIONS(320),
    [sym_end_of_repeated_section] = ACTIONS(320),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(320),
    [anon_sym_BANGtrill_BANG] = ACTIONS(320),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(320),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(320),
    [anon_sym_BANGmordent_BANG] = ACTIONS(320),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(320),
    [anon_sym_BANGroll_BANG] = ACTIONS(320),
    [anon_sym_BANGturn_BANG] = ACTIONS(320),
    [anon_sym_BANGturnx_BANG] = ACTIONS(320),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(320),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(320),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(320),
    [anon_sym_BANG_GT_BANG] = ACTIONS(320),
    [anon_sym_BANGaccent_BANG] = ACTIONS(320),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(320),
    [anon_sym_BANGfermata_BANG] = ACTIONS(320),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(320),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(320),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(320),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(320),
    [anon_sym_BANGplus_BANG] = ACTIONS(320),
    [anon_sym_BANGsnap_BANG] = ACTIONS(320),
    [anon_sym_BANGslide_BANG] = ACTIONS(320),
    [anon_sym_BANGwedge_BANG] = ACTIONS(320),
    [anon_sym_BANGupbow_BANG] = ACTIONS(320),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(320),
    [anon_sym_BANGopen_BANG] = ACTIONS(320),
    [anon_sym_BANGthumb_BANG] = ACTIONS(320),
    [anon_sym_BANGbreath_BANG] = ACTIONS(320),
    [anon_sym_BANGpppp_BANG] = ACTIONS(320),
    [anon_sym_BANGppp_BANG] = ACTIONS(320),
    [anon_sym_BANGpp_BANG] = ACTIONS(320),
    [anon_sym_BANGp_BANG] = ACTIONS(320),
    [anon_sym_BANGmp_BANG] = ACTIONS(320),
    [anon_sym_BANGmf_BANG] = ACTIONS(320),
    [anon_sym_BANGf_BANG] = ACTIONS(320),
    [anon_sym_BANGff_BANG] = ACTIONS(320),
    [anon_sym_BANGfff_BANG] = ACTIONS(320),
    [anon_sym_BANGffff_BANG] = ACTIONS(320),
    [anon_sym_BANGsfz_BANG] = ACTIONS(320),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGsegno_BANG] = ACTIONS(320),
    [anon_sym_BANGcoda_BANG] = ACTIONS(320),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(320),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(320),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(320),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(320),
    [anon_sym_BANGfine_BANG] = ACTIONS(320),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(320),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(320),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(320),
    [sym_parts_line] = ACTIONS(320),
    [sym_instruction] = ACTIONS(320),
    [sym_key] = ACTIONS(320),
    [sym_macros] = ACTIONS(320),
    [sym_meter] = ACTIONS(320),
    [sym_notes] = ACTIONS(320),
    [anon_sym_X_COLON] = ACTIONS(320),
    [sym_remark] = ACTIONS(320),
    [sym_rhythm_line] = ACTIONS(320),
    [anon_sym_s_COLON] = ACTIONS(320),
    [sym_tempo] = ACTIONS(320),
    [sym_tune_title] = ACTIONS(320),
    [sym_unit_note_length] = ACTIONS(320),
    [anon_sym_U_COLON] = ACTIONS(320),
    [sym_voice] = ACTIONS(320),
    [anon_sym_w_COLON] = ACTIONS(320),
    [sym_words_postbody] = ACTIONS(320),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym__NL] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(326),
    [sym_BEAM_SEPARATOR] = ACTIONS(326),
    [sym_COMMENT] = ACTIONS(328),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(326),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(328),
    [sym_slur_open] = ACTIONS(328),
    [sym_slur_close] = ACTIONS(326),
    [aux_sym_note_construct_token1] = ACTIONS(330),
    [anon_sym_LBRACK] = ACTIONS(328),
    [sym_alteration] = ACTIONS(326),
    [sym_note_letter] = ACTIONS(326),
    [sym_rest] = ACTIONS(326),
    [anon_sym_Z] = ACTIONS(326),
    [anon_sym_X] = ACTIONS(328),
    [aux_sym_grace_note_token1] = ACTIONS(326),
    [aux_sym_chord_symbol_token1] = ACTIONS(328),
    [sym_annotation] = ACTIONS(326),
    [sym_tuplet_marker] = ACTIONS(326),
    [sym_decoration_shorthand] = ACTIONS(328),
    [sym_bar_line] = ACTIONS(328),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(326),
    [sym_thin_double_bar_line] = ACTIONS(326),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(326),
    [sym_start_of_repeated_section] = ACTIONS(326),
    [sym_end_of_repeated_section] = ACTIONS(326),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(326),
    [anon_sym_BANGtrill_BANG] = ACTIONS(326),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(326),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(326),
    [anon_sym_BANGmordent_BANG] = ACTIONS(326),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(326),
    [anon_sym_BANGroll_BANG] = ACTIONS(326),
    [anon_sym_BANGturn_BANG] = ACTIONS(326),
    [anon_sym_BANGturnx_BANG] = ACTIONS(326),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(326),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(326),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(326),
    [anon_sym_BANG_GT_BANG] = ACTIONS(326),
    [anon_sym_BANGaccent_BANG] = ACTIONS(326),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(326),
    [anon_sym_BANGfermata_BANG] = ACTIONS(326),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(326),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(326),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(326),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(326),
    [anon_sym_BANGplus_BANG] = ACTIONS(326),
    [anon_sym_BANGsnap_BANG] = ACTIONS(326),
    [anon_sym_BANGslide_BANG] = ACTIONS(326),
    [anon_sym_BANGwedge_BANG] = ACTIONS(326),
    [anon_sym_BANGupbow_BANG] = ACTIONS(326),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(326),
    [anon_sym_BANGopen_BANG] = ACTIONS(326),
    [anon_sym_BANGthumb_BANG] = ACTIONS(326),
    [anon_sym_BANGbreath_BANG] = ACTIONS(326),
    [anon_sym_BANGpppp_BANG] = ACTIONS(326),
    [anon_sym_BANGppp_BANG] = ACTIONS(326),
    [anon_sym_BANGpp_BANG] = ACTIONS(326),
    [anon_sym_BANGp_BANG] = ACTIONS(326),
    [anon_sym_BANGmp_BANG] = ACTIONS(326),
    [anon_sym_BANGmf_BANG] = ACTIONS(326),
    [anon_sym_BANGf_BANG] = ACTIONS(326),
    [anon_sym_BANGff_BANG] = ACTIONS(326),
    [anon_sym_BANGfff_BANG] = ACTIONS(326),
    [anon_sym_BANGffff_BANG] = ACTIONS(326),
    [anon_sym_BANGsfz_BANG] = ACTIONS(326),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGsegno_BANG] = ACTIONS(326),
    [anon_sym_BANGcoda_BANG] = ACTIONS(326),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(326),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(326),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(326),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(326),
    [anon_sym_BANGfine_BANG] = ACTIONS(326),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(326),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(326),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(326),
    [sym_parts_line] = ACTIONS(326),
    [sym_instruction] = ACTIONS(326),
    [sym_key] = ACTIONS(326),
    [sym_macros] = ACTIONS(326),
    [sym_meter] = ACTIONS(326),
    [sym_notes] = ACTIONS(326),
    [anon_sym_X_COLON] = ACTIONS(326),
    [sym_remark] = ACTIONS(326),
    [sym_rhythm_line] = ACTIONS(326),
    [anon_sym_s_COLON] = ACTIONS(326),
    [sym_tempo] = ACTIONS(326),
    [sym_tune_title] = ACTIONS(326),
    [sym_unit_note_length] = ACTIONS(326),
    [anon_sym_U_COLON] = ACTIONS(326),
    [sym_voice] = ACTIONS(326),
    [anon_sym_w_COLON] = ACTIONS(326),
    [sym_words_postbody] = ACTIONS(326),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(332),
    [sym__NL] = ACTIONS(334),
    [anon_sym_BSLASH] = ACTIONS(332),
    [sym_BEAM_SEPARATOR] = ACTIONS(332),
    [sym_COMMENT] = ACTIONS(334),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(332),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(334),
    [sym_slur_open] = ACTIONS(334),
    [sym_slur_close] = ACTIONS(332),
    [aux_sym_note_construct_token1] = ACTIONS(332),
    [anon_sym_LBRACK] = ACTIONS(334),
    [sym_alteration] = ACTIONS(332),
    [sym_note_letter] = ACTIONS(332),
    [sym_rest] = ACTIONS(332),
    [anon_sym_Z] = ACTIONS(332),
    [anon_sym_X] = ACTIONS(334),
    [aux_sym_grace_note_token1] = ACTIONS(332),
    [aux_sym_chord_symbol_token1] = ACTIONS(334),
    [sym_annotation] = ACTIONS(332),
    [sym_tuplet_marker] = ACTIONS(332),
    [sym_decoration_shorthand] = ACTIONS(334),
    [sym_bar_line] = ACTIONS(334),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(332),
    [sym_thin_double_bar_line] = ACTIONS(332),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(332),
    [sym_start_of_repeated_section] = ACTIONS(332),
    [sym_end_of_repeated_section] = ACTIONS(332),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(332),
    [anon_sym_BANGtrill_BANG] = ACTIONS(332),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(332),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(332),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(332),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(332),
    [anon_sym_BANGmordent_BANG] = ACTIONS(332),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(332),
    [anon_sym_BANGroll_BANG] = ACTIONS(332),
    [anon_sym_BANGturn_BANG] = ACTIONS(332),
    [anon_sym_BANGturnx_BANG] = ACTIONS(332),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(332),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(332),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(332),
    [anon_sym_BANG_GT_BANG] = ACTIONS(332),
    [anon_sym_BANGaccent_BANG] = ACTIONS(332),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(332),
    [anon_sym_BANGfermata_BANG] = ACTIONS(332),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(332),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(332),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(332),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(332),
    [anon_sym_BANGplus_BANG] = ACTIONS(332),
    [anon_sym_BANGsnap_BANG] = ACTIONS(332),
    [anon_sym_BANGslide_BANG] = ACTIONS(332),
    [anon_sym_BANGwedge_BANG] = ACTIONS(332),
    [anon_sym_BANGupbow_BANG] = ACTIONS(332),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(332),
    [anon_sym_BANGopen_BANG] = ACTIONS(332),
    [anon_sym_BANGthumb_BANG] = ACTIONS(332),
    [anon_sym_BANGbreath_BANG] = ACTIONS(332),
    [anon_sym_BANGpppp_BANG] = ACTIONS(332),
    [anon_sym_BANGppp_BANG] = ACTIONS(332),
    [anon_sym_BANGpp_BANG] = ACTIONS(332),
    [anon_sym_BANGp_BANG] = ACTIONS(332),
    [anon_sym_BANGmp_BANG] = ACTIONS(332),
    [anon_sym_BANGmf_BANG] = ACTIONS(332),
    [anon_sym_BANGf_BANG] = ACTIONS(332),
    [anon_sym_BANGff_BANG] = ACTIONS(332),
    [anon_sym_BANGfff_BANG] = ACTIONS(332),
    [anon_sym_BANGffff_BANG] = ACTIONS(332),
    [anon_sym_BANGsfz_BANG] = ACTIONS(332),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(332),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(332),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(332),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(332),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(332),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(332),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(332),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(332),
    [anon_sym_BANGsegno_BANG] = ACTIONS(332),
    [anon_sym_BANGcoda_BANG] = ACTIONS(332),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(332),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(332),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(332),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(332),
    [anon_sym_BANGfine_BANG] = ACTIONS(332),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(332),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(332),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(332),
    [sym_parts_line] = ACTIONS(332),
    [sym_instruction] = ACTIONS(332),
    [sym_key] = ACTIONS(332),
    [sym_macros] = ACTIONS(332),
    [sym_meter] = ACTIONS(332),
    [sym_notes] = ACTIONS(332),
    [anon_sym_X_COLON] = ACTIONS(332),
    [sym_remark] = ACTIONS(332),
    [sym_rhythm_line] = ACTIONS(332),
    [anon_sym_s_COLON] = ACTIONS(332),
    [sym_tempo] = ACTIONS(332),
    [sym_tune_title] = ACTIONS(332),
    [sym_unit_note_length] = ACTIONS(332),
    [anon_sym_U_COLON] = ACTIONS(332),
    [sym_voice] = ACTIONS(332),
    [anon_sym_w_COLON] = ACTIONS(332),
    [sym_words_postbody] = ACTIONS(332),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [sym__NL] = ACTIONS(338),
    [anon_sym_BSLASH] = ACTIONS(336),
    [sym_BEAM_SEPARATOR] = ACTIONS(336),
    [sym_COMMENT] = ACTIONS(338),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(336),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(338),
    [sym_slur_open] = ACTIONS(338),
    [sym_slur_close] = ACTIONS(336),
    [aux_sym_note_construct_token1] = ACTIONS(340),
    [anon_sym_LBRACK] = ACTIONS(338),
    [sym_alteration] = ACTIONS(336),
    [sym_note_letter] = ACTIONS(336),
    [sym_rest] = ACTIONS(336),
    [anon_sym_Z] = ACTIONS(336),
    [anon_sym_X] = ACTIONS(338),
    [aux_sym_grace_note_token1] = ACTIONS(336),
    [aux_sym_chord_symbol_token1] = ACTIONS(338),
    [sym_annotation] = ACTIONS(336),
    [sym_tuplet_marker] = ACTIONS(336),
    [sym_decoration_shorthand] = ACTIONS(338),
    [sym_bar_line] = ACTIONS(338),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(336),
    [sym_thin_double_bar_line] = ACTIONS(336),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(336),
    [sym_start_of_repeated_section] = ACTIONS(336),
    [sym_end_of_repeated_section] = ACTIONS(336),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(336),
    [anon_sym_BANGtrill_BANG] = ACTIONS(336),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(336),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(336),
    [anon_sym_BANGmordent_BANG] = ACTIONS(336),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(336),
    [anon_sym_BANGroll_BANG] = ACTIONS(336),
    [anon_sym_BANGturn_BANG] = ACTIONS(336),
    [anon_sym_BANGturnx_BANG] = ACTIONS(336),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(336),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(336),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(336),
    [anon_sym_BANG_GT_BANG] = ACTIONS(336),
    [anon_sym_BANGaccent_BANG] = ACTIONS(336),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(336),
    [anon_sym_BANGfermata_BANG] = ACTIONS(336),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(336),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(336),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(336),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(336),
    [anon_sym_BANGplus_BANG] = ACTIONS(336),
    [anon_sym_BANGsnap_BANG] = ACTIONS(336),
    [anon_sym_BANGslide_BANG] = ACTIONS(336),
    [anon_sym_BANGwedge_BANG] = ACTIONS(336),
    [anon_sym_BANGupbow_BANG] = ACTIONS(336),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(336),
    [anon_sym_BANGopen_BANG] = ACTIONS(336),
    [anon_sym_BANGthumb_BANG] = ACTIONS(336),
    [anon_sym_BANGbreath_BANG] = ACTIONS(336),
    [anon_sym_BANGpppp_BANG] = ACTIONS(336),
    [anon_sym_BANGppp_BANG] = ACTIONS(336),
    [anon_sym_BANGpp_BANG] = ACTIONS(336),
    [anon_sym_BANGp_BANG] = ACTIONS(336),
    [anon_sym_BANGmp_BANG] = ACTIONS(336),
    [anon_sym_BANGmf_BANG] = ACTIONS(336),
    [anon_sym_BANGf_BANG] = ACTIONS(336),
    [anon_sym_BANGff_BANG] = ACTIONS(336),
    [anon_sym_BANGfff_BANG] = ACTIONS(336),
    [anon_sym_BANGffff_BANG] = ACTIONS(336),
    [anon_sym_BANGsfz_BANG] = ACTIONS(336),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGsegno_BANG] = ACTIONS(336),
    [anon_sym_BANGcoda_BANG] = ACTIONS(336),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(336),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(336),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(336),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(336),
    [anon_sym_BANGfine_BANG] = ACTIONS(336),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(336),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(336),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(336),
    [sym_parts_line] = ACTIONS(336),
    [sym_instruction] = ACTIONS(336),
    [sym_key] = ACTIONS(336),
    [sym_macros] = ACTIONS(336),
    [sym_meter] = ACTIONS(336),
    [sym_notes] = ACTIONS(336),
    [anon_sym_X_COLON] = ACTIONS(336),
    [sym_remark] = ACTIONS(336),
    [sym_rhythm_line] = ACTIONS(336),
    [anon_sym_s_COLON] = ACTIONS(336),
    [sym_tempo] = ACTIONS(336),
    [sym_tune_title] = ACTIONS(336),
    [sym_unit_note_length] = ACTIONS(336),
    [anon_sym_U_COLON] = ACTIONS(336),
    [sym_voice] = ACTIONS(336),
    [anon_sym_w_COLON] = ACTIONS(336),
    [sym_words_postbody] = ACTIONS(336),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(342),
    [sym__NL] = ACTIONS(344),
    [anon_sym_BSLASH] = ACTIONS(342),
    [sym_BEAM_SEPARATOR] = ACTIONS(342),
    [sym_COMMENT] = ACTIONS(344),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(342),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(344),
    [sym_slur_open] = ACTIONS(344),
    [sym_slur_close] = ACTIONS(342),
    [aux_sym_note_construct_token1] = ACTIONS(346),
    [anon_sym_LBRACK] = ACTIONS(344),
    [sym_alteration] = ACTIONS(342),
    [sym_note_letter] = ACTIONS(342),
    [sym_rest] = ACTIONS(342),
    [anon_sym_Z] = ACTIONS(342),
    [anon_sym_X] = ACTIONS(344),
    [aux_sym_grace_note_token1] = ACTIONS(342),
    [aux_sym_chord_symbol_token1] = ACTIONS(344),
    [sym_annotation] = ACTIONS(342),
    [sym_tuplet_marker] = ACTIONS(342),
    [sym_decoration_shorthand] = ACTIONS(344),
    [sym_bar_line] = ACTIONS(344),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(342),
    [sym_thin_double_bar_line] = ACTIONS(342),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(342),
    [sym_start_of_repeated_section] = ACTIONS(342),
    [sym_end_of_repeated_section] = ACTIONS(342),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(342),
    [anon_sym_BANGtrill_BANG] = ACTIONS(342),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(342),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(342),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(342),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(342),
    [anon_sym_BANGmordent_BANG] = ACTIONS(342),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(342),
    [anon_sym_BANGroll_BANG] = ACTIONS(342),
    [anon_sym_BANGturn_BANG] = ACTIONS(342),
    [anon_sym_BANGturnx_BANG] = ACTIONS(342),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(342),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(342),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(342),
    [anon_sym_BANG_GT_BANG] = ACTIONS(342),
    [anon_sym_BANGaccent_BANG] = ACTIONS(342),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(342),
    [anon_sym_BANGfermata_BANG] = ACTIONS(342),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(342),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(342),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(342),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(342),
    [anon_sym_BANGplus_BANG] = ACTIONS(342),
    [anon_sym_BANGsnap_BANG] = ACTIONS(342),
    [anon_sym_BANGslide_BANG] = ACTIONS(342),
    [anon_sym_BANGwedge_BANG] = ACTIONS(342),
    [anon_sym_BANGupbow_BANG] = ACTIONS(342),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(342),
    [anon_sym_BANGopen_BANG] = ACTIONS(342),
    [anon_sym_BANGthumb_BANG] = ACTIONS(342),
    [anon_sym_BANGbreath_BANG] = ACTIONS(342),
    [anon_sym_BANGpppp_BANG] = ACTIONS(342),
    [anon_sym_BANGppp_BANG] = ACTIONS(342),
    [anon_sym_BANGpp_BANG] = ACTIONS(342),
    [anon_sym_BANGp_BANG] = ACTIONS(342),
    [anon_sym_BANGmp_BANG] = ACTIONS(342),
    [anon_sym_BANGmf_BANG] = ACTIONS(342),
    [anon_sym_BANGf_BANG] = ACTIONS(342),
    [anon_sym_BANGff_BANG] = ACTIONS(342),
    [anon_sym_BANGfff_BANG] = ACTIONS(342),
    [anon_sym_BANGffff_BANG] = ACTIONS(342),
    [anon_sym_BANGsfz_BANG] = ACTIONS(342),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(342),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(342),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(342),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(342),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(342),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(342),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(342),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(342),
    [anon_sym_BANGsegno_BANG] = ACTIONS(342),
    [anon_sym_BANGcoda_BANG] = ACTIONS(342),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(342),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(342),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(342),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(342),
    [anon_sym_BANGfine_BANG] = ACTIONS(342),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(342),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(342),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(342),
    [sym_parts_line] = ACTIONS(342),
    [sym_instruction] = ACTIONS(342),
    [sym_key] = ACTIONS(342),
    [sym_macros] = ACTIONS(342),
    [sym_meter] = ACTIONS(342),
    [sym_notes] = ACTIONS(342),
    [anon_sym_X_COLON] = ACTIONS(342),
    [sym_remark] = ACTIONS(342),
    [sym_rhythm_line] = ACTIONS(342),
    [anon_sym_s_COLON] = ACTIONS(342),
    [sym_tempo] = ACTIONS(342),
    [sym_tune_title] = ACTIONS(342),
    [sym_unit_note_length] = ACTIONS(342),
    [anon_sym_U_COLON] = ACTIONS(342),
    [sym_voice] = ACTIONS(342),
    [anon_sym_w_COLON] = ACTIONS(342),
    [sym_words_postbody] = ACTIONS(342),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym__NL] = ACTIONS(350),
    [anon_sym_BSLASH] = ACTIONS(348),
    [sym_BEAM_SEPARATOR] = ACTIONS(348),
    [sym_COMMENT] = ACTIONS(350),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(348),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(350),
    [sym_slur_open] = ACTIONS(350),
    [sym_slur_close] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(350),
    [sym_alteration] = ACTIONS(348),
    [sym_note_letter] = ACTIONS(348),
    [sym_rest] = ACTIONS(348),
    [anon_sym_Z] = ACTIONS(348),
    [anon_sym_X] = ACTIONS(350),
    [sym_rhythm] = ACTIONS(352),
    [aux_sym_grace_note_token1] = ACTIONS(348),
    [aux_sym_chord_symbol_token1] = ACTIONS(350),
    [sym_annotation] = ACTIONS(348),
    [sym_tuplet_marker] = ACTIONS(348),
    [sym_decoration_shorthand] = ACTIONS(350),
    [sym_bar_line] = ACTIONS(350),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(348),
    [sym_thin_double_bar_line] = ACTIONS(348),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(348),
    [sym_start_of_repeated_section] = ACTIONS(348),
    [sym_end_of_repeated_section] = ACTIONS(348),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(348),
    [anon_sym_BANGtrill_BANG] = ACTIONS(348),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(348),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(348),
    [anon_sym_BANGmordent_BANG] = ACTIONS(348),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(348),
    [anon_sym_BANGroll_BANG] = ACTIONS(348),
    [anon_sym_BANGturn_BANG] = ACTIONS(348),
    [anon_sym_BANGturnx_BANG] = ACTIONS(348),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(348),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(348),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(348),
    [anon_sym_BANG_GT_BANG] = ACTIONS(348),
    [anon_sym_BANGaccent_BANG] = ACTIONS(348),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(348),
    [anon_sym_BANGfermata_BANG] = ACTIONS(348),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(348),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(348),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(348),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(348),
    [anon_sym_BANGplus_BANG] = ACTIONS(348),
    [anon_sym_BANGsnap_BANG] = ACTIONS(348),
    [anon_sym_BANGslide_BANG] = ACTIONS(348),
    [anon_sym_BANGwedge_BANG] = ACTIONS(348),
    [anon_sym_BANGupbow_BANG] = ACTIONS(348),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(348),
    [anon_sym_BANGopen_BANG] = ACTIONS(348),
    [anon_sym_BANGthumb_BANG] = ACTIONS(348),
    [anon_sym_BANGbreath_BANG] = ACTIONS(348),
    [anon_sym_BANGpppp_BANG] = ACTIONS(348),
    [anon_sym_BANGppp_BANG] = ACTIONS(348),
    [anon_sym_BANGpp_BANG] = ACTIONS(348),
    [anon_sym_BANGp_BANG] = ACTIONS(348),
    [anon_sym_BANGmp_BANG] = ACTIONS(348),
    [anon_sym_BANGmf_BANG] = ACTIONS(348),
    [anon_sym_BANGf_BANG] = ACTIONS(348),
    [anon_sym_BANGff_BANG] = ACTIONS(348),
    [anon_sym_BANGfff_BANG] = ACTIONS(348),
    [anon_sym_BANGffff_BANG] = ACTIONS(348),
    [anon_sym_BANGsfz_BANG] = ACTIONS(348),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGsegno_BANG] = ACTIONS(348),
    [anon_sym_BANGcoda_BANG] = ACTIONS(348),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(348),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(348),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(348),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(348),
    [anon_sym_BANGfine_BANG] = ACTIONS(348),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(348),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(348),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(348),
    [sym_parts_line] = ACTIONS(348),
    [sym_instruction] = ACTIONS(348),
    [sym_key] = ACTIONS(348),
    [sym_macros] = ACTIONS(348),
    [sym_meter] = ACTIONS(348),
    [sym_notes] = ACTIONS(348),
    [anon_sym_X_COLON] = ACTIONS(348),
    [sym_remark] = ACTIONS(348),
    [sym_rhythm_line] = ACTIONS(348),
    [anon_sym_s_COLON] = ACTIONS(348),
    [sym_tempo] = ACTIONS(348),
    [sym_tune_title] = ACTIONS(348),
    [sym_unit_note_length] = ACTIONS(348),
    [anon_sym_U_COLON] = ACTIONS(348),
    [sym_voice] = ACTIONS(348),
    [anon_sym_w_COLON] = ACTIONS(348),
    [sym_words_postbody] = ACTIONS(348),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym__NL] = ACTIONS(289),
    [anon_sym_BSLASH] = ACTIONS(287),
    [anon_sym_DASH] = ACTIONS(287),
    [sym_COMMENT] = ACTIONS(289),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(287),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(289),
    [sym_slur_open] = ACTIONS(289),
    [sym_slur_close] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(289),
    [sym_alteration] = ACTIONS(287),
    [sym_note_letter] = ACTIONS(287),
    [sym_rest] = ACTIONS(287),
    [anon_sym_Z] = ACTIONS(287),
    [anon_sym_X] = ACTIONS(289),
    [aux_sym_grace_note_token1] = ACTIONS(287),
    [aux_sym_chord_symbol_token1] = ACTIONS(289),
    [sym_annotation] = ACTIONS(287),
    [sym_tuplet_marker] = ACTIONS(287),
    [sym_decoration_shorthand] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(287),
    [sym_bar_line] = ACTIONS(289),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(287),
    [sym_thin_double_bar_line] = ACTIONS(287),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(287),
    [sym_start_of_repeated_section] = ACTIONS(287),
    [sym_end_of_repeated_section] = ACTIONS(287),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(287),
    [anon_sym_BANGtrill_BANG] = ACTIONS(287),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(287),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(287),
    [anon_sym_BANGmordent_BANG] = ACTIONS(287),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(287),
    [anon_sym_BANGroll_BANG] = ACTIONS(287),
    [anon_sym_BANGturn_BANG] = ACTIONS(287),
    [anon_sym_BANGturnx_BANG] = ACTIONS(287),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(287),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(287),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(287),
    [anon_sym_BANG_GT_BANG] = ACTIONS(287),
    [anon_sym_BANGaccent_BANG] = ACTIONS(287),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(287),
    [anon_sym_BANGfermata_BANG] = ACTIONS(287),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(287),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(287),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(287),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(287),
    [anon_sym_BANGplus_BANG] = ACTIONS(287),
    [anon_sym_BANGsnap_BANG] = ACTIONS(287),
    [anon_sym_BANGslide_BANG] = ACTIONS(287),
    [anon_sym_BANGwedge_BANG] = ACTIONS(287),
    [anon_sym_BANGupbow_BANG] = ACTIONS(287),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(287),
    [anon_sym_BANGopen_BANG] = ACTIONS(287),
    [anon_sym_BANGthumb_BANG] = ACTIONS(287),
    [anon_sym_BANGbreath_BANG] = ACTIONS(287),
    [anon_sym_BANGpppp_BANG] = ACTIONS(287),
    [anon_sym_BANGppp_BANG] = ACTIONS(287),
    [anon_sym_BANGpp_BANG] = ACTIONS(287),
    [anon_sym_BANGp_BANG] = ACTIONS(287),
    [anon_sym_BANGmp_BANG] = ACTIONS(287),
    [anon_sym_BANGmf_BANG] = ACTIONS(287),
    [anon_sym_BANGf_BANG] = ACTIONS(287),
    [anon_sym_BANGff_BANG] = ACTIONS(287),
    [anon_sym_BANGfff_BANG] = ACTIONS(287),
    [anon_sym_BANGffff_BANG] = ACTIONS(287),
    [anon_sym_BANGsfz_BANG] = ACTIONS(287),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(287),
    [anon_sym_BANGsegno_BANG] = ACTIONS(287),
    [anon_sym_BANGcoda_BANG] = ACTIONS(287),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(287),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(287),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(287),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(287),
    [anon_sym_BANGfine_BANG] = ACTIONS(287),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(287),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(287),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(287),
    [sym_parts_line] = ACTIONS(287),
    [sym_instruction] = ACTIONS(287),
    [sym_key] = ACTIONS(287),
    [sym_macros] = ACTIONS(287),
    [sym_meter] = ACTIONS(287),
    [sym_notes] = ACTIONS(287),
    [anon_sym_X_COLON] = ACTIONS(287),
    [sym_remark] = ACTIONS(287),
    [sym_rhythm_line] = ACTIONS(287),
    [anon_sym_s_COLON] = ACTIONS(287),
    [sym_tempo] = ACTIONS(287),
    [sym_tune_title] = ACTIONS(287),
    [sym_unit_note_length] = ACTIONS(287),
    [anon_sym_U_COLON] = ACTIONS(287),
    [sym_voice] = ACTIONS(287),
    [anon_sym_w_COLON] = ACTIONS(287),
    [sym_words_postbody] = ACTIONS(287),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [sym__NL] = ACTIONS(356),
    [anon_sym_BSLASH] = ACTIONS(354),
    [sym_BEAM_SEPARATOR] = ACTIONS(354),
    [sym_COMMENT] = ACTIONS(356),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(354),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(356),
    [sym_slur_open] = ACTIONS(356),
    [sym_slur_close] = ACTIONS(354),
    [aux_sym_note_construct_token1] = ACTIONS(358),
    [anon_sym_LBRACK] = ACTIONS(356),
    [sym_alteration] = ACTIONS(354),
    [sym_note_letter] = ACTIONS(354),
    [sym_rest] = ACTIONS(354),
    [anon_sym_Z] = ACTIONS(354),
    [anon_sym_X] = ACTIONS(356),
    [aux_sym_grace_note_token1] = ACTIONS(354),
    [aux_sym_chord_symbol_token1] = ACTIONS(356),
    [sym_annotation] = ACTIONS(354),
    [sym_tuplet_marker] = ACTIONS(354),
    [sym_decoration_shorthand] = ACTIONS(356),
    [sym_bar_line] = ACTIONS(356),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(354),
    [sym_thin_double_bar_line] = ACTIONS(354),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(354),
    [sym_start_of_repeated_section] = ACTIONS(354),
    [sym_end_of_repeated_section] = ACTIONS(354),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(354),
    [anon_sym_BANGtrill_BANG] = ACTIONS(354),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(354),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(354),
    [anon_sym_BANGmordent_BANG] = ACTIONS(354),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(354),
    [anon_sym_BANGroll_BANG] = ACTIONS(354),
    [anon_sym_BANGturn_BANG] = ACTIONS(354),
    [anon_sym_BANGturnx_BANG] = ACTIONS(354),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(354),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(354),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(354),
    [anon_sym_BANG_GT_BANG] = ACTIONS(354),
    [anon_sym_BANGaccent_BANG] = ACTIONS(354),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(354),
    [anon_sym_BANGfermata_BANG] = ACTIONS(354),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(354),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(354),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(354),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(354),
    [anon_sym_BANGplus_BANG] = ACTIONS(354),
    [anon_sym_BANGsnap_BANG] = ACTIONS(354),
    [anon_sym_BANGslide_BANG] = ACTIONS(354),
    [anon_sym_BANGwedge_BANG] = ACTIONS(354),
    [anon_sym_BANGupbow_BANG] = ACTIONS(354),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(354),
    [anon_sym_BANGopen_BANG] = ACTIONS(354),
    [anon_sym_BANGthumb_BANG] = ACTIONS(354),
    [anon_sym_BANGbreath_BANG] = ACTIONS(354),
    [anon_sym_BANGpppp_BANG] = ACTIONS(354),
    [anon_sym_BANGppp_BANG] = ACTIONS(354),
    [anon_sym_BANGpp_BANG] = ACTIONS(354),
    [anon_sym_BANGp_BANG] = ACTIONS(354),
    [anon_sym_BANGmp_BANG] = ACTIONS(354),
    [anon_sym_BANGmf_BANG] = ACTIONS(354),
    [anon_sym_BANGf_BANG] = ACTIONS(354),
    [anon_sym_BANGff_BANG] = ACTIONS(354),
    [anon_sym_BANGfff_BANG] = ACTIONS(354),
    [anon_sym_BANGffff_BANG] = ACTIONS(354),
    [anon_sym_BANGsfz_BANG] = ACTIONS(354),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGsegno_BANG] = ACTIONS(354),
    [anon_sym_BANGcoda_BANG] = ACTIONS(354),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(354),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(354),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(354),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(354),
    [anon_sym_BANGfine_BANG] = ACTIONS(354),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(354),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(354),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(354),
    [sym_parts_line] = ACTIONS(354),
    [sym_instruction] = ACTIONS(354),
    [sym_key] = ACTIONS(354),
    [sym_macros] = ACTIONS(354),
    [sym_meter] = ACTIONS(354),
    [sym_notes] = ACTIONS(354),
    [anon_sym_X_COLON] = ACTIONS(354),
    [sym_remark] = ACTIONS(354),
    [sym_rhythm_line] = ACTIONS(354),
    [anon_sym_s_COLON] = ACTIONS(354),
    [sym_tempo] = ACTIONS(354),
    [sym_tune_title] = ACTIONS(354),
    [sym_unit_note_length] = ACTIONS(354),
    [anon_sym_U_COLON] = ACTIONS(354),
    [sym_voice] = ACTIONS(354),
    [anon_sym_w_COLON] = ACTIONS(354),
    [sym_words_postbody] = ACTIONS(354),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [sym__NL] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(360),
    [sym_BEAM_SEPARATOR] = ACTIONS(360),
    [sym_COMMENT] = ACTIONS(362),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(360),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(362),
    [sym_slur_open] = ACTIONS(362),
    [sym_slur_close] = ACTIONS(360),
    [aux_sym_note_construct_token1] = ACTIONS(364),
    [anon_sym_LBRACK] = ACTIONS(362),
    [sym_alteration] = ACTIONS(360),
    [sym_note_letter] = ACTIONS(360),
    [sym_rest] = ACTIONS(360),
    [anon_sym_Z] = ACTIONS(360),
    [anon_sym_X] = ACTIONS(362),
    [aux_sym_grace_note_token1] = ACTIONS(360),
    [aux_sym_chord_symbol_token1] = ACTIONS(362),
    [sym_annotation] = ACTIONS(360),
    [sym_tuplet_marker] = ACTIONS(360),
    [sym_decoration_shorthand] = ACTIONS(362),
    [sym_bar_line] = ACTIONS(362),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(360),
    [sym_thin_double_bar_line] = ACTIONS(360),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(360),
    [sym_start_of_repeated_section] = ACTIONS(360),
    [sym_end_of_repeated_section] = ACTIONS(360),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(360),
    [anon_sym_BANGtrill_BANG] = ACTIONS(360),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(360),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(360),
    [anon_sym_BANGmordent_BANG] = ACTIONS(360),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(360),
    [anon_sym_BANGroll_BANG] = ACTIONS(360),
    [anon_sym_BANGturn_BANG] = ACTIONS(360),
    [anon_sym_BANGturnx_BANG] = ACTIONS(360),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(360),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(360),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(360),
    [anon_sym_BANG_GT_BANG] = ACTIONS(360),
    [anon_sym_BANGaccent_BANG] = ACTIONS(360),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(360),
    [anon_sym_BANGfermata_BANG] = ACTIONS(360),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(360),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(360),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(360),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(360),
    [anon_sym_BANGplus_BANG] = ACTIONS(360),
    [anon_sym_BANGsnap_BANG] = ACTIONS(360),
    [anon_sym_BANGslide_BANG] = ACTIONS(360),
    [anon_sym_BANGwedge_BANG] = ACTIONS(360),
    [anon_sym_BANGupbow_BANG] = ACTIONS(360),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(360),
    [anon_sym_BANGopen_BANG] = ACTIONS(360),
    [anon_sym_BANGthumb_BANG] = ACTIONS(360),
    [anon_sym_BANGbreath_BANG] = ACTIONS(360),
    [anon_sym_BANGpppp_BANG] = ACTIONS(360),
    [anon_sym_BANGppp_BANG] = ACTIONS(360),
    [anon_sym_BANGpp_BANG] = ACTIONS(360),
    [anon_sym_BANGp_BANG] = ACTIONS(360),
    [anon_sym_BANGmp_BANG] = ACTIONS(360),
    [anon_sym_BANGmf_BANG] = ACTIONS(360),
    [anon_sym_BANGf_BANG] = ACTIONS(360),
    [anon_sym_BANGff_BANG] = ACTIONS(360),
    [anon_sym_BANGfff_BANG] = ACTIONS(360),
    [anon_sym_BANGffff_BANG] = ACTIONS(360),
    [anon_sym_BANGsfz_BANG] = ACTIONS(360),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGsegno_BANG] = ACTIONS(360),
    [anon_sym_BANGcoda_BANG] = ACTIONS(360),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(360),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(360),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(360),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(360),
    [anon_sym_BANGfine_BANG] = ACTIONS(360),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(360),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(360),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(360),
    [sym_parts_line] = ACTIONS(360),
    [sym_instruction] = ACTIONS(360),
    [sym_key] = ACTIONS(360),
    [sym_macros] = ACTIONS(360),
    [sym_meter] = ACTIONS(360),
    [sym_notes] = ACTIONS(360),
    [anon_sym_X_COLON] = ACTIONS(360),
    [sym_remark] = ACTIONS(360),
    [sym_rhythm_line] = ACTIONS(360),
    [anon_sym_s_COLON] = ACTIONS(360),
    [sym_tempo] = ACTIONS(360),
    [sym_tune_title] = ACTIONS(360),
    [sym_unit_note_length] = ACTIONS(360),
    [anon_sym_U_COLON] = ACTIONS(360),
    [sym_voice] = ACTIONS(360),
    [anon_sym_w_COLON] = ACTIONS(360),
    [sym_words_postbody] = ACTIONS(360),
  },
  [37] = {
    [sym_nth_ending_number] = STATE(52),
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym__NL] = ACTIONS(265),
    [anon_sym_BSLASH] = ACTIONS(263),
    [sym_COMMENT] = ACTIONS(265),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(263),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(267),
    [sym_slur_open] = ACTIONS(265),
    [sym_slur_close] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(269),
    [sym_alteration] = ACTIONS(263),
    [sym_note_letter] = ACTIONS(263),
    [sym_rest] = ACTIONS(263),
    [anon_sym_Z] = ACTIONS(263),
    [anon_sym_X] = ACTIONS(265),
    [aux_sym_grace_note_token1] = ACTIONS(263),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(263),
    [sym_tuplet_marker] = ACTIONS(263),
    [sym_decoration_shorthand] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(263),
    [sym_thin_double_bar_line] = ACTIONS(263),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(263),
    [sym_start_of_repeated_section] = ACTIONS(263),
    [sym_end_of_repeated_section] = ACTIONS(263),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(263),
    [anon_sym_BANGtrill_BANG] = ACTIONS(263),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(263),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(263),
    [anon_sym_BANGmordent_BANG] = ACTIONS(263),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(263),
    [anon_sym_BANGroll_BANG] = ACTIONS(263),
    [anon_sym_BANGturn_BANG] = ACTIONS(263),
    [anon_sym_BANGturnx_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(263),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_BANG] = ACTIONS(263),
    [anon_sym_BANGaccent_BANG] = ACTIONS(263),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(263),
    [anon_sym_BANGfermata_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(263),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(263),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(263),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(263),
    [anon_sym_BANGplus_BANG] = ACTIONS(263),
    [anon_sym_BANGsnap_BANG] = ACTIONS(263),
    [anon_sym_BANGslide_BANG] = ACTIONS(263),
    [anon_sym_BANGwedge_BANG] = ACTIONS(263),
    [anon_sym_BANGupbow_BANG] = ACTIONS(263),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(263),
    [anon_sym_BANGopen_BANG] = ACTIONS(263),
    [anon_sym_BANGthumb_BANG] = ACTIONS(263),
    [anon_sym_BANGbreath_BANG] = ACTIONS(263),
    [anon_sym_BANGpppp_BANG] = ACTIONS(263),
    [anon_sym_BANGppp_BANG] = ACTIONS(263),
    [anon_sym_BANGpp_BANG] = ACTIONS(263),
    [anon_sym_BANGp_BANG] = ACTIONS(263),
    [anon_sym_BANGmp_BANG] = ACTIONS(263),
    [anon_sym_BANGmf_BANG] = ACTIONS(263),
    [anon_sym_BANGf_BANG] = ACTIONS(263),
    [anon_sym_BANGff_BANG] = ACTIONS(263),
    [anon_sym_BANGfff_BANG] = ACTIONS(263),
    [anon_sym_BANGffff_BANG] = ACTIONS(263),
    [anon_sym_BANGsfz_BANG] = ACTIONS(263),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGsegno_BANG] = ACTIONS(263),
    [anon_sym_BANGcoda_BANG] = ACTIONS(263),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(263),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(263),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(263),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(263),
    [anon_sym_BANGfine_BANG] = ACTIONS(263),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(263),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(263),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(263),
    [sym_parts_line] = ACTIONS(263),
    [sym_instruction] = ACTIONS(263),
    [sym_key] = ACTIONS(263),
    [sym_macros] = ACTIONS(263),
    [sym_meter] = ACTIONS(263),
    [sym_notes] = ACTIONS(263),
    [anon_sym_X_COLON] = ACTIONS(263),
    [sym_remark] = ACTIONS(263),
    [sym_rhythm_line] = ACTIONS(263),
    [anon_sym_s_COLON] = ACTIONS(263),
    [sym_tempo] = ACTIONS(263),
    [sym_tune_title] = ACTIONS(263),
    [sym_unit_note_length] = ACTIONS(263),
    [anon_sym_U_COLON] = ACTIONS(263),
    [sym_voice] = ACTIONS(263),
    [anon_sym_w_COLON] = ACTIONS(263),
    [sym_words_postbody] = ACTIONS(263),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(302),
    [sym__NL] = ACTIONS(304),
    [anon_sym_BSLASH] = ACTIONS(302),
    [sym_BEAM_SEPARATOR] = ACTIONS(302),
    [sym_COMMENT] = ACTIONS(304),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(302),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(304),
    [sym_slur_open] = ACTIONS(304),
    [sym_slur_close] = ACTIONS(302),
    [anon_sym_LBRACK] = ACTIONS(304),
    [sym_alteration] = ACTIONS(302),
    [sym_note_letter] = ACTIONS(302),
    [sym_rest] = ACTIONS(302),
    [anon_sym_Z] = ACTIONS(302),
    [anon_sym_X] = ACTIONS(304),
    [aux_sym_grace_note_token1] = ACTIONS(302),
    [aux_sym_chord_symbol_token1] = ACTIONS(304),
    [sym_annotation] = ACTIONS(302),
    [sym_tuplet_marker] = ACTIONS(302),
    [sym_decoration_shorthand] = ACTIONS(304),
    [sym_bar_line] = ACTIONS(304),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(302),
    [sym_thin_double_bar_line] = ACTIONS(302),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(302),
    [sym_start_of_repeated_section] = ACTIONS(302),
    [sym_end_of_repeated_section] = ACTIONS(302),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(302),
    [anon_sym_BANGtrill_BANG] = ACTIONS(302),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(302),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(302),
    [anon_sym_BANGmordent_BANG] = ACTIONS(302),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(302),
    [anon_sym_BANGroll_BANG] = ACTIONS(302),
    [anon_sym_BANGturn_BANG] = ACTIONS(302),
    [anon_sym_BANGturnx_BANG] = ACTIONS(302),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(302),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(302),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(302),
    [anon_sym_BANG_GT_BANG] = ACTIONS(302),
    [anon_sym_BANGaccent_BANG] = ACTIONS(302),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(302),
    [anon_sym_BANGfermata_BANG] = ACTIONS(302),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(302),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(302),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(302),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(302),
    [anon_sym_BANGplus_BANG] = ACTIONS(302),
    [anon_sym_BANGsnap_BANG] = ACTIONS(302),
    [anon_sym_BANGslide_BANG] = ACTIONS(302),
    [anon_sym_BANGwedge_BANG] = ACTIONS(302),
    [anon_sym_BANGupbow_BANG] = ACTIONS(302),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(302),
    [anon_sym_BANGopen_BANG] = ACTIONS(302),
    [anon_sym_BANGthumb_BANG] = ACTIONS(302),
    [anon_sym_BANGbreath_BANG] = ACTIONS(302),
    [anon_sym_BANGpppp_BANG] = ACTIONS(302),
    [anon_sym_BANGppp_BANG] = ACTIONS(302),
    [anon_sym_BANGpp_BANG] = ACTIONS(302),
    [anon_sym_BANGp_BANG] = ACTIONS(302),
    [anon_sym_BANGmp_BANG] = ACTIONS(302),
    [anon_sym_BANGmf_BANG] = ACTIONS(302),
    [anon_sym_BANGf_BANG] = ACTIONS(302),
    [anon_sym_BANGff_BANG] = ACTIONS(302),
    [anon_sym_BANGfff_BANG] = ACTIONS(302),
    [anon_sym_BANGffff_BANG] = ACTIONS(302),
    [anon_sym_BANGsfz_BANG] = ACTIONS(302),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(302),
    [anon_sym_BANGsegno_BANG] = ACTIONS(302),
    [anon_sym_BANGcoda_BANG] = ACTIONS(302),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(302),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(302),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(302),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(302),
    [anon_sym_BANGfine_BANG] = ACTIONS(302),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(302),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(302),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(302),
    [sym_parts_line] = ACTIONS(302),
    [sym_instruction] = ACTIONS(302),
    [sym_key] = ACTIONS(302),
    [sym_macros] = ACTIONS(302),
    [sym_meter] = ACTIONS(302),
    [sym_notes] = ACTIONS(302),
    [anon_sym_X_COLON] = ACTIONS(302),
    [sym_remark] = ACTIONS(302),
    [sym_rhythm_line] = ACTIONS(302),
    [anon_sym_s_COLON] = ACTIONS(302),
    [sym_tempo] = ACTIONS(302),
    [sym_tune_title] = ACTIONS(302),
    [sym_unit_note_length] = ACTIONS(302),
    [anon_sym_U_COLON] = ACTIONS(302),
    [sym_voice] = ACTIONS(302),
    [anon_sym_w_COLON] = ACTIONS(302),
    [sym_words_postbody] = ACTIONS(302),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(360),
    [sym__NL] = ACTIONS(362),
    [anon_sym_BSLASH] = ACTIONS(360),
    [sym_BEAM_SEPARATOR] = ACTIONS(360),
    [sym_COMMENT] = ACTIONS(362),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(360),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(362),
    [sym_slur_open] = ACTIONS(362),
    [sym_slur_close] = ACTIONS(360),
    [anon_sym_LBRACK] = ACTIONS(362),
    [sym_alteration] = ACTIONS(360),
    [sym_note_letter] = ACTIONS(360),
    [sym_rest] = ACTIONS(360),
    [anon_sym_Z] = ACTIONS(360),
    [anon_sym_X] = ACTIONS(362),
    [aux_sym_grace_note_token1] = ACTIONS(360),
    [aux_sym_chord_symbol_token1] = ACTIONS(362),
    [sym_annotation] = ACTIONS(360),
    [sym_tuplet_marker] = ACTIONS(360),
    [sym_decoration_shorthand] = ACTIONS(362),
    [sym_bar_line] = ACTIONS(362),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(360),
    [sym_thin_double_bar_line] = ACTIONS(360),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(360),
    [sym_start_of_repeated_section] = ACTIONS(360),
    [sym_end_of_repeated_section] = ACTIONS(360),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(360),
    [anon_sym_BANGtrill_BANG] = ACTIONS(360),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(360),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(360),
    [anon_sym_BANGmordent_BANG] = ACTIONS(360),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(360),
    [anon_sym_BANGroll_BANG] = ACTIONS(360),
    [anon_sym_BANGturn_BANG] = ACTIONS(360),
    [anon_sym_BANGturnx_BANG] = ACTIONS(360),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(360),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(360),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(360),
    [anon_sym_BANG_GT_BANG] = ACTIONS(360),
    [anon_sym_BANGaccent_BANG] = ACTIONS(360),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(360),
    [anon_sym_BANGfermata_BANG] = ACTIONS(360),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(360),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(360),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(360),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(360),
    [anon_sym_BANGplus_BANG] = ACTIONS(360),
    [anon_sym_BANGsnap_BANG] = ACTIONS(360),
    [anon_sym_BANGslide_BANG] = ACTIONS(360),
    [anon_sym_BANGwedge_BANG] = ACTIONS(360),
    [anon_sym_BANGupbow_BANG] = ACTIONS(360),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(360),
    [anon_sym_BANGopen_BANG] = ACTIONS(360),
    [anon_sym_BANGthumb_BANG] = ACTIONS(360),
    [anon_sym_BANGbreath_BANG] = ACTIONS(360),
    [anon_sym_BANGpppp_BANG] = ACTIONS(360),
    [anon_sym_BANGppp_BANG] = ACTIONS(360),
    [anon_sym_BANGpp_BANG] = ACTIONS(360),
    [anon_sym_BANGp_BANG] = ACTIONS(360),
    [anon_sym_BANGmp_BANG] = ACTIONS(360),
    [anon_sym_BANGmf_BANG] = ACTIONS(360),
    [anon_sym_BANGf_BANG] = ACTIONS(360),
    [anon_sym_BANGff_BANG] = ACTIONS(360),
    [anon_sym_BANGfff_BANG] = ACTIONS(360),
    [anon_sym_BANGffff_BANG] = ACTIONS(360),
    [anon_sym_BANGsfz_BANG] = ACTIONS(360),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(360),
    [anon_sym_BANGsegno_BANG] = ACTIONS(360),
    [anon_sym_BANGcoda_BANG] = ACTIONS(360),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(360),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(360),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(360),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(360),
    [anon_sym_BANGfine_BANG] = ACTIONS(360),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(360),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(360),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(360),
    [sym_parts_line] = ACTIONS(360),
    [sym_instruction] = ACTIONS(360),
    [sym_key] = ACTIONS(360),
    [sym_macros] = ACTIONS(360),
    [sym_meter] = ACTIONS(360),
    [sym_notes] = ACTIONS(360),
    [anon_sym_X_COLON] = ACTIONS(360),
    [sym_remark] = ACTIONS(360),
    [sym_rhythm_line] = ACTIONS(360),
    [anon_sym_s_COLON] = ACTIONS(360),
    [sym_tempo] = ACTIONS(360),
    [sym_tune_title] = ACTIONS(360),
    [sym_unit_note_length] = ACTIONS(360),
    [anon_sym_U_COLON] = ACTIONS(360),
    [sym_voice] = ACTIONS(360),
    [anon_sym_w_COLON] = ACTIONS(360),
    [sym_words_postbody] = ACTIONS(360),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(336),
    [sym__NL] = ACTIONS(338),
    [anon_sym_BSLASH] = ACTIONS(336),
    [sym_BEAM_SEPARATOR] = ACTIONS(336),
    [sym_COMMENT] = ACTIONS(338),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(336),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(338),
    [sym_slur_open] = ACTIONS(338),
    [sym_slur_close] = ACTIONS(336),
    [anon_sym_LBRACK] = ACTIONS(338),
    [sym_alteration] = ACTIONS(336),
    [sym_note_letter] = ACTIONS(336),
    [sym_rest] = ACTIONS(336),
    [anon_sym_Z] = ACTIONS(336),
    [anon_sym_X] = ACTIONS(338),
    [aux_sym_grace_note_token1] = ACTIONS(336),
    [aux_sym_chord_symbol_token1] = ACTIONS(338),
    [sym_annotation] = ACTIONS(336),
    [sym_tuplet_marker] = ACTIONS(336),
    [sym_decoration_shorthand] = ACTIONS(338),
    [sym_bar_line] = ACTIONS(338),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(336),
    [sym_thin_double_bar_line] = ACTIONS(336),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(336),
    [sym_start_of_repeated_section] = ACTIONS(336),
    [sym_end_of_repeated_section] = ACTIONS(336),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(336),
    [anon_sym_BANGtrill_BANG] = ACTIONS(336),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(336),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(336),
    [anon_sym_BANGmordent_BANG] = ACTIONS(336),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(336),
    [anon_sym_BANGroll_BANG] = ACTIONS(336),
    [anon_sym_BANGturn_BANG] = ACTIONS(336),
    [anon_sym_BANGturnx_BANG] = ACTIONS(336),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(336),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(336),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(336),
    [anon_sym_BANG_GT_BANG] = ACTIONS(336),
    [anon_sym_BANGaccent_BANG] = ACTIONS(336),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(336),
    [anon_sym_BANGfermata_BANG] = ACTIONS(336),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(336),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(336),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(336),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(336),
    [anon_sym_BANGplus_BANG] = ACTIONS(336),
    [anon_sym_BANGsnap_BANG] = ACTIONS(336),
    [anon_sym_BANGslide_BANG] = ACTIONS(336),
    [anon_sym_BANGwedge_BANG] = ACTIONS(336),
    [anon_sym_BANGupbow_BANG] = ACTIONS(336),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(336),
    [anon_sym_BANGopen_BANG] = ACTIONS(336),
    [anon_sym_BANGthumb_BANG] = ACTIONS(336),
    [anon_sym_BANGbreath_BANG] = ACTIONS(336),
    [anon_sym_BANGpppp_BANG] = ACTIONS(336),
    [anon_sym_BANGppp_BANG] = ACTIONS(336),
    [anon_sym_BANGpp_BANG] = ACTIONS(336),
    [anon_sym_BANGp_BANG] = ACTIONS(336),
    [anon_sym_BANGmp_BANG] = ACTIONS(336),
    [anon_sym_BANGmf_BANG] = ACTIONS(336),
    [anon_sym_BANGf_BANG] = ACTIONS(336),
    [anon_sym_BANGff_BANG] = ACTIONS(336),
    [anon_sym_BANGfff_BANG] = ACTIONS(336),
    [anon_sym_BANGffff_BANG] = ACTIONS(336),
    [anon_sym_BANGsfz_BANG] = ACTIONS(336),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(336),
    [anon_sym_BANGsegno_BANG] = ACTIONS(336),
    [anon_sym_BANGcoda_BANG] = ACTIONS(336),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(336),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(336),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(336),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(336),
    [anon_sym_BANGfine_BANG] = ACTIONS(336),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(336),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(336),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(336),
    [sym_parts_line] = ACTIONS(336),
    [sym_instruction] = ACTIONS(336),
    [sym_key] = ACTIONS(336),
    [sym_macros] = ACTIONS(336),
    [sym_meter] = ACTIONS(336),
    [sym_notes] = ACTIONS(336),
    [anon_sym_X_COLON] = ACTIONS(336),
    [sym_remark] = ACTIONS(336),
    [sym_rhythm_line] = ACTIONS(336),
    [anon_sym_s_COLON] = ACTIONS(336),
    [sym_tempo] = ACTIONS(336),
    [sym_tune_title] = ACTIONS(336),
    [sym_unit_note_length] = ACTIONS(336),
    [anon_sym_U_COLON] = ACTIONS(336),
    [sym_voice] = ACTIONS(336),
    [anon_sym_w_COLON] = ACTIONS(336),
    [sym_words_postbody] = ACTIONS(336),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(193),
    [sym__NL] = ACTIONS(195),
    [anon_sym_BSLASH] = ACTIONS(193),
    [sym_BEAM_SEPARATOR] = ACTIONS(193),
    [sym_COMMENT] = ACTIONS(195),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(193),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(195),
    [sym_slur_open] = ACTIONS(195),
    [sym_slur_close] = ACTIONS(193),
    [anon_sym_LBRACK] = ACTIONS(195),
    [sym_alteration] = ACTIONS(193),
    [sym_note_letter] = ACTIONS(193),
    [sym_rest] = ACTIONS(193),
    [anon_sym_Z] = ACTIONS(193),
    [anon_sym_X] = ACTIONS(195),
    [aux_sym_grace_note_token1] = ACTIONS(193),
    [aux_sym_chord_symbol_token1] = ACTIONS(195),
    [sym_annotation] = ACTIONS(193),
    [sym_tuplet_marker] = ACTIONS(193),
    [sym_decoration_shorthand] = ACTIONS(195),
    [sym_bar_line] = ACTIONS(195),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(193),
    [sym_thin_double_bar_line] = ACTIONS(193),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(193),
    [sym_start_of_repeated_section] = ACTIONS(193),
    [sym_end_of_repeated_section] = ACTIONS(193),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(193),
    [anon_sym_BANGtrill_BANG] = ACTIONS(193),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(193),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(193),
    [anon_sym_BANGmordent_BANG] = ACTIONS(193),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(193),
    [anon_sym_BANGroll_BANG] = ACTIONS(193),
    [anon_sym_BANGturn_BANG] = ACTIONS(193),
    [anon_sym_BANGturnx_BANG] = ACTIONS(193),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(193),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(193),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(193),
    [anon_sym_BANG_GT_BANG] = ACTIONS(193),
    [anon_sym_BANGaccent_BANG] = ACTIONS(193),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(193),
    [anon_sym_BANGfermata_BANG] = ACTIONS(193),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(193),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(193),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(193),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(193),
    [anon_sym_BANGplus_BANG] = ACTIONS(193),
    [anon_sym_BANGsnap_BANG] = ACTIONS(193),
    [anon_sym_BANGslide_BANG] = ACTIONS(193),
    [anon_sym_BANGwedge_BANG] = ACTIONS(193),
    [anon_sym_BANGupbow_BANG] = ACTIONS(193),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(193),
    [anon_sym_BANGopen_BANG] = ACTIONS(193),
    [anon_sym_BANGthumb_BANG] = ACTIONS(193),
    [anon_sym_BANGbreath_BANG] = ACTIONS(193),
    [anon_sym_BANGpppp_BANG] = ACTIONS(193),
    [anon_sym_BANGppp_BANG] = ACTIONS(193),
    [anon_sym_BANGpp_BANG] = ACTIONS(193),
    [anon_sym_BANGp_BANG] = ACTIONS(193),
    [anon_sym_BANGmp_BANG] = ACTIONS(193),
    [anon_sym_BANGmf_BANG] = ACTIONS(193),
    [anon_sym_BANGf_BANG] = ACTIONS(193),
    [anon_sym_BANGff_BANG] = ACTIONS(193),
    [anon_sym_BANGfff_BANG] = ACTIONS(193),
    [anon_sym_BANGffff_BANG] = ACTIONS(193),
    [anon_sym_BANGsfz_BANG] = ACTIONS(193),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(193),
    [anon_sym_BANGsegno_BANG] = ACTIONS(193),
    [anon_sym_BANGcoda_BANG] = ACTIONS(193),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(193),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(193),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(193),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(193),
    [anon_sym_BANGfine_BANG] = ACTIONS(193),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(193),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(193),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(193),
    [sym_parts_line] = ACTIONS(193),
    [sym_instruction] = ACTIONS(193),
    [sym_key] = ACTIONS(193),
    [sym_macros] = ACTIONS(193),
    [sym_meter] = ACTIONS(193),
    [sym_notes] = ACTIONS(193),
    [anon_sym_X_COLON] = ACTIONS(193),
    [sym_remark] = ACTIONS(193),
    [sym_rhythm_line] = ACTIONS(193),
    [anon_sym_s_COLON] = ACTIONS(193),
    [sym_tempo] = ACTIONS(193),
    [sym_tune_title] = ACTIONS(193),
    [sym_unit_note_length] = ACTIONS(193),
    [anon_sym_U_COLON] = ACTIONS(193),
    [sym_voice] = ACTIONS(193),
    [anon_sym_w_COLON] = ACTIONS(193),
    [sym_words_postbody] = ACTIONS(193),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(354),
    [sym__NL] = ACTIONS(356),
    [anon_sym_BSLASH] = ACTIONS(354),
    [sym_BEAM_SEPARATOR] = ACTIONS(354),
    [sym_COMMENT] = ACTIONS(356),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(354),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(356),
    [sym_slur_open] = ACTIONS(356),
    [sym_slur_close] = ACTIONS(354),
    [anon_sym_LBRACK] = ACTIONS(356),
    [sym_alteration] = ACTIONS(354),
    [sym_note_letter] = ACTIONS(354),
    [sym_rest] = ACTIONS(354),
    [anon_sym_Z] = ACTIONS(354),
    [anon_sym_X] = ACTIONS(356),
    [aux_sym_grace_note_token1] = ACTIONS(354),
    [aux_sym_chord_symbol_token1] = ACTIONS(356),
    [sym_annotation] = ACTIONS(354),
    [sym_tuplet_marker] = ACTIONS(354),
    [sym_decoration_shorthand] = ACTIONS(356),
    [sym_bar_line] = ACTIONS(356),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(354),
    [sym_thin_double_bar_line] = ACTIONS(354),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(354),
    [sym_start_of_repeated_section] = ACTIONS(354),
    [sym_end_of_repeated_section] = ACTIONS(354),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(354),
    [anon_sym_BANGtrill_BANG] = ACTIONS(354),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(354),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(354),
    [anon_sym_BANGmordent_BANG] = ACTIONS(354),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(354),
    [anon_sym_BANGroll_BANG] = ACTIONS(354),
    [anon_sym_BANGturn_BANG] = ACTIONS(354),
    [anon_sym_BANGturnx_BANG] = ACTIONS(354),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(354),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(354),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(354),
    [anon_sym_BANG_GT_BANG] = ACTIONS(354),
    [anon_sym_BANGaccent_BANG] = ACTIONS(354),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(354),
    [anon_sym_BANGfermata_BANG] = ACTIONS(354),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(354),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(354),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(354),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(354),
    [anon_sym_BANGplus_BANG] = ACTIONS(354),
    [anon_sym_BANGsnap_BANG] = ACTIONS(354),
    [anon_sym_BANGslide_BANG] = ACTIONS(354),
    [anon_sym_BANGwedge_BANG] = ACTIONS(354),
    [anon_sym_BANGupbow_BANG] = ACTIONS(354),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(354),
    [anon_sym_BANGopen_BANG] = ACTIONS(354),
    [anon_sym_BANGthumb_BANG] = ACTIONS(354),
    [anon_sym_BANGbreath_BANG] = ACTIONS(354),
    [anon_sym_BANGpppp_BANG] = ACTIONS(354),
    [anon_sym_BANGppp_BANG] = ACTIONS(354),
    [anon_sym_BANGpp_BANG] = ACTIONS(354),
    [anon_sym_BANGp_BANG] = ACTIONS(354),
    [anon_sym_BANGmp_BANG] = ACTIONS(354),
    [anon_sym_BANGmf_BANG] = ACTIONS(354),
    [anon_sym_BANGf_BANG] = ACTIONS(354),
    [anon_sym_BANGff_BANG] = ACTIONS(354),
    [anon_sym_BANGfff_BANG] = ACTIONS(354),
    [anon_sym_BANGffff_BANG] = ACTIONS(354),
    [anon_sym_BANGsfz_BANG] = ACTIONS(354),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(354),
    [anon_sym_BANGsegno_BANG] = ACTIONS(354),
    [anon_sym_BANGcoda_BANG] = ACTIONS(354),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(354),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(354),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(354),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(354),
    [anon_sym_BANGfine_BANG] = ACTIONS(354),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(354),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(354),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(354),
    [sym_parts_line] = ACTIONS(354),
    [sym_instruction] = ACTIONS(354),
    [sym_key] = ACTIONS(354),
    [sym_macros] = ACTIONS(354),
    [sym_meter] = ACTIONS(354),
    [sym_notes] = ACTIONS(354),
    [anon_sym_X_COLON] = ACTIONS(354),
    [sym_remark] = ACTIONS(354),
    [sym_rhythm_line] = ACTIONS(354),
    [anon_sym_s_COLON] = ACTIONS(354),
    [sym_tempo] = ACTIONS(354),
    [sym_tune_title] = ACTIONS(354),
    [sym_unit_note_length] = ACTIONS(354),
    [anon_sym_U_COLON] = ACTIONS(354),
    [sym_voice] = ACTIONS(354),
    [anon_sym_w_COLON] = ACTIONS(354),
    [sym_words_postbody] = ACTIONS(354),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(320),
    [sym__NL] = ACTIONS(322),
    [anon_sym_BSLASH] = ACTIONS(320),
    [sym_BEAM_SEPARATOR] = ACTIONS(320),
    [sym_COMMENT] = ACTIONS(322),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(320),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(322),
    [sym_slur_open] = ACTIONS(322),
    [sym_slur_close] = ACTIONS(320),
    [anon_sym_LBRACK] = ACTIONS(322),
    [sym_alteration] = ACTIONS(320),
    [sym_note_letter] = ACTIONS(320),
    [sym_rest] = ACTIONS(320),
    [anon_sym_Z] = ACTIONS(320),
    [anon_sym_X] = ACTIONS(322),
    [aux_sym_grace_note_token1] = ACTIONS(320),
    [aux_sym_chord_symbol_token1] = ACTIONS(322),
    [sym_annotation] = ACTIONS(320),
    [sym_tuplet_marker] = ACTIONS(320),
    [sym_decoration_shorthand] = ACTIONS(322),
    [sym_bar_line] = ACTIONS(322),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(320),
    [sym_thin_double_bar_line] = ACTIONS(320),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(320),
    [sym_start_of_repeated_section] = ACTIONS(320),
    [sym_end_of_repeated_section] = ACTIONS(320),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(320),
    [anon_sym_BANGtrill_BANG] = ACTIONS(320),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(320),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(320),
    [anon_sym_BANGmordent_BANG] = ACTIONS(320),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(320),
    [anon_sym_BANGroll_BANG] = ACTIONS(320),
    [anon_sym_BANGturn_BANG] = ACTIONS(320),
    [anon_sym_BANGturnx_BANG] = ACTIONS(320),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(320),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(320),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(320),
    [anon_sym_BANG_GT_BANG] = ACTIONS(320),
    [anon_sym_BANGaccent_BANG] = ACTIONS(320),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(320),
    [anon_sym_BANGfermata_BANG] = ACTIONS(320),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(320),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(320),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(320),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(320),
    [anon_sym_BANGplus_BANG] = ACTIONS(320),
    [anon_sym_BANGsnap_BANG] = ACTIONS(320),
    [anon_sym_BANGslide_BANG] = ACTIONS(320),
    [anon_sym_BANGwedge_BANG] = ACTIONS(320),
    [anon_sym_BANGupbow_BANG] = ACTIONS(320),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(320),
    [anon_sym_BANGopen_BANG] = ACTIONS(320),
    [anon_sym_BANGthumb_BANG] = ACTIONS(320),
    [anon_sym_BANGbreath_BANG] = ACTIONS(320),
    [anon_sym_BANGpppp_BANG] = ACTIONS(320),
    [anon_sym_BANGppp_BANG] = ACTIONS(320),
    [anon_sym_BANGpp_BANG] = ACTIONS(320),
    [anon_sym_BANGp_BANG] = ACTIONS(320),
    [anon_sym_BANGmp_BANG] = ACTIONS(320),
    [anon_sym_BANGmf_BANG] = ACTIONS(320),
    [anon_sym_BANGf_BANG] = ACTIONS(320),
    [anon_sym_BANGff_BANG] = ACTIONS(320),
    [anon_sym_BANGfff_BANG] = ACTIONS(320),
    [anon_sym_BANGffff_BANG] = ACTIONS(320),
    [anon_sym_BANGsfz_BANG] = ACTIONS(320),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(320),
    [anon_sym_BANGsegno_BANG] = ACTIONS(320),
    [anon_sym_BANGcoda_BANG] = ACTIONS(320),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(320),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(320),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(320),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(320),
    [anon_sym_BANGfine_BANG] = ACTIONS(320),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(320),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(320),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(320),
    [sym_parts_line] = ACTIONS(320),
    [sym_instruction] = ACTIONS(320),
    [sym_key] = ACTIONS(320),
    [sym_macros] = ACTIONS(320),
    [sym_meter] = ACTIONS(320),
    [sym_notes] = ACTIONS(320),
    [anon_sym_X_COLON] = ACTIONS(320),
    [sym_remark] = ACTIONS(320),
    [sym_rhythm_line] = ACTIONS(320),
    [anon_sym_s_COLON] = ACTIONS(320),
    [sym_tempo] = ACTIONS(320),
    [sym_tune_title] = ACTIONS(320),
    [sym_unit_note_length] = ACTIONS(320),
    [anon_sym_U_COLON] = ACTIONS(320),
    [sym_voice] = ACTIONS(320),
    [anon_sym_w_COLON] = ACTIONS(320),
    [sym_words_postbody] = ACTIONS(320),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(348),
    [sym__NL] = ACTIONS(350),
    [anon_sym_BSLASH] = ACTIONS(348),
    [sym_BEAM_SEPARATOR] = ACTIONS(348),
    [sym_COMMENT] = ACTIONS(350),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(348),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(350),
    [sym_slur_open] = ACTIONS(350),
    [sym_slur_close] = ACTIONS(348),
    [anon_sym_LBRACK] = ACTIONS(350),
    [sym_alteration] = ACTIONS(348),
    [sym_note_letter] = ACTIONS(348),
    [sym_rest] = ACTIONS(348),
    [anon_sym_Z] = ACTIONS(348),
    [anon_sym_X] = ACTIONS(350),
    [aux_sym_grace_note_token1] = ACTIONS(348),
    [aux_sym_chord_symbol_token1] = ACTIONS(350),
    [sym_annotation] = ACTIONS(348),
    [sym_tuplet_marker] = ACTIONS(348),
    [sym_decoration_shorthand] = ACTIONS(350),
    [sym_bar_line] = ACTIONS(350),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(348),
    [sym_thin_double_bar_line] = ACTIONS(348),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(348),
    [sym_start_of_repeated_section] = ACTIONS(348),
    [sym_end_of_repeated_section] = ACTIONS(348),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(348),
    [anon_sym_BANGtrill_BANG] = ACTIONS(348),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(348),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(348),
    [anon_sym_BANGmordent_BANG] = ACTIONS(348),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(348),
    [anon_sym_BANGroll_BANG] = ACTIONS(348),
    [anon_sym_BANGturn_BANG] = ACTIONS(348),
    [anon_sym_BANGturnx_BANG] = ACTIONS(348),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(348),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(348),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(348),
    [anon_sym_BANG_GT_BANG] = ACTIONS(348),
    [anon_sym_BANGaccent_BANG] = ACTIONS(348),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(348),
    [anon_sym_BANGfermata_BANG] = ACTIONS(348),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(348),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(348),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(348),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(348),
    [anon_sym_BANGplus_BANG] = ACTIONS(348),
    [anon_sym_BANGsnap_BANG] = ACTIONS(348),
    [anon_sym_BANGslide_BANG] = ACTIONS(348),
    [anon_sym_BANGwedge_BANG] = ACTIONS(348),
    [anon_sym_BANGupbow_BANG] = ACTIONS(348),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(348),
    [anon_sym_BANGopen_BANG] = ACTIONS(348),
    [anon_sym_BANGthumb_BANG] = ACTIONS(348),
    [anon_sym_BANGbreath_BANG] = ACTIONS(348),
    [anon_sym_BANGpppp_BANG] = ACTIONS(348),
    [anon_sym_BANGppp_BANG] = ACTIONS(348),
    [anon_sym_BANGpp_BANG] = ACTIONS(348),
    [anon_sym_BANGp_BANG] = ACTIONS(348),
    [anon_sym_BANGmp_BANG] = ACTIONS(348),
    [anon_sym_BANGmf_BANG] = ACTIONS(348),
    [anon_sym_BANGf_BANG] = ACTIONS(348),
    [anon_sym_BANGff_BANG] = ACTIONS(348),
    [anon_sym_BANGfff_BANG] = ACTIONS(348),
    [anon_sym_BANGffff_BANG] = ACTIONS(348),
    [anon_sym_BANGsfz_BANG] = ACTIONS(348),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(348),
    [anon_sym_BANGsegno_BANG] = ACTIONS(348),
    [anon_sym_BANGcoda_BANG] = ACTIONS(348),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(348),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(348),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(348),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(348),
    [anon_sym_BANGfine_BANG] = ACTIONS(348),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(348),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(348),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(348),
    [sym_parts_line] = ACTIONS(348),
    [sym_instruction] = ACTIONS(348),
    [sym_key] = ACTIONS(348),
    [sym_macros] = ACTIONS(348),
    [sym_meter] = ACTIONS(348),
    [sym_notes] = ACTIONS(348),
    [anon_sym_X_COLON] = ACTIONS(348),
    [sym_remark] = ACTIONS(348),
    [sym_rhythm_line] = ACTIONS(348),
    [anon_sym_s_COLON] = ACTIONS(348),
    [sym_tempo] = ACTIONS(348),
    [sym_tune_title] = ACTIONS(348),
    [sym_unit_note_length] = ACTIONS(348),
    [anon_sym_U_COLON] = ACTIONS(348),
    [sym_voice] = ACTIONS(348),
    [anon_sym_w_COLON] = ACTIONS(348),
    [sym_words_postbody] = ACTIONS(348),
  },
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(366),
    [sym__NL] = ACTIONS(368),
    [anon_sym_BSLASH] = ACTIONS(366),
    [sym_BEAM_SEPARATOR] = ACTIONS(366),
    [sym_COMMENT] = ACTIONS(368),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(366),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(368),
    [sym_slur_open] = ACTIONS(368),
    [sym_slur_close] = ACTIONS(366),
    [anon_sym_LBRACK] = ACTIONS(368),
    [sym_alteration] = ACTIONS(366),
    [sym_note_letter] = ACTIONS(366),
    [sym_rest] = ACTIONS(366),
    [anon_sym_Z] = ACTIONS(366),
    [anon_sym_X] = ACTIONS(368),
    [aux_sym_grace_note_token1] = ACTIONS(366),
    [aux_sym_chord_symbol_token1] = ACTIONS(368),
    [sym_annotation] = ACTIONS(366),
    [sym_tuplet_marker] = ACTIONS(366),
    [sym_decoration_shorthand] = ACTIONS(368),
    [sym_bar_line] = ACTIONS(368),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(366),
    [sym_thin_double_bar_line] = ACTIONS(366),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(366),
    [sym_start_of_repeated_section] = ACTIONS(366),
    [sym_end_of_repeated_section] = ACTIONS(366),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(366),
    [anon_sym_BANGtrill_BANG] = ACTIONS(366),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(366),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(366),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(366),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(366),
    [anon_sym_BANGmordent_BANG] = ACTIONS(366),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(366),
    [anon_sym_BANGroll_BANG] = ACTIONS(366),
    [anon_sym_BANGturn_BANG] = ACTIONS(366),
    [anon_sym_BANGturnx_BANG] = ACTIONS(366),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(366),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(366),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(366),
    [anon_sym_BANG_GT_BANG] = ACTIONS(366),
    [anon_sym_BANGaccent_BANG] = ACTIONS(366),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(366),
    [anon_sym_BANGfermata_BANG] = ACTIONS(366),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(366),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(366),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(366),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(366),
    [anon_sym_BANGplus_BANG] = ACTIONS(366),
    [anon_sym_BANGsnap_BANG] = ACTIONS(366),
    [anon_sym_BANGslide_BANG] = ACTIONS(366),
    [anon_sym_BANGwedge_BANG] = ACTIONS(366),
    [anon_sym_BANGupbow_BANG] = ACTIONS(366),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(366),
    [anon_sym_BANGopen_BANG] = ACTIONS(366),
    [anon_sym_BANGthumb_BANG] = ACTIONS(366),
    [anon_sym_BANGbreath_BANG] = ACTIONS(366),
    [anon_sym_BANGpppp_BANG] = ACTIONS(366),
    [anon_sym_BANGppp_BANG] = ACTIONS(366),
    [anon_sym_BANGpp_BANG] = ACTIONS(366),
    [anon_sym_BANGp_BANG] = ACTIONS(366),
    [anon_sym_BANGmp_BANG] = ACTIONS(366),
    [anon_sym_BANGmf_BANG] = ACTIONS(366),
    [anon_sym_BANGf_BANG] = ACTIONS(366),
    [anon_sym_BANGff_BANG] = ACTIONS(366),
    [anon_sym_BANGfff_BANG] = ACTIONS(366),
    [anon_sym_BANGffff_BANG] = ACTIONS(366),
    [anon_sym_BANGsfz_BANG] = ACTIONS(366),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(366),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(366),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(366),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(366),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(366),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(366),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(366),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(366),
    [anon_sym_BANGsegno_BANG] = ACTIONS(366),
    [anon_sym_BANGcoda_BANG] = ACTIONS(366),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(366),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(366),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(366),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(366),
    [anon_sym_BANGfine_BANG] = ACTIONS(366),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(366),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(366),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(366),
    [sym_parts_line] = ACTIONS(366),
    [sym_instruction] = ACTIONS(366),
    [sym_key] = ACTIONS(366),
    [sym_macros] = ACTIONS(366),
    [sym_meter] = ACTIONS(366),
    [sym_notes] = ACTIONS(366),
    [anon_sym_X_COLON] = ACTIONS(366),
    [sym_remark] = ACTIONS(366),
    [sym_rhythm_line] = ACTIONS(366),
    [anon_sym_s_COLON] = ACTIONS(366),
    [sym_tempo] = ACTIONS(366),
    [sym_tune_title] = ACTIONS(366),
    [sym_unit_note_length] = ACTIONS(366),
    [anon_sym_U_COLON] = ACTIONS(366),
    [sym_voice] = ACTIONS(366),
    [anon_sym_w_COLON] = ACTIONS(366),
    [sym_words_postbody] = ACTIONS(366),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(370),
    [sym__NL] = ACTIONS(372),
    [anon_sym_BSLASH] = ACTIONS(370),
    [sym_BEAM_SEPARATOR] = ACTIONS(370),
    [sym_COMMENT] = ACTIONS(372),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(370),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(372),
    [sym_slur_open] = ACTIONS(372),
    [sym_slur_close] = ACTIONS(370),
    [anon_sym_LBRACK] = ACTIONS(372),
    [sym_alteration] = ACTIONS(370),
    [sym_note_letter] = ACTIONS(370),
    [sym_rest] = ACTIONS(370),
    [anon_sym_Z] = ACTIONS(370),
    [anon_sym_X] = ACTIONS(372),
    [aux_sym_grace_note_token1] = ACTIONS(370),
    [aux_sym_chord_symbol_token1] = ACTIONS(372),
    [sym_annotation] = ACTIONS(370),
    [sym_tuplet_marker] = ACTIONS(370),
    [sym_decoration_shorthand] = ACTIONS(372),
    [sym_bar_line] = ACTIONS(372),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(370),
    [sym_thin_double_bar_line] = ACTIONS(370),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(370),
    [sym_start_of_repeated_section] = ACTIONS(370),
    [sym_end_of_repeated_section] = ACTIONS(370),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(370),
    [anon_sym_BANGtrill_BANG] = ACTIONS(370),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(370),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(370),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(370),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(370),
    [anon_sym_BANGmordent_BANG] = ACTIONS(370),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(370),
    [anon_sym_BANGroll_BANG] = ACTIONS(370),
    [anon_sym_BANGturn_BANG] = ACTIONS(370),
    [anon_sym_BANGturnx_BANG] = ACTIONS(370),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(370),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(370),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(370),
    [anon_sym_BANG_GT_BANG] = ACTIONS(370),
    [anon_sym_BANGaccent_BANG] = ACTIONS(370),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(370),
    [anon_sym_BANGfermata_BANG] = ACTIONS(370),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(370),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(370),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(370),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(370),
    [anon_sym_BANGplus_BANG] = ACTIONS(370),
    [anon_sym_BANGsnap_BANG] = ACTIONS(370),
    [anon_sym_BANGslide_BANG] = ACTIONS(370),
    [anon_sym_BANGwedge_BANG] = ACTIONS(370),
    [anon_sym_BANGupbow_BANG] = ACTIONS(370),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(370),
    [anon_sym_BANGopen_BANG] = ACTIONS(370),
    [anon_sym_BANGthumb_BANG] = ACTIONS(370),
    [anon_sym_BANGbreath_BANG] = ACTIONS(370),
    [anon_sym_BANGpppp_BANG] = ACTIONS(370),
    [anon_sym_BANGppp_BANG] = ACTIONS(370),
    [anon_sym_BANGpp_BANG] = ACTIONS(370),
    [anon_sym_BANGp_BANG] = ACTIONS(370),
    [anon_sym_BANGmp_BANG] = ACTIONS(370),
    [anon_sym_BANGmf_BANG] = ACTIONS(370),
    [anon_sym_BANGf_BANG] = ACTIONS(370),
    [anon_sym_BANGff_BANG] = ACTIONS(370),
    [anon_sym_BANGfff_BANG] = ACTIONS(370),
    [anon_sym_BANGffff_BANG] = ACTIONS(370),
    [anon_sym_BANGsfz_BANG] = ACTIONS(370),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(370),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(370),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(370),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(370),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(370),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(370),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(370),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(370),
    [anon_sym_BANGsegno_BANG] = ACTIONS(370),
    [anon_sym_BANGcoda_BANG] = ACTIONS(370),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(370),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(370),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(370),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(370),
    [anon_sym_BANGfine_BANG] = ACTIONS(370),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(370),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(370),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(370),
    [sym_parts_line] = ACTIONS(370),
    [sym_instruction] = ACTIONS(370),
    [sym_key] = ACTIONS(370),
    [sym_macros] = ACTIONS(370),
    [sym_meter] = ACTIONS(370),
    [sym_notes] = ACTIONS(370),
    [anon_sym_X_COLON] = ACTIONS(370),
    [sym_remark] = ACTIONS(370),
    [sym_rhythm_line] = ACTIONS(370),
    [anon_sym_s_COLON] = ACTIONS(370),
    [sym_tempo] = ACTIONS(370),
    [sym_tune_title] = ACTIONS(370),
    [sym_unit_note_length] = ACTIONS(370),
    [anon_sym_U_COLON] = ACTIONS(370),
    [sym_voice] = ACTIONS(370),
    [anon_sym_w_COLON] = ACTIONS(370),
    [sym_words_postbody] = ACTIONS(370),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(308),
    [sym__NL] = ACTIONS(310),
    [anon_sym_BSLASH] = ACTIONS(308),
    [sym_BEAM_SEPARATOR] = ACTIONS(308),
    [sym_COMMENT] = ACTIONS(310),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(308),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(310),
    [sym_slur_open] = ACTIONS(310),
    [sym_slur_close] = ACTIONS(308),
    [anon_sym_LBRACK] = ACTIONS(310),
    [sym_alteration] = ACTIONS(308),
    [sym_note_letter] = ACTIONS(308),
    [sym_rest] = ACTIONS(308),
    [anon_sym_Z] = ACTIONS(308),
    [anon_sym_X] = ACTIONS(310),
    [aux_sym_grace_note_token1] = ACTIONS(308),
    [aux_sym_chord_symbol_token1] = ACTIONS(310),
    [sym_annotation] = ACTIONS(308),
    [sym_tuplet_marker] = ACTIONS(308),
    [sym_decoration_shorthand] = ACTIONS(310),
    [sym_bar_line] = ACTIONS(310),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(308),
    [sym_thin_double_bar_line] = ACTIONS(308),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(308),
    [sym_start_of_repeated_section] = ACTIONS(308),
    [sym_end_of_repeated_section] = ACTIONS(308),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(308),
    [anon_sym_BANGtrill_BANG] = ACTIONS(308),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(308),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(308),
    [anon_sym_BANGmordent_BANG] = ACTIONS(308),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(308),
    [anon_sym_BANGroll_BANG] = ACTIONS(308),
    [anon_sym_BANGturn_BANG] = ACTIONS(308),
    [anon_sym_BANGturnx_BANG] = ACTIONS(308),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(308),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(308),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(308),
    [anon_sym_BANG_GT_BANG] = ACTIONS(308),
    [anon_sym_BANGaccent_BANG] = ACTIONS(308),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(308),
    [anon_sym_BANGfermata_BANG] = ACTIONS(308),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(308),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(308),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(308),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(308),
    [anon_sym_BANGplus_BANG] = ACTIONS(308),
    [anon_sym_BANGsnap_BANG] = ACTIONS(308),
    [anon_sym_BANGslide_BANG] = ACTIONS(308),
    [anon_sym_BANGwedge_BANG] = ACTIONS(308),
    [anon_sym_BANGupbow_BANG] = ACTIONS(308),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(308),
    [anon_sym_BANGopen_BANG] = ACTIONS(308),
    [anon_sym_BANGthumb_BANG] = ACTIONS(308),
    [anon_sym_BANGbreath_BANG] = ACTIONS(308),
    [anon_sym_BANGpppp_BANG] = ACTIONS(308),
    [anon_sym_BANGppp_BANG] = ACTIONS(308),
    [anon_sym_BANGpp_BANG] = ACTIONS(308),
    [anon_sym_BANGp_BANG] = ACTIONS(308),
    [anon_sym_BANGmp_BANG] = ACTIONS(308),
    [anon_sym_BANGmf_BANG] = ACTIONS(308),
    [anon_sym_BANGf_BANG] = ACTIONS(308),
    [anon_sym_BANGff_BANG] = ACTIONS(308),
    [anon_sym_BANGfff_BANG] = ACTIONS(308),
    [anon_sym_BANGffff_BANG] = ACTIONS(308),
    [anon_sym_BANGsfz_BANG] = ACTIONS(308),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(308),
    [anon_sym_BANGsegno_BANG] = ACTIONS(308),
    [anon_sym_BANGcoda_BANG] = ACTIONS(308),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(308),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(308),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(308),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(308),
    [anon_sym_BANGfine_BANG] = ACTIONS(308),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(308),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(308),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(308),
    [sym_parts_line] = ACTIONS(308),
    [sym_instruction] = ACTIONS(308),
    [sym_key] = ACTIONS(308),
    [sym_macros] = ACTIONS(308),
    [sym_meter] = ACTIONS(308),
    [sym_notes] = ACTIONS(308),
    [anon_sym_X_COLON] = ACTIONS(308),
    [sym_remark] = ACTIONS(308),
    [sym_rhythm_line] = ACTIONS(308),
    [anon_sym_s_COLON] = ACTIONS(308),
    [sym_tempo] = ACTIONS(308),
    [sym_tune_title] = ACTIONS(308),
    [sym_unit_note_length] = ACTIONS(308),
    [anon_sym_U_COLON] = ACTIONS(308),
    [sym_voice] = ACTIONS(308),
    [anon_sym_w_COLON] = ACTIONS(308),
    [sym_words_postbody] = ACTIONS(308),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(326),
    [sym__NL] = ACTIONS(328),
    [anon_sym_BSLASH] = ACTIONS(326),
    [sym_BEAM_SEPARATOR] = ACTIONS(326),
    [sym_COMMENT] = ACTIONS(328),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(326),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(328),
    [sym_slur_open] = ACTIONS(328),
    [sym_slur_close] = ACTIONS(326),
    [anon_sym_LBRACK] = ACTIONS(328),
    [sym_alteration] = ACTIONS(326),
    [sym_note_letter] = ACTIONS(326),
    [sym_rest] = ACTIONS(326),
    [anon_sym_Z] = ACTIONS(326),
    [anon_sym_X] = ACTIONS(328),
    [aux_sym_grace_note_token1] = ACTIONS(326),
    [aux_sym_chord_symbol_token1] = ACTIONS(328),
    [sym_annotation] = ACTIONS(326),
    [sym_tuplet_marker] = ACTIONS(326),
    [sym_decoration_shorthand] = ACTIONS(328),
    [sym_bar_line] = ACTIONS(328),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(326),
    [sym_thin_double_bar_line] = ACTIONS(326),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(326),
    [sym_start_of_repeated_section] = ACTIONS(326),
    [sym_end_of_repeated_section] = ACTIONS(326),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(326),
    [anon_sym_BANGtrill_BANG] = ACTIONS(326),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(326),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(326),
    [anon_sym_BANGmordent_BANG] = ACTIONS(326),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(326),
    [anon_sym_BANGroll_BANG] = ACTIONS(326),
    [anon_sym_BANGturn_BANG] = ACTIONS(326),
    [anon_sym_BANGturnx_BANG] = ACTIONS(326),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(326),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(326),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(326),
    [anon_sym_BANG_GT_BANG] = ACTIONS(326),
    [anon_sym_BANGaccent_BANG] = ACTIONS(326),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(326),
    [anon_sym_BANGfermata_BANG] = ACTIONS(326),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(326),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(326),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(326),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(326),
    [anon_sym_BANGplus_BANG] = ACTIONS(326),
    [anon_sym_BANGsnap_BANG] = ACTIONS(326),
    [anon_sym_BANGslide_BANG] = ACTIONS(326),
    [anon_sym_BANGwedge_BANG] = ACTIONS(326),
    [anon_sym_BANGupbow_BANG] = ACTIONS(326),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(326),
    [anon_sym_BANGopen_BANG] = ACTIONS(326),
    [anon_sym_BANGthumb_BANG] = ACTIONS(326),
    [anon_sym_BANGbreath_BANG] = ACTIONS(326),
    [anon_sym_BANGpppp_BANG] = ACTIONS(326),
    [anon_sym_BANGppp_BANG] = ACTIONS(326),
    [anon_sym_BANGpp_BANG] = ACTIONS(326),
    [anon_sym_BANGp_BANG] = ACTIONS(326),
    [anon_sym_BANGmp_BANG] = ACTIONS(326),
    [anon_sym_BANGmf_BANG] = ACTIONS(326),
    [anon_sym_BANGf_BANG] = ACTIONS(326),
    [anon_sym_BANGff_BANG] = ACTIONS(326),
    [anon_sym_BANGfff_BANG] = ACTIONS(326),
    [anon_sym_BANGffff_BANG] = ACTIONS(326),
    [anon_sym_BANGsfz_BANG] = ACTIONS(326),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(326),
    [anon_sym_BANGsegno_BANG] = ACTIONS(326),
    [anon_sym_BANGcoda_BANG] = ACTIONS(326),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(326),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(326),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(326),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(326),
    [anon_sym_BANGfine_BANG] = ACTIONS(326),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(326),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(326),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(326),
    [sym_parts_line] = ACTIONS(326),
    [sym_instruction] = ACTIONS(326),
    [sym_key] = ACTIONS(326),
    [sym_macros] = ACTIONS(326),
    [sym_meter] = ACTIONS(326),
    [sym_notes] = ACTIONS(326),
    [anon_sym_X_COLON] = ACTIONS(326),
    [sym_remark] = ACTIONS(326),
    [sym_rhythm_line] = ACTIONS(326),
    [anon_sym_s_COLON] = ACTIONS(326),
    [sym_tempo] = ACTIONS(326),
    [sym_tune_title] = ACTIONS(326),
    [sym_unit_note_length] = ACTIONS(326),
    [anon_sym_U_COLON] = ACTIONS(326),
    [sym_voice] = ACTIONS(326),
    [anon_sym_w_COLON] = ACTIONS(326),
    [sym_words_postbody] = ACTIONS(326),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(374),
    [sym__NL] = ACTIONS(376),
    [anon_sym_BSLASH] = ACTIONS(374),
    [sym_COMMENT] = ACTIONS(376),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(374),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(376),
    [sym_slur_open] = ACTIONS(376),
    [sym_slur_close] = ACTIONS(374),
    [anon_sym_LBRACK] = ACTIONS(376),
    [sym_alteration] = ACTIONS(374),
    [sym_note_letter] = ACTIONS(374),
    [sym_rest] = ACTIONS(374),
    [anon_sym_Z] = ACTIONS(374),
    [anon_sym_X] = ACTIONS(376),
    [aux_sym_grace_note_token1] = ACTIONS(374),
    [aux_sym_chord_symbol_token1] = ACTIONS(376),
    [sym_annotation] = ACTIONS(374),
    [sym_tuplet_marker] = ACTIONS(374),
    [sym_decoration_shorthand] = ACTIONS(376),
    [sym_bar_line] = ACTIONS(376),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(374),
    [sym_thin_double_bar_line] = ACTIONS(374),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(374),
    [sym_start_of_repeated_section] = ACTIONS(374),
    [sym_end_of_repeated_section] = ACTIONS(374),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(374),
    [anon_sym_BANGtrill_BANG] = ACTIONS(374),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(374),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(374),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(374),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(374),
    [anon_sym_BANGmordent_BANG] = ACTIONS(374),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(374),
    [anon_sym_BANGroll_BANG] = ACTIONS(374),
    [anon_sym_BANGturn_BANG] = ACTIONS(374),
    [anon_sym_BANGturnx_BANG] = ACTIONS(374),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(374),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(374),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(374),
    [anon_sym_BANG_GT_BANG] = ACTIONS(374),
    [anon_sym_BANGaccent_BANG] = ACTIONS(374),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(374),
    [anon_sym_BANGfermata_BANG] = ACTIONS(374),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(374),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(374),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(374),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(374),
    [anon_sym_BANGplus_BANG] = ACTIONS(374),
    [anon_sym_BANGsnap_BANG] = ACTIONS(374),
    [anon_sym_BANGslide_BANG] = ACTIONS(374),
    [anon_sym_BANGwedge_BANG] = ACTIONS(374),
    [anon_sym_BANGupbow_BANG] = ACTIONS(374),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(374),
    [anon_sym_BANGopen_BANG] = ACTIONS(374),
    [anon_sym_BANGthumb_BANG] = ACTIONS(374),
    [anon_sym_BANGbreath_BANG] = ACTIONS(374),
    [anon_sym_BANGpppp_BANG] = ACTIONS(374),
    [anon_sym_BANGppp_BANG] = ACTIONS(374),
    [anon_sym_BANGpp_BANG] = ACTIONS(374),
    [anon_sym_BANGp_BANG] = ACTIONS(374),
    [anon_sym_BANGmp_BANG] = ACTIONS(374),
    [anon_sym_BANGmf_BANG] = ACTIONS(374),
    [anon_sym_BANGf_BANG] = ACTIONS(374),
    [anon_sym_BANGff_BANG] = ACTIONS(374),
    [anon_sym_BANGfff_BANG] = ACTIONS(374),
    [anon_sym_BANGffff_BANG] = ACTIONS(374),
    [anon_sym_BANGsfz_BANG] = ACTIONS(374),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(374),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(374),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(374),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(374),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(374),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(374),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(374),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(374),
    [anon_sym_BANGsegno_BANG] = ACTIONS(374),
    [anon_sym_BANGcoda_BANG] = ACTIONS(374),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(374),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(374),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(374),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(374),
    [anon_sym_BANGfine_BANG] = ACTIONS(374),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(374),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(374),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(374),
    [sym_parts_line] = ACTIONS(374),
    [sym_instruction] = ACTIONS(374),
    [sym_key] = ACTIONS(374),
    [sym_macros] = ACTIONS(374),
    [sym_meter] = ACTIONS(374),
    [sym_notes] = ACTIONS(374),
    [anon_sym_X_COLON] = ACTIONS(374),
    [sym_remark] = ACTIONS(374),
    [sym_rhythm_line] = ACTIONS(374),
    [anon_sym_s_COLON] = ACTIONS(374),
    [sym_tempo] = ACTIONS(374),
    [sym_tune_title] = ACTIONS(374),
    [sym_unit_note_length] = ACTIONS(374),
    [anon_sym_U_COLON] = ACTIONS(374),
    [sym_voice] = ACTIONS(374),
    [anon_sym_w_COLON] = ACTIONS(374),
    [sym_words_postbody] = ACTIONS(374),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(378),
    [sym__NL] = ACTIONS(380),
    [anon_sym_BSLASH] = ACTIONS(378),
    [sym_COMMENT] = ACTIONS(380),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(378),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(380),
    [sym_slur_open] = ACTIONS(380),
    [sym_slur_close] = ACTIONS(378),
    [anon_sym_LBRACK] = ACTIONS(380),
    [sym_alteration] = ACTIONS(378),
    [sym_note_letter] = ACTIONS(378),
    [sym_rest] = ACTIONS(378),
    [anon_sym_Z] = ACTIONS(378),
    [anon_sym_X] = ACTIONS(380),
    [aux_sym_grace_note_token1] = ACTIONS(378),
    [aux_sym_chord_symbol_token1] = ACTIONS(380),
    [sym_annotation] = ACTIONS(378),
    [sym_tuplet_marker] = ACTIONS(378),
    [sym_decoration_shorthand] = ACTIONS(380),
    [sym_bar_line] = ACTIONS(380),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(378),
    [sym_thin_double_bar_line] = ACTIONS(378),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(378),
    [sym_start_of_repeated_section] = ACTIONS(378),
    [sym_end_of_repeated_section] = ACTIONS(378),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(378),
    [anon_sym_BANGtrill_BANG] = ACTIONS(378),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(378),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(378),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(378),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(378),
    [anon_sym_BANGmordent_BANG] = ACTIONS(378),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(378),
    [anon_sym_BANGroll_BANG] = ACTIONS(378),
    [anon_sym_BANGturn_BANG] = ACTIONS(378),
    [anon_sym_BANGturnx_BANG] = ACTIONS(378),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(378),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(378),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(378),
    [anon_sym_BANG_GT_BANG] = ACTIONS(378),
    [anon_sym_BANGaccent_BANG] = ACTIONS(378),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(378),
    [anon_sym_BANGfermata_BANG] = ACTIONS(378),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(378),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(378),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(378),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(378),
    [anon_sym_BANGplus_BANG] = ACTIONS(378),
    [anon_sym_BANGsnap_BANG] = ACTIONS(378),
    [anon_sym_BANGslide_BANG] = ACTIONS(378),
    [anon_sym_BANGwedge_BANG] = ACTIONS(378),
    [anon_sym_BANGupbow_BANG] = ACTIONS(378),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(378),
    [anon_sym_BANGopen_BANG] = ACTIONS(378),
    [anon_sym_BANGthumb_BANG] = ACTIONS(378),
    [anon_sym_BANGbreath_BANG] = ACTIONS(378),
    [anon_sym_BANGpppp_BANG] = ACTIONS(378),
    [anon_sym_BANGppp_BANG] = ACTIONS(378),
    [anon_sym_BANGpp_BANG] = ACTIONS(378),
    [anon_sym_BANGp_BANG] = ACTIONS(378),
    [anon_sym_BANGmp_BANG] = ACTIONS(378),
    [anon_sym_BANGmf_BANG] = ACTIONS(378),
    [anon_sym_BANGf_BANG] = ACTIONS(378),
    [anon_sym_BANGff_BANG] = ACTIONS(378),
    [anon_sym_BANGfff_BANG] = ACTIONS(378),
    [anon_sym_BANGffff_BANG] = ACTIONS(378),
    [anon_sym_BANGsfz_BANG] = ACTIONS(378),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(378),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(378),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(378),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(378),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(378),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(378),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(378),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(378),
    [anon_sym_BANGsegno_BANG] = ACTIONS(378),
    [anon_sym_BANGcoda_BANG] = ACTIONS(378),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(378),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(378),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(378),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(378),
    [anon_sym_BANGfine_BANG] = ACTIONS(378),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(378),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(378),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(378),
    [sym_parts_line] = ACTIONS(378),
    [sym_instruction] = ACTIONS(378),
    [sym_key] = ACTIONS(378),
    [sym_macros] = ACTIONS(378),
    [sym_meter] = ACTIONS(378),
    [sym_notes] = ACTIONS(378),
    [anon_sym_X_COLON] = ACTIONS(378),
    [sym_remark] = ACTIONS(378),
    [sym_rhythm_line] = ACTIONS(378),
    [anon_sym_s_COLON] = ACTIONS(378),
    [sym_tempo] = ACTIONS(378),
    [sym_tune_title] = ACTIONS(378),
    [sym_unit_note_length] = ACTIONS(378),
    [anon_sym_U_COLON] = ACTIONS(378),
    [sym_voice] = ACTIONS(378),
    [anon_sym_w_COLON] = ACTIONS(378),
    [sym_words_postbody] = ACTIONS(378),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym__NL] = ACTIONS(265),
    [anon_sym_BSLASH] = ACTIONS(263),
    [sym_COMMENT] = ACTIONS(265),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(263),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(265),
    [sym_slur_open] = ACTIONS(265),
    [sym_slur_close] = ACTIONS(263),
    [anon_sym_LBRACK] = ACTIONS(265),
    [sym_alteration] = ACTIONS(263),
    [sym_note_letter] = ACTIONS(263),
    [sym_rest] = ACTIONS(263),
    [anon_sym_Z] = ACTIONS(263),
    [anon_sym_X] = ACTIONS(265),
    [aux_sym_grace_note_token1] = ACTIONS(263),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(263),
    [sym_tuplet_marker] = ACTIONS(263),
    [sym_decoration_shorthand] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(263),
    [sym_thin_double_bar_line] = ACTIONS(263),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(263),
    [sym_start_of_repeated_section] = ACTIONS(263),
    [sym_end_of_repeated_section] = ACTIONS(263),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(263),
    [anon_sym_BANGtrill_BANG] = ACTIONS(263),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(263),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(263),
    [anon_sym_BANGmordent_BANG] = ACTIONS(263),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(263),
    [anon_sym_BANGroll_BANG] = ACTIONS(263),
    [anon_sym_BANGturn_BANG] = ACTIONS(263),
    [anon_sym_BANGturnx_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(263),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_BANG] = ACTIONS(263),
    [anon_sym_BANGaccent_BANG] = ACTIONS(263),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(263),
    [anon_sym_BANGfermata_BANG] = ACTIONS(263),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(263),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(263),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(263),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(263),
    [anon_sym_BANGplus_BANG] = ACTIONS(263),
    [anon_sym_BANGsnap_BANG] = ACTIONS(263),
    [anon_sym_BANGslide_BANG] = ACTIONS(263),
    [anon_sym_BANGwedge_BANG] = ACTIONS(263),
    [anon_sym_BANGupbow_BANG] = ACTIONS(263),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(263),
    [anon_sym_BANGopen_BANG] = ACTIONS(263),
    [anon_sym_BANGthumb_BANG] = ACTIONS(263),
    [anon_sym_BANGbreath_BANG] = ACTIONS(263),
    [anon_sym_BANGpppp_BANG] = ACTIONS(263),
    [anon_sym_BANGppp_BANG] = ACTIONS(263),
    [anon_sym_BANGpp_BANG] = ACTIONS(263),
    [anon_sym_BANGp_BANG] = ACTIONS(263),
    [anon_sym_BANGmp_BANG] = ACTIONS(263),
    [anon_sym_BANGmf_BANG] = ACTIONS(263),
    [anon_sym_BANGf_BANG] = ACTIONS(263),
    [anon_sym_BANGff_BANG] = ACTIONS(263),
    [anon_sym_BANGfff_BANG] = ACTIONS(263),
    [anon_sym_BANGffff_BANG] = ACTIONS(263),
    [anon_sym_BANGsfz_BANG] = ACTIONS(263),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(263),
    [anon_sym_BANGsegno_BANG] = ACTIONS(263),
    [anon_sym_BANGcoda_BANG] = ACTIONS(263),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(263),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(263),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(263),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(263),
    [anon_sym_BANGfine_BANG] = ACTIONS(263),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(263),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(263),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(263),
    [sym_parts_line] = ACTIONS(263),
    [sym_instruction] = ACTIONS(263),
    [sym_key] = ACTIONS(263),
    [sym_macros] = ACTIONS(263),
    [sym_meter] = ACTIONS(263),
    [sym_notes] = ACTIONS(263),
    [anon_sym_X_COLON] = ACTIONS(263),
    [sym_remark] = ACTIONS(263),
    [sym_rhythm_line] = ACTIONS(263),
    [anon_sym_s_COLON] = ACTIONS(263),
    [sym_tempo] = ACTIONS(263),
    [sym_tune_title] = ACTIONS(263),
    [sym_unit_note_length] = ACTIONS(263),
    [anon_sym_U_COLON] = ACTIONS(263),
    [sym_voice] = ACTIONS(263),
    [anon_sym_w_COLON] = ACTIONS(263),
    [sym_words_postbody] = ACTIONS(263),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(382),
    [sym__NL] = ACTIONS(384),
    [anon_sym_BSLASH] = ACTIONS(382),
    [sym_COMMENT] = ACTIONS(384),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(382),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(384),
    [sym_slur_open] = ACTIONS(384),
    [sym_slur_close] = ACTIONS(382),
    [anon_sym_LBRACK] = ACTIONS(384),
    [sym_alteration] = ACTIONS(382),
    [sym_note_letter] = ACTIONS(382),
    [sym_rest] = ACTIONS(382),
    [anon_sym_Z] = ACTIONS(382),
    [anon_sym_X] = ACTIONS(384),
    [aux_sym_grace_note_token1] = ACTIONS(382),
    [aux_sym_chord_symbol_token1] = ACTIONS(384),
    [sym_annotation] = ACTIONS(382),
    [sym_tuplet_marker] = ACTIONS(382),
    [sym_decoration_shorthand] = ACTIONS(384),
    [sym_bar_line] = ACTIONS(384),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(382),
    [sym_thin_double_bar_line] = ACTIONS(382),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(382),
    [sym_start_of_repeated_section] = ACTIONS(382),
    [sym_end_of_repeated_section] = ACTIONS(382),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(382),
    [anon_sym_BANGtrill_BANG] = ACTIONS(382),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(382),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(382),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(382),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(382),
    [anon_sym_BANGmordent_BANG] = ACTIONS(382),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(382),
    [anon_sym_BANGroll_BANG] = ACTIONS(382),
    [anon_sym_BANGturn_BANG] = ACTIONS(382),
    [anon_sym_BANGturnx_BANG] = ACTIONS(382),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(382),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(382),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(382),
    [anon_sym_BANG_GT_BANG] = ACTIONS(382),
    [anon_sym_BANGaccent_BANG] = ACTIONS(382),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(382),
    [anon_sym_BANGfermata_BANG] = ACTIONS(382),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(382),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(382),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(382),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(382),
    [anon_sym_BANGplus_BANG] = ACTIONS(382),
    [anon_sym_BANGsnap_BANG] = ACTIONS(382),
    [anon_sym_BANGslide_BANG] = ACTIONS(382),
    [anon_sym_BANGwedge_BANG] = ACTIONS(382),
    [anon_sym_BANGupbow_BANG] = ACTIONS(382),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(382),
    [anon_sym_BANGopen_BANG] = ACTIONS(382),
    [anon_sym_BANGthumb_BANG] = ACTIONS(382),
    [anon_sym_BANGbreath_BANG] = ACTIONS(382),
    [anon_sym_BANGpppp_BANG] = ACTIONS(382),
    [anon_sym_BANGppp_BANG] = ACTIONS(382),
    [anon_sym_BANGpp_BANG] = ACTIONS(382),
    [anon_sym_BANGp_BANG] = ACTIONS(382),
    [anon_sym_BANGmp_BANG] = ACTIONS(382),
    [anon_sym_BANGmf_BANG] = ACTIONS(382),
    [anon_sym_BANGf_BANG] = ACTIONS(382),
    [anon_sym_BANGff_BANG] = ACTIONS(382),
    [anon_sym_BANGfff_BANG] = ACTIONS(382),
    [anon_sym_BANGffff_BANG] = ACTIONS(382),
    [anon_sym_BANGsfz_BANG] = ACTIONS(382),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(382),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(382),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(382),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(382),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(382),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(382),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(382),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(382),
    [anon_sym_BANGsegno_BANG] = ACTIONS(382),
    [anon_sym_BANGcoda_BANG] = ACTIONS(382),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(382),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(382),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(382),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(382),
    [anon_sym_BANGfine_BANG] = ACTIONS(382),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(382),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(382),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(382),
    [sym_parts_line] = ACTIONS(382),
    [sym_instruction] = ACTIONS(382),
    [sym_key] = ACTIONS(382),
    [sym_macros] = ACTIONS(382),
    [sym_meter] = ACTIONS(382),
    [sym_notes] = ACTIONS(382),
    [anon_sym_X_COLON] = ACTIONS(382),
    [sym_remark] = ACTIONS(382),
    [sym_rhythm_line] = ACTIONS(382),
    [anon_sym_s_COLON] = ACTIONS(382),
    [sym_tempo] = ACTIONS(382),
    [sym_tune_title] = ACTIONS(382),
    [sym_unit_note_length] = ACTIONS(382),
    [anon_sym_U_COLON] = ACTIONS(382),
    [sym_voice] = ACTIONS(382),
    [anon_sym_w_COLON] = ACTIONS(382),
    [sym_words_postbody] = ACTIONS(382),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(386),
    [sym__NL] = ACTIONS(388),
    [anon_sym_BSLASH] = ACTIONS(386),
    [sym_COMMENT] = ACTIONS(388),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(386),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(388),
    [sym_slur_open] = ACTIONS(388),
    [sym_slur_close] = ACTIONS(386),
    [anon_sym_LBRACK] = ACTIONS(388),
    [sym_alteration] = ACTIONS(386),
    [sym_note_letter] = ACTIONS(386),
    [sym_rest] = ACTIONS(386),
    [anon_sym_Z] = ACTIONS(386),
    [anon_sym_X] = ACTIONS(388),
    [aux_sym_grace_note_token1] = ACTIONS(386),
    [aux_sym_chord_symbol_token1] = ACTIONS(388),
    [sym_annotation] = ACTIONS(386),
    [sym_tuplet_marker] = ACTIONS(386),
    [sym_decoration_shorthand] = ACTIONS(388),
    [sym_bar_line] = ACTIONS(388),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(386),
    [sym_thin_double_bar_line] = ACTIONS(386),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(386),
    [sym_start_of_repeated_section] = ACTIONS(386),
    [sym_end_of_repeated_section] = ACTIONS(386),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(386),
    [anon_sym_BANGtrill_BANG] = ACTIONS(386),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(386),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(386),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(386),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(386),
    [anon_sym_BANGmordent_BANG] = ACTIONS(386),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(386),
    [anon_sym_BANGroll_BANG] = ACTIONS(386),
    [anon_sym_BANGturn_BANG] = ACTIONS(386),
    [anon_sym_BANGturnx_BANG] = ACTIONS(386),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(386),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(386),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(386),
    [anon_sym_BANG_GT_BANG] = ACTIONS(386),
    [anon_sym_BANGaccent_BANG] = ACTIONS(386),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(386),
    [anon_sym_BANGfermata_BANG] = ACTIONS(386),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(386),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(386),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(386),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(386),
    [anon_sym_BANGplus_BANG] = ACTIONS(386),
    [anon_sym_BANGsnap_BANG] = ACTIONS(386),
    [anon_sym_BANGslide_BANG] = ACTIONS(386),
    [anon_sym_BANGwedge_BANG] = ACTIONS(386),
    [anon_sym_BANGupbow_BANG] = ACTIONS(386),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(386),
    [anon_sym_BANGopen_BANG] = ACTIONS(386),
    [anon_sym_BANGthumb_BANG] = ACTIONS(386),
    [anon_sym_BANGbreath_BANG] = ACTIONS(386),
    [anon_sym_BANGpppp_BANG] = ACTIONS(386),
    [anon_sym_BANGppp_BANG] = ACTIONS(386),
    [anon_sym_BANGpp_BANG] = ACTIONS(386),
    [anon_sym_BANGp_BANG] = ACTIONS(386),
    [anon_sym_BANGmp_BANG] = ACTIONS(386),
    [anon_sym_BANGmf_BANG] = ACTIONS(386),
    [anon_sym_BANGf_BANG] = ACTIONS(386),
    [anon_sym_BANGff_BANG] = ACTIONS(386),
    [anon_sym_BANGfff_BANG] = ACTIONS(386),
    [anon_sym_BANGffff_BANG] = ACTIONS(386),
    [anon_sym_BANGsfz_BANG] = ACTIONS(386),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(386),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(386),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(386),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(386),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(386),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(386),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(386),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(386),
    [anon_sym_BANGsegno_BANG] = ACTIONS(386),
    [anon_sym_BANGcoda_BANG] = ACTIONS(386),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(386),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(386),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(386),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(386),
    [anon_sym_BANGfine_BANG] = ACTIONS(386),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(386),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(386),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(386),
    [sym_parts_line] = ACTIONS(386),
    [sym_instruction] = ACTIONS(386),
    [sym_key] = ACTIONS(386),
    [sym_macros] = ACTIONS(386),
    [sym_meter] = ACTIONS(386),
    [sym_notes] = ACTIONS(386),
    [anon_sym_X_COLON] = ACTIONS(386),
    [sym_remark] = ACTIONS(386),
    [sym_rhythm_line] = ACTIONS(386),
    [anon_sym_s_COLON] = ACTIONS(386),
    [sym_tempo] = ACTIONS(386),
    [sym_tune_title] = ACTIONS(386),
    [sym_unit_note_length] = ACTIONS(386),
    [anon_sym_U_COLON] = ACTIONS(386),
    [sym_voice] = ACTIONS(386),
    [anon_sym_w_COLON] = ACTIONS(386),
    [sym_words_postbody] = ACTIONS(386),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(390),
    [sym__NL] = ACTIONS(392),
    [anon_sym_BSLASH] = ACTIONS(390),
    [sym_COMMENT] = ACTIONS(392),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(390),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(392),
    [sym_slur_open] = ACTIONS(392),
    [sym_slur_close] = ACTIONS(390),
    [anon_sym_LBRACK] = ACTIONS(392),
    [sym_alteration] = ACTIONS(390),
    [sym_note_letter] = ACTIONS(390),
    [sym_rest] = ACTIONS(390),
    [anon_sym_Z] = ACTIONS(390),
    [anon_sym_X] = ACTIONS(392),
    [aux_sym_grace_note_token1] = ACTIONS(390),
    [aux_sym_chord_symbol_token1] = ACTIONS(392),
    [sym_annotation] = ACTIONS(390),
    [sym_tuplet_marker] = ACTIONS(390),
    [sym_decoration_shorthand] = ACTIONS(392),
    [sym_bar_line] = ACTIONS(392),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(390),
    [sym_thin_double_bar_line] = ACTIONS(390),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(390),
    [sym_start_of_repeated_section] = ACTIONS(390),
    [sym_end_of_repeated_section] = ACTIONS(390),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(390),
    [anon_sym_BANGtrill_BANG] = ACTIONS(390),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(390),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(390),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(390),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(390),
    [anon_sym_BANGmordent_BANG] = ACTIONS(390),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(390),
    [anon_sym_BANGroll_BANG] = ACTIONS(390),
    [anon_sym_BANGturn_BANG] = ACTIONS(390),
    [anon_sym_BANGturnx_BANG] = ACTIONS(390),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(390),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(390),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(390),
    [anon_sym_BANG_GT_BANG] = ACTIONS(390),
    [anon_sym_BANGaccent_BANG] = ACTIONS(390),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(390),
    [anon_sym_BANGfermata_BANG] = ACTIONS(390),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(390),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(390),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(390),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(390),
    [anon_sym_BANGplus_BANG] = ACTIONS(390),
    [anon_sym_BANGsnap_BANG] = ACTIONS(390),
    [anon_sym_BANGslide_BANG] = ACTIONS(390),
    [anon_sym_BANGwedge_BANG] = ACTIONS(390),
    [anon_sym_BANGupbow_BANG] = ACTIONS(390),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(390),
    [anon_sym_BANGopen_BANG] = ACTIONS(390),
    [anon_sym_BANGthumb_BANG] = ACTIONS(390),
    [anon_sym_BANGbreath_BANG] = ACTIONS(390),
    [anon_sym_BANGpppp_BANG] = ACTIONS(390),
    [anon_sym_BANGppp_BANG] = ACTIONS(390),
    [anon_sym_BANGpp_BANG] = ACTIONS(390),
    [anon_sym_BANGp_BANG] = ACTIONS(390),
    [anon_sym_BANGmp_BANG] = ACTIONS(390),
    [anon_sym_BANGmf_BANG] = ACTIONS(390),
    [anon_sym_BANGf_BANG] = ACTIONS(390),
    [anon_sym_BANGff_BANG] = ACTIONS(390),
    [anon_sym_BANGfff_BANG] = ACTIONS(390),
    [anon_sym_BANGffff_BANG] = ACTIONS(390),
    [anon_sym_BANGsfz_BANG] = ACTIONS(390),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(390),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(390),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(390),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(390),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(390),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(390),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(390),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(390),
    [anon_sym_BANGsegno_BANG] = ACTIONS(390),
    [anon_sym_BANGcoda_BANG] = ACTIONS(390),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(390),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(390),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(390),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(390),
    [anon_sym_BANGfine_BANG] = ACTIONS(390),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(390),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(390),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(390),
    [sym_parts_line] = ACTIONS(390),
    [sym_instruction] = ACTIONS(390),
    [sym_key] = ACTIONS(390),
    [sym_macros] = ACTIONS(390),
    [sym_meter] = ACTIONS(390),
    [sym_notes] = ACTIONS(390),
    [anon_sym_X_COLON] = ACTIONS(390),
    [sym_remark] = ACTIONS(390),
    [sym_rhythm_line] = ACTIONS(390),
    [anon_sym_s_COLON] = ACTIONS(390),
    [sym_tempo] = ACTIONS(390),
    [sym_tune_title] = ACTIONS(390),
    [sym_unit_note_length] = ACTIONS(390),
    [anon_sym_U_COLON] = ACTIONS(390),
    [sym_voice] = ACTIONS(390),
    [anon_sym_w_COLON] = ACTIONS(390),
    [sym_words_postbody] = ACTIONS(390),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(394),
    [sym__NL] = ACTIONS(396),
    [anon_sym_BSLASH] = ACTIONS(394),
    [sym_COMMENT] = ACTIONS(396),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(394),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(396),
    [sym_slur_open] = ACTIONS(396),
    [sym_slur_close] = ACTIONS(394),
    [anon_sym_LBRACK] = ACTIONS(396),
    [sym_alteration] = ACTIONS(394),
    [sym_note_letter] = ACTIONS(394),
    [sym_rest] = ACTIONS(394),
    [anon_sym_Z] = ACTIONS(394),
    [anon_sym_X] = ACTIONS(396),
    [aux_sym_grace_note_token1] = ACTIONS(394),
    [aux_sym_chord_symbol_token1] = ACTIONS(396),
    [sym_annotation] = ACTIONS(394),
    [sym_tuplet_marker] = ACTIONS(394),
    [sym_decoration_shorthand] = ACTIONS(396),
    [sym_bar_line] = ACTIONS(396),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(394),
    [sym_thin_double_bar_line] = ACTIONS(394),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(394),
    [sym_start_of_repeated_section] = ACTIONS(394),
    [sym_end_of_repeated_section] = ACTIONS(394),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(394),
    [anon_sym_BANGtrill_BANG] = ACTIONS(394),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(394),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(394),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(394),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(394),
    [anon_sym_BANGmordent_BANG] = ACTIONS(394),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(394),
    [anon_sym_BANGroll_BANG] = ACTIONS(394),
    [anon_sym_BANGturn_BANG] = ACTIONS(394),
    [anon_sym_BANGturnx_BANG] = ACTIONS(394),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(394),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(394),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(394),
    [anon_sym_BANG_GT_BANG] = ACTIONS(394),
    [anon_sym_BANGaccent_BANG] = ACTIONS(394),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(394),
    [anon_sym_BANGfermata_BANG] = ACTIONS(394),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(394),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(394),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(394),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(394),
    [anon_sym_BANGplus_BANG] = ACTIONS(394),
    [anon_sym_BANGsnap_BANG] = ACTIONS(394),
    [anon_sym_BANGslide_BANG] = ACTIONS(394),
    [anon_sym_BANGwedge_BANG] = ACTIONS(394),
    [anon_sym_BANGupbow_BANG] = ACTIONS(394),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(394),
    [anon_sym_BANGopen_BANG] = ACTIONS(394),
    [anon_sym_BANGthumb_BANG] = ACTIONS(394),
    [anon_sym_BANGbreath_BANG] = ACTIONS(394),
    [anon_sym_BANGpppp_BANG] = ACTIONS(394),
    [anon_sym_BANGppp_BANG] = ACTIONS(394),
    [anon_sym_BANGpp_BANG] = ACTIONS(394),
    [anon_sym_BANGp_BANG] = ACTIONS(394),
    [anon_sym_BANGmp_BANG] = ACTIONS(394),
    [anon_sym_BANGmf_BANG] = ACTIONS(394),
    [anon_sym_BANGf_BANG] = ACTIONS(394),
    [anon_sym_BANGff_BANG] = ACTIONS(394),
    [anon_sym_BANGfff_BANG] = ACTIONS(394),
    [anon_sym_BANGffff_BANG] = ACTIONS(394),
    [anon_sym_BANGsfz_BANG] = ACTIONS(394),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(394),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(394),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(394),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(394),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(394),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(394),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(394),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(394),
    [anon_sym_BANGsegno_BANG] = ACTIONS(394),
    [anon_sym_BANGcoda_BANG] = ACTIONS(394),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(394),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(394),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(394),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(394),
    [anon_sym_BANGfine_BANG] = ACTIONS(394),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(394),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(394),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(394),
    [sym_parts_line] = ACTIONS(394),
    [sym_instruction] = ACTIONS(394),
    [sym_key] = ACTIONS(394),
    [sym_macros] = ACTIONS(394),
    [sym_meter] = ACTIONS(394),
    [sym_notes] = ACTIONS(394),
    [anon_sym_X_COLON] = ACTIONS(394),
    [sym_remark] = ACTIONS(394),
    [sym_rhythm_line] = ACTIONS(394),
    [anon_sym_s_COLON] = ACTIONS(394),
    [sym_tempo] = ACTIONS(394),
    [sym_tune_title] = ACTIONS(394),
    [sym_unit_note_length] = ACTIONS(394),
    [anon_sym_U_COLON] = ACTIONS(394),
    [sym_voice] = ACTIONS(394),
    [anon_sym_w_COLON] = ACTIONS(394),
    [sym_words_postbody] = ACTIONS(394),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(398),
    [sym__NL] = ACTIONS(400),
    [anon_sym_BSLASH] = ACTIONS(398),
    [sym_COMMENT] = ACTIONS(400),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(398),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(400),
    [sym_slur_open] = ACTIONS(400),
    [sym_slur_close] = ACTIONS(398),
    [anon_sym_LBRACK] = ACTIONS(400),
    [sym_alteration] = ACTIONS(398),
    [sym_note_letter] = ACTIONS(398),
    [sym_rest] = ACTIONS(398),
    [anon_sym_Z] = ACTIONS(398),
    [anon_sym_X] = ACTIONS(400),
    [aux_sym_grace_note_token1] = ACTIONS(398),
    [aux_sym_chord_symbol_token1] = ACTIONS(400),
    [sym_annotation] = ACTIONS(398),
    [sym_tuplet_marker] = ACTIONS(398),
    [sym_decoration_shorthand] = ACTIONS(400),
    [sym_bar_line] = ACTIONS(400),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(398),
    [sym_thin_double_bar_line] = ACTIONS(398),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(398),
    [sym_start_of_repeated_section] = ACTIONS(398),
    [sym_end_of_repeated_section] = ACTIONS(398),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(398),
    [anon_sym_BANGtrill_BANG] = ACTIONS(398),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(398),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(398),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(398),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(398),
    [anon_sym_BANGmordent_BANG] = ACTIONS(398),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(398),
    [anon_sym_BANGroll_BANG] = ACTIONS(398),
    [anon_sym_BANGturn_BANG] = ACTIONS(398),
    [anon_sym_BANGturnx_BANG] = ACTIONS(398),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(398),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(398),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(398),
    [anon_sym_BANG_GT_BANG] = ACTIONS(398),
    [anon_sym_BANGaccent_BANG] = ACTIONS(398),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(398),
    [anon_sym_BANGfermata_BANG] = ACTIONS(398),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(398),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(398),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(398),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(398),
    [anon_sym_BANGplus_BANG] = ACTIONS(398),
    [anon_sym_BANGsnap_BANG] = ACTIONS(398),
    [anon_sym_BANGslide_BANG] = ACTIONS(398),
    [anon_sym_BANGwedge_BANG] = ACTIONS(398),
    [anon_sym_BANGupbow_BANG] = ACTIONS(398),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(398),
    [anon_sym_BANGopen_BANG] = ACTIONS(398),
    [anon_sym_BANGthumb_BANG] = ACTIONS(398),
    [anon_sym_BANGbreath_BANG] = ACTIONS(398),
    [anon_sym_BANGpppp_BANG] = ACTIONS(398),
    [anon_sym_BANGppp_BANG] = ACTIONS(398),
    [anon_sym_BANGpp_BANG] = ACTIONS(398),
    [anon_sym_BANGp_BANG] = ACTIONS(398),
    [anon_sym_BANGmp_BANG] = ACTIONS(398),
    [anon_sym_BANGmf_BANG] = ACTIONS(398),
    [anon_sym_BANGf_BANG] = ACTIONS(398),
    [anon_sym_BANGff_BANG] = ACTIONS(398),
    [anon_sym_BANGfff_BANG] = ACTIONS(398),
    [anon_sym_BANGffff_BANG] = ACTIONS(398),
    [anon_sym_BANGsfz_BANG] = ACTIONS(398),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(398),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(398),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(398),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(398),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(398),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(398),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(398),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(398),
    [anon_sym_BANGsegno_BANG] = ACTIONS(398),
    [anon_sym_BANGcoda_BANG] = ACTIONS(398),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(398),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(398),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(398),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(398),
    [anon_sym_BANGfine_BANG] = ACTIONS(398),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(398),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(398),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(398),
    [sym_parts_line] = ACTIONS(398),
    [sym_instruction] = ACTIONS(398),
    [sym_key] = ACTIONS(398),
    [sym_macros] = ACTIONS(398),
    [sym_meter] = ACTIONS(398),
    [sym_notes] = ACTIONS(398),
    [anon_sym_X_COLON] = ACTIONS(398),
    [sym_remark] = ACTIONS(398),
    [sym_rhythm_line] = ACTIONS(398),
    [anon_sym_s_COLON] = ACTIONS(398),
    [sym_tempo] = ACTIONS(398),
    [sym_tune_title] = ACTIONS(398),
    [sym_unit_note_length] = ACTIONS(398),
    [anon_sym_U_COLON] = ACTIONS(398),
    [sym_voice] = ACTIONS(398),
    [anon_sym_w_COLON] = ACTIONS(398),
    [sym_words_postbody] = ACTIONS(398),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(402),
    [sym__NL] = ACTIONS(404),
    [anon_sym_BSLASH] = ACTIONS(402),
    [sym_COMMENT] = ACTIONS(404),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(402),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(404),
    [sym_slur_open] = ACTIONS(404),
    [sym_slur_close] = ACTIONS(402),
    [anon_sym_LBRACK] = ACTIONS(404),
    [sym_alteration] = ACTIONS(402),
    [sym_note_letter] = ACTIONS(402),
    [sym_rest] = ACTIONS(402),
    [anon_sym_Z] = ACTIONS(402),
    [anon_sym_X] = ACTIONS(404),
    [aux_sym_grace_note_token1] = ACTIONS(402),
    [aux_sym_chord_symbol_token1] = ACTIONS(404),
    [sym_annotation] = ACTIONS(402),
    [sym_tuplet_marker] = ACTIONS(402),
    [sym_decoration_shorthand] = ACTIONS(404),
    [sym_bar_line] = ACTIONS(404),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(402),
    [sym_thin_double_bar_line] = ACTIONS(402),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(402),
    [sym_start_of_repeated_section] = ACTIONS(402),
    [sym_end_of_repeated_section] = ACTIONS(402),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(402),
    [anon_sym_BANGtrill_BANG] = ACTIONS(402),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(402),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(402),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(402),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(402),
    [anon_sym_BANGmordent_BANG] = ACTIONS(402),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(402),
    [anon_sym_BANGroll_BANG] = ACTIONS(402),
    [anon_sym_BANGturn_BANG] = ACTIONS(402),
    [anon_sym_BANGturnx_BANG] = ACTIONS(402),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(402),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(402),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(402),
    [anon_sym_BANG_GT_BANG] = ACTIONS(402),
    [anon_sym_BANGaccent_BANG] = ACTIONS(402),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(402),
    [anon_sym_BANGfermata_BANG] = ACTIONS(402),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(402),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(402),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(402),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(402),
    [anon_sym_BANGplus_BANG] = ACTIONS(402),
    [anon_sym_BANGsnap_BANG] = ACTIONS(402),
    [anon_sym_BANGslide_BANG] = ACTIONS(402),
    [anon_sym_BANGwedge_BANG] = ACTIONS(402),
    [anon_sym_BANGupbow_BANG] = ACTIONS(402),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(402),
    [anon_sym_BANGopen_BANG] = ACTIONS(402),
    [anon_sym_BANGthumb_BANG] = ACTIONS(402),
    [anon_sym_BANGbreath_BANG] = ACTIONS(402),
    [anon_sym_BANGpppp_BANG] = ACTIONS(402),
    [anon_sym_BANGppp_BANG] = ACTIONS(402),
    [anon_sym_BANGpp_BANG] = ACTIONS(402),
    [anon_sym_BANGp_BANG] = ACTIONS(402),
    [anon_sym_BANGmp_BANG] = ACTIONS(402),
    [anon_sym_BANGmf_BANG] = ACTIONS(402),
    [anon_sym_BANGf_BANG] = ACTIONS(402),
    [anon_sym_BANGff_BANG] = ACTIONS(402),
    [anon_sym_BANGfff_BANG] = ACTIONS(402),
    [anon_sym_BANGffff_BANG] = ACTIONS(402),
    [anon_sym_BANGsfz_BANG] = ACTIONS(402),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(402),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(402),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(402),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(402),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(402),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(402),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(402),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(402),
    [anon_sym_BANGsegno_BANG] = ACTIONS(402),
    [anon_sym_BANGcoda_BANG] = ACTIONS(402),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(402),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(402),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(402),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(402),
    [anon_sym_BANGfine_BANG] = ACTIONS(402),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(402),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(402),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(402),
    [sym_parts_line] = ACTIONS(402),
    [sym_instruction] = ACTIONS(402),
    [sym_key] = ACTIONS(402),
    [sym_macros] = ACTIONS(402),
    [sym_meter] = ACTIONS(402),
    [sym_notes] = ACTIONS(402),
    [anon_sym_X_COLON] = ACTIONS(402),
    [sym_remark] = ACTIONS(402),
    [sym_rhythm_line] = ACTIONS(402),
    [anon_sym_s_COLON] = ACTIONS(402),
    [sym_tempo] = ACTIONS(402),
    [sym_tune_title] = ACTIONS(402),
    [sym_unit_note_length] = ACTIONS(402),
    [anon_sym_U_COLON] = ACTIONS(402),
    [sym_voice] = ACTIONS(402),
    [anon_sym_w_COLON] = ACTIONS(402),
    [sym_words_postbody] = ACTIONS(402),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(406),
    [sym__NL] = ACTIONS(408),
    [anon_sym_BSLASH] = ACTIONS(406),
    [sym_COMMENT] = ACTIONS(408),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(406),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(410),
    [sym_slur_open] = ACTIONS(408),
    [sym_slur_close] = ACTIONS(406),
    [anon_sym_LBRACK] = ACTIONS(408),
    [sym_alteration] = ACTIONS(406),
    [sym_note_letter] = ACTIONS(406),
    [sym_rest] = ACTIONS(406),
    [anon_sym_Z] = ACTIONS(406),
    [anon_sym_X] = ACTIONS(408),
    [aux_sym_grace_note_token1] = ACTIONS(406),
    [aux_sym_chord_symbol_token1] = ACTIONS(408),
    [sym_annotation] = ACTIONS(406),
    [sym_tuplet_marker] = ACTIONS(406),
    [sym_decoration_shorthand] = ACTIONS(408),
    [sym_bar_line] = ACTIONS(408),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(406),
    [sym_thin_double_bar_line] = ACTIONS(406),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(406),
    [sym_start_of_repeated_section] = ACTIONS(406),
    [sym_end_of_repeated_section] = ACTIONS(406),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(406),
    [anon_sym_BANGtrill_BANG] = ACTIONS(406),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(406),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(406),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(406),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(406),
    [anon_sym_BANGmordent_BANG] = ACTIONS(406),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(406),
    [anon_sym_BANGroll_BANG] = ACTIONS(406),
    [anon_sym_BANGturn_BANG] = ACTIONS(406),
    [anon_sym_BANGturnx_BANG] = ACTIONS(406),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(406),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(406),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(406),
    [anon_sym_BANG_GT_BANG] = ACTIONS(406),
    [anon_sym_BANGaccent_BANG] = ACTIONS(406),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(406),
    [anon_sym_BANGfermata_BANG] = ACTIONS(406),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(406),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(406),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(406),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(406),
    [anon_sym_BANGplus_BANG] = ACTIONS(406),
    [anon_sym_BANGsnap_BANG] = ACTIONS(406),
    [anon_sym_BANGslide_BANG] = ACTIONS(406),
    [anon_sym_BANGwedge_BANG] = ACTIONS(406),
    [anon_sym_BANGupbow_BANG] = ACTIONS(406),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(406),
    [anon_sym_BANGopen_BANG] = ACTIONS(406),
    [anon_sym_BANGthumb_BANG] = ACTIONS(406),
    [anon_sym_BANGbreath_BANG] = ACTIONS(406),
    [anon_sym_BANGpppp_BANG] = ACTIONS(406),
    [anon_sym_BANGppp_BANG] = ACTIONS(406),
    [anon_sym_BANGpp_BANG] = ACTIONS(406),
    [anon_sym_BANGp_BANG] = ACTIONS(406),
    [anon_sym_BANGmp_BANG] = ACTIONS(406),
    [anon_sym_BANGmf_BANG] = ACTIONS(406),
    [anon_sym_BANGf_BANG] = ACTIONS(406),
    [anon_sym_BANGff_BANG] = ACTIONS(406),
    [anon_sym_BANGfff_BANG] = ACTIONS(406),
    [anon_sym_BANGffff_BANG] = ACTIONS(406),
    [anon_sym_BANGsfz_BANG] = ACTIONS(406),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(406),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(406),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(406),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(406),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(406),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(406),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(406),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(406),
    [anon_sym_BANGsegno_BANG] = ACTIONS(406),
    [anon_sym_BANGcoda_BANG] = ACTIONS(406),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(406),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(406),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(406),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(406),
    [anon_sym_BANGfine_BANG] = ACTIONS(406),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(406),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(406),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(406),
    [sym_parts_line] = ACTIONS(406),
    [sym_instruction] = ACTIONS(406),
    [sym_key] = ACTIONS(406),
    [sym_macros] = ACTIONS(406),
    [sym_meter] = ACTIONS(406),
    [sym_notes] = ACTIONS(406),
    [anon_sym_X_COLON] = ACTIONS(406),
    [sym_remark] = ACTIONS(406),
    [sym_rhythm_line] = ACTIONS(406),
    [anon_sym_s_COLON] = ACTIONS(406),
    [sym_tempo] = ACTIONS(406),
    [sym_tune_title] = ACTIONS(406),
    [sym_unit_note_length] = ACTIONS(406),
    [anon_sym_U_COLON] = ACTIONS(406),
    [sym_voice] = ACTIONS(406),
    [anon_sym_w_COLON] = ACTIONS(406),
    [sym_words_postbody] = ACTIONS(406),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(412),
    [sym__NL] = ACTIONS(414),
    [anon_sym_BSLASH] = ACTIONS(412),
    [sym_COMMENT] = ACTIONS(414),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(412),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(414),
    [sym_slur_open] = ACTIONS(414),
    [sym_slur_close] = ACTIONS(412),
    [anon_sym_LBRACK] = ACTIONS(414),
    [sym_alteration] = ACTIONS(412),
    [sym_note_letter] = ACTIONS(412),
    [sym_rest] = ACTIONS(412),
    [anon_sym_Z] = ACTIONS(412),
    [anon_sym_X] = ACTIONS(414),
    [aux_sym_grace_note_token1] = ACTIONS(412),
    [aux_sym_chord_symbol_token1] = ACTIONS(414),
    [sym_annotation] = ACTIONS(412),
    [sym_tuplet_marker] = ACTIONS(412),
    [sym_decoration_shorthand] = ACTIONS(414),
    [sym_bar_line] = ACTIONS(414),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(412),
    [sym_thin_double_bar_line] = ACTIONS(412),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(412),
    [sym_start_of_repeated_section] = ACTIONS(412),
    [sym_end_of_repeated_section] = ACTIONS(412),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(412),
    [anon_sym_BANGtrill_BANG] = ACTIONS(412),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(412),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(412),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(412),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(412),
    [anon_sym_BANGmordent_BANG] = ACTIONS(412),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(412),
    [anon_sym_BANGroll_BANG] = ACTIONS(412),
    [anon_sym_BANGturn_BANG] = ACTIONS(412),
    [anon_sym_BANGturnx_BANG] = ACTIONS(412),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(412),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(412),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(412),
    [anon_sym_BANG_GT_BANG] = ACTIONS(412),
    [anon_sym_BANGaccent_BANG] = ACTIONS(412),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(412),
    [anon_sym_BANGfermata_BANG] = ACTIONS(412),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(412),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(412),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(412),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(412),
    [anon_sym_BANGplus_BANG] = ACTIONS(412),
    [anon_sym_BANGsnap_BANG] = ACTIONS(412),
    [anon_sym_BANGslide_BANG] = ACTIONS(412),
    [anon_sym_BANGwedge_BANG] = ACTIONS(412),
    [anon_sym_BANGupbow_BANG] = ACTIONS(412),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(412),
    [anon_sym_BANGopen_BANG] = ACTIONS(412),
    [anon_sym_BANGthumb_BANG] = ACTIONS(412),
    [anon_sym_BANGbreath_BANG] = ACTIONS(412),
    [anon_sym_BANGpppp_BANG] = ACTIONS(412),
    [anon_sym_BANGppp_BANG] = ACTIONS(412),
    [anon_sym_BANGpp_BANG] = ACTIONS(412),
    [anon_sym_BANGp_BANG] = ACTIONS(412),
    [anon_sym_BANGmp_BANG] = ACTIONS(412),
    [anon_sym_BANGmf_BANG] = ACTIONS(412),
    [anon_sym_BANGf_BANG] = ACTIONS(412),
    [anon_sym_BANGff_BANG] = ACTIONS(412),
    [anon_sym_BANGfff_BANG] = ACTIONS(412),
    [anon_sym_BANGffff_BANG] = ACTIONS(412),
    [anon_sym_BANGsfz_BANG] = ACTIONS(412),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(412),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(412),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(412),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(412),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(412),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(412),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(412),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(412),
    [anon_sym_BANGsegno_BANG] = ACTIONS(412),
    [anon_sym_BANGcoda_BANG] = ACTIONS(412),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(412),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(412),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(412),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(412),
    [anon_sym_BANGfine_BANG] = ACTIONS(412),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(412),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(412),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(412),
    [sym_parts_line] = ACTIONS(412),
    [sym_instruction] = ACTIONS(412),
    [sym_key] = ACTIONS(412),
    [sym_macros] = ACTIONS(412),
    [sym_meter] = ACTIONS(412),
    [sym_notes] = ACTIONS(412),
    [anon_sym_X_COLON] = ACTIONS(412),
    [sym_remark] = ACTIONS(412),
    [sym_rhythm_line] = ACTIONS(412),
    [anon_sym_s_COLON] = ACTIONS(412),
    [sym_tempo] = ACTIONS(412),
    [sym_tune_title] = ACTIONS(412),
    [sym_unit_note_length] = ACTIONS(412),
    [anon_sym_U_COLON] = ACTIONS(412),
    [sym_voice] = ACTIONS(412),
    [anon_sym_w_COLON] = ACTIONS(412),
    [sym_words_postbody] = ACTIONS(412),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(416),
    [sym__NL] = ACTIONS(418),
    [anon_sym_BSLASH] = ACTIONS(416),
    [sym_COMMENT] = ACTIONS(418),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(416),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(418),
    [sym_slur_open] = ACTIONS(418),
    [sym_slur_close] = ACTIONS(416),
    [anon_sym_LBRACK] = ACTIONS(418),
    [sym_alteration] = ACTIONS(416),
    [sym_note_letter] = ACTIONS(416),
    [sym_rest] = ACTIONS(416),
    [anon_sym_Z] = ACTIONS(416),
    [anon_sym_X] = ACTIONS(418),
    [aux_sym_grace_note_token1] = ACTIONS(416),
    [aux_sym_chord_symbol_token1] = ACTIONS(418),
    [sym_annotation] = ACTIONS(416),
    [sym_tuplet_marker] = ACTIONS(416),
    [sym_decoration_shorthand] = ACTIONS(418),
    [sym_bar_line] = ACTIONS(418),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(416),
    [sym_thin_double_bar_line] = ACTIONS(416),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(416),
    [sym_start_of_repeated_section] = ACTIONS(416),
    [sym_end_of_repeated_section] = ACTIONS(416),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(416),
    [anon_sym_BANGtrill_BANG] = ACTIONS(416),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(416),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(416),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(416),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(416),
    [anon_sym_BANGmordent_BANG] = ACTIONS(416),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(416),
    [anon_sym_BANGroll_BANG] = ACTIONS(416),
    [anon_sym_BANGturn_BANG] = ACTIONS(416),
    [anon_sym_BANGturnx_BANG] = ACTIONS(416),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(416),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(416),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(416),
    [anon_sym_BANG_GT_BANG] = ACTIONS(416),
    [anon_sym_BANGaccent_BANG] = ACTIONS(416),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(416),
    [anon_sym_BANGfermata_BANG] = ACTIONS(416),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(416),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(416),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(416),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(416),
    [anon_sym_BANGplus_BANG] = ACTIONS(416),
    [anon_sym_BANGsnap_BANG] = ACTIONS(416),
    [anon_sym_BANGslide_BANG] = ACTIONS(416),
    [anon_sym_BANGwedge_BANG] = ACTIONS(416),
    [anon_sym_BANGupbow_BANG] = ACTIONS(416),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(416),
    [anon_sym_BANGopen_BANG] = ACTIONS(416),
    [anon_sym_BANGthumb_BANG] = ACTIONS(416),
    [anon_sym_BANGbreath_BANG] = ACTIONS(416),
    [anon_sym_BANGpppp_BANG] = ACTIONS(416),
    [anon_sym_BANGppp_BANG] = ACTIONS(416),
    [anon_sym_BANGpp_BANG] = ACTIONS(416),
    [anon_sym_BANGp_BANG] = ACTIONS(416),
    [anon_sym_BANGmp_BANG] = ACTIONS(416),
    [anon_sym_BANGmf_BANG] = ACTIONS(416),
    [anon_sym_BANGf_BANG] = ACTIONS(416),
    [anon_sym_BANGff_BANG] = ACTIONS(416),
    [anon_sym_BANGfff_BANG] = ACTIONS(416),
    [anon_sym_BANGffff_BANG] = ACTIONS(416),
    [anon_sym_BANGsfz_BANG] = ACTIONS(416),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(416),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(416),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(416),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(416),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(416),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(416),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(416),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(416),
    [anon_sym_BANGsegno_BANG] = ACTIONS(416),
    [anon_sym_BANGcoda_BANG] = ACTIONS(416),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(416),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(416),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(416),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(416),
    [anon_sym_BANGfine_BANG] = ACTIONS(416),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(416),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(416),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(416),
    [sym_parts_line] = ACTIONS(416),
    [sym_instruction] = ACTIONS(416),
    [sym_key] = ACTIONS(416),
    [sym_macros] = ACTIONS(416),
    [sym_meter] = ACTIONS(416),
    [sym_notes] = ACTIONS(416),
    [anon_sym_X_COLON] = ACTIONS(416),
    [sym_remark] = ACTIONS(416),
    [sym_rhythm_line] = ACTIONS(416),
    [anon_sym_s_COLON] = ACTIONS(416),
    [sym_tempo] = ACTIONS(416),
    [sym_tune_title] = ACTIONS(416),
    [sym_unit_note_length] = ACTIONS(416),
    [anon_sym_U_COLON] = ACTIONS(416),
    [sym_voice] = ACTIONS(416),
    [anon_sym_w_COLON] = ACTIONS(416),
    [sym_words_postbody] = ACTIONS(416),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(420),
    [sym__NL] = ACTIONS(420),
    [anon_sym_BSLASH] = ACTIONS(420),
    [sym_COMMENT] = ACTIONS(422),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(420),
    [sym_slur_open] = ACTIONS(422),
    [sym_slur_close] = ACTIONS(420),
    [anon_sym_LBRACK] = ACTIONS(422),
    [sym_alteration] = ACTIONS(420),
    [sym_note_letter] = ACTIONS(420),
    [sym_rest] = ACTIONS(420),
    [anon_sym_Z] = ACTIONS(420),
    [anon_sym_X] = ACTIONS(422),
    [aux_sym_grace_note_token1] = ACTIONS(420),
    [aux_sym_chord_symbol_token1] = ACTIONS(422),
    [sym_annotation] = ACTIONS(420),
    [sym_tuplet_marker] = ACTIONS(420),
    [sym_decoration_shorthand] = ACTIONS(422),
    [sym_bar_line] = ACTIONS(422),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(420),
    [sym_thin_double_bar_line] = ACTIONS(420),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(420),
    [sym_start_of_repeated_section] = ACTIONS(420),
    [sym_end_of_repeated_section] = ACTIONS(420),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(420),
    [anon_sym_BANGtrill_BANG] = ACTIONS(420),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(420),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(420),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(420),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(420),
    [anon_sym_BANGmordent_BANG] = ACTIONS(420),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(420),
    [anon_sym_BANGroll_BANG] = ACTIONS(420),
    [anon_sym_BANGturn_BANG] = ACTIONS(420),
    [anon_sym_BANGturnx_BANG] = ACTIONS(420),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(420),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(420),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(420),
    [anon_sym_BANG_GT_BANG] = ACTIONS(420),
    [anon_sym_BANGaccent_BANG] = ACTIONS(420),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(420),
    [anon_sym_BANGfermata_BANG] = ACTIONS(420),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(420),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(420),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(420),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(420),
    [anon_sym_BANGplus_BANG] = ACTIONS(420),
    [anon_sym_BANGsnap_BANG] = ACTIONS(420),
    [anon_sym_BANGslide_BANG] = ACTIONS(420),
    [anon_sym_BANGwedge_BANG] = ACTIONS(420),
    [anon_sym_BANGupbow_BANG] = ACTIONS(420),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(420),
    [anon_sym_BANGopen_BANG] = ACTIONS(420),
    [anon_sym_BANGthumb_BANG] = ACTIONS(420),
    [anon_sym_BANGbreath_BANG] = ACTIONS(420),
    [anon_sym_BANGpppp_BANG] = ACTIONS(420),
    [anon_sym_BANGppp_BANG] = ACTIONS(420),
    [anon_sym_BANGpp_BANG] = ACTIONS(420),
    [anon_sym_BANGp_BANG] = ACTIONS(420),
    [anon_sym_BANGmp_BANG] = ACTIONS(420),
    [anon_sym_BANGmf_BANG] = ACTIONS(420),
    [anon_sym_BANGf_BANG] = ACTIONS(420),
    [anon_sym_BANGff_BANG] = ACTIONS(420),
    [anon_sym_BANGfff_BANG] = ACTIONS(420),
    [anon_sym_BANGffff_BANG] = ACTIONS(420),
    [anon_sym_BANGsfz_BANG] = ACTIONS(420),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(420),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(420),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(420),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(420),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(420),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(420),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(420),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(420),
    [anon_sym_BANGsegno_BANG] = ACTIONS(420),
    [anon_sym_BANGcoda_BANG] = ACTIONS(420),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(420),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(420),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(420),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(420),
    [anon_sym_BANGfine_BANG] = ACTIONS(420),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(420),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(420),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(420),
    [sym_parts_line] = ACTIONS(420),
    [sym_instruction] = ACTIONS(420),
    [sym_key] = ACTIONS(420),
    [sym_macros] = ACTIONS(420),
    [sym_meter] = ACTIONS(420),
    [sym_notes] = ACTIONS(420),
    [anon_sym_X_COLON] = ACTIONS(420),
    [sym_remark] = ACTIONS(420),
    [sym_rhythm_line] = ACTIONS(420),
    [anon_sym_s_COLON] = ACTIONS(420),
    [sym_tempo] = ACTIONS(420),
    [sym_tune_title] = ACTIONS(420),
    [sym_unit_note_length] = ACTIONS(420),
    [anon_sym_U_COLON] = ACTIONS(420),
    [sym_voice] = ACTIONS(420),
    [anon_sym_w_COLON] = ACTIONS(420),
    [sym_words_postbody] = ACTIONS(420),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(424),
    [sym__NL] = ACTIONS(424),
    [anon_sym_BSLASH] = ACTIONS(424),
    [sym_COMMENT] = ACTIONS(426),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(424),
    [sym_slur_open] = ACTIONS(426),
    [sym_slur_close] = ACTIONS(424),
    [anon_sym_LBRACK] = ACTIONS(426),
    [sym_alteration] = ACTIONS(424),
    [sym_note_letter] = ACTIONS(424),
    [sym_rest] = ACTIONS(424),
    [anon_sym_Z] = ACTIONS(424),
    [anon_sym_X] = ACTIONS(426),
    [aux_sym_grace_note_token1] = ACTIONS(424),
    [aux_sym_chord_symbol_token1] = ACTIONS(426),
    [sym_annotation] = ACTIONS(424),
    [sym_tuplet_marker] = ACTIONS(424),
    [sym_decoration_shorthand] = ACTIONS(426),
    [sym_bar_line] = ACTIONS(426),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(424),
    [sym_thin_double_bar_line] = ACTIONS(424),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(424),
    [sym_start_of_repeated_section] = ACTIONS(424),
    [sym_end_of_repeated_section] = ACTIONS(424),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(424),
    [anon_sym_BANGtrill_BANG] = ACTIONS(424),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(424),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(424),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(424),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(424),
    [anon_sym_BANGmordent_BANG] = ACTIONS(424),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(424),
    [anon_sym_BANGroll_BANG] = ACTIONS(424),
    [anon_sym_BANGturn_BANG] = ACTIONS(424),
    [anon_sym_BANGturnx_BANG] = ACTIONS(424),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(424),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(424),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(424),
    [anon_sym_BANG_GT_BANG] = ACTIONS(424),
    [anon_sym_BANGaccent_BANG] = ACTIONS(424),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(424),
    [anon_sym_BANGfermata_BANG] = ACTIONS(424),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(424),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(424),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(424),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(424),
    [anon_sym_BANGplus_BANG] = ACTIONS(424),
    [anon_sym_BANGsnap_BANG] = ACTIONS(424),
    [anon_sym_BANGslide_BANG] = ACTIONS(424),
    [anon_sym_BANGwedge_BANG] = ACTIONS(424),
    [anon_sym_BANGupbow_BANG] = ACTIONS(424),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(424),
    [anon_sym_BANGopen_BANG] = ACTIONS(424),
    [anon_sym_BANGthumb_BANG] = ACTIONS(424),
    [anon_sym_BANGbreath_BANG] = ACTIONS(424),
    [anon_sym_BANGpppp_BANG] = ACTIONS(424),
    [anon_sym_BANGppp_BANG] = ACTIONS(424),
    [anon_sym_BANGpp_BANG] = ACTIONS(424),
    [anon_sym_BANGp_BANG] = ACTIONS(424),
    [anon_sym_BANGmp_BANG] = ACTIONS(424),
    [anon_sym_BANGmf_BANG] = ACTIONS(424),
    [anon_sym_BANGf_BANG] = ACTIONS(424),
    [anon_sym_BANGff_BANG] = ACTIONS(424),
    [anon_sym_BANGfff_BANG] = ACTIONS(424),
    [anon_sym_BANGffff_BANG] = ACTIONS(424),
    [anon_sym_BANGsfz_BANG] = ACTIONS(424),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(424),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(424),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(424),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(424),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(424),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(424),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(424),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(424),
    [anon_sym_BANGsegno_BANG] = ACTIONS(424),
    [anon_sym_BANGcoda_BANG] = ACTIONS(424),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(424),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(424),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(424),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(424),
    [anon_sym_BANGfine_BANG] = ACTIONS(424),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(424),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(424),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(424),
    [sym_parts_line] = ACTIONS(424),
    [sym_instruction] = ACTIONS(424),
    [sym_key] = ACTIONS(424),
    [sym_macros] = ACTIONS(424),
    [sym_meter] = ACTIONS(424),
    [sym_notes] = ACTIONS(424),
    [anon_sym_X_COLON] = ACTIONS(424),
    [sym_remark] = ACTIONS(424),
    [sym_rhythm_line] = ACTIONS(424),
    [anon_sym_s_COLON] = ACTIONS(424),
    [sym_tempo] = ACTIONS(424),
    [sym_tune_title] = ACTIONS(424),
    [sym_unit_note_length] = ACTIONS(424),
    [anon_sym_U_COLON] = ACTIONS(424),
    [sym_voice] = ACTIONS(424),
    [anon_sym_w_COLON] = ACTIONS(424),
    [sym_words_postbody] = ACTIONS(424),
  },
  [63] = {
    [ts_builtin_sym_end] = ACTIONS(59),
    [sym__NL] = ACTIONS(59),
    [anon_sym_BSLASH] = ACTIONS(59),
    [sym_COMMENT] = ACTIONS(428),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(59),
    [sym_slur_open] = ACTIONS(428),
    [sym_slur_close] = ACTIONS(59),
    [anon_sym_LBRACK] = ACTIONS(428),
    [sym_alteration] = ACTIONS(59),
    [sym_note_letter] = ACTIONS(59),
    [sym_rest] = ACTIONS(59),
    [anon_sym_Z] = ACTIONS(59),
    [anon_sym_X] = ACTIONS(428),
    [aux_sym_grace_note_token1] = ACTIONS(59),
    [aux_sym_chord_symbol_token1] = ACTIONS(428),
    [sym_annotation] = ACTIONS(59),
    [sym_tuplet_marker] = ACTIONS(59),
    [sym_decoration_shorthand] = ACTIONS(428),
    [sym_bar_line] = ACTIONS(428),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(59),
    [sym_thin_double_bar_line] = ACTIONS(59),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(59),
    [sym_start_of_repeated_section] = ACTIONS(59),
    [sym_end_of_repeated_section] = ACTIONS(59),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(59),
    [anon_sym_BANGtrill_BANG] = ACTIONS(59),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(59),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(59),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(59),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(59),
    [anon_sym_BANGmordent_BANG] = ACTIONS(59),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(59),
    [anon_sym_BANGroll_BANG] = ACTIONS(59),
    [anon_sym_BANGturn_BANG] = ACTIONS(59),
    [anon_sym_BANGturnx_BANG] = ACTIONS(59),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(59),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(59),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(59),
    [anon_sym_BANG_GT_BANG] = ACTIONS(59),
    [anon_sym_BANGaccent_BANG] = ACTIONS(59),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(59),
    [anon_sym_BANGfermata_BANG] = ACTIONS(59),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(59),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(59),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(59),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(59),
    [anon_sym_BANGplus_BANG] = ACTIONS(59),
    [anon_sym_BANGsnap_BANG] = ACTIONS(59),
    [anon_sym_BANGslide_BANG] = ACTIONS(59),
    [anon_sym_BANGwedge_BANG] = ACTIONS(59),
    [anon_sym_BANGupbow_BANG] = ACTIONS(59),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(59),
    [anon_sym_BANGopen_BANG] = ACTIONS(59),
    [anon_sym_BANGthumb_BANG] = ACTIONS(59),
    [anon_sym_BANGbreath_BANG] = ACTIONS(59),
    [anon_sym_BANGpppp_BANG] = ACTIONS(59),
    [anon_sym_BANGppp_BANG] = ACTIONS(59),
    [anon_sym_BANGpp_BANG] = ACTIONS(59),
    [anon_sym_BANGp_BANG] = ACTIONS(59),
    [anon_sym_BANGmp_BANG] = ACTIONS(59),
    [anon_sym_BANGmf_BANG] = ACTIONS(59),
    [anon_sym_BANGf_BANG] = ACTIONS(59),
    [anon_sym_BANGff_BANG] = ACTIONS(59),
    [anon_sym_BANGfff_BANG] = ACTIONS(59),
    [anon_sym_BANGffff_BANG] = ACTIONS(59),
    [anon_sym_BANGsfz_BANG] = ACTIONS(59),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(59),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(59),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(59),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(59),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(59),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(59),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(59),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(59),
    [anon_sym_BANGsegno_BANG] = ACTIONS(59),
    [anon_sym_BANGcoda_BANG] = ACTIONS(59),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(59),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(59),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(59),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(59),
    [anon_sym_BANGfine_BANG] = ACTIONS(59),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(59),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(59),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(59),
    [sym_parts_line] = ACTIONS(59),
    [sym_instruction] = ACTIONS(59),
    [sym_key] = ACTIONS(59),
    [sym_macros] = ACTIONS(59),
    [sym_meter] = ACTIONS(59),
    [sym_notes] = ACTIONS(59),
    [anon_sym_X_COLON] = ACTIONS(59),
    [sym_remark] = ACTIONS(59),
    [sym_rhythm_line] = ACTIONS(59),
    [anon_sym_s_COLON] = ACTIONS(59),
    [sym_tempo] = ACTIONS(59),
    [sym_tune_title] = ACTIONS(59),
    [sym_unit_note_length] = ACTIONS(59),
    [anon_sym_U_COLON] = ACTIONS(59),
    [sym_voice] = ACTIONS(59),
    [anon_sym_w_COLON] = ACTIONS(59),
    [sym_words_postbody] = ACTIONS(59),
  },
  [64] = {
    [sym_chord_symbol] = STATE(64),
    [sym_nth_ending_barline] = STATE(103),
    [sym_generic_bar_line] = STATE(64),
    [sym_first_repeat_bar] = STATE(103),
    [sym_second_repeat_bar] = STATE(103),
    [sym_symbol] = STATE(64),
    [aux_sym_symbol_line_repeat1] = STATE(64),
    [sym_note_skip] = ACTIONS(430),
    [aux_sym_chord_symbol_token1] = ACTIONS(433),
    [sym_annotation] = ACTIONS(430),
    [sym_bar_line] = ACTIONS(436),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(439),
    [sym_thin_double_bar_line] = ACTIONS(442),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(442),
    [sym_start_of_repeated_section] = ACTIONS(445),
    [sym_end_of_repeated_section] = ACTIONS(448),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(445),
    [anon_sym_BANGtrill_BANG] = ACTIONS(451),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(451),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(451),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(451),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(451),
    [anon_sym_BANGmordent_BANG] = ACTIONS(451),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(451),
    [anon_sym_BANGroll_BANG] = ACTIONS(451),
    [anon_sym_BANGturn_BANG] = ACTIONS(451),
    [anon_sym_BANGturnx_BANG] = ACTIONS(451),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(451),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(451),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(451),
    [anon_sym_BANG_GT_BANG] = ACTIONS(451),
    [anon_sym_BANGaccent_BANG] = ACTIONS(451),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(451),
    [anon_sym_BANGfermata_BANG] = ACTIONS(451),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(451),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(451),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(451),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(451),
    [anon_sym_BANGplus_BANG] = ACTIONS(451),
    [anon_sym_BANGsnap_BANG] = ACTIONS(451),
    [anon_sym_BANGslide_BANG] = ACTIONS(451),
    [anon_sym_BANGwedge_BANG] = ACTIONS(451),
    [anon_sym_BANGupbow_BANG] = ACTIONS(451),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(451),
    [anon_sym_BANGopen_BANG] = ACTIONS(451),
    [anon_sym_BANGthumb_BANG] = ACTIONS(451),
    [anon_sym_BANGbreath_BANG] = ACTIONS(451),
    [anon_sym_BANGpppp_BANG] = ACTIONS(451),
    [anon_sym_BANGppp_BANG] = ACTIONS(451),
    [anon_sym_BANGpp_BANG] = ACTIONS(451),
    [anon_sym_BANGp_BANG] = ACTIONS(451),
    [anon_sym_BANGmp_BANG] = ACTIONS(451),
    [anon_sym_BANGmf_BANG] = ACTIONS(451),
    [anon_sym_BANGf_BANG] = ACTIONS(451),
    [anon_sym_BANGff_BANG] = ACTIONS(451),
    [anon_sym_BANGfff_BANG] = ACTIONS(451),
    [anon_sym_BANGffff_BANG] = ACTIONS(451),
    [anon_sym_BANGsfz_BANG] = ACTIONS(451),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(451),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(451),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(451),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(451),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(451),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(451),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(451),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(451),
    [anon_sym_BANGsegno_BANG] = ACTIONS(451),
    [anon_sym_BANGcoda_BANG] = ACTIONS(451),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(451),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(451),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(451),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(451),
    [anon_sym_BANGfine_BANG] = ACTIONS(451),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(451),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(451),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(451),
    [aux_sym_body_inline_info_token1] = ACTIONS(454),
  },
  [65] = {
    [sym_chord_symbol] = STATE(66),
    [sym_nth_ending_barline] = STATE(101),
    [sym_generic_bar_line] = STATE(66),
    [sym_first_repeat_bar] = STATE(101),
    [sym_second_repeat_bar] = STATE(101),
    [sym_symbol] = STATE(66),
    [aux_sym_symbol_line_repeat1] = STATE(66),
    [sym_noCommentText] = ACTIONS(456),
    [sym_note_skip] = ACTIONS(458),
    [aux_sym_chord_symbol_token1] = ACTIONS(460),
    [sym_annotation] = ACTIONS(458),
    [sym_bar_line] = ACTIONS(462),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(464),
    [sym_thin_double_bar_line] = ACTIONS(464),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(464),
    [sym_start_of_repeated_section] = ACTIONS(466),
    [sym_end_of_repeated_section] = ACTIONS(468),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(466),
    [anon_sym_BANGtrill_BANG] = ACTIONS(470),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(470),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(470),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(470),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(470),
    [anon_sym_BANGmordent_BANG] = ACTIONS(470),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(470),
    [anon_sym_BANGroll_BANG] = ACTIONS(470),
    [anon_sym_BANGturn_BANG] = ACTIONS(470),
    [anon_sym_BANGturnx_BANG] = ACTIONS(470),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(470),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(470),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(470),
    [anon_sym_BANG_GT_BANG] = ACTIONS(470),
    [anon_sym_BANGaccent_BANG] = ACTIONS(470),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(470),
    [anon_sym_BANGfermata_BANG] = ACTIONS(470),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(470),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(470),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(470),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(470),
    [anon_sym_BANGplus_BANG] = ACTIONS(470),
    [anon_sym_BANGsnap_BANG] = ACTIONS(470),
    [anon_sym_BANGslide_BANG] = ACTIONS(470),
    [anon_sym_BANGwedge_BANG] = ACTIONS(470),
    [anon_sym_BANGupbow_BANG] = ACTIONS(470),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(470),
    [anon_sym_BANGopen_BANG] = ACTIONS(470),
    [anon_sym_BANGthumb_BANG] = ACTIONS(470),
    [anon_sym_BANGbreath_BANG] = ACTIONS(470),
    [anon_sym_BANGpppp_BANG] = ACTIONS(470),
    [anon_sym_BANGppp_BANG] = ACTIONS(470),
    [anon_sym_BANGpp_BANG] = ACTIONS(470),
    [anon_sym_BANGp_BANG] = ACTIONS(470),
    [anon_sym_BANGmp_BANG] = ACTIONS(470),
    [anon_sym_BANGmf_BANG] = ACTIONS(470),
    [anon_sym_BANGf_BANG] = ACTIONS(470),
    [anon_sym_BANGff_BANG] = ACTIONS(470),
    [anon_sym_BANGfff_BANG] = ACTIONS(470),
    [anon_sym_BANGffff_BANG] = ACTIONS(470),
    [anon_sym_BANGsfz_BANG] = ACTIONS(470),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(470),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(470),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(470),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(470),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(470),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(470),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(470),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(470),
    [anon_sym_BANGsegno_BANG] = ACTIONS(470),
    [anon_sym_BANGcoda_BANG] = ACTIONS(470),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(470),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(470),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(470),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(470),
    [anon_sym_BANGfine_BANG] = ACTIONS(470),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(470),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(470),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(470),
  },
  [66] = {
    [sym_chord_symbol] = STATE(66),
    [sym_nth_ending_barline] = STATE(101),
    [sym_generic_bar_line] = STATE(66),
    [sym_first_repeat_bar] = STATE(101),
    [sym_second_repeat_bar] = STATE(101),
    [sym_symbol] = STATE(66),
    [aux_sym_symbol_line_repeat1] = STATE(66),
    [sym_noCommentText] = ACTIONS(454),
    [sym_note_skip] = ACTIONS(472),
    [aux_sym_chord_symbol_token1] = ACTIONS(475),
    [sym_annotation] = ACTIONS(472),
    [sym_bar_line] = ACTIONS(478),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(481),
    [sym_thin_double_bar_line] = ACTIONS(481),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(481),
    [sym_start_of_repeated_section] = ACTIONS(484),
    [sym_end_of_repeated_section] = ACTIONS(487),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(484),
    [anon_sym_BANGtrill_BANG] = ACTIONS(490),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(490),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(490),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(490),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(490),
    [anon_sym_BANGmordent_BANG] = ACTIONS(490),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(490),
    [anon_sym_BANGroll_BANG] = ACTIONS(490),
    [anon_sym_BANGturn_BANG] = ACTIONS(490),
    [anon_sym_BANGturnx_BANG] = ACTIONS(490),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(490),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(490),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(490),
    [anon_sym_BANG_GT_BANG] = ACTIONS(490),
    [anon_sym_BANGaccent_BANG] = ACTIONS(490),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(490),
    [anon_sym_BANGfermata_BANG] = ACTIONS(490),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(490),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(490),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(490),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(490),
    [anon_sym_BANGplus_BANG] = ACTIONS(490),
    [anon_sym_BANGsnap_BANG] = ACTIONS(490),
    [anon_sym_BANGslide_BANG] = ACTIONS(490),
    [anon_sym_BANGwedge_BANG] = ACTIONS(490),
    [anon_sym_BANGupbow_BANG] = ACTIONS(490),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(490),
    [anon_sym_BANGopen_BANG] = ACTIONS(490),
    [anon_sym_BANGthumb_BANG] = ACTIONS(490),
    [anon_sym_BANGbreath_BANG] = ACTIONS(490),
    [anon_sym_BANGpppp_BANG] = ACTIONS(490),
    [anon_sym_BANGppp_BANG] = ACTIONS(490),
    [anon_sym_BANGpp_BANG] = ACTIONS(490),
    [anon_sym_BANGp_BANG] = ACTIONS(490),
    [anon_sym_BANGmp_BANG] = ACTIONS(490),
    [anon_sym_BANGmf_BANG] = ACTIONS(490),
    [anon_sym_BANGf_BANG] = ACTIONS(490),
    [anon_sym_BANGff_BANG] = ACTIONS(490),
    [anon_sym_BANGfff_BANG] = ACTIONS(490),
    [anon_sym_BANGffff_BANG] = ACTIONS(490),
    [anon_sym_BANGsfz_BANG] = ACTIONS(490),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(490),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(490),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(490),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(490),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(490),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(490),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(490),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(490),
    [anon_sym_BANGsegno_BANG] = ACTIONS(490),
    [anon_sym_BANGcoda_BANG] = ACTIONS(490),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(490),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(490),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(490),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(490),
    [anon_sym_BANGfine_BANG] = ACTIONS(490),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(490),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(490),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(490),
  },
  [67] = {
    [sym_chord_symbol] = STATE(64),
    [sym_nth_ending_barline] = STATE(103),
    [sym_generic_bar_line] = STATE(64),
    [sym_first_repeat_bar] = STATE(103),
    [sym_second_repeat_bar] = STATE(103),
    [sym_symbol] = STATE(64),
    [aux_sym_symbol_line_repeat1] = STATE(64),
    [sym_note_skip] = ACTIONS(493),
    [aux_sym_chord_symbol_token1] = ACTIONS(495),
    [sym_annotation] = ACTIONS(493),
    [sym_bar_line] = ACTIONS(497),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(499),
    [sym_thin_double_bar_line] = ACTIONS(501),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(501),
    [sym_start_of_repeated_section] = ACTIONS(503),
    [sym_end_of_repeated_section] = ACTIONS(505),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(503),
    [anon_sym_BANGtrill_BANG] = ACTIONS(507),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(507),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(507),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(507),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(507),
    [anon_sym_BANGmordent_BANG] = ACTIONS(507),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(507),
    [anon_sym_BANGroll_BANG] = ACTIONS(507),
    [anon_sym_BANGturn_BANG] = ACTIONS(507),
    [anon_sym_BANGturnx_BANG] = ACTIONS(507),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(507),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(507),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(507),
    [anon_sym_BANG_GT_BANG] = ACTIONS(507),
    [anon_sym_BANGaccent_BANG] = ACTIONS(507),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(507),
    [anon_sym_BANGfermata_BANG] = ACTIONS(507),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(507),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(507),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(507),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(507),
    [anon_sym_BANGplus_BANG] = ACTIONS(507),
    [anon_sym_BANGsnap_BANG] = ACTIONS(507),
    [anon_sym_BANGslide_BANG] = ACTIONS(507),
    [anon_sym_BANGwedge_BANG] = ACTIONS(507),
    [anon_sym_BANGupbow_BANG] = ACTIONS(507),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(507),
    [anon_sym_BANGopen_BANG] = ACTIONS(507),
    [anon_sym_BANGthumb_BANG] = ACTIONS(507),
    [anon_sym_BANGbreath_BANG] = ACTIONS(507),
    [anon_sym_BANGpppp_BANG] = ACTIONS(507),
    [anon_sym_BANGppp_BANG] = ACTIONS(507),
    [anon_sym_BANGpp_BANG] = ACTIONS(507),
    [anon_sym_BANGp_BANG] = ACTIONS(507),
    [anon_sym_BANGmp_BANG] = ACTIONS(507),
    [anon_sym_BANGmf_BANG] = ACTIONS(507),
    [anon_sym_BANGf_BANG] = ACTIONS(507),
    [anon_sym_BANGff_BANG] = ACTIONS(507),
    [anon_sym_BANGfff_BANG] = ACTIONS(507),
    [anon_sym_BANGffff_BANG] = ACTIONS(507),
    [anon_sym_BANGsfz_BANG] = ACTIONS(507),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(507),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(507),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(507),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(507),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(507),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(507),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(507),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(507),
    [anon_sym_BANGsegno_BANG] = ACTIONS(507),
    [anon_sym_BANGcoda_BANG] = ACTIONS(507),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(507),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(507),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(507),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(507),
    [anon_sym_BANGfine_BANG] = ACTIONS(507),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(507),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(507),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(507),
    [aux_sym_body_inline_info_token1] = ACTIONS(456),
  },
  [68] = {
    [sym_chord_symbol] = STATE(67),
    [sym_nth_ending_barline] = STATE(103),
    [sym_generic_bar_line] = STATE(67),
    [sym_first_repeat_bar] = STATE(103),
    [sym_second_repeat_bar] = STATE(103),
    [sym_symbol] = STATE(67),
    [aux_sym_symbol_line_repeat1] = STATE(67),
    [sym_note_skip] = ACTIONS(509),
    [aux_sym_chord_symbol_token1] = ACTIONS(495),
    [sym_annotation] = ACTIONS(509),
    [sym_bar_line] = ACTIONS(497),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(499),
    [sym_thin_double_bar_line] = ACTIONS(499),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(499),
    [sym_start_of_repeated_section] = ACTIONS(511),
    [sym_end_of_repeated_section] = ACTIONS(513),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(511),
    [anon_sym_BANGtrill_BANG] = ACTIONS(515),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(515),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(515),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(515),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(515),
    [anon_sym_BANGmordent_BANG] = ACTIONS(515),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(515),
    [anon_sym_BANGroll_BANG] = ACTIONS(515),
    [anon_sym_BANGturn_BANG] = ACTIONS(515),
    [anon_sym_BANGturnx_BANG] = ACTIONS(515),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(515),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(515),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(515),
    [anon_sym_BANG_GT_BANG] = ACTIONS(515),
    [anon_sym_BANGaccent_BANG] = ACTIONS(515),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(515),
    [anon_sym_BANGfermata_BANG] = ACTIONS(515),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(515),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(515),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(515),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(515),
    [anon_sym_BANGplus_BANG] = ACTIONS(515),
    [anon_sym_BANGsnap_BANG] = ACTIONS(515),
    [anon_sym_BANGslide_BANG] = ACTIONS(515),
    [anon_sym_BANGwedge_BANG] = ACTIONS(515),
    [anon_sym_BANGupbow_BANG] = ACTIONS(515),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(515),
    [anon_sym_BANGopen_BANG] = ACTIONS(515),
    [anon_sym_BANGthumb_BANG] = ACTIONS(515),
    [anon_sym_BANGbreath_BANG] = ACTIONS(515),
    [anon_sym_BANGpppp_BANG] = ACTIONS(515),
    [anon_sym_BANGppp_BANG] = ACTIONS(515),
    [anon_sym_BANGpp_BANG] = ACTIONS(515),
    [anon_sym_BANGp_BANG] = ACTIONS(515),
    [anon_sym_BANGmp_BANG] = ACTIONS(515),
    [anon_sym_BANGmf_BANG] = ACTIONS(515),
    [anon_sym_BANGf_BANG] = ACTIONS(515),
    [anon_sym_BANGff_BANG] = ACTIONS(515),
    [anon_sym_BANGfff_BANG] = ACTIONS(515),
    [anon_sym_BANGffff_BANG] = ACTIONS(515),
    [anon_sym_BANGsfz_BANG] = ACTIONS(515),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(515),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(515),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(515),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(515),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(515),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(515),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(515),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(515),
    [anon_sym_BANGsegno_BANG] = ACTIONS(515),
    [anon_sym_BANGcoda_BANG] = ACTIONS(515),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(515),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(515),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(515),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(515),
    [anon_sym_BANGfine_BANG] = ACTIONS(515),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(515),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(515),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(515),
  },
  [69] = {
    [sym_chord_symbol] = STATE(65),
    [sym_nth_ending_barline] = STATE(101),
    [sym_generic_bar_line] = STATE(65),
    [sym_first_repeat_bar] = STATE(101),
    [sym_second_repeat_bar] = STATE(101),
    [sym_symbol] = STATE(65),
    [aux_sym_symbol_line_repeat1] = STATE(65),
    [sym_note_skip] = ACTIONS(517),
    [aux_sym_chord_symbol_token1] = ACTIONS(460),
    [sym_annotation] = ACTIONS(517),
    [sym_bar_line] = ACTIONS(462),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(519),
    [sym_thin_double_bar_line] = ACTIONS(519),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(519),
    [sym_start_of_repeated_section] = ACTIONS(521),
    [sym_end_of_repeated_section] = ACTIONS(523),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(521),
    [anon_sym_BANGtrill_BANG] = ACTIONS(525),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(525),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(525),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(525),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(525),
    [anon_sym_BANGmordent_BANG] = ACTIONS(525),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(525),
    [anon_sym_BANGroll_BANG] = ACTIONS(525),
    [anon_sym_BANGturn_BANG] = ACTIONS(525),
    [anon_sym_BANGturnx_BANG] = ACTIONS(525),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(525),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(525),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(525),
    [anon_sym_BANG_GT_BANG] = ACTIONS(525),
    [anon_sym_BANGaccent_BANG] = ACTIONS(525),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(525),
    [anon_sym_BANGfermata_BANG] = ACTIONS(525),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(525),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(525),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(525),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(525),
    [anon_sym_BANGplus_BANG] = ACTIONS(525),
    [anon_sym_BANGsnap_BANG] = ACTIONS(525),
    [anon_sym_BANGslide_BANG] = ACTIONS(525),
    [anon_sym_BANGwedge_BANG] = ACTIONS(525),
    [anon_sym_BANGupbow_BANG] = ACTIONS(525),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(525),
    [anon_sym_BANGopen_BANG] = ACTIONS(525),
    [anon_sym_BANGthumb_BANG] = ACTIONS(525),
    [anon_sym_BANGbreath_BANG] = ACTIONS(525),
    [anon_sym_BANGpppp_BANG] = ACTIONS(525),
    [anon_sym_BANGppp_BANG] = ACTIONS(525),
    [anon_sym_BANGpp_BANG] = ACTIONS(525),
    [anon_sym_BANGp_BANG] = ACTIONS(525),
    [anon_sym_BANGmp_BANG] = ACTIONS(525),
    [anon_sym_BANGmf_BANG] = ACTIONS(525),
    [anon_sym_BANGf_BANG] = ACTIONS(525),
    [anon_sym_BANGff_BANG] = ACTIONS(525),
    [anon_sym_BANGfff_BANG] = ACTIONS(525),
    [anon_sym_BANGffff_BANG] = ACTIONS(525),
    [anon_sym_BANGsfz_BANG] = ACTIONS(525),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(525),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(525),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(525),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(525),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(525),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(525),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(525),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(525),
    [anon_sym_BANGsegno_BANG] = ACTIONS(525),
    [anon_sym_BANGcoda_BANG] = ACTIONS(525),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(525),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(525),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(525),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(525),
    [anon_sym_BANGfine_BANG] = ACTIONS(525),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(525),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(525),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(525),
  },
  [70] = {
    [sym_nth_ending_number] = STATE(93),
    [sym_note_skip] = ACTIONS(265),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(529),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(263),
    [sym_thin_double_bar_line] = ACTIONS(265),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(265),
    [sym_start_of_repeated_section] = ACTIONS(265),
    [sym_end_of_repeated_section] = ACTIONS(265),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(265),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(531),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(533),
    [anon_sym_BANGtrill_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGmordent_BANG] = ACTIONS(265),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(265),
    [anon_sym_BANGroll_BANG] = ACTIONS(265),
    [anon_sym_BANGturn_BANG] = ACTIONS(265),
    [anon_sym_BANGturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_BANG] = ACTIONS(265),
    [anon_sym_BANGaccent_BANG] = ACTIONS(265),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(265),
    [anon_sym_BANGfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(265),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(265),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(265),
    [anon_sym_BANGplus_BANG] = ACTIONS(265),
    [anon_sym_BANGsnap_BANG] = ACTIONS(265),
    [anon_sym_BANGslide_BANG] = ACTIONS(265),
    [anon_sym_BANGwedge_BANG] = ACTIONS(265),
    [anon_sym_BANGupbow_BANG] = ACTIONS(265),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(265),
    [anon_sym_BANGopen_BANG] = ACTIONS(265),
    [anon_sym_BANGthumb_BANG] = ACTIONS(265),
    [anon_sym_BANGbreath_BANG] = ACTIONS(265),
    [anon_sym_BANGpppp_BANG] = ACTIONS(265),
    [anon_sym_BANGppp_BANG] = ACTIONS(265),
    [anon_sym_BANGpp_BANG] = ACTIONS(265),
    [anon_sym_BANGp_BANG] = ACTIONS(265),
    [anon_sym_BANGmp_BANG] = ACTIONS(265),
    [anon_sym_BANGmf_BANG] = ACTIONS(265),
    [anon_sym_BANGf_BANG] = ACTIONS(265),
    [anon_sym_BANGff_BANG] = ACTIONS(265),
    [anon_sym_BANGfff_BANG] = ACTIONS(265),
    [anon_sym_BANGffff_BANG] = ACTIONS(265),
    [anon_sym_BANGsfz_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGsegno_BANG] = ACTIONS(265),
    [anon_sym_BANGcoda_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(265),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(265),
    [anon_sym_BANGfine_BANG] = ACTIONS(265),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(265),
    [aux_sym_body_inline_info_token1] = ACTIONS(265),
  },
  [71] = {
    [sym_nth_ending_number] = STATE(106),
    [sym_noCommentText] = ACTIONS(265),
    [sym_note_skip] = ACTIONS(265),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(537),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(265),
    [sym_thin_double_bar_line] = ACTIONS(265),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(265),
    [sym_start_of_repeated_section] = ACTIONS(265),
    [sym_end_of_repeated_section] = ACTIONS(265),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(265),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(539),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(541),
    [anon_sym_BANGtrill_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGmordent_BANG] = ACTIONS(265),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(265),
    [anon_sym_BANGroll_BANG] = ACTIONS(265),
    [anon_sym_BANGturn_BANG] = ACTIONS(265),
    [anon_sym_BANGturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_BANG] = ACTIONS(265),
    [anon_sym_BANGaccent_BANG] = ACTIONS(265),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(265),
    [anon_sym_BANGfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(265),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(265),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(265),
    [anon_sym_BANGplus_BANG] = ACTIONS(265),
    [anon_sym_BANGsnap_BANG] = ACTIONS(265),
    [anon_sym_BANGslide_BANG] = ACTIONS(265),
    [anon_sym_BANGwedge_BANG] = ACTIONS(265),
    [anon_sym_BANGupbow_BANG] = ACTIONS(265),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(265),
    [anon_sym_BANGopen_BANG] = ACTIONS(265),
    [anon_sym_BANGthumb_BANG] = ACTIONS(265),
    [anon_sym_BANGbreath_BANG] = ACTIONS(265),
    [anon_sym_BANGpppp_BANG] = ACTIONS(265),
    [anon_sym_BANGppp_BANG] = ACTIONS(265),
    [anon_sym_BANGpp_BANG] = ACTIONS(265),
    [anon_sym_BANGp_BANG] = ACTIONS(265),
    [anon_sym_BANGmp_BANG] = ACTIONS(265),
    [anon_sym_BANGmf_BANG] = ACTIONS(265),
    [anon_sym_BANGf_BANG] = ACTIONS(265),
    [anon_sym_BANGff_BANG] = ACTIONS(265),
    [anon_sym_BANGfff_BANG] = ACTIONS(265),
    [anon_sym_BANGffff_BANG] = ACTIONS(265),
    [anon_sym_BANGsfz_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGsegno_BANG] = ACTIONS(265),
    [anon_sym_BANGcoda_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(265),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(265),
    [anon_sym_BANGfine_BANG] = ACTIONS(265),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(265),
  },
  [72] = {
    [sym_nth_ending_number] = STATE(93),
    [sym_note_skip] = ACTIONS(265),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(529),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(263),
    [sym_thin_double_bar_line] = ACTIONS(265),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(265),
    [sym_start_of_repeated_section] = ACTIONS(265),
    [sym_end_of_repeated_section] = ACTIONS(265),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(265),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(543),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(545),
    [anon_sym_BANGtrill_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGmordent_BANG] = ACTIONS(265),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(265),
    [anon_sym_BANGroll_BANG] = ACTIONS(265),
    [anon_sym_BANGturn_BANG] = ACTIONS(265),
    [anon_sym_BANGturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_BANG] = ACTIONS(265),
    [anon_sym_BANGaccent_BANG] = ACTIONS(265),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(265),
    [anon_sym_BANGfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(265),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(265),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(265),
    [anon_sym_BANGplus_BANG] = ACTIONS(265),
    [anon_sym_BANGsnap_BANG] = ACTIONS(265),
    [anon_sym_BANGslide_BANG] = ACTIONS(265),
    [anon_sym_BANGwedge_BANG] = ACTIONS(265),
    [anon_sym_BANGupbow_BANG] = ACTIONS(265),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(265),
    [anon_sym_BANGopen_BANG] = ACTIONS(265),
    [anon_sym_BANGthumb_BANG] = ACTIONS(265),
    [anon_sym_BANGbreath_BANG] = ACTIONS(265),
    [anon_sym_BANGpppp_BANG] = ACTIONS(265),
    [anon_sym_BANGppp_BANG] = ACTIONS(265),
    [anon_sym_BANGpp_BANG] = ACTIONS(265),
    [anon_sym_BANGp_BANG] = ACTIONS(265),
    [anon_sym_BANGmp_BANG] = ACTIONS(265),
    [anon_sym_BANGmf_BANG] = ACTIONS(265),
    [anon_sym_BANGf_BANG] = ACTIONS(265),
    [anon_sym_BANGff_BANG] = ACTIONS(265),
    [anon_sym_BANGfff_BANG] = ACTIONS(265),
    [anon_sym_BANGffff_BANG] = ACTIONS(265),
    [anon_sym_BANGsfz_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGsegno_BANG] = ACTIONS(265),
    [anon_sym_BANGcoda_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(265),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(265),
    [anon_sym_BANGfine_BANG] = ACTIONS(265),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(265),
    [aux_sym_body_inline_info_token1] = ACTIONS(265),
  },
  [73] = {
    [sym_nth_ending_number] = STATE(106),
    [sym_noCommentText] = ACTIONS(265),
    [sym_note_skip] = ACTIONS(265),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(537),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(265),
    [sym_thin_double_bar_line] = ACTIONS(265),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(265),
    [sym_start_of_repeated_section] = ACTIONS(265),
    [sym_end_of_repeated_section] = ACTIONS(265),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(265),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(547),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(549),
    [anon_sym_BANGtrill_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGmordent_BANG] = ACTIONS(265),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(265),
    [anon_sym_BANGroll_BANG] = ACTIONS(265),
    [anon_sym_BANGturn_BANG] = ACTIONS(265),
    [anon_sym_BANGturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_BANG] = ACTIONS(265),
    [anon_sym_BANGaccent_BANG] = ACTIONS(265),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(265),
    [anon_sym_BANGfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(265),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(265),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(265),
    [anon_sym_BANGplus_BANG] = ACTIONS(265),
    [anon_sym_BANGsnap_BANG] = ACTIONS(265),
    [anon_sym_BANGslide_BANG] = ACTIONS(265),
    [anon_sym_BANGwedge_BANG] = ACTIONS(265),
    [anon_sym_BANGupbow_BANG] = ACTIONS(265),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(265),
    [anon_sym_BANGopen_BANG] = ACTIONS(265),
    [anon_sym_BANGthumb_BANG] = ACTIONS(265),
    [anon_sym_BANGbreath_BANG] = ACTIONS(265),
    [anon_sym_BANGpppp_BANG] = ACTIONS(265),
    [anon_sym_BANGppp_BANG] = ACTIONS(265),
    [anon_sym_BANGpp_BANG] = ACTIONS(265),
    [anon_sym_BANGp_BANG] = ACTIONS(265),
    [anon_sym_BANGmp_BANG] = ACTIONS(265),
    [anon_sym_BANGmf_BANG] = ACTIONS(265),
    [anon_sym_BANGf_BANG] = ACTIONS(265),
    [anon_sym_BANGff_BANG] = ACTIONS(265),
    [anon_sym_BANGfff_BANG] = ACTIONS(265),
    [anon_sym_BANGffff_BANG] = ACTIONS(265),
    [anon_sym_BANGsfz_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGsegno_BANG] = ACTIONS(265),
    [anon_sym_BANGcoda_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(265),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(265),
    [anon_sym_BANGfine_BANG] = ACTIONS(265),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(265),
  },
  [74] = {
    [sym_nth_ending_number] = STATE(93),
    [sym_note_skip] = ACTIONS(265),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(527),
    [anon_sym_LBRACK] = ACTIONS(529),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(263),
    [sym_thin_double_bar_line] = ACTIONS(265),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(265),
    [sym_start_of_repeated_section] = ACTIONS(265),
    [sym_end_of_repeated_section] = ACTIONS(265),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(265),
    [anon_sym_BANGtrill_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGmordent_BANG] = ACTIONS(265),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(265),
    [anon_sym_BANGroll_BANG] = ACTIONS(265),
    [anon_sym_BANGturn_BANG] = ACTIONS(265),
    [anon_sym_BANGturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_BANG] = ACTIONS(265),
    [anon_sym_BANGaccent_BANG] = ACTIONS(265),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(265),
    [anon_sym_BANGfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(265),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(265),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(265),
    [anon_sym_BANGplus_BANG] = ACTIONS(265),
    [anon_sym_BANGsnap_BANG] = ACTIONS(265),
    [anon_sym_BANGslide_BANG] = ACTIONS(265),
    [anon_sym_BANGwedge_BANG] = ACTIONS(265),
    [anon_sym_BANGupbow_BANG] = ACTIONS(265),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(265),
    [anon_sym_BANGopen_BANG] = ACTIONS(265),
    [anon_sym_BANGthumb_BANG] = ACTIONS(265),
    [anon_sym_BANGbreath_BANG] = ACTIONS(265),
    [anon_sym_BANGpppp_BANG] = ACTIONS(265),
    [anon_sym_BANGppp_BANG] = ACTIONS(265),
    [anon_sym_BANGpp_BANG] = ACTIONS(265),
    [anon_sym_BANGp_BANG] = ACTIONS(265),
    [anon_sym_BANGmp_BANG] = ACTIONS(265),
    [anon_sym_BANGmf_BANG] = ACTIONS(265),
    [anon_sym_BANGf_BANG] = ACTIONS(265),
    [anon_sym_BANGff_BANG] = ACTIONS(265),
    [anon_sym_BANGfff_BANG] = ACTIONS(265),
    [anon_sym_BANGffff_BANG] = ACTIONS(265),
    [anon_sym_BANGsfz_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGsegno_BANG] = ACTIONS(265),
    [anon_sym_BANGcoda_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(265),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(265),
    [anon_sym_BANGfine_BANG] = ACTIONS(265),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(265),
    [aux_sym_body_inline_info_token1] = ACTIONS(265),
  },
  [75] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(77),
    [sym_noCommentText] = ACTIONS(277),
    [sym_note_skip] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(551),
    [aux_sym_chord_symbol_token1] = ACTIONS(277),
    [sym_annotation] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(551),
    [sym_bar_line] = ACTIONS(277),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(277),
    [sym_thin_double_bar_line] = ACTIONS(277),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(277),
    [sym_start_of_repeated_section] = ACTIONS(277),
    [sym_end_of_repeated_section] = ACTIONS(277),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(277),
    [anon_sym_BANGtrill_BANG] = ACTIONS(277),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(277),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(277),
    [anon_sym_BANGmordent_BANG] = ACTIONS(277),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(277),
    [anon_sym_BANGroll_BANG] = ACTIONS(277),
    [anon_sym_BANGturn_BANG] = ACTIONS(277),
    [anon_sym_BANGturnx_BANG] = ACTIONS(277),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(277),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(277),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(277),
    [anon_sym_BANG_GT_BANG] = ACTIONS(277),
    [anon_sym_BANGaccent_BANG] = ACTIONS(277),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(277),
    [anon_sym_BANGfermata_BANG] = ACTIONS(277),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(277),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(277),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(277),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(277),
    [anon_sym_BANGplus_BANG] = ACTIONS(277),
    [anon_sym_BANGsnap_BANG] = ACTIONS(277),
    [anon_sym_BANGslide_BANG] = ACTIONS(277),
    [anon_sym_BANGwedge_BANG] = ACTIONS(277),
    [anon_sym_BANGupbow_BANG] = ACTIONS(277),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(277),
    [anon_sym_BANGopen_BANG] = ACTIONS(277),
    [anon_sym_BANGthumb_BANG] = ACTIONS(277),
    [anon_sym_BANGbreath_BANG] = ACTIONS(277),
    [anon_sym_BANGpppp_BANG] = ACTIONS(277),
    [anon_sym_BANGppp_BANG] = ACTIONS(277),
    [anon_sym_BANGpp_BANG] = ACTIONS(277),
    [anon_sym_BANGp_BANG] = ACTIONS(277),
    [anon_sym_BANGmp_BANG] = ACTIONS(277),
    [anon_sym_BANGmf_BANG] = ACTIONS(277),
    [anon_sym_BANGf_BANG] = ACTIONS(277),
    [anon_sym_BANGff_BANG] = ACTIONS(277),
    [anon_sym_BANGfff_BANG] = ACTIONS(277),
    [anon_sym_BANGffff_BANG] = ACTIONS(277),
    [anon_sym_BANGsfz_BANG] = ACTIONS(277),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGsegno_BANG] = ACTIONS(277),
    [anon_sym_BANGcoda_BANG] = ACTIONS(277),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(277),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(277),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(277),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(277),
    [anon_sym_BANGfine_BANG] = ACTIONS(277),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(277),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(277),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(277),
  },
  [76] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(76),
    [sym_noCommentText] = ACTIONS(289),
    [sym_note_skip] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(553),
    [aux_sym_chord_symbol_token1] = ACTIONS(289),
    [sym_annotation] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(553),
    [sym_bar_line] = ACTIONS(289),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(289),
    [sym_thin_double_bar_line] = ACTIONS(289),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(289),
    [sym_start_of_repeated_section] = ACTIONS(289),
    [sym_end_of_repeated_section] = ACTIONS(289),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(289),
    [anon_sym_BANGtrill_BANG] = ACTIONS(289),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(289),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(289),
    [anon_sym_BANGmordent_BANG] = ACTIONS(289),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(289),
    [anon_sym_BANGroll_BANG] = ACTIONS(289),
    [anon_sym_BANGturn_BANG] = ACTIONS(289),
    [anon_sym_BANGturnx_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(289),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_BANG] = ACTIONS(289),
    [anon_sym_BANGaccent_BANG] = ACTIONS(289),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(289),
    [anon_sym_BANGfermata_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(289),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(289),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(289),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(289),
    [anon_sym_BANGplus_BANG] = ACTIONS(289),
    [anon_sym_BANGsnap_BANG] = ACTIONS(289),
    [anon_sym_BANGslide_BANG] = ACTIONS(289),
    [anon_sym_BANGwedge_BANG] = ACTIONS(289),
    [anon_sym_BANGupbow_BANG] = ACTIONS(289),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(289),
    [anon_sym_BANGopen_BANG] = ACTIONS(289),
    [anon_sym_BANGthumb_BANG] = ACTIONS(289),
    [anon_sym_BANGbreath_BANG] = ACTIONS(289),
    [anon_sym_BANGpppp_BANG] = ACTIONS(289),
    [anon_sym_BANGppp_BANG] = ACTIONS(289),
    [anon_sym_BANGpp_BANG] = ACTIONS(289),
    [anon_sym_BANGp_BANG] = ACTIONS(289),
    [anon_sym_BANGmp_BANG] = ACTIONS(289),
    [anon_sym_BANGmf_BANG] = ACTIONS(289),
    [anon_sym_BANGf_BANG] = ACTIONS(289),
    [anon_sym_BANGff_BANG] = ACTIONS(289),
    [anon_sym_BANGfff_BANG] = ACTIONS(289),
    [anon_sym_BANGffff_BANG] = ACTIONS(289),
    [anon_sym_BANGsfz_BANG] = ACTIONS(289),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGsegno_BANG] = ACTIONS(289),
    [anon_sym_BANGcoda_BANG] = ACTIONS(289),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(289),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(289),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(289),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(289),
    [anon_sym_BANGfine_BANG] = ACTIONS(289),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(289),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(289),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(289),
  },
  [77] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(76),
    [sym_noCommentText] = ACTIONS(300),
    [sym_note_skip] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(551),
    [aux_sym_chord_symbol_token1] = ACTIONS(300),
    [sym_annotation] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(551),
    [sym_bar_line] = ACTIONS(300),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(300),
    [sym_thin_double_bar_line] = ACTIONS(300),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(300),
    [sym_start_of_repeated_section] = ACTIONS(300),
    [sym_end_of_repeated_section] = ACTIONS(300),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(300),
    [anon_sym_BANGtrill_BANG] = ACTIONS(300),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(300),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(300),
    [anon_sym_BANGmordent_BANG] = ACTIONS(300),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(300),
    [anon_sym_BANGroll_BANG] = ACTIONS(300),
    [anon_sym_BANGturn_BANG] = ACTIONS(300),
    [anon_sym_BANGturnx_BANG] = ACTIONS(300),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(300),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(300),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(300),
    [anon_sym_BANG_GT_BANG] = ACTIONS(300),
    [anon_sym_BANGaccent_BANG] = ACTIONS(300),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(300),
    [anon_sym_BANGfermata_BANG] = ACTIONS(300),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(300),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(300),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(300),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(300),
    [anon_sym_BANGplus_BANG] = ACTIONS(300),
    [anon_sym_BANGsnap_BANG] = ACTIONS(300),
    [anon_sym_BANGslide_BANG] = ACTIONS(300),
    [anon_sym_BANGwedge_BANG] = ACTIONS(300),
    [anon_sym_BANGupbow_BANG] = ACTIONS(300),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(300),
    [anon_sym_BANGopen_BANG] = ACTIONS(300),
    [anon_sym_BANGthumb_BANG] = ACTIONS(300),
    [anon_sym_BANGbreath_BANG] = ACTIONS(300),
    [anon_sym_BANGpppp_BANG] = ACTIONS(300),
    [anon_sym_BANGppp_BANG] = ACTIONS(300),
    [anon_sym_BANGpp_BANG] = ACTIONS(300),
    [anon_sym_BANGp_BANG] = ACTIONS(300),
    [anon_sym_BANGmp_BANG] = ACTIONS(300),
    [anon_sym_BANGmf_BANG] = ACTIONS(300),
    [anon_sym_BANGf_BANG] = ACTIONS(300),
    [anon_sym_BANGff_BANG] = ACTIONS(300),
    [anon_sym_BANGfff_BANG] = ACTIONS(300),
    [anon_sym_BANGffff_BANG] = ACTIONS(300),
    [anon_sym_BANGsfz_BANG] = ACTIONS(300),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGsegno_BANG] = ACTIONS(300),
    [anon_sym_BANGcoda_BANG] = ACTIONS(300),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(300),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(300),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(300),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(300),
    [anon_sym_BANGfine_BANG] = ACTIONS(300),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(300),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(300),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(300),
  },
  [78] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(78),
    [sym_note_skip] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(556),
    [aux_sym_chord_symbol_token1] = ACTIONS(289),
    [sym_annotation] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(556),
    [sym_bar_line] = ACTIONS(289),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(287),
    [sym_thin_double_bar_line] = ACTIONS(289),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(289),
    [sym_start_of_repeated_section] = ACTIONS(289),
    [sym_end_of_repeated_section] = ACTIONS(289),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(289),
    [anon_sym_BANGtrill_BANG] = ACTIONS(289),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(289),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(289),
    [anon_sym_BANGmordent_BANG] = ACTIONS(289),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(289),
    [anon_sym_BANGroll_BANG] = ACTIONS(289),
    [anon_sym_BANGturn_BANG] = ACTIONS(289),
    [anon_sym_BANGturnx_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(289),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_BANG] = ACTIONS(289),
    [anon_sym_BANGaccent_BANG] = ACTIONS(289),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(289),
    [anon_sym_BANGfermata_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(289),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(289),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(289),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(289),
    [anon_sym_BANGplus_BANG] = ACTIONS(289),
    [anon_sym_BANGsnap_BANG] = ACTIONS(289),
    [anon_sym_BANGslide_BANG] = ACTIONS(289),
    [anon_sym_BANGwedge_BANG] = ACTIONS(289),
    [anon_sym_BANGupbow_BANG] = ACTIONS(289),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(289),
    [anon_sym_BANGopen_BANG] = ACTIONS(289),
    [anon_sym_BANGthumb_BANG] = ACTIONS(289),
    [anon_sym_BANGbreath_BANG] = ACTIONS(289),
    [anon_sym_BANGpppp_BANG] = ACTIONS(289),
    [anon_sym_BANGppp_BANG] = ACTIONS(289),
    [anon_sym_BANGpp_BANG] = ACTIONS(289),
    [anon_sym_BANGp_BANG] = ACTIONS(289),
    [anon_sym_BANGmp_BANG] = ACTIONS(289),
    [anon_sym_BANGmf_BANG] = ACTIONS(289),
    [anon_sym_BANGf_BANG] = ACTIONS(289),
    [anon_sym_BANGff_BANG] = ACTIONS(289),
    [anon_sym_BANGfff_BANG] = ACTIONS(289),
    [anon_sym_BANGffff_BANG] = ACTIONS(289),
    [anon_sym_BANGsfz_BANG] = ACTIONS(289),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGsegno_BANG] = ACTIONS(289),
    [anon_sym_BANGcoda_BANG] = ACTIONS(289),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(289),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(289),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(289),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(289),
    [anon_sym_BANGfine_BANG] = ACTIONS(289),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(289),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(289),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(289),
    [aux_sym_body_inline_info_token1] = ACTIONS(289),
  },
  [79] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(81),
    [sym_note_skip] = ACTIONS(277),
    [anon_sym_DASH] = ACTIONS(559),
    [aux_sym_chord_symbol_token1] = ACTIONS(277),
    [sym_annotation] = ACTIONS(277),
    [anon_sym_COMMA] = ACTIONS(559),
    [sym_bar_line] = ACTIONS(277),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(275),
    [sym_thin_double_bar_line] = ACTIONS(277),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(277),
    [sym_start_of_repeated_section] = ACTIONS(277),
    [sym_end_of_repeated_section] = ACTIONS(277),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(277),
    [anon_sym_BANGtrill_BANG] = ACTIONS(277),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(277),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(277),
    [anon_sym_BANGmordent_BANG] = ACTIONS(277),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(277),
    [anon_sym_BANGroll_BANG] = ACTIONS(277),
    [anon_sym_BANGturn_BANG] = ACTIONS(277),
    [anon_sym_BANGturnx_BANG] = ACTIONS(277),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(277),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(277),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(277),
    [anon_sym_BANG_GT_BANG] = ACTIONS(277),
    [anon_sym_BANGaccent_BANG] = ACTIONS(277),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(277),
    [anon_sym_BANGfermata_BANG] = ACTIONS(277),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(277),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(277),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(277),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(277),
    [anon_sym_BANGplus_BANG] = ACTIONS(277),
    [anon_sym_BANGsnap_BANG] = ACTIONS(277),
    [anon_sym_BANGslide_BANG] = ACTIONS(277),
    [anon_sym_BANGwedge_BANG] = ACTIONS(277),
    [anon_sym_BANGupbow_BANG] = ACTIONS(277),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(277),
    [anon_sym_BANGopen_BANG] = ACTIONS(277),
    [anon_sym_BANGthumb_BANG] = ACTIONS(277),
    [anon_sym_BANGbreath_BANG] = ACTIONS(277),
    [anon_sym_BANGpppp_BANG] = ACTIONS(277),
    [anon_sym_BANGppp_BANG] = ACTIONS(277),
    [anon_sym_BANGpp_BANG] = ACTIONS(277),
    [anon_sym_BANGp_BANG] = ACTIONS(277),
    [anon_sym_BANGmp_BANG] = ACTIONS(277),
    [anon_sym_BANGmf_BANG] = ACTIONS(277),
    [anon_sym_BANGf_BANG] = ACTIONS(277),
    [anon_sym_BANGff_BANG] = ACTIONS(277),
    [anon_sym_BANGfff_BANG] = ACTIONS(277),
    [anon_sym_BANGffff_BANG] = ACTIONS(277),
    [anon_sym_BANGsfz_BANG] = ACTIONS(277),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(277),
    [anon_sym_BANGsegno_BANG] = ACTIONS(277),
    [anon_sym_BANGcoda_BANG] = ACTIONS(277),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(277),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(277),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(277),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(277),
    [anon_sym_BANGfine_BANG] = ACTIONS(277),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(277),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(277),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(277),
    [aux_sym_body_inline_info_token1] = ACTIONS(277),
  },
  [80] = {
    [sym_nth_ending_number] = STATE(106),
    [sym_noCommentText] = ACTIONS(265),
    [sym_note_skip] = ACTIONS(265),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(535),
    [anon_sym_LBRACK] = ACTIONS(537),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(265),
    [sym_thin_double_bar_line] = ACTIONS(265),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(265),
    [sym_start_of_repeated_section] = ACTIONS(265),
    [sym_end_of_repeated_section] = ACTIONS(265),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(265),
    [anon_sym_BANGtrill_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGmordent_BANG] = ACTIONS(265),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(265),
    [anon_sym_BANGroll_BANG] = ACTIONS(265),
    [anon_sym_BANGturn_BANG] = ACTIONS(265),
    [anon_sym_BANGturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_BANG] = ACTIONS(265),
    [anon_sym_BANGaccent_BANG] = ACTIONS(265),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(265),
    [anon_sym_BANGfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(265),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(265),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(265),
    [anon_sym_BANGplus_BANG] = ACTIONS(265),
    [anon_sym_BANGsnap_BANG] = ACTIONS(265),
    [anon_sym_BANGslide_BANG] = ACTIONS(265),
    [anon_sym_BANGwedge_BANG] = ACTIONS(265),
    [anon_sym_BANGupbow_BANG] = ACTIONS(265),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(265),
    [anon_sym_BANGopen_BANG] = ACTIONS(265),
    [anon_sym_BANGthumb_BANG] = ACTIONS(265),
    [anon_sym_BANGbreath_BANG] = ACTIONS(265),
    [anon_sym_BANGpppp_BANG] = ACTIONS(265),
    [anon_sym_BANGppp_BANG] = ACTIONS(265),
    [anon_sym_BANGpp_BANG] = ACTIONS(265),
    [anon_sym_BANGp_BANG] = ACTIONS(265),
    [anon_sym_BANGmp_BANG] = ACTIONS(265),
    [anon_sym_BANGmf_BANG] = ACTIONS(265),
    [anon_sym_BANGf_BANG] = ACTIONS(265),
    [anon_sym_BANGff_BANG] = ACTIONS(265),
    [anon_sym_BANGfff_BANG] = ACTIONS(265),
    [anon_sym_BANGffff_BANG] = ACTIONS(265),
    [anon_sym_BANGsfz_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGsegno_BANG] = ACTIONS(265),
    [anon_sym_BANGcoda_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(265),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(265),
    [anon_sym_BANGfine_BANG] = ACTIONS(265),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(265),
  },
  [81] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(78),
    [sym_note_skip] = ACTIONS(300),
    [anon_sym_DASH] = ACTIONS(559),
    [aux_sym_chord_symbol_token1] = ACTIONS(300),
    [sym_annotation] = ACTIONS(300),
    [anon_sym_COMMA] = ACTIONS(559),
    [sym_bar_line] = ACTIONS(300),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(298),
    [sym_thin_double_bar_line] = ACTIONS(300),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(300),
    [sym_start_of_repeated_section] = ACTIONS(300),
    [sym_end_of_repeated_section] = ACTIONS(300),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(300),
    [anon_sym_BANGtrill_BANG] = ACTIONS(300),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(300),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(300),
    [anon_sym_BANGmordent_BANG] = ACTIONS(300),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(300),
    [anon_sym_BANGroll_BANG] = ACTIONS(300),
    [anon_sym_BANGturn_BANG] = ACTIONS(300),
    [anon_sym_BANGturnx_BANG] = ACTIONS(300),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(300),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(300),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(300),
    [anon_sym_BANG_GT_BANG] = ACTIONS(300),
    [anon_sym_BANGaccent_BANG] = ACTIONS(300),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(300),
    [anon_sym_BANGfermata_BANG] = ACTIONS(300),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(300),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(300),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(300),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(300),
    [anon_sym_BANGplus_BANG] = ACTIONS(300),
    [anon_sym_BANGsnap_BANG] = ACTIONS(300),
    [anon_sym_BANGslide_BANG] = ACTIONS(300),
    [anon_sym_BANGwedge_BANG] = ACTIONS(300),
    [anon_sym_BANGupbow_BANG] = ACTIONS(300),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(300),
    [anon_sym_BANGopen_BANG] = ACTIONS(300),
    [anon_sym_BANGthumb_BANG] = ACTIONS(300),
    [anon_sym_BANGbreath_BANG] = ACTIONS(300),
    [anon_sym_BANGpppp_BANG] = ACTIONS(300),
    [anon_sym_BANGppp_BANG] = ACTIONS(300),
    [anon_sym_BANGpp_BANG] = ACTIONS(300),
    [anon_sym_BANGp_BANG] = ACTIONS(300),
    [anon_sym_BANGmp_BANG] = ACTIONS(300),
    [anon_sym_BANGmf_BANG] = ACTIONS(300),
    [anon_sym_BANGf_BANG] = ACTIONS(300),
    [anon_sym_BANGff_BANG] = ACTIONS(300),
    [anon_sym_BANGfff_BANG] = ACTIONS(300),
    [anon_sym_BANGffff_BANG] = ACTIONS(300),
    [anon_sym_BANGsfz_BANG] = ACTIONS(300),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(300),
    [anon_sym_BANGsegno_BANG] = ACTIONS(300),
    [anon_sym_BANGcoda_BANG] = ACTIONS(300),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(300),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(300),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(300),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(300),
    [anon_sym_BANGfine_BANG] = ACTIONS(300),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(300),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(300),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(300),
    [aux_sym_body_inline_info_token1] = ACTIONS(300),
  },
  [82] = {
    [sym_noCommentText] = ACTIONS(289),
    [sym_note_skip] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [aux_sym_chord_symbol_token1] = ACTIONS(289),
    [sym_annotation] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(289),
    [sym_bar_line] = ACTIONS(289),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(289),
    [sym_thin_double_bar_line] = ACTIONS(289),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(289),
    [sym_start_of_repeated_section] = ACTIONS(289),
    [sym_end_of_repeated_section] = ACTIONS(289),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(289),
    [anon_sym_BANGtrill_BANG] = ACTIONS(289),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(289),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(289),
    [anon_sym_BANGmordent_BANG] = ACTIONS(289),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(289),
    [anon_sym_BANGroll_BANG] = ACTIONS(289),
    [anon_sym_BANGturn_BANG] = ACTIONS(289),
    [anon_sym_BANGturnx_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(289),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_BANG] = ACTIONS(289),
    [anon_sym_BANGaccent_BANG] = ACTIONS(289),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(289),
    [anon_sym_BANGfermata_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(289),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(289),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(289),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(289),
    [anon_sym_BANGplus_BANG] = ACTIONS(289),
    [anon_sym_BANGsnap_BANG] = ACTIONS(289),
    [anon_sym_BANGslide_BANG] = ACTIONS(289),
    [anon_sym_BANGwedge_BANG] = ACTIONS(289),
    [anon_sym_BANGupbow_BANG] = ACTIONS(289),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(289),
    [anon_sym_BANGopen_BANG] = ACTIONS(289),
    [anon_sym_BANGthumb_BANG] = ACTIONS(289),
    [anon_sym_BANGbreath_BANG] = ACTIONS(289),
    [anon_sym_BANGpppp_BANG] = ACTIONS(289),
    [anon_sym_BANGppp_BANG] = ACTIONS(289),
    [anon_sym_BANGpp_BANG] = ACTIONS(289),
    [anon_sym_BANGp_BANG] = ACTIONS(289),
    [anon_sym_BANGmp_BANG] = ACTIONS(289),
    [anon_sym_BANGmf_BANG] = ACTIONS(289),
    [anon_sym_BANGf_BANG] = ACTIONS(289),
    [anon_sym_BANGff_BANG] = ACTIONS(289),
    [anon_sym_BANGfff_BANG] = ACTIONS(289),
    [anon_sym_BANGffff_BANG] = ACTIONS(289),
    [anon_sym_BANGsfz_BANG] = ACTIONS(289),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGsegno_BANG] = ACTIONS(289),
    [anon_sym_BANGcoda_BANG] = ACTIONS(289),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(289),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(289),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(289),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(289),
    [anon_sym_BANGfine_BANG] = ACTIONS(289),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(289),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(289),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(289),
  },
  [83] = {
    [sym_note_skip] = ACTIONS(289),
    [anon_sym_DASH] = ACTIONS(289),
    [aux_sym_chord_symbol_token1] = ACTIONS(289),
    [sym_annotation] = ACTIONS(289),
    [anon_sym_COMMA] = ACTIONS(289),
    [sym_bar_line] = ACTIONS(289),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(287),
    [sym_thin_double_bar_line] = ACTIONS(289),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(289),
    [sym_start_of_repeated_section] = ACTIONS(289),
    [sym_end_of_repeated_section] = ACTIONS(289),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(289),
    [anon_sym_BANGtrill_BANG] = ACTIONS(289),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(289),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(289),
    [anon_sym_BANGmordent_BANG] = ACTIONS(289),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(289),
    [anon_sym_BANGroll_BANG] = ACTIONS(289),
    [anon_sym_BANGturn_BANG] = ACTIONS(289),
    [anon_sym_BANGturnx_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(289),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_BANG] = ACTIONS(289),
    [anon_sym_BANGaccent_BANG] = ACTIONS(289),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(289),
    [anon_sym_BANGfermata_BANG] = ACTIONS(289),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(289),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(289),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(289),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(289),
    [anon_sym_BANGplus_BANG] = ACTIONS(289),
    [anon_sym_BANGsnap_BANG] = ACTIONS(289),
    [anon_sym_BANGslide_BANG] = ACTIONS(289),
    [anon_sym_BANGwedge_BANG] = ACTIONS(289),
    [anon_sym_BANGupbow_BANG] = ACTIONS(289),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(289),
    [anon_sym_BANGopen_BANG] = ACTIONS(289),
    [anon_sym_BANGthumb_BANG] = ACTIONS(289),
    [anon_sym_BANGbreath_BANG] = ACTIONS(289),
    [anon_sym_BANGpppp_BANG] = ACTIONS(289),
    [anon_sym_BANGppp_BANG] = ACTIONS(289),
    [anon_sym_BANGpp_BANG] = ACTIONS(289),
    [anon_sym_BANGp_BANG] = ACTIONS(289),
    [anon_sym_BANGmp_BANG] = ACTIONS(289),
    [anon_sym_BANGmf_BANG] = ACTIONS(289),
    [anon_sym_BANGf_BANG] = ACTIONS(289),
    [anon_sym_BANGff_BANG] = ACTIONS(289),
    [anon_sym_BANGfff_BANG] = ACTIONS(289),
    [anon_sym_BANGffff_BANG] = ACTIONS(289),
    [anon_sym_BANGsfz_BANG] = ACTIONS(289),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(289),
    [anon_sym_BANGsegno_BANG] = ACTIONS(289),
    [anon_sym_BANGcoda_BANG] = ACTIONS(289),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(289),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(289),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(289),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(289),
    [anon_sym_BANGfine_BANG] = ACTIONS(289),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(289),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(289),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(289),
    [aux_sym_body_inline_info_token1] = ACTIONS(289),
  },
  [84] = {
    [sym_note_skip] = ACTIONS(396),
    [aux_sym_chord_symbol_token1] = ACTIONS(396),
    [sym_annotation] = ACTIONS(396),
    [sym_bar_line] = ACTIONS(396),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(394),
    [sym_thin_double_bar_line] = ACTIONS(396),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(396),
    [sym_start_of_repeated_section] = ACTIONS(396),
    [sym_end_of_repeated_section] = ACTIONS(396),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(396),
    [anon_sym_BANGtrill_BANG] = ACTIONS(396),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(396),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(396),
    [anon_sym_BANGmordent_BANG] = ACTIONS(396),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(396),
    [anon_sym_BANGroll_BANG] = ACTIONS(396),
    [anon_sym_BANGturn_BANG] = ACTIONS(396),
    [anon_sym_BANGturnx_BANG] = ACTIONS(396),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(396),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(396),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(396),
    [anon_sym_BANG_GT_BANG] = ACTIONS(396),
    [anon_sym_BANGaccent_BANG] = ACTIONS(396),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(396),
    [anon_sym_BANGfermata_BANG] = ACTIONS(396),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(396),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(396),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(396),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(396),
    [anon_sym_BANGplus_BANG] = ACTIONS(396),
    [anon_sym_BANGsnap_BANG] = ACTIONS(396),
    [anon_sym_BANGslide_BANG] = ACTIONS(396),
    [anon_sym_BANGwedge_BANG] = ACTIONS(396),
    [anon_sym_BANGupbow_BANG] = ACTIONS(396),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(396),
    [anon_sym_BANGopen_BANG] = ACTIONS(396),
    [anon_sym_BANGthumb_BANG] = ACTIONS(396),
    [anon_sym_BANGbreath_BANG] = ACTIONS(396),
    [anon_sym_BANGpppp_BANG] = ACTIONS(396),
    [anon_sym_BANGppp_BANG] = ACTIONS(396),
    [anon_sym_BANGpp_BANG] = ACTIONS(396),
    [anon_sym_BANGp_BANG] = ACTIONS(396),
    [anon_sym_BANGmp_BANG] = ACTIONS(396),
    [anon_sym_BANGmf_BANG] = ACTIONS(396),
    [anon_sym_BANGf_BANG] = ACTIONS(396),
    [anon_sym_BANGff_BANG] = ACTIONS(396),
    [anon_sym_BANGfff_BANG] = ACTIONS(396),
    [anon_sym_BANGffff_BANG] = ACTIONS(396),
    [anon_sym_BANGsfz_BANG] = ACTIONS(396),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGsegno_BANG] = ACTIONS(396),
    [anon_sym_BANGcoda_BANG] = ACTIONS(396),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(396),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(396),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(396),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(396),
    [anon_sym_BANGfine_BANG] = ACTIONS(396),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(396),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(396),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(396),
    [aux_sym_body_inline_info_token1] = ACTIONS(396),
  },
  [85] = {
    [sym_note_skip] = ACTIONS(400),
    [aux_sym_chord_symbol_token1] = ACTIONS(400),
    [sym_annotation] = ACTIONS(400),
    [sym_bar_line] = ACTIONS(400),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(398),
    [sym_thin_double_bar_line] = ACTIONS(400),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(400),
    [sym_start_of_repeated_section] = ACTIONS(400),
    [sym_end_of_repeated_section] = ACTIONS(400),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(400),
    [anon_sym_BANGtrill_BANG] = ACTIONS(400),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(400),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(400),
    [anon_sym_BANGmordent_BANG] = ACTIONS(400),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(400),
    [anon_sym_BANGroll_BANG] = ACTIONS(400),
    [anon_sym_BANGturn_BANG] = ACTIONS(400),
    [anon_sym_BANGturnx_BANG] = ACTIONS(400),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(400),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(400),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(400),
    [anon_sym_BANG_GT_BANG] = ACTIONS(400),
    [anon_sym_BANGaccent_BANG] = ACTIONS(400),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(400),
    [anon_sym_BANGfermata_BANG] = ACTIONS(400),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(400),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(400),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(400),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(400),
    [anon_sym_BANGplus_BANG] = ACTIONS(400),
    [anon_sym_BANGsnap_BANG] = ACTIONS(400),
    [anon_sym_BANGslide_BANG] = ACTIONS(400),
    [anon_sym_BANGwedge_BANG] = ACTIONS(400),
    [anon_sym_BANGupbow_BANG] = ACTIONS(400),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(400),
    [anon_sym_BANGopen_BANG] = ACTIONS(400),
    [anon_sym_BANGthumb_BANG] = ACTIONS(400),
    [anon_sym_BANGbreath_BANG] = ACTIONS(400),
    [anon_sym_BANGpppp_BANG] = ACTIONS(400),
    [anon_sym_BANGppp_BANG] = ACTIONS(400),
    [anon_sym_BANGpp_BANG] = ACTIONS(400),
    [anon_sym_BANGp_BANG] = ACTIONS(400),
    [anon_sym_BANGmp_BANG] = ACTIONS(400),
    [anon_sym_BANGmf_BANG] = ACTIONS(400),
    [anon_sym_BANGf_BANG] = ACTIONS(400),
    [anon_sym_BANGff_BANG] = ACTIONS(400),
    [anon_sym_BANGfff_BANG] = ACTIONS(400),
    [anon_sym_BANGffff_BANG] = ACTIONS(400),
    [anon_sym_BANGsfz_BANG] = ACTIONS(400),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGsegno_BANG] = ACTIONS(400),
    [anon_sym_BANGcoda_BANG] = ACTIONS(400),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(400),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(400),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(400),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(400),
    [anon_sym_BANGfine_BANG] = ACTIONS(400),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(400),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(400),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(400),
    [aux_sym_body_inline_info_token1] = ACTIONS(400),
  },
  [86] = {
    [sym_note_skip] = ACTIONS(561),
    [aux_sym_chord_symbol_token1] = ACTIONS(561),
    [sym_annotation] = ACTIONS(561),
    [sym_bar_line] = ACTIONS(561),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(563),
    [sym_thin_double_bar_line] = ACTIONS(561),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(561),
    [sym_start_of_repeated_section] = ACTIONS(561),
    [sym_end_of_repeated_section] = ACTIONS(561),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(561),
    [anon_sym_BANGtrill_BANG] = ACTIONS(561),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(561),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(561),
    [anon_sym_BANGmordent_BANG] = ACTIONS(561),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(561),
    [anon_sym_BANGroll_BANG] = ACTIONS(561),
    [anon_sym_BANGturn_BANG] = ACTIONS(561),
    [anon_sym_BANGturnx_BANG] = ACTIONS(561),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(561),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(561),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(561),
    [anon_sym_BANG_GT_BANG] = ACTIONS(561),
    [anon_sym_BANGaccent_BANG] = ACTIONS(561),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(561),
    [anon_sym_BANGfermata_BANG] = ACTIONS(561),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(561),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(561),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(561),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(561),
    [anon_sym_BANGplus_BANG] = ACTIONS(561),
    [anon_sym_BANGsnap_BANG] = ACTIONS(561),
    [anon_sym_BANGslide_BANG] = ACTIONS(561),
    [anon_sym_BANGwedge_BANG] = ACTIONS(561),
    [anon_sym_BANGupbow_BANG] = ACTIONS(561),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(561),
    [anon_sym_BANGopen_BANG] = ACTIONS(561),
    [anon_sym_BANGthumb_BANG] = ACTIONS(561),
    [anon_sym_BANGbreath_BANG] = ACTIONS(561),
    [anon_sym_BANGpppp_BANG] = ACTIONS(561),
    [anon_sym_BANGppp_BANG] = ACTIONS(561),
    [anon_sym_BANGpp_BANG] = ACTIONS(561),
    [anon_sym_BANGp_BANG] = ACTIONS(561),
    [anon_sym_BANGmp_BANG] = ACTIONS(561),
    [anon_sym_BANGmf_BANG] = ACTIONS(561),
    [anon_sym_BANGf_BANG] = ACTIONS(561),
    [anon_sym_BANGff_BANG] = ACTIONS(561),
    [anon_sym_BANGfff_BANG] = ACTIONS(561),
    [anon_sym_BANGffff_BANG] = ACTIONS(561),
    [anon_sym_BANGsfz_BANG] = ACTIONS(561),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGsegno_BANG] = ACTIONS(561),
    [anon_sym_BANGcoda_BANG] = ACTIONS(561),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(561),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(561),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(561),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(561),
    [anon_sym_BANGfine_BANG] = ACTIONS(561),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(561),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(561),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(561),
    [aux_sym_body_inline_info_token1] = ACTIONS(561),
  },
  [87] = {
    [sym_note_skip] = ACTIONS(376),
    [aux_sym_chord_symbol_token1] = ACTIONS(376),
    [sym_annotation] = ACTIONS(376),
    [sym_bar_line] = ACTIONS(376),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(374),
    [sym_thin_double_bar_line] = ACTIONS(376),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(376),
    [sym_start_of_repeated_section] = ACTIONS(376),
    [sym_end_of_repeated_section] = ACTIONS(376),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(376),
    [anon_sym_BANGtrill_BANG] = ACTIONS(376),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(376),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(376),
    [anon_sym_BANGmordent_BANG] = ACTIONS(376),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(376),
    [anon_sym_BANGroll_BANG] = ACTIONS(376),
    [anon_sym_BANGturn_BANG] = ACTIONS(376),
    [anon_sym_BANGturnx_BANG] = ACTIONS(376),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(376),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(376),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(376),
    [anon_sym_BANG_GT_BANG] = ACTIONS(376),
    [anon_sym_BANGaccent_BANG] = ACTIONS(376),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(376),
    [anon_sym_BANGfermata_BANG] = ACTIONS(376),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(376),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(376),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(376),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(376),
    [anon_sym_BANGplus_BANG] = ACTIONS(376),
    [anon_sym_BANGsnap_BANG] = ACTIONS(376),
    [anon_sym_BANGslide_BANG] = ACTIONS(376),
    [anon_sym_BANGwedge_BANG] = ACTIONS(376),
    [anon_sym_BANGupbow_BANG] = ACTIONS(376),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(376),
    [anon_sym_BANGopen_BANG] = ACTIONS(376),
    [anon_sym_BANGthumb_BANG] = ACTIONS(376),
    [anon_sym_BANGbreath_BANG] = ACTIONS(376),
    [anon_sym_BANGpppp_BANG] = ACTIONS(376),
    [anon_sym_BANGppp_BANG] = ACTIONS(376),
    [anon_sym_BANGpp_BANG] = ACTIONS(376),
    [anon_sym_BANGp_BANG] = ACTIONS(376),
    [anon_sym_BANGmp_BANG] = ACTIONS(376),
    [anon_sym_BANGmf_BANG] = ACTIONS(376),
    [anon_sym_BANGf_BANG] = ACTIONS(376),
    [anon_sym_BANGff_BANG] = ACTIONS(376),
    [anon_sym_BANGfff_BANG] = ACTIONS(376),
    [anon_sym_BANGffff_BANG] = ACTIONS(376),
    [anon_sym_BANGsfz_BANG] = ACTIONS(376),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGsegno_BANG] = ACTIONS(376),
    [anon_sym_BANGcoda_BANG] = ACTIONS(376),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(376),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(376),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(376),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(376),
    [anon_sym_BANGfine_BANG] = ACTIONS(376),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(376),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(376),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(376),
    [aux_sym_body_inline_info_token1] = ACTIONS(376),
  },
  [88] = {
    [sym_noCommentText] = ACTIONS(565),
    [sym_note_skip] = ACTIONS(565),
    [aux_sym_chord_symbol_token1] = ACTIONS(565),
    [sym_annotation] = ACTIONS(565),
    [sym_bar_line] = ACTIONS(565),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(565),
    [sym_thin_double_bar_line] = ACTIONS(565),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(565),
    [sym_start_of_repeated_section] = ACTIONS(565),
    [sym_end_of_repeated_section] = ACTIONS(565),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(565),
    [anon_sym_BANGtrill_BANG] = ACTIONS(565),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(565),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(565),
    [anon_sym_BANGmordent_BANG] = ACTIONS(565),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(565),
    [anon_sym_BANGroll_BANG] = ACTIONS(565),
    [anon_sym_BANGturn_BANG] = ACTIONS(565),
    [anon_sym_BANGturnx_BANG] = ACTIONS(565),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(565),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(565),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(565),
    [anon_sym_BANG_GT_BANG] = ACTIONS(565),
    [anon_sym_BANGaccent_BANG] = ACTIONS(565),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(565),
    [anon_sym_BANGfermata_BANG] = ACTIONS(565),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(565),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(565),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(565),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(565),
    [anon_sym_BANGplus_BANG] = ACTIONS(565),
    [anon_sym_BANGsnap_BANG] = ACTIONS(565),
    [anon_sym_BANGslide_BANG] = ACTIONS(565),
    [anon_sym_BANGwedge_BANG] = ACTIONS(565),
    [anon_sym_BANGupbow_BANG] = ACTIONS(565),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(565),
    [anon_sym_BANGopen_BANG] = ACTIONS(565),
    [anon_sym_BANGthumb_BANG] = ACTIONS(565),
    [anon_sym_BANGbreath_BANG] = ACTIONS(565),
    [anon_sym_BANGpppp_BANG] = ACTIONS(565),
    [anon_sym_BANGppp_BANG] = ACTIONS(565),
    [anon_sym_BANGpp_BANG] = ACTIONS(565),
    [anon_sym_BANGp_BANG] = ACTIONS(565),
    [anon_sym_BANGmp_BANG] = ACTIONS(565),
    [anon_sym_BANGmf_BANG] = ACTIONS(565),
    [anon_sym_BANGf_BANG] = ACTIONS(565),
    [anon_sym_BANGff_BANG] = ACTIONS(565),
    [anon_sym_BANGfff_BANG] = ACTIONS(565),
    [anon_sym_BANGffff_BANG] = ACTIONS(565),
    [anon_sym_BANGsfz_BANG] = ACTIONS(565),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGsegno_BANG] = ACTIONS(565),
    [anon_sym_BANGcoda_BANG] = ACTIONS(565),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(565),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(565),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(565),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(565),
    [anon_sym_BANGfine_BANG] = ACTIONS(565),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(565),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(565),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(565),
  },
  [89] = {
    [sym_note_skip] = ACTIONS(388),
    [aux_sym_chord_symbol_token1] = ACTIONS(388),
    [sym_annotation] = ACTIONS(388),
    [sym_bar_line] = ACTIONS(388),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(386),
    [sym_thin_double_bar_line] = ACTIONS(388),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(388),
    [sym_start_of_repeated_section] = ACTIONS(388),
    [sym_end_of_repeated_section] = ACTIONS(388),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(388),
    [anon_sym_BANGtrill_BANG] = ACTIONS(388),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(388),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(388),
    [anon_sym_BANGmordent_BANG] = ACTIONS(388),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(388),
    [anon_sym_BANGroll_BANG] = ACTIONS(388),
    [anon_sym_BANGturn_BANG] = ACTIONS(388),
    [anon_sym_BANGturnx_BANG] = ACTIONS(388),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(388),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(388),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(388),
    [anon_sym_BANG_GT_BANG] = ACTIONS(388),
    [anon_sym_BANGaccent_BANG] = ACTIONS(388),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(388),
    [anon_sym_BANGfermata_BANG] = ACTIONS(388),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(388),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(388),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(388),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(388),
    [anon_sym_BANGplus_BANG] = ACTIONS(388),
    [anon_sym_BANGsnap_BANG] = ACTIONS(388),
    [anon_sym_BANGslide_BANG] = ACTIONS(388),
    [anon_sym_BANGwedge_BANG] = ACTIONS(388),
    [anon_sym_BANGupbow_BANG] = ACTIONS(388),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(388),
    [anon_sym_BANGopen_BANG] = ACTIONS(388),
    [anon_sym_BANGthumb_BANG] = ACTIONS(388),
    [anon_sym_BANGbreath_BANG] = ACTIONS(388),
    [anon_sym_BANGpppp_BANG] = ACTIONS(388),
    [anon_sym_BANGppp_BANG] = ACTIONS(388),
    [anon_sym_BANGpp_BANG] = ACTIONS(388),
    [anon_sym_BANGp_BANG] = ACTIONS(388),
    [anon_sym_BANGmp_BANG] = ACTIONS(388),
    [anon_sym_BANGmf_BANG] = ACTIONS(388),
    [anon_sym_BANGf_BANG] = ACTIONS(388),
    [anon_sym_BANGff_BANG] = ACTIONS(388),
    [anon_sym_BANGfff_BANG] = ACTIONS(388),
    [anon_sym_BANGffff_BANG] = ACTIONS(388),
    [anon_sym_BANGsfz_BANG] = ACTIONS(388),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGsegno_BANG] = ACTIONS(388),
    [anon_sym_BANGcoda_BANG] = ACTIONS(388),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(388),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(388),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(388),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(388),
    [anon_sym_BANGfine_BANG] = ACTIONS(388),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(388),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(388),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(388),
    [aux_sym_body_inline_info_token1] = ACTIONS(388),
  },
  [90] = {
    [sym_note_skip] = ACTIONS(565),
    [aux_sym_chord_symbol_token1] = ACTIONS(565),
    [sym_annotation] = ACTIONS(565),
    [sym_bar_line] = ACTIONS(565),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(567),
    [sym_thin_double_bar_line] = ACTIONS(565),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(565),
    [sym_start_of_repeated_section] = ACTIONS(565),
    [sym_end_of_repeated_section] = ACTIONS(565),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(565),
    [anon_sym_BANGtrill_BANG] = ACTIONS(565),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(565),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(565),
    [anon_sym_BANGmordent_BANG] = ACTIONS(565),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(565),
    [anon_sym_BANGroll_BANG] = ACTIONS(565),
    [anon_sym_BANGturn_BANG] = ACTIONS(565),
    [anon_sym_BANGturnx_BANG] = ACTIONS(565),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(565),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(565),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(565),
    [anon_sym_BANG_GT_BANG] = ACTIONS(565),
    [anon_sym_BANGaccent_BANG] = ACTIONS(565),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(565),
    [anon_sym_BANGfermata_BANG] = ACTIONS(565),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(565),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(565),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(565),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(565),
    [anon_sym_BANGplus_BANG] = ACTIONS(565),
    [anon_sym_BANGsnap_BANG] = ACTIONS(565),
    [anon_sym_BANGslide_BANG] = ACTIONS(565),
    [anon_sym_BANGwedge_BANG] = ACTIONS(565),
    [anon_sym_BANGupbow_BANG] = ACTIONS(565),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(565),
    [anon_sym_BANGopen_BANG] = ACTIONS(565),
    [anon_sym_BANGthumb_BANG] = ACTIONS(565),
    [anon_sym_BANGbreath_BANG] = ACTIONS(565),
    [anon_sym_BANGpppp_BANG] = ACTIONS(565),
    [anon_sym_BANGppp_BANG] = ACTIONS(565),
    [anon_sym_BANGpp_BANG] = ACTIONS(565),
    [anon_sym_BANGp_BANG] = ACTIONS(565),
    [anon_sym_BANGmp_BANG] = ACTIONS(565),
    [anon_sym_BANGmf_BANG] = ACTIONS(565),
    [anon_sym_BANGf_BANG] = ACTIONS(565),
    [anon_sym_BANGff_BANG] = ACTIONS(565),
    [anon_sym_BANGfff_BANG] = ACTIONS(565),
    [anon_sym_BANGffff_BANG] = ACTIONS(565),
    [anon_sym_BANGsfz_BANG] = ACTIONS(565),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(565),
    [anon_sym_BANGsegno_BANG] = ACTIONS(565),
    [anon_sym_BANGcoda_BANG] = ACTIONS(565),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(565),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(565),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(565),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(565),
    [anon_sym_BANGfine_BANG] = ACTIONS(565),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(565),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(565),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(565),
    [aux_sym_body_inline_info_token1] = ACTIONS(565),
  },
  [91] = {
    [sym_note_skip] = ACTIONS(392),
    [aux_sym_chord_symbol_token1] = ACTIONS(392),
    [sym_annotation] = ACTIONS(392),
    [sym_bar_line] = ACTIONS(392),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(390),
    [sym_thin_double_bar_line] = ACTIONS(392),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(392),
    [sym_start_of_repeated_section] = ACTIONS(392),
    [sym_end_of_repeated_section] = ACTIONS(392),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(392),
    [anon_sym_BANGtrill_BANG] = ACTIONS(392),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(392),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(392),
    [anon_sym_BANGmordent_BANG] = ACTIONS(392),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(392),
    [anon_sym_BANGroll_BANG] = ACTIONS(392),
    [anon_sym_BANGturn_BANG] = ACTIONS(392),
    [anon_sym_BANGturnx_BANG] = ACTIONS(392),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(392),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(392),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(392),
    [anon_sym_BANG_GT_BANG] = ACTIONS(392),
    [anon_sym_BANGaccent_BANG] = ACTIONS(392),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(392),
    [anon_sym_BANGfermata_BANG] = ACTIONS(392),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(392),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(392),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(392),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(392),
    [anon_sym_BANGplus_BANG] = ACTIONS(392),
    [anon_sym_BANGsnap_BANG] = ACTIONS(392),
    [anon_sym_BANGslide_BANG] = ACTIONS(392),
    [anon_sym_BANGwedge_BANG] = ACTIONS(392),
    [anon_sym_BANGupbow_BANG] = ACTIONS(392),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(392),
    [anon_sym_BANGopen_BANG] = ACTIONS(392),
    [anon_sym_BANGthumb_BANG] = ACTIONS(392),
    [anon_sym_BANGbreath_BANG] = ACTIONS(392),
    [anon_sym_BANGpppp_BANG] = ACTIONS(392),
    [anon_sym_BANGppp_BANG] = ACTIONS(392),
    [anon_sym_BANGpp_BANG] = ACTIONS(392),
    [anon_sym_BANGp_BANG] = ACTIONS(392),
    [anon_sym_BANGmp_BANG] = ACTIONS(392),
    [anon_sym_BANGmf_BANG] = ACTIONS(392),
    [anon_sym_BANGf_BANG] = ACTIONS(392),
    [anon_sym_BANGff_BANG] = ACTIONS(392),
    [anon_sym_BANGfff_BANG] = ACTIONS(392),
    [anon_sym_BANGffff_BANG] = ACTIONS(392),
    [anon_sym_BANGsfz_BANG] = ACTIONS(392),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGsegno_BANG] = ACTIONS(392),
    [anon_sym_BANGcoda_BANG] = ACTIONS(392),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(392),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(392),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(392),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(392),
    [anon_sym_BANGfine_BANG] = ACTIONS(392),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(392),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(392),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(392),
    [aux_sym_body_inline_info_token1] = ACTIONS(392),
  },
  [92] = {
    [sym_noCommentText] = ACTIONS(388),
    [sym_note_skip] = ACTIONS(388),
    [aux_sym_chord_symbol_token1] = ACTIONS(388),
    [sym_annotation] = ACTIONS(388),
    [sym_bar_line] = ACTIONS(388),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(388),
    [sym_thin_double_bar_line] = ACTIONS(388),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(388),
    [sym_start_of_repeated_section] = ACTIONS(388),
    [sym_end_of_repeated_section] = ACTIONS(388),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(388),
    [anon_sym_BANGtrill_BANG] = ACTIONS(388),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(388),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(388),
    [anon_sym_BANGmordent_BANG] = ACTIONS(388),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(388),
    [anon_sym_BANGroll_BANG] = ACTIONS(388),
    [anon_sym_BANGturn_BANG] = ACTIONS(388),
    [anon_sym_BANGturnx_BANG] = ACTIONS(388),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(388),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(388),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(388),
    [anon_sym_BANG_GT_BANG] = ACTIONS(388),
    [anon_sym_BANGaccent_BANG] = ACTIONS(388),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(388),
    [anon_sym_BANGfermata_BANG] = ACTIONS(388),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(388),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(388),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(388),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(388),
    [anon_sym_BANGplus_BANG] = ACTIONS(388),
    [anon_sym_BANGsnap_BANG] = ACTIONS(388),
    [anon_sym_BANGslide_BANG] = ACTIONS(388),
    [anon_sym_BANGwedge_BANG] = ACTIONS(388),
    [anon_sym_BANGupbow_BANG] = ACTIONS(388),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(388),
    [anon_sym_BANGopen_BANG] = ACTIONS(388),
    [anon_sym_BANGthumb_BANG] = ACTIONS(388),
    [anon_sym_BANGbreath_BANG] = ACTIONS(388),
    [anon_sym_BANGpppp_BANG] = ACTIONS(388),
    [anon_sym_BANGppp_BANG] = ACTIONS(388),
    [anon_sym_BANGpp_BANG] = ACTIONS(388),
    [anon_sym_BANGp_BANG] = ACTIONS(388),
    [anon_sym_BANGmp_BANG] = ACTIONS(388),
    [anon_sym_BANGmf_BANG] = ACTIONS(388),
    [anon_sym_BANGf_BANG] = ACTIONS(388),
    [anon_sym_BANGff_BANG] = ACTIONS(388),
    [anon_sym_BANGfff_BANG] = ACTIONS(388),
    [anon_sym_BANGffff_BANG] = ACTIONS(388),
    [anon_sym_BANGsfz_BANG] = ACTIONS(388),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(388),
    [anon_sym_BANGsegno_BANG] = ACTIONS(388),
    [anon_sym_BANGcoda_BANG] = ACTIONS(388),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(388),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(388),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(388),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(388),
    [anon_sym_BANGfine_BANG] = ACTIONS(388),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(388),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(388),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(388),
  },
  [93] = {
    [sym_note_skip] = ACTIONS(384),
    [aux_sym_chord_symbol_token1] = ACTIONS(384),
    [sym_annotation] = ACTIONS(384),
    [sym_bar_line] = ACTIONS(384),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(382),
    [sym_thin_double_bar_line] = ACTIONS(384),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(384),
    [sym_start_of_repeated_section] = ACTIONS(384),
    [sym_end_of_repeated_section] = ACTIONS(384),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(384),
    [anon_sym_BANGtrill_BANG] = ACTIONS(384),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(384),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(384),
    [anon_sym_BANGmordent_BANG] = ACTIONS(384),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(384),
    [anon_sym_BANGroll_BANG] = ACTIONS(384),
    [anon_sym_BANGturn_BANG] = ACTIONS(384),
    [anon_sym_BANGturnx_BANG] = ACTIONS(384),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(384),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(384),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(384),
    [anon_sym_BANG_GT_BANG] = ACTIONS(384),
    [anon_sym_BANGaccent_BANG] = ACTIONS(384),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(384),
    [anon_sym_BANGfermata_BANG] = ACTIONS(384),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(384),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(384),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(384),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(384),
    [anon_sym_BANGplus_BANG] = ACTIONS(384),
    [anon_sym_BANGsnap_BANG] = ACTIONS(384),
    [anon_sym_BANGslide_BANG] = ACTIONS(384),
    [anon_sym_BANGwedge_BANG] = ACTIONS(384),
    [anon_sym_BANGupbow_BANG] = ACTIONS(384),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(384),
    [anon_sym_BANGopen_BANG] = ACTIONS(384),
    [anon_sym_BANGthumb_BANG] = ACTIONS(384),
    [anon_sym_BANGbreath_BANG] = ACTIONS(384),
    [anon_sym_BANGpppp_BANG] = ACTIONS(384),
    [anon_sym_BANGppp_BANG] = ACTIONS(384),
    [anon_sym_BANGpp_BANG] = ACTIONS(384),
    [anon_sym_BANGp_BANG] = ACTIONS(384),
    [anon_sym_BANGmp_BANG] = ACTIONS(384),
    [anon_sym_BANGmf_BANG] = ACTIONS(384),
    [anon_sym_BANGf_BANG] = ACTIONS(384),
    [anon_sym_BANGff_BANG] = ACTIONS(384),
    [anon_sym_BANGfff_BANG] = ACTIONS(384),
    [anon_sym_BANGffff_BANG] = ACTIONS(384),
    [anon_sym_BANGsfz_BANG] = ACTIONS(384),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGsegno_BANG] = ACTIONS(384),
    [anon_sym_BANGcoda_BANG] = ACTIONS(384),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(384),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(384),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(384),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(384),
    [anon_sym_BANGfine_BANG] = ACTIONS(384),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(384),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(384),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(384),
    [aux_sym_body_inline_info_token1] = ACTIONS(384),
  },
  [94] = {
    [sym_note_skip] = ACTIONS(380),
    [aux_sym_chord_symbol_token1] = ACTIONS(380),
    [sym_annotation] = ACTIONS(380),
    [sym_bar_line] = ACTIONS(380),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(378),
    [sym_thin_double_bar_line] = ACTIONS(380),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(380),
    [sym_start_of_repeated_section] = ACTIONS(380),
    [sym_end_of_repeated_section] = ACTIONS(380),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(380),
    [anon_sym_BANGtrill_BANG] = ACTIONS(380),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(380),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(380),
    [anon_sym_BANGmordent_BANG] = ACTIONS(380),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(380),
    [anon_sym_BANGroll_BANG] = ACTIONS(380),
    [anon_sym_BANGturn_BANG] = ACTIONS(380),
    [anon_sym_BANGturnx_BANG] = ACTIONS(380),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(380),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(380),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(380),
    [anon_sym_BANG_GT_BANG] = ACTIONS(380),
    [anon_sym_BANGaccent_BANG] = ACTIONS(380),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(380),
    [anon_sym_BANGfermata_BANG] = ACTIONS(380),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(380),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(380),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(380),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(380),
    [anon_sym_BANGplus_BANG] = ACTIONS(380),
    [anon_sym_BANGsnap_BANG] = ACTIONS(380),
    [anon_sym_BANGslide_BANG] = ACTIONS(380),
    [anon_sym_BANGwedge_BANG] = ACTIONS(380),
    [anon_sym_BANGupbow_BANG] = ACTIONS(380),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(380),
    [anon_sym_BANGopen_BANG] = ACTIONS(380),
    [anon_sym_BANGthumb_BANG] = ACTIONS(380),
    [anon_sym_BANGbreath_BANG] = ACTIONS(380),
    [anon_sym_BANGpppp_BANG] = ACTIONS(380),
    [anon_sym_BANGppp_BANG] = ACTIONS(380),
    [anon_sym_BANGpp_BANG] = ACTIONS(380),
    [anon_sym_BANGp_BANG] = ACTIONS(380),
    [anon_sym_BANGmp_BANG] = ACTIONS(380),
    [anon_sym_BANGmf_BANG] = ACTIONS(380),
    [anon_sym_BANGf_BANG] = ACTIONS(380),
    [anon_sym_BANGff_BANG] = ACTIONS(380),
    [anon_sym_BANGfff_BANG] = ACTIONS(380),
    [anon_sym_BANGffff_BANG] = ACTIONS(380),
    [anon_sym_BANGsfz_BANG] = ACTIONS(380),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGsegno_BANG] = ACTIONS(380),
    [anon_sym_BANGcoda_BANG] = ACTIONS(380),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(380),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(380),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(380),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(380),
    [anon_sym_BANGfine_BANG] = ACTIONS(380),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(380),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(380),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(380),
    [aux_sym_body_inline_info_token1] = ACTIONS(380),
  },
  [95] = {
    [sym_note_skip] = ACTIONS(569),
    [aux_sym_chord_symbol_token1] = ACTIONS(569),
    [sym_annotation] = ACTIONS(569),
    [sym_bar_line] = ACTIONS(569),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(571),
    [sym_thin_double_bar_line] = ACTIONS(569),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(569),
    [sym_start_of_repeated_section] = ACTIONS(569),
    [sym_end_of_repeated_section] = ACTIONS(569),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(569),
    [anon_sym_BANGtrill_BANG] = ACTIONS(569),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(569),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(569),
    [anon_sym_BANGmordent_BANG] = ACTIONS(569),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(569),
    [anon_sym_BANGroll_BANG] = ACTIONS(569),
    [anon_sym_BANGturn_BANG] = ACTIONS(569),
    [anon_sym_BANGturnx_BANG] = ACTIONS(569),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(569),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(569),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(569),
    [anon_sym_BANG_GT_BANG] = ACTIONS(569),
    [anon_sym_BANGaccent_BANG] = ACTIONS(569),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(569),
    [anon_sym_BANGfermata_BANG] = ACTIONS(569),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(569),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(569),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(569),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(569),
    [anon_sym_BANGplus_BANG] = ACTIONS(569),
    [anon_sym_BANGsnap_BANG] = ACTIONS(569),
    [anon_sym_BANGslide_BANG] = ACTIONS(569),
    [anon_sym_BANGwedge_BANG] = ACTIONS(569),
    [anon_sym_BANGupbow_BANG] = ACTIONS(569),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(569),
    [anon_sym_BANGopen_BANG] = ACTIONS(569),
    [anon_sym_BANGthumb_BANG] = ACTIONS(569),
    [anon_sym_BANGbreath_BANG] = ACTIONS(569),
    [anon_sym_BANGpppp_BANG] = ACTIONS(569),
    [anon_sym_BANGppp_BANG] = ACTIONS(569),
    [anon_sym_BANGpp_BANG] = ACTIONS(569),
    [anon_sym_BANGp_BANG] = ACTIONS(569),
    [anon_sym_BANGmp_BANG] = ACTIONS(569),
    [anon_sym_BANGmf_BANG] = ACTIONS(569),
    [anon_sym_BANGf_BANG] = ACTIONS(569),
    [anon_sym_BANGff_BANG] = ACTIONS(569),
    [anon_sym_BANGfff_BANG] = ACTIONS(569),
    [anon_sym_BANGffff_BANG] = ACTIONS(569),
    [anon_sym_BANGsfz_BANG] = ACTIONS(569),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGsegno_BANG] = ACTIONS(569),
    [anon_sym_BANGcoda_BANG] = ACTIONS(569),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(569),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(569),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(569),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(569),
    [anon_sym_BANGfine_BANG] = ACTIONS(569),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(569),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(569),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(569),
    [aux_sym_body_inline_info_token1] = ACTIONS(569),
  },
  [96] = {
    [sym_noCommentText] = ACTIONS(400),
    [sym_note_skip] = ACTIONS(400),
    [aux_sym_chord_symbol_token1] = ACTIONS(400),
    [sym_annotation] = ACTIONS(400),
    [sym_bar_line] = ACTIONS(400),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(400),
    [sym_thin_double_bar_line] = ACTIONS(400),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(400),
    [sym_start_of_repeated_section] = ACTIONS(400),
    [sym_end_of_repeated_section] = ACTIONS(400),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(400),
    [anon_sym_BANGtrill_BANG] = ACTIONS(400),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(400),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(400),
    [anon_sym_BANGmordent_BANG] = ACTIONS(400),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(400),
    [anon_sym_BANGroll_BANG] = ACTIONS(400),
    [anon_sym_BANGturn_BANG] = ACTIONS(400),
    [anon_sym_BANGturnx_BANG] = ACTIONS(400),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(400),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(400),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(400),
    [anon_sym_BANG_GT_BANG] = ACTIONS(400),
    [anon_sym_BANGaccent_BANG] = ACTIONS(400),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(400),
    [anon_sym_BANGfermata_BANG] = ACTIONS(400),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(400),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(400),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(400),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(400),
    [anon_sym_BANGplus_BANG] = ACTIONS(400),
    [anon_sym_BANGsnap_BANG] = ACTIONS(400),
    [anon_sym_BANGslide_BANG] = ACTIONS(400),
    [anon_sym_BANGwedge_BANG] = ACTIONS(400),
    [anon_sym_BANGupbow_BANG] = ACTIONS(400),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(400),
    [anon_sym_BANGopen_BANG] = ACTIONS(400),
    [anon_sym_BANGthumb_BANG] = ACTIONS(400),
    [anon_sym_BANGbreath_BANG] = ACTIONS(400),
    [anon_sym_BANGpppp_BANG] = ACTIONS(400),
    [anon_sym_BANGppp_BANG] = ACTIONS(400),
    [anon_sym_BANGpp_BANG] = ACTIONS(400),
    [anon_sym_BANGp_BANG] = ACTIONS(400),
    [anon_sym_BANGmp_BANG] = ACTIONS(400),
    [anon_sym_BANGmf_BANG] = ACTIONS(400),
    [anon_sym_BANGf_BANG] = ACTIONS(400),
    [anon_sym_BANGff_BANG] = ACTIONS(400),
    [anon_sym_BANGfff_BANG] = ACTIONS(400),
    [anon_sym_BANGffff_BANG] = ACTIONS(400),
    [anon_sym_BANGsfz_BANG] = ACTIONS(400),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(400),
    [anon_sym_BANGsegno_BANG] = ACTIONS(400),
    [anon_sym_BANGcoda_BANG] = ACTIONS(400),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(400),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(400),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(400),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(400),
    [anon_sym_BANGfine_BANG] = ACTIONS(400),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(400),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(400),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(400),
  },
  [97] = {
    [sym_noCommentText] = ACTIONS(376),
    [sym_note_skip] = ACTIONS(376),
    [aux_sym_chord_symbol_token1] = ACTIONS(376),
    [sym_annotation] = ACTIONS(376),
    [sym_bar_line] = ACTIONS(376),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(376),
    [sym_thin_double_bar_line] = ACTIONS(376),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(376),
    [sym_start_of_repeated_section] = ACTIONS(376),
    [sym_end_of_repeated_section] = ACTIONS(376),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(376),
    [anon_sym_BANGtrill_BANG] = ACTIONS(376),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(376),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(376),
    [anon_sym_BANGmordent_BANG] = ACTIONS(376),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(376),
    [anon_sym_BANGroll_BANG] = ACTIONS(376),
    [anon_sym_BANGturn_BANG] = ACTIONS(376),
    [anon_sym_BANGturnx_BANG] = ACTIONS(376),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(376),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(376),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(376),
    [anon_sym_BANG_GT_BANG] = ACTIONS(376),
    [anon_sym_BANGaccent_BANG] = ACTIONS(376),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(376),
    [anon_sym_BANGfermata_BANG] = ACTIONS(376),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(376),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(376),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(376),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(376),
    [anon_sym_BANGplus_BANG] = ACTIONS(376),
    [anon_sym_BANGsnap_BANG] = ACTIONS(376),
    [anon_sym_BANGslide_BANG] = ACTIONS(376),
    [anon_sym_BANGwedge_BANG] = ACTIONS(376),
    [anon_sym_BANGupbow_BANG] = ACTIONS(376),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(376),
    [anon_sym_BANGopen_BANG] = ACTIONS(376),
    [anon_sym_BANGthumb_BANG] = ACTIONS(376),
    [anon_sym_BANGbreath_BANG] = ACTIONS(376),
    [anon_sym_BANGpppp_BANG] = ACTIONS(376),
    [anon_sym_BANGppp_BANG] = ACTIONS(376),
    [anon_sym_BANGpp_BANG] = ACTIONS(376),
    [anon_sym_BANGp_BANG] = ACTIONS(376),
    [anon_sym_BANGmp_BANG] = ACTIONS(376),
    [anon_sym_BANGmf_BANG] = ACTIONS(376),
    [anon_sym_BANGf_BANG] = ACTIONS(376),
    [anon_sym_BANGff_BANG] = ACTIONS(376),
    [anon_sym_BANGfff_BANG] = ACTIONS(376),
    [anon_sym_BANGffff_BANG] = ACTIONS(376),
    [anon_sym_BANGsfz_BANG] = ACTIONS(376),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(376),
    [anon_sym_BANGsegno_BANG] = ACTIONS(376),
    [anon_sym_BANGcoda_BANG] = ACTIONS(376),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(376),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(376),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(376),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(376),
    [anon_sym_BANGfine_BANG] = ACTIONS(376),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(376),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(376),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(376),
  },
  [98] = {
    [sym_noCommentText] = ACTIONS(396),
    [sym_note_skip] = ACTIONS(396),
    [aux_sym_chord_symbol_token1] = ACTIONS(396),
    [sym_annotation] = ACTIONS(396),
    [sym_bar_line] = ACTIONS(396),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(396),
    [sym_thin_double_bar_line] = ACTIONS(396),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(396),
    [sym_start_of_repeated_section] = ACTIONS(396),
    [sym_end_of_repeated_section] = ACTIONS(396),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(396),
    [anon_sym_BANGtrill_BANG] = ACTIONS(396),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(396),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(396),
    [anon_sym_BANGmordent_BANG] = ACTIONS(396),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(396),
    [anon_sym_BANGroll_BANG] = ACTIONS(396),
    [anon_sym_BANGturn_BANG] = ACTIONS(396),
    [anon_sym_BANGturnx_BANG] = ACTIONS(396),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(396),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(396),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(396),
    [anon_sym_BANG_GT_BANG] = ACTIONS(396),
    [anon_sym_BANGaccent_BANG] = ACTIONS(396),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(396),
    [anon_sym_BANGfermata_BANG] = ACTIONS(396),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(396),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(396),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(396),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(396),
    [anon_sym_BANGplus_BANG] = ACTIONS(396),
    [anon_sym_BANGsnap_BANG] = ACTIONS(396),
    [anon_sym_BANGslide_BANG] = ACTIONS(396),
    [anon_sym_BANGwedge_BANG] = ACTIONS(396),
    [anon_sym_BANGupbow_BANG] = ACTIONS(396),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(396),
    [anon_sym_BANGopen_BANG] = ACTIONS(396),
    [anon_sym_BANGthumb_BANG] = ACTIONS(396),
    [anon_sym_BANGbreath_BANG] = ACTIONS(396),
    [anon_sym_BANGpppp_BANG] = ACTIONS(396),
    [anon_sym_BANGppp_BANG] = ACTIONS(396),
    [anon_sym_BANGpp_BANG] = ACTIONS(396),
    [anon_sym_BANGp_BANG] = ACTIONS(396),
    [anon_sym_BANGmp_BANG] = ACTIONS(396),
    [anon_sym_BANGmf_BANG] = ACTIONS(396),
    [anon_sym_BANGf_BANG] = ACTIONS(396),
    [anon_sym_BANGff_BANG] = ACTIONS(396),
    [anon_sym_BANGfff_BANG] = ACTIONS(396),
    [anon_sym_BANGffff_BANG] = ACTIONS(396),
    [anon_sym_BANGsfz_BANG] = ACTIONS(396),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(396),
    [anon_sym_BANGsegno_BANG] = ACTIONS(396),
    [anon_sym_BANGcoda_BANG] = ACTIONS(396),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(396),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(396),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(396),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(396),
    [anon_sym_BANGfine_BANG] = ACTIONS(396),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(396),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(396),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(396),
  },
  [99] = {
    [sym_noCommentText] = ACTIONS(392),
    [sym_note_skip] = ACTIONS(392),
    [aux_sym_chord_symbol_token1] = ACTIONS(392),
    [sym_annotation] = ACTIONS(392),
    [sym_bar_line] = ACTIONS(392),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(392),
    [sym_thin_double_bar_line] = ACTIONS(392),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(392),
    [sym_start_of_repeated_section] = ACTIONS(392),
    [sym_end_of_repeated_section] = ACTIONS(392),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(392),
    [anon_sym_BANGtrill_BANG] = ACTIONS(392),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(392),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(392),
    [anon_sym_BANGmordent_BANG] = ACTIONS(392),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(392),
    [anon_sym_BANGroll_BANG] = ACTIONS(392),
    [anon_sym_BANGturn_BANG] = ACTIONS(392),
    [anon_sym_BANGturnx_BANG] = ACTIONS(392),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(392),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(392),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(392),
    [anon_sym_BANG_GT_BANG] = ACTIONS(392),
    [anon_sym_BANGaccent_BANG] = ACTIONS(392),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(392),
    [anon_sym_BANGfermata_BANG] = ACTIONS(392),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(392),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(392),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(392),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(392),
    [anon_sym_BANGplus_BANG] = ACTIONS(392),
    [anon_sym_BANGsnap_BANG] = ACTIONS(392),
    [anon_sym_BANGslide_BANG] = ACTIONS(392),
    [anon_sym_BANGwedge_BANG] = ACTIONS(392),
    [anon_sym_BANGupbow_BANG] = ACTIONS(392),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(392),
    [anon_sym_BANGopen_BANG] = ACTIONS(392),
    [anon_sym_BANGthumb_BANG] = ACTIONS(392),
    [anon_sym_BANGbreath_BANG] = ACTIONS(392),
    [anon_sym_BANGpppp_BANG] = ACTIONS(392),
    [anon_sym_BANGppp_BANG] = ACTIONS(392),
    [anon_sym_BANGpp_BANG] = ACTIONS(392),
    [anon_sym_BANGp_BANG] = ACTIONS(392),
    [anon_sym_BANGmp_BANG] = ACTIONS(392),
    [anon_sym_BANGmf_BANG] = ACTIONS(392),
    [anon_sym_BANGf_BANG] = ACTIONS(392),
    [anon_sym_BANGff_BANG] = ACTIONS(392),
    [anon_sym_BANGfff_BANG] = ACTIONS(392),
    [anon_sym_BANGffff_BANG] = ACTIONS(392),
    [anon_sym_BANGsfz_BANG] = ACTIONS(392),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(392),
    [anon_sym_BANGsegno_BANG] = ACTIONS(392),
    [anon_sym_BANGcoda_BANG] = ACTIONS(392),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(392),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(392),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(392),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(392),
    [anon_sym_BANGfine_BANG] = ACTIONS(392),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(392),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(392),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(392),
  },
  [100] = {
    [sym_note_skip] = ACTIONS(573),
    [aux_sym_chord_symbol_token1] = ACTIONS(573),
    [sym_annotation] = ACTIONS(573),
    [sym_bar_line] = ACTIONS(573),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(575),
    [sym_thin_double_bar_line] = ACTIONS(573),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(573),
    [sym_start_of_repeated_section] = ACTIONS(573),
    [sym_end_of_repeated_section] = ACTIONS(573),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(573),
    [anon_sym_BANGtrill_BANG] = ACTIONS(573),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(573),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(573),
    [anon_sym_BANGmordent_BANG] = ACTIONS(573),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(573),
    [anon_sym_BANGroll_BANG] = ACTIONS(573),
    [anon_sym_BANGturn_BANG] = ACTIONS(573),
    [anon_sym_BANGturnx_BANG] = ACTIONS(573),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(573),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(573),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(573),
    [anon_sym_BANG_GT_BANG] = ACTIONS(573),
    [anon_sym_BANGaccent_BANG] = ACTIONS(573),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(573),
    [anon_sym_BANGfermata_BANG] = ACTIONS(573),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(573),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(573),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(573),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(573),
    [anon_sym_BANGplus_BANG] = ACTIONS(573),
    [anon_sym_BANGsnap_BANG] = ACTIONS(573),
    [anon_sym_BANGslide_BANG] = ACTIONS(573),
    [anon_sym_BANGwedge_BANG] = ACTIONS(573),
    [anon_sym_BANGupbow_BANG] = ACTIONS(573),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(573),
    [anon_sym_BANGopen_BANG] = ACTIONS(573),
    [anon_sym_BANGthumb_BANG] = ACTIONS(573),
    [anon_sym_BANGbreath_BANG] = ACTIONS(573),
    [anon_sym_BANGpppp_BANG] = ACTIONS(573),
    [anon_sym_BANGppp_BANG] = ACTIONS(573),
    [anon_sym_BANGpp_BANG] = ACTIONS(573),
    [anon_sym_BANGp_BANG] = ACTIONS(573),
    [anon_sym_BANGmp_BANG] = ACTIONS(573),
    [anon_sym_BANGmf_BANG] = ACTIONS(573),
    [anon_sym_BANGf_BANG] = ACTIONS(573),
    [anon_sym_BANGff_BANG] = ACTIONS(573),
    [anon_sym_BANGfff_BANG] = ACTIONS(573),
    [anon_sym_BANGffff_BANG] = ACTIONS(573),
    [anon_sym_BANGsfz_BANG] = ACTIONS(573),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGsegno_BANG] = ACTIONS(573),
    [anon_sym_BANGcoda_BANG] = ACTIONS(573),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(573),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(573),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(573),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(573),
    [anon_sym_BANGfine_BANG] = ACTIONS(573),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(573),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(573),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(573),
    [aux_sym_body_inline_info_token1] = ACTIONS(573),
  },
  [101] = {
    [sym_noCommentText] = ACTIONS(265),
    [sym_note_skip] = ACTIONS(265),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(265),
    [sym_thin_double_bar_line] = ACTIONS(265),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(265),
    [sym_start_of_repeated_section] = ACTIONS(265),
    [sym_end_of_repeated_section] = ACTIONS(265),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(265),
    [anon_sym_BANGtrill_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGmordent_BANG] = ACTIONS(265),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(265),
    [anon_sym_BANGroll_BANG] = ACTIONS(265),
    [anon_sym_BANGturn_BANG] = ACTIONS(265),
    [anon_sym_BANGturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_BANG] = ACTIONS(265),
    [anon_sym_BANGaccent_BANG] = ACTIONS(265),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(265),
    [anon_sym_BANGfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(265),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(265),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(265),
    [anon_sym_BANGplus_BANG] = ACTIONS(265),
    [anon_sym_BANGsnap_BANG] = ACTIONS(265),
    [anon_sym_BANGslide_BANG] = ACTIONS(265),
    [anon_sym_BANGwedge_BANG] = ACTIONS(265),
    [anon_sym_BANGupbow_BANG] = ACTIONS(265),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(265),
    [anon_sym_BANGopen_BANG] = ACTIONS(265),
    [anon_sym_BANGthumb_BANG] = ACTIONS(265),
    [anon_sym_BANGbreath_BANG] = ACTIONS(265),
    [anon_sym_BANGpppp_BANG] = ACTIONS(265),
    [anon_sym_BANGppp_BANG] = ACTIONS(265),
    [anon_sym_BANGpp_BANG] = ACTIONS(265),
    [anon_sym_BANGp_BANG] = ACTIONS(265),
    [anon_sym_BANGmp_BANG] = ACTIONS(265),
    [anon_sym_BANGmf_BANG] = ACTIONS(265),
    [anon_sym_BANGf_BANG] = ACTIONS(265),
    [anon_sym_BANGff_BANG] = ACTIONS(265),
    [anon_sym_BANGfff_BANG] = ACTIONS(265),
    [anon_sym_BANGffff_BANG] = ACTIONS(265),
    [anon_sym_BANGsfz_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGsegno_BANG] = ACTIONS(265),
    [anon_sym_BANGcoda_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(265),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(265),
    [anon_sym_BANGfine_BANG] = ACTIONS(265),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(265),
  },
  [102] = {
    [sym_noCommentText] = ACTIONS(561),
    [sym_note_skip] = ACTIONS(561),
    [aux_sym_chord_symbol_token1] = ACTIONS(561),
    [sym_annotation] = ACTIONS(561),
    [sym_bar_line] = ACTIONS(561),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(561),
    [sym_thin_double_bar_line] = ACTIONS(561),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(561),
    [sym_start_of_repeated_section] = ACTIONS(561),
    [sym_end_of_repeated_section] = ACTIONS(561),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(561),
    [anon_sym_BANGtrill_BANG] = ACTIONS(561),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(561),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(561),
    [anon_sym_BANGmordent_BANG] = ACTIONS(561),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(561),
    [anon_sym_BANGroll_BANG] = ACTIONS(561),
    [anon_sym_BANGturn_BANG] = ACTIONS(561),
    [anon_sym_BANGturnx_BANG] = ACTIONS(561),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(561),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(561),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(561),
    [anon_sym_BANG_GT_BANG] = ACTIONS(561),
    [anon_sym_BANGaccent_BANG] = ACTIONS(561),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(561),
    [anon_sym_BANGfermata_BANG] = ACTIONS(561),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(561),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(561),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(561),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(561),
    [anon_sym_BANGplus_BANG] = ACTIONS(561),
    [anon_sym_BANGsnap_BANG] = ACTIONS(561),
    [anon_sym_BANGslide_BANG] = ACTIONS(561),
    [anon_sym_BANGwedge_BANG] = ACTIONS(561),
    [anon_sym_BANGupbow_BANG] = ACTIONS(561),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(561),
    [anon_sym_BANGopen_BANG] = ACTIONS(561),
    [anon_sym_BANGthumb_BANG] = ACTIONS(561),
    [anon_sym_BANGbreath_BANG] = ACTIONS(561),
    [anon_sym_BANGpppp_BANG] = ACTIONS(561),
    [anon_sym_BANGppp_BANG] = ACTIONS(561),
    [anon_sym_BANGpp_BANG] = ACTIONS(561),
    [anon_sym_BANGp_BANG] = ACTIONS(561),
    [anon_sym_BANGmp_BANG] = ACTIONS(561),
    [anon_sym_BANGmf_BANG] = ACTIONS(561),
    [anon_sym_BANGf_BANG] = ACTIONS(561),
    [anon_sym_BANGff_BANG] = ACTIONS(561),
    [anon_sym_BANGfff_BANG] = ACTIONS(561),
    [anon_sym_BANGffff_BANG] = ACTIONS(561),
    [anon_sym_BANGsfz_BANG] = ACTIONS(561),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(561),
    [anon_sym_BANGsegno_BANG] = ACTIONS(561),
    [anon_sym_BANGcoda_BANG] = ACTIONS(561),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(561),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(561),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(561),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(561),
    [anon_sym_BANGfine_BANG] = ACTIONS(561),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(561),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(561),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(561),
  },
  [103] = {
    [sym_note_skip] = ACTIONS(265),
    [aux_sym_chord_symbol_token1] = ACTIONS(265),
    [sym_annotation] = ACTIONS(265),
    [sym_bar_line] = ACTIONS(265),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(263),
    [sym_thin_double_bar_line] = ACTIONS(265),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(265),
    [sym_start_of_repeated_section] = ACTIONS(265),
    [sym_end_of_repeated_section] = ACTIONS(265),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(265),
    [anon_sym_BANGtrill_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(265),
    [anon_sym_BANGmordent_BANG] = ACTIONS(265),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(265),
    [anon_sym_BANGroll_BANG] = ACTIONS(265),
    [anon_sym_BANGturn_BANG] = ACTIONS(265),
    [anon_sym_BANGturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(265),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_BANG] = ACTIONS(265),
    [anon_sym_BANGaccent_BANG] = ACTIONS(265),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(265),
    [anon_sym_BANGfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(265),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(265),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(265),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(265),
    [anon_sym_BANGplus_BANG] = ACTIONS(265),
    [anon_sym_BANGsnap_BANG] = ACTIONS(265),
    [anon_sym_BANGslide_BANG] = ACTIONS(265),
    [anon_sym_BANGwedge_BANG] = ACTIONS(265),
    [anon_sym_BANGupbow_BANG] = ACTIONS(265),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(265),
    [anon_sym_BANGopen_BANG] = ACTIONS(265),
    [anon_sym_BANGthumb_BANG] = ACTIONS(265),
    [anon_sym_BANGbreath_BANG] = ACTIONS(265),
    [anon_sym_BANGpppp_BANG] = ACTIONS(265),
    [anon_sym_BANGppp_BANG] = ACTIONS(265),
    [anon_sym_BANGpp_BANG] = ACTIONS(265),
    [anon_sym_BANGp_BANG] = ACTIONS(265),
    [anon_sym_BANGmp_BANG] = ACTIONS(265),
    [anon_sym_BANGmf_BANG] = ACTIONS(265),
    [anon_sym_BANGf_BANG] = ACTIONS(265),
    [anon_sym_BANGff_BANG] = ACTIONS(265),
    [anon_sym_BANGfff_BANG] = ACTIONS(265),
    [anon_sym_BANGffff_BANG] = ACTIONS(265),
    [anon_sym_BANGsfz_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(265),
    [anon_sym_BANGsegno_BANG] = ACTIONS(265),
    [anon_sym_BANGcoda_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(265),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(265),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(265),
    [anon_sym_BANGfine_BANG] = ACTIONS(265),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(265),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(265),
    [aux_sym_body_inline_info_token1] = ACTIONS(265),
  },
  [104] = {
    [sym_noCommentText] = ACTIONS(569),
    [sym_note_skip] = ACTIONS(569),
    [aux_sym_chord_symbol_token1] = ACTIONS(569),
    [sym_annotation] = ACTIONS(569),
    [sym_bar_line] = ACTIONS(569),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(569),
    [sym_thin_double_bar_line] = ACTIONS(569),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(569),
    [sym_start_of_repeated_section] = ACTIONS(569),
    [sym_end_of_repeated_section] = ACTIONS(569),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(569),
    [anon_sym_BANGtrill_BANG] = ACTIONS(569),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(569),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(569),
    [anon_sym_BANGmordent_BANG] = ACTIONS(569),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(569),
    [anon_sym_BANGroll_BANG] = ACTIONS(569),
    [anon_sym_BANGturn_BANG] = ACTIONS(569),
    [anon_sym_BANGturnx_BANG] = ACTIONS(569),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(569),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(569),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(569),
    [anon_sym_BANG_GT_BANG] = ACTIONS(569),
    [anon_sym_BANGaccent_BANG] = ACTIONS(569),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(569),
    [anon_sym_BANGfermata_BANG] = ACTIONS(569),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(569),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(569),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(569),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(569),
    [anon_sym_BANGplus_BANG] = ACTIONS(569),
    [anon_sym_BANGsnap_BANG] = ACTIONS(569),
    [anon_sym_BANGslide_BANG] = ACTIONS(569),
    [anon_sym_BANGwedge_BANG] = ACTIONS(569),
    [anon_sym_BANGupbow_BANG] = ACTIONS(569),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(569),
    [anon_sym_BANGopen_BANG] = ACTIONS(569),
    [anon_sym_BANGthumb_BANG] = ACTIONS(569),
    [anon_sym_BANGbreath_BANG] = ACTIONS(569),
    [anon_sym_BANGpppp_BANG] = ACTIONS(569),
    [anon_sym_BANGppp_BANG] = ACTIONS(569),
    [anon_sym_BANGpp_BANG] = ACTIONS(569),
    [anon_sym_BANGp_BANG] = ACTIONS(569),
    [anon_sym_BANGmp_BANG] = ACTIONS(569),
    [anon_sym_BANGmf_BANG] = ACTIONS(569),
    [anon_sym_BANGf_BANG] = ACTIONS(569),
    [anon_sym_BANGff_BANG] = ACTIONS(569),
    [anon_sym_BANGfff_BANG] = ACTIONS(569),
    [anon_sym_BANGffff_BANG] = ACTIONS(569),
    [anon_sym_BANGsfz_BANG] = ACTIONS(569),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(569),
    [anon_sym_BANGsegno_BANG] = ACTIONS(569),
    [anon_sym_BANGcoda_BANG] = ACTIONS(569),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(569),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(569),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(569),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(569),
    [anon_sym_BANGfine_BANG] = ACTIONS(569),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(569),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(569),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(569),
  },
  [105] = {
    [sym_noCommentText] = ACTIONS(380),
    [sym_note_skip] = ACTIONS(380),
    [aux_sym_chord_symbol_token1] = ACTIONS(380),
    [sym_annotation] = ACTIONS(380),
    [sym_bar_line] = ACTIONS(380),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(380),
    [sym_thin_double_bar_line] = ACTIONS(380),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(380),
    [sym_start_of_repeated_section] = ACTIONS(380),
    [sym_end_of_repeated_section] = ACTIONS(380),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(380),
    [anon_sym_BANGtrill_BANG] = ACTIONS(380),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(380),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(380),
    [anon_sym_BANGmordent_BANG] = ACTIONS(380),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(380),
    [anon_sym_BANGroll_BANG] = ACTIONS(380),
    [anon_sym_BANGturn_BANG] = ACTIONS(380),
    [anon_sym_BANGturnx_BANG] = ACTIONS(380),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(380),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(380),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(380),
    [anon_sym_BANG_GT_BANG] = ACTIONS(380),
    [anon_sym_BANGaccent_BANG] = ACTIONS(380),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(380),
    [anon_sym_BANGfermata_BANG] = ACTIONS(380),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(380),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(380),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(380),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(380),
    [anon_sym_BANGplus_BANG] = ACTIONS(380),
    [anon_sym_BANGsnap_BANG] = ACTIONS(380),
    [anon_sym_BANGslide_BANG] = ACTIONS(380),
    [anon_sym_BANGwedge_BANG] = ACTIONS(380),
    [anon_sym_BANGupbow_BANG] = ACTIONS(380),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(380),
    [anon_sym_BANGopen_BANG] = ACTIONS(380),
    [anon_sym_BANGthumb_BANG] = ACTIONS(380),
    [anon_sym_BANGbreath_BANG] = ACTIONS(380),
    [anon_sym_BANGpppp_BANG] = ACTIONS(380),
    [anon_sym_BANGppp_BANG] = ACTIONS(380),
    [anon_sym_BANGpp_BANG] = ACTIONS(380),
    [anon_sym_BANGp_BANG] = ACTIONS(380),
    [anon_sym_BANGmp_BANG] = ACTIONS(380),
    [anon_sym_BANGmf_BANG] = ACTIONS(380),
    [anon_sym_BANGf_BANG] = ACTIONS(380),
    [anon_sym_BANGff_BANG] = ACTIONS(380),
    [anon_sym_BANGfff_BANG] = ACTIONS(380),
    [anon_sym_BANGffff_BANG] = ACTIONS(380),
    [anon_sym_BANGsfz_BANG] = ACTIONS(380),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(380),
    [anon_sym_BANGsegno_BANG] = ACTIONS(380),
    [anon_sym_BANGcoda_BANG] = ACTIONS(380),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(380),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(380),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(380),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(380),
    [anon_sym_BANGfine_BANG] = ACTIONS(380),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(380),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(380),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(380),
  },
  [106] = {
    [sym_noCommentText] = ACTIONS(384),
    [sym_note_skip] = ACTIONS(384),
    [aux_sym_chord_symbol_token1] = ACTIONS(384),
    [sym_annotation] = ACTIONS(384),
    [sym_bar_line] = ACTIONS(384),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(384),
    [sym_thin_double_bar_line] = ACTIONS(384),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(384),
    [sym_start_of_repeated_section] = ACTIONS(384),
    [sym_end_of_repeated_section] = ACTIONS(384),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(384),
    [anon_sym_BANGtrill_BANG] = ACTIONS(384),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(384),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(384),
    [anon_sym_BANGmordent_BANG] = ACTIONS(384),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(384),
    [anon_sym_BANGroll_BANG] = ACTIONS(384),
    [anon_sym_BANGturn_BANG] = ACTIONS(384),
    [anon_sym_BANGturnx_BANG] = ACTIONS(384),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(384),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(384),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(384),
    [anon_sym_BANG_GT_BANG] = ACTIONS(384),
    [anon_sym_BANGaccent_BANG] = ACTIONS(384),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(384),
    [anon_sym_BANGfermata_BANG] = ACTIONS(384),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(384),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(384),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(384),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(384),
    [anon_sym_BANGplus_BANG] = ACTIONS(384),
    [anon_sym_BANGsnap_BANG] = ACTIONS(384),
    [anon_sym_BANGslide_BANG] = ACTIONS(384),
    [anon_sym_BANGwedge_BANG] = ACTIONS(384),
    [anon_sym_BANGupbow_BANG] = ACTIONS(384),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(384),
    [anon_sym_BANGopen_BANG] = ACTIONS(384),
    [anon_sym_BANGthumb_BANG] = ACTIONS(384),
    [anon_sym_BANGbreath_BANG] = ACTIONS(384),
    [anon_sym_BANGpppp_BANG] = ACTIONS(384),
    [anon_sym_BANGppp_BANG] = ACTIONS(384),
    [anon_sym_BANGpp_BANG] = ACTIONS(384),
    [anon_sym_BANGp_BANG] = ACTIONS(384),
    [anon_sym_BANGmp_BANG] = ACTIONS(384),
    [anon_sym_BANGmf_BANG] = ACTIONS(384),
    [anon_sym_BANGf_BANG] = ACTIONS(384),
    [anon_sym_BANGff_BANG] = ACTIONS(384),
    [anon_sym_BANGfff_BANG] = ACTIONS(384),
    [anon_sym_BANGffff_BANG] = ACTIONS(384),
    [anon_sym_BANGsfz_BANG] = ACTIONS(384),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(384),
    [anon_sym_BANGsegno_BANG] = ACTIONS(384),
    [anon_sym_BANGcoda_BANG] = ACTIONS(384),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(384),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(384),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(384),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(384),
    [anon_sym_BANGfine_BANG] = ACTIONS(384),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(384),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(384),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(384),
  },
  [107] = {
    [sym_noCommentText] = ACTIONS(573),
    [sym_note_skip] = ACTIONS(573),
    [aux_sym_chord_symbol_token1] = ACTIONS(573),
    [sym_annotation] = ACTIONS(573),
    [sym_bar_line] = ACTIONS(573),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(573),
    [sym_thin_double_bar_line] = ACTIONS(573),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(573),
    [sym_start_of_repeated_section] = ACTIONS(573),
    [sym_end_of_repeated_section] = ACTIONS(573),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(573),
    [anon_sym_BANGtrill_BANG] = ACTIONS(573),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(573),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(573),
    [anon_sym_BANGmordent_BANG] = ACTIONS(573),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(573),
    [anon_sym_BANGroll_BANG] = ACTIONS(573),
    [anon_sym_BANGturn_BANG] = ACTIONS(573),
    [anon_sym_BANGturnx_BANG] = ACTIONS(573),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(573),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(573),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(573),
    [anon_sym_BANG_GT_BANG] = ACTIONS(573),
    [anon_sym_BANGaccent_BANG] = ACTIONS(573),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(573),
    [anon_sym_BANGfermata_BANG] = ACTIONS(573),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(573),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(573),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(573),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(573),
    [anon_sym_BANGplus_BANG] = ACTIONS(573),
    [anon_sym_BANGsnap_BANG] = ACTIONS(573),
    [anon_sym_BANGslide_BANG] = ACTIONS(573),
    [anon_sym_BANGwedge_BANG] = ACTIONS(573),
    [anon_sym_BANGupbow_BANG] = ACTIONS(573),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(573),
    [anon_sym_BANGopen_BANG] = ACTIONS(573),
    [anon_sym_BANGthumb_BANG] = ACTIONS(573),
    [anon_sym_BANGbreath_BANG] = ACTIONS(573),
    [anon_sym_BANGpppp_BANG] = ACTIONS(573),
    [anon_sym_BANGppp_BANG] = ACTIONS(573),
    [anon_sym_BANGpp_BANG] = ACTIONS(573),
    [anon_sym_BANGp_BANG] = ACTIONS(573),
    [anon_sym_BANGmp_BANG] = ACTIONS(573),
    [anon_sym_BANGmf_BANG] = ACTIONS(573),
    [anon_sym_BANGf_BANG] = ACTIONS(573),
    [anon_sym_BANGff_BANG] = ACTIONS(573),
    [anon_sym_BANGfff_BANG] = ACTIONS(573),
    [anon_sym_BANGffff_BANG] = ACTIONS(573),
    [anon_sym_BANGsfz_BANG] = ACTIONS(573),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(573),
    [anon_sym_BANGsegno_BANG] = ACTIONS(573),
    [anon_sym_BANGcoda_BANG] = ACTIONS(573),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(573),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(573),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(573),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(573),
    [anon_sym_BANGfine_BANG] = ACTIONS(573),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(573),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(573),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(573),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(307), 1,
      sym_symbol,
    ACTIONS(577), 59,
      anon_sym_BANGtrill_BANG,
      anon_sym_BANGtrill_LPAREN_BANG,
      anon_sym_BANGtrill_RPAREN_BANG,
      anon_sym_BANGlowermordent_BANG,
      anon_sym_BANGuppermordent_BANG,
      anon_sym_BANGmordent_BANG,
      anon_sym_BANGpralltriller_BANG,
      anon_sym_BANGroll_BANG,
      anon_sym_BANGturn_BANG,
      anon_sym_BANGturnx_BANG,
      anon_sym_BANGinvertedturn_BANG,
      anon_sym_BANGinvertedturnx_BANG,
      anon_sym_BANGarpeggio_BANG,
      anon_sym_BANG_GT_BANG,
      anon_sym_BANGaccent_BANG,
      anon_sym_BANGemphasis_BANG,
      anon_sym_BANGfermata_BANG,
      anon_sym_BANGinvertedfermata_BANG,
      anon_sym_BANGtenuto_BANG,
      anon_sym_BANG0_BANG_DASH_BANG5_BANG,
      anon_sym_BANG_PLUS_BANG,
      anon_sym_BANGplus_BANG,
      anon_sym_BANGsnap_BANG,
      anon_sym_BANGslide_BANG,
      anon_sym_BANGwedge_BANG,
      anon_sym_BANGupbow_BANG,
      anon_sym_BANGdownbow_BANG,
      anon_sym_BANGopen_BANG,
      anon_sym_BANGthumb_BANG,
      anon_sym_BANGbreath_BANG,
      anon_sym_BANGpppp_BANG,
      anon_sym_BANGppp_BANG,
      anon_sym_BANGpp_BANG,
      anon_sym_BANGp_BANG,
      anon_sym_BANGmp_BANG,
      anon_sym_BANGmf_BANG,
      anon_sym_BANGf_BANG,
      anon_sym_BANGff_BANG,
      anon_sym_BANGfff_BANG,
      anon_sym_BANGffff_BANG,
      anon_sym_BANGsfz_BANG,
      anon_sym_BANGcrescendo_LPAREN_BANG,
      anon_sym_BANG_LT_LPAREN_BANG,
      anon_sym_BANGcrescendo_RPAREN_BANG,
      anon_sym_BANG_LT_RPAREN_BANG,
      anon_sym_BANGdiminuendo_LPAREN_BANG,
      anon_sym_BANG_GT_LPAREN_BANG,
      anon_sym_BANGdiminuendo_RPAREN_BANG,
      anon_sym_BANG_GT_RPAREN_BANG,
      anon_sym_BANGsegno_BANG,
      anon_sym_BANGcoda_BANG,
      anon_sym_BANGD_DOTS_DOT_BANG,
      anon_sym_BANGD_DOTC_DOT_BANG,
      anon_sym_BANGdacoda_BANG,
      anon_sym_BANGdacapo_BANG,
      anon_sym_BANGfine_BANG,
      anon_sym_BANGshortphrase_BANG,
      anon_sym_BANGmediumphrase_BANG,
      anon_sym_BANGlongphrase_BANG,
  [65] = 2,
    STATE(282), 1,
      sym_symbol,
    ACTIONS(579), 59,
      anon_sym_BANGtrill_BANG,
      anon_sym_BANGtrill_LPAREN_BANG,
      anon_sym_BANGtrill_RPAREN_BANG,
      anon_sym_BANGlowermordent_BANG,
      anon_sym_BANGuppermordent_BANG,
      anon_sym_BANGmordent_BANG,
      anon_sym_BANGpralltriller_BANG,
      anon_sym_BANGroll_BANG,
      anon_sym_BANGturn_BANG,
      anon_sym_BANGturnx_BANG,
      anon_sym_BANGinvertedturn_BANG,
      anon_sym_BANGinvertedturnx_BANG,
      anon_sym_BANGarpeggio_BANG,
      anon_sym_BANG_GT_BANG,
      anon_sym_BANGaccent_BANG,
      anon_sym_BANGemphasis_BANG,
      anon_sym_BANGfermata_BANG,
      anon_sym_BANGinvertedfermata_BANG,
      anon_sym_BANGtenuto_BANG,
      anon_sym_BANG0_BANG_DASH_BANG5_BANG,
      anon_sym_BANG_PLUS_BANG,
      anon_sym_BANGplus_BANG,
      anon_sym_BANGsnap_BANG,
      anon_sym_BANGslide_BANG,
      anon_sym_BANGwedge_BANG,
      anon_sym_BANGupbow_BANG,
      anon_sym_BANGdownbow_BANG,
      anon_sym_BANGopen_BANG,
      anon_sym_BANGthumb_BANG,
      anon_sym_BANGbreath_BANG,
      anon_sym_BANGpppp_BANG,
      anon_sym_BANGppp_BANG,
      anon_sym_BANGpp_BANG,
      anon_sym_BANGp_BANG,
      anon_sym_BANGmp_BANG,
      anon_sym_BANGmf_BANG,
      anon_sym_BANGf_BANG,
      anon_sym_BANGff_BANG,
      anon_sym_BANGfff_BANG,
      anon_sym_BANGffff_BANG,
      anon_sym_BANGsfz_BANG,
      anon_sym_BANGcrescendo_LPAREN_BANG,
      anon_sym_BANG_LT_LPAREN_BANG,
      anon_sym_BANGcrescendo_RPAREN_BANG,
      anon_sym_BANG_LT_RPAREN_BANG,
      anon_sym_BANGdiminuendo_LPAREN_BANG,
      anon_sym_BANG_GT_LPAREN_BANG,
      anon_sym_BANGdiminuendo_RPAREN_BANG,
      anon_sym_BANG_GT_RPAREN_BANG,
      anon_sym_BANGsegno_BANG,
      anon_sym_BANGcoda_BANG,
      anon_sym_BANGD_DOTS_DOT_BANG,
      anon_sym_BANGD_DOTC_DOT_BANG,
      anon_sym_BANGdacoda_BANG,
      anon_sym_BANGdacapo_BANG,
      anon_sym_BANGfine_BANG,
      anon_sym_BANGshortphrase_BANG,
      anon_sym_BANGmediumphrase_BANG,
      anon_sym_BANGlongphrase_BANG,
  [130] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(7), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(13), 1,
      anon_sym_U_COLON,
    ACTIONS(581), 1,
      anon_sym_X_COLON,
    STATE(112), 1,
      aux_sym_file_header_repeat1,
    STATE(246), 2,
      sym_stylesheet_directives,
      sym_file_header_info_line,
    STATE(276), 2,
      sym_abc_version,
      sym_user_defined,
    ACTIONS(9), 17,
      sym_area,
      sym_book,
      sym_composer,
      sym_discography,
      sym_file,
      sym_group,
      sym_history,
      sym_instruction,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_origin,
      sym_remark,
      sym_rhythm_line,
      sym_source,
      sym_transcription,
      sym_unit_note_length,
  [176] = 14,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(41), 1,
      sym_decoration_shorthand,
    ACTIONS(585), 1,
      anon_sym_s_COLON,
    ACTIONS(587), 1,
      anon_sym_U_COLON,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(136), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(277), 2,
      sym_symbol_line,
      sym_user_defined,
    ACTIONS(583), 11,
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      sym_tempo,
      sym_unit_note_length,
      sym_voice,
  [232] = 9,
    ACTIONS(589), 1,
      sym_COMMENT,
    ACTIONS(592), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(595), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(601), 1,
      anon_sym_X_COLON,
    ACTIONS(603), 1,
      anon_sym_U_COLON,
    STATE(112), 1,
      aux_sym_file_header_repeat1,
    STATE(246), 2,
      sym_stylesheet_directives,
      sym_file_header_info_line,
    STATE(276), 2,
      sym_abc_version,
      sym_user_defined,
    ACTIONS(598), 17,
      sym_area,
      sym_book,
      sym_composer,
      sym_discography,
      sym_file,
      sym_group,
      sym_history,
      sym_instruction,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_origin,
      sym_remark,
      sym_rhythm_line,
      sym_source,
      sym_transcription,
      sym_unit_note_length,
  [278] = 4,
    ACTIONS(608), 1,
      sym__NL,
    STATE(113), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(611), 2,
      sym_COMMENT,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(606), 22,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
      sym_area,
      sym_book,
      sym_composer,
      sym_discography,
      sym_file,
      sym_group,
      sym_history,
      sym_instruction,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_origin,
      anon_sym_X_COLON,
      sym_remark,
      sym_rhythm_line,
      sym_source,
      sym_transcription,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_words_postbody,
  [313] = 4,
    ACTIONS(613), 1,
      sym__NL,
    STATE(113), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(615), 2,
      sym_COMMENT,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(601), 20,
      anon_sym_PERCENT_PERCENT,
      sym_area,
      sym_book,
      sym_composer,
      sym_discography,
      sym_file,
      sym_group,
      sym_history,
      sym_instruction,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_origin,
      anon_sym_X_COLON,
      sym_remark,
      sym_rhythm_line,
      sym_source,
      sym_transcription,
      sym_unit_note_length,
      anon_sym_U_COLON,
  [346] = 16,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(167), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(617), 1,
      aux_sym__MUSIC_CODE_token1,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(627), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(629), 1,
      sym_tuplet_marker,
    STATE(21), 1,
      sym__pitch,
    STATE(32), 1,
      sym_note,
    STATE(181), 1,
      sym_chord_symbol,
    STATE(199), 1,
      sym_decoration,
    STATE(123), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(8), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [399] = 14,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(627), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(629), 1,
      sym_tuplet_marker,
    STATE(21), 1,
      sym__pitch,
    STATE(32), 1,
      sym_note,
    STATE(181), 1,
      sym_chord_symbol,
    STATE(199), 1,
      sym_decoration,
    STATE(123), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(41), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [445] = 3,
    ACTIONS(631), 1,
      sym_octave,
    STATE(117), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(256), 14,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [468] = 3,
    ACTIONS(634), 1,
      sym_octave,
    STATE(117), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(232), 14,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [491] = 3,
    ACTIONS(636), 1,
      sym_octave,
    STATE(118), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(250), 14,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [514] = 3,
    ACTIONS(634), 1,
      sym_octave,
    STATE(117), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(250), 14,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [537] = 3,
    ACTIONS(638), 1,
      sym_octave,
    STATE(120), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(244), 14,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [560] = 13,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(627), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      sym_tuplet_marker,
    STATE(128), 1,
      sym__pitch,
    STATE(160), 1,
      sym_note,
    STATE(177), 1,
      sym_chord_symbol,
    STATE(209), 1,
      sym_decoration,
    STATE(166), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [601] = 13,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(627), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      sym_tuplet_marker,
    STATE(21), 1,
      sym__pitch,
    STATE(29), 1,
      sym_note,
    STATE(180), 1,
      sym_chord_symbol,
    STATE(206), 1,
      sym_decoration,
    STATE(166), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [642] = 7,
    ACTIONS(653), 1,
      anon_sym_DASH,
    ACTIONS(656), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(659), 1,
      aux_sym_verse_number_token1,
    ACTIONS(648), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(124), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(178), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(650), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [671] = 7,
    ACTIONS(666), 1,
      anon_sym_DASH,
    ACTIONS(668), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(670), 1,
      aux_sym_verse_number_token1,
    ACTIONS(662), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(124), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(178), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(664), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [700] = 11,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(672), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(134), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [736] = 11,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(674), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(134), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [772] = 2,
    ACTIONS(676), 1,
      sym_rhythm,
    ACTIONS(281), 12,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [790] = 11,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(678), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(134), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [826] = 11,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(680), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(134), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [862] = 11,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(682), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(134), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [898] = 11,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(684), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(134), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [934] = 8,
    ACTIONS(686), 1,
      sym__NL,
    ACTIONS(691), 1,
      anon_sym_DASH,
    ACTIONS(694), 1,
      sym_UNDERSCORE,
    ACTIONS(697), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(700), 1,
      aux_sym_verse_number_token1,
    STATE(133), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(688), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(183), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [964] = 11,
    ACTIONS(703), 1,
      anon_sym_RBRACK,
    ACTIONS(705), 1,
      sym_alteration,
    ACTIONS(708), 1,
      sym_note_letter,
    ACTIONS(711), 1,
      sym_rest,
    ACTIONS(714), 1,
      aux_sym_grace_note_token1,
    ACTIONS(717), 1,
      sym_decoration_shorthand,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(134), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1000] = 11,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(720), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(134), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1036] = 11,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(722), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(134), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1072] = 8,
    ACTIONS(724), 1,
      sym__NL,
    ACTIONS(728), 1,
      anon_sym_DASH,
    ACTIONS(730), 1,
      sym_UNDERSCORE,
    ACTIONS(732), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(734), 1,
      aux_sym_verse_number_token1,
    STATE(133), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(726), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(183), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1102] = 11,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(736), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(134), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1138] = 11,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(738), 1,
      anon_sym_RBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(134), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1174] = 10,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(127), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1207] = 1,
    ACTIONS(332), 12,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1222] = 7,
    ACTIONS(728), 1,
      anon_sym_DASH,
    ACTIONS(730), 1,
      sym_UNDERSCORE,
    ACTIONS(732), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(734), 1,
      aux_sym_verse_number_token1,
    STATE(137), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(726), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(183), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1249] = 10,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(126), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1282] = 10,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(130), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1315] = 10,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(132), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1348] = 10,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(131), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1381] = 10,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(135), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1414] = 10,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(129), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1447] = 10,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(139), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1480] = 10,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    STATE(128), 1,
      sym__pitch,
    STATE(195), 1,
      sym_note,
    STATE(215), 1,
      sym_decoration,
    STATE(138), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(170), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1513] = 7,
    ACTIONS(664), 1,
      sym_UNDERSCORE,
    ACTIONS(668), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(670), 1,
      aux_sym_verse_number_token1,
    ACTIONS(742), 1,
      anon_sym_DASH,
    STATE(125), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(740), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(178), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1540] = 2,
    ACTIONS(744), 1,
      aux_sym_note_construct_token1,
    ACTIONS(360), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1556] = 2,
    ACTIONS(746), 1,
      sym_rhythm,
    ACTIONS(348), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1572] = 2,
    ACTIONS(748), 1,
      sym_rhythm,
    ACTIONS(314), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1588] = 2,
    ACTIONS(750), 1,
      aux_sym_note_construct_token1,
    ACTIONS(354), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1604] = 2,
    ACTIONS(752), 1,
      aux_sym_note_construct_token1,
    ACTIONS(336), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1620] = 2,
    ACTIONS(754), 1,
      sym_rhythm,
    ACTIONS(320), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1636] = 2,
    ACTIONS(756), 1,
      aux_sym_note_construct_token1,
    ACTIONS(342), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1652] = 2,
    ACTIONS(758), 1,
      sym_rhythm,
    ACTIONS(302), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1668] = 2,
    ACTIONS(760), 1,
      aux_sym_note_construct_token1,
    ACTIONS(326), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1684] = 2,
    ACTIONS(762), 1,
      sym_rhythm,
    ACTIONS(308), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1700] = 1,
    ACTIONS(366), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1713] = 1,
    ACTIONS(360), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1726] = 1,
    ACTIONS(302), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1739] = 1,
    ACTIONS(326), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1752] = 3,
    ACTIONS(766), 1,
      aux_sym_grace_note_token1,
    STATE(166), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(764), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1769] = 1,
    ACTIONS(308), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1782] = 1,
    ACTIONS(370), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1795] = 1,
    ACTIONS(336), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1808] = 9,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(35), 1,
      aux_sym_grace_note_token1,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    STATE(128), 1,
      sym__pitch,
    STATE(198), 1,
      sym_note,
    STATE(218), 1,
      sym_decoration,
    STATE(166), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1837] = 1,
    ACTIONS(348), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1850] = 1,
    ACTIONS(320), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1863] = 1,
    ACTIONS(354), 10,
      sym_BEAM_SEPARATOR,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1876] = 1,
    ACTIONS(769), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1888] = 1,
    ACTIONS(771), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1900] = 1,
    ACTIONS(773), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1912] = 9,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(775), 1,
      anon_sym_LBRACK,
    ACTIONS(777), 1,
      sym_tuplet_marker,
    STATE(128), 1,
      sym__pitch,
    STATE(155), 1,
      sym_note,
    STATE(213), 1,
      sym_decoration,
  [1940] = 1,
    ACTIONS(779), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1952] = 9,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    ACTIONS(642), 1,
      sym_tuplet_marker,
    STATE(128), 1,
      sym__pitch,
    STATE(160), 1,
      sym_note,
    STATE(209), 1,
      sym_decoration,
  [1980] = 9,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(781), 1,
      anon_sym_LBRACK,
    ACTIONS(783), 1,
      sym_tuplet_marker,
    STATE(21), 1,
      sym__pitch,
    STATE(35), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
  [2008] = 9,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    ACTIONS(646), 1,
      sym_tuplet_marker,
    STATE(21), 1,
      sym__pitch,
    STATE(29), 1,
      sym_note,
    STATE(206), 1,
      sym_decoration,
  [2036] = 1,
    ACTIONS(785), 8,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2047] = 2,
    ACTIONS(779), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(787), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2060] = 8,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(789), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(36), 1,
      sym_note,
    STATE(201), 1,
      sym_decoration,
  [2085] = 2,
    ACTIONS(769), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(791), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2098] = 2,
    ACTIONS(771), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(793), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2111] = 8,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(795), 1,
      anon_sym_LBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(152), 1,
      sym_note,
    STATE(214), 1,
      sym_decoration,
  [2136] = 8,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(781), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(35), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
  [2161] = 8,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(160), 1,
      sym_note,
    STATE(209), 1,
      sym_decoration,
  [2186] = 5,
    ACTIONS(242), 1,
      sym_words_postbody,
    STATE(193), 1,
      aux_sym_file_structure_repeat1,
    STATE(235), 1,
      sym_lyric_section,
    STATE(205), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(797), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2205] = 8,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(29), 1,
      sym_note,
    STATE(206), 1,
      sym_decoration,
  [2230] = 8,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(240), 1,
      sym_decoration_shorthand,
    ACTIONS(775), 1,
      anon_sym_LBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(155), 1,
      sym_note,
    STATE(213), 1,
      sym_decoration,
  [2255] = 5,
    ACTIONS(242), 1,
      sym_words_postbody,
    STATE(113), 1,
      aux_sym_file_structure_repeat1,
    STATE(229), 1,
      sym_lyric_section,
    STATE(205), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(799), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2274] = 2,
    ACTIONS(773), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(801), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2287] = 1,
    ACTIONS(803), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2296] = 6,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(789), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(36), 1,
      sym_note,
  [2315] = 6,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    ACTIONS(805), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(14), 1,
      sym_tune_header,
    STATE(207), 1,
      aux_sym_file_structure_repeat2,
    STATE(223), 1,
      sym_tune,
  [2334] = 1,
    ACTIONS(807), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2343] = 6,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(644), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(29), 1,
      sym_note,
  [2362] = 1,
    ACTIONS(571), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2371] = 6,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(809), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(31), 1,
      sym_note,
  [2390] = 1,
    ACTIONS(567), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2399] = 1,
    ACTIONS(563), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2408] = 3,
    ACTIONS(813), 1,
      sym_words_postbody,
    STATE(204), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(811), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2421] = 3,
    ACTIONS(242), 1,
      sym_words_postbody,
    STATE(204), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(816), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2434] = 6,
    ACTIONS(621), 1,
      sym_alteration,
    ACTIONS(623), 1,
      sym_note_letter,
    ACTIONS(625), 1,
      sym_rest,
    ACTIONS(781), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(35), 1,
      sym_note,
  [2453] = 6,
    ACTIONS(818), 1,
      ts_builtin_sym_end,
    ACTIONS(820), 1,
      anon_sym_X_COLON,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(14), 1,
      sym_tune_header,
    STATE(207), 1,
      aux_sym_file_structure_repeat2,
    STATE(223), 1,
      sym_tune,
  [2472] = 1,
    ACTIONS(823), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2481] = 6,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(775), 1,
      anon_sym_LBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(155), 1,
      sym_note,
  [2500] = 6,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(640), 1,
      anon_sym_LBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(160), 1,
      sym_note,
  [2519] = 6,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    ACTIONS(825), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(14), 1,
      sym_tune_header,
    STATE(207), 1,
      aux_sym_file_structure_repeat2,
    STATE(223), 1,
      sym_tune,
  [2538] = 1,
    ACTIONS(575), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2547] = 6,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(795), 1,
      anon_sym_LBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(152), 1,
      sym_note,
  [2566] = 6,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    ACTIONS(827), 1,
      anon_sym_LBRACK,
    STATE(128), 1,
      sym__pitch,
    STATE(156), 1,
      sym_note,
  [2585] = 5,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    STATE(128), 1,
      sym__pitch,
    STATE(198), 1,
      sym_note,
  [2601] = 5,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(14), 1,
      sym_tune_header,
    STATE(211), 1,
      aux_sym_file_structure_repeat2,
    STATE(223), 1,
      sym_tune,
  [2617] = 4,
    ACTIONS(829), 1,
      sym_alteration,
    ACTIONS(832), 1,
      sym_note_letter,
    ACTIONS(835), 1,
      aux_sym_grace_note_token2,
    STATE(217), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [2631] = 5,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(29), 1,
      sym_rest,
    STATE(128), 1,
      sym__pitch,
    STATE(208), 1,
      sym_note,
  [2647] = 4,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    ACTIONS(837), 1,
      aux_sym_grace_note_token2,
    STATE(217), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [2661] = 1,
    ACTIONS(839), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [2668] = 2,
    ACTIONS(841), 1,
      sym_alteration,
    ACTIONS(843), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [2677] = 1,
    ACTIONS(845), 4,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
      sym_words_postbody,
  [2684] = 3,
    ACTIONS(849), 1,
      sym__NL,
    STATE(224), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(847), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [2695] = 3,
    ACTIONS(613), 1,
      sym__NL,
    STATE(113), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(818), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [2706] = 3,
    ACTIONS(25), 1,
      sym_alteration,
    ACTIONS(27), 1,
      sym_note_letter,
    STATE(219), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [2717] = 3,
    ACTIONS(851), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(853), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(855), 1,
      sym_chord_type,
  [2727] = 3,
    ACTIONS(857), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(859), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(861), 1,
      sym_chord_type,
  [2737] = 3,
    ACTIONS(863), 1,
      sym_noCommentText,
    ACTIONS(865), 1,
      anon_sym_DOT,
    STATE(234), 1,
      aux_sym_abc_version_repeat1,
  [2747] = 1,
    ACTIONS(867), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2753] = 1,
    ACTIONS(797), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2759] = 3,
    ACTIONS(869), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(871), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(873), 1,
      sym_chord_type,
  [2769] = 3,
    ACTIONS(875), 1,
      sym_noCommentText,
    ACTIONS(877), 1,
      aux_sym_words_line_token1,
    STATE(238), 1,
      aux_sym_words_line_repeat2,
  [2779] = 3,
    ACTIONS(879), 1,
      sym_noCommentText,
    ACTIONS(881), 1,
      anon_sym_DOT,
    STATE(233), 1,
      aux_sym_abc_version_repeat1,
  [2789] = 3,
    ACTIONS(865), 1,
      anon_sym_DOT,
    ACTIONS(884), 1,
      sym_noCommentText,
    STATE(233), 1,
      aux_sym_abc_version_repeat1,
  [2799] = 1,
    ACTIONS(799), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2805] = 1,
    ACTIONS(886), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [2811] = 3,
    ACTIONS(877), 1,
      aux_sym_words_line_token1,
    ACTIONS(888), 1,
      sym_noCommentText,
    STATE(232), 1,
      aux_sym_words_line_repeat2,
  [2821] = 3,
    ACTIONS(890), 1,
      sym_noCommentText,
    ACTIONS(892), 1,
      aux_sym_words_line_token1,
    STATE(238), 1,
      aux_sym_words_line_repeat2,
  [2831] = 2,
    ACTIONS(895), 1,
      sym_note_letter,
    STATE(272), 1,
      sym_chord_symbol_note,
  [2838] = 2,
    ACTIONS(895), 1,
      sym_note_letter,
    STATE(310), 1,
      sym_chord_symbol_note,
  [2845] = 2,
    ACTIONS(897), 1,
      sym__NL,
    ACTIONS(899), 1,
      sym_COMMENT,
  [2852] = 2,
    ACTIONS(901), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(903), 1,
      aux_sym_chord_symbol_token2,
  [2859] = 2,
    ACTIONS(905), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(907), 1,
      aux_sym_chord_symbol_token2,
  [2866] = 2,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
    STATE(92), 1,
      sym_nth_ending_number,
  [2873] = 1,
    ACTIONS(911), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [2878] = 2,
    ACTIONS(913), 1,
      sym__NL,
    STATE(114), 1,
      aux_sym_file_structure_repeat1,
  [2885] = 2,
    ACTIONS(915), 1,
      sym__NL,
    ACTIONS(917), 1,
      sym_COMMENT,
  [2892] = 2,
    ACTIONS(919), 1,
      sym__NL,
    ACTIONS(921), 1,
      sym_COMMENT,
  [2899] = 1,
    ACTIONS(923), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [2904] = 2,
    ACTIONS(925), 1,
      anon_sym_LBRACK,
    STATE(89), 1,
      sym_nth_ending_number,
  [2911] = 2,
    ACTIONS(927), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(929), 1,
      aux_sym_chord_symbol_token2,
  [2918] = 2,
    ACTIONS(931), 1,
      sym_note_letter,
    STATE(226), 1,
      sym_chord_symbol_note,
  [2925] = 2,
    ACTIONS(895), 1,
      sym_note_letter,
    STATE(287), 1,
      sym_chord_symbol_note,
  [2932] = 1,
    ACTIONS(879), 2,
      sym_noCommentText,
      anon_sym_DOT,
  [2937] = 2,
    ACTIONS(933), 1,
      sym__NL,
    ACTIONS(935), 1,
      sym_COMMENT,
  [2944] = 2,
    ACTIONS(895), 1,
      sym_note_letter,
    STATE(290), 1,
      sym_chord_symbol_note,
  [2951] = 2,
    ACTIONS(843), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(937), 1,
      sym_alteration,
  [2958] = 2,
    ACTIONS(931), 1,
      sym_note_letter,
    STATE(227), 1,
      sym_chord_symbol_note,
  [2965] = 2,
    ACTIONS(895), 1,
      sym_note_letter,
    STATE(299), 1,
      sym_chord_symbol_note,
  [2972] = 2,
    ACTIONS(939), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_nth_ending_number,
  [2979] = 2,
    ACTIONS(895), 1,
      sym_note_letter,
    STATE(301), 1,
      sym_chord_symbol_note,
  [2986] = 2,
    ACTIONS(931), 1,
      sym_note_letter,
    STATE(231), 1,
      sym_chord_symbol_note,
  [2993] = 1,
    ACTIONS(941), 1,
      ts_builtin_sym_end,
  [2997] = 1,
    ACTIONS(943), 1,
      sym__NL,
  [3001] = 1,
    ACTIONS(945), 1,
      anon_sym_LBRACK,
  [3005] = 1,
    ACTIONS(947), 1,
      anon_sym_LBRACK,
  [3009] = 1,
    ACTIONS(949), 1,
      aux_sym_nth_ending_number_token1,
  [3013] = 1,
    ACTIONS(398), 1,
      sym_noCommentText,
  [3017] = 1,
    ACTIONS(951), 1,
      sym_noCommentText,
  [3021] = 1,
    ACTIONS(953), 1,
      sym_noCommentText,
  [3025] = 1,
    ACTIONS(955), 1,
      sym__NL,
  [3029] = 1,
    ACTIONS(957), 1,
      aux_sym_chord_symbol_token1,
  [3033] = 1,
    ACTIONS(959), 1,
      aux_sym_nth_ending_number_token1,
  [3037] = 1,
    ACTIONS(398), 1,
      aux_sym_body_inline_info_token1,
  [3041] = 1,
    ACTIONS(961), 1,
      sym_note_letter,
  [3045] = 1,
    ACTIONS(963), 1,
      sym_noCommentText,
  [3049] = 1,
    ACTIONS(965), 1,
      aux_sym_body_inline_info_token1,
  [3053] = 1,
    ACTIONS(967), 1,
      aux_sym_nth_ending_number_token1,
  [3057] = 1,
    ACTIONS(969), 1,
      sym__NL,
  [3061] = 1,
    ACTIONS(971), 1,
      ts_builtin_sym_end,
  [3065] = 1,
    ACTIONS(973), 1,
      aux_sym_nth_ending_number_token1,
  [3069] = 1,
    ACTIONS(975), 1,
      sym_noCommentText,
  [3073] = 1,
    ACTIONS(977), 1,
      sym__NL,
  [3077] = 1,
    ACTIONS(979), 1,
      aux_sym_first_repeat_bar_token2,
  [3081] = 1,
    ACTIONS(981), 1,
      aux_sym_first_repeat_bar_token2,
  [3085] = 1,
    ACTIONS(983), 1,
      anon_sym_DOT,
  [3089] = 1,
    ACTIONS(985), 1,
      aux_sym_chord_symbol_token1,
  [3093] = 1,
    ACTIONS(987), 1,
      anon_sym_RBRACK,
  [3097] = 1,
    ACTIONS(989), 1,
      aux_sym_nth_ending_number_token1,
  [3101] = 1,
    ACTIONS(991), 1,
      aux_sym_chord_symbol_token1,
  [3105] = 1,
    ACTIONS(993), 1,
      aux_sym_nth_ending_number_token1,
  [3109] = 1,
    ACTIONS(995), 1,
      aux_sym_first_repeat_bar_token2,
  [3113] = 1,
    ACTIONS(997), 1,
      aux_sym_first_repeat_bar_token2,
  [3117] = 1,
    ACTIONS(999), 1,
      anon_sym_DOT,
  [3121] = 1,
    ACTIONS(1001), 1,
      aux_sym_nth_ending_number_token1,
  [3125] = 1,
    ACTIONS(1003), 1,
      aux_sym_lyric_line_token1,
  [3129] = 1,
    ACTIONS(1005), 1,
      aux_sym_first_repeat_bar_token2,
  [3133] = 1,
    ACTIONS(1007), 1,
      aux_sym_first_repeat_bar_token2,
  [3137] = 1,
    ACTIONS(1009), 1,
      aux_sym_chord_symbol_token1,
  [3141] = 1,
    ACTIONS(1011), 1,
      aux_sym_nth_ending_number_token1,
  [3145] = 1,
    ACTIONS(1013), 1,
      aux_sym_chord_symbol_token1,
  [3149] = 1,
    ACTIONS(1015), 1,
      anon_sym_EQ,
  [3153] = 1,
    ACTIONS(1017), 1,
      anon_sym_EQ,
  [3157] = 1,
    ACTIONS(1019), 1,
      sym_noCommentText,
  [3161] = 1,
    ACTIONS(1021), 1,
      anon_sym_LBRACK,
  [3165] = 1,
    ACTIONS(1023), 1,
      anon_sym_LBRACK,
  [3169] = 1,
    ACTIONS(975), 1,
      aux_sym_body_inline_info_token1,
  [3173] = 1,
    ACTIONS(1025), 1,
      sym__NL,
  [3177] = 1,
    ACTIONS(1027), 1,
      sym__NL,
  [3181] = 1,
    ACTIONS(1029), 1,
      aux_sym_chord_symbol_token1,
  [3185] = 1,
    ACTIONS(1031), 1,
      sym_note_letter,
  [3189] = 1,
    ACTIONS(1033), 1,
      aux_sym_multimeasure_rest_token1,
  [3193] = 1,
    ACTIONS(1035), 1,
      anon_sym_LBRACK,
  [3197] = 1,
    ACTIONS(1037), 1,
      anon_sym_LBRACK,
  [3201] = 1,
    ACTIONS(1039), 1,
      aux_sym_nth_ending_number_token1,
  [3205] = 1,
    ACTIONS(1041), 1,
      aux_sym_lyric_line_token1,
  [3209] = 1,
    ACTIONS(1043), 1,
      sym__NL,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(108)] = 0,
  [SMALL_STATE(109)] = 65,
  [SMALL_STATE(110)] = 130,
  [SMALL_STATE(111)] = 176,
  [SMALL_STATE(112)] = 232,
  [SMALL_STATE(113)] = 278,
  [SMALL_STATE(114)] = 313,
  [SMALL_STATE(115)] = 346,
  [SMALL_STATE(116)] = 399,
  [SMALL_STATE(117)] = 445,
  [SMALL_STATE(118)] = 468,
  [SMALL_STATE(119)] = 491,
  [SMALL_STATE(120)] = 514,
  [SMALL_STATE(121)] = 537,
  [SMALL_STATE(122)] = 560,
  [SMALL_STATE(123)] = 601,
  [SMALL_STATE(124)] = 642,
  [SMALL_STATE(125)] = 671,
  [SMALL_STATE(126)] = 700,
  [SMALL_STATE(127)] = 736,
  [SMALL_STATE(128)] = 772,
  [SMALL_STATE(129)] = 790,
  [SMALL_STATE(130)] = 826,
  [SMALL_STATE(131)] = 862,
  [SMALL_STATE(132)] = 898,
  [SMALL_STATE(133)] = 934,
  [SMALL_STATE(134)] = 964,
  [SMALL_STATE(135)] = 1000,
  [SMALL_STATE(136)] = 1036,
  [SMALL_STATE(137)] = 1072,
  [SMALL_STATE(138)] = 1102,
  [SMALL_STATE(139)] = 1138,
  [SMALL_STATE(140)] = 1174,
  [SMALL_STATE(141)] = 1207,
  [SMALL_STATE(142)] = 1222,
  [SMALL_STATE(143)] = 1249,
  [SMALL_STATE(144)] = 1282,
  [SMALL_STATE(145)] = 1315,
  [SMALL_STATE(146)] = 1348,
  [SMALL_STATE(147)] = 1381,
  [SMALL_STATE(148)] = 1414,
  [SMALL_STATE(149)] = 1447,
  [SMALL_STATE(150)] = 1480,
  [SMALL_STATE(151)] = 1513,
  [SMALL_STATE(152)] = 1540,
  [SMALL_STATE(153)] = 1556,
  [SMALL_STATE(154)] = 1572,
  [SMALL_STATE(155)] = 1588,
  [SMALL_STATE(156)] = 1604,
  [SMALL_STATE(157)] = 1620,
  [SMALL_STATE(158)] = 1636,
  [SMALL_STATE(159)] = 1652,
  [SMALL_STATE(160)] = 1668,
  [SMALL_STATE(161)] = 1684,
  [SMALL_STATE(162)] = 1700,
  [SMALL_STATE(163)] = 1713,
  [SMALL_STATE(164)] = 1726,
  [SMALL_STATE(165)] = 1739,
  [SMALL_STATE(166)] = 1752,
  [SMALL_STATE(167)] = 1769,
  [SMALL_STATE(168)] = 1782,
  [SMALL_STATE(169)] = 1795,
  [SMALL_STATE(170)] = 1808,
  [SMALL_STATE(171)] = 1837,
  [SMALL_STATE(172)] = 1850,
  [SMALL_STATE(173)] = 1863,
  [SMALL_STATE(174)] = 1876,
  [SMALL_STATE(175)] = 1888,
  [SMALL_STATE(176)] = 1900,
  [SMALL_STATE(177)] = 1912,
  [SMALL_STATE(178)] = 1940,
  [SMALL_STATE(179)] = 1952,
  [SMALL_STATE(180)] = 1980,
  [SMALL_STATE(181)] = 2008,
  [SMALL_STATE(182)] = 2036,
  [SMALL_STATE(183)] = 2047,
  [SMALL_STATE(184)] = 2060,
  [SMALL_STATE(185)] = 2085,
  [SMALL_STATE(186)] = 2098,
  [SMALL_STATE(187)] = 2111,
  [SMALL_STATE(188)] = 2136,
  [SMALL_STATE(189)] = 2161,
  [SMALL_STATE(190)] = 2186,
  [SMALL_STATE(191)] = 2205,
  [SMALL_STATE(192)] = 2230,
  [SMALL_STATE(193)] = 2255,
  [SMALL_STATE(194)] = 2274,
  [SMALL_STATE(195)] = 2287,
  [SMALL_STATE(196)] = 2296,
  [SMALL_STATE(197)] = 2315,
  [SMALL_STATE(198)] = 2334,
  [SMALL_STATE(199)] = 2343,
  [SMALL_STATE(200)] = 2362,
  [SMALL_STATE(201)] = 2371,
  [SMALL_STATE(202)] = 2390,
  [SMALL_STATE(203)] = 2399,
  [SMALL_STATE(204)] = 2408,
  [SMALL_STATE(205)] = 2421,
  [SMALL_STATE(206)] = 2434,
  [SMALL_STATE(207)] = 2453,
  [SMALL_STATE(208)] = 2472,
  [SMALL_STATE(209)] = 2481,
  [SMALL_STATE(210)] = 2500,
  [SMALL_STATE(211)] = 2519,
  [SMALL_STATE(212)] = 2538,
  [SMALL_STATE(213)] = 2547,
  [SMALL_STATE(214)] = 2566,
  [SMALL_STATE(215)] = 2585,
  [SMALL_STATE(216)] = 2601,
  [SMALL_STATE(217)] = 2617,
  [SMALL_STATE(218)] = 2631,
  [SMALL_STATE(219)] = 2647,
  [SMALL_STATE(220)] = 2661,
  [SMALL_STATE(221)] = 2668,
  [SMALL_STATE(222)] = 2677,
  [SMALL_STATE(223)] = 2684,
  [SMALL_STATE(224)] = 2695,
  [SMALL_STATE(225)] = 2706,
  [SMALL_STATE(226)] = 2717,
  [SMALL_STATE(227)] = 2727,
  [SMALL_STATE(228)] = 2737,
  [SMALL_STATE(229)] = 2747,
  [SMALL_STATE(230)] = 2753,
  [SMALL_STATE(231)] = 2759,
  [SMALL_STATE(232)] = 2769,
  [SMALL_STATE(233)] = 2779,
  [SMALL_STATE(234)] = 2789,
  [SMALL_STATE(235)] = 2799,
  [SMALL_STATE(236)] = 2805,
  [SMALL_STATE(237)] = 2811,
  [SMALL_STATE(238)] = 2821,
  [SMALL_STATE(239)] = 2831,
  [SMALL_STATE(240)] = 2838,
  [SMALL_STATE(241)] = 2845,
  [SMALL_STATE(242)] = 2852,
  [SMALL_STATE(243)] = 2859,
  [SMALL_STATE(244)] = 2866,
  [SMALL_STATE(245)] = 2873,
  [SMALL_STATE(246)] = 2878,
  [SMALL_STATE(247)] = 2885,
  [SMALL_STATE(248)] = 2892,
  [SMALL_STATE(249)] = 2899,
  [SMALL_STATE(250)] = 2904,
  [SMALL_STATE(251)] = 2911,
  [SMALL_STATE(252)] = 2918,
  [SMALL_STATE(253)] = 2925,
  [SMALL_STATE(254)] = 2932,
  [SMALL_STATE(255)] = 2937,
  [SMALL_STATE(256)] = 2944,
  [SMALL_STATE(257)] = 2951,
  [SMALL_STATE(258)] = 2958,
  [SMALL_STATE(259)] = 2965,
  [SMALL_STATE(260)] = 2972,
  [SMALL_STATE(261)] = 2979,
  [SMALL_STATE(262)] = 2986,
  [SMALL_STATE(263)] = 2993,
  [SMALL_STATE(264)] = 2997,
  [SMALL_STATE(265)] = 3001,
  [SMALL_STATE(266)] = 3005,
  [SMALL_STATE(267)] = 3009,
  [SMALL_STATE(268)] = 3013,
  [SMALL_STATE(269)] = 3017,
  [SMALL_STATE(270)] = 3021,
  [SMALL_STATE(271)] = 3025,
  [SMALL_STATE(272)] = 3029,
  [SMALL_STATE(273)] = 3033,
  [SMALL_STATE(274)] = 3037,
  [SMALL_STATE(275)] = 3041,
  [SMALL_STATE(276)] = 3045,
  [SMALL_STATE(277)] = 3049,
  [SMALL_STATE(278)] = 3053,
  [SMALL_STATE(279)] = 3057,
  [SMALL_STATE(280)] = 3061,
  [SMALL_STATE(281)] = 3065,
  [SMALL_STATE(282)] = 3069,
  [SMALL_STATE(283)] = 3073,
  [SMALL_STATE(284)] = 3077,
  [SMALL_STATE(285)] = 3081,
  [SMALL_STATE(286)] = 3085,
  [SMALL_STATE(287)] = 3089,
  [SMALL_STATE(288)] = 3093,
  [SMALL_STATE(289)] = 3097,
  [SMALL_STATE(290)] = 3101,
  [SMALL_STATE(291)] = 3105,
  [SMALL_STATE(292)] = 3109,
  [SMALL_STATE(293)] = 3113,
  [SMALL_STATE(294)] = 3117,
  [SMALL_STATE(295)] = 3121,
  [SMALL_STATE(296)] = 3125,
  [SMALL_STATE(297)] = 3129,
  [SMALL_STATE(298)] = 3133,
  [SMALL_STATE(299)] = 3137,
  [SMALL_STATE(300)] = 3141,
  [SMALL_STATE(301)] = 3145,
  [SMALL_STATE(302)] = 3149,
  [SMALL_STATE(303)] = 3153,
  [SMALL_STATE(304)] = 3157,
  [SMALL_STATE(305)] = 3161,
  [SMALL_STATE(306)] = 3165,
  [SMALL_STATE(307)] = 3169,
  [SMALL_STATE(308)] = 3173,
  [SMALL_STATE(309)] = 3177,
  [SMALL_STATE(310)] = 3181,
  [SMALL_STATE(311)] = 3185,
  [SMALL_STATE(312)] = 3189,
  [SMALL_STATE(313)] = 3193,
  [SMALL_STATE(314)] = 3197,
  [SMALL_STATE(315)] = 3201,
  [SMALL_STATE(316)] = 3205,
  [SMALL_STATE(317)] = 3209,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 2),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(111),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [33] = {.entry = {.count = 1, .reusable = false}}, SHIFT(312),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [37] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [59] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(58),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(271),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(269),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(58),
  [73] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(111),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(311),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(121),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(128),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(312),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(312),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(225),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(262),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(189),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(220),
  [103] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(23),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(37),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(51),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(19),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(56),
  [118] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(270),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(69),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(249),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(142),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 1),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [134] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(308),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [139] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(304),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(273),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(69),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(249),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 2),
  [153] = {.entry = {.count = 1, .reusable = false}}, SHIFT(308),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 2),
  [157] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 1),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 1),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 2),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_beam, 2), SHIFT(145),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_beam, 2), SHIFT(275),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_beam, 2), SHIFT(15),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_beam, 2), SHIFT(21),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_beam, 2), SHIFT(225),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_beam, 2), SHIFT(262),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_beam, 2), SHIFT(191),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_beam, 2), SHIFT(220),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2),
  [197] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(116),
  [200] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(145),
  [203] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(275),
  [206] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(15),
  [209] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(21),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(225),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(262),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(191),
  [221] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(220),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 5),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 5),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 4),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 4),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 3),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 3),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 1),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 1),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [250] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 2),
  [252] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 2),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [260] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(18),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_bar_line, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_bar_line, 1),
  [267] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [269] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [271] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [273] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [281] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [291] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(315),
  [294] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [298] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 3),
  [300] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 3),
  [302] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 5),
  [304] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 5),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [308] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 7),
  [310] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 7),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [314] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 3),
  [316] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 3),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 6),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 6),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 2),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [332] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 5),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 1),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 4),
  [350] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 4),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 3),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [360] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [362] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 4),
  [364] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 8),
  [368] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 8),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 6),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 6),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 4),
  [376] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 2),
  [380] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 2),
  [382] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_barline, 2),
  [384] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_barline, 2),
  [386] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_barline, 3),
  [388] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_barline, 3),
  [390] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 2),
  [392] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 4),
  [396] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 4),
  [398] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [400] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [402] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [404] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [412] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 2),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_inline_info, 4),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_inline_info, 4),
  [420] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet_directives, 2),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stylesheet_directives, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 2),
  [426] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 2),
  [428] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [430] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(64),
  [433] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(258),
  [436] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(72),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(74),
  [442] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(74),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(103),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(70),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(85),
  [454] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2),
  [456] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_line, 2),
  [458] = {.entry = {.count = 1, .reusable = false}}, SHIFT(66),
  [460] = {.entry = {.count = 1, .reusable = false}}, SHIFT(252),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [472] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(66),
  [475] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(252),
  [478] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(71),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(80),
  [484] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(101),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(73),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(96),
  [493] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [495] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [507] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [531] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [533] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(281),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(105),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(94),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(306),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [551] = {.entry = {.count = 1, .reusable = false}}, SHIFT(289),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(289),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(300),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(300),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [565] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 3),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 5),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [573] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 6),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header, 1),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [589] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(246),
  [592] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(269),
  [595] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(273),
  [598] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(276),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [603] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(249),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2), SHIFT_REPEAT(113),
  [611] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_structure_repeat1, 2),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [615] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [631] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(117),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(178),
  [653] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(174),
  [656] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(175),
  [659] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(286),
  [662] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [664] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [666] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [668] = {.entry = {.count = 1, .reusable = false}}, SHIFT(175),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(286),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(183),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(185),
  [694] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(183),
  [697] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(186),
  [700] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(294),
  [703] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2),
  [705] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(311),
  [708] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(121),
  [711] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(128),
  [714] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(225),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(220),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [728] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [730] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [732] = {.entry = {.count = 1, .reusable = false}}, SHIFT(186),
  [734] = {.entry = {.count = 1, .reusable = false}}, SHIFT(294),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [766] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(225),
  [769] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HYPHEN, 1),
  [771] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_syllable, 1),
  [773] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse_number, 2),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [779] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_text, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_text, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HYPHEN, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_syllable, 1),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 2),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 3),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse_number, 2),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [805] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 1),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2),
  [813] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2), SHIFT_REPEAT(316),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_section, 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 2),
  [820] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 2), SHIFT_REPEAT(278),
  [823] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [825] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 2),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [829] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(311),
  [832] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(121),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [843] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_line, 3),
  [847] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 1),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [863] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 2),
  [865] = {.entry = {.count = 1, .reusable = false}}, SHIFT(291),
  [867] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 4),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [875] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 4),
  [877] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [879] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2),
  [881] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(291),
  [884] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 3),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 3),
  [890] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [892] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2), SHIFT_REPEAT(151),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [897] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_info_line, 2, .production_id = 1),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [919] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 2, .production_id = 1),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [933] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 2, .production_id = 1),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [941] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [945] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [947] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [949] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [951] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [953] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [955] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [957] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [959] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [961] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [963] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [965] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [967] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [969] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [971] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [973] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [975] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined, 4),
  [977] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 3, .production_id = 1),
  [979] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [981] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [983] = {.entry = {.count = 1, .reusable = true}}, SHIFT(176),
  [985] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [987] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [989] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [991] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [993] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [995] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [997] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [999] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [1001] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [1003] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1005] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [1007] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [1009] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [1011] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [1013] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [1015] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [1017] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [1019] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1021] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1023] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1025] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [1027] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [1029] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [1031] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [1033] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [1035] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [1037] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [1039] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [1041] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1043] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_info_line, 3, .production_id = 1),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_abc(void) {
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
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
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
