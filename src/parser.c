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
#define STATE_COUNT 327
#define LARGE_STATE_COUNT 73
#define SYMBOL_COUNT 205
#define ALIAS_COUNT 0
#define TOKEN_COUNT 147
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  sym__space = 1,
  sym__NEWLINE = 2,
  anon_sym_BSLASH = 3,
  anon_sym_PLUS = 4,
  anon_sym_COLON = 5,
  sym_note_skip = 6,
  anon_sym_DASH = 7,
  sym_UNDERSCORE = 8,
  sym_TILDE = 9,
  sym_BEAM_SEPARATOR = 10,
  sym_COMMENTLINE = 11,
  anon_sym_PERCENT_PERCENT = 12,
  aux_sym__MUSIC_CODE_token1 = 13,
  aux_sym__music_content_token1 = 14,
  aux_sym_beam_token1 = 15,
  sym_slur_open = 16,
  sym_slur_close = 17,
  aux_sym_note_construct_token1 = 18,
  anon_sym_LBRACK = 19,
  anon_sym_RBRACK = 20,
  sym_alteration = 21,
  sym_note_letter = 22,
  sym_octave = 23,
  sym_rest = 24,
  anon_sym_Z = 25,
  anon_sym_X = 26,
  aux_sym_multimeasure_rest_token1 = 27,
  sym_rhythm = 28,
  aux_sym_grace_note_token1 = 29,
  aux_sym_grace_note_token2 = 30,
  aux_sym_chord_symbol_token1 = 31,
  aux_sym_chord_symbol_token2 = 32,
  sym_annotation = 33,
  sym_tuplet_marker = 34,
  sym_chord_type = 35,
  sym_decoration_shorthand = 36,
  aux_sym_nth_ending_barline_token1 = 37,
  aux_sym_nth_ending_number_token1 = 38,
  anon_sym_COMMA = 39,
  sym_bar_line = 40,
  sym_close_thin_thick_double_bar_line = 41,
  sym_thin_double_bar_line = 42,
  sym_open_thick_thin_double_bar_line = 43,
  sym_start_of_repeated_section = 44,
  sym_end_of_repeated_section = 45,
  sym_start_end_of_two_repeated_sections = 46,
  aux_sym_first_repeat_bar_token1 = 47,
  aux_sym_first_repeat_bar_token2 = 48,
  aux_sym_lyric_syllable_token1 = 49,
  aux_sym_verse_number_token1 = 50,
  anon_sym_DOT = 51,
  anon_sym_BANGtrill_BANG = 52,
  anon_sym_BANGtrill_LPAREN_BANG = 53,
  anon_sym_BANGtrill_RPAREN_BANG = 54,
  anon_sym_BANGlowermordent_BANG = 55,
  anon_sym_BANGuppermordent_BANG = 56,
  anon_sym_BANGmordent_BANG = 57,
  anon_sym_BANGpralltriller_BANG = 58,
  anon_sym_BANGroll_BANG = 59,
  anon_sym_BANGturn_BANG = 60,
  anon_sym_BANGturnx_BANG = 61,
  anon_sym_BANGinvertedturn_BANG = 62,
  anon_sym_BANGinvertedturnx_BANG = 63,
  anon_sym_BANGarpeggio_BANG = 64,
  anon_sym_BANG_GT_BANG = 65,
  anon_sym_BANGaccent_BANG = 66,
  anon_sym_BANGemphasis_BANG = 67,
  anon_sym_BANGfermata_BANG = 68,
  anon_sym_BANGinvertedfermata_BANG = 69,
  anon_sym_BANGtenuto_BANG = 70,
  anon_sym_BANG0_BANG_DASH_BANG5_BANG = 71,
  anon_sym_BANG_PLUS_BANG = 72,
  anon_sym_BANGplus_BANG = 73,
  anon_sym_BANGsnap_BANG = 74,
  anon_sym_BANGslide_BANG = 75,
  anon_sym_BANGwedge_BANG = 76,
  anon_sym_BANGupbow_BANG = 77,
  anon_sym_BANGdownbow_BANG = 78,
  anon_sym_BANGopen_BANG = 79,
  anon_sym_BANGthumb_BANG = 80,
  anon_sym_BANGbreath_BANG = 81,
  anon_sym_BANGpppp_BANG = 82,
  anon_sym_BANGppp_BANG = 83,
  anon_sym_BANGpp_BANG = 84,
  anon_sym_BANGp_BANG = 85,
  anon_sym_BANGmp_BANG = 86,
  anon_sym_BANGmf_BANG = 87,
  anon_sym_BANGf_BANG = 88,
  anon_sym_BANGff_BANG = 89,
  anon_sym_BANGfff_BANG = 90,
  anon_sym_BANGffff_BANG = 91,
  anon_sym_BANGsfz_BANG = 92,
  anon_sym_BANGcrescendo_LPAREN_BANG = 93,
  anon_sym_BANG_LT_LPAREN_BANG = 94,
  anon_sym_BANGcrescendo_RPAREN_BANG = 95,
  anon_sym_BANG_LT_RPAREN_BANG = 96,
  anon_sym_BANGdiminuendo_LPAREN_BANG = 97,
  anon_sym_BANG_GT_LPAREN_BANG = 98,
  anon_sym_BANGdiminuendo_RPAREN_BANG = 99,
  anon_sym_BANG_GT_RPAREN_BANG = 100,
  anon_sym_BANGsegno_BANG = 101,
  anon_sym_BANGcoda_BANG = 102,
  anon_sym_BANGD_DOTS_DOT_BANG = 103,
  anon_sym_BANGD_DOTC_DOT_BANG = 104,
  anon_sym_BANGdacoda_BANG = 105,
  anon_sym_BANGdacapo_BANG = 106,
  anon_sym_BANGfine_BANG = 107,
  anon_sym_BANGshortphrase_BANG = 108,
  anon_sym_BANGmediumphrase_BANG = 109,
  anon_sym_BANGlongphrase_BANG = 110,
  sym_parts_line = 111,
  aux_sym_body_inline_info_token1 = 112,
  anon_sym_PERCENTabc_DASH = 113,
  sym_area = 114,
  sym_book = 115,
  sym_composer = 116,
  sym_discography = 117,
  sym_file = 118,
  sym_group = 119,
  sym_history = 120,
  sym_instruction = 121,
  sym_key = 122,
  sym_macros = 123,
  sym_meter = 124,
  sym_notes = 125,
  sym_origin = 126,
  anon_sym_X_COLON = 127,
  sym_remark = 128,
  sym_rhythm_line = 129,
  sym_source = 130,
  anon_sym_s_COLON = 131,
  sym_tempo = 132,
  sym_transcription = 133,
  sym_tune_title = 134,
  sym_unit_note_length = 135,
  anon_sym_U_COLON = 136,
  aux_sym_user_defined_token1 = 137,
  aux_sym_user_defined_token2 = 138,
  anon_sym_EQ = 139,
  sym_voice = 140,
  anon_sym_w_COLON = 141,
  aux_sym_words_line_token1 = 142,
  sym_words_postbody = 143,
  aux_sym_body_info_line_token1 = 144,
  anon_sym_LF = 145,
  aux_sym_file_header_info_line_token1 = 146,
  sym_source_file = 147,
  sym_TEXTLINE = 148,
  sym_HYPHEN = 149,
  sym_stylesheet_directives = 150,
  sym__MUSIC_CODE = 151,
  sym_file_structure = 152,
  sym_file_header = 153,
  sym_tune = 154,
  sym_tune_header = 155,
  sym_tune_body = 156,
  sym__music_content = 157,
  sym__nte_or_chrd = 158,
  sym_beam = 159,
  sym_note_construct = 160,
  sym__chord_cstrct = 161,
  sym_note = 162,
  sym_chord_note = 163,
  sym__pitch = 164,
  sym_multimeasure_rest = 165,
  sym_grace_note = 166,
  sym_chord_symbol_note = 167,
  sym_chord_symbol = 168,
  sym_decoration = 169,
  sym_nth_ending_barline = 170,
  sym_nth_ending_number = 171,
  sym_generic_bar_line = 172,
  sym_first_repeat_bar = 173,
  sym_second_repeat_bar = 174,
  sym_lyric_line = 175,
  sym_lyric_section = 176,
  sym_lyric_syllable = 177,
  sym_verse_number = 178,
  sym_lyric_text = 179,
  sym_symbol = 180,
  sym_TEXT = 181,
  sym_abc_version = 182,
  sym_reference_number = 183,
  sym_symbol_line = 184,
  sym_user_defined = 185,
  sym_words_line = 186,
  sym_body_info_line = 187,
  sym_tune_header_info_line = 188,
  sym_file_header_info_line = 189,
  aux_sym_file_structure_repeat1 = 190,
  aux_sym_file_header_repeat1 = 191,
  aux_sym_tune_header_repeat1 = 192,
  aux_sym_tune_body_repeat1 = 193,
  aux_sym_beam_repeat1 = 194,
  aux_sym_note_construct_repeat1 = 195,
  aux_sym__chord_cstrct_repeat1 = 196,
  aux_sym__pitch_repeat1 = 197,
  aux_sym_grace_note_repeat1 = 198,
  aux_sym_nth_ending_number_repeat1 = 199,
  aux_sym_lyric_section_repeat1 = 200,
  aux_sym_abc_version_repeat1 = 201,
  aux_sym_symbol_line_repeat1 = 202,
  aux_sym_words_line_repeat1 = 203,
  aux_sym_words_line_repeat2 = 204,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [sym__NEWLINE] = "_NEWLINE",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [sym_note_skip] = "note_skip",
  [anon_sym_DASH] = "-",
  [sym_UNDERSCORE] = "UNDERSCORE",
  [sym_TILDE] = "TILDE",
  [sym_BEAM_SEPARATOR] = "BEAM_SEPARATOR",
  [sym_COMMENTLINE] = "COMMENTLINE",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [aux_sym__MUSIC_CODE_token1] = "_MUSIC_CODE_token1",
  [aux_sym__music_content_token1] = "_music_content_token1",
  [aux_sym_beam_token1] = "beam_token1",
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
  [aux_sym_nth_ending_barline_token1] = "nth_ending_barline_token1",
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
  [aux_sym_body_info_line_token1] = "body_info_line_token1",
  [anon_sym_LF] = "\n",
  [aux_sym_file_header_info_line_token1] = "file_header_info_line_token1",
  [sym_source_file] = "source_file",
  [sym_TEXTLINE] = "TEXTLINE",
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
  [sym_TEXT] = "TEXT",
  [sym_abc_version] = "abc_version",
  [sym_reference_number] = "reference_number",
  [sym_symbol_line] = "symbol_line",
  [sym_user_defined] = "user_defined",
  [sym_words_line] = "words_line",
  [sym_body_info_line] = "body_info_line",
  [sym_tune_header_info_line] = "tune_header_info_line",
  [sym_file_header_info_line] = "file_header_info_line",
  [aux_sym_file_structure_repeat1] = "file_structure_repeat1",
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
  [sym__NEWLINE] = sym__NEWLINE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_note_skip] = sym_note_skip,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_UNDERSCORE] = sym_UNDERSCORE,
  [sym_TILDE] = sym_TILDE,
  [sym_BEAM_SEPARATOR] = sym_BEAM_SEPARATOR,
  [sym_COMMENTLINE] = sym_COMMENTLINE,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [aux_sym__MUSIC_CODE_token1] = aux_sym__MUSIC_CODE_token1,
  [aux_sym__music_content_token1] = aux_sym__music_content_token1,
  [aux_sym_beam_token1] = aux_sym_beam_token1,
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
  [aux_sym_nth_ending_barline_token1] = aux_sym_nth_ending_barline_token1,
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
  [aux_sym_body_info_line_token1] = aux_sym_body_info_line_token1,
  [anon_sym_LF] = anon_sym_LF,
  [aux_sym_file_header_info_line_token1] = aux_sym_file_header_info_line_token1,
  [sym_source_file] = sym_source_file,
  [sym_TEXTLINE] = sym_TEXTLINE,
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
  [sym_TEXT] = sym_TEXT,
  [sym_abc_version] = sym_abc_version,
  [sym_reference_number] = sym_reference_number,
  [sym_symbol_line] = sym_symbol_line,
  [sym_user_defined] = sym_user_defined,
  [sym_words_line] = sym_words_line,
  [sym_body_info_line] = sym_body_info_line,
  [sym_tune_header_info_line] = sym_tune_header_info_line,
  [sym_file_header_info_line] = sym_file_header_info_line,
  [aux_sym_file_structure_repeat1] = aux_sym_file_structure_repeat1,
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
  [sym__NEWLINE] = {
    .visible = false,
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
  [sym_COMMENTLINE] = {
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
  [aux_sym__music_content_token1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_beam_token1] = {
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
  [aux_sym_nth_ending_barline_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym_body_info_line_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_file_header_info_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
    .visible = true,
    .named = true,
  },
  [sym_TEXTLINE] = {
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
  [sym_TEXT] = {
    .visible = true,
    .named = true,
  },
  [sym_abc_version] = {
    .visible = true,
    .named = true,
  },
  [sym_reference_number] = {
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
  [18] = 12,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 13,
  [25] = 11,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 10,
  [30] = 30,
  [31] = 9,
  [32] = 32,
  [33] = 33,
  [34] = 14,
  [35] = 35,
  [36] = 36,
  [37] = 37,
  [38] = 15,
  [39] = 20,
  [40] = 30,
  [41] = 21,
  [42] = 16,
  [43] = 23,
  [44] = 22,
  [45] = 26,
  [46] = 32,
  [47] = 17,
  [48] = 28,
  [49] = 19,
  [50] = 27,
  [51] = 37,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 11,
  [56] = 13,
  [57] = 9,
  [58] = 12,
  [59] = 10,
  [60] = 14,
  [61] = 15,
  [62] = 27,
  [63] = 28,
  [64] = 30,
  [65] = 32,
  [66] = 66,
  [67] = 67,
  [68] = 68,
  [69] = 20,
  [70] = 17,
  [71] = 23,
  [72] = 72,
  [73] = 73,
  [74] = 73,
  [75] = 73,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 36,
  [82] = 33,
  [83] = 83,
  [84] = 84,
  [85] = 84,
  [86] = 86,
  [87] = 87,
  [88] = 86,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 92,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 94,
  [100] = 96,
  [101] = 93,
  [102] = 98,
  [103] = 92,
  [104] = 95,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 105,
  [110] = 110,
  [111] = 111,
  [112] = 107,
  [113] = 106,
  [114] = 114,
  [115] = 111,
  [116] = 116,
  [117] = 117,
  [118] = 108,
  [119] = 114,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 125,
  [127] = 124,
  [128] = 128,
  [129] = 129,
  [130] = 129,
  [131] = 128,
  [132] = 122,
  [133] = 110,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 134,
  [138] = 136,
  [139] = 139,
  [140] = 139,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 141,
  [145] = 143,
  [146] = 146,
  [147] = 147,
  [148] = 142,
  [149] = 121,
  [150] = 146,
  [151] = 151,
  [152] = 151,
  [153] = 147,
  [154] = 135,
  [155] = 155,
  [156] = 155,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 159,
  [163] = 161,
  [164] = 158,
  [165] = 165,
  [166] = 166,
  [167] = 160,
  [168] = 166,
  [169] = 169,
  [170] = 170,
  [171] = 169,
  [172] = 170,
  [173] = 173,
  [174] = 174,
  [175] = 174,
  [176] = 176,
  [177] = 173,
  [178] = 178,
  [179] = 179,
  [180] = 180,
  [181] = 179,
  [182] = 182,
  [183] = 183,
  [184] = 184,
  [185] = 183,
  [186] = 186,
  [187] = 182,
  [188] = 180,
  [189] = 186,
  [190] = 190,
  [191] = 191,
  [192] = 184,
  [193] = 178,
  [194] = 194,
  [195] = 191,
  [196] = 194,
  [197] = 197,
  [198] = 67,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 203,
  [205] = 72,
  [206] = 206,
  [207] = 66,
  [208] = 199,
  [209] = 68,
  [210] = 202,
  [211] = 200,
  [212] = 212,
  [213] = 213,
  [214] = 214,
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
  [225] = 220,
  [226] = 226,
  [227] = 223,
  [228] = 228,
  [229] = 229,
  [230] = 220,
  [231] = 231,
  [232] = 232,
  [233] = 223,
  [234] = 234,
  [235] = 235,
  [236] = 235,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 219,
  [241] = 219,
  [242] = 242,
  [243] = 243,
  [244] = 234,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 222,
  [252] = 252,
  [253] = 253,
  [254] = 248,
  [255] = 255,
  [256] = 246,
  [257] = 253,
  [258] = 258,
  [259] = 259,
  [260] = 238,
  [261] = 253,
  [262] = 262,
  [263] = 249,
  [264] = 238,
  [265] = 259,
  [266] = 266,
  [267] = 267,
  [268] = 32,
  [269] = 247,
  [270] = 259,
  [271] = 271,
  [272] = 32,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 32,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 279,
  [283] = 283,
  [284] = 280,
  [285] = 281,
  [286] = 286,
  [287] = 277,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 290,
  [297] = 297,
  [298] = 298,
  [299] = 250,
  [300] = 300,
  [301] = 293,
  [302] = 278,
  [303] = 283,
  [304] = 292,
  [305] = 278,
  [306] = 291,
  [307] = 292,
  [308] = 293,
  [309] = 273,
  [310] = 291,
  [311] = 274,
  [312] = 312,
  [313] = 295,
  [314] = 314,
  [315] = 315,
  [316] = 316,
  [317] = 283,
  [318] = 273,
  [319] = 250,
  [320] = 298,
  [321] = 321,
  [322] = 274,
  [323] = 314,
  [324] = 315,
  [325] = 314,
  [326] = 315,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (eof) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == ' ') ADVANCE(294);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '%') ADVANCE(311);
      if (lookahead == '\'') ADVANCE(337);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == ',') ADVANCE(406);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == '.') ADVANCE(428);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead == '0') ADVANCE(344);
      if (lookahead == ':') ADVANCE(300);
      if (lookahead == '=') ADVANCE(583);
      if (lookahead == 'A') ADVANCE(331);
      if (lookahead == 'B') ADVANCE(332);
      if (lookahead == 'C') ADVANCE(333);
      if (lookahead == 'D') ADVANCE(334);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'G') ADVANCE(336);
      if (lookahead == 'H') ADVANCE(391);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(394);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(395);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(342);
      if (lookahead == 'Z') ADVANCE(340);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '\\') ADVANCE(298);
      if (lookahead == ']') ADVANCE(326);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead == 'm') ADVANCE(578);
      if (lookahead == 'r') ADVANCE(579);
      if (lookahead == 's') ADVANCE(580);
      if (lookahead == 'w') ADVANCE(581);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(409);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == '~') ADVANCE(308);
      if ((9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(318);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(348);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == 'u' ||
          lookahead == 'v') ADVANCE(390);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(343);
      if (('h' <= lookahead && lookahead <= 't')) ADVANCE(577);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '%') ADVANCE(316);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == '.') ADVANCE(428);
      if (lookahead == '=') ADVANCE(583);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == '|') ADVANCE(408);
      if (lookahead == '~') ADVANCE(308);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(427);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(852);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '/') ADVANCE(356);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(389);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(362);
      if (lookahead == 'a') ADVANCE(387);
      if (lookahead == 'd') ADVANCE(371);
      if (lookahead == 'm') ADVANCE(363);
      if (lookahead == 's') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == ',') ADVANCE(406);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(394);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'X') ADVANCE(341);
      if (lookahead == 'Z') ADVANCE(339);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(409);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(394);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'X') ADVANCE(341);
      if (lookahead == 'Z') ADVANCE(339);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(409);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(472);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(3);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(458);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(504);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(498);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(115);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(516);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(520);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(524);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(528);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(506);
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(502);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(500);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(496);
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(494);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(512);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(536);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(534);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(532);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(510);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(542);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(486);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(474);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(492);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(446);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(476);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(448);
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(81);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(530);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(478);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(488);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(432);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(450);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(482);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(480);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(460);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(490);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(540);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(538);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(468);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(434);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(436);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(470);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(484);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(464);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(442);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(456);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(462);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(514);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(518);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(548);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(522);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(526);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(544);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(452);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(438);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(546);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(444);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(440);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(454);
      END_STATE();
    case 67:
      if (lookahead == '!') ADVANCE(466);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == '[') ADVANCE(324);
      if (lookahead == ']') ADVANCE(326);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(337);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(348);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(347);
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
          lookahead == '~') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '/') ADVANCE(346);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == '[') ADVANCE(324);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == '`') ADVANCE(310);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(337);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(348);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(320);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(347);
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
          lookahead == '~') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      END_STATE();
    case 71:
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 72:
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      END_STATE();
    case 73:
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      END_STATE();
    case 74:
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == 'D') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(104);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(102);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(552);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(100);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 81:
      if (lookahead == '5') ADVANCE(49);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '|') ADVANCE(420);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(561);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(562);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(565);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(572);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(569);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(576);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(584);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(588);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(573);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(563);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(568);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(571);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(585);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(287);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(99);
      END_STATE();
    case 100:
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 101:
      if (lookahead == 'H') ADVANCE(75);
      if (('h' <= lookahead && lookahead <= 'w')) ADVANCE(577);
      END_STATE();
    case 102:
      if (lookahead == 'W') ADVANCE(582);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(119);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(125);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(225);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(109);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(76);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(149);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(165);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(111);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(168);
      if (lookahead == 'f') ADVANCE(283);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(177);
      if (lookahead == 'n') ADVANCE(107);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'h') ADVANCE(275);
      if (lookahead == 'r') ADVANCE(180);
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(129);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(103);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(166);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 165:
      if (lookahead == 'f') ADVANCE(163);
      if (lookahead == 't') ADVANCE(277);
      END_STATE();
    case 166:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(182);
      END_STATE();
    case 168:
      if (lookahead == 'g') ADVANCE(206);
      END_STATE();
    case 169:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 170:
      if (lookahead == 'g') ADVANCE(154);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(105);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(245);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(252);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(276);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(134);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(257);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(263);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(150);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(179);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(110);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(117);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(228);
      END_STATE();
    case 198:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(279);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 'w') ADVANCE(158);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(152);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(138);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(130);
      if (lookahead == 'r') ADVANCE(140);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(184);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(146);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(175);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(144);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(272);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(268);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(108);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(178);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(127);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(173);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(113);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(270);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(162);
      END_STATE();
    case 279:
      if (lookahead == 'v') ADVANCE(147);
      END_STATE();
    case 280:
      if (lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 281:
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 282:
      if (lookahead == 'w') ADVANCE(50);
      END_STATE();
    case 283:
      if (lookahead == 'z') ADVANCE(22);
      END_STATE();
    case 284:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 288:
      if (eof) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == ',') ADVANCE(406);
      if (lookahead == '-') ADVANCE(303);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(394);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(341);
      if (lookahead == 'Z') ADVANCE(339);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(409);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(390);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      END_STATE();
    case 289:
      if (eof) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '"') ADVANCE(353);
      if (lookahead == '%') ADVANCE(311);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == '/') ADVANCE(356);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == 'A') ADVANCE(331);
      if (lookahead == 'B') ADVANCE(332);
      if (lookahead == 'C') ADVANCE(333);
      if (lookahead == 'D') ADVANCE(334);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'G') ADVANCE(336);
      if (lookahead == 'H') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(394);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(395);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'Z') ADVANCE(91);
      if (lookahead == '[') ADVANCE(324);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == '.' ||
          lookahead == 'P' ||
          lookahead == 'T' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(390);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      END_STATE();
    case 290:
      if (eof) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '%') ADVANCE(311);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == '*') ADVANCE(301);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == 'A') ADVANCE(331);
      if (lookahead == 'B') ADVANCE(332);
      if (lookahead == 'C') ADVANCE(333);
      if (lookahead == 'D') ADVANCE(334);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'G') ADVANCE(336);
      if (lookahead == 'H') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(394);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(395);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(342);
      if (lookahead == 'Z') ADVANCE(340);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == ']') ADVANCE(326);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(409);
      if (lookahead == '}') ADVANCE(352);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(390);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(405);
      END_STATE();
    case 291:
      if (eof) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(394);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(341);
      if (lookahead == 'Z') ADVANCE(339);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(409);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      END_STATE();
    case 292:
      if (eof) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(297);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '%') ADVANCE(106);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == 'A') ADVANCE(331);
      if (lookahead == 'B') ADVANCE(332);
      if (lookahead == 'C') ADVANCE(333);
      if (lookahead == 'D') ADVANCE(334);
      if (lookahead == 'F') ADVANCE(335);
      if (lookahead == 'G') ADVANCE(336);
      if (lookahead == 'H') ADVANCE(392);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(394);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(395);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(397);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(342);
      if (lookahead == 'Z') ADVANCE(340);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(409);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(390);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__NEWLINE);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__NEWLINE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym__NEWLINE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == ':') ADVANCE(586);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(422);
      if (lookahead == '|') ADVANCE(420);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_note_skip);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_note_skip);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (lookahead == '_') ADVANCE(327);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_TILDE);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_BEAM_SEPARATOR);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead == 'a') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '%') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(316);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '-') ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(316);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == 'b') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(316);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == 'c') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(316);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(316);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym__MUSIC_CODE_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym__music_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(319);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(416);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(327);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(327);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(554);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(555);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(556);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(557);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(558);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(559);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == ':') ADVANCE(573);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == ':') ADVANCE(567);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '0') ADVANCE(344);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(344);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(345);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(345);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(347);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(348);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(349);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(350);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(656);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(374);
      if (lookahead == 'i') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(365);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(368);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(389);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == '-') ADVANCE(102);
      if (lookahead == ':') ADVANCE(560);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(560);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(575);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(564);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(566);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(550);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(570);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(574);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '!') ADVANCE(661);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '*') ADVANCE(302);
      if (lookahead == ':') ADVANCE(669);
      if (lookahead == '[') ADVANCE(850);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (lookahead != 0) ADVANCE(851);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '!') ADVANCE(661);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '*') ADVANCE(302);
      if (lookahead == ':') ADVANCE(669);
      if (lookahead == '[') ADVANCE(850);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(401);
      if (lookahead != 0) ADVANCE(851);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (lookahead == '\n') ADVANCE(403);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(401);
      if (lookahead != 0) ADVANCE(851);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(394);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'X') ADVANCE(341);
      if (lookahead == 'Z') ADVANCE(339);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(409);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(403);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (eof) ADVANCE(293);
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(354);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '(') ADVANCE(321);
      if (lookahead == ')') ADVANCE(322);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(327);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(393);
      if (lookahead == 'M') ADVANCE(394);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(396);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(398);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(341);
      if (lookahead == 'Z') ADVANCE(339);
      if (lookahead == '[') ADVANCE(325);
      if (lookahead == '^') ADVANCE(328);
      if (lookahead == '_') ADVANCE(329);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(94);
      if (lookahead == 'w') ADVANCE(95);
      if (lookahead == '{') ADVANCE(351);
      if (lookahead == '|') ADVANCE(409);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(338);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(318);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(330);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(aux_sym_nth_ending_number_token1);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_bar_line);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(418);
      if (lookahead == ']') ADVANCE(412);
      if (lookahead == '|') ADVANCE(414);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(419);
      if (lookahead == ']') ADVANCE(413);
      if (lookahead == '|') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(424);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(427);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '\n') ADVANCE(854);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead != 0) ADVANCE(590);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(854);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_parts_line);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(551);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(316);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_area);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_book);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_composer);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_discography);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_file);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_group);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_history);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_macros);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_meter);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(anon_sym_X_COLON);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_remark);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_rhythm_line);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(anon_sym_s_COLON);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_tempo);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_transcription);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_tune_title);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_unit_note_length);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_U_COLON);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(563);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(568);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(571);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(585);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_user_defined_token2);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_voice);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_w_COLON);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_words_postbody);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(854);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead == '.') ADVANCE(429);
      if (lookahead != 0) ADVANCE(590);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(854);
      if (lookahead == '%') ADVANCE(851);
      if (lookahead != 0) ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == ' ') ADVANCE(663);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == ' ') ADVANCE(622);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(661);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '*') ADVANCE(302);
      if (lookahead == ',') ADVANCE(407);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead == ':') ADVANCE(669);
      if (lookahead == '[') ADVANCE(850);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(661);
      if (lookahead == '"') ADVANCE(355);
      if (lookahead == '*') ADVANCE(302);
      if (lookahead == ':') ADVANCE(669);
      if (lookahead == '[') ADVANCE(850);
      if (lookahead == '|') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(591);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(459);
      if (lookahead == '(') ADVANCE(602);
      if (lookahead == ')') ADVANCE(603);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(505);
      if (lookahead == 'e') ADVANCE(806);
      if (lookahead == 'f') ADVANCE(604);
      if (lookahead == 'i') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(839);
      if (lookahead == 'p') ADVANCE(607);
      if (lookahead == 'r') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(507);
      if (lookahead == 'f') ADVANCE(608);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(497);
      if (lookahead == 'p') ADVANCE(609);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(509);
      if (lookahead == 'f') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(495);
      if (lookahead == 'p') ADVANCE(618);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(449);
      if (lookahead == 'x') ADVANCE(627);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(668);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(433);
      if (lookahead == '(') ADVANCE(635);
      if (lookahead == ')') ADVANCE(636);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(453);
      if (lookahead == 'x') ADVANCE(654);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '(') ADVANCE(600);
      if (lookahead == ')') ADVANCE(601);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '(') ADVANCE(643);
      if (lookahead == ')') ADVANCE(644);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '(') ADVANCE(646);
      if (lookahead == ')') ADVANCE(647);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '*') ADVANCE(302);
      if (lookahead == '+') ADVANCE(670);
      if (lookahead == '-') ADVANCE(304);
      if (lookahead == '_') ADVANCE(306);
      if (lookahead == '|') ADVANCE(411);
      if (lookahead == '~') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(426);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '+') ADVANCE(595);
      if (lookahead == '0') ADVANCE(596);
      if (lookahead == '<') ADVANCE(657);
      if (lookahead == '>') ADVANCE(597);
      if (lookahead == 'D') ADVANCE(664);
      if (lookahead == 'a') ADVANCE(690);
      if (lookahead == 'b') ADVANCE(804);
      if (lookahead == 'c') ADVANCE(781);
      if (lookahead == 'd') ADVANCE(673);
      if (lookahead == 'e') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(598);
      if (lookahead == 'i') ADVANCE(765);
      if (lookahead == 'l') ADVANCE(782);
      if (lookahead == 'm') ADVANCE(707);
      if (lookahead == 'o') ADVANCE(798);
      if (lookahead == 'p') ADVANCE(599);
      if (lookahead == 'r') ADVANCE(783);
      if (lookahead == 's') ADVANCE(705);
      if (lookahead == 't') ADVANCE(708);
      if (lookahead == 'u') ADVANCE(795);
      if (lookahead == 'w') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '+') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '-') ADVANCE(592);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '.') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '.') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '.') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '.') ADVANCE(612);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '5') ADVANCE(637);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == ':') ADVANCE(423);
      if (lookahead == '|') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == ':') ADVANCE(587);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'C') ADVANCE(666);
      if (lookahead == 'S') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(828);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(691);
      if (lookahead == 'i') ADVANCE(759);
      if (lookahead == 'o') ADVANCE(846);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(821);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(824);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(801);
      if (lookahead == 'o') ADVANCE(699);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(835);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(633);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(639);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(655);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(751);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(825);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(837);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'a') ADVANCE(826);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'b') ADVANCE(784);
      if (lookahead == 'p') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'b') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'b') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'c') ADVANCE(692);
      if (lookahead == 'r') ADVANCE(799);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'c') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'c') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'c') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'd') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'd') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'd') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'd') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'd') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'd') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'd') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'd') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'd') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'd') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'd') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(734);
      if (lookahead == 'f') ADVANCE(849);
      if (lookahead == 'h') ADVANCE(785);
      if (lookahead == 'l') ADVANCE(743);
      if (lookahead == 'n') ADVANCE(675);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(827);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(697);
      if (lookahead == 'f') ADVANCE(605);
      if (lookahead == 'o') ADVANCE(807);
      if (lookahead == 'p') ADVANCE(606);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(770);
      if (lookahead == 'h') ADVANCE(841);
      if (lookahead == 'r') ADVANCE(746);
      if (lookahead == 'u') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(695);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(672);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(809);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(813);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(624);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(629);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(645);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(648);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(651);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(819);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'e') ADVANCE(820);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'f') ADVANCE(729);
      if (lookahead == 't') ADVANCE(843);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'g') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'g') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'g') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'g') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'g') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'h') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'h') ADVANCE(811);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'h') ADVANCE(631);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'h') ADVANCE(816);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'h') ADVANCE(818);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'i') ADVANCE(842);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'i') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'i') ADVANCE(823);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'i') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'i') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'i') ADVANCE(753);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'i') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(626);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(755);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(829);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(619);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'm') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'm') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'm') ADVANCE(745);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'm') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'm') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'm') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'm') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'm') ADVANCE(803);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(845);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(621);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(735);
      if (lookahead == 'w') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(649);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(840);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(830);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(844);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(616);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(831);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(832);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(833);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'n') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(696);
      if (lookahead == 'r') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(847);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(805);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(623);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(632);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(634);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(641);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(658);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(848);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(815);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'o') ADVANCE(817);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'p') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'p') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'p') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'p') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'p') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'p') ADVANCE(620);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'p') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'p') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'p') ADVANCE(741);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(838);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(834);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(676);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(652);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 's') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 's') ADVANCE(617);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 's') ADVANCE(642);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 's') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 's') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 's') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 's') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(814);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(630);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(640);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(650);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(653);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'u') ADVANCE(822);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'u') ADVANCE(836);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'u') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'u') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'u') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'u') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'v') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'w') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 847:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'w') ADVANCE(628);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 848:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'w') ADVANCE(638);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 849:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'z') ADVANCE(610);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 850:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '|') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 851:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(851);
      END_STATE();
    case 852:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 853:
      ACCEPT_TOKEN(aux_sym_file_header_info_line_token1);
      if (lookahead == '.') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(854);
      END_STATE();
    case 854:
      ACCEPT_TOKEN(aux_sym_file_header_info_line_token1);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(854);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 290},
  [2] = {.lex_state = 291},
  [3] = {.lex_state = 291},
  [4] = {.lex_state = 6},
  [5] = {.lex_state = 292},
  [6] = {.lex_state = 292},
  [7] = {.lex_state = 292},
  [8] = {.lex_state = 290},
  [9] = {.lex_state = 404},
  [10] = {.lex_state = 288},
  [11] = {.lex_state = 288},
  [12] = {.lex_state = 404},
  [13] = {.lex_state = 288},
  [14] = {.lex_state = 288},
  [15] = {.lex_state = 404},
  [16] = {.lex_state = 288},
  [17] = {.lex_state = 288},
  [18] = {.lex_state = 402},
  [19] = {.lex_state = 288},
  [20] = {.lex_state = 288},
  [21] = {.lex_state = 288},
  [22] = {.lex_state = 288},
  [23] = {.lex_state = 288},
  [24] = {.lex_state = 5},
  [25] = {.lex_state = 5},
  [26] = {.lex_state = 288},
  [27] = {.lex_state = 288},
  [28] = {.lex_state = 288},
  [29] = {.lex_state = 5},
  [30] = {.lex_state = 288},
  [31] = {.lex_state = 402},
  [32] = {.lex_state = 288},
  [33] = {.lex_state = 291},
  [34] = {.lex_state = 5},
  [35] = {.lex_state = 291},
  [36] = {.lex_state = 291},
  [37] = {.lex_state = 291},
  [38] = {.lex_state = 402},
  [39] = {.lex_state = 402},
  [40] = {.lex_state = 402},
  [41] = {.lex_state = 402},
  [42] = {.lex_state = 402},
  [43] = {.lex_state = 402},
  [44] = {.lex_state = 402},
  [45] = {.lex_state = 402},
  [46] = {.lex_state = 402},
  [47] = {.lex_state = 402},
  [48] = {.lex_state = 402},
  [49] = {.lex_state = 402},
  [50] = {.lex_state = 402},
  [51] = {.lex_state = 6},
  [52] = {.lex_state = 594},
  [53] = {.lex_state = 594},
  [54] = {.lex_state = 290},
  [55] = {.lex_state = 593},
  [56] = {.lex_state = 593},
  [57] = {.lex_state = 399},
  [58] = {.lex_state = 399},
  [59] = {.lex_state = 593},
  [60] = {.lex_state = 593},
  [61] = {.lex_state = 400},
  [62] = {.lex_state = 594},
  [63] = {.lex_state = 594},
  [64] = {.lex_state = 594},
  [65] = {.lex_state = 594},
  [66] = {.lex_state = 594},
  [67] = {.lex_state = 594},
  [68] = {.lex_state = 594},
  [69] = {.lex_state = 594},
  [70] = {.lex_state = 594},
  [71] = {.lex_state = 594},
  [72] = {.lex_state = 594},
  [73] = {.lex_state = 0},
  [74] = {.lex_state = 0},
  [75] = {.lex_state = 0},
  [76] = {.lex_state = 292},
  [77] = {.lex_state = 292},
  [78] = {.lex_state = 289},
  [79] = {.lex_state = 292},
  [80] = {.lex_state = 289},
  [81] = {.lex_state = 289},
  [82] = {.lex_state = 289},
  [83] = {.lex_state = 289},
  [84] = {.lex_state = 69},
  [85] = {.lex_state = 69},
  [86] = {.lex_state = 70},
  [87] = {.lex_state = 70},
  [88] = {.lex_state = 70},
  [89] = {.lex_state = 289},
  [90] = {.lex_state = 289},
  [91] = {.lex_state = 289},
  [92] = {.lex_state = 69},
  [93] = {.lex_state = 69},
  [94] = {.lex_state = 69},
  [95] = {.lex_state = 69},
  [96] = {.lex_state = 69},
  [97] = {.lex_state = 660},
  [98] = {.lex_state = 289},
  [99] = {.lex_state = 70},
  [100] = {.lex_state = 70},
  [101] = {.lex_state = 70},
  [102] = {.lex_state = 289},
  [103] = {.lex_state = 70},
  [104] = {.lex_state = 70},
  [105] = {.lex_state = 660},
  [106] = {.lex_state = 290},
  [107] = {.lex_state = 290},
  [108] = {.lex_state = 290},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 69},
  [111] = {.lex_state = 290},
  [112] = {.lex_state = 290},
  [113] = {.lex_state = 290},
  [114] = {.lex_state = 290},
  [115] = {.lex_state = 290},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 290},
  [118] = {.lex_state = 290},
  [119] = {.lex_state = 290},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 69},
  [122] = {.lex_state = 290},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 290},
  [125] = {.lex_state = 290},
  [126] = {.lex_state = 290},
  [127] = {.lex_state = 290},
  [128] = {.lex_state = 290},
  [129] = {.lex_state = 290},
  [130] = {.lex_state = 290},
  [131] = {.lex_state = 290},
  [132] = {.lex_state = 290},
  [133] = {.lex_state = 70},
  [134] = {.lex_state = 69},
  [135] = {.lex_state = 70},
  [136] = {.lex_state = 69},
  [137] = {.lex_state = 70},
  [138] = {.lex_state = 70},
  [139] = {.lex_state = 69},
  [140] = {.lex_state = 70},
  [141] = {.lex_state = 69},
  [142] = {.lex_state = 70},
  [143] = {.lex_state = 69},
  [144] = {.lex_state = 70},
  [145] = {.lex_state = 70},
  [146] = {.lex_state = 69},
  [147] = {.lex_state = 70},
  [148] = {.lex_state = 69},
  [149] = {.lex_state = 70},
  [150] = {.lex_state = 70},
  [151] = {.lex_state = 70},
  [152] = {.lex_state = 69},
  [153] = {.lex_state = 69},
  [154] = {.lex_state = 69},
  [155] = {.lex_state = 70},
  [156] = {.lex_state = 69},
  [157] = {.lex_state = 290},
  [158] = {.lex_state = 70},
  [159] = {.lex_state = 69},
  [160] = {.lex_state = 69},
  [161] = {.lex_state = 70},
  [162] = {.lex_state = 70},
  [163] = {.lex_state = 69},
  [164] = {.lex_state = 69},
  [165] = {.lex_state = 289},
  [166] = {.lex_state = 69},
  [167] = {.lex_state = 70},
  [168] = {.lex_state = 70},
  [169] = {.lex_state = 70},
  [170] = {.lex_state = 70},
  [171] = {.lex_state = 69},
  [172] = {.lex_state = 69},
  [173] = {.lex_state = 70},
  [174] = {.lex_state = 70},
  [175] = {.lex_state = 69},
  [176] = {.lex_state = 70},
  [177] = {.lex_state = 69},
  [178] = {.lex_state = 660},
  [179] = {.lex_state = 290},
  [180] = {.lex_state = 660},
  [181] = {.lex_state = 290},
  [182] = {.lex_state = 660},
  [183] = {.lex_state = 290},
  [184] = {.lex_state = 660},
  [185] = {.lex_state = 290},
  [186] = {.lex_state = 290},
  [187] = {.lex_state = 1},
  [188] = {.lex_state = 1},
  [189] = {.lex_state = 290},
  [190] = {.lex_state = 289},
  [191] = {.lex_state = 290},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 1},
  [194] = {.lex_state = 290},
  [195] = {.lex_state = 290},
  [196] = {.lex_state = 290},
  [197] = {.lex_state = 290},
  [198] = {.lex_state = 290},
  [199] = {.lex_state = 290},
  [200] = {.lex_state = 290},
  [201] = {.lex_state = 290},
  [202] = {.lex_state = 290},
  [203] = {.lex_state = 290},
  [204] = {.lex_state = 290},
  [205] = {.lex_state = 290},
  [206] = {.lex_state = 289},
  [207] = {.lex_state = 290},
  [208] = {.lex_state = 290},
  [209] = {.lex_state = 290},
  [210] = {.lex_state = 290},
  [211] = {.lex_state = 290},
  [212] = {.lex_state = 290},
  [213] = {.lex_state = 289},
  [214] = {.lex_state = 290},
  [215] = {.lex_state = 290},
  [216] = {.lex_state = 289},
  [217] = {.lex_state = 290},
  [218] = {.lex_state = 290},
  [219] = {.lex_state = 589},
  [220] = {.lex_state = 589},
  [221] = {.lex_state = 290},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 589},
  [224] = {.lex_state = 290},
  [225] = {.lex_state = 665},
  [226] = {.lex_state = 289},
  [227] = {.lex_state = 665},
  [228] = {.lex_state = 289},
  [229] = {.lex_state = 289},
  [230] = {.lex_state = 853},
  [231] = {.lex_state = 289},
  [232] = {.lex_state = 289},
  [233] = {.lex_state = 853},
  [234] = {.lex_state = 551},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 2},
  [237] = {.lex_state = 662},
  [238] = {.lex_state = 589},
  [239] = {.lex_state = 662},
  [240] = {.lex_state = 665},
  [241] = {.lex_state = 853},
  [242] = {.lex_state = 662},
  [243] = {.lex_state = 289},
  [244] = {.lex_state = 551},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 289},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 590},
  [251] = {.lex_state = 289},
  [252] = {.lex_state = 590},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 289},
  [255] = {.lex_state = 1},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 289},
  [259] = {.lex_state = 101},
  [260] = {.lex_state = 665},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 289},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 853},
  [265] = {.lex_state = 101},
  [266] = {.lex_state = 289},
  [267] = {.lex_state = 1},
  [268] = {.lex_state = 590},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 101},
  [271] = {.lex_state = 1},
  [272] = {.lex_state = 851},
  [273] = {.lex_state = 290},
  [274] = {.lex_state = 1},
  [275] = {.lex_state = 851},
  [276] = {.lex_state = 854},
  [277] = {.lex_state = 402},
  [278] = {.lex_state = 290},
  [279] = {.lex_state = 289},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 291},
  [282] = {.lex_state = 289},
  [283] = {.lex_state = 290},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 291},
  [286] = {.lex_state = 289},
  [287] = {.lex_state = 402},
  [288] = {.lex_state = 851},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 289},
  [291] = {.lex_state = 290},
  [292] = {.lex_state = 6},
  [293] = {.lex_state = 6},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 1},
  [296] = {.lex_state = 289},
  [297] = {.lex_state = 289},
  [298] = {.lex_state = 289},
  [299] = {.lex_state = 854},
  [300] = {.lex_state = 290},
  [301] = {.lex_state = 6},
  [302] = {.lex_state = 290},
  [303] = {.lex_state = 290},
  [304] = {.lex_state = 6},
  [305] = {.lex_state = 290},
  [306] = {.lex_state = 290},
  [307] = {.lex_state = 6},
  [308] = {.lex_state = 6},
  [309] = {.lex_state = 290},
  [310] = {.lex_state = 290},
  [311] = {.lex_state = 1},
  [312] = {.lex_state = 851},
  [313] = {.lex_state = 1},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 854},
  [317] = {.lex_state = 290},
  [318] = {.lex_state = 290},
  [319] = {.lex_state = 851},
  [320] = {.lex_state = 289},
  [321] = {.lex_state = 2},
  [322] = {.lex_state = 1},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__NEWLINE] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_note_skip] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_UNDERSCORE] = ACTIONS(1),
    [sym_TILDE] = ACTIONS(1),
    [sym_BEAM_SEPARATOR] = ACTIONS(1),
    [sym_COMMENTLINE] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(1),
    [aux_sym__music_content_token1] = ACTIONS(1),
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
    [aux_sym_nth_ending_barline_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(294),
    [sym_stylesheet_directives] = STATE(80),
    [sym_file_structure] = STATE(289),
    [sym_file_header] = STATE(76),
    [sym_tune] = STATE(226),
    [sym_tune_header] = STATE(8),
    [sym_abc_version] = STATE(252),
    [sym_reference_number] = STATE(312),
    [sym_symbol_line] = STATE(312),
    [sym_user_defined] = STATE(252),
    [sym_tune_header_info_line] = STATE(6),
    [sym_file_header_info_line] = STATE(80),
    [aux_sym_file_header_repeat1] = STATE(80),
    [aux_sym_tune_header_repeat1] = STATE(6),
    [sym_COMMENTLINE] = ACTIONS(3),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(5),
    [sym_parts_line] = ACTIONS(7),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(9),
    [sym_area] = ACTIONS(11),
    [sym_book] = ACTIONS(11),
    [sym_composer] = ACTIONS(11),
    [sym_discography] = ACTIONS(11),
    [sym_file] = ACTIONS(11),
    [sym_group] = ACTIONS(11),
    [sym_history] = ACTIONS(11),
    [sym_instruction] = ACTIONS(11),
    [sym_key] = ACTIONS(7),
    [sym_macros] = ACTIONS(11),
    [sym_meter] = ACTIONS(11),
    [sym_notes] = ACTIONS(11),
    [sym_origin] = ACTIONS(11),
    [anon_sym_X_COLON] = ACTIONS(13),
    [sym_remark] = ACTIONS(11),
    [sym_rhythm_line] = ACTIONS(11),
    [sym_source] = ACTIONS(11),
    [anon_sym_s_COLON] = ACTIONS(15),
    [sym_tempo] = ACTIONS(7),
    [sym_transcription] = ACTIONS(11),
    [sym_tune_title] = ACTIONS(7),
    [sym_unit_note_length] = ACTIONS(11),
    [anon_sym_U_COLON] = ACTIONS(17),
    [sym_voice] = ACTIONS(7),
    [sym_words_postbody] = ACTIONS(7),
  },
  [2] = {
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(22),
    [sym__nte_or_chrd] = STATE(85),
    [sym_beam] = STATE(22),
    [sym_note_construct] = STATE(85),
    [sym__chord_cstrct] = STATE(85),
    [sym_note] = STATE(134),
    [sym__pitch] = STATE(110),
    [sym_multimeasure_rest] = STATE(22),
    [sym_grace_note] = STATE(98),
    [sym_chord_symbol] = STATE(181),
    [sym_decoration] = STATE(208),
    [sym_nth_ending_barline] = STATE(30),
    [sym_generic_bar_line] = STATE(22),
    [sym_first_repeat_bar] = STATE(30),
    [sym_second_repeat_bar] = STATE(30),
    [sym_symbol] = STATE(22),
    [sym_symbol_line] = STATE(288),
    [sym_user_defined] = STATE(288),
    [sym_words_line] = STATE(288),
    [sym_body_info_line] = STATE(2),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(19),
    [sym__NEWLINE] = ACTIONS(21),
    [sym_COMMENTLINE] = ACTIONS(23),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(26),
    [aux_sym__music_content_token1] = ACTIONS(29),
    [sym_slur_open] = ACTIONS(32),
    [sym_slur_close] = ACTIONS(35),
    [anon_sym_LBRACK] = ACTIONS(38),
    [sym_alteration] = ACTIONS(41),
    [sym_note_letter] = ACTIONS(44),
    [sym_rest] = ACTIONS(47),
    [anon_sym_Z] = ACTIONS(50),
    [anon_sym_X] = ACTIONS(50),
    [aux_sym_grace_note_token1] = ACTIONS(53),
    [aux_sym_chord_symbol_token1] = ACTIONS(56),
    [sym_annotation] = ACTIONS(35),
    [sym_tuplet_marker] = ACTIONS(59),
    [sym_decoration_shorthand] = ACTIONS(62),
    [sym_bar_line] = ACTIONS(65),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(68),
    [sym_thin_double_bar_line] = ACTIONS(68),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(68),
    [sym_start_of_repeated_section] = ACTIONS(71),
    [sym_end_of_repeated_section] = ACTIONS(74),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(71),
    [anon_sym_BANGtrill_BANG] = ACTIONS(77),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(77),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(77),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(77),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(77),
    [anon_sym_BANGmordent_BANG] = ACTIONS(77),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(77),
    [anon_sym_BANGroll_BANG] = ACTIONS(77),
    [anon_sym_BANGturn_BANG] = ACTIONS(77),
    [anon_sym_BANGturnx_BANG] = ACTIONS(77),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(77),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(77),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(77),
    [anon_sym_BANG_GT_BANG] = ACTIONS(77),
    [anon_sym_BANGaccent_BANG] = ACTIONS(77),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(77),
    [anon_sym_BANGfermata_BANG] = ACTIONS(77),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(77),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(77),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(77),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(77),
    [anon_sym_BANGplus_BANG] = ACTIONS(77),
    [anon_sym_BANGsnap_BANG] = ACTIONS(77),
    [anon_sym_BANGslide_BANG] = ACTIONS(77),
    [anon_sym_BANGwedge_BANG] = ACTIONS(77),
    [anon_sym_BANGupbow_BANG] = ACTIONS(77),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(77),
    [anon_sym_BANGopen_BANG] = ACTIONS(77),
    [anon_sym_BANGthumb_BANG] = ACTIONS(77),
    [anon_sym_BANGbreath_BANG] = ACTIONS(77),
    [anon_sym_BANGpppp_BANG] = ACTIONS(77),
    [anon_sym_BANGppp_BANG] = ACTIONS(77),
    [anon_sym_BANGpp_BANG] = ACTIONS(77),
    [anon_sym_BANGp_BANG] = ACTIONS(77),
    [anon_sym_BANGmp_BANG] = ACTIONS(77),
    [anon_sym_BANGmf_BANG] = ACTIONS(77),
    [anon_sym_BANGf_BANG] = ACTIONS(77),
    [anon_sym_BANGff_BANG] = ACTIONS(77),
    [anon_sym_BANGfff_BANG] = ACTIONS(77),
    [anon_sym_BANGffff_BANG] = ACTIONS(77),
    [anon_sym_BANGsfz_BANG] = ACTIONS(77),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(77),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(77),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(77),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(77),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(77),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(77),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(77),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(77),
    [anon_sym_BANGsegno_BANG] = ACTIONS(77),
    [anon_sym_BANGcoda_BANG] = ACTIONS(77),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(77),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(77),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(77),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(77),
    [anon_sym_BANGfine_BANG] = ACTIONS(77),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(77),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(77),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(77),
    [sym_parts_line] = ACTIONS(80),
    [sym_instruction] = ACTIONS(80),
    [sym_key] = ACTIONS(80),
    [sym_macros] = ACTIONS(80),
    [sym_meter] = ACTIONS(80),
    [sym_notes] = ACTIONS(80),
    [sym_remark] = ACTIONS(80),
    [sym_rhythm_line] = ACTIONS(80),
    [anon_sym_s_COLON] = ACTIONS(83),
    [sym_tempo] = ACTIONS(80),
    [sym_tune_title] = ACTIONS(80),
    [sym_unit_note_length] = ACTIONS(80),
    [anon_sym_U_COLON] = ACTIONS(86),
    [sym_voice] = ACTIONS(80),
    [anon_sym_w_COLON] = ACTIONS(89),
    [sym_words_postbody] = ACTIONS(19),
  },
  [3] = {
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(22),
    [sym__nte_or_chrd] = STATE(85),
    [sym_beam] = STATE(22),
    [sym_note_construct] = STATE(85),
    [sym__chord_cstrct] = STATE(85),
    [sym_note] = STATE(134),
    [sym__pitch] = STATE(110),
    [sym_multimeasure_rest] = STATE(22),
    [sym_grace_note] = STATE(98),
    [sym_chord_symbol] = STATE(181),
    [sym_decoration] = STATE(208),
    [sym_nth_ending_barline] = STATE(30),
    [sym_generic_bar_line] = STATE(22),
    [sym_first_repeat_bar] = STATE(30),
    [sym_second_repeat_bar] = STATE(30),
    [sym_symbol] = STATE(22),
    [sym_symbol_line] = STATE(288),
    [sym_user_defined] = STATE(288),
    [sym_words_line] = STATE(288),
    [sym_body_info_line] = STATE(2),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(98),
    [ts_builtin_sym_end] = ACTIONS(92),
    [sym__NEWLINE] = ACTIONS(94),
    [sym_COMMENTLINE] = ACTIONS(96),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(98),
    [aux_sym__music_content_token1] = ACTIONS(100),
    [sym_slur_open] = ACTIONS(102),
    [sym_slur_close] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(106),
    [sym_alteration] = ACTIONS(108),
    [sym_note_letter] = ACTIONS(110),
    [sym_rest] = ACTIONS(112),
    [anon_sym_Z] = ACTIONS(114),
    [anon_sym_X] = ACTIONS(114),
    [aux_sym_grace_note_token1] = ACTIONS(116),
    [aux_sym_chord_symbol_token1] = ACTIONS(118),
    [sym_annotation] = ACTIONS(104),
    [sym_tuplet_marker] = ACTIONS(120),
    [sym_decoration_shorthand] = ACTIONS(122),
    [sym_bar_line] = ACTIONS(124),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(126),
    [sym_thin_double_bar_line] = ACTIONS(126),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(126),
    [sym_start_of_repeated_section] = ACTIONS(128),
    [sym_end_of_repeated_section] = ACTIONS(130),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(128),
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
    [sym_parts_line] = ACTIONS(134),
    [sym_instruction] = ACTIONS(134),
    [sym_key] = ACTIONS(134),
    [sym_macros] = ACTIONS(134),
    [sym_meter] = ACTIONS(134),
    [sym_notes] = ACTIONS(134),
    [sym_remark] = ACTIONS(134),
    [sym_rhythm_line] = ACTIONS(134),
    [anon_sym_s_COLON] = ACTIONS(15),
    [sym_tempo] = ACTIONS(134),
    [sym_tune_title] = ACTIONS(134),
    [sym_unit_note_length] = ACTIONS(134),
    [anon_sym_U_COLON] = ACTIONS(136),
    [sym_voice] = ACTIONS(134),
    [anon_sym_w_COLON] = ACTIONS(138),
    [sym_words_postbody] = ACTIONS(92),
  },
  [4] = {
    [sym_stylesheet_directives] = STATE(3),
    [sym__MUSIC_CODE] = STATE(3),
    [sym__music_content] = STATE(22),
    [sym__nte_or_chrd] = STATE(85),
    [sym_beam] = STATE(22),
    [sym_note_construct] = STATE(85),
    [sym__chord_cstrct] = STATE(85),
    [sym_note] = STATE(134),
    [sym__pitch] = STATE(110),
    [sym_multimeasure_rest] = STATE(22),
    [sym_grace_note] = STATE(98),
    [sym_chord_symbol] = STATE(181),
    [sym_decoration] = STATE(208),
    [sym_nth_ending_barline] = STATE(30),
    [sym_generic_bar_line] = STATE(22),
    [sym_first_repeat_bar] = STATE(30),
    [sym_second_repeat_bar] = STATE(30),
    [sym_symbol] = STATE(22),
    [sym_symbol_line] = STATE(288),
    [sym_user_defined] = STATE(288),
    [sym_words_line] = STATE(288),
    [sym_body_info_line] = STATE(3),
    [aux_sym_tune_body_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(98),
    [sym_COMMENTLINE] = ACTIONS(140),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(98),
    [aux_sym__music_content_token1] = ACTIONS(142),
    [sym_slur_open] = ACTIONS(102),
    [sym_slur_close] = ACTIONS(104),
    [anon_sym_LBRACK] = ACTIONS(106),
    [sym_alteration] = ACTIONS(108),
    [sym_note_letter] = ACTIONS(110),
    [sym_rest] = ACTIONS(112),
    [anon_sym_Z] = ACTIONS(114),
    [anon_sym_X] = ACTIONS(114),
    [aux_sym_grace_note_token1] = ACTIONS(116),
    [aux_sym_chord_symbol_token1] = ACTIONS(118),
    [sym_annotation] = ACTIONS(104),
    [sym_tuplet_marker] = ACTIONS(120),
    [sym_decoration_shorthand] = ACTIONS(122),
    [sym_bar_line] = ACTIONS(124),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(126),
    [sym_thin_double_bar_line] = ACTIONS(126),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(126),
    [sym_start_of_repeated_section] = ACTIONS(128),
    [sym_end_of_repeated_section] = ACTIONS(130),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(128),
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
    [sym_parts_line] = ACTIONS(134),
    [sym_instruction] = ACTIONS(134),
    [sym_key] = ACTIONS(134),
    [sym_macros] = ACTIONS(134),
    [sym_meter] = ACTIONS(134),
    [sym_notes] = ACTIONS(134),
    [sym_remark] = ACTIONS(134),
    [sym_rhythm_line] = ACTIONS(134),
    [anon_sym_s_COLON] = ACTIONS(15),
    [sym_tempo] = ACTIONS(134),
    [sym_tune_title] = ACTIONS(134),
    [sym_unit_note_length] = ACTIONS(134),
    [anon_sym_U_COLON] = ACTIONS(136),
    [sym_voice] = ACTIONS(134),
    [anon_sym_w_COLON] = ACTIONS(138),
  },
  [5] = {
    [sym_abc_version] = STATE(312),
    [sym_reference_number] = STATE(312),
    [sym_symbol_line] = STATE(312),
    [sym_user_defined] = STATE(312),
    [sym_tune_header_info_line] = STATE(5),
    [aux_sym_tune_header_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(144),
    [sym__NEWLINE] = ACTIONS(146),
    [aux_sym__music_content_token1] = ACTIONS(146),
    [sym_slur_open] = ACTIONS(146),
    [sym_slur_close] = ACTIONS(144),
    [anon_sym_LBRACK] = ACTIONS(146),
    [sym_alteration] = ACTIONS(144),
    [sym_note_letter] = ACTIONS(146),
    [sym_rest] = ACTIONS(144),
    [anon_sym_Z] = ACTIONS(146),
    [anon_sym_X] = ACTIONS(146),
    [aux_sym_grace_note_token1] = ACTIONS(144),
    [aux_sym_chord_symbol_token1] = ACTIONS(146),
    [sym_annotation] = ACTIONS(144),
    [sym_tuplet_marker] = ACTIONS(144),
    [sym_decoration_shorthand] = ACTIONS(146),
    [sym_bar_line] = ACTIONS(146),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(144),
    [sym_thin_double_bar_line] = ACTIONS(144),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(144),
    [sym_start_of_repeated_section] = ACTIONS(144),
    [sym_end_of_repeated_section] = ACTIONS(144),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(144),
    [anon_sym_BANGtrill_BANG] = ACTIONS(144),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(144),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(144),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(144),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(144),
    [anon_sym_BANGmordent_BANG] = ACTIONS(144),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(144),
    [anon_sym_BANGroll_BANG] = ACTIONS(144),
    [anon_sym_BANGturn_BANG] = ACTIONS(144),
    [anon_sym_BANGturnx_BANG] = ACTIONS(144),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(144),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(144),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(144),
    [anon_sym_BANG_GT_BANG] = ACTIONS(144),
    [anon_sym_BANGaccent_BANG] = ACTIONS(144),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(144),
    [anon_sym_BANGfermata_BANG] = ACTIONS(144),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(144),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(144),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(144),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(144),
    [anon_sym_BANGplus_BANG] = ACTIONS(144),
    [anon_sym_BANGsnap_BANG] = ACTIONS(144),
    [anon_sym_BANGslide_BANG] = ACTIONS(144),
    [anon_sym_BANGwedge_BANG] = ACTIONS(144),
    [anon_sym_BANGupbow_BANG] = ACTIONS(144),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(144),
    [anon_sym_BANGopen_BANG] = ACTIONS(144),
    [anon_sym_BANGthumb_BANG] = ACTIONS(144),
    [anon_sym_BANGbreath_BANG] = ACTIONS(144),
    [anon_sym_BANGpppp_BANG] = ACTIONS(144),
    [anon_sym_BANGppp_BANG] = ACTIONS(144),
    [anon_sym_BANGpp_BANG] = ACTIONS(144),
    [anon_sym_BANGp_BANG] = ACTIONS(144),
    [anon_sym_BANGmp_BANG] = ACTIONS(144),
    [anon_sym_BANGmf_BANG] = ACTIONS(144),
    [anon_sym_BANGf_BANG] = ACTIONS(144),
    [anon_sym_BANGff_BANG] = ACTIONS(144),
    [anon_sym_BANGfff_BANG] = ACTIONS(144),
    [anon_sym_BANGffff_BANG] = ACTIONS(144),
    [anon_sym_BANGsfz_BANG] = ACTIONS(144),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(144),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(144),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(144),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(144),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(144),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(144),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(144),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(144),
    [anon_sym_BANGsegno_BANG] = ACTIONS(144),
    [anon_sym_BANGcoda_BANG] = ACTIONS(144),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(144),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(144),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(144),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(144),
    [anon_sym_BANGfine_BANG] = ACTIONS(144),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(144),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(144),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(144),
    [sym_parts_line] = ACTIONS(148),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(151),
    [sym_area] = ACTIONS(148),
    [sym_book] = ACTIONS(148),
    [sym_composer] = ACTIONS(148),
    [sym_discography] = ACTIONS(148),
    [sym_file] = ACTIONS(148),
    [sym_group] = ACTIONS(148),
    [sym_history] = ACTIONS(148),
    [sym_instruction] = ACTIONS(148),
    [sym_key] = ACTIONS(148),
    [sym_macros] = ACTIONS(148),
    [sym_meter] = ACTIONS(148),
    [sym_notes] = ACTIONS(148),
    [sym_origin] = ACTIONS(148),
    [anon_sym_X_COLON] = ACTIONS(154),
    [sym_remark] = ACTIONS(148),
    [sym_rhythm_line] = ACTIONS(148),
    [sym_source] = ACTIONS(148),
    [anon_sym_s_COLON] = ACTIONS(157),
    [sym_tempo] = ACTIONS(148),
    [sym_transcription] = ACTIONS(148),
    [sym_tune_title] = ACTIONS(148),
    [sym_unit_note_length] = ACTIONS(148),
    [anon_sym_U_COLON] = ACTIONS(160),
    [sym_voice] = ACTIONS(148),
    [sym_words_postbody] = ACTIONS(148),
  },
  [6] = {
    [sym_abc_version] = STATE(312),
    [sym_reference_number] = STATE(312),
    [sym_symbol_line] = STATE(312),
    [sym_user_defined] = STATE(312),
    [sym_tune_header_info_line] = STATE(5),
    [aux_sym_tune_header_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(163),
    [sym__NEWLINE] = ACTIONS(165),
    [aux_sym__music_content_token1] = ACTIONS(165),
    [sym_slur_open] = ACTIONS(165),
    [sym_slur_close] = ACTIONS(163),
    [anon_sym_LBRACK] = ACTIONS(165),
    [sym_alteration] = ACTIONS(163),
    [sym_note_letter] = ACTIONS(165),
    [sym_rest] = ACTIONS(163),
    [anon_sym_Z] = ACTIONS(165),
    [anon_sym_X] = ACTIONS(165),
    [aux_sym_grace_note_token1] = ACTIONS(163),
    [aux_sym_chord_symbol_token1] = ACTIONS(165),
    [sym_annotation] = ACTIONS(163),
    [sym_tuplet_marker] = ACTIONS(163),
    [sym_decoration_shorthand] = ACTIONS(165),
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
    [sym_parts_line] = ACTIONS(7),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(167),
    [sym_area] = ACTIONS(7),
    [sym_book] = ACTIONS(7),
    [sym_composer] = ACTIONS(7),
    [sym_discography] = ACTIONS(7),
    [sym_file] = ACTIONS(7),
    [sym_group] = ACTIONS(7),
    [sym_history] = ACTIONS(7),
    [sym_instruction] = ACTIONS(7),
    [sym_key] = ACTIONS(7),
    [sym_macros] = ACTIONS(7),
    [sym_meter] = ACTIONS(7),
    [sym_notes] = ACTIONS(7),
    [sym_origin] = ACTIONS(7),
    [anon_sym_X_COLON] = ACTIONS(13),
    [sym_remark] = ACTIONS(7),
    [sym_rhythm_line] = ACTIONS(7),
    [sym_source] = ACTIONS(7),
    [anon_sym_s_COLON] = ACTIONS(15),
    [sym_tempo] = ACTIONS(7),
    [sym_transcription] = ACTIONS(7),
    [sym_tune_title] = ACTIONS(7),
    [sym_unit_note_length] = ACTIONS(7),
    [anon_sym_U_COLON] = ACTIONS(136),
    [sym_voice] = ACTIONS(7),
    [sym_words_postbody] = ACTIONS(163),
  },
  [7] = {
    [ts_builtin_sym_end] = ACTIONS(169),
    [sym__NEWLINE] = ACTIONS(171),
    [aux_sym__music_content_token1] = ACTIONS(171),
    [sym_slur_open] = ACTIONS(171),
    [sym_slur_close] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(171),
    [sym_alteration] = ACTIONS(169),
    [sym_note_letter] = ACTIONS(171),
    [sym_rest] = ACTIONS(169),
    [anon_sym_Z] = ACTIONS(171),
    [anon_sym_X] = ACTIONS(171),
    [aux_sym_grace_note_token1] = ACTIONS(169),
    [aux_sym_chord_symbol_token1] = ACTIONS(171),
    [sym_annotation] = ACTIONS(169),
    [sym_tuplet_marker] = ACTIONS(169),
    [sym_decoration_shorthand] = ACTIONS(171),
    [sym_bar_line] = ACTIONS(171),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(169),
    [sym_thin_double_bar_line] = ACTIONS(169),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(169),
    [sym_start_of_repeated_section] = ACTIONS(169),
    [sym_end_of_repeated_section] = ACTIONS(169),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(169),
    [anon_sym_BANGtrill_BANG] = ACTIONS(169),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(169),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(169),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(169),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(169),
    [anon_sym_BANGmordent_BANG] = ACTIONS(169),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(169),
    [anon_sym_BANGroll_BANG] = ACTIONS(169),
    [anon_sym_BANGturn_BANG] = ACTIONS(169),
    [anon_sym_BANGturnx_BANG] = ACTIONS(169),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(169),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(169),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(169),
    [anon_sym_BANG_GT_BANG] = ACTIONS(169),
    [anon_sym_BANGaccent_BANG] = ACTIONS(169),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(169),
    [anon_sym_BANGfermata_BANG] = ACTIONS(169),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(169),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(169),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(169),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(169),
    [anon_sym_BANGplus_BANG] = ACTIONS(169),
    [anon_sym_BANGsnap_BANG] = ACTIONS(169),
    [anon_sym_BANGslide_BANG] = ACTIONS(169),
    [anon_sym_BANGwedge_BANG] = ACTIONS(169),
    [anon_sym_BANGupbow_BANG] = ACTIONS(169),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(169),
    [anon_sym_BANGopen_BANG] = ACTIONS(169),
    [anon_sym_BANGthumb_BANG] = ACTIONS(169),
    [anon_sym_BANGbreath_BANG] = ACTIONS(169),
    [anon_sym_BANGpppp_BANG] = ACTIONS(169),
    [anon_sym_BANGppp_BANG] = ACTIONS(169),
    [anon_sym_BANGpp_BANG] = ACTIONS(169),
    [anon_sym_BANGp_BANG] = ACTIONS(169),
    [anon_sym_BANGmp_BANG] = ACTIONS(169),
    [anon_sym_BANGmf_BANG] = ACTIONS(169),
    [anon_sym_BANGf_BANG] = ACTIONS(169),
    [anon_sym_BANGff_BANG] = ACTIONS(169),
    [anon_sym_BANGfff_BANG] = ACTIONS(169),
    [anon_sym_BANGffff_BANG] = ACTIONS(169),
    [anon_sym_BANGsfz_BANG] = ACTIONS(169),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(169),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(169),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(169),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(169),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(169),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(169),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(169),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(169),
    [anon_sym_BANGsegno_BANG] = ACTIONS(169),
    [anon_sym_BANGcoda_BANG] = ACTIONS(169),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(169),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(169),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(169),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(169),
    [anon_sym_BANGfine_BANG] = ACTIONS(169),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(169),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(169),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(169),
    [sym_parts_line] = ACTIONS(169),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(169),
    [sym_area] = ACTIONS(169),
    [sym_book] = ACTIONS(169),
    [sym_composer] = ACTIONS(169),
    [sym_discography] = ACTIONS(169),
    [sym_file] = ACTIONS(169),
    [sym_group] = ACTIONS(169),
    [sym_history] = ACTIONS(169),
    [sym_instruction] = ACTIONS(169),
    [sym_key] = ACTIONS(169),
    [sym_macros] = ACTIONS(169),
    [sym_meter] = ACTIONS(169),
    [sym_notes] = ACTIONS(169),
    [sym_origin] = ACTIONS(169),
    [anon_sym_X_COLON] = ACTIONS(169),
    [sym_remark] = ACTIONS(169),
    [sym_rhythm_line] = ACTIONS(169),
    [sym_source] = ACTIONS(169),
    [anon_sym_s_COLON] = ACTIONS(169),
    [sym_tempo] = ACTIONS(169),
    [sym_transcription] = ACTIONS(169),
    [sym_tune_title] = ACTIONS(169),
    [sym_unit_note_length] = ACTIONS(169),
    [anon_sym_U_COLON] = ACTIONS(169),
    [sym_voice] = ACTIONS(169),
    [sym_words_postbody] = ACTIONS(169),
  },
  [8] = {
    [sym__MUSIC_CODE] = STATE(4),
    [sym_tune_body] = STATE(206),
    [sym__music_content] = STATE(44),
    [sym__nte_or_chrd] = STATE(84),
    [sym_beam] = STATE(44),
    [sym_note_construct] = STATE(84),
    [sym__chord_cstrct] = STATE(84),
    [sym_note] = STATE(134),
    [sym__pitch] = STATE(110),
    [sym_multimeasure_rest] = STATE(44),
    [sym_grace_note] = STATE(98),
    [sym_chord_symbol] = STATE(181),
    [sym_decoration] = STATE(208),
    [sym_nth_ending_barline] = STATE(40),
    [sym_generic_bar_line] = STATE(44),
    [sym_first_repeat_bar] = STATE(40),
    [sym_second_repeat_bar] = STATE(40),
    [sym_lyric_line] = STATE(216),
    [sym_lyric_section] = STATE(258),
    [sym_symbol] = STATE(44),
    [aux_sym_note_construct_repeat1] = STATE(98),
    [aux_sym_lyric_section_repeat1] = STATE(216),
    [ts_builtin_sym_end] = ACTIONS(173),
    [sym__NEWLINE] = ACTIONS(175),
    [aux_sym__music_content_token1] = ACTIONS(177),
    [sym_slur_open] = ACTIONS(179),
    [sym_slur_close] = ACTIONS(181),
    [anon_sym_LBRACK] = ACTIONS(106),
    [sym_alteration] = ACTIONS(108),
    [sym_note_letter] = ACTIONS(110),
    [sym_rest] = ACTIONS(112),
    [anon_sym_Z] = ACTIONS(183),
    [anon_sym_X] = ACTIONS(183),
    [aux_sym_grace_note_token1] = ACTIONS(116),
    [aux_sym_chord_symbol_token1] = ACTIONS(118),
    [sym_annotation] = ACTIONS(181),
    [sym_tuplet_marker] = ACTIONS(120),
    [sym_decoration_shorthand] = ACTIONS(185),
    [sym_bar_line] = ACTIONS(187),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(189),
    [sym_thin_double_bar_line] = ACTIONS(189),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(189),
    [sym_start_of_repeated_section] = ACTIONS(191),
    [sym_end_of_repeated_section] = ACTIONS(193),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(191),
    [anon_sym_BANGtrill_BANG] = ACTIONS(195),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(195),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(195),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(195),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(195),
    [anon_sym_BANGmordent_BANG] = ACTIONS(195),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(195),
    [anon_sym_BANGroll_BANG] = ACTIONS(195),
    [anon_sym_BANGturn_BANG] = ACTIONS(195),
    [anon_sym_BANGturnx_BANG] = ACTIONS(195),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(195),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(195),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(195),
    [anon_sym_BANG_GT_BANG] = ACTIONS(195),
    [anon_sym_BANGaccent_BANG] = ACTIONS(195),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(195),
    [anon_sym_BANGfermata_BANG] = ACTIONS(195),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(195),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(195),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(195),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(195),
    [anon_sym_BANGplus_BANG] = ACTIONS(195),
    [anon_sym_BANGsnap_BANG] = ACTIONS(195),
    [anon_sym_BANGslide_BANG] = ACTIONS(195),
    [anon_sym_BANGwedge_BANG] = ACTIONS(195),
    [anon_sym_BANGupbow_BANG] = ACTIONS(195),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(195),
    [anon_sym_BANGopen_BANG] = ACTIONS(195),
    [anon_sym_BANGthumb_BANG] = ACTIONS(195),
    [anon_sym_BANGbreath_BANG] = ACTIONS(195),
    [anon_sym_BANGpppp_BANG] = ACTIONS(195),
    [anon_sym_BANGppp_BANG] = ACTIONS(195),
    [anon_sym_BANGpp_BANG] = ACTIONS(195),
    [anon_sym_BANGp_BANG] = ACTIONS(195),
    [anon_sym_BANGmp_BANG] = ACTIONS(195),
    [anon_sym_BANGmf_BANG] = ACTIONS(195),
    [anon_sym_BANGf_BANG] = ACTIONS(195),
    [anon_sym_BANGff_BANG] = ACTIONS(195),
    [anon_sym_BANGfff_BANG] = ACTIONS(195),
    [anon_sym_BANGffff_BANG] = ACTIONS(195),
    [anon_sym_BANGsfz_BANG] = ACTIONS(195),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(195),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(195),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(195),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(195),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(195),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(195),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(195),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(195),
    [anon_sym_BANGsegno_BANG] = ACTIONS(195),
    [anon_sym_BANGcoda_BANG] = ACTIONS(195),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(195),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(195),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(195),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(195),
    [anon_sym_BANGfine_BANG] = ACTIONS(195),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(195),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(195),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(195),
    [sym_words_postbody] = ACTIONS(197),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym__NEWLINE] = ACTIONS(201),
    [sym_COMMENTLINE] = ACTIONS(201),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(199),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(201),
    [aux_sym__music_content_token1] = ACTIONS(201),
    [sym_slur_open] = ACTIONS(201),
    [sym_slur_close] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [sym_alteration] = ACTIONS(199),
    [sym_note_letter] = ACTIONS(199),
    [sym_rest] = ACTIONS(199),
    [anon_sym_Z] = ACTIONS(199),
    [anon_sym_X] = ACTIONS(199),
    [aux_sym_grace_note_token1] = ACTIONS(199),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(199),
    [sym_tuplet_marker] = ACTIONS(199),
    [sym_decoration_shorthand] = ACTIONS(201),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(203),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(199),
    [sym_thin_double_bar_line] = ACTIONS(199),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(199),
    [sym_start_of_repeated_section] = ACTIONS(199),
    [sym_end_of_repeated_section] = ACTIONS(199),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(199),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(205),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(207),
    [anon_sym_BANGtrill_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGmordent_BANG] = ACTIONS(199),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(199),
    [anon_sym_BANGroll_BANG] = ACTIONS(199),
    [anon_sym_BANGturn_BANG] = ACTIONS(199),
    [anon_sym_BANGturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_BANG] = ACTIONS(199),
    [anon_sym_BANGaccent_BANG] = ACTIONS(199),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(199),
    [anon_sym_BANGfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(199),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(199),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(199),
    [anon_sym_BANGplus_BANG] = ACTIONS(199),
    [anon_sym_BANGsnap_BANG] = ACTIONS(199),
    [anon_sym_BANGslide_BANG] = ACTIONS(199),
    [anon_sym_BANGwedge_BANG] = ACTIONS(199),
    [anon_sym_BANGupbow_BANG] = ACTIONS(199),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(199),
    [anon_sym_BANGopen_BANG] = ACTIONS(199),
    [anon_sym_BANGthumb_BANG] = ACTIONS(199),
    [anon_sym_BANGbreath_BANG] = ACTIONS(199),
    [anon_sym_BANGpppp_BANG] = ACTIONS(199),
    [anon_sym_BANGppp_BANG] = ACTIONS(199),
    [anon_sym_BANGpp_BANG] = ACTIONS(199),
    [anon_sym_BANGp_BANG] = ACTIONS(199),
    [anon_sym_BANGmp_BANG] = ACTIONS(199),
    [anon_sym_BANGmf_BANG] = ACTIONS(199),
    [anon_sym_BANGf_BANG] = ACTIONS(199),
    [anon_sym_BANGff_BANG] = ACTIONS(199),
    [anon_sym_BANGfff_BANG] = ACTIONS(199),
    [anon_sym_BANGffff_BANG] = ACTIONS(199),
    [anon_sym_BANGsfz_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGsegno_BANG] = ACTIONS(199),
    [anon_sym_BANGcoda_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(199),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(199),
    [anon_sym_BANGfine_BANG] = ACTIONS(199),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(199),
    [sym_parts_line] = ACTIONS(199),
    [sym_instruction] = ACTIONS(199),
    [sym_key] = ACTIONS(199),
    [sym_macros] = ACTIONS(199),
    [sym_meter] = ACTIONS(199),
    [sym_notes] = ACTIONS(199),
    [sym_remark] = ACTIONS(199),
    [sym_rhythm_line] = ACTIONS(199),
    [anon_sym_s_COLON] = ACTIONS(199),
    [sym_tempo] = ACTIONS(199),
    [sym_tune_title] = ACTIONS(199),
    [sym_unit_note_length] = ACTIONS(199),
    [anon_sym_U_COLON] = ACTIONS(199),
    [sym_voice] = ACTIONS(199),
    [anon_sym_w_COLON] = ACTIONS(199),
    [sym_words_postbody] = ACTIONS(199),
  },
  [10] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym__NEWLINE] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(213),
    [sym_COMMENTLINE] = ACTIONS(211),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(209),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(211),
    [aux_sym__music_content_token1] = ACTIONS(211),
    [sym_slur_open] = ACTIONS(211),
    [sym_slur_close] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym_alteration] = ACTIONS(209),
    [sym_note_letter] = ACTIONS(209),
    [sym_rest] = ACTIONS(209),
    [anon_sym_Z] = ACTIONS(209),
    [anon_sym_X] = ACTIONS(209),
    [aux_sym_grace_note_token1] = ACTIONS(209),
    [aux_sym_chord_symbol_token1] = ACTIONS(211),
    [sym_annotation] = ACTIONS(209),
    [sym_tuplet_marker] = ACTIONS(209),
    [sym_decoration_shorthand] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(213),
    [sym_bar_line] = ACTIONS(211),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(209),
    [sym_thin_double_bar_line] = ACTIONS(209),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(209),
    [sym_start_of_repeated_section] = ACTIONS(209),
    [sym_end_of_repeated_section] = ACTIONS(209),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(209),
    [anon_sym_BANGtrill_BANG] = ACTIONS(209),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(209),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(209),
    [anon_sym_BANGmordent_BANG] = ACTIONS(209),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(209),
    [anon_sym_BANGroll_BANG] = ACTIONS(209),
    [anon_sym_BANGturn_BANG] = ACTIONS(209),
    [anon_sym_BANGturnx_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(209),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_BANG] = ACTIONS(209),
    [anon_sym_BANGaccent_BANG] = ACTIONS(209),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(209),
    [anon_sym_BANGfermata_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(209),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(209),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(209),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(209),
    [anon_sym_BANGplus_BANG] = ACTIONS(209),
    [anon_sym_BANGsnap_BANG] = ACTIONS(209),
    [anon_sym_BANGslide_BANG] = ACTIONS(209),
    [anon_sym_BANGwedge_BANG] = ACTIONS(209),
    [anon_sym_BANGupbow_BANG] = ACTIONS(209),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(209),
    [anon_sym_BANGopen_BANG] = ACTIONS(209),
    [anon_sym_BANGthumb_BANG] = ACTIONS(209),
    [anon_sym_BANGbreath_BANG] = ACTIONS(209),
    [anon_sym_BANGpppp_BANG] = ACTIONS(209),
    [anon_sym_BANGppp_BANG] = ACTIONS(209),
    [anon_sym_BANGpp_BANG] = ACTIONS(209),
    [anon_sym_BANGp_BANG] = ACTIONS(209),
    [anon_sym_BANGmp_BANG] = ACTIONS(209),
    [anon_sym_BANGmf_BANG] = ACTIONS(209),
    [anon_sym_BANGf_BANG] = ACTIONS(209),
    [anon_sym_BANGff_BANG] = ACTIONS(209),
    [anon_sym_BANGfff_BANG] = ACTIONS(209),
    [anon_sym_BANGffff_BANG] = ACTIONS(209),
    [anon_sym_BANGsfz_BANG] = ACTIONS(209),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGsegno_BANG] = ACTIONS(209),
    [anon_sym_BANGcoda_BANG] = ACTIONS(209),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(209),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(209),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(209),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(209),
    [anon_sym_BANGfine_BANG] = ACTIONS(209),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(209),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(209),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(209),
    [sym_parts_line] = ACTIONS(209),
    [sym_instruction] = ACTIONS(209),
    [sym_key] = ACTIONS(209),
    [sym_macros] = ACTIONS(209),
    [sym_meter] = ACTIONS(209),
    [sym_notes] = ACTIONS(209),
    [sym_remark] = ACTIONS(209),
    [sym_rhythm_line] = ACTIONS(209),
    [anon_sym_s_COLON] = ACTIONS(209),
    [sym_tempo] = ACTIONS(209),
    [sym_tune_title] = ACTIONS(209),
    [sym_unit_note_length] = ACTIONS(209),
    [anon_sym_U_COLON] = ACTIONS(209),
    [sym_voice] = ACTIONS(209),
    [anon_sym_w_COLON] = ACTIONS(209),
    [sym_words_postbody] = ACTIONS(209),
  },
  [11] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(10),
    [ts_builtin_sym_end] = ACTIONS(216),
    [sym__NEWLINE] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(220),
    [sym_COMMENTLINE] = ACTIONS(218),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(216),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(218),
    [aux_sym__music_content_token1] = ACTIONS(218),
    [sym_slur_open] = ACTIONS(218),
    [sym_slur_close] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(218),
    [sym_alteration] = ACTIONS(216),
    [sym_note_letter] = ACTIONS(216),
    [sym_rest] = ACTIONS(216),
    [anon_sym_Z] = ACTIONS(216),
    [anon_sym_X] = ACTIONS(216),
    [aux_sym_grace_note_token1] = ACTIONS(216),
    [aux_sym_chord_symbol_token1] = ACTIONS(218),
    [sym_annotation] = ACTIONS(216),
    [sym_tuplet_marker] = ACTIONS(216),
    [sym_decoration_shorthand] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(220),
    [sym_bar_line] = ACTIONS(218),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(216),
    [sym_thin_double_bar_line] = ACTIONS(216),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(216),
    [sym_start_of_repeated_section] = ACTIONS(216),
    [sym_end_of_repeated_section] = ACTIONS(216),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(216),
    [anon_sym_BANGtrill_BANG] = ACTIONS(216),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(216),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(216),
    [anon_sym_BANGmordent_BANG] = ACTIONS(216),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(216),
    [anon_sym_BANGroll_BANG] = ACTIONS(216),
    [anon_sym_BANGturn_BANG] = ACTIONS(216),
    [anon_sym_BANGturnx_BANG] = ACTIONS(216),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(216),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(216),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(216),
    [anon_sym_BANG_GT_BANG] = ACTIONS(216),
    [anon_sym_BANGaccent_BANG] = ACTIONS(216),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(216),
    [anon_sym_BANGfermata_BANG] = ACTIONS(216),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(216),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(216),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(216),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(216),
    [anon_sym_BANGplus_BANG] = ACTIONS(216),
    [anon_sym_BANGsnap_BANG] = ACTIONS(216),
    [anon_sym_BANGslide_BANG] = ACTIONS(216),
    [anon_sym_BANGwedge_BANG] = ACTIONS(216),
    [anon_sym_BANGupbow_BANG] = ACTIONS(216),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(216),
    [anon_sym_BANGopen_BANG] = ACTIONS(216),
    [anon_sym_BANGthumb_BANG] = ACTIONS(216),
    [anon_sym_BANGbreath_BANG] = ACTIONS(216),
    [anon_sym_BANGpppp_BANG] = ACTIONS(216),
    [anon_sym_BANGppp_BANG] = ACTIONS(216),
    [anon_sym_BANGpp_BANG] = ACTIONS(216),
    [anon_sym_BANGp_BANG] = ACTIONS(216),
    [anon_sym_BANGmp_BANG] = ACTIONS(216),
    [anon_sym_BANGmf_BANG] = ACTIONS(216),
    [anon_sym_BANGf_BANG] = ACTIONS(216),
    [anon_sym_BANGff_BANG] = ACTIONS(216),
    [anon_sym_BANGfff_BANG] = ACTIONS(216),
    [anon_sym_BANGffff_BANG] = ACTIONS(216),
    [anon_sym_BANGsfz_BANG] = ACTIONS(216),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGsegno_BANG] = ACTIONS(216),
    [anon_sym_BANGcoda_BANG] = ACTIONS(216),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(216),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(216),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(216),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(216),
    [anon_sym_BANGfine_BANG] = ACTIONS(216),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(216),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(216),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(216),
    [sym_parts_line] = ACTIONS(216),
    [sym_instruction] = ACTIONS(216),
    [sym_key] = ACTIONS(216),
    [sym_macros] = ACTIONS(216),
    [sym_meter] = ACTIONS(216),
    [sym_notes] = ACTIONS(216),
    [sym_remark] = ACTIONS(216),
    [sym_rhythm_line] = ACTIONS(216),
    [anon_sym_s_COLON] = ACTIONS(216),
    [sym_tempo] = ACTIONS(216),
    [sym_tune_title] = ACTIONS(216),
    [sym_unit_note_length] = ACTIONS(216),
    [anon_sym_U_COLON] = ACTIONS(216),
    [sym_voice] = ACTIONS(216),
    [anon_sym_w_COLON] = ACTIONS(216),
    [sym_words_postbody] = ACTIONS(216),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym__NEWLINE] = ACTIONS(201),
    [sym_COMMENTLINE] = ACTIONS(201),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(199),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(201),
    [aux_sym__music_content_token1] = ACTIONS(201),
    [sym_slur_open] = ACTIONS(201),
    [sym_slur_close] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [sym_alteration] = ACTIONS(199),
    [sym_note_letter] = ACTIONS(199),
    [sym_rest] = ACTIONS(199),
    [anon_sym_Z] = ACTIONS(199),
    [anon_sym_X] = ACTIONS(199),
    [aux_sym_grace_note_token1] = ACTIONS(199),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(199),
    [sym_tuplet_marker] = ACTIONS(199),
    [sym_decoration_shorthand] = ACTIONS(201),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(203),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(199),
    [sym_thin_double_bar_line] = ACTIONS(199),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(199),
    [sym_start_of_repeated_section] = ACTIONS(199),
    [sym_end_of_repeated_section] = ACTIONS(199),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(199),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(222),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(224),
    [anon_sym_BANGtrill_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGmordent_BANG] = ACTIONS(199),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(199),
    [anon_sym_BANGroll_BANG] = ACTIONS(199),
    [anon_sym_BANGturn_BANG] = ACTIONS(199),
    [anon_sym_BANGturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_BANG] = ACTIONS(199),
    [anon_sym_BANGaccent_BANG] = ACTIONS(199),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(199),
    [anon_sym_BANGfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(199),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(199),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(199),
    [anon_sym_BANGplus_BANG] = ACTIONS(199),
    [anon_sym_BANGsnap_BANG] = ACTIONS(199),
    [anon_sym_BANGslide_BANG] = ACTIONS(199),
    [anon_sym_BANGwedge_BANG] = ACTIONS(199),
    [anon_sym_BANGupbow_BANG] = ACTIONS(199),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(199),
    [anon_sym_BANGopen_BANG] = ACTIONS(199),
    [anon_sym_BANGthumb_BANG] = ACTIONS(199),
    [anon_sym_BANGbreath_BANG] = ACTIONS(199),
    [anon_sym_BANGpppp_BANG] = ACTIONS(199),
    [anon_sym_BANGppp_BANG] = ACTIONS(199),
    [anon_sym_BANGpp_BANG] = ACTIONS(199),
    [anon_sym_BANGp_BANG] = ACTIONS(199),
    [anon_sym_BANGmp_BANG] = ACTIONS(199),
    [anon_sym_BANGmf_BANG] = ACTIONS(199),
    [anon_sym_BANGf_BANG] = ACTIONS(199),
    [anon_sym_BANGff_BANG] = ACTIONS(199),
    [anon_sym_BANGfff_BANG] = ACTIONS(199),
    [anon_sym_BANGffff_BANG] = ACTIONS(199),
    [anon_sym_BANGsfz_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGsegno_BANG] = ACTIONS(199),
    [anon_sym_BANGcoda_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(199),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(199),
    [anon_sym_BANGfine_BANG] = ACTIONS(199),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(199),
    [sym_parts_line] = ACTIONS(199),
    [sym_instruction] = ACTIONS(199),
    [sym_key] = ACTIONS(199),
    [sym_macros] = ACTIONS(199),
    [sym_meter] = ACTIONS(199),
    [sym_notes] = ACTIONS(199),
    [sym_remark] = ACTIONS(199),
    [sym_rhythm_line] = ACTIONS(199),
    [anon_sym_s_COLON] = ACTIONS(199),
    [sym_tempo] = ACTIONS(199),
    [sym_tune_title] = ACTIONS(199),
    [sym_unit_note_length] = ACTIONS(199),
    [anon_sym_U_COLON] = ACTIONS(199),
    [sym_voice] = ACTIONS(199),
    [anon_sym_w_COLON] = ACTIONS(199),
    [sym_words_postbody] = ACTIONS(199),
  },
  [13] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(11),
    [ts_builtin_sym_end] = ACTIONS(226),
    [sym__NEWLINE] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(220),
    [sym_COMMENTLINE] = ACTIONS(228),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(226),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(228),
    [aux_sym__music_content_token1] = ACTIONS(228),
    [sym_slur_open] = ACTIONS(228),
    [sym_slur_close] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(228),
    [sym_alteration] = ACTIONS(226),
    [sym_note_letter] = ACTIONS(226),
    [sym_rest] = ACTIONS(226),
    [anon_sym_Z] = ACTIONS(226),
    [anon_sym_X] = ACTIONS(226),
    [aux_sym_grace_note_token1] = ACTIONS(226),
    [aux_sym_chord_symbol_token1] = ACTIONS(228),
    [sym_annotation] = ACTIONS(226),
    [sym_tuplet_marker] = ACTIONS(226),
    [sym_decoration_shorthand] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(220),
    [sym_bar_line] = ACTIONS(228),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(226),
    [sym_thin_double_bar_line] = ACTIONS(226),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(226),
    [sym_start_of_repeated_section] = ACTIONS(226),
    [sym_end_of_repeated_section] = ACTIONS(226),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(226),
    [anon_sym_BANGtrill_BANG] = ACTIONS(226),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(226),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(226),
    [anon_sym_BANGmordent_BANG] = ACTIONS(226),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(226),
    [anon_sym_BANGroll_BANG] = ACTIONS(226),
    [anon_sym_BANGturn_BANG] = ACTIONS(226),
    [anon_sym_BANGturnx_BANG] = ACTIONS(226),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(226),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(226),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(226),
    [anon_sym_BANG_GT_BANG] = ACTIONS(226),
    [anon_sym_BANGaccent_BANG] = ACTIONS(226),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(226),
    [anon_sym_BANGfermata_BANG] = ACTIONS(226),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(226),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(226),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(226),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(226),
    [anon_sym_BANGplus_BANG] = ACTIONS(226),
    [anon_sym_BANGsnap_BANG] = ACTIONS(226),
    [anon_sym_BANGslide_BANG] = ACTIONS(226),
    [anon_sym_BANGwedge_BANG] = ACTIONS(226),
    [anon_sym_BANGupbow_BANG] = ACTIONS(226),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(226),
    [anon_sym_BANGopen_BANG] = ACTIONS(226),
    [anon_sym_BANGthumb_BANG] = ACTIONS(226),
    [anon_sym_BANGbreath_BANG] = ACTIONS(226),
    [anon_sym_BANGpppp_BANG] = ACTIONS(226),
    [anon_sym_BANGppp_BANG] = ACTIONS(226),
    [anon_sym_BANGpp_BANG] = ACTIONS(226),
    [anon_sym_BANGp_BANG] = ACTIONS(226),
    [anon_sym_BANGmp_BANG] = ACTIONS(226),
    [anon_sym_BANGmf_BANG] = ACTIONS(226),
    [anon_sym_BANGf_BANG] = ACTIONS(226),
    [anon_sym_BANGff_BANG] = ACTIONS(226),
    [anon_sym_BANGfff_BANG] = ACTIONS(226),
    [anon_sym_BANGffff_BANG] = ACTIONS(226),
    [anon_sym_BANGsfz_BANG] = ACTIONS(226),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGsegno_BANG] = ACTIONS(226),
    [anon_sym_BANGcoda_BANG] = ACTIONS(226),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(226),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(226),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(226),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(226),
    [anon_sym_BANGfine_BANG] = ACTIONS(226),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(226),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(226),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(226),
    [sym_parts_line] = ACTIONS(226),
    [sym_instruction] = ACTIONS(226),
    [sym_key] = ACTIONS(226),
    [sym_macros] = ACTIONS(226),
    [sym_meter] = ACTIONS(226),
    [sym_notes] = ACTIONS(226),
    [sym_remark] = ACTIONS(226),
    [sym_rhythm_line] = ACTIONS(226),
    [anon_sym_s_COLON] = ACTIONS(226),
    [sym_tempo] = ACTIONS(226),
    [sym_tune_title] = ACTIONS(226),
    [sym_unit_note_length] = ACTIONS(226),
    [anon_sym_U_COLON] = ACTIONS(226),
    [sym_voice] = ACTIONS(226),
    [anon_sym_w_COLON] = ACTIONS(226),
    [sym_words_postbody] = ACTIONS(226),
  },
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(209),
    [sym__NEWLINE] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(209),
    [sym_COMMENTLINE] = ACTIONS(211),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(209),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(211),
    [aux_sym__music_content_token1] = ACTIONS(211),
    [sym_slur_open] = ACTIONS(211),
    [sym_slur_close] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym_alteration] = ACTIONS(209),
    [sym_note_letter] = ACTIONS(209),
    [sym_rest] = ACTIONS(209),
    [anon_sym_Z] = ACTIONS(209),
    [anon_sym_X] = ACTIONS(209),
    [aux_sym_grace_note_token1] = ACTIONS(209),
    [aux_sym_chord_symbol_token1] = ACTIONS(211),
    [sym_annotation] = ACTIONS(209),
    [sym_tuplet_marker] = ACTIONS(209),
    [sym_decoration_shorthand] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym_bar_line] = ACTIONS(211),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(209),
    [sym_thin_double_bar_line] = ACTIONS(209),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(209),
    [sym_start_of_repeated_section] = ACTIONS(209),
    [sym_end_of_repeated_section] = ACTIONS(209),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(209),
    [anon_sym_BANGtrill_BANG] = ACTIONS(209),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(209),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(209),
    [anon_sym_BANGmordent_BANG] = ACTIONS(209),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(209),
    [anon_sym_BANGroll_BANG] = ACTIONS(209),
    [anon_sym_BANGturn_BANG] = ACTIONS(209),
    [anon_sym_BANGturnx_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(209),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_BANG] = ACTIONS(209),
    [anon_sym_BANGaccent_BANG] = ACTIONS(209),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(209),
    [anon_sym_BANGfermata_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(209),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(209),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(209),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(209),
    [anon_sym_BANGplus_BANG] = ACTIONS(209),
    [anon_sym_BANGsnap_BANG] = ACTIONS(209),
    [anon_sym_BANGslide_BANG] = ACTIONS(209),
    [anon_sym_BANGwedge_BANG] = ACTIONS(209),
    [anon_sym_BANGupbow_BANG] = ACTIONS(209),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(209),
    [anon_sym_BANGopen_BANG] = ACTIONS(209),
    [anon_sym_BANGthumb_BANG] = ACTIONS(209),
    [anon_sym_BANGbreath_BANG] = ACTIONS(209),
    [anon_sym_BANGpppp_BANG] = ACTIONS(209),
    [anon_sym_BANGppp_BANG] = ACTIONS(209),
    [anon_sym_BANGpp_BANG] = ACTIONS(209),
    [anon_sym_BANGp_BANG] = ACTIONS(209),
    [anon_sym_BANGmp_BANG] = ACTIONS(209),
    [anon_sym_BANGmf_BANG] = ACTIONS(209),
    [anon_sym_BANGf_BANG] = ACTIONS(209),
    [anon_sym_BANGff_BANG] = ACTIONS(209),
    [anon_sym_BANGfff_BANG] = ACTIONS(209),
    [anon_sym_BANGffff_BANG] = ACTIONS(209),
    [anon_sym_BANGsfz_BANG] = ACTIONS(209),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGsegno_BANG] = ACTIONS(209),
    [anon_sym_BANGcoda_BANG] = ACTIONS(209),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(209),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(209),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(209),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(209),
    [anon_sym_BANGfine_BANG] = ACTIONS(209),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(209),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(209),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(209),
    [sym_parts_line] = ACTIONS(209),
    [sym_instruction] = ACTIONS(209),
    [sym_key] = ACTIONS(209),
    [sym_macros] = ACTIONS(209),
    [sym_meter] = ACTIONS(209),
    [sym_notes] = ACTIONS(209),
    [sym_remark] = ACTIONS(209),
    [sym_rhythm_line] = ACTIONS(209),
    [anon_sym_s_COLON] = ACTIONS(209),
    [sym_tempo] = ACTIONS(209),
    [sym_tune_title] = ACTIONS(209),
    [sym_unit_note_length] = ACTIONS(209),
    [anon_sym_U_COLON] = ACTIONS(209),
    [sym_voice] = ACTIONS(209),
    [anon_sym_w_COLON] = ACTIONS(209),
    [sym_words_postbody] = ACTIONS(209),
  },
  [15] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym__NEWLINE] = ACTIONS(201),
    [sym_COMMENTLINE] = ACTIONS(201),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(199),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(201),
    [aux_sym__music_content_token1] = ACTIONS(201),
    [sym_slur_open] = ACTIONS(201),
    [sym_slur_close] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [sym_alteration] = ACTIONS(199),
    [sym_note_letter] = ACTIONS(199),
    [sym_rest] = ACTIONS(199),
    [anon_sym_Z] = ACTIONS(199),
    [anon_sym_X] = ACTIONS(199),
    [aux_sym_grace_note_token1] = ACTIONS(199),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(199),
    [sym_tuplet_marker] = ACTIONS(199),
    [sym_decoration_shorthand] = ACTIONS(201),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(203),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(199),
    [sym_thin_double_bar_line] = ACTIONS(199),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(199),
    [sym_start_of_repeated_section] = ACTIONS(199),
    [sym_end_of_repeated_section] = ACTIONS(199),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(199),
    [anon_sym_BANGtrill_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGmordent_BANG] = ACTIONS(199),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(199),
    [anon_sym_BANGroll_BANG] = ACTIONS(199),
    [anon_sym_BANGturn_BANG] = ACTIONS(199),
    [anon_sym_BANGturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_BANG] = ACTIONS(199),
    [anon_sym_BANGaccent_BANG] = ACTIONS(199),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(199),
    [anon_sym_BANGfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(199),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(199),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(199),
    [anon_sym_BANGplus_BANG] = ACTIONS(199),
    [anon_sym_BANGsnap_BANG] = ACTIONS(199),
    [anon_sym_BANGslide_BANG] = ACTIONS(199),
    [anon_sym_BANGwedge_BANG] = ACTIONS(199),
    [anon_sym_BANGupbow_BANG] = ACTIONS(199),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(199),
    [anon_sym_BANGopen_BANG] = ACTIONS(199),
    [anon_sym_BANGthumb_BANG] = ACTIONS(199),
    [anon_sym_BANGbreath_BANG] = ACTIONS(199),
    [anon_sym_BANGpppp_BANG] = ACTIONS(199),
    [anon_sym_BANGppp_BANG] = ACTIONS(199),
    [anon_sym_BANGpp_BANG] = ACTIONS(199),
    [anon_sym_BANGp_BANG] = ACTIONS(199),
    [anon_sym_BANGmp_BANG] = ACTIONS(199),
    [anon_sym_BANGmf_BANG] = ACTIONS(199),
    [anon_sym_BANGf_BANG] = ACTIONS(199),
    [anon_sym_BANGff_BANG] = ACTIONS(199),
    [anon_sym_BANGfff_BANG] = ACTIONS(199),
    [anon_sym_BANGffff_BANG] = ACTIONS(199),
    [anon_sym_BANGsfz_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGsegno_BANG] = ACTIONS(199),
    [anon_sym_BANGcoda_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(199),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(199),
    [anon_sym_BANGfine_BANG] = ACTIONS(199),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(199),
    [sym_parts_line] = ACTIONS(199),
    [sym_instruction] = ACTIONS(199),
    [sym_key] = ACTIONS(199),
    [sym_macros] = ACTIONS(199),
    [sym_meter] = ACTIONS(199),
    [sym_notes] = ACTIONS(199),
    [sym_remark] = ACTIONS(199),
    [sym_rhythm_line] = ACTIONS(199),
    [anon_sym_s_COLON] = ACTIONS(199),
    [sym_tempo] = ACTIONS(199),
    [sym_tune_title] = ACTIONS(199),
    [sym_unit_note_length] = ACTIONS(199),
    [anon_sym_U_COLON] = ACTIONS(199),
    [sym_voice] = ACTIONS(199),
    [anon_sym_w_COLON] = ACTIONS(199),
    [sym_words_postbody] = ACTIONS(199),
  },
  [16] = {
    [ts_builtin_sym_end] = ACTIONS(230),
    [sym__NEWLINE] = ACTIONS(232),
    [sym_COMMENTLINE] = ACTIONS(232),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(230),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(232),
    [aux_sym__music_content_token1] = ACTIONS(232),
    [sym_slur_open] = ACTIONS(232),
    [sym_slur_close] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(232),
    [sym_alteration] = ACTIONS(230),
    [sym_note_letter] = ACTIONS(230),
    [sym_rest] = ACTIONS(230),
    [anon_sym_Z] = ACTIONS(230),
    [anon_sym_X] = ACTIONS(230),
    [aux_sym_grace_note_token1] = ACTIONS(230),
    [aux_sym_chord_symbol_token1] = ACTIONS(232),
    [sym_annotation] = ACTIONS(230),
    [sym_tuplet_marker] = ACTIONS(230),
    [sym_decoration_shorthand] = ACTIONS(232),
    [sym_bar_line] = ACTIONS(232),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(230),
    [sym_thin_double_bar_line] = ACTIONS(230),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(230),
    [sym_start_of_repeated_section] = ACTIONS(230),
    [sym_end_of_repeated_section] = ACTIONS(230),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(230),
    [anon_sym_BANGtrill_BANG] = ACTIONS(230),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(230),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(230),
    [anon_sym_BANGmordent_BANG] = ACTIONS(230),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(230),
    [anon_sym_BANGroll_BANG] = ACTIONS(230),
    [anon_sym_BANGturn_BANG] = ACTIONS(230),
    [anon_sym_BANGturnx_BANG] = ACTIONS(230),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(230),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(230),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(230),
    [anon_sym_BANG_GT_BANG] = ACTIONS(230),
    [anon_sym_BANGaccent_BANG] = ACTIONS(230),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(230),
    [anon_sym_BANGfermata_BANG] = ACTIONS(230),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(230),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(230),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(230),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(230),
    [anon_sym_BANGplus_BANG] = ACTIONS(230),
    [anon_sym_BANGsnap_BANG] = ACTIONS(230),
    [anon_sym_BANGslide_BANG] = ACTIONS(230),
    [anon_sym_BANGwedge_BANG] = ACTIONS(230),
    [anon_sym_BANGupbow_BANG] = ACTIONS(230),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(230),
    [anon_sym_BANGopen_BANG] = ACTIONS(230),
    [anon_sym_BANGthumb_BANG] = ACTIONS(230),
    [anon_sym_BANGbreath_BANG] = ACTIONS(230),
    [anon_sym_BANGpppp_BANG] = ACTIONS(230),
    [anon_sym_BANGppp_BANG] = ACTIONS(230),
    [anon_sym_BANGpp_BANG] = ACTIONS(230),
    [anon_sym_BANGp_BANG] = ACTIONS(230),
    [anon_sym_BANGmp_BANG] = ACTIONS(230),
    [anon_sym_BANGmf_BANG] = ACTIONS(230),
    [anon_sym_BANGf_BANG] = ACTIONS(230),
    [anon_sym_BANGff_BANG] = ACTIONS(230),
    [anon_sym_BANGfff_BANG] = ACTIONS(230),
    [anon_sym_BANGffff_BANG] = ACTIONS(230),
    [anon_sym_BANGsfz_BANG] = ACTIONS(230),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGsegno_BANG] = ACTIONS(230),
    [anon_sym_BANGcoda_BANG] = ACTIONS(230),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(230),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(230),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(230),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(230),
    [anon_sym_BANGfine_BANG] = ACTIONS(230),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(230),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(230),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(230),
    [sym_parts_line] = ACTIONS(230),
    [sym_instruction] = ACTIONS(230),
    [sym_key] = ACTIONS(230),
    [sym_macros] = ACTIONS(230),
    [sym_meter] = ACTIONS(230),
    [sym_notes] = ACTIONS(230),
    [sym_remark] = ACTIONS(230),
    [sym_rhythm_line] = ACTIONS(230),
    [anon_sym_s_COLON] = ACTIONS(230),
    [sym_tempo] = ACTIONS(230),
    [sym_tune_title] = ACTIONS(230),
    [sym_unit_note_length] = ACTIONS(230),
    [anon_sym_U_COLON] = ACTIONS(230),
    [sym_voice] = ACTIONS(230),
    [anon_sym_w_COLON] = ACTIONS(230),
    [sym_words_postbody] = ACTIONS(230),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(234),
    [sym__NEWLINE] = ACTIONS(236),
    [sym_COMMENTLINE] = ACTIONS(236),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(234),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(236),
    [aux_sym__music_content_token1] = ACTIONS(236),
    [sym_slur_open] = ACTIONS(236),
    [sym_slur_close] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(236),
    [sym_alteration] = ACTIONS(234),
    [sym_note_letter] = ACTIONS(234),
    [sym_rest] = ACTIONS(234),
    [anon_sym_Z] = ACTIONS(234),
    [anon_sym_X] = ACTIONS(234),
    [aux_sym_grace_note_token1] = ACTIONS(234),
    [aux_sym_chord_symbol_token1] = ACTIONS(236),
    [sym_annotation] = ACTIONS(234),
    [sym_tuplet_marker] = ACTIONS(234),
    [sym_decoration_shorthand] = ACTIONS(236),
    [sym_bar_line] = ACTIONS(236),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(234),
    [sym_thin_double_bar_line] = ACTIONS(234),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(234),
    [sym_start_of_repeated_section] = ACTIONS(234),
    [sym_end_of_repeated_section] = ACTIONS(234),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(234),
    [anon_sym_BANGtrill_BANG] = ACTIONS(234),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(234),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(234),
    [anon_sym_BANGmordent_BANG] = ACTIONS(234),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(234),
    [anon_sym_BANGroll_BANG] = ACTIONS(234),
    [anon_sym_BANGturn_BANG] = ACTIONS(234),
    [anon_sym_BANGturnx_BANG] = ACTIONS(234),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(234),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(234),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(234),
    [anon_sym_BANG_GT_BANG] = ACTIONS(234),
    [anon_sym_BANGaccent_BANG] = ACTIONS(234),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(234),
    [anon_sym_BANGfermata_BANG] = ACTIONS(234),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(234),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(234),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(234),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(234),
    [anon_sym_BANGplus_BANG] = ACTIONS(234),
    [anon_sym_BANGsnap_BANG] = ACTIONS(234),
    [anon_sym_BANGslide_BANG] = ACTIONS(234),
    [anon_sym_BANGwedge_BANG] = ACTIONS(234),
    [anon_sym_BANGupbow_BANG] = ACTIONS(234),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(234),
    [anon_sym_BANGopen_BANG] = ACTIONS(234),
    [anon_sym_BANGthumb_BANG] = ACTIONS(234),
    [anon_sym_BANGbreath_BANG] = ACTIONS(234),
    [anon_sym_BANGpppp_BANG] = ACTIONS(234),
    [anon_sym_BANGppp_BANG] = ACTIONS(234),
    [anon_sym_BANGpp_BANG] = ACTIONS(234),
    [anon_sym_BANGp_BANG] = ACTIONS(234),
    [anon_sym_BANGmp_BANG] = ACTIONS(234),
    [anon_sym_BANGmf_BANG] = ACTIONS(234),
    [anon_sym_BANGf_BANG] = ACTIONS(234),
    [anon_sym_BANGff_BANG] = ACTIONS(234),
    [anon_sym_BANGfff_BANG] = ACTIONS(234),
    [anon_sym_BANGffff_BANG] = ACTIONS(234),
    [anon_sym_BANGsfz_BANG] = ACTIONS(234),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGsegno_BANG] = ACTIONS(234),
    [anon_sym_BANGcoda_BANG] = ACTIONS(234),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(234),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(234),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(234),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(234),
    [anon_sym_BANGfine_BANG] = ACTIONS(234),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(234),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(234),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(234),
    [sym_parts_line] = ACTIONS(234),
    [sym_instruction] = ACTIONS(234),
    [sym_key] = ACTIONS(234),
    [sym_macros] = ACTIONS(234),
    [sym_meter] = ACTIONS(234),
    [sym_notes] = ACTIONS(234),
    [sym_remark] = ACTIONS(234),
    [sym_rhythm_line] = ACTIONS(234),
    [anon_sym_s_COLON] = ACTIONS(234),
    [sym_tempo] = ACTIONS(234),
    [sym_tune_title] = ACTIONS(234),
    [sym_unit_note_length] = ACTIONS(234),
    [anon_sym_U_COLON] = ACTIONS(234),
    [sym_voice] = ACTIONS(234),
    [anon_sym_w_COLON] = ACTIONS(234),
    [sym_words_postbody] = ACTIONS(234),
  },
  [18] = {
    [sym_COMMENTLINE] = ACTIONS(201),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(199),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(199),
    [aux_sym__music_content_token1] = ACTIONS(201),
    [sym_slur_open] = ACTIONS(201),
    [sym_slur_close] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [sym_alteration] = ACTIONS(199),
    [sym_note_letter] = ACTIONS(199),
    [sym_rest] = ACTIONS(199),
    [anon_sym_Z] = ACTIONS(199),
    [anon_sym_X] = ACTIONS(199),
    [aux_sym_grace_note_token1] = ACTIONS(199),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(199),
    [sym_tuplet_marker] = ACTIONS(199),
    [sym_decoration_shorthand] = ACTIONS(201),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(238),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(199),
    [sym_thin_double_bar_line] = ACTIONS(199),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(199),
    [sym_start_of_repeated_section] = ACTIONS(199),
    [sym_end_of_repeated_section] = ACTIONS(199),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(199),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(240),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(242),
    [anon_sym_BANGtrill_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGmordent_BANG] = ACTIONS(199),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(199),
    [anon_sym_BANGroll_BANG] = ACTIONS(199),
    [anon_sym_BANGturn_BANG] = ACTIONS(199),
    [anon_sym_BANGturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_BANG] = ACTIONS(199),
    [anon_sym_BANGaccent_BANG] = ACTIONS(199),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(199),
    [anon_sym_BANGfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(199),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(199),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(199),
    [anon_sym_BANGplus_BANG] = ACTIONS(199),
    [anon_sym_BANGsnap_BANG] = ACTIONS(199),
    [anon_sym_BANGslide_BANG] = ACTIONS(199),
    [anon_sym_BANGwedge_BANG] = ACTIONS(199),
    [anon_sym_BANGupbow_BANG] = ACTIONS(199),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(199),
    [anon_sym_BANGopen_BANG] = ACTIONS(199),
    [anon_sym_BANGthumb_BANG] = ACTIONS(199),
    [anon_sym_BANGbreath_BANG] = ACTIONS(199),
    [anon_sym_BANGpppp_BANG] = ACTIONS(199),
    [anon_sym_BANGppp_BANG] = ACTIONS(199),
    [anon_sym_BANGpp_BANG] = ACTIONS(199),
    [anon_sym_BANGp_BANG] = ACTIONS(199),
    [anon_sym_BANGmp_BANG] = ACTIONS(199),
    [anon_sym_BANGmf_BANG] = ACTIONS(199),
    [anon_sym_BANGf_BANG] = ACTIONS(199),
    [anon_sym_BANGff_BANG] = ACTIONS(199),
    [anon_sym_BANGfff_BANG] = ACTIONS(199),
    [anon_sym_BANGffff_BANG] = ACTIONS(199),
    [anon_sym_BANGsfz_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGsegno_BANG] = ACTIONS(199),
    [anon_sym_BANGcoda_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(199),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(199),
    [anon_sym_BANGfine_BANG] = ACTIONS(199),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(199),
    [sym_parts_line] = ACTIONS(199),
    [sym_instruction] = ACTIONS(199),
    [sym_key] = ACTIONS(199),
    [sym_macros] = ACTIONS(199),
    [sym_meter] = ACTIONS(199),
    [sym_notes] = ACTIONS(199),
    [sym_remark] = ACTIONS(199),
    [sym_rhythm_line] = ACTIONS(199),
    [anon_sym_s_COLON] = ACTIONS(199),
    [sym_tempo] = ACTIONS(199),
    [sym_tune_title] = ACTIONS(199),
    [sym_unit_note_length] = ACTIONS(199),
    [anon_sym_U_COLON] = ACTIONS(199),
    [sym_voice] = ACTIONS(199),
    [anon_sym_w_COLON] = ACTIONS(199),
  },
  [19] = {
    [ts_builtin_sym_end] = ACTIONS(244),
    [sym__NEWLINE] = ACTIONS(246),
    [sym_COMMENTLINE] = ACTIONS(246),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(244),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(246),
    [aux_sym__music_content_token1] = ACTIONS(246),
    [sym_slur_open] = ACTIONS(246),
    [sym_slur_close] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(246),
    [sym_alteration] = ACTIONS(244),
    [sym_note_letter] = ACTIONS(244),
    [sym_rest] = ACTIONS(244),
    [anon_sym_Z] = ACTIONS(244),
    [anon_sym_X] = ACTIONS(244),
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
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(248),
    [sym__NEWLINE] = ACTIONS(250),
    [sym_COMMENTLINE] = ACTIONS(250),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(248),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(250),
    [aux_sym__music_content_token1] = ACTIONS(250),
    [sym_slur_open] = ACTIONS(250),
    [sym_slur_close] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(250),
    [sym_alteration] = ACTIONS(248),
    [sym_note_letter] = ACTIONS(248),
    [sym_rest] = ACTIONS(248),
    [anon_sym_Z] = ACTIONS(248),
    [anon_sym_X] = ACTIONS(248),
    [aux_sym_grace_note_token1] = ACTIONS(248),
    [aux_sym_chord_symbol_token1] = ACTIONS(250),
    [sym_annotation] = ACTIONS(248),
    [sym_tuplet_marker] = ACTIONS(248),
    [sym_decoration_shorthand] = ACTIONS(250),
    [sym_bar_line] = ACTIONS(250),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(248),
    [sym_thin_double_bar_line] = ACTIONS(248),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(248),
    [sym_start_of_repeated_section] = ACTIONS(248),
    [sym_end_of_repeated_section] = ACTIONS(248),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(248),
    [anon_sym_BANGtrill_BANG] = ACTIONS(248),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(248),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(248),
    [anon_sym_BANGmordent_BANG] = ACTIONS(248),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(248),
    [anon_sym_BANGroll_BANG] = ACTIONS(248),
    [anon_sym_BANGturn_BANG] = ACTIONS(248),
    [anon_sym_BANGturnx_BANG] = ACTIONS(248),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(248),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(248),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(248),
    [anon_sym_BANG_GT_BANG] = ACTIONS(248),
    [anon_sym_BANGaccent_BANG] = ACTIONS(248),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(248),
    [anon_sym_BANGfermata_BANG] = ACTIONS(248),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(248),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(248),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(248),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(248),
    [anon_sym_BANGplus_BANG] = ACTIONS(248),
    [anon_sym_BANGsnap_BANG] = ACTIONS(248),
    [anon_sym_BANGslide_BANG] = ACTIONS(248),
    [anon_sym_BANGwedge_BANG] = ACTIONS(248),
    [anon_sym_BANGupbow_BANG] = ACTIONS(248),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(248),
    [anon_sym_BANGopen_BANG] = ACTIONS(248),
    [anon_sym_BANGthumb_BANG] = ACTIONS(248),
    [anon_sym_BANGbreath_BANG] = ACTIONS(248),
    [anon_sym_BANGpppp_BANG] = ACTIONS(248),
    [anon_sym_BANGppp_BANG] = ACTIONS(248),
    [anon_sym_BANGpp_BANG] = ACTIONS(248),
    [anon_sym_BANGp_BANG] = ACTIONS(248),
    [anon_sym_BANGmp_BANG] = ACTIONS(248),
    [anon_sym_BANGmf_BANG] = ACTIONS(248),
    [anon_sym_BANGf_BANG] = ACTIONS(248),
    [anon_sym_BANGff_BANG] = ACTIONS(248),
    [anon_sym_BANGfff_BANG] = ACTIONS(248),
    [anon_sym_BANGffff_BANG] = ACTIONS(248),
    [anon_sym_BANGsfz_BANG] = ACTIONS(248),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGsegno_BANG] = ACTIONS(248),
    [anon_sym_BANGcoda_BANG] = ACTIONS(248),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(248),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(248),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(248),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(248),
    [anon_sym_BANGfine_BANG] = ACTIONS(248),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(248),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(248),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(248),
    [sym_parts_line] = ACTIONS(248),
    [sym_instruction] = ACTIONS(248),
    [sym_key] = ACTIONS(248),
    [sym_macros] = ACTIONS(248),
    [sym_meter] = ACTIONS(248),
    [sym_notes] = ACTIONS(248),
    [sym_remark] = ACTIONS(248),
    [sym_rhythm_line] = ACTIONS(248),
    [anon_sym_s_COLON] = ACTIONS(248),
    [sym_tempo] = ACTIONS(248),
    [sym_tune_title] = ACTIONS(248),
    [sym_unit_note_length] = ACTIONS(248),
    [anon_sym_U_COLON] = ACTIONS(248),
    [sym_voice] = ACTIONS(248),
    [anon_sym_w_COLON] = ACTIONS(248),
    [sym_words_postbody] = ACTIONS(248),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(252),
    [sym__NEWLINE] = ACTIONS(254),
    [sym_COMMENTLINE] = ACTIONS(254),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(252),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(254),
    [aux_sym__music_content_token1] = ACTIONS(254),
    [sym_slur_open] = ACTIONS(254),
    [sym_slur_close] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(254),
    [sym_alteration] = ACTIONS(252),
    [sym_note_letter] = ACTIONS(252),
    [sym_rest] = ACTIONS(252),
    [anon_sym_Z] = ACTIONS(252),
    [anon_sym_X] = ACTIONS(252),
    [aux_sym_grace_note_token1] = ACTIONS(252),
    [aux_sym_chord_symbol_token1] = ACTIONS(254),
    [sym_annotation] = ACTIONS(252),
    [sym_tuplet_marker] = ACTIONS(252),
    [sym_decoration_shorthand] = ACTIONS(254),
    [sym_bar_line] = ACTIONS(254),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(252),
    [sym_thin_double_bar_line] = ACTIONS(252),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(252),
    [sym_start_of_repeated_section] = ACTIONS(252),
    [sym_end_of_repeated_section] = ACTIONS(252),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(252),
    [anon_sym_BANGtrill_BANG] = ACTIONS(252),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(252),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(252),
    [anon_sym_BANGmordent_BANG] = ACTIONS(252),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(252),
    [anon_sym_BANGroll_BANG] = ACTIONS(252),
    [anon_sym_BANGturn_BANG] = ACTIONS(252),
    [anon_sym_BANGturnx_BANG] = ACTIONS(252),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(252),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(252),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(252),
    [anon_sym_BANG_GT_BANG] = ACTIONS(252),
    [anon_sym_BANGaccent_BANG] = ACTIONS(252),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(252),
    [anon_sym_BANGfermata_BANG] = ACTIONS(252),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(252),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(252),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(252),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(252),
    [anon_sym_BANGplus_BANG] = ACTIONS(252),
    [anon_sym_BANGsnap_BANG] = ACTIONS(252),
    [anon_sym_BANGslide_BANG] = ACTIONS(252),
    [anon_sym_BANGwedge_BANG] = ACTIONS(252),
    [anon_sym_BANGupbow_BANG] = ACTIONS(252),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(252),
    [anon_sym_BANGopen_BANG] = ACTIONS(252),
    [anon_sym_BANGthumb_BANG] = ACTIONS(252),
    [anon_sym_BANGbreath_BANG] = ACTIONS(252),
    [anon_sym_BANGpppp_BANG] = ACTIONS(252),
    [anon_sym_BANGppp_BANG] = ACTIONS(252),
    [anon_sym_BANGpp_BANG] = ACTIONS(252),
    [anon_sym_BANGp_BANG] = ACTIONS(252),
    [anon_sym_BANGmp_BANG] = ACTIONS(252),
    [anon_sym_BANGmf_BANG] = ACTIONS(252),
    [anon_sym_BANGf_BANG] = ACTIONS(252),
    [anon_sym_BANGff_BANG] = ACTIONS(252),
    [anon_sym_BANGfff_BANG] = ACTIONS(252),
    [anon_sym_BANGffff_BANG] = ACTIONS(252),
    [anon_sym_BANGsfz_BANG] = ACTIONS(252),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGsegno_BANG] = ACTIONS(252),
    [anon_sym_BANGcoda_BANG] = ACTIONS(252),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(252),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(252),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(252),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(252),
    [anon_sym_BANGfine_BANG] = ACTIONS(252),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(252),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(252),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(252),
    [sym_parts_line] = ACTIONS(252),
    [sym_instruction] = ACTIONS(252),
    [sym_key] = ACTIONS(252),
    [sym_macros] = ACTIONS(252),
    [sym_meter] = ACTIONS(252),
    [sym_notes] = ACTIONS(252),
    [sym_remark] = ACTIONS(252),
    [sym_rhythm_line] = ACTIONS(252),
    [anon_sym_s_COLON] = ACTIONS(252),
    [sym_tempo] = ACTIONS(252),
    [sym_tune_title] = ACTIONS(252),
    [sym_unit_note_length] = ACTIONS(252),
    [anon_sym_U_COLON] = ACTIONS(252),
    [sym_voice] = ACTIONS(252),
    [anon_sym_w_COLON] = ACTIONS(252),
    [sym_words_postbody] = ACTIONS(252),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(256),
    [sym__NEWLINE] = ACTIONS(258),
    [sym_COMMENTLINE] = ACTIONS(258),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(256),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(260),
    [aux_sym__music_content_token1] = ACTIONS(258),
    [sym_slur_open] = ACTIONS(258),
    [sym_slur_close] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(258),
    [sym_alteration] = ACTIONS(256),
    [sym_note_letter] = ACTIONS(256),
    [sym_rest] = ACTIONS(256),
    [anon_sym_Z] = ACTIONS(256),
    [anon_sym_X] = ACTIONS(256),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(262),
    [sym__NEWLINE] = ACTIONS(264),
    [sym_COMMENTLINE] = ACTIONS(264),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(262),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(264),
    [aux_sym__music_content_token1] = ACTIONS(264),
    [sym_slur_open] = ACTIONS(264),
    [sym_slur_close] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_alteration] = ACTIONS(262),
    [sym_note_letter] = ACTIONS(262),
    [sym_rest] = ACTIONS(262),
    [anon_sym_Z] = ACTIONS(262),
    [anon_sym_X] = ACTIONS(262),
    [aux_sym_grace_note_token1] = ACTIONS(262),
    [aux_sym_chord_symbol_token1] = ACTIONS(264),
    [sym_annotation] = ACTIONS(262),
    [sym_tuplet_marker] = ACTIONS(262),
    [sym_decoration_shorthand] = ACTIONS(264),
    [sym_bar_line] = ACTIONS(264),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(262),
    [sym_thin_double_bar_line] = ACTIONS(262),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(262),
    [sym_start_of_repeated_section] = ACTIONS(262),
    [sym_end_of_repeated_section] = ACTIONS(262),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(262),
    [anon_sym_BANGtrill_BANG] = ACTIONS(262),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(262),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(262),
    [anon_sym_BANGmordent_BANG] = ACTIONS(262),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(262),
    [anon_sym_BANGroll_BANG] = ACTIONS(262),
    [anon_sym_BANGturn_BANG] = ACTIONS(262),
    [anon_sym_BANGturnx_BANG] = ACTIONS(262),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(262),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(262),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(262),
    [anon_sym_BANG_GT_BANG] = ACTIONS(262),
    [anon_sym_BANGaccent_BANG] = ACTIONS(262),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(262),
    [anon_sym_BANGfermata_BANG] = ACTIONS(262),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(262),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(262),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(262),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(262),
    [anon_sym_BANGplus_BANG] = ACTIONS(262),
    [anon_sym_BANGsnap_BANG] = ACTIONS(262),
    [anon_sym_BANGslide_BANG] = ACTIONS(262),
    [anon_sym_BANGwedge_BANG] = ACTIONS(262),
    [anon_sym_BANGupbow_BANG] = ACTIONS(262),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(262),
    [anon_sym_BANGopen_BANG] = ACTIONS(262),
    [anon_sym_BANGthumb_BANG] = ACTIONS(262),
    [anon_sym_BANGbreath_BANG] = ACTIONS(262),
    [anon_sym_BANGpppp_BANG] = ACTIONS(262),
    [anon_sym_BANGppp_BANG] = ACTIONS(262),
    [anon_sym_BANGpp_BANG] = ACTIONS(262),
    [anon_sym_BANGp_BANG] = ACTIONS(262),
    [anon_sym_BANGmp_BANG] = ACTIONS(262),
    [anon_sym_BANGmf_BANG] = ACTIONS(262),
    [anon_sym_BANGf_BANG] = ACTIONS(262),
    [anon_sym_BANGff_BANG] = ACTIONS(262),
    [anon_sym_BANGfff_BANG] = ACTIONS(262),
    [anon_sym_BANGffff_BANG] = ACTIONS(262),
    [anon_sym_BANGsfz_BANG] = ACTIONS(262),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGsegno_BANG] = ACTIONS(262),
    [anon_sym_BANGcoda_BANG] = ACTIONS(262),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(262),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(262),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(262),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(262),
    [anon_sym_BANGfine_BANG] = ACTIONS(262),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(262),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(262),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(262),
    [sym_parts_line] = ACTIONS(262),
    [sym_instruction] = ACTIONS(262),
    [sym_key] = ACTIONS(262),
    [sym_macros] = ACTIONS(262),
    [sym_meter] = ACTIONS(262),
    [sym_notes] = ACTIONS(262),
    [sym_remark] = ACTIONS(262),
    [sym_rhythm_line] = ACTIONS(262),
    [anon_sym_s_COLON] = ACTIONS(262),
    [sym_tempo] = ACTIONS(262),
    [sym_tune_title] = ACTIONS(262),
    [sym_unit_note_length] = ACTIONS(262),
    [anon_sym_U_COLON] = ACTIONS(262),
    [sym_voice] = ACTIONS(262),
    [anon_sym_w_COLON] = ACTIONS(262),
    [sym_words_postbody] = ACTIONS(262),
  },
  [24] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(25),
    [anon_sym_DASH] = ACTIONS(266),
    [sym_COMMENTLINE] = ACTIONS(228),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(226),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(226),
    [aux_sym__music_content_token1] = ACTIONS(228),
    [sym_slur_open] = ACTIONS(228),
    [sym_slur_close] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(228),
    [sym_alteration] = ACTIONS(226),
    [sym_note_letter] = ACTIONS(226),
    [sym_rest] = ACTIONS(226),
    [anon_sym_Z] = ACTIONS(226),
    [anon_sym_X] = ACTIONS(226),
    [aux_sym_grace_note_token1] = ACTIONS(226),
    [aux_sym_chord_symbol_token1] = ACTIONS(228),
    [sym_annotation] = ACTIONS(226),
    [sym_tuplet_marker] = ACTIONS(226),
    [sym_decoration_shorthand] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_bar_line] = ACTIONS(228),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(226),
    [sym_thin_double_bar_line] = ACTIONS(226),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(226),
    [sym_start_of_repeated_section] = ACTIONS(226),
    [sym_end_of_repeated_section] = ACTIONS(226),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(226),
    [anon_sym_BANGtrill_BANG] = ACTIONS(226),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(226),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(226),
    [anon_sym_BANGmordent_BANG] = ACTIONS(226),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(226),
    [anon_sym_BANGroll_BANG] = ACTIONS(226),
    [anon_sym_BANGturn_BANG] = ACTIONS(226),
    [anon_sym_BANGturnx_BANG] = ACTIONS(226),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(226),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(226),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(226),
    [anon_sym_BANG_GT_BANG] = ACTIONS(226),
    [anon_sym_BANGaccent_BANG] = ACTIONS(226),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(226),
    [anon_sym_BANGfermata_BANG] = ACTIONS(226),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(226),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(226),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(226),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(226),
    [anon_sym_BANGplus_BANG] = ACTIONS(226),
    [anon_sym_BANGsnap_BANG] = ACTIONS(226),
    [anon_sym_BANGslide_BANG] = ACTIONS(226),
    [anon_sym_BANGwedge_BANG] = ACTIONS(226),
    [anon_sym_BANGupbow_BANG] = ACTIONS(226),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(226),
    [anon_sym_BANGopen_BANG] = ACTIONS(226),
    [anon_sym_BANGthumb_BANG] = ACTIONS(226),
    [anon_sym_BANGbreath_BANG] = ACTIONS(226),
    [anon_sym_BANGpppp_BANG] = ACTIONS(226),
    [anon_sym_BANGppp_BANG] = ACTIONS(226),
    [anon_sym_BANGpp_BANG] = ACTIONS(226),
    [anon_sym_BANGp_BANG] = ACTIONS(226),
    [anon_sym_BANGmp_BANG] = ACTIONS(226),
    [anon_sym_BANGmf_BANG] = ACTIONS(226),
    [anon_sym_BANGf_BANG] = ACTIONS(226),
    [anon_sym_BANGff_BANG] = ACTIONS(226),
    [anon_sym_BANGfff_BANG] = ACTIONS(226),
    [anon_sym_BANGffff_BANG] = ACTIONS(226),
    [anon_sym_BANGsfz_BANG] = ACTIONS(226),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(226),
    [anon_sym_BANGsegno_BANG] = ACTIONS(226),
    [anon_sym_BANGcoda_BANG] = ACTIONS(226),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(226),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(226),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(226),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(226),
    [anon_sym_BANGfine_BANG] = ACTIONS(226),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(226),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(226),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(226),
    [sym_parts_line] = ACTIONS(226),
    [sym_instruction] = ACTIONS(226),
    [sym_key] = ACTIONS(226),
    [sym_macros] = ACTIONS(226),
    [sym_meter] = ACTIONS(226),
    [sym_notes] = ACTIONS(226),
    [sym_remark] = ACTIONS(226),
    [sym_rhythm_line] = ACTIONS(226),
    [anon_sym_s_COLON] = ACTIONS(226),
    [sym_tempo] = ACTIONS(226),
    [sym_tune_title] = ACTIONS(226),
    [sym_unit_note_length] = ACTIONS(226),
    [anon_sym_U_COLON] = ACTIONS(226),
    [sym_voice] = ACTIONS(226),
    [anon_sym_w_COLON] = ACTIONS(226),
  },
  [25] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(29),
    [anon_sym_DASH] = ACTIONS(266),
    [sym_COMMENTLINE] = ACTIONS(218),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(216),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(216),
    [aux_sym__music_content_token1] = ACTIONS(218),
    [sym_slur_open] = ACTIONS(218),
    [sym_slur_close] = ACTIONS(216),
    [anon_sym_LBRACK] = ACTIONS(218),
    [sym_alteration] = ACTIONS(216),
    [sym_note_letter] = ACTIONS(216),
    [sym_rest] = ACTIONS(216),
    [anon_sym_Z] = ACTIONS(216),
    [anon_sym_X] = ACTIONS(216),
    [aux_sym_grace_note_token1] = ACTIONS(216),
    [aux_sym_chord_symbol_token1] = ACTIONS(218),
    [sym_annotation] = ACTIONS(216),
    [sym_tuplet_marker] = ACTIONS(216),
    [sym_decoration_shorthand] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(266),
    [sym_bar_line] = ACTIONS(218),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(216),
    [sym_thin_double_bar_line] = ACTIONS(216),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(216),
    [sym_start_of_repeated_section] = ACTIONS(216),
    [sym_end_of_repeated_section] = ACTIONS(216),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(216),
    [anon_sym_BANGtrill_BANG] = ACTIONS(216),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(216),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(216),
    [anon_sym_BANGmordent_BANG] = ACTIONS(216),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(216),
    [anon_sym_BANGroll_BANG] = ACTIONS(216),
    [anon_sym_BANGturn_BANG] = ACTIONS(216),
    [anon_sym_BANGturnx_BANG] = ACTIONS(216),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(216),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(216),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(216),
    [anon_sym_BANG_GT_BANG] = ACTIONS(216),
    [anon_sym_BANGaccent_BANG] = ACTIONS(216),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(216),
    [anon_sym_BANGfermata_BANG] = ACTIONS(216),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(216),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(216),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(216),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(216),
    [anon_sym_BANGplus_BANG] = ACTIONS(216),
    [anon_sym_BANGsnap_BANG] = ACTIONS(216),
    [anon_sym_BANGslide_BANG] = ACTIONS(216),
    [anon_sym_BANGwedge_BANG] = ACTIONS(216),
    [anon_sym_BANGupbow_BANG] = ACTIONS(216),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(216),
    [anon_sym_BANGopen_BANG] = ACTIONS(216),
    [anon_sym_BANGthumb_BANG] = ACTIONS(216),
    [anon_sym_BANGbreath_BANG] = ACTIONS(216),
    [anon_sym_BANGpppp_BANG] = ACTIONS(216),
    [anon_sym_BANGppp_BANG] = ACTIONS(216),
    [anon_sym_BANGpp_BANG] = ACTIONS(216),
    [anon_sym_BANGp_BANG] = ACTIONS(216),
    [anon_sym_BANGmp_BANG] = ACTIONS(216),
    [anon_sym_BANGmf_BANG] = ACTIONS(216),
    [anon_sym_BANGf_BANG] = ACTIONS(216),
    [anon_sym_BANGff_BANG] = ACTIONS(216),
    [anon_sym_BANGfff_BANG] = ACTIONS(216),
    [anon_sym_BANGffff_BANG] = ACTIONS(216),
    [anon_sym_BANGsfz_BANG] = ACTIONS(216),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(216),
    [anon_sym_BANGsegno_BANG] = ACTIONS(216),
    [anon_sym_BANGcoda_BANG] = ACTIONS(216),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(216),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(216),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(216),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(216),
    [anon_sym_BANGfine_BANG] = ACTIONS(216),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(216),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(216),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(216),
    [sym_parts_line] = ACTIONS(216),
    [sym_instruction] = ACTIONS(216),
    [sym_key] = ACTIONS(216),
    [sym_macros] = ACTIONS(216),
    [sym_meter] = ACTIONS(216),
    [sym_notes] = ACTIONS(216),
    [sym_remark] = ACTIONS(216),
    [sym_rhythm_line] = ACTIONS(216),
    [anon_sym_s_COLON] = ACTIONS(216),
    [sym_tempo] = ACTIONS(216),
    [sym_tune_title] = ACTIONS(216),
    [sym_unit_note_length] = ACTIONS(216),
    [anon_sym_U_COLON] = ACTIONS(216),
    [sym_voice] = ACTIONS(216),
    [anon_sym_w_COLON] = ACTIONS(216),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(268),
    [sym__NEWLINE] = ACTIONS(270),
    [sym_COMMENTLINE] = ACTIONS(270),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(268),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(270),
    [aux_sym__music_content_token1] = ACTIONS(270),
    [sym_slur_open] = ACTIONS(270),
    [sym_slur_close] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_alteration] = ACTIONS(268),
    [sym_note_letter] = ACTIONS(268),
    [sym_rest] = ACTIONS(268),
    [anon_sym_Z] = ACTIONS(268),
    [anon_sym_X] = ACTIONS(268),
    [aux_sym_grace_note_token1] = ACTIONS(268),
    [aux_sym_chord_symbol_token1] = ACTIONS(270),
    [sym_annotation] = ACTIONS(268),
    [sym_tuplet_marker] = ACTIONS(268),
    [sym_decoration_shorthand] = ACTIONS(270),
    [sym_bar_line] = ACTIONS(270),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(268),
    [sym_thin_double_bar_line] = ACTIONS(268),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(268),
    [sym_start_of_repeated_section] = ACTIONS(268),
    [sym_end_of_repeated_section] = ACTIONS(268),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(268),
    [anon_sym_BANGtrill_BANG] = ACTIONS(268),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(268),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(268),
    [anon_sym_BANGmordent_BANG] = ACTIONS(268),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(268),
    [anon_sym_BANGroll_BANG] = ACTIONS(268),
    [anon_sym_BANGturn_BANG] = ACTIONS(268),
    [anon_sym_BANGturnx_BANG] = ACTIONS(268),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(268),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(268),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(268),
    [anon_sym_BANG_GT_BANG] = ACTIONS(268),
    [anon_sym_BANGaccent_BANG] = ACTIONS(268),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(268),
    [anon_sym_BANGfermata_BANG] = ACTIONS(268),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(268),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(268),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(268),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(268),
    [anon_sym_BANGplus_BANG] = ACTIONS(268),
    [anon_sym_BANGsnap_BANG] = ACTIONS(268),
    [anon_sym_BANGslide_BANG] = ACTIONS(268),
    [anon_sym_BANGwedge_BANG] = ACTIONS(268),
    [anon_sym_BANGupbow_BANG] = ACTIONS(268),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(268),
    [anon_sym_BANGopen_BANG] = ACTIONS(268),
    [anon_sym_BANGthumb_BANG] = ACTIONS(268),
    [anon_sym_BANGbreath_BANG] = ACTIONS(268),
    [anon_sym_BANGpppp_BANG] = ACTIONS(268),
    [anon_sym_BANGppp_BANG] = ACTIONS(268),
    [anon_sym_BANGpp_BANG] = ACTIONS(268),
    [anon_sym_BANGp_BANG] = ACTIONS(268),
    [anon_sym_BANGmp_BANG] = ACTIONS(268),
    [anon_sym_BANGmf_BANG] = ACTIONS(268),
    [anon_sym_BANGf_BANG] = ACTIONS(268),
    [anon_sym_BANGff_BANG] = ACTIONS(268),
    [anon_sym_BANGfff_BANG] = ACTIONS(268),
    [anon_sym_BANGffff_BANG] = ACTIONS(268),
    [anon_sym_BANGsfz_BANG] = ACTIONS(268),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGsegno_BANG] = ACTIONS(268),
    [anon_sym_BANGcoda_BANG] = ACTIONS(268),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(268),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(268),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(268),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(268),
    [anon_sym_BANGfine_BANG] = ACTIONS(268),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(268),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(268),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(268),
    [sym_parts_line] = ACTIONS(268),
    [sym_instruction] = ACTIONS(268),
    [sym_key] = ACTIONS(268),
    [sym_macros] = ACTIONS(268),
    [sym_meter] = ACTIONS(268),
    [sym_notes] = ACTIONS(268),
    [sym_remark] = ACTIONS(268),
    [sym_rhythm_line] = ACTIONS(268),
    [anon_sym_s_COLON] = ACTIONS(268),
    [sym_tempo] = ACTIONS(268),
    [sym_tune_title] = ACTIONS(268),
    [sym_unit_note_length] = ACTIONS(268),
    [anon_sym_U_COLON] = ACTIONS(268),
    [sym_voice] = ACTIONS(268),
    [anon_sym_w_COLON] = ACTIONS(268),
    [sym_words_postbody] = ACTIONS(268),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(272),
    [sym__NEWLINE] = ACTIONS(274),
    [sym_COMMENTLINE] = ACTIONS(274),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(272),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(274),
    [aux_sym__music_content_token1] = ACTIONS(274),
    [sym_slur_open] = ACTIONS(274),
    [sym_slur_close] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(274),
    [sym_alteration] = ACTIONS(272),
    [sym_note_letter] = ACTIONS(272),
    [sym_rest] = ACTIONS(272),
    [anon_sym_Z] = ACTIONS(272),
    [anon_sym_X] = ACTIONS(272),
    [aux_sym_grace_note_token1] = ACTIONS(272),
    [aux_sym_chord_symbol_token1] = ACTIONS(274),
    [sym_annotation] = ACTIONS(272),
    [sym_tuplet_marker] = ACTIONS(272),
    [sym_decoration_shorthand] = ACTIONS(274),
    [sym_bar_line] = ACTIONS(274),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(272),
    [sym_thin_double_bar_line] = ACTIONS(272),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(272),
    [sym_start_of_repeated_section] = ACTIONS(272),
    [sym_end_of_repeated_section] = ACTIONS(272),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(272),
    [anon_sym_BANGtrill_BANG] = ACTIONS(272),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(272),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(272),
    [anon_sym_BANGmordent_BANG] = ACTIONS(272),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(272),
    [anon_sym_BANGroll_BANG] = ACTIONS(272),
    [anon_sym_BANGturn_BANG] = ACTIONS(272),
    [anon_sym_BANGturnx_BANG] = ACTIONS(272),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(272),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(272),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(272),
    [anon_sym_BANG_GT_BANG] = ACTIONS(272),
    [anon_sym_BANGaccent_BANG] = ACTIONS(272),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(272),
    [anon_sym_BANGfermata_BANG] = ACTIONS(272),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(272),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(272),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(272),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(272),
    [anon_sym_BANGplus_BANG] = ACTIONS(272),
    [anon_sym_BANGsnap_BANG] = ACTIONS(272),
    [anon_sym_BANGslide_BANG] = ACTIONS(272),
    [anon_sym_BANGwedge_BANG] = ACTIONS(272),
    [anon_sym_BANGupbow_BANG] = ACTIONS(272),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(272),
    [anon_sym_BANGopen_BANG] = ACTIONS(272),
    [anon_sym_BANGthumb_BANG] = ACTIONS(272),
    [anon_sym_BANGbreath_BANG] = ACTIONS(272),
    [anon_sym_BANGpppp_BANG] = ACTIONS(272),
    [anon_sym_BANGppp_BANG] = ACTIONS(272),
    [anon_sym_BANGpp_BANG] = ACTIONS(272),
    [anon_sym_BANGp_BANG] = ACTIONS(272),
    [anon_sym_BANGmp_BANG] = ACTIONS(272),
    [anon_sym_BANGmf_BANG] = ACTIONS(272),
    [anon_sym_BANGf_BANG] = ACTIONS(272),
    [anon_sym_BANGff_BANG] = ACTIONS(272),
    [anon_sym_BANGfff_BANG] = ACTIONS(272),
    [anon_sym_BANGffff_BANG] = ACTIONS(272),
    [anon_sym_BANGsfz_BANG] = ACTIONS(272),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGsegno_BANG] = ACTIONS(272),
    [anon_sym_BANGcoda_BANG] = ACTIONS(272),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(272),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(272),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(272),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(272),
    [anon_sym_BANGfine_BANG] = ACTIONS(272),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(272),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(272),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(272),
    [sym_parts_line] = ACTIONS(272),
    [sym_instruction] = ACTIONS(272),
    [sym_key] = ACTIONS(272),
    [sym_macros] = ACTIONS(272),
    [sym_meter] = ACTIONS(272),
    [sym_notes] = ACTIONS(272),
    [sym_remark] = ACTIONS(272),
    [sym_rhythm_line] = ACTIONS(272),
    [anon_sym_s_COLON] = ACTIONS(272),
    [sym_tempo] = ACTIONS(272),
    [sym_tune_title] = ACTIONS(272),
    [sym_unit_note_length] = ACTIONS(272),
    [anon_sym_U_COLON] = ACTIONS(272),
    [sym_voice] = ACTIONS(272),
    [anon_sym_w_COLON] = ACTIONS(272),
    [sym_words_postbody] = ACTIONS(272),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(276),
    [sym__NEWLINE] = ACTIONS(278),
    [sym_COMMENTLINE] = ACTIONS(278),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(276),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(278),
    [aux_sym__music_content_token1] = ACTIONS(278),
    [sym_slur_open] = ACTIONS(278),
    [sym_slur_close] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(278),
    [sym_alteration] = ACTIONS(276),
    [sym_note_letter] = ACTIONS(276),
    [sym_rest] = ACTIONS(276),
    [anon_sym_Z] = ACTIONS(276),
    [anon_sym_X] = ACTIONS(276),
    [aux_sym_grace_note_token1] = ACTIONS(276),
    [aux_sym_chord_symbol_token1] = ACTIONS(278),
    [sym_annotation] = ACTIONS(276),
    [sym_tuplet_marker] = ACTIONS(276),
    [sym_decoration_shorthand] = ACTIONS(278),
    [sym_bar_line] = ACTIONS(278),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(276),
    [sym_thin_double_bar_line] = ACTIONS(276),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(276),
    [sym_start_of_repeated_section] = ACTIONS(276),
    [sym_end_of_repeated_section] = ACTIONS(276),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(276),
    [anon_sym_BANGtrill_BANG] = ACTIONS(276),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(276),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(276),
    [anon_sym_BANGmordent_BANG] = ACTIONS(276),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(276),
    [anon_sym_BANGroll_BANG] = ACTIONS(276),
    [anon_sym_BANGturn_BANG] = ACTIONS(276),
    [anon_sym_BANGturnx_BANG] = ACTIONS(276),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(276),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(276),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(276),
    [anon_sym_BANG_GT_BANG] = ACTIONS(276),
    [anon_sym_BANGaccent_BANG] = ACTIONS(276),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(276),
    [anon_sym_BANGfermata_BANG] = ACTIONS(276),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(276),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(276),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(276),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(276),
    [anon_sym_BANGplus_BANG] = ACTIONS(276),
    [anon_sym_BANGsnap_BANG] = ACTIONS(276),
    [anon_sym_BANGslide_BANG] = ACTIONS(276),
    [anon_sym_BANGwedge_BANG] = ACTIONS(276),
    [anon_sym_BANGupbow_BANG] = ACTIONS(276),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(276),
    [anon_sym_BANGopen_BANG] = ACTIONS(276),
    [anon_sym_BANGthumb_BANG] = ACTIONS(276),
    [anon_sym_BANGbreath_BANG] = ACTIONS(276),
    [anon_sym_BANGpppp_BANG] = ACTIONS(276),
    [anon_sym_BANGppp_BANG] = ACTIONS(276),
    [anon_sym_BANGpp_BANG] = ACTIONS(276),
    [anon_sym_BANGp_BANG] = ACTIONS(276),
    [anon_sym_BANGmp_BANG] = ACTIONS(276),
    [anon_sym_BANGmf_BANG] = ACTIONS(276),
    [anon_sym_BANGf_BANG] = ACTIONS(276),
    [anon_sym_BANGff_BANG] = ACTIONS(276),
    [anon_sym_BANGfff_BANG] = ACTIONS(276),
    [anon_sym_BANGffff_BANG] = ACTIONS(276),
    [anon_sym_BANGsfz_BANG] = ACTIONS(276),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGsegno_BANG] = ACTIONS(276),
    [anon_sym_BANGcoda_BANG] = ACTIONS(276),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(276),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(276),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(276),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(276),
    [anon_sym_BANGfine_BANG] = ACTIONS(276),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(276),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(276),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(276),
    [sym_parts_line] = ACTIONS(276),
    [sym_instruction] = ACTIONS(276),
    [sym_key] = ACTIONS(276),
    [sym_macros] = ACTIONS(276),
    [sym_meter] = ACTIONS(276),
    [sym_notes] = ACTIONS(276),
    [sym_remark] = ACTIONS(276),
    [sym_rhythm_line] = ACTIONS(276),
    [anon_sym_s_COLON] = ACTIONS(276),
    [sym_tempo] = ACTIONS(276),
    [sym_tune_title] = ACTIONS(276),
    [sym_unit_note_length] = ACTIONS(276),
    [anon_sym_U_COLON] = ACTIONS(276),
    [sym_voice] = ACTIONS(276),
    [anon_sym_w_COLON] = ACTIONS(276),
    [sym_words_postbody] = ACTIONS(276),
  },
  [29] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(29),
    [anon_sym_DASH] = ACTIONS(280),
    [sym_COMMENTLINE] = ACTIONS(211),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(209),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(209),
    [aux_sym__music_content_token1] = ACTIONS(211),
    [sym_slur_open] = ACTIONS(211),
    [sym_slur_close] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym_alteration] = ACTIONS(209),
    [sym_note_letter] = ACTIONS(209),
    [sym_rest] = ACTIONS(209),
    [anon_sym_Z] = ACTIONS(209),
    [anon_sym_X] = ACTIONS(209),
    [aux_sym_grace_note_token1] = ACTIONS(209),
    [aux_sym_chord_symbol_token1] = ACTIONS(211),
    [sym_annotation] = ACTIONS(209),
    [sym_tuplet_marker] = ACTIONS(209),
    [sym_decoration_shorthand] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(280),
    [sym_bar_line] = ACTIONS(211),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(209),
    [sym_thin_double_bar_line] = ACTIONS(209),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(209),
    [sym_start_of_repeated_section] = ACTIONS(209),
    [sym_end_of_repeated_section] = ACTIONS(209),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(209),
    [anon_sym_BANGtrill_BANG] = ACTIONS(209),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(209),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(209),
    [anon_sym_BANGmordent_BANG] = ACTIONS(209),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(209),
    [anon_sym_BANGroll_BANG] = ACTIONS(209),
    [anon_sym_BANGturn_BANG] = ACTIONS(209),
    [anon_sym_BANGturnx_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(209),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_BANG] = ACTIONS(209),
    [anon_sym_BANGaccent_BANG] = ACTIONS(209),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(209),
    [anon_sym_BANGfermata_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(209),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(209),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(209),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(209),
    [anon_sym_BANGplus_BANG] = ACTIONS(209),
    [anon_sym_BANGsnap_BANG] = ACTIONS(209),
    [anon_sym_BANGslide_BANG] = ACTIONS(209),
    [anon_sym_BANGwedge_BANG] = ACTIONS(209),
    [anon_sym_BANGupbow_BANG] = ACTIONS(209),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(209),
    [anon_sym_BANGopen_BANG] = ACTIONS(209),
    [anon_sym_BANGthumb_BANG] = ACTIONS(209),
    [anon_sym_BANGbreath_BANG] = ACTIONS(209),
    [anon_sym_BANGpppp_BANG] = ACTIONS(209),
    [anon_sym_BANGppp_BANG] = ACTIONS(209),
    [anon_sym_BANGpp_BANG] = ACTIONS(209),
    [anon_sym_BANGp_BANG] = ACTIONS(209),
    [anon_sym_BANGmp_BANG] = ACTIONS(209),
    [anon_sym_BANGmf_BANG] = ACTIONS(209),
    [anon_sym_BANGf_BANG] = ACTIONS(209),
    [anon_sym_BANGff_BANG] = ACTIONS(209),
    [anon_sym_BANGfff_BANG] = ACTIONS(209),
    [anon_sym_BANGffff_BANG] = ACTIONS(209),
    [anon_sym_BANGsfz_BANG] = ACTIONS(209),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGsegno_BANG] = ACTIONS(209),
    [anon_sym_BANGcoda_BANG] = ACTIONS(209),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(209),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(209),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(209),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(209),
    [anon_sym_BANGfine_BANG] = ACTIONS(209),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(209),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(209),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(209),
    [sym_parts_line] = ACTIONS(209),
    [sym_instruction] = ACTIONS(209),
    [sym_key] = ACTIONS(209),
    [sym_macros] = ACTIONS(209),
    [sym_meter] = ACTIONS(209),
    [sym_notes] = ACTIONS(209),
    [sym_remark] = ACTIONS(209),
    [sym_rhythm_line] = ACTIONS(209),
    [anon_sym_s_COLON] = ACTIONS(209),
    [sym_tempo] = ACTIONS(209),
    [sym_tune_title] = ACTIONS(209),
    [sym_unit_note_length] = ACTIONS(209),
    [anon_sym_U_COLON] = ACTIONS(209),
    [sym_voice] = ACTIONS(209),
    [anon_sym_w_COLON] = ACTIONS(209),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(199),
    [sym__NEWLINE] = ACTIONS(201),
    [sym_COMMENTLINE] = ACTIONS(201),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(199),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(201),
    [aux_sym__music_content_token1] = ACTIONS(201),
    [sym_slur_open] = ACTIONS(201),
    [sym_slur_close] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [sym_alteration] = ACTIONS(199),
    [sym_note_letter] = ACTIONS(199),
    [sym_rest] = ACTIONS(199),
    [anon_sym_Z] = ACTIONS(199),
    [anon_sym_X] = ACTIONS(199),
    [aux_sym_grace_note_token1] = ACTIONS(199),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(199),
    [sym_tuplet_marker] = ACTIONS(199),
    [sym_decoration_shorthand] = ACTIONS(201),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(199),
    [sym_thin_double_bar_line] = ACTIONS(199),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(199),
    [sym_start_of_repeated_section] = ACTIONS(199),
    [sym_end_of_repeated_section] = ACTIONS(199),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(199),
    [anon_sym_BANGtrill_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGmordent_BANG] = ACTIONS(199),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(199),
    [anon_sym_BANGroll_BANG] = ACTIONS(199),
    [anon_sym_BANGturn_BANG] = ACTIONS(199),
    [anon_sym_BANGturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_BANG] = ACTIONS(199),
    [anon_sym_BANGaccent_BANG] = ACTIONS(199),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(199),
    [anon_sym_BANGfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(199),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(199),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(199),
    [anon_sym_BANGplus_BANG] = ACTIONS(199),
    [anon_sym_BANGsnap_BANG] = ACTIONS(199),
    [anon_sym_BANGslide_BANG] = ACTIONS(199),
    [anon_sym_BANGwedge_BANG] = ACTIONS(199),
    [anon_sym_BANGupbow_BANG] = ACTIONS(199),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(199),
    [anon_sym_BANGopen_BANG] = ACTIONS(199),
    [anon_sym_BANGthumb_BANG] = ACTIONS(199),
    [anon_sym_BANGbreath_BANG] = ACTIONS(199),
    [anon_sym_BANGpppp_BANG] = ACTIONS(199),
    [anon_sym_BANGppp_BANG] = ACTIONS(199),
    [anon_sym_BANGpp_BANG] = ACTIONS(199),
    [anon_sym_BANGp_BANG] = ACTIONS(199),
    [anon_sym_BANGmp_BANG] = ACTIONS(199),
    [anon_sym_BANGmf_BANG] = ACTIONS(199),
    [anon_sym_BANGf_BANG] = ACTIONS(199),
    [anon_sym_BANGff_BANG] = ACTIONS(199),
    [anon_sym_BANGfff_BANG] = ACTIONS(199),
    [anon_sym_BANGffff_BANG] = ACTIONS(199),
    [anon_sym_BANGsfz_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGsegno_BANG] = ACTIONS(199),
    [anon_sym_BANGcoda_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(199),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(199),
    [anon_sym_BANGfine_BANG] = ACTIONS(199),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(199),
    [sym_parts_line] = ACTIONS(199),
    [sym_instruction] = ACTIONS(199),
    [sym_key] = ACTIONS(199),
    [sym_macros] = ACTIONS(199),
    [sym_meter] = ACTIONS(199),
    [sym_notes] = ACTIONS(199),
    [sym_remark] = ACTIONS(199),
    [sym_rhythm_line] = ACTIONS(199),
    [anon_sym_s_COLON] = ACTIONS(199),
    [sym_tempo] = ACTIONS(199),
    [sym_tune_title] = ACTIONS(199),
    [sym_unit_note_length] = ACTIONS(199),
    [anon_sym_U_COLON] = ACTIONS(199),
    [sym_voice] = ACTIONS(199),
    [anon_sym_w_COLON] = ACTIONS(199),
    [sym_words_postbody] = ACTIONS(199),
  },
  [31] = {
    [sym_COMMENTLINE] = ACTIONS(201),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(199),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(199),
    [aux_sym__music_content_token1] = ACTIONS(201),
    [sym_slur_open] = ACTIONS(201),
    [sym_slur_close] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [sym_alteration] = ACTIONS(199),
    [sym_note_letter] = ACTIONS(199),
    [sym_rest] = ACTIONS(199),
    [anon_sym_Z] = ACTIONS(199),
    [anon_sym_X] = ACTIONS(199),
    [aux_sym_grace_note_token1] = ACTIONS(199),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(199),
    [sym_tuplet_marker] = ACTIONS(199),
    [sym_decoration_shorthand] = ACTIONS(201),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(238),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(199),
    [sym_thin_double_bar_line] = ACTIONS(199),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(199),
    [sym_start_of_repeated_section] = ACTIONS(199),
    [sym_end_of_repeated_section] = ACTIONS(199),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(199),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(283),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(285),
    [anon_sym_BANGtrill_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGmordent_BANG] = ACTIONS(199),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(199),
    [anon_sym_BANGroll_BANG] = ACTIONS(199),
    [anon_sym_BANGturn_BANG] = ACTIONS(199),
    [anon_sym_BANGturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_BANG] = ACTIONS(199),
    [anon_sym_BANGaccent_BANG] = ACTIONS(199),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(199),
    [anon_sym_BANGfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(199),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(199),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(199),
    [anon_sym_BANGplus_BANG] = ACTIONS(199),
    [anon_sym_BANGsnap_BANG] = ACTIONS(199),
    [anon_sym_BANGslide_BANG] = ACTIONS(199),
    [anon_sym_BANGwedge_BANG] = ACTIONS(199),
    [anon_sym_BANGupbow_BANG] = ACTIONS(199),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(199),
    [anon_sym_BANGopen_BANG] = ACTIONS(199),
    [anon_sym_BANGthumb_BANG] = ACTIONS(199),
    [anon_sym_BANGbreath_BANG] = ACTIONS(199),
    [anon_sym_BANGpppp_BANG] = ACTIONS(199),
    [anon_sym_BANGppp_BANG] = ACTIONS(199),
    [anon_sym_BANGpp_BANG] = ACTIONS(199),
    [anon_sym_BANGp_BANG] = ACTIONS(199),
    [anon_sym_BANGmp_BANG] = ACTIONS(199),
    [anon_sym_BANGmf_BANG] = ACTIONS(199),
    [anon_sym_BANGf_BANG] = ACTIONS(199),
    [anon_sym_BANGff_BANG] = ACTIONS(199),
    [anon_sym_BANGfff_BANG] = ACTIONS(199),
    [anon_sym_BANGffff_BANG] = ACTIONS(199),
    [anon_sym_BANGsfz_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGsegno_BANG] = ACTIONS(199),
    [anon_sym_BANGcoda_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(199),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(199),
    [anon_sym_BANGfine_BANG] = ACTIONS(199),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(199),
    [sym_parts_line] = ACTIONS(199),
    [sym_instruction] = ACTIONS(199),
    [sym_key] = ACTIONS(199),
    [sym_macros] = ACTIONS(199),
    [sym_meter] = ACTIONS(199),
    [sym_notes] = ACTIONS(199),
    [sym_remark] = ACTIONS(199),
    [sym_rhythm_line] = ACTIONS(199),
    [anon_sym_s_COLON] = ACTIONS(199),
    [sym_tempo] = ACTIONS(199),
    [sym_tune_title] = ACTIONS(199),
    [sym_unit_note_length] = ACTIONS(199),
    [anon_sym_U_COLON] = ACTIONS(199),
    [sym_voice] = ACTIONS(199),
    [anon_sym_w_COLON] = ACTIONS(199),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(287),
    [sym__NEWLINE] = ACTIONS(289),
    [sym_COMMENTLINE] = ACTIONS(289),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(287),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(289),
    [aux_sym__music_content_token1] = ACTIONS(289),
    [sym_slur_open] = ACTIONS(289),
    [sym_slur_close] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(289),
    [sym_alteration] = ACTIONS(287),
    [sym_note_letter] = ACTIONS(287),
    [sym_rest] = ACTIONS(287),
    [anon_sym_Z] = ACTIONS(287),
    [anon_sym_X] = ACTIONS(287),
    [aux_sym_grace_note_token1] = ACTIONS(287),
    [aux_sym_chord_symbol_token1] = ACTIONS(289),
    [sym_annotation] = ACTIONS(287),
    [sym_tuplet_marker] = ACTIONS(287),
    [sym_decoration_shorthand] = ACTIONS(289),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(291),
    [sym__NEWLINE] = ACTIONS(293),
    [sym_COMMENTLINE] = ACTIONS(293),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(291),
    [aux_sym__music_content_token1] = ACTIONS(293),
    [sym_slur_open] = ACTIONS(293),
    [sym_slur_close] = ACTIONS(291),
    [anon_sym_LBRACK] = ACTIONS(293),
    [sym_alteration] = ACTIONS(291),
    [sym_note_letter] = ACTIONS(291),
    [sym_rest] = ACTIONS(291),
    [anon_sym_Z] = ACTIONS(291),
    [anon_sym_X] = ACTIONS(291),
    [aux_sym_grace_note_token1] = ACTIONS(291),
    [aux_sym_chord_symbol_token1] = ACTIONS(293),
    [sym_annotation] = ACTIONS(291),
    [sym_tuplet_marker] = ACTIONS(291),
    [sym_decoration_shorthand] = ACTIONS(293),
    [sym_bar_line] = ACTIONS(293),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(291),
    [sym_thin_double_bar_line] = ACTIONS(291),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(291),
    [sym_start_of_repeated_section] = ACTIONS(291),
    [sym_end_of_repeated_section] = ACTIONS(291),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(291),
    [anon_sym_BANGtrill_BANG] = ACTIONS(291),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(291),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(291),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(291),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(291),
    [anon_sym_BANGmordent_BANG] = ACTIONS(291),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(291),
    [anon_sym_BANGroll_BANG] = ACTIONS(291),
    [anon_sym_BANGturn_BANG] = ACTIONS(291),
    [anon_sym_BANGturnx_BANG] = ACTIONS(291),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(291),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(291),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(291),
    [anon_sym_BANG_GT_BANG] = ACTIONS(291),
    [anon_sym_BANGaccent_BANG] = ACTIONS(291),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(291),
    [anon_sym_BANGfermata_BANG] = ACTIONS(291),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(291),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(291),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(291),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(291),
    [anon_sym_BANGplus_BANG] = ACTIONS(291),
    [anon_sym_BANGsnap_BANG] = ACTIONS(291),
    [anon_sym_BANGslide_BANG] = ACTIONS(291),
    [anon_sym_BANGwedge_BANG] = ACTIONS(291),
    [anon_sym_BANGupbow_BANG] = ACTIONS(291),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(291),
    [anon_sym_BANGopen_BANG] = ACTIONS(291),
    [anon_sym_BANGthumb_BANG] = ACTIONS(291),
    [anon_sym_BANGbreath_BANG] = ACTIONS(291),
    [anon_sym_BANGpppp_BANG] = ACTIONS(291),
    [anon_sym_BANGppp_BANG] = ACTIONS(291),
    [anon_sym_BANGpp_BANG] = ACTIONS(291),
    [anon_sym_BANGp_BANG] = ACTIONS(291),
    [anon_sym_BANGmp_BANG] = ACTIONS(291),
    [anon_sym_BANGmf_BANG] = ACTIONS(291),
    [anon_sym_BANGf_BANG] = ACTIONS(291),
    [anon_sym_BANGff_BANG] = ACTIONS(291),
    [anon_sym_BANGfff_BANG] = ACTIONS(291),
    [anon_sym_BANGffff_BANG] = ACTIONS(291),
    [anon_sym_BANGsfz_BANG] = ACTIONS(291),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(291),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(291),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(291),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(291),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(291),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(291),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(291),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(291),
    [anon_sym_BANGsegno_BANG] = ACTIONS(291),
    [anon_sym_BANGcoda_BANG] = ACTIONS(291),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(291),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(291),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(291),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(291),
    [anon_sym_BANGfine_BANG] = ACTIONS(291),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(291),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(291),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(291),
    [sym_parts_line] = ACTIONS(291),
    [sym_instruction] = ACTIONS(291),
    [sym_key] = ACTIONS(291),
    [sym_macros] = ACTIONS(291),
    [sym_meter] = ACTIONS(291),
    [sym_notes] = ACTIONS(291),
    [sym_remark] = ACTIONS(291),
    [sym_rhythm_line] = ACTIONS(291),
    [anon_sym_s_COLON] = ACTIONS(291),
    [sym_tempo] = ACTIONS(291),
    [sym_tune_title] = ACTIONS(291),
    [sym_unit_note_length] = ACTIONS(291),
    [anon_sym_U_COLON] = ACTIONS(291),
    [sym_voice] = ACTIONS(291),
    [anon_sym_w_COLON] = ACTIONS(291),
    [sym_words_postbody] = ACTIONS(291),
  },
  [34] = {
    [anon_sym_DASH] = ACTIONS(209),
    [sym_COMMENTLINE] = ACTIONS(211),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(209),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(209),
    [aux_sym__music_content_token1] = ACTIONS(211),
    [sym_slur_open] = ACTIONS(211),
    [sym_slur_close] = ACTIONS(209),
    [anon_sym_LBRACK] = ACTIONS(211),
    [sym_alteration] = ACTIONS(209),
    [sym_note_letter] = ACTIONS(209),
    [sym_rest] = ACTIONS(209),
    [anon_sym_Z] = ACTIONS(209),
    [anon_sym_X] = ACTIONS(209),
    [aux_sym_grace_note_token1] = ACTIONS(209),
    [aux_sym_chord_symbol_token1] = ACTIONS(211),
    [sym_annotation] = ACTIONS(209),
    [sym_tuplet_marker] = ACTIONS(209),
    [sym_decoration_shorthand] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(209),
    [sym_bar_line] = ACTIONS(211),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(209),
    [sym_thin_double_bar_line] = ACTIONS(209),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(209),
    [sym_start_of_repeated_section] = ACTIONS(209),
    [sym_end_of_repeated_section] = ACTIONS(209),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(209),
    [anon_sym_BANGtrill_BANG] = ACTIONS(209),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(209),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(209),
    [anon_sym_BANGmordent_BANG] = ACTIONS(209),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(209),
    [anon_sym_BANGroll_BANG] = ACTIONS(209),
    [anon_sym_BANGturn_BANG] = ACTIONS(209),
    [anon_sym_BANGturnx_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(209),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_BANG] = ACTIONS(209),
    [anon_sym_BANGaccent_BANG] = ACTIONS(209),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(209),
    [anon_sym_BANGfermata_BANG] = ACTIONS(209),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(209),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(209),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(209),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(209),
    [anon_sym_BANGplus_BANG] = ACTIONS(209),
    [anon_sym_BANGsnap_BANG] = ACTIONS(209),
    [anon_sym_BANGslide_BANG] = ACTIONS(209),
    [anon_sym_BANGwedge_BANG] = ACTIONS(209),
    [anon_sym_BANGupbow_BANG] = ACTIONS(209),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(209),
    [anon_sym_BANGopen_BANG] = ACTIONS(209),
    [anon_sym_BANGthumb_BANG] = ACTIONS(209),
    [anon_sym_BANGbreath_BANG] = ACTIONS(209),
    [anon_sym_BANGpppp_BANG] = ACTIONS(209),
    [anon_sym_BANGppp_BANG] = ACTIONS(209),
    [anon_sym_BANGpp_BANG] = ACTIONS(209),
    [anon_sym_BANGp_BANG] = ACTIONS(209),
    [anon_sym_BANGmp_BANG] = ACTIONS(209),
    [anon_sym_BANGmf_BANG] = ACTIONS(209),
    [anon_sym_BANGf_BANG] = ACTIONS(209),
    [anon_sym_BANGff_BANG] = ACTIONS(209),
    [anon_sym_BANGfff_BANG] = ACTIONS(209),
    [anon_sym_BANGffff_BANG] = ACTIONS(209),
    [anon_sym_BANGsfz_BANG] = ACTIONS(209),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(209),
    [anon_sym_BANGsegno_BANG] = ACTIONS(209),
    [anon_sym_BANGcoda_BANG] = ACTIONS(209),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(209),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(209),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(209),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(209),
    [anon_sym_BANGfine_BANG] = ACTIONS(209),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(209),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(209),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(209),
    [sym_parts_line] = ACTIONS(209),
    [sym_instruction] = ACTIONS(209),
    [sym_key] = ACTIONS(209),
    [sym_macros] = ACTIONS(209),
    [sym_meter] = ACTIONS(209),
    [sym_notes] = ACTIONS(209),
    [sym_remark] = ACTIONS(209),
    [sym_rhythm_line] = ACTIONS(209),
    [anon_sym_s_COLON] = ACTIONS(209),
    [sym_tempo] = ACTIONS(209),
    [sym_tune_title] = ACTIONS(209),
    [sym_unit_note_length] = ACTIONS(209),
    [anon_sym_U_COLON] = ACTIONS(209),
    [sym_voice] = ACTIONS(209),
    [anon_sym_w_COLON] = ACTIONS(209),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(295),
    [sym__NEWLINE] = ACTIONS(297),
    [sym_COMMENTLINE] = ACTIONS(297),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(295),
    [aux_sym__music_content_token1] = ACTIONS(297),
    [sym_slur_open] = ACTIONS(297),
    [sym_slur_close] = ACTIONS(295),
    [anon_sym_LBRACK] = ACTIONS(297),
    [sym_alteration] = ACTIONS(295),
    [sym_note_letter] = ACTIONS(295),
    [sym_rest] = ACTIONS(295),
    [anon_sym_Z] = ACTIONS(295),
    [anon_sym_X] = ACTIONS(295),
    [aux_sym_grace_note_token1] = ACTIONS(295),
    [aux_sym_chord_symbol_token1] = ACTIONS(297),
    [sym_annotation] = ACTIONS(295),
    [sym_tuplet_marker] = ACTIONS(295),
    [sym_decoration_shorthand] = ACTIONS(297),
    [sym_bar_line] = ACTIONS(297),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(295),
    [sym_thin_double_bar_line] = ACTIONS(295),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(295),
    [sym_start_of_repeated_section] = ACTIONS(295),
    [sym_end_of_repeated_section] = ACTIONS(295),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(295),
    [anon_sym_BANGtrill_BANG] = ACTIONS(295),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(295),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(295),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(295),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(295),
    [anon_sym_BANGmordent_BANG] = ACTIONS(295),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(295),
    [anon_sym_BANGroll_BANG] = ACTIONS(295),
    [anon_sym_BANGturn_BANG] = ACTIONS(295),
    [anon_sym_BANGturnx_BANG] = ACTIONS(295),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(295),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(295),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(295),
    [anon_sym_BANG_GT_BANG] = ACTIONS(295),
    [anon_sym_BANGaccent_BANG] = ACTIONS(295),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(295),
    [anon_sym_BANGfermata_BANG] = ACTIONS(295),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(295),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(295),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(295),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(295),
    [anon_sym_BANGplus_BANG] = ACTIONS(295),
    [anon_sym_BANGsnap_BANG] = ACTIONS(295),
    [anon_sym_BANGslide_BANG] = ACTIONS(295),
    [anon_sym_BANGwedge_BANG] = ACTIONS(295),
    [anon_sym_BANGupbow_BANG] = ACTIONS(295),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(295),
    [anon_sym_BANGopen_BANG] = ACTIONS(295),
    [anon_sym_BANGthumb_BANG] = ACTIONS(295),
    [anon_sym_BANGbreath_BANG] = ACTIONS(295),
    [anon_sym_BANGpppp_BANG] = ACTIONS(295),
    [anon_sym_BANGppp_BANG] = ACTIONS(295),
    [anon_sym_BANGpp_BANG] = ACTIONS(295),
    [anon_sym_BANGp_BANG] = ACTIONS(295),
    [anon_sym_BANGmp_BANG] = ACTIONS(295),
    [anon_sym_BANGmf_BANG] = ACTIONS(295),
    [anon_sym_BANGf_BANG] = ACTIONS(295),
    [anon_sym_BANGff_BANG] = ACTIONS(295),
    [anon_sym_BANGfff_BANG] = ACTIONS(295),
    [anon_sym_BANGffff_BANG] = ACTIONS(295),
    [anon_sym_BANGsfz_BANG] = ACTIONS(295),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(295),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(295),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(295),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(295),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(295),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(295),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(295),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(295),
    [anon_sym_BANGsegno_BANG] = ACTIONS(295),
    [anon_sym_BANGcoda_BANG] = ACTIONS(295),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(295),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(295),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(295),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(295),
    [anon_sym_BANGfine_BANG] = ACTIONS(295),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(295),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(295),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(295),
    [sym_parts_line] = ACTIONS(295),
    [sym_instruction] = ACTIONS(295),
    [sym_key] = ACTIONS(295),
    [sym_macros] = ACTIONS(295),
    [sym_meter] = ACTIONS(295),
    [sym_notes] = ACTIONS(295),
    [sym_remark] = ACTIONS(295),
    [sym_rhythm_line] = ACTIONS(295),
    [anon_sym_s_COLON] = ACTIONS(295),
    [sym_tempo] = ACTIONS(295),
    [sym_tune_title] = ACTIONS(295),
    [sym_unit_note_length] = ACTIONS(295),
    [anon_sym_U_COLON] = ACTIONS(295),
    [sym_voice] = ACTIONS(295),
    [anon_sym_w_COLON] = ACTIONS(295),
    [sym_words_postbody] = ACTIONS(295),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(299),
    [sym__NEWLINE] = ACTIONS(301),
    [sym_COMMENTLINE] = ACTIONS(301),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(299),
    [aux_sym__music_content_token1] = ACTIONS(301),
    [sym_slur_open] = ACTIONS(301),
    [sym_slur_close] = ACTIONS(299),
    [anon_sym_LBRACK] = ACTIONS(301),
    [sym_alteration] = ACTIONS(299),
    [sym_note_letter] = ACTIONS(299),
    [sym_rest] = ACTIONS(299),
    [anon_sym_Z] = ACTIONS(299),
    [anon_sym_X] = ACTIONS(299),
    [aux_sym_grace_note_token1] = ACTIONS(299),
    [aux_sym_chord_symbol_token1] = ACTIONS(301),
    [sym_annotation] = ACTIONS(299),
    [sym_tuplet_marker] = ACTIONS(299),
    [sym_decoration_shorthand] = ACTIONS(301),
    [sym_bar_line] = ACTIONS(301),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(299),
    [sym_thin_double_bar_line] = ACTIONS(299),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(299),
    [sym_start_of_repeated_section] = ACTIONS(299),
    [sym_end_of_repeated_section] = ACTIONS(299),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(299),
    [anon_sym_BANGtrill_BANG] = ACTIONS(299),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(299),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(299),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(299),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(299),
    [anon_sym_BANGmordent_BANG] = ACTIONS(299),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(299),
    [anon_sym_BANGroll_BANG] = ACTIONS(299),
    [anon_sym_BANGturn_BANG] = ACTIONS(299),
    [anon_sym_BANGturnx_BANG] = ACTIONS(299),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(299),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(299),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(299),
    [anon_sym_BANG_GT_BANG] = ACTIONS(299),
    [anon_sym_BANGaccent_BANG] = ACTIONS(299),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(299),
    [anon_sym_BANGfermata_BANG] = ACTIONS(299),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(299),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(299),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(299),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(299),
    [anon_sym_BANGplus_BANG] = ACTIONS(299),
    [anon_sym_BANGsnap_BANG] = ACTIONS(299),
    [anon_sym_BANGslide_BANG] = ACTIONS(299),
    [anon_sym_BANGwedge_BANG] = ACTIONS(299),
    [anon_sym_BANGupbow_BANG] = ACTIONS(299),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(299),
    [anon_sym_BANGopen_BANG] = ACTIONS(299),
    [anon_sym_BANGthumb_BANG] = ACTIONS(299),
    [anon_sym_BANGbreath_BANG] = ACTIONS(299),
    [anon_sym_BANGpppp_BANG] = ACTIONS(299),
    [anon_sym_BANGppp_BANG] = ACTIONS(299),
    [anon_sym_BANGpp_BANG] = ACTIONS(299),
    [anon_sym_BANGp_BANG] = ACTIONS(299),
    [anon_sym_BANGmp_BANG] = ACTIONS(299),
    [anon_sym_BANGmf_BANG] = ACTIONS(299),
    [anon_sym_BANGf_BANG] = ACTIONS(299),
    [anon_sym_BANGff_BANG] = ACTIONS(299),
    [anon_sym_BANGfff_BANG] = ACTIONS(299),
    [anon_sym_BANGffff_BANG] = ACTIONS(299),
    [anon_sym_BANGsfz_BANG] = ACTIONS(299),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(299),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(299),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(299),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(299),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(299),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(299),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(299),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(299),
    [anon_sym_BANGsegno_BANG] = ACTIONS(299),
    [anon_sym_BANGcoda_BANG] = ACTIONS(299),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(299),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(299),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(299),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(299),
    [anon_sym_BANGfine_BANG] = ACTIONS(299),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(299),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(299),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(299),
    [sym_parts_line] = ACTIONS(299),
    [sym_instruction] = ACTIONS(299),
    [sym_key] = ACTIONS(299),
    [sym_macros] = ACTIONS(299),
    [sym_meter] = ACTIONS(299),
    [sym_notes] = ACTIONS(299),
    [sym_remark] = ACTIONS(299),
    [sym_rhythm_line] = ACTIONS(299),
    [anon_sym_s_COLON] = ACTIONS(299),
    [sym_tempo] = ACTIONS(299),
    [sym_tune_title] = ACTIONS(299),
    [sym_unit_note_length] = ACTIONS(299),
    [anon_sym_U_COLON] = ACTIONS(299),
    [sym_voice] = ACTIONS(299),
    [anon_sym_w_COLON] = ACTIONS(299),
    [sym_words_postbody] = ACTIONS(299),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(303),
    [sym__NEWLINE] = ACTIONS(305),
    [sym_COMMENTLINE] = ACTIONS(305),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(303),
    [aux_sym__music_content_token1] = ACTIONS(305),
    [sym_slur_open] = ACTIONS(305),
    [sym_slur_close] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(305),
    [sym_alteration] = ACTIONS(303),
    [sym_note_letter] = ACTIONS(303),
    [sym_rest] = ACTIONS(303),
    [anon_sym_Z] = ACTIONS(303),
    [anon_sym_X] = ACTIONS(303),
    [aux_sym_grace_note_token1] = ACTIONS(303),
    [aux_sym_chord_symbol_token1] = ACTIONS(305),
    [sym_annotation] = ACTIONS(303),
    [sym_tuplet_marker] = ACTIONS(303),
    [sym_decoration_shorthand] = ACTIONS(305),
    [sym_bar_line] = ACTIONS(305),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(303),
    [sym_thin_double_bar_line] = ACTIONS(303),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(303),
    [sym_start_of_repeated_section] = ACTIONS(303),
    [sym_end_of_repeated_section] = ACTIONS(303),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(303),
    [anon_sym_BANGtrill_BANG] = ACTIONS(303),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(303),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(303),
    [anon_sym_BANGmordent_BANG] = ACTIONS(303),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(303),
    [anon_sym_BANGroll_BANG] = ACTIONS(303),
    [anon_sym_BANGturn_BANG] = ACTIONS(303),
    [anon_sym_BANGturnx_BANG] = ACTIONS(303),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(303),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(303),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(303),
    [anon_sym_BANG_GT_BANG] = ACTIONS(303),
    [anon_sym_BANGaccent_BANG] = ACTIONS(303),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(303),
    [anon_sym_BANGfermata_BANG] = ACTIONS(303),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(303),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(303),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(303),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(303),
    [anon_sym_BANGplus_BANG] = ACTIONS(303),
    [anon_sym_BANGsnap_BANG] = ACTIONS(303),
    [anon_sym_BANGslide_BANG] = ACTIONS(303),
    [anon_sym_BANGwedge_BANG] = ACTIONS(303),
    [anon_sym_BANGupbow_BANG] = ACTIONS(303),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(303),
    [anon_sym_BANGopen_BANG] = ACTIONS(303),
    [anon_sym_BANGthumb_BANG] = ACTIONS(303),
    [anon_sym_BANGbreath_BANG] = ACTIONS(303),
    [anon_sym_BANGpppp_BANG] = ACTIONS(303),
    [anon_sym_BANGppp_BANG] = ACTIONS(303),
    [anon_sym_BANGpp_BANG] = ACTIONS(303),
    [anon_sym_BANGp_BANG] = ACTIONS(303),
    [anon_sym_BANGmp_BANG] = ACTIONS(303),
    [anon_sym_BANGmf_BANG] = ACTIONS(303),
    [anon_sym_BANGf_BANG] = ACTIONS(303),
    [anon_sym_BANGff_BANG] = ACTIONS(303),
    [anon_sym_BANGfff_BANG] = ACTIONS(303),
    [anon_sym_BANGffff_BANG] = ACTIONS(303),
    [anon_sym_BANGsfz_BANG] = ACTIONS(303),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGsegno_BANG] = ACTIONS(303),
    [anon_sym_BANGcoda_BANG] = ACTIONS(303),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(303),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(303),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(303),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(303),
    [anon_sym_BANGfine_BANG] = ACTIONS(303),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(303),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(303),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(303),
    [sym_parts_line] = ACTIONS(303),
    [sym_instruction] = ACTIONS(303),
    [sym_key] = ACTIONS(303),
    [sym_macros] = ACTIONS(303),
    [sym_meter] = ACTIONS(303),
    [sym_notes] = ACTIONS(303),
    [sym_remark] = ACTIONS(303),
    [sym_rhythm_line] = ACTIONS(303),
    [anon_sym_s_COLON] = ACTIONS(303),
    [sym_tempo] = ACTIONS(303),
    [sym_tune_title] = ACTIONS(303),
    [sym_unit_note_length] = ACTIONS(303),
    [anon_sym_U_COLON] = ACTIONS(303),
    [sym_voice] = ACTIONS(303),
    [anon_sym_w_COLON] = ACTIONS(303),
    [sym_words_postbody] = ACTIONS(303),
  },
  [38] = {
    [sym_COMMENTLINE] = ACTIONS(201),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(199),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(199),
    [aux_sym__music_content_token1] = ACTIONS(201),
    [sym_slur_open] = ACTIONS(201),
    [sym_slur_close] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [sym_alteration] = ACTIONS(199),
    [sym_note_letter] = ACTIONS(199),
    [sym_rest] = ACTIONS(199),
    [anon_sym_Z] = ACTIONS(199),
    [anon_sym_X] = ACTIONS(199),
    [aux_sym_grace_note_token1] = ACTIONS(199),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(199),
    [sym_tuplet_marker] = ACTIONS(199),
    [sym_decoration_shorthand] = ACTIONS(201),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(238),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(199),
    [sym_thin_double_bar_line] = ACTIONS(199),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(199),
    [sym_start_of_repeated_section] = ACTIONS(199),
    [sym_end_of_repeated_section] = ACTIONS(199),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(199),
    [anon_sym_BANGtrill_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGmordent_BANG] = ACTIONS(199),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(199),
    [anon_sym_BANGroll_BANG] = ACTIONS(199),
    [anon_sym_BANGturn_BANG] = ACTIONS(199),
    [anon_sym_BANGturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_BANG] = ACTIONS(199),
    [anon_sym_BANGaccent_BANG] = ACTIONS(199),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(199),
    [anon_sym_BANGfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(199),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(199),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(199),
    [anon_sym_BANGplus_BANG] = ACTIONS(199),
    [anon_sym_BANGsnap_BANG] = ACTIONS(199),
    [anon_sym_BANGslide_BANG] = ACTIONS(199),
    [anon_sym_BANGwedge_BANG] = ACTIONS(199),
    [anon_sym_BANGupbow_BANG] = ACTIONS(199),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(199),
    [anon_sym_BANGopen_BANG] = ACTIONS(199),
    [anon_sym_BANGthumb_BANG] = ACTIONS(199),
    [anon_sym_BANGbreath_BANG] = ACTIONS(199),
    [anon_sym_BANGpppp_BANG] = ACTIONS(199),
    [anon_sym_BANGppp_BANG] = ACTIONS(199),
    [anon_sym_BANGpp_BANG] = ACTIONS(199),
    [anon_sym_BANGp_BANG] = ACTIONS(199),
    [anon_sym_BANGmp_BANG] = ACTIONS(199),
    [anon_sym_BANGmf_BANG] = ACTIONS(199),
    [anon_sym_BANGf_BANG] = ACTIONS(199),
    [anon_sym_BANGff_BANG] = ACTIONS(199),
    [anon_sym_BANGfff_BANG] = ACTIONS(199),
    [anon_sym_BANGffff_BANG] = ACTIONS(199),
    [anon_sym_BANGsfz_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGsegno_BANG] = ACTIONS(199),
    [anon_sym_BANGcoda_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(199),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(199),
    [anon_sym_BANGfine_BANG] = ACTIONS(199),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(199),
    [sym_parts_line] = ACTIONS(199),
    [sym_instruction] = ACTIONS(199),
    [sym_key] = ACTIONS(199),
    [sym_macros] = ACTIONS(199),
    [sym_meter] = ACTIONS(199),
    [sym_notes] = ACTIONS(199),
    [sym_remark] = ACTIONS(199),
    [sym_rhythm_line] = ACTIONS(199),
    [anon_sym_s_COLON] = ACTIONS(199),
    [sym_tempo] = ACTIONS(199),
    [sym_tune_title] = ACTIONS(199),
    [sym_unit_note_length] = ACTIONS(199),
    [anon_sym_U_COLON] = ACTIONS(199),
    [sym_voice] = ACTIONS(199),
    [anon_sym_w_COLON] = ACTIONS(199),
  },
  [39] = {
    [sym_COMMENTLINE] = ACTIONS(250),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(248),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(248),
    [aux_sym__music_content_token1] = ACTIONS(250),
    [sym_slur_open] = ACTIONS(250),
    [sym_slur_close] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(250),
    [sym_alteration] = ACTIONS(248),
    [sym_note_letter] = ACTIONS(248),
    [sym_rest] = ACTIONS(248),
    [anon_sym_Z] = ACTIONS(248),
    [anon_sym_X] = ACTIONS(248),
    [aux_sym_grace_note_token1] = ACTIONS(248),
    [aux_sym_chord_symbol_token1] = ACTIONS(250),
    [sym_annotation] = ACTIONS(248),
    [sym_tuplet_marker] = ACTIONS(248),
    [sym_decoration_shorthand] = ACTIONS(250),
    [sym_bar_line] = ACTIONS(250),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(248),
    [sym_thin_double_bar_line] = ACTIONS(248),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(248),
    [sym_start_of_repeated_section] = ACTIONS(248),
    [sym_end_of_repeated_section] = ACTIONS(248),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(248),
    [anon_sym_BANGtrill_BANG] = ACTIONS(248),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(248),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(248),
    [anon_sym_BANGmordent_BANG] = ACTIONS(248),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(248),
    [anon_sym_BANGroll_BANG] = ACTIONS(248),
    [anon_sym_BANGturn_BANG] = ACTIONS(248),
    [anon_sym_BANGturnx_BANG] = ACTIONS(248),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(248),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(248),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(248),
    [anon_sym_BANG_GT_BANG] = ACTIONS(248),
    [anon_sym_BANGaccent_BANG] = ACTIONS(248),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(248),
    [anon_sym_BANGfermata_BANG] = ACTIONS(248),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(248),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(248),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(248),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(248),
    [anon_sym_BANGplus_BANG] = ACTIONS(248),
    [anon_sym_BANGsnap_BANG] = ACTIONS(248),
    [anon_sym_BANGslide_BANG] = ACTIONS(248),
    [anon_sym_BANGwedge_BANG] = ACTIONS(248),
    [anon_sym_BANGupbow_BANG] = ACTIONS(248),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(248),
    [anon_sym_BANGopen_BANG] = ACTIONS(248),
    [anon_sym_BANGthumb_BANG] = ACTIONS(248),
    [anon_sym_BANGbreath_BANG] = ACTIONS(248),
    [anon_sym_BANGpppp_BANG] = ACTIONS(248),
    [anon_sym_BANGppp_BANG] = ACTIONS(248),
    [anon_sym_BANGpp_BANG] = ACTIONS(248),
    [anon_sym_BANGp_BANG] = ACTIONS(248),
    [anon_sym_BANGmp_BANG] = ACTIONS(248),
    [anon_sym_BANGmf_BANG] = ACTIONS(248),
    [anon_sym_BANGf_BANG] = ACTIONS(248),
    [anon_sym_BANGff_BANG] = ACTIONS(248),
    [anon_sym_BANGfff_BANG] = ACTIONS(248),
    [anon_sym_BANGffff_BANG] = ACTIONS(248),
    [anon_sym_BANGsfz_BANG] = ACTIONS(248),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(248),
    [anon_sym_BANGsegno_BANG] = ACTIONS(248),
    [anon_sym_BANGcoda_BANG] = ACTIONS(248),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(248),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(248),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(248),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(248),
    [anon_sym_BANGfine_BANG] = ACTIONS(248),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(248),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(248),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(248),
    [sym_parts_line] = ACTIONS(248),
    [sym_instruction] = ACTIONS(248),
    [sym_key] = ACTIONS(248),
    [sym_macros] = ACTIONS(248),
    [sym_meter] = ACTIONS(248),
    [sym_notes] = ACTIONS(248),
    [sym_remark] = ACTIONS(248),
    [sym_rhythm_line] = ACTIONS(248),
    [anon_sym_s_COLON] = ACTIONS(248),
    [sym_tempo] = ACTIONS(248),
    [sym_tune_title] = ACTIONS(248),
    [sym_unit_note_length] = ACTIONS(248),
    [anon_sym_U_COLON] = ACTIONS(248),
    [sym_voice] = ACTIONS(248),
    [anon_sym_w_COLON] = ACTIONS(248),
  },
  [40] = {
    [sym_COMMENTLINE] = ACTIONS(201),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(199),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(199),
    [aux_sym__music_content_token1] = ACTIONS(201),
    [sym_slur_open] = ACTIONS(201),
    [sym_slur_close] = ACTIONS(199),
    [anon_sym_LBRACK] = ACTIONS(201),
    [sym_alteration] = ACTIONS(199),
    [sym_note_letter] = ACTIONS(199),
    [sym_rest] = ACTIONS(199),
    [anon_sym_Z] = ACTIONS(199),
    [anon_sym_X] = ACTIONS(199),
    [aux_sym_grace_note_token1] = ACTIONS(199),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(199),
    [sym_tuplet_marker] = ACTIONS(199),
    [sym_decoration_shorthand] = ACTIONS(201),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(199),
    [sym_thin_double_bar_line] = ACTIONS(199),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(199),
    [sym_start_of_repeated_section] = ACTIONS(199),
    [sym_end_of_repeated_section] = ACTIONS(199),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(199),
    [anon_sym_BANGtrill_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(199),
    [anon_sym_BANGmordent_BANG] = ACTIONS(199),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(199),
    [anon_sym_BANGroll_BANG] = ACTIONS(199),
    [anon_sym_BANGturn_BANG] = ACTIONS(199),
    [anon_sym_BANGturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(199),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_BANG] = ACTIONS(199),
    [anon_sym_BANGaccent_BANG] = ACTIONS(199),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(199),
    [anon_sym_BANGfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(199),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(199),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(199),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(199),
    [anon_sym_BANGplus_BANG] = ACTIONS(199),
    [anon_sym_BANGsnap_BANG] = ACTIONS(199),
    [anon_sym_BANGslide_BANG] = ACTIONS(199),
    [anon_sym_BANGwedge_BANG] = ACTIONS(199),
    [anon_sym_BANGupbow_BANG] = ACTIONS(199),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(199),
    [anon_sym_BANGopen_BANG] = ACTIONS(199),
    [anon_sym_BANGthumb_BANG] = ACTIONS(199),
    [anon_sym_BANGbreath_BANG] = ACTIONS(199),
    [anon_sym_BANGpppp_BANG] = ACTIONS(199),
    [anon_sym_BANGppp_BANG] = ACTIONS(199),
    [anon_sym_BANGpp_BANG] = ACTIONS(199),
    [anon_sym_BANGp_BANG] = ACTIONS(199),
    [anon_sym_BANGmp_BANG] = ACTIONS(199),
    [anon_sym_BANGmf_BANG] = ACTIONS(199),
    [anon_sym_BANGf_BANG] = ACTIONS(199),
    [anon_sym_BANGff_BANG] = ACTIONS(199),
    [anon_sym_BANGfff_BANG] = ACTIONS(199),
    [anon_sym_BANGffff_BANG] = ACTIONS(199),
    [anon_sym_BANGsfz_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(199),
    [anon_sym_BANGsegno_BANG] = ACTIONS(199),
    [anon_sym_BANGcoda_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(199),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(199),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(199),
    [anon_sym_BANGfine_BANG] = ACTIONS(199),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(199),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(199),
    [sym_parts_line] = ACTIONS(199),
    [sym_instruction] = ACTIONS(199),
    [sym_key] = ACTIONS(199),
    [sym_macros] = ACTIONS(199),
    [sym_meter] = ACTIONS(199),
    [sym_notes] = ACTIONS(199),
    [sym_remark] = ACTIONS(199),
    [sym_rhythm_line] = ACTIONS(199),
    [anon_sym_s_COLON] = ACTIONS(199),
    [sym_tempo] = ACTIONS(199),
    [sym_tune_title] = ACTIONS(199),
    [sym_unit_note_length] = ACTIONS(199),
    [anon_sym_U_COLON] = ACTIONS(199),
    [sym_voice] = ACTIONS(199),
    [anon_sym_w_COLON] = ACTIONS(199),
  },
  [41] = {
    [sym_COMMENTLINE] = ACTIONS(254),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(252),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(252),
    [aux_sym__music_content_token1] = ACTIONS(254),
    [sym_slur_open] = ACTIONS(254),
    [sym_slur_close] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(254),
    [sym_alteration] = ACTIONS(252),
    [sym_note_letter] = ACTIONS(252),
    [sym_rest] = ACTIONS(252),
    [anon_sym_Z] = ACTIONS(252),
    [anon_sym_X] = ACTIONS(252),
    [aux_sym_grace_note_token1] = ACTIONS(252),
    [aux_sym_chord_symbol_token1] = ACTIONS(254),
    [sym_annotation] = ACTIONS(252),
    [sym_tuplet_marker] = ACTIONS(252),
    [sym_decoration_shorthand] = ACTIONS(254),
    [sym_bar_line] = ACTIONS(254),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(252),
    [sym_thin_double_bar_line] = ACTIONS(252),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(252),
    [sym_start_of_repeated_section] = ACTIONS(252),
    [sym_end_of_repeated_section] = ACTIONS(252),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(252),
    [anon_sym_BANGtrill_BANG] = ACTIONS(252),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(252),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(252),
    [anon_sym_BANGmordent_BANG] = ACTIONS(252),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(252),
    [anon_sym_BANGroll_BANG] = ACTIONS(252),
    [anon_sym_BANGturn_BANG] = ACTIONS(252),
    [anon_sym_BANGturnx_BANG] = ACTIONS(252),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(252),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(252),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(252),
    [anon_sym_BANG_GT_BANG] = ACTIONS(252),
    [anon_sym_BANGaccent_BANG] = ACTIONS(252),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(252),
    [anon_sym_BANGfermata_BANG] = ACTIONS(252),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(252),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(252),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(252),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(252),
    [anon_sym_BANGplus_BANG] = ACTIONS(252),
    [anon_sym_BANGsnap_BANG] = ACTIONS(252),
    [anon_sym_BANGslide_BANG] = ACTIONS(252),
    [anon_sym_BANGwedge_BANG] = ACTIONS(252),
    [anon_sym_BANGupbow_BANG] = ACTIONS(252),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(252),
    [anon_sym_BANGopen_BANG] = ACTIONS(252),
    [anon_sym_BANGthumb_BANG] = ACTIONS(252),
    [anon_sym_BANGbreath_BANG] = ACTIONS(252),
    [anon_sym_BANGpppp_BANG] = ACTIONS(252),
    [anon_sym_BANGppp_BANG] = ACTIONS(252),
    [anon_sym_BANGpp_BANG] = ACTIONS(252),
    [anon_sym_BANGp_BANG] = ACTIONS(252),
    [anon_sym_BANGmp_BANG] = ACTIONS(252),
    [anon_sym_BANGmf_BANG] = ACTIONS(252),
    [anon_sym_BANGf_BANG] = ACTIONS(252),
    [anon_sym_BANGff_BANG] = ACTIONS(252),
    [anon_sym_BANGfff_BANG] = ACTIONS(252),
    [anon_sym_BANGffff_BANG] = ACTIONS(252),
    [anon_sym_BANGsfz_BANG] = ACTIONS(252),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(252),
    [anon_sym_BANGsegno_BANG] = ACTIONS(252),
    [anon_sym_BANGcoda_BANG] = ACTIONS(252),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(252),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(252),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(252),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(252),
    [anon_sym_BANGfine_BANG] = ACTIONS(252),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(252),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(252),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(252),
    [sym_parts_line] = ACTIONS(252),
    [sym_instruction] = ACTIONS(252),
    [sym_key] = ACTIONS(252),
    [sym_macros] = ACTIONS(252),
    [sym_meter] = ACTIONS(252),
    [sym_notes] = ACTIONS(252),
    [sym_remark] = ACTIONS(252),
    [sym_rhythm_line] = ACTIONS(252),
    [anon_sym_s_COLON] = ACTIONS(252),
    [sym_tempo] = ACTIONS(252),
    [sym_tune_title] = ACTIONS(252),
    [sym_unit_note_length] = ACTIONS(252),
    [anon_sym_U_COLON] = ACTIONS(252),
    [sym_voice] = ACTIONS(252),
    [anon_sym_w_COLON] = ACTIONS(252),
  },
  [42] = {
    [sym_COMMENTLINE] = ACTIONS(232),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(230),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(230),
    [aux_sym__music_content_token1] = ACTIONS(232),
    [sym_slur_open] = ACTIONS(232),
    [sym_slur_close] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(232),
    [sym_alteration] = ACTIONS(230),
    [sym_note_letter] = ACTIONS(230),
    [sym_rest] = ACTIONS(230),
    [anon_sym_Z] = ACTIONS(230),
    [anon_sym_X] = ACTIONS(230),
    [aux_sym_grace_note_token1] = ACTIONS(230),
    [aux_sym_chord_symbol_token1] = ACTIONS(232),
    [sym_annotation] = ACTIONS(230),
    [sym_tuplet_marker] = ACTIONS(230),
    [sym_decoration_shorthand] = ACTIONS(232),
    [sym_bar_line] = ACTIONS(232),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(230),
    [sym_thin_double_bar_line] = ACTIONS(230),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(230),
    [sym_start_of_repeated_section] = ACTIONS(230),
    [sym_end_of_repeated_section] = ACTIONS(230),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(230),
    [anon_sym_BANGtrill_BANG] = ACTIONS(230),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(230),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(230),
    [anon_sym_BANGmordent_BANG] = ACTIONS(230),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(230),
    [anon_sym_BANGroll_BANG] = ACTIONS(230),
    [anon_sym_BANGturn_BANG] = ACTIONS(230),
    [anon_sym_BANGturnx_BANG] = ACTIONS(230),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(230),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(230),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(230),
    [anon_sym_BANG_GT_BANG] = ACTIONS(230),
    [anon_sym_BANGaccent_BANG] = ACTIONS(230),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(230),
    [anon_sym_BANGfermata_BANG] = ACTIONS(230),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(230),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(230),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(230),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(230),
    [anon_sym_BANGplus_BANG] = ACTIONS(230),
    [anon_sym_BANGsnap_BANG] = ACTIONS(230),
    [anon_sym_BANGslide_BANG] = ACTIONS(230),
    [anon_sym_BANGwedge_BANG] = ACTIONS(230),
    [anon_sym_BANGupbow_BANG] = ACTIONS(230),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(230),
    [anon_sym_BANGopen_BANG] = ACTIONS(230),
    [anon_sym_BANGthumb_BANG] = ACTIONS(230),
    [anon_sym_BANGbreath_BANG] = ACTIONS(230),
    [anon_sym_BANGpppp_BANG] = ACTIONS(230),
    [anon_sym_BANGppp_BANG] = ACTIONS(230),
    [anon_sym_BANGpp_BANG] = ACTIONS(230),
    [anon_sym_BANGp_BANG] = ACTIONS(230),
    [anon_sym_BANGmp_BANG] = ACTIONS(230),
    [anon_sym_BANGmf_BANG] = ACTIONS(230),
    [anon_sym_BANGf_BANG] = ACTIONS(230),
    [anon_sym_BANGff_BANG] = ACTIONS(230),
    [anon_sym_BANGfff_BANG] = ACTIONS(230),
    [anon_sym_BANGffff_BANG] = ACTIONS(230),
    [anon_sym_BANGsfz_BANG] = ACTIONS(230),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(230),
    [anon_sym_BANGsegno_BANG] = ACTIONS(230),
    [anon_sym_BANGcoda_BANG] = ACTIONS(230),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(230),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(230),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(230),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(230),
    [anon_sym_BANGfine_BANG] = ACTIONS(230),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(230),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(230),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(230),
    [sym_parts_line] = ACTIONS(230),
    [sym_instruction] = ACTIONS(230),
    [sym_key] = ACTIONS(230),
    [sym_macros] = ACTIONS(230),
    [sym_meter] = ACTIONS(230),
    [sym_notes] = ACTIONS(230),
    [sym_remark] = ACTIONS(230),
    [sym_rhythm_line] = ACTIONS(230),
    [anon_sym_s_COLON] = ACTIONS(230),
    [sym_tempo] = ACTIONS(230),
    [sym_tune_title] = ACTIONS(230),
    [sym_unit_note_length] = ACTIONS(230),
    [anon_sym_U_COLON] = ACTIONS(230),
    [sym_voice] = ACTIONS(230),
    [anon_sym_w_COLON] = ACTIONS(230),
  },
  [43] = {
    [sym_COMMENTLINE] = ACTIONS(264),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(262),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(262),
    [aux_sym__music_content_token1] = ACTIONS(264),
    [sym_slur_open] = ACTIONS(264),
    [sym_slur_close] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_alteration] = ACTIONS(262),
    [sym_note_letter] = ACTIONS(262),
    [sym_rest] = ACTIONS(262),
    [anon_sym_Z] = ACTIONS(262),
    [anon_sym_X] = ACTIONS(262),
    [aux_sym_grace_note_token1] = ACTIONS(262),
    [aux_sym_chord_symbol_token1] = ACTIONS(264),
    [sym_annotation] = ACTIONS(262),
    [sym_tuplet_marker] = ACTIONS(262),
    [sym_decoration_shorthand] = ACTIONS(264),
    [sym_bar_line] = ACTIONS(264),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(262),
    [sym_thin_double_bar_line] = ACTIONS(262),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(262),
    [sym_start_of_repeated_section] = ACTIONS(262),
    [sym_end_of_repeated_section] = ACTIONS(262),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(262),
    [anon_sym_BANGtrill_BANG] = ACTIONS(262),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(262),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(262),
    [anon_sym_BANGmordent_BANG] = ACTIONS(262),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(262),
    [anon_sym_BANGroll_BANG] = ACTIONS(262),
    [anon_sym_BANGturn_BANG] = ACTIONS(262),
    [anon_sym_BANGturnx_BANG] = ACTIONS(262),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(262),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(262),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(262),
    [anon_sym_BANG_GT_BANG] = ACTIONS(262),
    [anon_sym_BANGaccent_BANG] = ACTIONS(262),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(262),
    [anon_sym_BANGfermata_BANG] = ACTIONS(262),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(262),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(262),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(262),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(262),
    [anon_sym_BANGplus_BANG] = ACTIONS(262),
    [anon_sym_BANGsnap_BANG] = ACTIONS(262),
    [anon_sym_BANGslide_BANG] = ACTIONS(262),
    [anon_sym_BANGwedge_BANG] = ACTIONS(262),
    [anon_sym_BANGupbow_BANG] = ACTIONS(262),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(262),
    [anon_sym_BANGopen_BANG] = ACTIONS(262),
    [anon_sym_BANGthumb_BANG] = ACTIONS(262),
    [anon_sym_BANGbreath_BANG] = ACTIONS(262),
    [anon_sym_BANGpppp_BANG] = ACTIONS(262),
    [anon_sym_BANGppp_BANG] = ACTIONS(262),
    [anon_sym_BANGpp_BANG] = ACTIONS(262),
    [anon_sym_BANGp_BANG] = ACTIONS(262),
    [anon_sym_BANGmp_BANG] = ACTIONS(262),
    [anon_sym_BANGmf_BANG] = ACTIONS(262),
    [anon_sym_BANGf_BANG] = ACTIONS(262),
    [anon_sym_BANGff_BANG] = ACTIONS(262),
    [anon_sym_BANGfff_BANG] = ACTIONS(262),
    [anon_sym_BANGffff_BANG] = ACTIONS(262),
    [anon_sym_BANGsfz_BANG] = ACTIONS(262),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(262),
    [anon_sym_BANGsegno_BANG] = ACTIONS(262),
    [anon_sym_BANGcoda_BANG] = ACTIONS(262),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(262),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(262),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(262),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(262),
    [anon_sym_BANGfine_BANG] = ACTIONS(262),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(262),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(262),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(262),
    [sym_parts_line] = ACTIONS(262),
    [sym_instruction] = ACTIONS(262),
    [sym_key] = ACTIONS(262),
    [sym_macros] = ACTIONS(262),
    [sym_meter] = ACTIONS(262),
    [sym_notes] = ACTIONS(262),
    [sym_remark] = ACTIONS(262),
    [sym_rhythm_line] = ACTIONS(262),
    [anon_sym_s_COLON] = ACTIONS(262),
    [sym_tempo] = ACTIONS(262),
    [sym_tune_title] = ACTIONS(262),
    [sym_unit_note_length] = ACTIONS(262),
    [anon_sym_U_COLON] = ACTIONS(262),
    [sym_voice] = ACTIONS(262),
    [anon_sym_w_COLON] = ACTIONS(262),
  },
  [44] = {
    [sym_COMMENTLINE] = ACTIONS(258),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(256),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(307),
    [aux_sym__music_content_token1] = ACTIONS(258),
    [sym_slur_open] = ACTIONS(258),
    [sym_slur_close] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(258),
    [sym_alteration] = ACTIONS(256),
    [sym_note_letter] = ACTIONS(256),
    [sym_rest] = ACTIONS(256),
    [anon_sym_Z] = ACTIONS(256),
    [anon_sym_X] = ACTIONS(256),
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
    [sym_remark] = ACTIONS(256),
    [sym_rhythm_line] = ACTIONS(256),
    [anon_sym_s_COLON] = ACTIONS(256),
    [sym_tempo] = ACTIONS(256),
    [sym_tune_title] = ACTIONS(256),
    [sym_unit_note_length] = ACTIONS(256),
    [anon_sym_U_COLON] = ACTIONS(256),
    [sym_voice] = ACTIONS(256),
    [anon_sym_w_COLON] = ACTIONS(256),
  },
  [45] = {
    [sym_COMMENTLINE] = ACTIONS(270),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(268),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(268),
    [aux_sym__music_content_token1] = ACTIONS(270),
    [sym_slur_open] = ACTIONS(270),
    [sym_slur_close] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(270),
    [sym_alteration] = ACTIONS(268),
    [sym_note_letter] = ACTIONS(268),
    [sym_rest] = ACTIONS(268),
    [anon_sym_Z] = ACTIONS(268),
    [anon_sym_X] = ACTIONS(268),
    [aux_sym_grace_note_token1] = ACTIONS(268),
    [aux_sym_chord_symbol_token1] = ACTIONS(270),
    [sym_annotation] = ACTIONS(268),
    [sym_tuplet_marker] = ACTIONS(268),
    [sym_decoration_shorthand] = ACTIONS(270),
    [sym_bar_line] = ACTIONS(270),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(268),
    [sym_thin_double_bar_line] = ACTIONS(268),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(268),
    [sym_start_of_repeated_section] = ACTIONS(268),
    [sym_end_of_repeated_section] = ACTIONS(268),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(268),
    [anon_sym_BANGtrill_BANG] = ACTIONS(268),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(268),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(268),
    [anon_sym_BANGmordent_BANG] = ACTIONS(268),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(268),
    [anon_sym_BANGroll_BANG] = ACTIONS(268),
    [anon_sym_BANGturn_BANG] = ACTIONS(268),
    [anon_sym_BANGturnx_BANG] = ACTIONS(268),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(268),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(268),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(268),
    [anon_sym_BANG_GT_BANG] = ACTIONS(268),
    [anon_sym_BANGaccent_BANG] = ACTIONS(268),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(268),
    [anon_sym_BANGfermata_BANG] = ACTIONS(268),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(268),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(268),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(268),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(268),
    [anon_sym_BANGplus_BANG] = ACTIONS(268),
    [anon_sym_BANGsnap_BANG] = ACTIONS(268),
    [anon_sym_BANGslide_BANG] = ACTIONS(268),
    [anon_sym_BANGwedge_BANG] = ACTIONS(268),
    [anon_sym_BANGupbow_BANG] = ACTIONS(268),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(268),
    [anon_sym_BANGopen_BANG] = ACTIONS(268),
    [anon_sym_BANGthumb_BANG] = ACTIONS(268),
    [anon_sym_BANGbreath_BANG] = ACTIONS(268),
    [anon_sym_BANGpppp_BANG] = ACTIONS(268),
    [anon_sym_BANGppp_BANG] = ACTIONS(268),
    [anon_sym_BANGpp_BANG] = ACTIONS(268),
    [anon_sym_BANGp_BANG] = ACTIONS(268),
    [anon_sym_BANGmp_BANG] = ACTIONS(268),
    [anon_sym_BANGmf_BANG] = ACTIONS(268),
    [anon_sym_BANGf_BANG] = ACTIONS(268),
    [anon_sym_BANGff_BANG] = ACTIONS(268),
    [anon_sym_BANGfff_BANG] = ACTIONS(268),
    [anon_sym_BANGffff_BANG] = ACTIONS(268),
    [anon_sym_BANGsfz_BANG] = ACTIONS(268),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(268),
    [anon_sym_BANGsegno_BANG] = ACTIONS(268),
    [anon_sym_BANGcoda_BANG] = ACTIONS(268),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(268),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(268),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(268),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(268),
    [anon_sym_BANGfine_BANG] = ACTIONS(268),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(268),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(268),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(268),
    [sym_parts_line] = ACTIONS(268),
    [sym_instruction] = ACTIONS(268),
    [sym_key] = ACTIONS(268),
    [sym_macros] = ACTIONS(268),
    [sym_meter] = ACTIONS(268),
    [sym_notes] = ACTIONS(268),
    [sym_remark] = ACTIONS(268),
    [sym_rhythm_line] = ACTIONS(268),
    [anon_sym_s_COLON] = ACTIONS(268),
    [sym_tempo] = ACTIONS(268),
    [sym_tune_title] = ACTIONS(268),
    [sym_unit_note_length] = ACTIONS(268),
    [anon_sym_U_COLON] = ACTIONS(268),
    [sym_voice] = ACTIONS(268),
    [anon_sym_w_COLON] = ACTIONS(268),
  },
  [46] = {
    [sym_COMMENTLINE] = ACTIONS(289),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(287),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(287),
    [aux_sym__music_content_token1] = ACTIONS(289),
    [sym_slur_open] = ACTIONS(289),
    [sym_slur_close] = ACTIONS(287),
    [anon_sym_LBRACK] = ACTIONS(289),
    [sym_alteration] = ACTIONS(287),
    [sym_note_letter] = ACTIONS(287),
    [sym_rest] = ACTIONS(287),
    [anon_sym_Z] = ACTIONS(287),
    [anon_sym_X] = ACTIONS(287),
    [aux_sym_grace_note_token1] = ACTIONS(287),
    [aux_sym_chord_symbol_token1] = ACTIONS(289),
    [sym_annotation] = ACTIONS(287),
    [sym_tuplet_marker] = ACTIONS(287),
    [sym_decoration_shorthand] = ACTIONS(289),
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
    [sym_remark] = ACTIONS(287),
    [sym_rhythm_line] = ACTIONS(287),
    [anon_sym_s_COLON] = ACTIONS(287),
    [sym_tempo] = ACTIONS(287),
    [sym_tune_title] = ACTIONS(287),
    [sym_unit_note_length] = ACTIONS(287),
    [anon_sym_U_COLON] = ACTIONS(287),
    [sym_voice] = ACTIONS(287),
    [anon_sym_w_COLON] = ACTIONS(287),
  },
  [47] = {
    [sym_COMMENTLINE] = ACTIONS(236),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(234),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(234),
    [aux_sym__music_content_token1] = ACTIONS(236),
    [sym_slur_open] = ACTIONS(236),
    [sym_slur_close] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(236),
    [sym_alteration] = ACTIONS(234),
    [sym_note_letter] = ACTIONS(234),
    [sym_rest] = ACTIONS(234),
    [anon_sym_Z] = ACTIONS(234),
    [anon_sym_X] = ACTIONS(234),
    [aux_sym_grace_note_token1] = ACTIONS(234),
    [aux_sym_chord_symbol_token1] = ACTIONS(236),
    [sym_annotation] = ACTIONS(234),
    [sym_tuplet_marker] = ACTIONS(234),
    [sym_decoration_shorthand] = ACTIONS(236),
    [sym_bar_line] = ACTIONS(236),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(234),
    [sym_thin_double_bar_line] = ACTIONS(234),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(234),
    [sym_start_of_repeated_section] = ACTIONS(234),
    [sym_end_of_repeated_section] = ACTIONS(234),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(234),
    [anon_sym_BANGtrill_BANG] = ACTIONS(234),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(234),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(234),
    [anon_sym_BANGmordent_BANG] = ACTIONS(234),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(234),
    [anon_sym_BANGroll_BANG] = ACTIONS(234),
    [anon_sym_BANGturn_BANG] = ACTIONS(234),
    [anon_sym_BANGturnx_BANG] = ACTIONS(234),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(234),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(234),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(234),
    [anon_sym_BANG_GT_BANG] = ACTIONS(234),
    [anon_sym_BANGaccent_BANG] = ACTIONS(234),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(234),
    [anon_sym_BANGfermata_BANG] = ACTIONS(234),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(234),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(234),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(234),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(234),
    [anon_sym_BANGplus_BANG] = ACTIONS(234),
    [anon_sym_BANGsnap_BANG] = ACTIONS(234),
    [anon_sym_BANGslide_BANG] = ACTIONS(234),
    [anon_sym_BANGwedge_BANG] = ACTIONS(234),
    [anon_sym_BANGupbow_BANG] = ACTIONS(234),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(234),
    [anon_sym_BANGopen_BANG] = ACTIONS(234),
    [anon_sym_BANGthumb_BANG] = ACTIONS(234),
    [anon_sym_BANGbreath_BANG] = ACTIONS(234),
    [anon_sym_BANGpppp_BANG] = ACTIONS(234),
    [anon_sym_BANGppp_BANG] = ACTIONS(234),
    [anon_sym_BANGpp_BANG] = ACTIONS(234),
    [anon_sym_BANGp_BANG] = ACTIONS(234),
    [anon_sym_BANGmp_BANG] = ACTIONS(234),
    [anon_sym_BANGmf_BANG] = ACTIONS(234),
    [anon_sym_BANGf_BANG] = ACTIONS(234),
    [anon_sym_BANGff_BANG] = ACTIONS(234),
    [anon_sym_BANGfff_BANG] = ACTIONS(234),
    [anon_sym_BANGffff_BANG] = ACTIONS(234),
    [anon_sym_BANGsfz_BANG] = ACTIONS(234),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(234),
    [anon_sym_BANGsegno_BANG] = ACTIONS(234),
    [anon_sym_BANGcoda_BANG] = ACTIONS(234),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(234),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(234),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(234),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(234),
    [anon_sym_BANGfine_BANG] = ACTIONS(234),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(234),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(234),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(234),
    [sym_parts_line] = ACTIONS(234),
    [sym_instruction] = ACTIONS(234),
    [sym_key] = ACTIONS(234),
    [sym_macros] = ACTIONS(234),
    [sym_meter] = ACTIONS(234),
    [sym_notes] = ACTIONS(234),
    [sym_remark] = ACTIONS(234),
    [sym_rhythm_line] = ACTIONS(234),
    [anon_sym_s_COLON] = ACTIONS(234),
    [sym_tempo] = ACTIONS(234),
    [sym_tune_title] = ACTIONS(234),
    [sym_unit_note_length] = ACTIONS(234),
    [anon_sym_U_COLON] = ACTIONS(234),
    [sym_voice] = ACTIONS(234),
    [anon_sym_w_COLON] = ACTIONS(234),
  },
  [48] = {
    [sym_COMMENTLINE] = ACTIONS(278),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(276),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(276),
    [aux_sym__music_content_token1] = ACTIONS(278),
    [sym_slur_open] = ACTIONS(278),
    [sym_slur_close] = ACTIONS(276),
    [anon_sym_LBRACK] = ACTIONS(278),
    [sym_alteration] = ACTIONS(276),
    [sym_note_letter] = ACTIONS(276),
    [sym_rest] = ACTIONS(276),
    [anon_sym_Z] = ACTIONS(276),
    [anon_sym_X] = ACTIONS(276),
    [aux_sym_grace_note_token1] = ACTIONS(276),
    [aux_sym_chord_symbol_token1] = ACTIONS(278),
    [sym_annotation] = ACTIONS(276),
    [sym_tuplet_marker] = ACTIONS(276),
    [sym_decoration_shorthand] = ACTIONS(278),
    [sym_bar_line] = ACTIONS(278),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(276),
    [sym_thin_double_bar_line] = ACTIONS(276),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(276),
    [sym_start_of_repeated_section] = ACTIONS(276),
    [sym_end_of_repeated_section] = ACTIONS(276),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(276),
    [anon_sym_BANGtrill_BANG] = ACTIONS(276),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(276),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(276),
    [anon_sym_BANGmordent_BANG] = ACTIONS(276),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(276),
    [anon_sym_BANGroll_BANG] = ACTIONS(276),
    [anon_sym_BANGturn_BANG] = ACTIONS(276),
    [anon_sym_BANGturnx_BANG] = ACTIONS(276),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(276),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(276),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(276),
    [anon_sym_BANG_GT_BANG] = ACTIONS(276),
    [anon_sym_BANGaccent_BANG] = ACTIONS(276),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(276),
    [anon_sym_BANGfermata_BANG] = ACTIONS(276),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(276),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(276),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(276),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(276),
    [anon_sym_BANGplus_BANG] = ACTIONS(276),
    [anon_sym_BANGsnap_BANG] = ACTIONS(276),
    [anon_sym_BANGslide_BANG] = ACTIONS(276),
    [anon_sym_BANGwedge_BANG] = ACTIONS(276),
    [anon_sym_BANGupbow_BANG] = ACTIONS(276),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(276),
    [anon_sym_BANGopen_BANG] = ACTIONS(276),
    [anon_sym_BANGthumb_BANG] = ACTIONS(276),
    [anon_sym_BANGbreath_BANG] = ACTIONS(276),
    [anon_sym_BANGpppp_BANG] = ACTIONS(276),
    [anon_sym_BANGppp_BANG] = ACTIONS(276),
    [anon_sym_BANGpp_BANG] = ACTIONS(276),
    [anon_sym_BANGp_BANG] = ACTIONS(276),
    [anon_sym_BANGmp_BANG] = ACTIONS(276),
    [anon_sym_BANGmf_BANG] = ACTIONS(276),
    [anon_sym_BANGf_BANG] = ACTIONS(276),
    [anon_sym_BANGff_BANG] = ACTIONS(276),
    [anon_sym_BANGfff_BANG] = ACTIONS(276),
    [anon_sym_BANGffff_BANG] = ACTIONS(276),
    [anon_sym_BANGsfz_BANG] = ACTIONS(276),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(276),
    [anon_sym_BANGsegno_BANG] = ACTIONS(276),
    [anon_sym_BANGcoda_BANG] = ACTIONS(276),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(276),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(276),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(276),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(276),
    [anon_sym_BANGfine_BANG] = ACTIONS(276),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(276),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(276),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(276),
    [sym_parts_line] = ACTIONS(276),
    [sym_instruction] = ACTIONS(276),
    [sym_key] = ACTIONS(276),
    [sym_macros] = ACTIONS(276),
    [sym_meter] = ACTIONS(276),
    [sym_notes] = ACTIONS(276),
    [sym_remark] = ACTIONS(276),
    [sym_rhythm_line] = ACTIONS(276),
    [anon_sym_s_COLON] = ACTIONS(276),
    [sym_tempo] = ACTIONS(276),
    [sym_tune_title] = ACTIONS(276),
    [sym_unit_note_length] = ACTIONS(276),
    [anon_sym_U_COLON] = ACTIONS(276),
    [sym_voice] = ACTIONS(276),
    [anon_sym_w_COLON] = ACTIONS(276),
  },
  [49] = {
    [sym_COMMENTLINE] = ACTIONS(246),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(244),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(244),
    [aux_sym__music_content_token1] = ACTIONS(246),
    [sym_slur_open] = ACTIONS(246),
    [sym_slur_close] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(246),
    [sym_alteration] = ACTIONS(244),
    [sym_note_letter] = ACTIONS(244),
    [sym_rest] = ACTIONS(244),
    [anon_sym_Z] = ACTIONS(244),
    [anon_sym_X] = ACTIONS(244),
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
    [sym_remark] = ACTIONS(244),
    [sym_rhythm_line] = ACTIONS(244),
    [anon_sym_s_COLON] = ACTIONS(244),
    [sym_tempo] = ACTIONS(244),
    [sym_tune_title] = ACTIONS(244),
    [sym_unit_note_length] = ACTIONS(244),
    [anon_sym_U_COLON] = ACTIONS(244),
    [sym_voice] = ACTIONS(244),
    [anon_sym_w_COLON] = ACTIONS(244),
  },
  [50] = {
    [sym_COMMENTLINE] = ACTIONS(274),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(272),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(272),
    [aux_sym__music_content_token1] = ACTIONS(274),
    [sym_slur_open] = ACTIONS(274),
    [sym_slur_close] = ACTIONS(272),
    [anon_sym_LBRACK] = ACTIONS(274),
    [sym_alteration] = ACTIONS(272),
    [sym_note_letter] = ACTIONS(272),
    [sym_rest] = ACTIONS(272),
    [anon_sym_Z] = ACTIONS(272),
    [anon_sym_X] = ACTIONS(272),
    [aux_sym_grace_note_token1] = ACTIONS(272),
    [aux_sym_chord_symbol_token1] = ACTIONS(274),
    [sym_annotation] = ACTIONS(272),
    [sym_tuplet_marker] = ACTIONS(272),
    [sym_decoration_shorthand] = ACTIONS(274),
    [sym_bar_line] = ACTIONS(274),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(272),
    [sym_thin_double_bar_line] = ACTIONS(272),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(272),
    [sym_start_of_repeated_section] = ACTIONS(272),
    [sym_end_of_repeated_section] = ACTIONS(272),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(272),
    [anon_sym_BANGtrill_BANG] = ACTIONS(272),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(272),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(272),
    [anon_sym_BANGmordent_BANG] = ACTIONS(272),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(272),
    [anon_sym_BANGroll_BANG] = ACTIONS(272),
    [anon_sym_BANGturn_BANG] = ACTIONS(272),
    [anon_sym_BANGturnx_BANG] = ACTIONS(272),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(272),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(272),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(272),
    [anon_sym_BANG_GT_BANG] = ACTIONS(272),
    [anon_sym_BANGaccent_BANG] = ACTIONS(272),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(272),
    [anon_sym_BANGfermata_BANG] = ACTIONS(272),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(272),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(272),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(272),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(272),
    [anon_sym_BANGplus_BANG] = ACTIONS(272),
    [anon_sym_BANGsnap_BANG] = ACTIONS(272),
    [anon_sym_BANGslide_BANG] = ACTIONS(272),
    [anon_sym_BANGwedge_BANG] = ACTIONS(272),
    [anon_sym_BANGupbow_BANG] = ACTIONS(272),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(272),
    [anon_sym_BANGopen_BANG] = ACTIONS(272),
    [anon_sym_BANGthumb_BANG] = ACTIONS(272),
    [anon_sym_BANGbreath_BANG] = ACTIONS(272),
    [anon_sym_BANGpppp_BANG] = ACTIONS(272),
    [anon_sym_BANGppp_BANG] = ACTIONS(272),
    [anon_sym_BANGpp_BANG] = ACTIONS(272),
    [anon_sym_BANGp_BANG] = ACTIONS(272),
    [anon_sym_BANGmp_BANG] = ACTIONS(272),
    [anon_sym_BANGmf_BANG] = ACTIONS(272),
    [anon_sym_BANGf_BANG] = ACTIONS(272),
    [anon_sym_BANGff_BANG] = ACTIONS(272),
    [anon_sym_BANGfff_BANG] = ACTIONS(272),
    [anon_sym_BANGffff_BANG] = ACTIONS(272),
    [anon_sym_BANGsfz_BANG] = ACTIONS(272),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(272),
    [anon_sym_BANGsegno_BANG] = ACTIONS(272),
    [anon_sym_BANGcoda_BANG] = ACTIONS(272),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(272),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(272),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(272),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(272),
    [anon_sym_BANGfine_BANG] = ACTIONS(272),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(272),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(272),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(272),
    [sym_parts_line] = ACTIONS(272),
    [sym_instruction] = ACTIONS(272),
    [sym_key] = ACTIONS(272),
    [sym_macros] = ACTIONS(272),
    [sym_meter] = ACTIONS(272),
    [sym_notes] = ACTIONS(272),
    [sym_remark] = ACTIONS(272),
    [sym_rhythm_line] = ACTIONS(272),
    [anon_sym_s_COLON] = ACTIONS(272),
    [sym_tempo] = ACTIONS(272),
    [sym_tune_title] = ACTIONS(272),
    [sym_unit_note_length] = ACTIONS(272),
    [anon_sym_U_COLON] = ACTIONS(272),
    [sym_voice] = ACTIONS(272),
    [anon_sym_w_COLON] = ACTIONS(272),
  },
  [51] = {
    [sym_COMMENTLINE] = ACTIONS(305),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(303),
    [aux_sym__music_content_token1] = ACTIONS(303),
    [sym_slur_open] = ACTIONS(305),
    [sym_slur_close] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(305),
    [sym_alteration] = ACTIONS(303),
    [sym_note_letter] = ACTIONS(303),
    [sym_rest] = ACTIONS(303),
    [anon_sym_Z] = ACTIONS(303),
    [anon_sym_X] = ACTIONS(303),
    [aux_sym_grace_note_token1] = ACTIONS(303),
    [aux_sym_chord_symbol_token1] = ACTIONS(305),
    [sym_annotation] = ACTIONS(303),
    [sym_tuplet_marker] = ACTIONS(303),
    [sym_decoration_shorthand] = ACTIONS(305),
    [sym_bar_line] = ACTIONS(305),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(303),
    [sym_thin_double_bar_line] = ACTIONS(303),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(303),
    [sym_start_of_repeated_section] = ACTIONS(303),
    [sym_end_of_repeated_section] = ACTIONS(303),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(303),
    [anon_sym_BANGtrill_BANG] = ACTIONS(303),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(303),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(303),
    [anon_sym_BANGmordent_BANG] = ACTIONS(303),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(303),
    [anon_sym_BANGroll_BANG] = ACTIONS(303),
    [anon_sym_BANGturn_BANG] = ACTIONS(303),
    [anon_sym_BANGturnx_BANG] = ACTIONS(303),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(303),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(303),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(303),
    [anon_sym_BANG_GT_BANG] = ACTIONS(303),
    [anon_sym_BANGaccent_BANG] = ACTIONS(303),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(303),
    [anon_sym_BANGfermata_BANG] = ACTIONS(303),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(303),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(303),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(303),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(303),
    [anon_sym_BANGplus_BANG] = ACTIONS(303),
    [anon_sym_BANGsnap_BANG] = ACTIONS(303),
    [anon_sym_BANGslide_BANG] = ACTIONS(303),
    [anon_sym_BANGwedge_BANG] = ACTIONS(303),
    [anon_sym_BANGupbow_BANG] = ACTIONS(303),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(303),
    [anon_sym_BANGopen_BANG] = ACTIONS(303),
    [anon_sym_BANGthumb_BANG] = ACTIONS(303),
    [anon_sym_BANGbreath_BANG] = ACTIONS(303),
    [anon_sym_BANGpppp_BANG] = ACTIONS(303),
    [anon_sym_BANGppp_BANG] = ACTIONS(303),
    [anon_sym_BANGpp_BANG] = ACTIONS(303),
    [anon_sym_BANGp_BANG] = ACTIONS(303),
    [anon_sym_BANGmp_BANG] = ACTIONS(303),
    [anon_sym_BANGmf_BANG] = ACTIONS(303),
    [anon_sym_BANGf_BANG] = ACTIONS(303),
    [anon_sym_BANGff_BANG] = ACTIONS(303),
    [anon_sym_BANGfff_BANG] = ACTIONS(303),
    [anon_sym_BANGffff_BANG] = ACTIONS(303),
    [anon_sym_BANGsfz_BANG] = ACTIONS(303),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(303),
    [anon_sym_BANGsegno_BANG] = ACTIONS(303),
    [anon_sym_BANGcoda_BANG] = ACTIONS(303),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(303),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(303),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(303),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(303),
    [anon_sym_BANGfine_BANG] = ACTIONS(303),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(303),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(303),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(303),
    [sym_parts_line] = ACTIONS(303),
    [sym_instruction] = ACTIONS(303),
    [sym_key] = ACTIONS(303),
    [sym_macros] = ACTIONS(303),
    [sym_meter] = ACTIONS(303),
    [sym_notes] = ACTIONS(303),
    [sym_remark] = ACTIONS(303),
    [sym_rhythm_line] = ACTIONS(303),
    [anon_sym_s_COLON] = ACTIONS(303),
    [sym_tempo] = ACTIONS(303),
    [sym_tune_title] = ACTIONS(303),
    [sym_unit_note_length] = ACTIONS(303),
    [anon_sym_U_COLON] = ACTIONS(303),
    [sym_voice] = ACTIONS(303),
    [anon_sym_w_COLON] = ACTIONS(303),
  },
  [52] = {
    [sym_chord_symbol] = STATE(52),
    [sym_nth_ending_barline] = STATE(64),
    [sym_generic_bar_line] = STATE(52),
    [sym_first_repeat_bar] = STATE(64),
    [sym_second_repeat_bar] = STATE(64),
    [sym_symbol] = STATE(52),
    [aux_sym_symbol_line_repeat1] = STATE(52),
    [sym_note_skip] = ACTIONS(309),
    [aux_sym_chord_symbol_token1] = ACTIONS(312),
    [sym_annotation] = ACTIONS(309),
    [sym_bar_line] = ACTIONS(315),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(318),
    [sym_thin_double_bar_line] = ACTIONS(318),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(318),
    [sym_start_of_repeated_section] = ACTIONS(321),
    [sym_end_of_repeated_section] = ACTIONS(324),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(321),
    [anon_sym_BANGtrill_BANG] = ACTIONS(327),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(327),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(327),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(327),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(327),
    [anon_sym_BANGmordent_BANG] = ACTIONS(327),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(327),
    [anon_sym_BANGroll_BANG] = ACTIONS(327),
    [anon_sym_BANGturn_BANG] = ACTIONS(327),
    [anon_sym_BANGturnx_BANG] = ACTIONS(327),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(327),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(327),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(327),
    [anon_sym_BANG_GT_BANG] = ACTIONS(327),
    [anon_sym_BANGaccent_BANG] = ACTIONS(327),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(327),
    [anon_sym_BANGfermata_BANG] = ACTIONS(327),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(327),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(327),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(327),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(327),
    [anon_sym_BANGplus_BANG] = ACTIONS(327),
    [anon_sym_BANGsnap_BANG] = ACTIONS(327),
    [anon_sym_BANGslide_BANG] = ACTIONS(327),
    [anon_sym_BANGwedge_BANG] = ACTIONS(327),
    [anon_sym_BANGupbow_BANG] = ACTIONS(327),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(327),
    [anon_sym_BANGopen_BANG] = ACTIONS(327),
    [anon_sym_BANGthumb_BANG] = ACTIONS(327),
    [anon_sym_BANGbreath_BANG] = ACTIONS(327),
    [anon_sym_BANGpppp_BANG] = ACTIONS(327),
    [anon_sym_BANGppp_BANG] = ACTIONS(327),
    [anon_sym_BANGpp_BANG] = ACTIONS(327),
    [anon_sym_BANGp_BANG] = ACTIONS(327),
    [anon_sym_BANGmp_BANG] = ACTIONS(327),
    [anon_sym_BANGmf_BANG] = ACTIONS(327),
    [anon_sym_BANGf_BANG] = ACTIONS(327),
    [anon_sym_BANGff_BANG] = ACTIONS(327),
    [anon_sym_BANGfff_BANG] = ACTIONS(327),
    [anon_sym_BANGffff_BANG] = ACTIONS(327),
    [anon_sym_BANGsfz_BANG] = ACTIONS(327),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(327),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(327),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(327),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(327),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(327),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(327),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(327),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(327),
    [anon_sym_BANGsegno_BANG] = ACTIONS(327),
    [anon_sym_BANGcoda_BANG] = ACTIONS(327),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(327),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(327),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(327),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(327),
    [anon_sym_BANGfine_BANG] = ACTIONS(327),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(327),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(327),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(327),
    [aux_sym_body_info_line_token1] = ACTIONS(330),
  },
  [53] = {
    [sym_chord_symbol] = STATE(52),
    [sym_nth_ending_barline] = STATE(64),
    [sym_generic_bar_line] = STATE(52),
    [sym_first_repeat_bar] = STATE(64),
    [sym_second_repeat_bar] = STATE(64),
    [sym_symbol] = STATE(52),
    [aux_sym_symbol_line_repeat1] = STATE(52),
    [sym_note_skip] = ACTIONS(332),
    [aux_sym_chord_symbol_token1] = ACTIONS(334),
    [sym_annotation] = ACTIONS(332),
    [sym_bar_line] = ACTIONS(336),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(338),
    [sym_thin_double_bar_line] = ACTIONS(338),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(338),
    [sym_start_of_repeated_section] = ACTIONS(340),
    [sym_end_of_repeated_section] = ACTIONS(342),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(340),
    [anon_sym_BANGtrill_BANG] = ACTIONS(344),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(344),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(344),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(344),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(344),
    [anon_sym_BANGmordent_BANG] = ACTIONS(344),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(344),
    [anon_sym_BANGroll_BANG] = ACTIONS(344),
    [anon_sym_BANGturn_BANG] = ACTIONS(344),
    [anon_sym_BANGturnx_BANG] = ACTIONS(344),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(344),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(344),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(344),
    [anon_sym_BANG_GT_BANG] = ACTIONS(344),
    [anon_sym_BANGaccent_BANG] = ACTIONS(344),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(344),
    [anon_sym_BANGfermata_BANG] = ACTIONS(344),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(344),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(344),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(344),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(344),
    [anon_sym_BANGplus_BANG] = ACTIONS(344),
    [anon_sym_BANGsnap_BANG] = ACTIONS(344),
    [anon_sym_BANGslide_BANG] = ACTIONS(344),
    [anon_sym_BANGwedge_BANG] = ACTIONS(344),
    [anon_sym_BANGupbow_BANG] = ACTIONS(344),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(344),
    [anon_sym_BANGopen_BANG] = ACTIONS(344),
    [anon_sym_BANGthumb_BANG] = ACTIONS(344),
    [anon_sym_BANGbreath_BANG] = ACTIONS(344),
    [anon_sym_BANGpppp_BANG] = ACTIONS(344),
    [anon_sym_BANGppp_BANG] = ACTIONS(344),
    [anon_sym_BANGpp_BANG] = ACTIONS(344),
    [anon_sym_BANGp_BANG] = ACTIONS(344),
    [anon_sym_BANGmp_BANG] = ACTIONS(344),
    [anon_sym_BANGmf_BANG] = ACTIONS(344),
    [anon_sym_BANGf_BANG] = ACTIONS(344),
    [anon_sym_BANGff_BANG] = ACTIONS(344),
    [anon_sym_BANGfff_BANG] = ACTIONS(344),
    [anon_sym_BANGffff_BANG] = ACTIONS(344),
    [anon_sym_BANGsfz_BANG] = ACTIONS(344),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(344),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(344),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(344),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(344),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(344),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(344),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(344),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(344),
    [anon_sym_BANGsegno_BANG] = ACTIONS(344),
    [anon_sym_BANGcoda_BANG] = ACTIONS(344),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(344),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(344),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(344),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(344),
    [anon_sym_BANGfine_BANG] = ACTIONS(344),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(344),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(344),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(344),
    [aux_sym_body_info_line_token1] = ACTIONS(346),
  },
  [54] = {
    [sym_chord_symbol] = STATE(53),
    [sym_nth_ending_barline] = STATE(64),
    [sym_generic_bar_line] = STATE(53),
    [sym_first_repeat_bar] = STATE(64),
    [sym_second_repeat_bar] = STATE(64),
    [sym_symbol] = STATE(53),
    [aux_sym_symbol_line_repeat1] = STATE(53),
    [sym_note_skip] = ACTIONS(348),
    [aux_sym_chord_symbol_token1] = ACTIONS(334),
    [sym_annotation] = ACTIONS(348),
    [sym_bar_line] = ACTIONS(336),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(350),
    [sym_thin_double_bar_line] = ACTIONS(350),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(350),
    [sym_start_of_repeated_section] = ACTIONS(352),
    [sym_end_of_repeated_section] = ACTIONS(354),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(352),
    [anon_sym_BANGtrill_BANG] = ACTIONS(356),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(356),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(356),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(356),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(356),
    [anon_sym_BANGmordent_BANG] = ACTIONS(356),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(356),
    [anon_sym_BANGroll_BANG] = ACTIONS(356),
    [anon_sym_BANGturn_BANG] = ACTIONS(356),
    [anon_sym_BANGturnx_BANG] = ACTIONS(356),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(356),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(356),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(356),
    [anon_sym_BANG_GT_BANG] = ACTIONS(356),
    [anon_sym_BANGaccent_BANG] = ACTIONS(356),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(356),
    [anon_sym_BANGfermata_BANG] = ACTIONS(356),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(356),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(356),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(356),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(356),
    [anon_sym_BANGplus_BANG] = ACTIONS(356),
    [anon_sym_BANGsnap_BANG] = ACTIONS(356),
    [anon_sym_BANGslide_BANG] = ACTIONS(356),
    [anon_sym_BANGwedge_BANG] = ACTIONS(356),
    [anon_sym_BANGupbow_BANG] = ACTIONS(356),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(356),
    [anon_sym_BANGopen_BANG] = ACTIONS(356),
    [anon_sym_BANGthumb_BANG] = ACTIONS(356),
    [anon_sym_BANGbreath_BANG] = ACTIONS(356),
    [anon_sym_BANGpppp_BANG] = ACTIONS(356),
    [anon_sym_BANGppp_BANG] = ACTIONS(356),
    [anon_sym_BANGpp_BANG] = ACTIONS(356),
    [anon_sym_BANGp_BANG] = ACTIONS(356),
    [anon_sym_BANGmp_BANG] = ACTIONS(356),
    [anon_sym_BANGmf_BANG] = ACTIONS(356),
    [anon_sym_BANGf_BANG] = ACTIONS(356),
    [anon_sym_BANGff_BANG] = ACTIONS(356),
    [anon_sym_BANGfff_BANG] = ACTIONS(356),
    [anon_sym_BANGffff_BANG] = ACTIONS(356),
    [anon_sym_BANGsfz_BANG] = ACTIONS(356),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(356),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(356),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(356),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(356),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(356),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(356),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(356),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(356),
    [anon_sym_BANGsegno_BANG] = ACTIONS(356),
    [anon_sym_BANGcoda_BANG] = ACTIONS(356),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(356),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(356),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(356),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(356),
    [anon_sym_BANGfine_BANG] = ACTIONS(356),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(356),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(356),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(356),
  },
  [55] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(59),
    [sym_note_skip] = ACTIONS(218),
    [anon_sym_DASH] = ACTIONS(358),
    [aux_sym_chord_symbol_token1] = ACTIONS(218),
    [sym_annotation] = ACTIONS(218),
    [anon_sym_COMMA] = ACTIONS(358),
    [sym_bar_line] = ACTIONS(218),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(218),
    [sym_thin_double_bar_line] = ACTIONS(218),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(218),
    [sym_start_of_repeated_section] = ACTIONS(218),
    [sym_end_of_repeated_section] = ACTIONS(218),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(218),
    [anon_sym_BANGtrill_BANG] = ACTIONS(218),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(218),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(218),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(218),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(218),
    [anon_sym_BANGmordent_BANG] = ACTIONS(218),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(218),
    [anon_sym_BANGroll_BANG] = ACTIONS(218),
    [anon_sym_BANGturn_BANG] = ACTIONS(218),
    [anon_sym_BANGturnx_BANG] = ACTIONS(218),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(218),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(218),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(218),
    [anon_sym_BANG_GT_BANG] = ACTIONS(218),
    [anon_sym_BANGaccent_BANG] = ACTIONS(218),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(218),
    [anon_sym_BANGfermata_BANG] = ACTIONS(218),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(218),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(218),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(218),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(218),
    [anon_sym_BANGplus_BANG] = ACTIONS(218),
    [anon_sym_BANGsnap_BANG] = ACTIONS(218),
    [anon_sym_BANGslide_BANG] = ACTIONS(218),
    [anon_sym_BANGwedge_BANG] = ACTIONS(218),
    [anon_sym_BANGupbow_BANG] = ACTIONS(218),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(218),
    [anon_sym_BANGopen_BANG] = ACTIONS(218),
    [anon_sym_BANGthumb_BANG] = ACTIONS(218),
    [anon_sym_BANGbreath_BANG] = ACTIONS(218),
    [anon_sym_BANGpppp_BANG] = ACTIONS(218),
    [anon_sym_BANGppp_BANG] = ACTIONS(218),
    [anon_sym_BANGpp_BANG] = ACTIONS(218),
    [anon_sym_BANGp_BANG] = ACTIONS(218),
    [anon_sym_BANGmp_BANG] = ACTIONS(218),
    [anon_sym_BANGmf_BANG] = ACTIONS(218),
    [anon_sym_BANGf_BANG] = ACTIONS(218),
    [anon_sym_BANGff_BANG] = ACTIONS(218),
    [anon_sym_BANGfff_BANG] = ACTIONS(218),
    [anon_sym_BANGffff_BANG] = ACTIONS(218),
    [anon_sym_BANGsfz_BANG] = ACTIONS(218),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(218),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(218),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(218),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(218),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(218),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(218),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(218),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(218),
    [anon_sym_BANGsegno_BANG] = ACTIONS(218),
    [anon_sym_BANGcoda_BANG] = ACTIONS(218),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(218),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(218),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(218),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(218),
    [anon_sym_BANGfine_BANG] = ACTIONS(218),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(218),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(218),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(218),
    [aux_sym_body_info_line_token1] = ACTIONS(218),
  },
  [56] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(55),
    [sym_note_skip] = ACTIONS(228),
    [anon_sym_DASH] = ACTIONS(358),
    [aux_sym_chord_symbol_token1] = ACTIONS(228),
    [sym_annotation] = ACTIONS(228),
    [anon_sym_COMMA] = ACTIONS(358),
    [sym_bar_line] = ACTIONS(228),
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
    [aux_sym_body_info_line_token1] = ACTIONS(228),
  },
  [57] = {
    [sym_note_skip] = ACTIONS(201),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(201),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(360),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(201),
    [sym_thin_double_bar_line] = ACTIONS(201),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(201),
    [sym_start_of_repeated_section] = ACTIONS(201),
    [sym_end_of_repeated_section] = ACTIONS(201),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(201),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(362),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(364),
    [anon_sym_BANGtrill_BANG] = ACTIONS(201),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(201),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(201),
    [anon_sym_BANGmordent_BANG] = ACTIONS(201),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(201),
    [anon_sym_BANGroll_BANG] = ACTIONS(201),
    [anon_sym_BANGturn_BANG] = ACTIONS(201),
    [anon_sym_BANGturnx_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(201),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_BANG] = ACTIONS(201),
    [anon_sym_BANGaccent_BANG] = ACTIONS(201),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(201),
    [anon_sym_BANGfermata_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(201),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(201),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(201),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(201),
    [anon_sym_BANGplus_BANG] = ACTIONS(201),
    [anon_sym_BANGsnap_BANG] = ACTIONS(201),
    [anon_sym_BANGslide_BANG] = ACTIONS(201),
    [anon_sym_BANGwedge_BANG] = ACTIONS(201),
    [anon_sym_BANGupbow_BANG] = ACTIONS(201),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(201),
    [anon_sym_BANGopen_BANG] = ACTIONS(201),
    [anon_sym_BANGthumb_BANG] = ACTIONS(201),
    [anon_sym_BANGbreath_BANG] = ACTIONS(201),
    [anon_sym_BANGpppp_BANG] = ACTIONS(201),
    [anon_sym_BANGppp_BANG] = ACTIONS(201),
    [anon_sym_BANGpp_BANG] = ACTIONS(201),
    [anon_sym_BANGp_BANG] = ACTIONS(201),
    [anon_sym_BANGmp_BANG] = ACTIONS(201),
    [anon_sym_BANGmf_BANG] = ACTIONS(201),
    [anon_sym_BANGf_BANG] = ACTIONS(201),
    [anon_sym_BANGff_BANG] = ACTIONS(201),
    [anon_sym_BANGfff_BANG] = ACTIONS(201),
    [anon_sym_BANGffff_BANG] = ACTIONS(201),
    [anon_sym_BANGsfz_BANG] = ACTIONS(201),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGsegno_BANG] = ACTIONS(201),
    [anon_sym_BANGcoda_BANG] = ACTIONS(201),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(201),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(201),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(201),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(201),
    [anon_sym_BANGfine_BANG] = ACTIONS(201),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(201),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(201),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(201),
    [aux_sym_body_info_line_token1] = ACTIONS(201),
  },
  [58] = {
    [sym_note_skip] = ACTIONS(201),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(201),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(360),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(201),
    [sym_thin_double_bar_line] = ACTIONS(201),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(201),
    [sym_start_of_repeated_section] = ACTIONS(201),
    [sym_end_of_repeated_section] = ACTIONS(201),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(201),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(366),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(368),
    [anon_sym_BANGtrill_BANG] = ACTIONS(201),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(201),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(201),
    [anon_sym_BANGmordent_BANG] = ACTIONS(201),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(201),
    [anon_sym_BANGroll_BANG] = ACTIONS(201),
    [anon_sym_BANGturn_BANG] = ACTIONS(201),
    [anon_sym_BANGturnx_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(201),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_BANG] = ACTIONS(201),
    [anon_sym_BANGaccent_BANG] = ACTIONS(201),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(201),
    [anon_sym_BANGfermata_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(201),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(201),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(201),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(201),
    [anon_sym_BANGplus_BANG] = ACTIONS(201),
    [anon_sym_BANGsnap_BANG] = ACTIONS(201),
    [anon_sym_BANGslide_BANG] = ACTIONS(201),
    [anon_sym_BANGwedge_BANG] = ACTIONS(201),
    [anon_sym_BANGupbow_BANG] = ACTIONS(201),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(201),
    [anon_sym_BANGopen_BANG] = ACTIONS(201),
    [anon_sym_BANGthumb_BANG] = ACTIONS(201),
    [anon_sym_BANGbreath_BANG] = ACTIONS(201),
    [anon_sym_BANGpppp_BANG] = ACTIONS(201),
    [anon_sym_BANGppp_BANG] = ACTIONS(201),
    [anon_sym_BANGpp_BANG] = ACTIONS(201),
    [anon_sym_BANGp_BANG] = ACTIONS(201),
    [anon_sym_BANGmp_BANG] = ACTIONS(201),
    [anon_sym_BANGmf_BANG] = ACTIONS(201),
    [anon_sym_BANGf_BANG] = ACTIONS(201),
    [anon_sym_BANGff_BANG] = ACTIONS(201),
    [anon_sym_BANGfff_BANG] = ACTIONS(201),
    [anon_sym_BANGffff_BANG] = ACTIONS(201),
    [anon_sym_BANGsfz_BANG] = ACTIONS(201),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGsegno_BANG] = ACTIONS(201),
    [anon_sym_BANGcoda_BANG] = ACTIONS(201),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(201),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(201),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(201),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(201),
    [anon_sym_BANGfine_BANG] = ACTIONS(201),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(201),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(201),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(201),
    [aux_sym_body_info_line_token1] = ACTIONS(201),
  },
  [59] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(59),
    [sym_note_skip] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(370),
    [aux_sym_chord_symbol_token1] = ACTIONS(211),
    [sym_annotation] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(370),
    [sym_bar_line] = ACTIONS(211),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(211),
    [sym_thin_double_bar_line] = ACTIONS(211),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(211),
    [sym_start_of_repeated_section] = ACTIONS(211),
    [sym_end_of_repeated_section] = ACTIONS(211),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(211),
    [anon_sym_BANGtrill_BANG] = ACTIONS(211),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(211),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(211),
    [anon_sym_BANGmordent_BANG] = ACTIONS(211),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(211),
    [anon_sym_BANGroll_BANG] = ACTIONS(211),
    [anon_sym_BANGturn_BANG] = ACTIONS(211),
    [anon_sym_BANGturnx_BANG] = ACTIONS(211),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(211),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(211),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(211),
    [anon_sym_BANG_GT_BANG] = ACTIONS(211),
    [anon_sym_BANGaccent_BANG] = ACTIONS(211),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(211),
    [anon_sym_BANGfermata_BANG] = ACTIONS(211),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(211),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(211),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(211),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(211),
    [anon_sym_BANGplus_BANG] = ACTIONS(211),
    [anon_sym_BANGsnap_BANG] = ACTIONS(211),
    [anon_sym_BANGslide_BANG] = ACTIONS(211),
    [anon_sym_BANGwedge_BANG] = ACTIONS(211),
    [anon_sym_BANGupbow_BANG] = ACTIONS(211),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(211),
    [anon_sym_BANGopen_BANG] = ACTIONS(211),
    [anon_sym_BANGthumb_BANG] = ACTIONS(211),
    [anon_sym_BANGbreath_BANG] = ACTIONS(211),
    [anon_sym_BANGpppp_BANG] = ACTIONS(211),
    [anon_sym_BANGppp_BANG] = ACTIONS(211),
    [anon_sym_BANGpp_BANG] = ACTIONS(211),
    [anon_sym_BANGp_BANG] = ACTIONS(211),
    [anon_sym_BANGmp_BANG] = ACTIONS(211),
    [anon_sym_BANGmf_BANG] = ACTIONS(211),
    [anon_sym_BANGf_BANG] = ACTIONS(211),
    [anon_sym_BANGff_BANG] = ACTIONS(211),
    [anon_sym_BANGfff_BANG] = ACTIONS(211),
    [anon_sym_BANGffff_BANG] = ACTIONS(211),
    [anon_sym_BANGsfz_BANG] = ACTIONS(211),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGsegno_BANG] = ACTIONS(211),
    [anon_sym_BANGcoda_BANG] = ACTIONS(211),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(211),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(211),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(211),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(211),
    [anon_sym_BANGfine_BANG] = ACTIONS(211),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(211),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(211),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(211),
    [aux_sym_body_info_line_token1] = ACTIONS(211),
  },
  [60] = {
    [sym_note_skip] = ACTIONS(211),
    [anon_sym_DASH] = ACTIONS(211),
    [aux_sym_chord_symbol_token1] = ACTIONS(211),
    [sym_annotation] = ACTIONS(211),
    [anon_sym_COMMA] = ACTIONS(211),
    [sym_bar_line] = ACTIONS(211),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(211),
    [sym_thin_double_bar_line] = ACTIONS(211),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(211),
    [sym_start_of_repeated_section] = ACTIONS(211),
    [sym_end_of_repeated_section] = ACTIONS(211),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(211),
    [anon_sym_BANGtrill_BANG] = ACTIONS(211),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(211),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(211),
    [anon_sym_BANGmordent_BANG] = ACTIONS(211),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(211),
    [anon_sym_BANGroll_BANG] = ACTIONS(211),
    [anon_sym_BANGturn_BANG] = ACTIONS(211),
    [anon_sym_BANGturnx_BANG] = ACTIONS(211),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(211),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(211),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(211),
    [anon_sym_BANG_GT_BANG] = ACTIONS(211),
    [anon_sym_BANGaccent_BANG] = ACTIONS(211),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(211),
    [anon_sym_BANGfermata_BANG] = ACTIONS(211),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(211),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(211),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(211),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(211),
    [anon_sym_BANGplus_BANG] = ACTIONS(211),
    [anon_sym_BANGsnap_BANG] = ACTIONS(211),
    [anon_sym_BANGslide_BANG] = ACTIONS(211),
    [anon_sym_BANGwedge_BANG] = ACTIONS(211),
    [anon_sym_BANGupbow_BANG] = ACTIONS(211),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(211),
    [anon_sym_BANGopen_BANG] = ACTIONS(211),
    [anon_sym_BANGthumb_BANG] = ACTIONS(211),
    [anon_sym_BANGbreath_BANG] = ACTIONS(211),
    [anon_sym_BANGpppp_BANG] = ACTIONS(211),
    [anon_sym_BANGppp_BANG] = ACTIONS(211),
    [anon_sym_BANGpp_BANG] = ACTIONS(211),
    [anon_sym_BANGp_BANG] = ACTIONS(211),
    [anon_sym_BANGmp_BANG] = ACTIONS(211),
    [anon_sym_BANGmf_BANG] = ACTIONS(211),
    [anon_sym_BANGf_BANG] = ACTIONS(211),
    [anon_sym_BANGff_BANG] = ACTIONS(211),
    [anon_sym_BANGfff_BANG] = ACTIONS(211),
    [anon_sym_BANGffff_BANG] = ACTIONS(211),
    [anon_sym_BANGsfz_BANG] = ACTIONS(211),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(211),
    [anon_sym_BANGsegno_BANG] = ACTIONS(211),
    [anon_sym_BANGcoda_BANG] = ACTIONS(211),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(211),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(211),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(211),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(211),
    [anon_sym_BANGfine_BANG] = ACTIONS(211),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(211),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(211),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(211),
    [aux_sym_body_info_line_token1] = ACTIONS(211),
  },
  [61] = {
    [sym_note_skip] = ACTIONS(201),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(201),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(360),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(201),
    [sym_thin_double_bar_line] = ACTIONS(201),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(201),
    [sym_start_of_repeated_section] = ACTIONS(201),
    [sym_end_of_repeated_section] = ACTIONS(201),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(201),
    [anon_sym_BANGtrill_BANG] = ACTIONS(201),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(201),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(201),
    [anon_sym_BANGmordent_BANG] = ACTIONS(201),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(201),
    [anon_sym_BANGroll_BANG] = ACTIONS(201),
    [anon_sym_BANGturn_BANG] = ACTIONS(201),
    [anon_sym_BANGturnx_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(201),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_BANG] = ACTIONS(201),
    [anon_sym_BANGaccent_BANG] = ACTIONS(201),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(201),
    [anon_sym_BANGfermata_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(201),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(201),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(201),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(201),
    [anon_sym_BANGplus_BANG] = ACTIONS(201),
    [anon_sym_BANGsnap_BANG] = ACTIONS(201),
    [anon_sym_BANGslide_BANG] = ACTIONS(201),
    [anon_sym_BANGwedge_BANG] = ACTIONS(201),
    [anon_sym_BANGupbow_BANG] = ACTIONS(201),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(201),
    [anon_sym_BANGopen_BANG] = ACTIONS(201),
    [anon_sym_BANGthumb_BANG] = ACTIONS(201),
    [anon_sym_BANGbreath_BANG] = ACTIONS(201),
    [anon_sym_BANGpppp_BANG] = ACTIONS(201),
    [anon_sym_BANGppp_BANG] = ACTIONS(201),
    [anon_sym_BANGpp_BANG] = ACTIONS(201),
    [anon_sym_BANGp_BANG] = ACTIONS(201),
    [anon_sym_BANGmp_BANG] = ACTIONS(201),
    [anon_sym_BANGmf_BANG] = ACTIONS(201),
    [anon_sym_BANGf_BANG] = ACTIONS(201),
    [anon_sym_BANGff_BANG] = ACTIONS(201),
    [anon_sym_BANGfff_BANG] = ACTIONS(201),
    [anon_sym_BANGffff_BANG] = ACTIONS(201),
    [anon_sym_BANGsfz_BANG] = ACTIONS(201),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGsegno_BANG] = ACTIONS(201),
    [anon_sym_BANGcoda_BANG] = ACTIONS(201),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(201),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(201),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(201),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(201),
    [anon_sym_BANGfine_BANG] = ACTIONS(201),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(201),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(201),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(201),
    [aux_sym_body_info_line_token1] = ACTIONS(201),
  },
  [62] = {
    [sym_note_skip] = ACTIONS(274),
    [aux_sym_chord_symbol_token1] = ACTIONS(274),
    [sym_annotation] = ACTIONS(274),
    [sym_bar_line] = ACTIONS(274),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(274),
    [sym_thin_double_bar_line] = ACTIONS(274),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(274),
    [sym_start_of_repeated_section] = ACTIONS(274),
    [sym_end_of_repeated_section] = ACTIONS(274),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(274),
    [anon_sym_BANGtrill_BANG] = ACTIONS(274),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(274),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(274),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(274),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(274),
    [anon_sym_BANGmordent_BANG] = ACTIONS(274),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(274),
    [anon_sym_BANGroll_BANG] = ACTIONS(274),
    [anon_sym_BANGturn_BANG] = ACTIONS(274),
    [anon_sym_BANGturnx_BANG] = ACTIONS(274),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(274),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(274),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(274),
    [anon_sym_BANG_GT_BANG] = ACTIONS(274),
    [anon_sym_BANGaccent_BANG] = ACTIONS(274),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(274),
    [anon_sym_BANGfermata_BANG] = ACTIONS(274),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(274),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(274),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(274),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(274),
    [anon_sym_BANGplus_BANG] = ACTIONS(274),
    [anon_sym_BANGsnap_BANG] = ACTIONS(274),
    [anon_sym_BANGslide_BANG] = ACTIONS(274),
    [anon_sym_BANGwedge_BANG] = ACTIONS(274),
    [anon_sym_BANGupbow_BANG] = ACTIONS(274),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(274),
    [anon_sym_BANGopen_BANG] = ACTIONS(274),
    [anon_sym_BANGthumb_BANG] = ACTIONS(274),
    [anon_sym_BANGbreath_BANG] = ACTIONS(274),
    [anon_sym_BANGpppp_BANG] = ACTIONS(274),
    [anon_sym_BANGppp_BANG] = ACTIONS(274),
    [anon_sym_BANGpp_BANG] = ACTIONS(274),
    [anon_sym_BANGp_BANG] = ACTIONS(274),
    [anon_sym_BANGmp_BANG] = ACTIONS(274),
    [anon_sym_BANGmf_BANG] = ACTIONS(274),
    [anon_sym_BANGf_BANG] = ACTIONS(274),
    [anon_sym_BANGff_BANG] = ACTIONS(274),
    [anon_sym_BANGfff_BANG] = ACTIONS(274),
    [anon_sym_BANGffff_BANG] = ACTIONS(274),
    [anon_sym_BANGsfz_BANG] = ACTIONS(274),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(274),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(274),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(274),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(274),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(274),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(274),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(274),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(274),
    [anon_sym_BANGsegno_BANG] = ACTIONS(274),
    [anon_sym_BANGcoda_BANG] = ACTIONS(274),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(274),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(274),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(274),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(274),
    [anon_sym_BANGfine_BANG] = ACTIONS(274),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(274),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(274),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(274),
    [aux_sym_body_info_line_token1] = ACTIONS(274),
  },
  [63] = {
    [sym_note_skip] = ACTIONS(278),
    [aux_sym_chord_symbol_token1] = ACTIONS(278),
    [sym_annotation] = ACTIONS(278),
    [sym_bar_line] = ACTIONS(278),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(278),
    [sym_thin_double_bar_line] = ACTIONS(278),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(278),
    [sym_start_of_repeated_section] = ACTIONS(278),
    [sym_end_of_repeated_section] = ACTIONS(278),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(278),
    [anon_sym_BANGtrill_BANG] = ACTIONS(278),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(278),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(278),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(278),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(278),
    [anon_sym_BANGmordent_BANG] = ACTIONS(278),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(278),
    [anon_sym_BANGroll_BANG] = ACTIONS(278),
    [anon_sym_BANGturn_BANG] = ACTIONS(278),
    [anon_sym_BANGturnx_BANG] = ACTIONS(278),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(278),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(278),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(278),
    [anon_sym_BANG_GT_BANG] = ACTIONS(278),
    [anon_sym_BANGaccent_BANG] = ACTIONS(278),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(278),
    [anon_sym_BANGfermata_BANG] = ACTIONS(278),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(278),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(278),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(278),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(278),
    [anon_sym_BANGplus_BANG] = ACTIONS(278),
    [anon_sym_BANGsnap_BANG] = ACTIONS(278),
    [anon_sym_BANGslide_BANG] = ACTIONS(278),
    [anon_sym_BANGwedge_BANG] = ACTIONS(278),
    [anon_sym_BANGupbow_BANG] = ACTIONS(278),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(278),
    [anon_sym_BANGopen_BANG] = ACTIONS(278),
    [anon_sym_BANGthumb_BANG] = ACTIONS(278),
    [anon_sym_BANGbreath_BANG] = ACTIONS(278),
    [anon_sym_BANGpppp_BANG] = ACTIONS(278),
    [anon_sym_BANGppp_BANG] = ACTIONS(278),
    [anon_sym_BANGpp_BANG] = ACTIONS(278),
    [anon_sym_BANGp_BANG] = ACTIONS(278),
    [anon_sym_BANGmp_BANG] = ACTIONS(278),
    [anon_sym_BANGmf_BANG] = ACTIONS(278),
    [anon_sym_BANGf_BANG] = ACTIONS(278),
    [anon_sym_BANGff_BANG] = ACTIONS(278),
    [anon_sym_BANGfff_BANG] = ACTIONS(278),
    [anon_sym_BANGffff_BANG] = ACTIONS(278),
    [anon_sym_BANGsfz_BANG] = ACTIONS(278),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(278),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(278),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(278),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(278),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(278),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(278),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(278),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(278),
    [anon_sym_BANGsegno_BANG] = ACTIONS(278),
    [anon_sym_BANGcoda_BANG] = ACTIONS(278),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(278),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(278),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(278),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(278),
    [anon_sym_BANGfine_BANG] = ACTIONS(278),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(278),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(278),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(278),
    [aux_sym_body_info_line_token1] = ACTIONS(278),
  },
  [64] = {
    [sym_note_skip] = ACTIONS(201),
    [aux_sym_chord_symbol_token1] = ACTIONS(201),
    [sym_annotation] = ACTIONS(201),
    [sym_bar_line] = ACTIONS(201),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(201),
    [sym_thin_double_bar_line] = ACTIONS(201),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(201),
    [sym_start_of_repeated_section] = ACTIONS(201),
    [sym_end_of_repeated_section] = ACTIONS(201),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(201),
    [anon_sym_BANGtrill_BANG] = ACTIONS(201),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(201),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(201),
    [anon_sym_BANGmordent_BANG] = ACTIONS(201),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(201),
    [anon_sym_BANGroll_BANG] = ACTIONS(201),
    [anon_sym_BANGturn_BANG] = ACTIONS(201),
    [anon_sym_BANGturnx_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(201),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_BANG] = ACTIONS(201),
    [anon_sym_BANGaccent_BANG] = ACTIONS(201),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(201),
    [anon_sym_BANGfermata_BANG] = ACTIONS(201),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(201),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(201),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(201),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(201),
    [anon_sym_BANGplus_BANG] = ACTIONS(201),
    [anon_sym_BANGsnap_BANG] = ACTIONS(201),
    [anon_sym_BANGslide_BANG] = ACTIONS(201),
    [anon_sym_BANGwedge_BANG] = ACTIONS(201),
    [anon_sym_BANGupbow_BANG] = ACTIONS(201),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(201),
    [anon_sym_BANGopen_BANG] = ACTIONS(201),
    [anon_sym_BANGthumb_BANG] = ACTIONS(201),
    [anon_sym_BANGbreath_BANG] = ACTIONS(201),
    [anon_sym_BANGpppp_BANG] = ACTIONS(201),
    [anon_sym_BANGppp_BANG] = ACTIONS(201),
    [anon_sym_BANGpp_BANG] = ACTIONS(201),
    [anon_sym_BANGp_BANG] = ACTIONS(201),
    [anon_sym_BANGmp_BANG] = ACTIONS(201),
    [anon_sym_BANGmf_BANG] = ACTIONS(201),
    [anon_sym_BANGf_BANG] = ACTIONS(201),
    [anon_sym_BANGff_BANG] = ACTIONS(201),
    [anon_sym_BANGfff_BANG] = ACTIONS(201),
    [anon_sym_BANGffff_BANG] = ACTIONS(201),
    [anon_sym_BANGsfz_BANG] = ACTIONS(201),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(201),
    [anon_sym_BANGsegno_BANG] = ACTIONS(201),
    [anon_sym_BANGcoda_BANG] = ACTIONS(201),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(201),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(201),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(201),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(201),
    [anon_sym_BANGfine_BANG] = ACTIONS(201),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(201),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(201),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(201),
    [aux_sym_body_info_line_token1] = ACTIONS(201),
  },
  [65] = {
    [sym_note_skip] = ACTIONS(289),
    [aux_sym_chord_symbol_token1] = ACTIONS(289),
    [sym_annotation] = ACTIONS(289),
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
    [aux_sym_body_info_line_token1] = ACTIONS(289),
  },
  [66] = {
    [sym_note_skip] = ACTIONS(373),
    [aux_sym_chord_symbol_token1] = ACTIONS(373),
    [sym_annotation] = ACTIONS(373),
    [sym_bar_line] = ACTIONS(373),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(373),
    [sym_thin_double_bar_line] = ACTIONS(373),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(373),
    [sym_start_of_repeated_section] = ACTIONS(373),
    [sym_end_of_repeated_section] = ACTIONS(373),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(373),
    [anon_sym_BANGtrill_BANG] = ACTIONS(373),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(373),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(373),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(373),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(373),
    [anon_sym_BANGmordent_BANG] = ACTIONS(373),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(373),
    [anon_sym_BANGroll_BANG] = ACTIONS(373),
    [anon_sym_BANGturn_BANG] = ACTIONS(373),
    [anon_sym_BANGturnx_BANG] = ACTIONS(373),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(373),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(373),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(373),
    [anon_sym_BANG_GT_BANG] = ACTIONS(373),
    [anon_sym_BANGaccent_BANG] = ACTIONS(373),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(373),
    [anon_sym_BANGfermata_BANG] = ACTIONS(373),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(373),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(373),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(373),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(373),
    [anon_sym_BANGplus_BANG] = ACTIONS(373),
    [anon_sym_BANGsnap_BANG] = ACTIONS(373),
    [anon_sym_BANGslide_BANG] = ACTIONS(373),
    [anon_sym_BANGwedge_BANG] = ACTIONS(373),
    [anon_sym_BANGupbow_BANG] = ACTIONS(373),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(373),
    [anon_sym_BANGopen_BANG] = ACTIONS(373),
    [anon_sym_BANGthumb_BANG] = ACTIONS(373),
    [anon_sym_BANGbreath_BANG] = ACTIONS(373),
    [anon_sym_BANGpppp_BANG] = ACTIONS(373),
    [anon_sym_BANGppp_BANG] = ACTIONS(373),
    [anon_sym_BANGpp_BANG] = ACTIONS(373),
    [anon_sym_BANGp_BANG] = ACTIONS(373),
    [anon_sym_BANGmp_BANG] = ACTIONS(373),
    [anon_sym_BANGmf_BANG] = ACTIONS(373),
    [anon_sym_BANGf_BANG] = ACTIONS(373),
    [anon_sym_BANGff_BANG] = ACTIONS(373),
    [anon_sym_BANGfff_BANG] = ACTIONS(373),
    [anon_sym_BANGffff_BANG] = ACTIONS(373),
    [anon_sym_BANGsfz_BANG] = ACTIONS(373),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(373),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(373),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(373),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(373),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(373),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(373),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(373),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(373),
    [anon_sym_BANGsegno_BANG] = ACTIONS(373),
    [anon_sym_BANGcoda_BANG] = ACTIONS(373),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(373),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(373),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(373),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(373),
    [anon_sym_BANGfine_BANG] = ACTIONS(373),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(373),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(373),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(373),
    [aux_sym_body_info_line_token1] = ACTIONS(373),
  },
  [67] = {
    [sym_note_skip] = ACTIONS(375),
    [aux_sym_chord_symbol_token1] = ACTIONS(375),
    [sym_annotation] = ACTIONS(375),
    [sym_bar_line] = ACTIONS(375),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(375),
    [sym_thin_double_bar_line] = ACTIONS(375),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(375),
    [sym_start_of_repeated_section] = ACTIONS(375),
    [sym_end_of_repeated_section] = ACTIONS(375),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(375),
    [anon_sym_BANGtrill_BANG] = ACTIONS(375),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(375),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(375),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(375),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(375),
    [anon_sym_BANGmordent_BANG] = ACTIONS(375),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(375),
    [anon_sym_BANGroll_BANG] = ACTIONS(375),
    [anon_sym_BANGturn_BANG] = ACTIONS(375),
    [anon_sym_BANGturnx_BANG] = ACTIONS(375),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(375),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(375),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(375),
    [anon_sym_BANG_GT_BANG] = ACTIONS(375),
    [anon_sym_BANGaccent_BANG] = ACTIONS(375),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(375),
    [anon_sym_BANGfermata_BANG] = ACTIONS(375),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(375),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(375),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(375),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(375),
    [anon_sym_BANGplus_BANG] = ACTIONS(375),
    [anon_sym_BANGsnap_BANG] = ACTIONS(375),
    [anon_sym_BANGslide_BANG] = ACTIONS(375),
    [anon_sym_BANGwedge_BANG] = ACTIONS(375),
    [anon_sym_BANGupbow_BANG] = ACTIONS(375),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(375),
    [anon_sym_BANGopen_BANG] = ACTIONS(375),
    [anon_sym_BANGthumb_BANG] = ACTIONS(375),
    [anon_sym_BANGbreath_BANG] = ACTIONS(375),
    [anon_sym_BANGpppp_BANG] = ACTIONS(375),
    [anon_sym_BANGppp_BANG] = ACTIONS(375),
    [anon_sym_BANGpp_BANG] = ACTIONS(375),
    [anon_sym_BANGp_BANG] = ACTIONS(375),
    [anon_sym_BANGmp_BANG] = ACTIONS(375),
    [anon_sym_BANGmf_BANG] = ACTIONS(375),
    [anon_sym_BANGf_BANG] = ACTIONS(375),
    [anon_sym_BANGff_BANG] = ACTIONS(375),
    [anon_sym_BANGfff_BANG] = ACTIONS(375),
    [anon_sym_BANGffff_BANG] = ACTIONS(375),
    [anon_sym_BANGsfz_BANG] = ACTIONS(375),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(375),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(375),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(375),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(375),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(375),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(375),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(375),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(375),
    [anon_sym_BANGsegno_BANG] = ACTIONS(375),
    [anon_sym_BANGcoda_BANG] = ACTIONS(375),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(375),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(375),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(375),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(375),
    [anon_sym_BANGfine_BANG] = ACTIONS(375),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(375),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(375),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(375),
    [aux_sym_body_info_line_token1] = ACTIONS(375),
  },
  [68] = {
    [sym_note_skip] = ACTIONS(377),
    [aux_sym_chord_symbol_token1] = ACTIONS(377),
    [sym_annotation] = ACTIONS(377),
    [sym_bar_line] = ACTIONS(377),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(377),
    [sym_thin_double_bar_line] = ACTIONS(377),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(377),
    [sym_start_of_repeated_section] = ACTIONS(377),
    [sym_end_of_repeated_section] = ACTIONS(377),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(377),
    [anon_sym_BANGtrill_BANG] = ACTIONS(377),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(377),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(377),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(377),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(377),
    [anon_sym_BANGmordent_BANG] = ACTIONS(377),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(377),
    [anon_sym_BANGroll_BANG] = ACTIONS(377),
    [anon_sym_BANGturn_BANG] = ACTIONS(377),
    [anon_sym_BANGturnx_BANG] = ACTIONS(377),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(377),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(377),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(377),
    [anon_sym_BANG_GT_BANG] = ACTIONS(377),
    [anon_sym_BANGaccent_BANG] = ACTIONS(377),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(377),
    [anon_sym_BANGfermata_BANG] = ACTIONS(377),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(377),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(377),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(377),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(377),
    [anon_sym_BANGplus_BANG] = ACTIONS(377),
    [anon_sym_BANGsnap_BANG] = ACTIONS(377),
    [anon_sym_BANGslide_BANG] = ACTIONS(377),
    [anon_sym_BANGwedge_BANG] = ACTIONS(377),
    [anon_sym_BANGupbow_BANG] = ACTIONS(377),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(377),
    [anon_sym_BANGopen_BANG] = ACTIONS(377),
    [anon_sym_BANGthumb_BANG] = ACTIONS(377),
    [anon_sym_BANGbreath_BANG] = ACTIONS(377),
    [anon_sym_BANGpppp_BANG] = ACTIONS(377),
    [anon_sym_BANGppp_BANG] = ACTIONS(377),
    [anon_sym_BANGpp_BANG] = ACTIONS(377),
    [anon_sym_BANGp_BANG] = ACTIONS(377),
    [anon_sym_BANGmp_BANG] = ACTIONS(377),
    [anon_sym_BANGmf_BANG] = ACTIONS(377),
    [anon_sym_BANGf_BANG] = ACTIONS(377),
    [anon_sym_BANGff_BANG] = ACTIONS(377),
    [anon_sym_BANGfff_BANG] = ACTIONS(377),
    [anon_sym_BANGffff_BANG] = ACTIONS(377),
    [anon_sym_BANGsfz_BANG] = ACTIONS(377),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(377),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(377),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(377),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(377),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(377),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(377),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(377),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(377),
    [anon_sym_BANGsegno_BANG] = ACTIONS(377),
    [anon_sym_BANGcoda_BANG] = ACTIONS(377),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(377),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(377),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(377),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(377),
    [anon_sym_BANGfine_BANG] = ACTIONS(377),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(377),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(377),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(377),
    [aux_sym_body_info_line_token1] = ACTIONS(377),
  },
  [69] = {
    [sym_note_skip] = ACTIONS(250),
    [aux_sym_chord_symbol_token1] = ACTIONS(250),
    [sym_annotation] = ACTIONS(250),
    [sym_bar_line] = ACTIONS(250),
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
    [aux_sym_body_info_line_token1] = ACTIONS(250),
  },
  [70] = {
    [sym_note_skip] = ACTIONS(236),
    [aux_sym_chord_symbol_token1] = ACTIONS(236),
    [sym_annotation] = ACTIONS(236),
    [sym_bar_line] = ACTIONS(236),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(236),
    [sym_thin_double_bar_line] = ACTIONS(236),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(236),
    [sym_start_of_repeated_section] = ACTIONS(236),
    [sym_end_of_repeated_section] = ACTIONS(236),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(236),
    [anon_sym_BANGtrill_BANG] = ACTIONS(236),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(236),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(236),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(236),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(236),
    [anon_sym_BANGmordent_BANG] = ACTIONS(236),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(236),
    [anon_sym_BANGroll_BANG] = ACTIONS(236),
    [anon_sym_BANGturn_BANG] = ACTIONS(236),
    [anon_sym_BANGturnx_BANG] = ACTIONS(236),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(236),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(236),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(236),
    [anon_sym_BANG_GT_BANG] = ACTIONS(236),
    [anon_sym_BANGaccent_BANG] = ACTIONS(236),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(236),
    [anon_sym_BANGfermata_BANG] = ACTIONS(236),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(236),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(236),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(236),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(236),
    [anon_sym_BANGplus_BANG] = ACTIONS(236),
    [anon_sym_BANGsnap_BANG] = ACTIONS(236),
    [anon_sym_BANGslide_BANG] = ACTIONS(236),
    [anon_sym_BANGwedge_BANG] = ACTIONS(236),
    [anon_sym_BANGupbow_BANG] = ACTIONS(236),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(236),
    [anon_sym_BANGopen_BANG] = ACTIONS(236),
    [anon_sym_BANGthumb_BANG] = ACTIONS(236),
    [anon_sym_BANGbreath_BANG] = ACTIONS(236),
    [anon_sym_BANGpppp_BANG] = ACTIONS(236),
    [anon_sym_BANGppp_BANG] = ACTIONS(236),
    [anon_sym_BANGpp_BANG] = ACTIONS(236),
    [anon_sym_BANGp_BANG] = ACTIONS(236),
    [anon_sym_BANGmp_BANG] = ACTIONS(236),
    [anon_sym_BANGmf_BANG] = ACTIONS(236),
    [anon_sym_BANGf_BANG] = ACTIONS(236),
    [anon_sym_BANGff_BANG] = ACTIONS(236),
    [anon_sym_BANGfff_BANG] = ACTIONS(236),
    [anon_sym_BANGffff_BANG] = ACTIONS(236),
    [anon_sym_BANGsfz_BANG] = ACTIONS(236),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(236),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(236),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(236),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(236),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(236),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(236),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(236),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(236),
    [anon_sym_BANGsegno_BANG] = ACTIONS(236),
    [anon_sym_BANGcoda_BANG] = ACTIONS(236),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(236),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(236),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(236),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(236),
    [anon_sym_BANGfine_BANG] = ACTIONS(236),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(236),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(236),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(236),
    [aux_sym_body_info_line_token1] = ACTIONS(236),
  },
  [71] = {
    [sym_note_skip] = ACTIONS(264),
    [aux_sym_chord_symbol_token1] = ACTIONS(264),
    [sym_annotation] = ACTIONS(264),
    [sym_bar_line] = ACTIONS(264),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(264),
    [sym_thin_double_bar_line] = ACTIONS(264),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(264),
    [sym_start_of_repeated_section] = ACTIONS(264),
    [sym_end_of_repeated_section] = ACTIONS(264),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(264),
    [anon_sym_BANGtrill_BANG] = ACTIONS(264),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(264),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(264),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(264),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(264),
    [anon_sym_BANGmordent_BANG] = ACTIONS(264),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(264),
    [anon_sym_BANGroll_BANG] = ACTIONS(264),
    [anon_sym_BANGturn_BANG] = ACTIONS(264),
    [anon_sym_BANGturnx_BANG] = ACTIONS(264),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(264),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(264),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(264),
    [anon_sym_BANG_GT_BANG] = ACTIONS(264),
    [anon_sym_BANGaccent_BANG] = ACTIONS(264),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(264),
    [anon_sym_BANGfermata_BANG] = ACTIONS(264),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(264),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(264),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(264),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(264),
    [anon_sym_BANGplus_BANG] = ACTIONS(264),
    [anon_sym_BANGsnap_BANG] = ACTIONS(264),
    [anon_sym_BANGslide_BANG] = ACTIONS(264),
    [anon_sym_BANGwedge_BANG] = ACTIONS(264),
    [anon_sym_BANGupbow_BANG] = ACTIONS(264),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(264),
    [anon_sym_BANGopen_BANG] = ACTIONS(264),
    [anon_sym_BANGthumb_BANG] = ACTIONS(264),
    [anon_sym_BANGbreath_BANG] = ACTIONS(264),
    [anon_sym_BANGpppp_BANG] = ACTIONS(264),
    [anon_sym_BANGppp_BANG] = ACTIONS(264),
    [anon_sym_BANGpp_BANG] = ACTIONS(264),
    [anon_sym_BANGp_BANG] = ACTIONS(264),
    [anon_sym_BANGmp_BANG] = ACTIONS(264),
    [anon_sym_BANGmf_BANG] = ACTIONS(264),
    [anon_sym_BANGf_BANG] = ACTIONS(264),
    [anon_sym_BANGff_BANG] = ACTIONS(264),
    [anon_sym_BANGfff_BANG] = ACTIONS(264),
    [anon_sym_BANGffff_BANG] = ACTIONS(264),
    [anon_sym_BANGsfz_BANG] = ACTIONS(264),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(264),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(264),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(264),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(264),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(264),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(264),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(264),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(264),
    [anon_sym_BANGsegno_BANG] = ACTIONS(264),
    [anon_sym_BANGcoda_BANG] = ACTIONS(264),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(264),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(264),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(264),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(264),
    [anon_sym_BANGfine_BANG] = ACTIONS(264),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(264),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(264),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(264),
    [aux_sym_body_info_line_token1] = ACTIONS(264),
  },
  [72] = {
    [sym_note_skip] = ACTIONS(379),
    [aux_sym_chord_symbol_token1] = ACTIONS(379),
    [sym_annotation] = ACTIONS(379),
    [sym_bar_line] = ACTIONS(379),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(379),
    [sym_thin_double_bar_line] = ACTIONS(379),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(379),
    [sym_start_of_repeated_section] = ACTIONS(379),
    [sym_end_of_repeated_section] = ACTIONS(379),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(379),
    [anon_sym_BANGtrill_BANG] = ACTIONS(379),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(379),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(379),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(379),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(379),
    [anon_sym_BANGmordent_BANG] = ACTIONS(379),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(379),
    [anon_sym_BANGroll_BANG] = ACTIONS(379),
    [anon_sym_BANGturn_BANG] = ACTIONS(379),
    [anon_sym_BANGturnx_BANG] = ACTIONS(379),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(379),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(379),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(379),
    [anon_sym_BANG_GT_BANG] = ACTIONS(379),
    [anon_sym_BANGaccent_BANG] = ACTIONS(379),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(379),
    [anon_sym_BANGfermata_BANG] = ACTIONS(379),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(379),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(379),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(379),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(379),
    [anon_sym_BANGplus_BANG] = ACTIONS(379),
    [anon_sym_BANGsnap_BANG] = ACTIONS(379),
    [anon_sym_BANGslide_BANG] = ACTIONS(379),
    [anon_sym_BANGwedge_BANG] = ACTIONS(379),
    [anon_sym_BANGupbow_BANG] = ACTIONS(379),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(379),
    [anon_sym_BANGopen_BANG] = ACTIONS(379),
    [anon_sym_BANGthumb_BANG] = ACTIONS(379),
    [anon_sym_BANGbreath_BANG] = ACTIONS(379),
    [anon_sym_BANGpppp_BANG] = ACTIONS(379),
    [anon_sym_BANGppp_BANG] = ACTIONS(379),
    [anon_sym_BANGpp_BANG] = ACTIONS(379),
    [anon_sym_BANGp_BANG] = ACTIONS(379),
    [anon_sym_BANGmp_BANG] = ACTIONS(379),
    [anon_sym_BANGmf_BANG] = ACTIONS(379),
    [anon_sym_BANGf_BANG] = ACTIONS(379),
    [anon_sym_BANGff_BANG] = ACTIONS(379),
    [anon_sym_BANGfff_BANG] = ACTIONS(379),
    [anon_sym_BANGffff_BANG] = ACTIONS(379),
    [anon_sym_BANGsfz_BANG] = ACTIONS(379),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(379),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(379),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(379),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(379),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(379),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(379),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(379),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(379),
    [anon_sym_BANGsegno_BANG] = ACTIONS(379),
    [anon_sym_BANGcoda_BANG] = ACTIONS(379),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(379),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(379),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(379),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(379),
    [anon_sym_BANGfine_BANG] = ACTIONS(379),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(379),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(379),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(379),
    [aux_sym_body_info_line_token1] = ACTIONS(379),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(250), 1,
      sym_symbol,
    ACTIONS(381), 59,
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
    STATE(319), 1,
      sym_symbol,
    ACTIONS(383), 59,
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
  [130] = 2,
    STATE(299), 1,
      sym_symbol,
    ACTIONS(385), 59,
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
  [195] = 9,
    ACTIONS(13), 1,
      anon_sym_X_COLON,
    ACTIONS(15), 1,
      anon_sym_s_COLON,
    ACTIONS(136), 1,
      anon_sym_U_COLON,
    ACTIONS(167), 1,
      anon_sym_PERCENTabc_DASH,
    STATE(8), 1,
      sym_tune_header,
    STATE(228), 1,
      sym_tune,
    STATE(6), 2,
      sym_tune_header_info_line,
      aux_sym_tune_header_repeat1,
    STATE(312), 4,
      sym_abc_version,
      sym_reference_number,
      sym_symbol_line,
      sym_user_defined,
    ACTIONS(7), 23,
      sym_parts_line,
      sym_area,
      sym_book,
      sym_composer,
      sym_discography,
      sym_file,
      sym_group,
      sym_history,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_origin,
      sym_remark,
      sym_rhythm_line,
      sym_source,
      sym_tempo,
      sym_transcription,
      sym_tune_title,
      sym_unit_note_length,
      sym_voice,
      sym_words_postbody,
  [249] = 9,
    ACTIONS(13), 1,
      anon_sym_X_COLON,
    ACTIONS(15), 1,
      anon_sym_s_COLON,
    ACTIONS(136), 1,
      anon_sym_U_COLON,
    ACTIONS(167), 1,
      anon_sym_PERCENTabc_DASH,
    STATE(8), 1,
      sym_tune_header,
    STATE(266), 1,
      sym_tune,
    STATE(6), 2,
      sym_tune_header_info_line,
      aux_sym_tune_header_repeat1,
    STATE(312), 4,
      sym_abc_version,
      sym_reference_number,
      sym_symbol_line,
      sym_user_defined,
    ACTIONS(7), 23,
      sym_parts_line,
      sym_area,
      sym_book,
      sym_composer,
      sym_discography,
      sym_file,
      sym_group,
      sym_history,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_origin,
      sym_remark,
      sym_rhythm_line,
      sym_source,
      sym_tempo,
      sym_transcription,
      sym_tune_title,
      sym_unit_note_length,
      sym_voice,
      sym_words_postbody,
  [303] = 8,
    ACTIONS(387), 1,
      sym__NEWLINE,
    ACTIONS(389), 1,
      sym_COMMENTLINE,
    ACTIONS(392), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(395), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(401), 1,
      anon_sym_U_COLON,
    STATE(316), 2,
      sym_abc_version,
      sym_user_defined,
    STATE(78), 3,
      sym_stylesheet_directives,
      sym_file_header_info_line,
      aux_sym_file_header_repeat1,
    ACTIONS(398), 17,
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
  [347] = 1,
    ACTIONS(404), 27,
      sym_parts_line,
      anon_sym_PERCENTabc_DASH,
      sym_area,
      sym_book,
      sym_composer,
      sym_discography,
      sym_file,
      sym_group,
      sym_history,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_origin,
      anon_sym_X_COLON,
      sym_remark,
      sym_rhythm_line,
      sym_source,
      anon_sym_s_COLON,
      sym_tempo,
      sym_transcription,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      sym_words_postbody,
  [377] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(406), 1,
      sym__NEWLINE,
    ACTIONS(408), 1,
      sym_COMMENTLINE,
    ACTIONS(410), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(414), 1,
      anon_sym_U_COLON,
    STATE(316), 2,
      sym_abc_version,
      sym_user_defined,
    STATE(78), 3,
      sym_stylesheet_directives,
      sym_file_header_info_line,
      aux_sym_file_header_repeat1,
    ACTIONS(412), 17,
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
  [421] = 2,
    ACTIONS(301), 2,
      sym_COMMENTLINE,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(299), 20,
      sym__NEWLINE,
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
      sym_remark,
      sym_rhythm_line,
      sym_source,
      sym_transcription,
      sym_unit_note_length,
      anon_sym_U_COLON,
  [448] = 2,
    ACTIONS(293), 2,
      sym_COMMENTLINE,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(291), 20,
      sym__NEWLINE,
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
      sym_remark,
      sym_rhythm_line,
      sym_source,
      sym_transcription,
      sym_unit_note_length,
      anon_sym_U_COLON,
  [475] = 2,
    ACTIONS(418), 2,
      sym_COMMENTLINE,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(416), 20,
      sym__NEWLINE,
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
      sym_remark,
      sym_rhythm_line,
      sym_source,
      sym_transcription,
      sym_unit_note_length,
      anon_sym_U_COLON,
  [502] = 16,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(420), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(422), 1,
      aux_sym__MUSIC_CODE_token1,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(432), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(434), 1,
      sym_tuplet_marker,
    STATE(133), 1,
      sym__pitch,
    STATE(137), 1,
      sym_note,
    STATE(179), 1,
      sym_chord_symbol,
    STATE(199), 1,
      sym_decoration,
    STATE(102), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(88), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [555] = 16,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(420), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(432), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(434), 1,
      sym_tuplet_marker,
    ACTIONS(436), 1,
      aux_sym__MUSIC_CODE_token1,
    STATE(133), 1,
      sym__pitch,
    STATE(137), 1,
      sym_note,
    STATE(179), 1,
      sym_chord_symbol,
    STATE(199), 1,
      sym_decoration,
    STATE(102), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(86), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [608] = 16,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(420), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(432), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(434), 1,
      sym_tuplet_marker,
    ACTIONS(438), 1,
      aux_sym_beam_token1,
    STATE(133), 1,
      sym__pitch,
    STATE(137), 1,
      sym_note,
    STATE(179), 1,
      sym_chord_symbol,
    STATE(199), 1,
      sym_decoration,
    STATE(102), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(87), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [661] = 16,
    ACTIONS(440), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(443), 1,
      aux_sym_beam_token1,
    ACTIONS(445), 1,
      anon_sym_LBRACK,
    ACTIONS(448), 1,
      sym_alteration,
    ACTIONS(451), 1,
      sym_note_letter,
    ACTIONS(454), 1,
      sym_rest,
    ACTIONS(457), 1,
      aux_sym_grace_note_token1,
    ACTIONS(460), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(463), 1,
      sym_tuplet_marker,
    ACTIONS(466), 1,
      sym_decoration_shorthand,
    STATE(133), 1,
      sym__pitch,
    STATE(137), 1,
      sym_note,
    STATE(179), 1,
      sym_chord_symbol,
    STATE(199), 1,
      sym_decoration,
    STATE(102), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(87), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [714] = 16,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(420), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(432), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(434), 1,
      sym_tuplet_marker,
    ACTIONS(469), 1,
      aux_sym_beam_token1,
    STATE(133), 1,
      sym__pitch,
    STATE(137), 1,
      sym_note,
    STATE(179), 1,
      sym_chord_symbol,
    STATE(199), 1,
      sym_decoration,
    STATE(102), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(87), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [767] = 14,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(120), 1,
      sym_tuplet_marker,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(432), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(471), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(134), 1,
      sym_note,
    STATE(181), 1,
      sym_chord_symbol,
    STATE(208), 1,
      sym_decoration,
    STATE(98), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(277), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [813] = 14,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(120), 1,
      sym_tuplet_marker,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(432), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(471), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(134), 1,
      sym_note,
    STATE(181), 1,
      sym_chord_symbol,
    STATE(208), 1,
      sym_decoration,
    STATE(98), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(287), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [859] = 14,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(424), 1,
      anon_sym_LBRACK,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(432), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(434), 1,
      sym_tuplet_marker,
    STATE(133), 1,
      sym__pitch,
    STATE(137), 1,
      sym_note,
    STATE(179), 1,
      sym_chord_symbol,
    STATE(199), 1,
      sym_decoration,
    STATE(102), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(176), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [905] = 3,
    ACTIONS(475), 1,
      sym_octave,
    STATE(94), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(473), 14,
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
  [928] = 3,
    ACTIONS(479), 1,
      sym_octave,
    STATE(93), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(477), 14,
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
  [951] = 3,
    ACTIONS(484), 1,
      sym_octave,
    STATE(93), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(482), 14,
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
  [974] = 3,
    ACTIONS(484), 1,
      sym_octave,
    STATE(93), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(486), 14,
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
  [997] = 3,
    ACTIONS(488), 1,
      sym_octave,
    STATE(95), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(482), 14,
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
  [1020] = 7,
    ACTIONS(492), 1,
      anon_sym_DASH,
    ACTIONS(494), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(496), 1,
      aux_sym_verse_number_token1,
    ACTIONS(498), 2,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
    STATE(105), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(178), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(490), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [1049] = 13,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(432), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(500), 1,
      anon_sym_LBRACK,
    ACTIONS(502), 1,
      sym_tuplet_marker,
    STATE(110), 1,
      sym__pitch,
    STATE(143), 1,
      sym_note,
    STATE(185), 1,
      sym_chord_symbol,
    STATE(211), 1,
      sym_decoration,
    STATE(165), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1090] = 3,
    ACTIONS(504), 1,
      sym_octave,
    STATE(101), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(482), 12,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1111] = 3,
    ACTIONS(506), 1,
      sym_octave,
    STATE(104), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(482), 12,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1132] = 3,
    ACTIONS(508), 1,
      sym_octave,
    STATE(101), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(477), 12,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1153] = 13,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(432), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
    ACTIONS(513), 1,
      sym_tuplet_marker,
    STATE(133), 1,
      sym__pitch,
    STATE(145), 1,
      sym_note,
    STATE(183), 1,
      sym_chord_symbol,
    STATE(200), 1,
      sym_decoration,
    STATE(165), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1194] = 3,
    ACTIONS(515), 1,
      sym_octave,
    STATE(99), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(473), 12,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1215] = 3,
    ACTIONS(504), 1,
      sym_octave,
    STATE(101), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(486), 12,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1236] = 7,
    ACTIONS(520), 1,
      anon_sym_DASH,
    ACTIONS(523), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(526), 1,
      aux_sym_verse_number_token1,
    ACTIONS(529), 2,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
    STATE(105), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(178), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(517), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [1265] = 11,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(531), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(117), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1301] = 11,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(533), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(117), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1337] = 11,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(535), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(117), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1373] = 8,
    ACTIONS(537), 1,
      sym__NEWLINE,
    ACTIONS(542), 1,
      anon_sym_DASH,
    ACTIONS(545), 1,
      sym_UNDERSCORE,
    ACTIONS(548), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(551), 1,
      aux_sym_verse_number_token1,
    STATE(109), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(539), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(193), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1403] = 2,
    ACTIONS(556), 1,
      sym_rhythm,
    ACTIONS(554), 12,
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
  [1421] = 11,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(558), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(117), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1457] = 11,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(117), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1493] = 11,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(117), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1529] = 11,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(117), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1565] = 11,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(566), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(117), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1601] = 8,
    ACTIONS(568), 1,
      sym__NEWLINE,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(574), 1,
      sym_UNDERSCORE,
    ACTIONS(576), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(578), 1,
      aux_sym_verse_number_token1,
    STATE(109), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(570), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(193), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1631] = 11,
    ACTIONS(580), 1,
      anon_sym_RBRACK,
    ACTIONS(582), 1,
      sym_alteration,
    ACTIONS(585), 1,
      sym_note_letter,
    ACTIONS(588), 1,
      sym_rest,
    ACTIONS(591), 1,
      aux_sym_grace_note_token1,
    ACTIONS(594), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(117), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1667] = 11,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(597), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(117), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1703] = 11,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(599), 1,
      anon_sym_RBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(117), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1739] = 7,
    ACTIONS(490), 1,
      sym_UNDERSCORE,
    ACTIONS(494), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(496), 1,
      aux_sym_verse_number_token1,
    ACTIONS(603), 1,
      anon_sym_DASH,
    STATE(97), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(601), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(178), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1766] = 1,
    ACTIONS(605), 12,
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
  [1781] = 10,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(115), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1814] = 7,
    ACTIONS(572), 1,
      anon_sym_DASH,
    ACTIONS(574), 1,
      sym_UNDERSCORE,
    ACTIONS(576), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(578), 1,
      aux_sym_verse_number_token1,
    STATE(116), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(570), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(193), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1841] = 10,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(108), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1874] = 10,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(107), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1907] = 10,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(112), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1940] = 10,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(118), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1973] = 10,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(114), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2006] = 10,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(113), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2039] = 10,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(106), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2072] = 10,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(119), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2105] = 10,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(201), 1,
      sym_note,
    STATE(217), 1,
      sym_decoration,
    STATE(111), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(157), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2138] = 2,
    ACTIONS(607), 1,
      sym_rhythm,
    ACTIONS(554), 11,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2155] = 2,
    ACTIONS(611), 1,
      aux_sym_note_construct_token1,
    ACTIONS(609), 10,
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
  [2171] = 2,
    ACTIONS(615), 1,
      sym_rhythm,
    ACTIONS(613), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2187] = 2,
    ACTIONS(619), 1,
      sym_rhythm,
    ACTIONS(617), 10,
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
  [2203] = 2,
    ACTIONS(621), 1,
      aux_sym_note_construct_token1,
    ACTIONS(609), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2219] = 2,
    ACTIONS(623), 1,
      sym_rhythm,
    ACTIONS(617), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2235] = 2,
    ACTIONS(627), 1,
      aux_sym_note_construct_token1,
    ACTIONS(625), 10,
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
  [2251] = 2,
    ACTIONS(629), 1,
      aux_sym_note_construct_token1,
    ACTIONS(625), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2267] = 2,
    ACTIONS(633), 1,
      sym_rhythm,
    ACTIONS(631), 10,
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
  [2283] = 2,
    ACTIONS(637), 1,
      sym_rhythm,
    ACTIONS(635), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2299] = 2,
    ACTIONS(641), 1,
      aux_sym_note_construct_token1,
    ACTIONS(639), 10,
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
  [2315] = 2,
    ACTIONS(643), 1,
      sym_rhythm,
    ACTIONS(631), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2331] = 2,
    ACTIONS(645), 1,
      aux_sym_note_construct_token1,
    ACTIONS(639), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2347] = 2,
    ACTIONS(649), 1,
      sym_rhythm,
    ACTIONS(647), 10,
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
  [2363] = 2,
    ACTIONS(653), 1,
      aux_sym_note_construct_token1,
    ACTIONS(651), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2379] = 2,
    ACTIONS(655), 1,
      sym_rhythm,
    ACTIONS(635), 10,
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
  [2395] = 1,
    ACTIONS(605), 11,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2409] = 2,
    ACTIONS(657), 1,
      sym_rhythm,
    ACTIONS(647), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2425] = 2,
    ACTIONS(661), 1,
      aux_sym_note_construct_token1,
    ACTIONS(659), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2441] = 2,
    ACTIONS(663), 1,
      aux_sym_note_construct_token1,
    ACTIONS(659), 10,
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
  [2457] = 2,
    ACTIONS(665), 1,
      aux_sym_note_construct_token1,
    ACTIONS(651), 10,
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
  [2473] = 2,
    ACTIONS(667), 1,
      sym_rhythm,
    ACTIONS(613), 10,
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
  [2489] = 1,
    ACTIONS(669), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2502] = 1,
    ACTIONS(669), 10,
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
  [2515] = 9,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(116), 1,
      aux_sym_grace_note_token1,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    STATE(110), 1,
      sym__pitch,
    STATE(212), 1,
      sym_note,
    STATE(218), 1,
      sym_decoration,
    STATE(165), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2544] = 1,
    ACTIONS(647), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2557] = 1,
    ACTIONS(659), 10,
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
  [2570] = 1,
    ACTIONS(635), 10,
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
  [2583] = 1,
    ACTIONS(651), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2596] = 1,
    ACTIONS(659), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2609] = 1,
    ACTIONS(651), 10,
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
  [2622] = 1,
    ACTIONS(647), 10,
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
  [2635] = 3,
    ACTIONS(673), 1,
      aux_sym_grace_note_token1,
    STATE(165), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(671), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2652] = 1,
    ACTIONS(625), 10,
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
  [2665] = 1,
    ACTIONS(635), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2678] = 1,
    ACTIONS(625), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2691] = 1,
    ACTIONS(639), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2704] = 1,
    ACTIONS(617), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2717] = 1,
    ACTIONS(639), 10,
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
  [2730] = 1,
    ACTIONS(617), 10,
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
  [2743] = 1,
    ACTIONS(676), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2756] = 1,
    ACTIONS(613), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2769] = 1,
    ACTIONS(613), 10,
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
  [2782] = 1,
    ACTIONS(443), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2795] = 1,
    ACTIONS(676), 10,
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
  [2808] = 1,
    ACTIONS(678), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [2820] = 9,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
    ACTIONS(513), 1,
      sym_tuplet_marker,
    STATE(133), 1,
      sym__pitch,
    STATE(145), 1,
      sym_note,
    STATE(200), 1,
      sym_decoration,
  [2848] = 1,
    ACTIONS(680), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [2860] = 9,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(500), 1,
      anon_sym_LBRACK,
    ACTIONS(502), 1,
      sym_tuplet_marker,
    STATE(110), 1,
      sym__pitch,
    STATE(143), 1,
      sym_note,
    STATE(211), 1,
      sym_decoration,
  [2888] = 1,
    ACTIONS(682), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [2900] = 9,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    ACTIONS(686), 1,
      sym_tuplet_marker,
    STATE(133), 1,
      sym__pitch,
    STATE(151), 1,
      sym_note,
    STATE(203), 1,
      sym_decoration,
  [2928] = 1,
    ACTIONS(688), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [2940] = 9,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(690), 1,
      anon_sym_LBRACK,
    ACTIONS(692), 1,
      sym_tuplet_marker,
    STATE(110), 1,
      sym__pitch,
    STATE(152), 1,
      sym_note,
    STATE(204), 1,
      sym_decoration,
  [2968] = 8,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym__pitch,
    STATE(151), 1,
      sym_note,
    STATE(203), 1,
      sym_decoration,
  [2993] = 2,
    ACTIONS(682), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(694), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [3006] = 2,
    ACTIONS(680), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(696), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [3019] = 8,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(690), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(152), 1,
      sym_note,
    STATE(204), 1,
      sym_decoration,
  [3044] = 1,
    ACTIONS(698), 8,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3055] = 8,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(500), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(143), 1,
      sym_note,
    STATE(211), 1,
      sym_decoration,
  [3080] = 2,
    ACTIONS(688), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(700), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [3093] = 2,
    ACTIONS(678), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(702), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [3106] = 8,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(704), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym__pitch,
    STATE(147), 1,
      sym_note,
    STATE(202), 1,
      sym_decoration,
  [3131] = 8,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym__pitch,
    STATE(145), 1,
      sym_note,
    STATE(200), 1,
      sym_decoration,
  [3156] = 8,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(185), 1,
      sym_decoration_shorthand,
    ACTIONS(706), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(153), 1,
      sym_note,
    STATE(210), 1,
      sym_decoration,
  [3181] = 1,
    ACTIONS(708), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [3190] = 1,
    ACTIONS(710), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3199] = 6,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(511), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym__pitch,
    STATE(145), 1,
      sym_note,
  [3218] = 6,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(684), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym__pitch,
    STATE(151), 1,
      sym_note,
  [3237] = 1,
    ACTIONS(712), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [3246] = 6,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(714), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym__pitch,
    STATE(140), 1,
      sym_note,
  [3265] = 6,
    ACTIONS(426), 1,
      sym_alteration,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(430), 1,
      sym_rest,
    ACTIONS(704), 1,
      anon_sym_LBRACK,
    STATE(133), 1,
      sym__pitch,
    STATE(147), 1,
      sym_note,
  [3284] = 6,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(706), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(153), 1,
      sym_note,
  [3303] = 1,
    ACTIONS(716), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3312] = 4,
    ACTIONS(197), 1,
      sym_words_postbody,
    STATE(262), 1,
      sym_lyric_section,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
    STATE(216), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [3327] = 1,
    ACTIONS(720), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3336] = 6,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(500), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(143), 1,
      sym_note,
  [3355] = 1,
    ACTIONS(722), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3364] = 6,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(724), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(139), 1,
      sym_note,
  [3383] = 6,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    ACTIONS(690), 1,
      anon_sym_LBRACK,
    STATE(110), 1,
      sym__pitch,
    STATE(152), 1,
      sym_note,
  [3402] = 1,
    ACTIONS(726), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [3411] = 3,
    ACTIONS(730), 1,
      sym_words_postbody,
    ACTIONS(728), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
    STATE(213), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [3423] = 4,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(733), 1,
      aux_sym_grace_note_token2,
    STATE(215), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [3437] = 4,
    ACTIONS(735), 1,
      sym_alteration,
    ACTIONS(738), 1,
      sym_note_letter,
    ACTIONS(741), 1,
      aux_sym_grace_note_token2,
    STATE(215), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [3451] = 3,
    ACTIONS(197), 1,
      sym_words_postbody,
    ACTIONS(743), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
    STATE(213), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [3463] = 5,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    STATE(110), 1,
      sym__pitch,
    STATE(212), 1,
      sym_note,
  [3479] = 5,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    ACTIONS(112), 1,
      sym_rest,
    STATE(110), 1,
      sym__pitch,
    STATE(197), 1,
      sym_note,
  [3495] = 3,
    ACTIONS(745), 1,
      anon_sym_DOT,
    STATE(223), 1,
      aux_sym_abc_version_repeat1,
    ACTIONS(747), 2,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [3506] = 3,
    ACTIONS(749), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_abc_version_repeat1,
    ACTIONS(752), 2,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [3517] = 1,
    ACTIONS(754), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [3524] = 2,
    ACTIONS(756), 1,
      sym_alteration,
    ACTIONS(758), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [3533] = 3,
    ACTIONS(745), 1,
      anon_sym_DOT,
    STATE(220), 1,
      aux_sym_abc_version_repeat1,
    ACTIONS(760), 2,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [3544] = 3,
    ACTIONS(108), 1,
      sym_alteration,
    ACTIONS(110), 1,
      sym_note_letter,
    STATE(214), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [3555] = 3,
    ACTIONS(752), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(762), 1,
      anon_sym_DOT,
    STATE(225), 1,
      aux_sym_abc_version_repeat1,
  [3565] = 3,
    ACTIONS(765), 1,
      ts_builtin_sym_end,
    ACTIONS(767), 1,
      sym__NEWLINE,
    STATE(232), 1,
      aux_sym_file_structure_repeat1,
  [3575] = 3,
    ACTIONS(760), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(769), 1,
      anon_sym_DOT,
    STATE(225), 1,
      aux_sym_abc_version_repeat1,
  [3585] = 3,
    ACTIONS(767), 1,
      sym__NEWLINE,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
    STATE(231), 1,
      aux_sym_file_structure_repeat1,
  [3595] = 3,
    ACTIONS(773), 1,
      ts_builtin_sym_end,
    ACTIONS(775), 1,
      sym__NEWLINE,
    STATE(229), 1,
      aux_sym_file_structure_repeat1,
  [3605] = 3,
    ACTIONS(752), 1,
      aux_sym_file_header_info_line_token1,
    ACTIONS(778), 1,
      anon_sym_DOT,
    STATE(230), 1,
      aux_sym_abc_version_repeat1,
  [3615] = 3,
    ACTIONS(767), 1,
      sym__NEWLINE,
    ACTIONS(781), 1,
      ts_builtin_sym_end,
    STATE(229), 1,
      aux_sym_file_structure_repeat1,
  [3625] = 3,
    ACTIONS(767), 1,
      sym__NEWLINE,
    ACTIONS(771), 1,
      ts_builtin_sym_end,
    STATE(229), 1,
      aux_sym_file_structure_repeat1,
  [3635] = 3,
    ACTIONS(760), 1,
      aux_sym_file_header_info_line_token1,
    ACTIONS(783), 1,
      anon_sym_DOT,
    STATE(230), 1,
      aux_sym_abc_version_repeat1,
  [3645] = 3,
    ACTIONS(785), 1,
      aux_sym_body_inline_info_token1,
    STATE(33), 1,
      sym_TEXTLINE,
    STATE(279), 1,
      sym_TEXT,
  [3655] = 3,
    ACTIONS(787), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(789), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(791), 1,
      sym_chord_type,
  [3665] = 3,
    ACTIONS(793), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(795), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(797), 1,
      sym_chord_type,
  [3675] = 3,
    ACTIONS(799), 1,
      aux_sym_words_line_token1,
    ACTIONS(801), 1,
      aux_sym_body_info_line_token1,
    STATE(239), 1,
      aux_sym_words_line_repeat2,
  [3685] = 1,
    ACTIONS(752), 3,
      anon_sym_DOT,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [3691] = 3,
    ACTIONS(498), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(803), 1,
      aux_sym_words_line_token1,
    STATE(239), 1,
      aux_sym_words_line_repeat2,
  [3701] = 3,
    ACTIONS(747), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(769), 1,
      anon_sym_DOT,
    STATE(227), 1,
      aux_sym_abc_version_repeat1,
  [3711] = 3,
    ACTIONS(747), 1,
      aux_sym_file_header_info_line_token1,
    ACTIONS(783), 1,
      anon_sym_DOT,
    STATE(233), 1,
      aux_sym_abc_version_repeat1,
  [3721] = 3,
    ACTIONS(799), 1,
      aux_sym_words_line_token1,
    ACTIONS(806), 1,
      aux_sym_body_info_line_token1,
    STATE(237), 1,
      aux_sym_words_line_repeat2,
  [3731] = 1,
    ACTIONS(808), 3,
      ts_builtin_sym_end,
      sym__NEWLINE,
      sym_words_postbody,
  [3737] = 3,
    ACTIONS(785), 1,
      aux_sym_body_inline_info_token1,
    STATE(82), 1,
      sym_TEXTLINE,
    STATE(282), 1,
      sym_TEXT,
  [3747] = 1,
    ACTIONS(810), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [3753] = 2,
    ACTIONS(812), 1,
      sym_note_letter,
    STATE(296), 1,
      sym_chord_symbol_note,
  [3760] = 2,
    ACTIONS(814), 1,
      sym_note_letter,
    STATE(235), 1,
      sym_chord_symbol_note,
  [3767] = 2,
    ACTIONS(816), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(818), 1,
      aux_sym_chord_symbol_token2,
  [3774] = 2,
    ACTIONS(812), 1,
      sym_note_letter,
    STATE(320), 1,
      sym_chord_symbol_note,
  [3781] = 1,
    ACTIONS(820), 2,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [3786] = 2,
    ACTIONS(758), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(822), 1,
      sym_alteration,
  [3793] = 2,
    ACTIONS(824), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(826), 1,
      aux_sym_file_header_info_line_token1,
  [3800] = 2,
    ACTIONS(828), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym_nth_ending_number,
  [3807] = 2,
    ACTIONS(830), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(832), 1,
      aux_sym_chord_symbol_token2,
  [3814] = 1,
    ACTIONS(834), 2,
      sym__NEWLINE,
      sym_COMMENTLINE,
  [3819] = 2,
    ACTIONS(812), 1,
      sym_note_letter,
    STATE(290), 1,
      sym_chord_symbol_note,
  [3826] = 2,
    ACTIONS(836), 1,
      anon_sym_LBRACK,
    STATE(43), 1,
      sym_nth_ending_number,
  [3833] = 1,
    ACTIONS(718), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
  [3838] = 1,
    ACTIONS(838), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [3843] = 1,
    ACTIONS(752), 2,
      anon_sym_DOT,
      aux_sym_body_info_line_token1,
  [3848] = 2,
    ACTIONS(840), 1,
      anon_sym_LBRACK,
    STATE(71), 1,
      sym_nth_ending_number,
  [3855] = 1,
    ACTIONS(842), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
  [3860] = 2,
    ACTIONS(812), 1,
      sym_note_letter,
    STATE(298), 1,
      sym_chord_symbol_note,
  [3867] = 1,
    ACTIONS(752), 2,
      anon_sym_DOT,
      aux_sym_file_header_info_line_token1,
  [3872] = 1,
    ACTIONS(844), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [3877] = 1,
    ACTIONS(773), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
  [3882] = 1,
    ACTIONS(846), 2,
      sym__NEWLINE,
      sym_COMMENTLINE,
  [3887] = 1,
    ACTIONS(289), 2,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [3892] = 2,
    ACTIONS(814), 1,
      sym_note_letter,
    STATE(236), 1,
      sym_chord_symbol_note,
  [3899] = 1,
    ACTIONS(848), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [3904] = 1,
    ACTIONS(850), 2,
      sym__NEWLINE,
      sym_COMMENTLINE,
  [3909] = 1,
    ACTIONS(287), 1,
      aux_sym_body_info_line_token1,
  [3913] = 1,
    ACTIONS(852), 1,
      aux_sym_nth_ending_number_token1,
  [3917] = 1,
    ACTIONS(854), 1,
      anon_sym_EQ,
  [3921] = 1,
    ACTIONS(856), 1,
      aux_sym_body_info_line_token1,
  [3925] = 1,
    ACTIONS(287), 1,
      aux_sym_file_header_info_line_token1,
  [3929] = 1,
    ACTIONS(858), 1,
      aux_sym__MUSIC_CODE_token1,
  [3933] = 1,
    ACTIONS(860), 1,
      aux_sym_nth_ending_number_token1,
  [3937] = 1,
    ACTIONS(862), 1,
      sym__NEWLINE,
  [3941] = 1,
    ACTIONS(864), 1,
      sym_note_letter,
  [3945] = 1,
    ACTIONS(866), 1,
      aux_sym_multimeasure_rest_token1,
  [3949] = 1,
    ACTIONS(868), 1,
      sym__NEWLINE,
  [3953] = 1,
    ACTIONS(870), 1,
      aux_sym_nth_ending_number_token1,
  [3957] = 1,
    ACTIONS(872), 1,
      sym_note_letter,
  [3961] = 1,
    ACTIONS(874), 1,
      aux_sym_multimeasure_rest_token1,
  [3965] = 1,
    ACTIONS(876), 1,
      sym__NEWLINE,
  [3969] = 1,
    ACTIONS(878), 1,
      aux_sym__MUSIC_CODE_token1,
  [3973] = 1,
    ACTIONS(880), 1,
      aux_sym_body_info_line_token1,
  [3977] = 1,
    ACTIONS(882), 1,
      ts_builtin_sym_end,
  [3981] = 1,
    ACTIONS(884), 1,
      aux_sym_chord_symbol_token1,
  [3985] = 1,
    ACTIONS(886), 1,
      aux_sym_nth_ending_number_token1,
  [3989] = 1,
    ACTIONS(888), 1,
      aux_sym_first_repeat_bar_token2,
  [3993] = 1,
    ACTIONS(890), 1,
      aux_sym_first_repeat_bar_token2,
  [3997] = 1,
    ACTIONS(892), 1,
      ts_builtin_sym_end,
  [4001] = 1,
    ACTIONS(894), 1,
      anon_sym_DOT,
  [4005] = 1,
    ACTIONS(896), 1,
      aux_sym_chord_symbol_token1,
  [4009] = 1,
    ACTIONS(898), 1,
      sym__NEWLINE,
  [4013] = 1,
    ACTIONS(900), 1,
      aux_sym_chord_symbol_token1,
  [4017] = 1,
    ACTIONS(902), 1,
      aux_sym_file_header_info_line_token1,
  [4021] = 1,
    ACTIONS(904), 1,
      aux_sym_nth_ending_number_token1,
  [4025] = 1,
    ACTIONS(906), 1,
      aux_sym_first_repeat_bar_token2,
  [4029] = 1,
    ACTIONS(908), 1,
      aux_sym_nth_ending_number_token1,
  [4033] = 1,
    ACTIONS(910), 1,
      aux_sym_nth_ending_number_token1,
  [4037] = 1,
    ACTIONS(912), 1,
      aux_sym_first_repeat_bar_token2,
  [4041] = 1,
    ACTIONS(914), 1,
      aux_sym_nth_ending_number_token1,
  [4045] = 1,
    ACTIONS(916), 1,
      aux_sym_nth_ending_number_token1,
  [4049] = 1,
    ACTIONS(918), 1,
      aux_sym_first_repeat_bar_token2,
  [4053] = 1,
    ACTIONS(920), 1,
      aux_sym_first_repeat_bar_token2,
  [4057] = 1,
    ACTIONS(922), 1,
      aux_sym_nth_ending_number_token1,
  [4061] = 1,
    ACTIONS(924), 1,
      aux_sym_nth_ending_number_token1,
  [4065] = 1,
    ACTIONS(926), 1,
      anon_sym_EQ,
  [4069] = 1,
    ACTIONS(928), 1,
      aux_sym_body_info_line_token1,
  [4073] = 1,
    ACTIONS(930), 1,
      anon_sym_DOT,
  [4077] = 1,
    ACTIONS(932), 1,
      anon_sym_LBRACK,
  [4081] = 1,
    ACTIONS(934), 1,
      anon_sym_LBRACK,
  [4085] = 1,
    ACTIONS(936), 1,
      aux_sym_file_header_info_line_token1,
  [4089] = 1,
    ACTIONS(938), 1,
      aux_sym_nth_ending_number_token1,
  [4093] = 1,
    ACTIONS(940), 1,
      aux_sym_nth_ending_number_token1,
  [4097] = 1,
    ACTIONS(902), 1,
      aux_sym_body_info_line_token1,
  [4101] = 1,
    ACTIONS(942), 1,
      aux_sym_chord_symbol_token1,
  [4105] = 1,
    ACTIONS(944), 1,
      anon_sym_LF,
  [4109] = 1,
    ACTIONS(946), 1,
      anon_sym_EQ,
  [4113] = 1,
    ACTIONS(948), 1,
      anon_sym_LBRACK,
  [4117] = 1,
    ACTIONS(950), 1,
      anon_sym_LBRACK,
  [4121] = 1,
    ACTIONS(952), 1,
      anon_sym_LBRACK,
  [4125] = 1,
    ACTIONS(954), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(73)] = 0,
  [SMALL_STATE(74)] = 65,
  [SMALL_STATE(75)] = 130,
  [SMALL_STATE(76)] = 195,
  [SMALL_STATE(77)] = 249,
  [SMALL_STATE(78)] = 303,
  [SMALL_STATE(79)] = 347,
  [SMALL_STATE(80)] = 377,
  [SMALL_STATE(81)] = 421,
  [SMALL_STATE(82)] = 448,
  [SMALL_STATE(83)] = 475,
  [SMALL_STATE(84)] = 502,
  [SMALL_STATE(85)] = 555,
  [SMALL_STATE(86)] = 608,
  [SMALL_STATE(87)] = 661,
  [SMALL_STATE(88)] = 714,
  [SMALL_STATE(89)] = 767,
  [SMALL_STATE(90)] = 813,
  [SMALL_STATE(91)] = 859,
  [SMALL_STATE(92)] = 905,
  [SMALL_STATE(93)] = 928,
  [SMALL_STATE(94)] = 951,
  [SMALL_STATE(95)] = 974,
  [SMALL_STATE(96)] = 997,
  [SMALL_STATE(97)] = 1020,
  [SMALL_STATE(98)] = 1049,
  [SMALL_STATE(99)] = 1090,
  [SMALL_STATE(100)] = 1111,
  [SMALL_STATE(101)] = 1132,
  [SMALL_STATE(102)] = 1153,
  [SMALL_STATE(103)] = 1194,
  [SMALL_STATE(104)] = 1215,
  [SMALL_STATE(105)] = 1236,
  [SMALL_STATE(106)] = 1265,
  [SMALL_STATE(107)] = 1301,
  [SMALL_STATE(108)] = 1337,
  [SMALL_STATE(109)] = 1373,
  [SMALL_STATE(110)] = 1403,
  [SMALL_STATE(111)] = 1421,
  [SMALL_STATE(112)] = 1457,
  [SMALL_STATE(113)] = 1493,
  [SMALL_STATE(114)] = 1529,
  [SMALL_STATE(115)] = 1565,
  [SMALL_STATE(116)] = 1601,
  [SMALL_STATE(117)] = 1631,
  [SMALL_STATE(118)] = 1667,
  [SMALL_STATE(119)] = 1703,
  [SMALL_STATE(120)] = 1739,
  [SMALL_STATE(121)] = 1766,
  [SMALL_STATE(122)] = 1781,
  [SMALL_STATE(123)] = 1814,
  [SMALL_STATE(124)] = 1841,
  [SMALL_STATE(125)] = 1874,
  [SMALL_STATE(126)] = 1907,
  [SMALL_STATE(127)] = 1940,
  [SMALL_STATE(128)] = 1973,
  [SMALL_STATE(129)] = 2006,
  [SMALL_STATE(130)] = 2039,
  [SMALL_STATE(131)] = 2072,
  [SMALL_STATE(132)] = 2105,
  [SMALL_STATE(133)] = 2138,
  [SMALL_STATE(134)] = 2155,
  [SMALL_STATE(135)] = 2171,
  [SMALL_STATE(136)] = 2187,
  [SMALL_STATE(137)] = 2203,
  [SMALL_STATE(138)] = 2219,
  [SMALL_STATE(139)] = 2235,
  [SMALL_STATE(140)] = 2251,
  [SMALL_STATE(141)] = 2267,
  [SMALL_STATE(142)] = 2283,
  [SMALL_STATE(143)] = 2299,
  [SMALL_STATE(144)] = 2315,
  [SMALL_STATE(145)] = 2331,
  [SMALL_STATE(146)] = 2347,
  [SMALL_STATE(147)] = 2363,
  [SMALL_STATE(148)] = 2379,
  [SMALL_STATE(149)] = 2395,
  [SMALL_STATE(150)] = 2409,
  [SMALL_STATE(151)] = 2425,
  [SMALL_STATE(152)] = 2441,
  [SMALL_STATE(153)] = 2457,
  [SMALL_STATE(154)] = 2473,
  [SMALL_STATE(155)] = 2489,
  [SMALL_STATE(156)] = 2502,
  [SMALL_STATE(157)] = 2515,
  [SMALL_STATE(158)] = 2544,
  [SMALL_STATE(159)] = 2557,
  [SMALL_STATE(160)] = 2570,
  [SMALL_STATE(161)] = 2583,
  [SMALL_STATE(162)] = 2596,
  [SMALL_STATE(163)] = 2609,
  [SMALL_STATE(164)] = 2622,
  [SMALL_STATE(165)] = 2635,
  [SMALL_STATE(166)] = 2652,
  [SMALL_STATE(167)] = 2665,
  [SMALL_STATE(168)] = 2678,
  [SMALL_STATE(169)] = 2691,
  [SMALL_STATE(170)] = 2704,
  [SMALL_STATE(171)] = 2717,
  [SMALL_STATE(172)] = 2730,
  [SMALL_STATE(173)] = 2743,
  [SMALL_STATE(174)] = 2756,
  [SMALL_STATE(175)] = 2769,
  [SMALL_STATE(176)] = 2782,
  [SMALL_STATE(177)] = 2795,
  [SMALL_STATE(178)] = 2808,
  [SMALL_STATE(179)] = 2820,
  [SMALL_STATE(180)] = 2848,
  [SMALL_STATE(181)] = 2860,
  [SMALL_STATE(182)] = 2888,
  [SMALL_STATE(183)] = 2900,
  [SMALL_STATE(184)] = 2928,
  [SMALL_STATE(185)] = 2940,
  [SMALL_STATE(186)] = 2968,
  [SMALL_STATE(187)] = 2993,
  [SMALL_STATE(188)] = 3006,
  [SMALL_STATE(189)] = 3019,
  [SMALL_STATE(190)] = 3044,
  [SMALL_STATE(191)] = 3055,
  [SMALL_STATE(192)] = 3080,
  [SMALL_STATE(193)] = 3093,
  [SMALL_STATE(194)] = 3106,
  [SMALL_STATE(195)] = 3131,
  [SMALL_STATE(196)] = 3156,
  [SMALL_STATE(197)] = 3181,
  [SMALL_STATE(198)] = 3190,
  [SMALL_STATE(199)] = 3199,
  [SMALL_STATE(200)] = 3218,
  [SMALL_STATE(201)] = 3237,
  [SMALL_STATE(202)] = 3246,
  [SMALL_STATE(203)] = 3265,
  [SMALL_STATE(204)] = 3284,
  [SMALL_STATE(205)] = 3303,
  [SMALL_STATE(206)] = 3312,
  [SMALL_STATE(207)] = 3327,
  [SMALL_STATE(208)] = 3336,
  [SMALL_STATE(209)] = 3355,
  [SMALL_STATE(210)] = 3364,
  [SMALL_STATE(211)] = 3383,
  [SMALL_STATE(212)] = 3402,
  [SMALL_STATE(213)] = 3411,
  [SMALL_STATE(214)] = 3423,
  [SMALL_STATE(215)] = 3437,
  [SMALL_STATE(216)] = 3451,
  [SMALL_STATE(217)] = 3463,
  [SMALL_STATE(218)] = 3479,
  [SMALL_STATE(219)] = 3495,
  [SMALL_STATE(220)] = 3506,
  [SMALL_STATE(221)] = 3517,
  [SMALL_STATE(222)] = 3524,
  [SMALL_STATE(223)] = 3533,
  [SMALL_STATE(224)] = 3544,
  [SMALL_STATE(225)] = 3555,
  [SMALL_STATE(226)] = 3565,
  [SMALL_STATE(227)] = 3575,
  [SMALL_STATE(228)] = 3585,
  [SMALL_STATE(229)] = 3595,
  [SMALL_STATE(230)] = 3605,
  [SMALL_STATE(231)] = 3615,
  [SMALL_STATE(232)] = 3625,
  [SMALL_STATE(233)] = 3635,
  [SMALL_STATE(234)] = 3645,
  [SMALL_STATE(235)] = 3655,
  [SMALL_STATE(236)] = 3665,
  [SMALL_STATE(237)] = 3675,
  [SMALL_STATE(238)] = 3685,
  [SMALL_STATE(239)] = 3691,
  [SMALL_STATE(240)] = 3701,
  [SMALL_STATE(241)] = 3711,
  [SMALL_STATE(242)] = 3721,
  [SMALL_STATE(243)] = 3731,
  [SMALL_STATE(244)] = 3737,
  [SMALL_STATE(245)] = 3747,
  [SMALL_STATE(246)] = 3753,
  [SMALL_STATE(247)] = 3760,
  [SMALL_STATE(248)] = 3767,
  [SMALL_STATE(249)] = 3774,
  [SMALL_STATE(250)] = 3781,
  [SMALL_STATE(251)] = 3786,
  [SMALL_STATE(252)] = 3793,
  [SMALL_STATE(253)] = 3800,
  [SMALL_STATE(254)] = 3807,
  [SMALL_STATE(255)] = 3814,
  [SMALL_STATE(256)] = 3819,
  [SMALL_STATE(257)] = 3826,
  [SMALL_STATE(258)] = 3833,
  [SMALL_STATE(259)] = 3838,
  [SMALL_STATE(260)] = 3843,
  [SMALL_STATE(261)] = 3848,
  [SMALL_STATE(262)] = 3855,
  [SMALL_STATE(263)] = 3860,
  [SMALL_STATE(264)] = 3867,
  [SMALL_STATE(265)] = 3872,
  [SMALL_STATE(266)] = 3877,
  [SMALL_STATE(267)] = 3882,
  [SMALL_STATE(268)] = 3887,
  [SMALL_STATE(269)] = 3892,
  [SMALL_STATE(270)] = 3899,
  [SMALL_STATE(271)] = 3904,
  [SMALL_STATE(272)] = 3909,
  [SMALL_STATE(273)] = 3913,
  [SMALL_STATE(274)] = 3917,
  [SMALL_STATE(275)] = 3921,
  [SMALL_STATE(276)] = 3925,
  [SMALL_STATE(277)] = 3929,
  [SMALL_STATE(278)] = 3933,
  [SMALL_STATE(279)] = 3937,
  [SMALL_STATE(280)] = 3941,
  [SMALL_STATE(281)] = 3945,
  [SMALL_STATE(282)] = 3949,
  [SMALL_STATE(283)] = 3953,
  [SMALL_STATE(284)] = 3957,
  [SMALL_STATE(285)] = 3961,
  [SMALL_STATE(286)] = 3965,
  [SMALL_STATE(287)] = 3969,
  [SMALL_STATE(288)] = 3973,
  [SMALL_STATE(289)] = 3977,
  [SMALL_STATE(290)] = 3981,
  [SMALL_STATE(291)] = 3985,
  [SMALL_STATE(292)] = 3989,
  [SMALL_STATE(293)] = 3993,
  [SMALL_STATE(294)] = 3997,
  [SMALL_STATE(295)] = 4001,
  [SMALL_STATE(296)] = 4005,
  [SMALL_STATE(297)] = 4009,
  [SMALL_STATE(298)] = 4013,
  [SMALL_STATE(299)] = 4017,
  [SMALL_STATE(300)] = 4021,
  [SMALL_STATE(301)] = 4025,
  [SMALL_STATE(302)] = 4029,
  [SMALL_STATE(303)] = 4033,
  [SMALL_STATE(304)] = 4037,
  [SMALL_STATE(305)] = 4041,
  [SMALL_STATE(306)] = 4045,
  [SMALL_STATE(307)] = 4049,
  [SMALL_STATE(308)] = 4053,
  [SMALL_STATE(309)] = 4057,
  [SMALL_STATE(310)] = 4061,
  [SMALL_STATE(311)] = 4065,
  [SMALL_STATE(312)] = 4069,
  [SMALL_STATE(313)] = 4073,
  [SMALL_STATE(314)] = 4077,
  [SMALL_STATE(315)] = 4081,
  [SMALL_STATE(316)] = 4085,
  [SMALL_STATE(317)] = 4089,
  [SMALL_STATE(318)] = 4093,
  [SMALL_STATE(319)] = 4097,
  [SMALL_STATE(320)] = 4101,
  [SMALL_STATE(321)] = 4105,
  [SMALL_STATE(322)] = 4109,
  [SMALL_STATE(323)] = 4113,
  [SMALL_STATE(324)] = 4117,
  [SMALL_STATE(325)] = 4121,
  [SMALL_STATE(326)] = 4125,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(305),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(2),
  [26] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(234),
  [29] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(90),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(22),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(22),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(130),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(284),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(92),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(110),
  [50] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(281),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(224),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(247),
  [59] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(191),
  [62] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(221),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(12),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(15),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(30),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(9),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(32),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(288),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(54),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(265),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(123),
  [92] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 2),
  [94] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 2),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(247),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [122] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [124] = {.entry = {.count = 1, .reusable = false}}, SHIFT(12),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [140] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(312),
  [151] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(278),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(300),
  [157] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(54),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(265),
  [163] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 1),
  [165] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 1),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 1),
  [175] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune, 1),
  [177] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [179] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [195] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [199] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_bar_line, 1),
  [201] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_bar_line, 1),
  [203] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [205] = {.entry = {.count = 1, .reusable = false}}, SHIFT(324),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [213] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(309),
  [216] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 3),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 3),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 2),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 3),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 3),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 4),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 4),
  [238] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [240] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 2),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 2),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 3),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(37),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_barline, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_barline, 3),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 2),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 2),
  [276] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 4),
  [278] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 4),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(273),
  [283] = {.entry = {.count = 1, .reusable = false}}, SHIFT(315),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet_directives, 2),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stylesheet_directives, 2),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_info_line, 4, .production_id = 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_info_line, 4, .production_id = 1),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TEXTLINE, 2),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TEXTLINE, 2),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 2),
  [307] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(52),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(269),
  [315] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(58),
  [318] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(61),
  [321] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(64),
  [324] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(57),
  [327] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(65),
  [330] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [334] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [336] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [338] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [340] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [342] = {.entry = {.count = 1, .reusable = false}}, SHIFT(57),
  [344] = {.entry = {.count = 1, .reusable = false}}, SHIFT(65),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_line, 2),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [358] = {.entry = {.count = 1, .reusable = false}}, SHIFT(318),
  [360] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [362] = {.entry = {.count = 1, .reusable = false}}, SHIFT(326),
  [364] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [366] = {.entry = {.count = 1, .reusable = false}}, SHIFT(325),
  [368] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [370] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(318),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 6),
  [375] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 5),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 3),
  [379] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 4),
  [381] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [389] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(78),
  [392] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(244),
  [395] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(302),
  [398] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(316),
  [401] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(270),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header, 2),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [408] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [410] = {.entry = {.count = 1, .reusable = false}}, SHIFT(302),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 3, .production_id = 1),
  [418] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_header_info_line, 3, .production_id = 1),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [422] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [430] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(91),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(129),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(280),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(103),
  [454] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(133),
  [457] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(224),
  [460] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(247),
  [463] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(195),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(221),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 1),
  [475] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [477] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [479] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(93),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 2),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [486] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 3),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [490] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [494] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [496] = {.entry = {.count = 1, .reusable = false}}, SHIFT(295),
  [498] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(101),
  [511] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [517] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(178),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(180),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(184),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(295),
  [529] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [539] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(193),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(188),
  [545] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(193),
  [548] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(192),
  [551] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(313),
  [554] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [556] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [558] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [566] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [574] = {.entry = {.count = 1, .reusable = false}}, SHIFT(193),
  [576] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [578] = {.entry = {.count = 1, .reusable = false}}, SHIFT(313),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2),
  [582] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(284),
  [585] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(92),
  [588] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(110),
  [591] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(224),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(221),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 7),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [617] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 6),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 3),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 5),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 4),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [651] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [653] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [669] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 8),
  [671] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [673] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(224),
  [676] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 6),
  [678] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_text, 1),
  [680] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HYPHEN, 1),
  [682] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse_number, 2),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [688] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_syllable, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse_number, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HYPHEN, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_syllable, 1),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_text, 1),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [708] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2),
  [730] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2), SHIFT_REPEAT(297),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(190),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(284),
  [738] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(92),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_section, 1),
  [745] = {.entry = {.count = 1, .reusable = false}}, SHIFT(317),
  [747] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 2),
  [749] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(317),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [756] = {.entry = {.count = 1, .reusable = false}}, SHIFT(245),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [760] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 3),
  [762] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(283),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [769] = {.entry = {.count = 1, .reusable = false}}, SHIFT(283),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 2),
  [773] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2),
  [775] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2), SHIFT_REPEAT(77),
  [778] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(303),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 3),
  [783] = {.entry = {.count = 1, .reusable = false}}, SHIFT(303),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [791] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [799] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [801] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_words_line, 4),
  [803] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2), SHIFT_REPEAT(120),
  [806] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_words_line, 3),
  [808] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_line, 2),
  [810] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [820] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined, 4),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [824] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [826] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 3),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [856] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number, 2),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [876] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TEXT, 1),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [882] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [892] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined, 4),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
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
