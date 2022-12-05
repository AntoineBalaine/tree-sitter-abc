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
#define STATE_COUNT 266
#define LARGE_STATE_COUNT 55
#define SYMBOL_COUNT 196
#define ALIAS_COUNT 0
#define TOKEN_COUNT 143
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 8
#define PRODUCTION_ID_COUNT 2

enum {
  sym__space = 1,
  anon_sym_LF = 2,
  sym_noCommentText = 3,
  anon_sym_BSLASH = 4,
  anon_sym_PLUS = 5,
  sym_note_skip = 6,
  anon_sym_DASH = 7,
  sym_UNDERSCORE = 8,
  sym_TILDE = 9,
  sym_BEAM_SEPARATOR = 10,
  sym_COMMENT = 11,
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
  aux_sym_nth_ending_number_token1 = 37,
  anon_sym_COMMA = 38,
  sym_bar_line = 39,
  sym_close_thin_thick_double_bar_line = 40,
  sym_thin_double_bar_line = 41,
  sym_open_thick_thin_double_bar_line = 42,
  sym_start_of_repeated_section = 43,
  sym_end_of_repeated_section = 44,
  sym_start_end_of_two_repeated_sections = 45,
  aux_sym_first_repeat_bar_token1 = 46,
  aux_sym_first_repeat_bar_token2 = 47,
  aux_sym_lyric_line_token1 = 48,
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
  sym__NL = 144,
  sym_HYPHEN = 145,
  sym_stylesheet_directives = 146,
  sym__MUSIC_CODE = 147,
  sym_tune = 148,
  sym_tune_header = 149,
  sym_tune_body = 150,
  sym__music_content = 151,
  sym__nte_or_chrd = 152,
  sym_beam = 153,
  sym_note_construct = 154,
  sym__chord_cstrct = 155,
  sym_note = 156,
  sym_chord_note = 157,
  sym__pitch = 158,
  sym_multimeasure_rest = 159,
  sym_grace_note = 160,
  sym_chord_symbol_note = 161,
  sym_chord_symbol = 162,
  sym_decoration = 163,
  sym_nth_ending_barline = 164,
  sym_nth_ending_number = 165,
  sym_generic_bar_line = 166,
  sym_first_repeat_bar = 167,
  sym_second_repeat_bar = 168,
  sym_lyric_line = 169,
  sym_lyric_section = 170,
  sym_lyric_syllable = 171,
  sym_verse_number = 172,
  sym_lyric_text = 173,
  sym_symbol = 174,
  sym_abc_version = 175,
  sym_reference_number_line = 176,
  sym_symbol_line = 177,
  sym_user_defined = 178,
  sym_words_line = 179,
  sym_body_info_line = 180,
  sym_tune_header_info_line = 181,
  aux_sym_file_header_repeat1 = 182,
  aux_sym_tune_header_repeat1 = 183,
  aux_sym_tune_body_repeat1 = 184,
  aux_sym_beam_repeat1 = 185,
  aux_sym_note_construct_repeat1 = 186,
  aux_sym__chord_cstrct_repeat1 = 187,
  aux_sym__pitch_repeat1 = 188,
  aux_sym_grace_note_repeat1 = 189,
  aux_sym_nth_ending_number_repeat1 = 190,
  aux_sym_lyric_section_repeat1 = 191,
  aux_sym_abc_version_repeat1 = 192,
  aux_sym_symbol_line_repeat1 = 193,
  aux_sym_words_line_repeat1 = 194,
  aux_sym_words_line_repeat2 = 195,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [anon_sym_LF] = "\n",
  [sym_noCommentText] = "noCommentText",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_PLUS] = "+",
  [sym_note_skip] = "note_skip",
  [anon_sym_DASH] = "-",
  [sym_UNDERSCORE] = "UNDERSCORE",
  [sym_TILDE] = "TILDE",
  [sym_BEAM_SEPARATOR] = "BEAM_SEPARATOR",
  [sym_COMMENT] = "COMMENT",
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
  [sym__NL] = "_NL",
  [sym_HYPHEN] = "HYPHEN",
  [sym_stylesheet_directives] = "stylesheet_directives",
  [sym__MUSIC_CODE] = "_MUSIC_CODE",
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
  [sym_abc_version] = "abc_version",
  [sym_reference_number_line] = "reference_number_line",
  [sym_symbol_line] = "symbol_line",
  [sym_user_defined] = "user_defined",
  [sym_words_line] = "words_line",
  [sym_body_info_line] = "body_info_line",
  [sym_tune_header_info_line] = "tune_header_info_line",
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
  [anon_sym_LF] = anon_sym_LF,
  [sym_noCommentText] = sym_noCommentText,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [sym_note_skip] = sym_note_skip,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_UNDERSCORE] = sym_UNDERSCORE,
  [sym_TILDE] = sym_TILDE,
  [sym_BEAM_SEPARATOR] = sym_BEAM_SEPARATOR,
  [sym_COMMENT] = sym_COMMENT,
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
  [sym__NL] = sym__NL,
  [sym_HYPHEN] = sym_HYPHEN,
  [sym_stylesheet_directives] = sym_stylesheet_directives,
  [sym__MUSIC_CODE] = sym__MUSIC_CODE,
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
  [sym_abc_version] = sym_abc_version,
  [sym_reference_number_line] = sym_reference_number_line,
  [sym_symbol_line] = sym_symbol_line,
  [sym_user_defined] = sym_user_defined,
  [sym_words_line] = sym_words_line,
  [sym_body_info_line] = sym_body_info_line,
  [sym_tune_header_info_line] = sym_tune_header_info_line,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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
  [sym__NL] = {
    .visible = false,
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
  [37] = 14,
  [38] = 12,
  [39] = 13,
  [40] = 16,
  [41] = 15,
  [42] = 17,
  [43] = 18,
  [44] = 25,
  [45] = 45,
  [46] = 19,
  [47] = 23,
  [48] = 20,
  [49] = 27,
  [50] = 50,
  [51] = 51,
  [52] = 22,
  [53] = 53,
  [54] = 26,
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
  [66] = 63,
  [67] = 64,
  [68] = 68,
  [69] = 62,
  [70] = 70,
  [71] = 61,
  [72] = 72,
  [73] = 68,
  [74] = 74,
  [75] = 65,
  [76] = 76,
  [77] = 77,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 81,
  [82] = 82,
  [83] = 70,
  [84] = 84,
  [85] = 77,
  [86] = 81,
  [87] = 76,
  [88] = 84,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 91,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 90,
  [97] = 94,
  [98] = 98,
  [99] = 98,
  [100] = 82,
  [101] = 101,
  [102] = 95,
  [103] = 101,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 106,
  [108] = 108,
  [109] = 105,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 108,
  [114] = 110,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 112,
  [119] = 117,
  [120] = 115,
  [121] = 104,
  [122] = 116,
  [123] = 111,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 127,
  [130] = 130,
  [131] = 131,
  [132] = 126,
  [133] = 133,
  [134] = 128,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 138,
  [139] = 137,
  [140] = 138,
  [141] = 131,
  [142] = 130,
  [143] = 133,
  [144] = 135,
  [145] = 145,
  [146] = 136,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 149,
  [153] = 153,
  [154] = 148,
  [155] = 155,
  [156] = 153,
  [157] = 151,
  [158] = 158,
  [159] = 150,
  [160] = 160,
  [161] = 160,
  [162] = 162,
  [163] = 147,
  [164] = 155,
  [165] = 162,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 169,
  [170] = 170,
  [171] = 171,
  [172] = 169,
  [173] = 173,
  [174] = 53,
  [175] = 173,
  [176] = 176,
  [177] = 45,
  [178] = 171,
  [179] = 176,
  [180] = 50,
  [181] = 181,
  [182] = 51,
  [183] = 183,
  [184] = 184,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 198,
  [199] = 199,
  [200] = 200,
  [201] = 198,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 187,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 213,
  [214] = 206,
  [215] = 207,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 213,
  [221] = 221,
  [222] = 222,
  [223] = 217,
  [224] = 219,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 19,
  [240] = 240,
  [241] = 240,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 229,
  [247] = 228,
  [248] = 227,
  [249] = 232,
  [250] = 238,
  [251] = 251,
  [252] = 252,
  [253] = 234,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 257,
  [261] = 252,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 259,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (eof) ADVANCE(289);
      if (lookahead == '\n') ADVANCE(292);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(609);
      if (lookahead == '%') ADVANCE(564);
      if (lookahead == '\'') ADVANCE(593);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == '*') ADVANCE(555);
      if (lookahead == '+') ADVANCE(554);
      if (lookahead == ',') ADVANCE(652);
      if (lookahead == '-') ADVANCE(557);
      if (lookahead == '/') ADVANCE(601);
      if (lookahead == '0') ADVANCE(599);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(583);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(644);
      if (lookahead == 'M') ADVANCE(645);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(646);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(647);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(597);
      if (lookahead == 'Z') ADVANCE(595);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '\\') ADVANCE(553);
      if (lookahead == ']') ADVANCE(582);
      if (lookahead == '^') ADVANCE(584);
      if (lookahead == '_') ADVANCE(585);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead == '{') ADVANCE(606);
      if (lookahead == '|') ADVANCE(655);
      if (lookahead == '}') ADVANCE(607);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(571);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(603);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(594);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(643);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(598);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(586);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(292);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(609);
      if (lookahead == '%') ADVANCE(564);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == ',') ADVANCE(652);
      if (lookahead == '-') ADVANCE(557);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(583);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(644);
      if (lookahead == 'M') ADVANCE(645);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(646);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(647);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(597);
      if (lookahead == 'Z') ADVANCE(595);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '^') ADVANCE(584);
      if (lookahead == '_') ADVANCE(585);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead == '{') ADVANCE(606);
      if (lookahead == '|') ADVANCE(655);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(571);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(586);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(291);
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '%') ADVANCE(569);
      if (lookahead == '*') ADVANCE(556);
      if (lookahead == ':') ADVANCE(369);
      if (lookahead == '[') ADVANCE(549);
      if (lookahead == '|') ADVANCE(656);
      if (lookahead != 0) ADVANCE(552);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(291);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '*') ADVANCE(555);
      if (lookahead == '-') ADVANCE(557);
      if (lookahead == '.') ADVANCE(673);
      if (lookahead == '/') ADVANCE(610);
      if (lookahead == '=') ADVANCE(820);
      if (lookahead == '_') ADVANCE(560);
      if (lookahead == '|') ADVANCE(654);
      if (lookahead == '~') ADVANCE(561);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(672);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(609);
      if (lookahead == '%') ADVANCE(564);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(583);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(644);
      if (lookahead == 'M') ADVANCE(645);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(646);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(647);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(597);
      if (lookahead == 'Z') ADVANCE(595);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '^') ADVANCE(584);
      if (lookahead == '_') ADVANCE(585);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead == '{') ADVANCE(606);
      if (lookahead == '|') ADVANCE(655);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(586);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(609);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(583);
      if (lookahead == 'A') ADVANCE(587);
      if (lookahead == 'B') ADVANCE(588);
      if (lookahead == 'C') ADVANCE(589);
      if (lookahead == 'D') ADVANCE(590);
      if (lookahead == 'F') ADVANCE(591);
      if (lookahead == 'G') ADVANCE(592);
      if (lookahead == 'H') ADVANCE(648);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(644);
      if (lookahead == 'M') ADVANCE(645);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(649);
      if (lookahead == 'P') ADVANCE(646);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'S') ADVANCE(650);
      if (lookahead == 'T') ADVANCE(647);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(597);
      if (lookahead == 'Z') ADVANCE(596);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '^') ADVANCE(584);
      if (lookahead == '_') ADVANCE(585);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '{') ADVANCE(606);
      if (lookahead == '|') ADVANCE(655);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(572);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(643);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(586);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(651);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(715);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(701);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(747);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(741);
      if (lookahead == 'l') ADVANCE(273);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(759);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(763);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(767);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(771);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(749);
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(745);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(743);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(739);
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(751);
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(737);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(755);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(779);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(777);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(775);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(753);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(785);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(729);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(717);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(735);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(689);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(719);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(691);
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(773);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(721);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(731);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(675);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(693);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(725);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(723);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(703);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(733);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(783);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(781);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(711);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(677);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(679);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(713);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(727);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(707);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(685);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(699);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(705);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(757);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(761);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(791);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(765);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(769);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(787);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(695);
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(681);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(789);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(687);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(683);
      END_STATE();
    case 67:
      if (lookahead == '!') ADVANCE(697);
      END_STATE();
    case 68:
      if (lookahead == '!') ADVANCE(709);
      END_STATE();
    case 69:
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '*') ADVANCE(556);
      if (lookahead == ',') ADVANCE(653);
      if (lookahead == '-') ADVANCE(558);
      if (lookahead == ':') ADVANCE(369);
      if (lookahead == '[') ADVANCE(549);
      if (lookahead == '|') ADVANCE(656);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == '/') ADVANCE(601);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(583);
      if (lookahead == 'X') ADVANCE(99);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == ']') ADVANCE(582);
      if (lookahead == '^') ADVANCE(584);
      if (lookahead == '_') ADVANCE(585);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == '{') ADVANCE(606);
      if (lookahead == '}') ADVANCE(607);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(593);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(603);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(571);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(602);
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
          lookahead == '~') ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(586);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '/') ADVANCE(610);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(642);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(583);
      if (lookahead == '^') ADVANCE(584);
      if (lookahead == '_') ADVANCE(615);
      if (lookahead == 'a') ADVANCE(640);
      if (lookahead == 'd') ADVANCE(624);
      if (lookahead == 'm') ADVANCE(616);
      if (lookahead == 's') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 73:
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      END_STATE();
    case 74:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      END_STATE();
    case 75:
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      END_STATE();
    case 76:
      if (lookahead == '*') ADVANCE(556);
      if (lookahead == '+') ADVANCE(368);
      if (lookahead == '-') ADVANCE(558);
      if (lookahead == '_') ADVANCE(559);
      if (lookahead == '|') ADVANCE(657);
      if (lookahead == '~') ADVANCE(562);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(551);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 77:
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '>') ADVANCE(10);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(107);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(141);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 's') ADVANCE(139);
      if (lookahead == 't') ADVANCE(142);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == 'w') ADVANCE(143);
      END_STATE();
    case 78:
      if (lookahead == '+') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(105);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(104);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 83:
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 84:
      if (lookahead == '.') ADVANCE(25);
      END_STATE();
    case 85:
      if (lookahead == '5') ADVANCE(50);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(668);
      if (lookahead == '|') ADVANCE(666);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(802);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(803);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(806);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(813);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(810);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(817);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(821);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(824);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(804);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(809);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(812);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(822);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(808);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(287);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(287);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(100);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 105:
      if (lookahead == 'W') ADVANCE(819);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(125);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(255);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(133);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(185);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(164);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(225);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(126);
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(111);
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
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(176);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(114);
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
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(261);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(131);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'p') ADVANCE(19);
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
      if (lookahead == 'e') ADVANCE(106);
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
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(64);
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
      if (lookahead == 'h') ADVANCE(108);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(245);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(44);
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
      if (lookahead == 'l') ADVANCE(39);
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
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(122);
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
      if (lookahead == 'm') ADVANCE(112);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(119);
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
      if (lookahead == 'n') ADVANCE(123);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(169);
      if (lookahead == 'w') ADVANCE(158);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(62);
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
      if (lookahead == 'n') ADVANCE(29);
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
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(121);
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
      if (lookahead == 'p') ADVANCE(33);
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
      if (lookahead == 'r') ADVANCE(110);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(181);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(118);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(120);
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
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(55);
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
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(148);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(116);
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
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 282:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 283:
      if (lookahead == 'z') ADVANCE(23);
      END_STATE();
    case 284:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(604);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(102);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      END_STATE();
    case 288:
      if (eof) ADVANCE(289);
      if (lookahead == '\n') ADVANCE(291);
      if (lookahead == 'H') ADVANCE(79);
      if (lookahead == 'W') ADVANCE(94);
      if (('h' <= lookahead && lookahead <= 'w')) ADVANCE(818);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(571);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(571);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_LF);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(572);
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
      if (lookahead == '!') ADVANCE(716);
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
      if (lookahead == '!') ADVANCE(702);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(748);
      if (lookahead == 'e') ADVANCE(505);
      if (lookahead == 'f') ADVANCE(306);
      if (lookahead == 'i') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(742);
      if (lookahead == 'l') ADVANCE(538);
      if (lookahead == 'p') ADVANCE(309);
      if (lookahead == 'r') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(750);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(740);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(752);
      if (lookahead == 'f') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(738);
      if (lookahead == 'p') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(692);
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
      if (lookahead == '!') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(676);
      if (lookahead == '(') ADVANCE(337);
      if (lookahead == ')') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(680);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(696);
      if (lookahead == 'x') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '"') ADVANCE(552);
      if (lookahead == '%') ADVANCE(70);
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
      if (lookahead == ':') ADVANCE(669);
      if (lookahead == '|') ADVANCE(667);
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
      if (lookahead == '|') ADVANCE(663);
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
      if (lookahead == ':') ADVANCE(823);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_note_skip);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_note_skip);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_TILDE);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_BEAM_SEPARATOR);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '%') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(569);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '-') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(569);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'a') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(569);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'b') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(569);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'c') ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(569);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(569);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(aux_sym__MUSIC_CODE_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(571);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(aux_sym__music_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (lookahead == '\n') ADVANCE(292);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(609);
      if (lookahead == '%') ADVANCE(564);
      if (lookahead == '(') ADVANCE(577);
      if (lookahead == ')') ADVANCE(578);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(583);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(644);
      if (lookahead == 'M') ADVANCE(645);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(646);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(647);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(597);
      if (lookahead == 'Z') ADVANCE(595);
      if (lookahead == '[') ADVANCE(581);
      if (lookahead == '^') ADVANCE(584);
      if (lookahead == '_') ADVANCE(585);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead == '{') ADVANCE(606);
      if (lookahead == '|') ADVANCE(655);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(571);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(586);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (lookahead == '\n') ADVANCE(576);
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '"') ADVANCE(358);
      if (lookahead == '*') ADVANCE(556);
      if (lookahead == ':') ADVANCE(369);
      if (lookahead == '[') ADVANCE(549);
      if (lookahead == '|') ADVANCE(656);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(294);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (lookahead == '"') ADVANCE(608);
      if (lookahead == '(') ADVANCE(285);
      if (lookahead == '-') ADVANCE(579);
      if (lookahead == '/') ADVANCE(601);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(583);
      if (lookahead == '[') ADVANCE(580);
      if (lookahead == '^') ADVANCE(584);
      if (lookahead == '_') ADVANCE(585);
      if (lookahead == '`') ADVANCE(563);
      if (lookahead == '{') ADVANCE(606);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(593);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(603);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(594);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(602);
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
          lookahead == '~') ADVANCE(643);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(586);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
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
      if (lookahead == '|') ADVANCE(662);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(583);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(583);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(795);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(796);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(797);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(798);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(799);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(800);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == ':') ADVANCE(814);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '0') ADVANCE(599);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(598);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(599);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(600);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(600);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(604);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(602);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(605);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(286);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(613);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(627);
      if (lookahead == 'i') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(617);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(618);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(642);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(816);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(805);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(793);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(815);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(801);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(807);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(811);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(aux_sym_nth_ending_number_token1);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_bar_line);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(664);
      if (lookahead == ']') ADVANCE(658);
      if (lookahead == '|') ADVANCE(660);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(665);
      if (lookahead == ']') ADVANCE(659);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(670);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(aux_sym_lyric_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(671);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(672);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(552);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(sym_parts_line);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(569);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(sym_area);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_book);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_composer);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_discography);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_file);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_group);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_history);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_macros);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_meter);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_X_COLON);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_remark);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_rhythm_line);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_s_COLON);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_tempo);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_transcription);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_tune_title);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_unit_note_length);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(anon_sym_U_COLON);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(aux_sym_user_defined_token2);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_voice);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(anon_sym_w_COLON);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_words_postbody);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 71},
  [2] = {.lex_state = 4},
  [3] = {.lex_state = 4},
  [4] = {.lex_state = 4},
  [5] = {.lex_state = 5},
  [6] = {.lex_state = 5},
  [7] = {.lex_state = 5},
  [8] = {.lex_state = 5},
  [9] = {.lex_state = 5},
  [10] = {.lex_state = 5},
  [11] = {.lex_state = 4},
  [12] = {.lex_state = 1},
  [13] = {.lex_state = 1},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 573},
  [16] = {.lex_state = 573},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 573},
  [19] = {.lex_state = 1},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 1},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 4},
  [32] = {.lex_state = 4},
  [33] = {.lex_state = 4},
  [34] = {.lex_state = 2},
  [35] = {.lex_state = 2},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 69},
  [38] = {.lex_state = 69},
  [39] = {.lex_state = 69},
  [40] = {.lex_state = 574},
  [41] = {.lex_state = 574},
  [42] = {.lex_state = 69},
  [43] = {.lex_state = 574},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 2},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 2},
  [49] = {.lex_state = 2},
  [50] = {.lex_state = 2},
  [51] = {.lex_state = 2},
  [52] = {.lex_state = 2},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 2},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 575},
  [57] = {.lex_state = 575},
  [58] = {.lex_state = 71},
  [59] = {.lex_state = 71},
  [60] = {.lex_state = 71},
  [61] = {.lex_state = 71},
  [62] = {.lex_state = 71},
  [63] = {.lex_state = 71},
  [64] = {.lex_state = 71},
  [65] = {.lex_state = 71},
  [66] = {.lex_state = 575},
  [67] = {.lex_state = 575},
  [68] = {.lex_state = 71},
  [69] = {.lex_state = 575},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 575},
  [72] = {.lex_state = 3},
  [73] = {.lex_state = 71},
  [74] = {.lex_state = 76},
  [75] = {.lex_state = 575},
  [76] = {.lex_state = 71},
  [77] = {.lex_state = 71},
  [78] = {.lex_state = 71},
  [79] = {.lex_state = 71},
  [80] = {.lex_state = 71},
  [81] = {.lex_state = 71},
  [82] = {.lex_state = 71},
  [83] = {.lex_state = 3},
  [84] = {.lex_state = 71},
  [85] = {.lex_state = 71},
  [86] = {.lex_state = 71},
  [87] = {.lex_state = 71},
  [88] = {.lex_state = 71},
  [89] = {.lex_state = 3},
  [90] = {.lex_state = 0},
  [91] = {.lex_state = 0},
  [92] = {.lex_state = 0},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 0},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 575},
  [101] = {.lex_state = 71},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 575},
  [104] = {.lex_state = 575},
  [105] = {.lex_state = 71},
  [106] = {.lex_state = 71},
  [107] = {.lex_state = 575},
  [108] = {.lex_state = 71},
  [109] = {.lex_state = 575},
  [110] = {.lex_state = 71},
  [111] = {.lex_state = 71},
  [112] = {.lex_state = 71},
  [113] = {.lex_state = 575},
  [114] = {.lex_state = 575},
  [115] = {.lex_state = 71},
  [116] = {.lex_state = 575},
  [117] = {.lex_state = 71},
  [118] = {.lex_state = 575},
  [119] = {.lex_state = 575},
  [120] = {.lex_state = 575},
  [121] = {.lex_state = 71},
  [122] = {.lex_state = 71},
  [123] = {.lex_state = 575},
  [124] = {.lex_state = 0},
  [125] = {.lex_state = 71},
  [126] = {.lex_state = 71},
  [127] = {.lex_state = 71},
  [128] = {.lex_state = 575},
  [129] = {.lex_state = 575},
  [130] = {.lex_state = 71},
  [131] = {.lex_state = 71},
  [132] = {.lex_state = 575},
  [133] = {.lex_state = 71},
  [134] = {.lex_state = 71},
  [135] = {.lex_state = 575},
  [136] = {.lex_state = 575},
  [137] = {.lex_state = 575},
  [138] = {.lex_state = 575},
  [139] = {.lex_state = 71},
  [140] = {.lex_state = 71},
  [141] = {.lex_state = 575},
  [142] = {.lex_state = 575},
  [143] = {.lex_state = 575},
  [144] = {.lex_state = 71},
  [145] = {.lex_state = 575},
  [146] = {.lex_state = 71},
  [147] = {.lex_state = 76},
  [148] = {.lex_state = 0},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 76},
  [151] = {.lex_state = 76},
  [152] = {.lex_state = 0},
  [153] = {.lex_state = 76},
  [154] = {.lex_state = 0},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 3},
  [157] = {.lex_state = 3},
  [158] = {.lex_state = 71},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 3},
  [164] = {.lex_state = 0},
  [165] = {.lex_state = 0},
  [166] = {.lex_state = 288},
  [167] = {.lex_state = 288},
  [168] = {.lex_state = 71},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 71},
  [171] = {.lex_state = 0},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 71},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 71},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 71},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 72},
  [188] = {.lex_state = 288},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 288},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 288},
  [193] = {.lex_state = 78},
  [194] = {.lex_state = 288},
  [195] = {.lex_state = 78},
  [196] = {.lex_state = 288},
  [197] = {.lex_state = 78},
  [198] = {.lex_state = 72},
  [199] = {.lex_state = 82},
  [200] = {.lex_state = 72},
  [201] = {.lex_state = 72},
  [202] = {.lex_state = 82},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 82},
  [205] = {.lex_state = 82},
  [206] = {.lex_state = 0},
  [207] = {.lex_state = 0},
  [208] = {.lex_state = 71},
  [209] = {.lex_state = 2},
  [210] = {.lex_state = 2},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 288},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 3},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 288},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 4},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 5},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 671},
  [232] = {.lex_state = 3},
  [233] = {.lex_state = 1},
  [234] = {.lex_state = 5},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 5},
  [237] = {.lex_state = 5},
  [238] = {.lex_state = 71},
  [239] = {.lex_state = 78},
  [240] = {.lex_state = 0},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 2},
  [243] = {.lex_state = 78},
  [244] = {.lex_state = 78},
  [245] = {.lex_state = 78},
  [246] = {.lex_state = 5},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 4},
  [249] = {.lex_state = 3},
  [250] = {.lex_state = 71},
  [251] = {.lex_state = 671},
  [252] = {.lex_state = 71},
  [253] = {.lex_state = 5},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 5},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 3},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 71},
  [262] = {.lex_state = 71},
  [263] = {.lex_state = 78},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [sym_note_skip] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_BEAM_SEPARATOR] = ACTIONS(1),
    [sym_COMMENT] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(1),
    [aux_sym__music_content_token1] = ACTIONS(1),
    [aux_sym_beam_token1] = ACTIONS(1),
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
    [sym_instruction] = ACTIONS(1),
    [sym_key] = ACTIONS(1),
    [sym_macros] = ACTIONS(1),
    [sym_meter] = ACTIONS(1),
    [sym_notes] = ACTIONS(1),
    [sym_remark] = ACTIONS(1),
    [sym_rhythm_line] = ACTIONS(1),
    [anon_sym_s_COLON] = ACTIONS(1),
    [sym_tempo] = ACTIONS(1),
    [sym_tune_title] = ACTIONS(1),
    [sym_unit_note_length] = ACTIONS(1),
    [anon_sym_U_COLON] = ACTIONS(1),
    [sym_voice] = ACTIONS(1),
    [anon_sym_w_COLON] = ACTIONS(1),
    [aux_sym_words_line_token1] = ACTIONS(1),
    [sym_words_postbody] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(255),
    [sym_tune] = STATE(254),
    [sym_tune_header] = STATE(11),
    [sym_reference_number_line] = STATE(6),
    [anon_sym_X_COLON] = ACTIONS(3),
  },
  [2] = {
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(28),
    [sym__nte_or_chrd] = STATE(58),
    [sym_beam] = STATE(28),
    [sym_note_construct] = STATE(58),
    [sym__chord_cstrct] = STATE(58),
    [sym_note] = STATE(122),
    [sym__pitch] = STATE(82),
    [sym_multimeasure_rest] = STATE(28),
    [sym_grace_note] = STATE(68),
    [sym_chord_symbol] = STATE(154),
    [sym_decoration] = STATE(178),
    [sym_nth_ending_barline] = STATE(23),
    [sym_generic_bar_line] = STATE(28),
    [sym_first_repeat_bar] = STATE(23),
    [sym_second_repeat_bar] = STATE(23),
    [sym_symbol] = STATE(28),
    [sym_symbol_line] = STATE(243),
    [sym_user_defined] = STATE(243),
    [sym_words_line] = STATE(243),
    [sym_body_info_line] = STATE(2),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(68),
    [anon_sym_LF] = ACTIONS(5),
    [sym_COMMENT] = ACTIONS(7),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(10),
    [aux_sym__music_content_token1] = ACTIONS(13),
    [sym_slur_open] = ACTIONS(16),
    [sym_slur_close] = ACTIONS(19),
    [anon_sym_LBRACK] = ACTIONS(22),
    [sym_alteration] = ACTIONS(25),
    [sym_note_letter] = ACTIONS(28),
    [sym_rest] = ACTIONS(31),
    [anon_sym_Z] = ACTIONS(34),
    [anon_sym_X] = ACTIONS(34),
    [aux_sym_grace_note_token1] = ACTIONS(37),
    [aux_sym_chord_symbol_token1] = ACTIONS(40),
    [sym_annotation] = ACTIONS(19),
    [sym_tuplet_marker] = ACTIONS(43),
    [sym_decoration_shorthand] = ACTIONS(46),
    [sym_bar_line] = ACTIONS(49),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(52),
    [sym_thin_double_bar_line] = ACTIONS(52),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(52),
    [sym_start_of_repeated_section] = ACTIONS(55),
    [sym_end_of_repeated_section] = ACTIONS(58),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(55),
    [anon_sym_BANGtrill_BANG] = ACTIONS(61),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(61),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(61),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(61),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(61),
    [anon_sym_BANGmordent_BANG] = ACTIONS(61),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(61),
    [anon_sym_BANGroll_BANG] = ACTIONS(61),
    [anon_sym_BANGturn_BANG] = ACTIONS(61),
    [anon_sym_BANGturnx_BANG] = ACTIONS(61),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(61),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(61),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(61),
    [anon_sym_BANG_GT_BANG] = ACTIONS(61),
    [anon_sym_BANGaccent_BANG] = ACTIONS(61),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(61),
    [anon_sym_BANGfermata_BANG] = ACTIONS(61),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(61),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(61),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(61),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(61),
    [anon_sym_BANGplus_BANG] = ACTIONS(61),
    [anon_sym_BANGsnap_BANG] = ACTIONS(61),
    [anon_sym_BANGslide_BANG] = ACTIONS(61),
    [anon_sym_BANGwedge_BANG] = ACTIONS(61),
    [anon_sym_BANGupbow_BANG] = ACTIONS(61),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(61),
    [anon_sym_BANGopen_BANG] = ACTIONS(61),
    [anon_sym_BANGthumb_BANG] = ACTIONS(61),
    [anon_sym_BANGbreath_BANG] = ACTIONS(61),
    [anon_sym_BANGpppp_BANG] = ACTIONS(61),
    [anon_sym_BANGppp_BANG] = ACTIONS(61),
    [anon_sym_BANGpp_BANG] = ACTIONS(61),
    [anon_sym_BANGp_BANG] = ACTIONS(61),
    [anon_sym_BANGmp_BANG] = ACTIONS(61),
    [anon_sym_BANGmf_BANG] = ACTIONS(61),
    [anon_sym_BANGf_BANG] = ACTIONS(61),
    [anon_sym_BANGff_BANG] = ACTIONS(61),
    [anon_sym_BANGfff_BANG] = ACTIONS(61),
    [anon_sym_BANGffff_BANG] = ACTIONS(61),
    [anon_sym_BANGsfz_BANG] = ACTIONS(61),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(61),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(61),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(61),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(61),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(61),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(61),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(61),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(61),
    [anon_sym_BANGsegno_BANG] = ACTIONS(61),
    [anon_sym_BANGcoda_BANG] = ACTIONS(61),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(61),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(61),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(61),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(61),
    [anon_sym_BANGfine_BANG] = ACTIONS(61),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(61),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(61),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(61),
    [sym_parts_line] = ACTIONS(64),
    [sym_instruction] = ACTIONS(64),
    [sym_key] = ACTIONS(64),
    [sym_macros] = ACTIONS(64),
    [sym_meter] = ACTIONS(64),
    [sym_notes] = ACTIONS(64),
    [sym_remark] = ACTIONS(64),
    [sym_rhythm_line] = ACTIONS(64),
    [anon_sym_s_COLON] = ACTIONS(67),
    [sym_tempo] = ACTIONS(64),
    [sym_tune_title] = ACTIONS(64),
    [sym_unit_note_length] = ACTIONS(64),
    [anon_sym_U_COLON] = ACTIONS(70),
    [sym_voice] = ACTIONS(64),
    [anon_sym_w_COLON] = ACTIONS(73),
    [sym_words_postbody] = ACTIONS(76),
  },
  [3] = {
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(28),
    [sym__nte_or_chrd] = STATE(58),
    [sym_beam] = STATE(28),
    [sym_note_construct] = STATE(58),
    [sym__chord_cstrct] = STATE(58),
    [sym_note] = STATE(122),
    [sym__pitch] = STATE(82),
    [sym_multimeasure_rest] = STATE(28),
    [sym_grace_note] = STATE(68),
    [sym_chord_symbol] = STATE(154),
    [sym_decoration] = STATE(178),
    [sym_nth_ending_barline] = STATE(23),
    [sym_generic_bar_line] = STATE(28),
    [sym_first_repeat_bar] = STATE(23),
    [sym_second_repeat_bar] = STATE(23),
    [sym_symbol] = STATE(28),
    [sym_symbol_line] = STATE(243),
    [sym_user_defined] = STATE(243),
    [sym_words_line] = STATE(243),
    [sym_body_info_line] = STATE(2),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(68),
    [anon_sym_LF] = ACTIONS(78),
    [sym_COMMENT] = ACTIONS(80),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(82),
    [aux_sym__music_content_token1] = ACTIONS(84),
    [sym_slur_open] = ACTIONS(86),
    [sym_slur_close] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(90),
    [sym_alteration] = ACTIONS(92),
    [sym_note_letter] = ACTIONS(94),
    [sym_rest] = ACTIONS(96),
    [anon_sym_Z] = ACTIONS(98),
    [anon_sym_X] = ACTIONS(98),
    [aux_sym_grace_note_token1] = ACTIONS(100),
    [aux_sym_chord_symbol_token1] = ACTIONS(102),
    [sym_annotation] = ACTIONS(88),
    [sym_tuplet_marker] = ACTIONS(104),
    [sym_decoration_shorthand] = ACTIONS(106),
    [sym_bar_line] = ACTIONS(108),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(110),
    [sym_thin_double_bar_line] = ACTIONS(110),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(110),
    [sym_start_of_repeated_section] = ACTIONS(112),
    [sym_end_of_repeated_section] = ACTIONS(114),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(112),
    [anon_sym_BANGtrill_BANG] = ACTIONS(116),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(116),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(116),
    [anon_sym_BANGmordent_BANG] = ACTIONS(116),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(116),
    [anon_sym_BANGroll_BANG] = ACTIONS(116),
    [anon_sym_BANGturn_BANG] = ACTIONS(116),
    [anon_sym_BANGturnx_BANG] = ACTIONS(116),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(116),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(116),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(116),
    [anon_sym_BANG_GT_BANG] = ACTIONS(116),
    [anon_sym_BANGaccent_BANG] = ACTIONS(116),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(116),
    [anon_sym_BANGfermata_BANG] = ACTIONS(116),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(116),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(116),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(116),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(116),
    [anon_sym_BANGplus_BANG] = ACTIONS(116),
    [anon_sym_BANGsnap_BANG] = ACTIONS(116),
    [anon_sym_BANGslide_BANG] = ACTIONS(116),
    [anon_sym_BANGwedge_BANG] = ACTIONS(116),
    [anon_sym_BANGupbow_BANG] = ACTIONS(116),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(116),
    [anon_sym_BANGopen_BANG] = ACTIONS(116),
    [anon_sym_BANGthumb_BANG] = ACTIONS(116),
    [anon_sym_BANGbreath_BANG] = ACTIONS(116),
    [anon_sym_BANGpppp_BANG] = ACTIONS(116),
    [anon_sym_BANGppp_BANG] = ACTIONS(116),
    [anon_sym_BANGpp_BANG] = ACTIONS(116),
    [anon_sym_BANGp_BANG] = ACTIONS(116),
    [anon_sym_BANGmp_BANG] = ACTIONS(116),
    [anon_sym_BANGmf_BANG] = ACTIONS(116),
    [anon_sym_BANGf_BANG] = ACTIONS(116),
    [anon_sym_BANGff_BANG] = ACTIONS(116),
    [anon_sym_BANGfff_BANG] = ACTIONS(116),
    [anon_sym_BANGffff_BANG] = ACTIONS(116),
    [anon_sym_BANGsfz_BANG] = ACTIONS(116),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGsegno_BANG] = ACTIONS(116),
    [anon_sym_BANGcoda_BANG] = ACTIONS(116),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(116),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(116),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(116),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(116),
    [anon_sym_BANGfine_BANG] = ACTIONS(116),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(116),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(116),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(116),
    [sym_parts_line] = ACTIONS(118),
    [sym_instruction] = ACTIONS(118),
    [sym_key] = ACTIONS(118),
    [sym_macros] = ACTIONS(118),
    [sym_meter] = ACTIONS(118),
    [sym_notes] = ACTIONS(118),
    [sym_remark] = ACTIONS(118),
    [sym_rhythm_line] = ACTIONS(118),
    [anon_sym_s_COLON] = ACTIONS(120),
    [sym_tempo] = ACTIONS(118),
    [sym_tune_title] = ACTIONS(118),
    [sym_unit_note_length] = ACTIONS(118),
    [anon_sym_U_COLON] = ACTIONS(122),
    [sym_voice] = ACTIONS(118),
    [anon_sym_w_COLON] = ACTIONS(124),
    [sym_words_postbody] = ACTIONS(126),
  },
  [4] = {
    [sym_stylesheet_directives] = STATE(3),
    [sym__MUSIC_CODE] = STATE(3),
    [sym__music_content] = STATE(28),
    [sym__nte_or_chrd] = STATE(58),
    [sym_beam] = STATE(28),
    [sym_note_construct] = STATE(58),
    [sym__chord_cstrct] = STATE(58),
    [sym_note] = STATE(122),
    [sym__pitch] = STATE(82),
    [sym_multimeasure_rest] = STATE(28),
    [sym_grace_note] = STATE(68),
    [sym_chord_symbol] = STATE(154),
    [sym_decoration] = STATE(178),
    [sym_nth_ending_barline] = STATE(23),
    [sym_generic_bar_line] = STATE(28),
    [sym_first_repeat_bar] = STATE(23),
    [sym_second_repeat_bar] = STATE(23),
    [sym_symbol] = STATE(28),
    [sym_symbol_line] = STATE(243),
    [sym_user_defined] = STATE(243),
    [sym_words_line] = STATE(243),
    [sym_body_info_line] = STATE(3),
    [aux_sym_tune_body_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(68),
    [anon_sym_LF] = ACTIONS(128),
    [sym_COMMENT] = ACTIONS(130),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(82),
    [aux_sym__music_content_token1] = ACTIONS(84),
    [sym_slur_open] = ACTIONS(86),
    [sym_slur_close] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(90),
    [sym_alteration] = ACTIONS(92),
    [sym_note_letter] = ACTIONS(94),
    [sym_rest] = ACTIONS(96),
    [anon_sym_Z] = ACTIONS(98),
    [anon_sym_X] = ACTIONS(98),
    [aux_sym_grace_note_token1] = ACTIONS(100),
    [aux_sym_chord_symbol_token1] = ACTIONS(102),
    [sym_annotation] = ACTIONS(88),
    [sym_tuplet_marker] = ACTIONS(104),
    [sym_decoration_shorthand] = ACTIONS(106),
    [sym_bar_line] = ACTIONS(108),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(110),
    [sym_thin_double_bar_line] = ACTIONS(110),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(110),
    [sym_start_of_repeated_section] = ACTIONS(112),
    [sym_end_of_repeated_section] = ACTIONS(114),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(112),
    [anon_sym_BANGtrill_BANG] = ACTIONS(116),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(116),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(116),
    [anon_sym_BANGmordent_BANG] = ACTIONS(116),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(116),
    [anon_sym_BANGroll_BANG] = ACTIONS(116),
    [anon_sym_BANGturn_BANG] = ACTIONS(116),
    [anon_sym_BANGturnx_BANG] = ACTIONS(116),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(116),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(116),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(116),
    [anon_sym_BANG_GT_BANG] = ACTIONS(116),
    [anon_sym_BANGaccent_BANG] = ACTIONS(116),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(116),
    [anon_sym_BANGfermata_BANG] = ACTIONS(116),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(116),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(116),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(116),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(116),
    [anon_sym_BANGplus_BANG] = ACTIONS(116),
    [anon_sym_BANGsnap_BANG] = ACTIONS(116),
    [anon_sym_BANGslide_BANG] = ACTIONS(116),
    [anon_sym_BANGwedge_BANG] = ACTIONS(116),
    [anon_sym_BANGupbow_BANG] = ACTIONS(116),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(116),
    [anon_sym_BANGopen_BANG] = ACTIONS(116),
    [anon_sym_BANGthumb_BANG] = ACTIONS(116),
    [anon_sym_BANGbreath_BANG] = ACTIONS(116),
    [anon_sym_BANGpppp_BANG] = ACTIONS(116),
    [anon_sym_BANGppp_BANG] = ACTIONS(116),
    [anon_sym_BANGpp_BANG] = ACTIONS(116),
    [anon_sym_BANGp_BANG] = ACTIONS(116),
    [anon_sym_BANGmp_BANG] = ACTIONS(116),
    [anon_sym_BANGmf_BANG] = ACTIONS(116),
    [anon_sym_BANGf_BANG] = ACTIONS(116),
    [anon_sym_BANGff_BANG] = ACTIONS(116),
    [anon_sym_BANGfff_BANG] = ACTIONS(116),
    [anon_sym_BANGffff_BANG] = ACTIONS(116),
    [anon_sym_BANGsfz_BANG] = ACTIONS(116),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGsegno_BANG] = ACTIONS(116),
    [anon_sym_BANGcoda_BANG] = ACTIONS(116),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(116),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(116),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(116),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(116),
    [anon_sym_BANGfine_BANG] = ACTIONS(116),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(116),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(116),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(116),
    [sym_parts_line] = ACTIONS(118),
    [sym_instruction] = ACTIONS(118),
    [sym_key] = ACTIONS(118),
    [sym_macros] = ACTIONS(118),
    [sym_meter] = ACTIONS(118),
    [sym_notes] = ACTIONS(118),
    [sym_remark] = ACTIONS(118),
    [sym_rhythm_line] = ACTIONS(118),
    [anon_sym_s_COLON] = ACTIONS(120),
    [sym_tempo] = ACTIONS(118),
    [sym_tune_title] = ACTIONS(118),
    [sym_unit_note_length] = ACTIONS(118),
    [anon_sym_U_COLON] = ACTIONS(122),
    [sym_voice] = ACTIONS(118),
    [anon_sym_w_COLON] = ACTIONS(124),
    [sym_words_postbody] = ACTIONS(132),
  },
  [5] = {
    [sym_abc_version] = STATE(245),
    [sym_symbol_line] = STATE(245),
    [sym_user_defined] = STATE(245),
    [sym_tune_header_info_line] = STATE(242),
    [aux_sym_tune_header_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(134),
    [sym_COMMENT] = ACTIONS(136),
    [aux_sym__music_content_token1] = ACTIONS(134),
    [sym_slur_open] = ACTIONS(134),
    [sym_slur_close] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(134),
    [sym_alteration] = ACTIONS(139),
    [sym_note_letter] = ACTIONS(134),
    [sym_rest] = ACTIONS(139),
    [anon_sym_Z] = ACTIONS(134),
    [anon_sym_X] = ACTIONS(139),
    [aux_sym_grace_note_token1] = ACTIONS(139),
    [aux_sym_chord_symbol_token1] = ACTIONS(134),
    [sym_annotation] = ACTIONS(139),
    [sym_tuplet_marker] = ACTIONS(139),
    [sym_decoration_shorthand] = ACTIONS(134),
    [sym_bar_line] = ACTIONS(134),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(139),
    [sym_thin_double_bar_line] = ACTIONS(139),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(139),
    [sym_start_of_repeated_section] = ACTIONS(139),
    [sym_end_of_repeated_section] = ACTIONS(139),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(139),
    [anon_sym_BANGtrill_BANG] = ACTIONS(139),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(139),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(139),
    [anon_sym_BANGmordent_BANG] = ACTIONS(139),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(139),
    [anon_sym_BANGroll_BANG] = ACTIONS(139),
    [anon_sym_BANGturn_BANG] = ACTIONS(139),
    [anon_sym_BANGturnx_BANG] = ACTIONS(139),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(139),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(139),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(139),
    [anon_sym_BANG_GT_BANG] = ACTIONS(139),
    [anon_sym_BANGaccent_BANG] = ACTIONS(139),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(139),
    [anon_sym_BANGfermata_BANG] = ACTIONS(139),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(139),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(139),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(139),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(139),
    [anon_sym_BANGplus_BANG] = ACTIONS(139),
    [anon_sym_BANGsnap_BANG] = ACTIONS(139),
    [anon_sym_BANGslide_BANG] = ACTIONS(139),
    [anon_sym_BANGwedge_BANG] = ACTIONS(139),
    [anon_sym_BANGupbow_BANG] = ACTIONS(139),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(139),
    [anon_sym_BANGopen_BANG] = ACTIONS(139),
    [anon_sym_BANGthumb_BANG] = ACTIONS(139),
    [anon_sym_BANGbreath_BANG] = ACTIONS(139),
    [anon_sym_BANGpppp_BANG] = ACTIONS(139),
    [anon_sym_BANGppp_BANG] = ACTIONS(139),
    [anon_sym_BANGpp_BANG] = ACTIONS(139),
    [anon_sym_BANGp_BANG] = ACTIONS(139),
    [anon_sym_BANGmp_BANG] = ACTIONS(139),
    [anon_sym_BANGmf_BANG] = ACTIONS(139),
    [anon_sym_BANGf_BANG] = ACTIONS(139),
    [anon_sym_BANGff_BANG] = ACTIONS(139),
    [anon_sym_BANGfff_BANG] = ACTIONS(139),
    [anon_sym_BANGffff_BANG] = ACTIONS(139),
    [anon_sym_BANGsfz_BANG] = ACTIONS(139),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGsegno_BANG] = ACTIONS(139),
    [anon_sym_BANGcoda_BANG] = ACTIONS(139),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(139),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(139),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(139),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(139),
    [anon_sym_BANGfine_BANG] = ACTIONS(139),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(139),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(139),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(139),
    [sym_parts_line] = ACTIONS(141),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(144),
    [sym_area] = ACTIONS(141),
    [sym_book] = ACTIONS(141),
    [sym_composer] = ACTIONS(141),
    [sym_discography] = ACTIONS(141),
    [sym_file] = ACTIONS(141),
    [sym_group] = ACTIONS(141),
    [sym_history] = ACTIONS(141),
    [sym_instruction] = ACTIONS(141),
    [sym_key] = ACTIONS(141),
    [sym_macros] = ACTIONS(141),
    [sym_meter] = ACTIONS(141),
    [sym_notes] = ACTIONS(141),
    [sym_origin] = ACTIONS(141),
    [sym_remark] = ACTIONS(141),
    [sym_rhythm_line] = ACTIONS(141),
    [sym_source] = ACTIONS(141),
    [anon_sym_s_COLON] = ACTIONS(147),
    [sym_tempo] = ACTIONS(141),
    [sym_transcription] = ACTIONS(141),
    [sym_tune_title] = ACTIONS(141),
    [sym_unit_note_length] = ACTIONS(141),
    [anon_sym_U_COLON] = ACTIONS(150),
    [sym_voice] = ACTIONS(141),
    [sym_words_postbody] = ACTIONS(141),
  },
  [6] = {
    [sym_abc_version] = STATE(245),
    [sym_symbol_line] = STATE(245),
    [sym_user_defined] = STATE(245),
    [sym_tune_header_info_line] = STATE(242),
    [aux_sym_tune_header_repeat1] = STATE(7),
    [anon_sym_LF] = ACTIONS(153),
    [sym_COMMENT] = ACTIONS(155),
    [aux_sym__music_content_token1] = ACTIONS(153),
    [sym_slur_open] = ACTIONS(153),
    [sym_slur_close] = ACTIONS(157),
    [anon_sym_LBRACK] = ACTIONS(153),
    [sym_alteration] = ACTIONS(157),
    [sym_note_letter] = ACTIONS(153),
    [sym_rest] = ACTIONS(157),
    [anon_sym_Z] = ACTIONS(153),
    [anon_sym_X] = ACTIONS(157),
    [aux_sym_grace_note_token1] = ACTIONS(157),
    [aux_sym_chord_symbol_token1] = ACTIONS(153),
    [sym_annotation] = ACTIONS(157),
    [sym_tuplet_marker] = ACTIONS(157),
    [sym_decoration_shorthand] = ACTIONS(153),
    [sym_bar_line] = ACTIONS(153),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(157),
    [sym_thin_double_bar_line] = ACTIONS(157),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(157),
    [sym_start_of_repeated_section] = ACTIONS(157),
    [sym_end_of_repeated_section] = ACTIONS(157),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(157),
    [anon_sym_BANGtrill_BANG] = ACTIONS(157),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(157),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(157),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(157),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(157),
    [anon_sym_BANGmordent_BANG] = ACTIONS(157),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(157),
    [anon_sym_BANGroll_BANG] = ACTIONS(157),
    [anon_sym_BANGturn_BANG] = ACTIONS(157),
    [anon_sym_BANGturnx_BANG] = ACTIONS(157),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(157),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(157),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(157),
    [anon_sym_BANG_GT_BANG] = ACTIONS(157),
    [anon_sym_BANGaccent_BANG] = ACTIONS(157),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(157),
    [anon_sym_BANGfermata_BANG] = ACTIONS(157),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(157),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(157),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(157),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(157),
    [anon_sym_BANGplus_BANG] = ACTIONS(157),
    [anon_sym_BANGsnap_BANG] = ACTIONS(157),
    [anon_sym_BANGslide_BANG] = ACTIONS(157),
    [anon_sym_BANGwedge_BANG] = ACTIONS(157),
    [anon_sym_BANGupbow_BANG] = ACTIONS(157),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(157),
    [anon_sym_BANGopen_BANG] = ACTIONS(157),
    [anon_sym_BANGthumb_BANG] = ACTIONS(157),
    [anon_sym_BANGbreath_BANG] = ACTIONS(157),
    [anon_sym_BANGpppp_BANG] = ACTIONS(157),
    [anon_sym_BANGppp_BANG] = ACTIONS(157),
    [anon_sym_BANGpp_BANG] = ACTIONS(157),
    [anon_sym_BANGp_BANG] = ACTIONS(157),
    [anon_sym_BANGmp_BANG] = ACTIONS(157),
    [anon_sym_BANGmf_BANG] = ACTIONS(157),
    [anon_sym_BANGf_BANG] = ACTIONS(157),
    [anon_sym_BANGff_BANG] = ACTIONS(157),
    [anon_sym_BANGfff_BANG] = ACTIONS(157),
    [anon_sym_BANGffff_BANG] = ACTIONS(157),
    [anon_sym_BANGsfz_BANG] = ACTIONS(157),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(157),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(157),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(157),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(157),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(157),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(157),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(157),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(157),
    [anon_sym_BANGsegno_BANG] = ACTIONS(157),
    [anon_sym_BANGcoda_BANG] = ACTIONS(157),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(157),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(157),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(157),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(157),
    [anon_sym_BANGfine_BANG] = ACTIONS(157),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(157),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(157),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(157),
    [sym_parts_line] = ACTIONS(159),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(161),
    [sym_area] = ACTIONS(159),
    [sym_book] = ACTIONS(159),
    [sym_composer] = ACTIONS(159),
    [sym_discography] = ACTIONS(159),
    [sym_file] = ACTIONS(159),
    [sym_group] = ACTIONS(159),
    [sym_history] = ACTIONS(159),
    [sym_instruction] = ACTIONS(159),
    [sym_key] = ACTIONS(159),
    [sym_macros] = ACTIONS(159),
    [sym_meter] = ACTIONS(159),
    [sym_notes] = ACTIONS(159),
    [sym_origin] = ACTIONS(159),
    [sym_remark] = ACTIONS(159),
    [sym_rhythm_line] = ACTIONS(159),
    [sym_source] = ACTIONS(159),
    [anon_sym_s_COLON] = ACTIONS(120),
    [sym_tempo] = ACTIONS(159),
    [sym_transcription] = ACTIONS(159),
    [sym_tune_title] = ACTIONS(159),
    [sym_unit_note_length] = ACTIONS(159),
    [anon_sym_U_COLON] = ACTIONS(122),
    [sym_voice] = ACTIONS(159),
    [sym_words_postbody] = ACTIONS(157),
  },
  [7] = {
    [sym_abc_version] = STATE(245),
    [sym_symbol_line] = STATE(245),
    [sym_user_defined] = STATE(245),
    [sym_tune_header_info_line] = STATE(242),
    [aux_sym_tune_header_repeat1] = STATE(5),
    [anon_sym_LF] = ACTIONS(163),
    [sym_COMMENT] = ACTIONS(155),
    [aux_sym__music_content_token1] = ACTIONS(163),
    [sym_slur_open] = ACTIONS(163),
    [sym_slur_close] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(163),
    [sym_alteration] = ACTIONS(165),
    [sym_note_letter] = ACTIONS(163),
    [sym_rest] = ACTIONS(165),
    [anon_sym_Z] = ACTIONS(163),
    [anon_sym_X] = ACTIONS(165),
    [aux_sym_grace_note_token1] = ACTIONS(165),
    [aux_sym_chord_symbol_token1] = ACTIONS(163),
    [sym_annotation] = ACTIONS(165),
    [sym_tuplet_marker] = ACTIONS(165),
    [sym_decoration_shorthand] = ACTIONS(163),
    [sym_bar_line] = ACTIONS(163),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(165),
    [sym_thin_double_bar_line] = ACTIONS(165),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(165),
    [sym_start_of_repeated_section] = ACTIONS(165),
    [sym_end_of_repeated_section] = ACTIONS(165),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(165),
    [anon_sym_BANGtrill_BANG] = ACTIONS(165),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(165),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(165),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(165),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(165),
    [anon_sym_BANGmordent_BANG] = ACTIONS(165),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(165),
    [anon_sym_BANGroll_BANG] = ACTIONS(165),
    [anon_sym_BANGturn_BANG] = ACTIONS(165),
    [anon_sym_BANGturnx_BANG] = ACTIONS(165),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(165),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(165),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(165),
    [anon_sym_BANG_GT_BANG] = ACTIONS(165),
    [anon_sym_BANGaccent_BANG] = ACTIONS(165),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(165),
    [anon_sym_BANGfermata_BANG] = ACTIONS(165),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(165),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(165),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(165),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(165),
    [anon_sym_BANGplus_BANG] = ACTIONS(165),
    [anon_sym_BANGsnap_BANG] = ACTIONS(165),
    [anon_sym_BANGslide_BANG] = ACTIONS(165),
    [anon_sym_BANGwedge_BANG] = ACTIONS(165),
    [anon_sym_BANGupbow_BANG] = ACTIONS(165),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(165),
    [anon_sym_BANGopen_BANG] = ACTIONS(165),
    [anon_sym_BANGthumb_BANG] = ACTIONS(165),
    [anon_sym_BANGbreath_BANG] = ACTIONS(165),
    [anon_sym_BANGpppp_BANG] = ACTIONS(165),
    [anon_sym_BANGppp_BANG] = ACTIONS(165),
    [anon_sym_BANGpp_BANG] = ACTIONS(165),
    [anon_sym_BANGp_BANG] = ACTIONS(165),
    [anon_sym_BANGmp_BANG] = ACTIONS(165),
    [anon_sym_BANGmf_BANG] = ACTIONS(165),
    [anon_sym_BANGf_BANG] = ACTIONS(165),
    [anon_sym_BANGff_BANG] = ACTIONS(165),
    [anon_sym_BANGfff_BANG] = ACTIONS(165),
    [anon_sym_BANGffff_BANG] = ACTIONS(165),
    [anon_sym_BANGsfz_BANG] = ACTIONS(165),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(165),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(165),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(165),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(165),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(165),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(165),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(165),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(165),
    [anon_sym_BANGsegno_BANG] = ACTIONS(165),
    [anon_sym_BANGcoda_BANG] = ACTIONS(165),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(165),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(165),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(165),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(165),
    [anon_sym_BANGfine_BANG] = ACTIONS(165),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(165),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(165),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(165),
    [sym_parts_line] = ACTIONS(159),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(161),
    [sym_area] = ACTIONS(159),
    [sym_book] = ACTIONS(159),
    [sym_composer] = ACTIONS(159),
    [sym_discography] = ACTIONS(159),
    [sym_file] = ACTIONS(159),
    [sym_group] = ACTIONS(159),
    [sym_history] = ACTIONS(159),
    [sym_instruction] = ACTIONS(159),
    [sym_key] = ACTIONS(159),
    [sym_macros] = ACTIONS(159),
    [sym_meter] = ACTIONS(159),
    [sym_notes] = ACTIONS(159),
    [sym_origin] = ACTIONS(159),
    [sym_remark] = ACTIONS(159),
    [sym_rhythm_line] = ACTIONS(159),
    [sym_source] = ACTIONS(159),
    [anon_sym_s_COLON] = ACTIONS(120),
    [sym_tempo] = ACTIONS(159),
    [sym_transcription] = ACTIONS(159),
    [sym_tune_title] = ACTIONS(159),
    [sym_unit_note_length] = ACTIONS(159),
    [anon_sym_U_COLON] = ACTIONS(122),
    [sym_voice] = ACTIONS(159),
    [sym_words_postbody] = ACTIONS(165),
  },
  [8] = {
    [anon_sym_LF] = ACTIONS(167),
    [sym_COMMENT] = ACTIONS(167),
    [aux_sym__music_content_token1] = ACTIONS(167),
    [sym_slur_open] = ACTIONS(167),
    [sym_slur_close] = ACTIONS(169),
    [anon_sym_LBRACK] = ACTIONS(167),
    [sym_alteration] = ACTIONS(169),
    [sym_note_letter] = ACTIONS(167),
    [sym_rest] = ACTIONS(169),
    [anon_sym_Z] = ACTIONS(167),
    [anon_sym_X] = ACTIONS(169),
    [aux_sym_grace_note_token1] = ACTIONS(169),
    [aux_sym_chord_symbol_token1] = ACTIONS(167),
    [sym_annotation] = ACTIONS(169),
    [sym_tuplet_marker] = ACTIONS(169),
    [sym_decoration_shorthand] = ACTIONS(167),
    [sym_bar_line] = ACTIONS(167),
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
    [anon_sym_PERCENTabc_DASH] = ACTIONS(167),
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
  [9] = {
    [anon_sym_LF] = ACTIONS(134),
    [sym_COMMENT] = ACTIONS(134),
    [aux_sym__music_content_token1] = ACTIONS(134),
    [sym_slur_open] = ACTIONS(134),
    [sym_slur_close] = ACTIONS(139),
    [anon_sym_LBRACK] = ACTIONS(134),
    [sym_alteration] = ACTIONS(139),
    [sym_note_letter] = ACTIONS(134),
    [sym_rest] = ACTIONS(139),
    [anon_sym_Z] = ACTIONS(134),
    [anon_sym_X] = ACTIONS(139),
    [aux_sym_grace_note_token1] = ACTIONS(139),
    [aux_sym_chord_symbol_token1] = ACTIONS(134),
    [sym_annotation] = ACTIONS(139),
    [sym_tuplet_marker] = ACTIONS(139),
    [sym_decoration_shorthand] = ACTIONS(134),
    [sym_bar_line] = ACTIONS(134),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(139),
    [sym_thin_double_bar_line] = ACTIONS(139),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(139),
    [sym_start_of_repeated_section] = ACTIONS(139),
    [sym_end_of_repeated_section] = ACTIONS(139),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(139),
    [anon_sym_BANGtrill_BANG] = ACTIONS(139),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(139),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(139),
    [anon_sym_BANGmordent_BANG] = ACTIONS(139),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(139),
    [anon_sym_BANGroll_BANG] = ACTIONS(139),
    [anon_sym_BANGturn_BANG] = ACTIONS(139),
    [anon_sym_BANGturnx_BANG] = ACTIONS(139),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(139),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(139),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(139),
    [anon_sym_BANG_GT_BANG] = ACTIONS(139),
    [anon_sym_BANGaccent_BANG] = ACTIONS(139),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(139),
    [anon_sym_BANGfermata_BANG] = ACTIONS(139),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(139),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(139),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(139),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(139),
    [anon_sym_BANGplus_BANG] = ACTIONS(139),
    [anon_sym_BANGsnap_BANG] = ACTIONS(139),
    [anon_sym_BANGslide_BANG] = ACTIONS(139),
    [anon_sym_BANGwedge_BANG] = ACTIONS(139),
    [anon_sym_BANGupbow_BANG] = ACTIONS(139),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(139),
    [anon_sym_BANGopen_BANG] = ACTIONS(139),
    [anon_sym_BANGthumb_BANG] = ACTIONS(139),
    [anon_sym_BANGbreath_BANG] = ACTIONS(139),
    [anon_sym_BANGpppp_BANG] = ACTIONS(139),
    [anon_sym_BANGppp_BANG] = ACTIONS(139),
    [anon_sym_BANGpp_BANG] = ACTIONS(139),
    [anon_sym_BANGp_BANG] = ACTIONS(139),
    [anon_sym_BANGmp_BANG] = ACTIONS(139),
    [anon_sym_BANGmf_BANG] = ACTIONS(139),
    [anon_sym_BANGf_BANG] = ACTIONS(139),
    [anon_sym_BANGff_BANG] = ACTIONS(139),
    [anon_sym_BANGfff_BANG] = ACTIONS(139),
    [anon_sym_BANGffff_BANG] = ACTIONS(139),
    [anon_sym_BANGsfz_BANG] = ACTIONS(139),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(139),
    [anon_sym_BANGsegno_BANG] = ACTIONS(139),
    [anon_sym_BANGcoda_BANG] = ACTIONS(139),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(139),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(139),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(139),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(139),
    [anon_sym_BANGfine_BANG] = ACTIONS(139),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(139),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(139),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(139),
    [sym_parts_line] = ACTIONS(139),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(134),
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
    [sym_remark] = ACTIONS(139),
    [sym_rhythm_line] = ACTIONS(139),
    [sym_source] = ACTIONS(139),
    [anon_sym_s_COLON] = ACTIONS(139),
    [sym_tempo] = ACTIONS(139),
    [sym_transcription] = ACTIONS(139),
    [sym_tune_title] = ACTIONS(139),
    [sym_unit_note_length] = ACTIONS(139),
    [anon_sym_U_COLON] = ACTIONS(139),
    [sym_voice] = ACTIONS(139),
    [sym_words_postbody] = ACTIONS(139),
  },
  [10] = {
    [anon_sym_LF] = ACTIONS(171),
    [sym_COMMENT] = ACTIONS(171),
    [aux_sym__music_content_token1] = ACTIONS(171),
    [sym_slur_open] = ACTIONS(171),
    [sym_slur_close] = ACTIONS(173),
    [anon_sym_LBRACK] = ACTIONS(171),
    [sym_alteration] = ACTIONS(173),
    [sym_note_letter] = ACTIONS(171),
    [sym_rest] = ACTIONS(173),
    [anon_sym_Z] = ACTIONS(171),
    [anon_sym_X] = ACTIONS(173),
    [aux_sym_grace_note_token1] = ACTIONS(173),
    [aux_sym_chord_symbol_token1] = ACTIONS(171),
    [sym_annotation] = ACTIONS(173),
    [sym_tuplet_marker] = ACTIONS(173),
    [sym_decoration_shorthand] = ACTIONS(171),
    [sym_bar_line] = ACTIONS(171),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(173),
    [sym_thin_double_bar_line] = ACTIONS(173),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(173),
    [sym_start_of_repeated_section] = ACTIONS(173),
    [sym_end_of_repeated_section] = ACTIONS(173),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(173),
    [anon_sym_BANGtrill_BANG] = ACTIONS(173),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(173),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(173),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(173),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(173),
    [anon_sym_BANGmordent_BANG] = ACTIONS(173),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(173),
    [anon_sym_BANGroll_BANG] = ACTIONS(173),
    [anon_sym_BANGturn_BANG] = ACTIONS(173),
    [anon_sym_BANGturnx_BANG] = ACTIONS(173),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(173),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(173),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(173),
    [anon_sym_BANG_GT_BANG] = ACTIONS(173),
    [anon_sym_BANGaccent_BANG] = ACTIONS(173),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(173),
    [anon_sym_BANGfermata_BANG] = ACTIONS(173),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(173),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(173),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(173),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(173),
    [anon_sym_BANGplus_BANG] = ACTIONS(173),
    [anon_sym_BANGsnap_BANG] = ACTIONS(173),
    [anon_sym_BANGslide_BANG] = ACTIONS(173),
    [anon_sym_BANGwedge_BANG] = ACTIONS(173),
    [anon_sym_BANGupbow_BANG] = ACTIONS(173),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(173),
    [anon_sym_BANGopen_BANG] = ACTIONS(173),
    [anon_sym_BANGthumb_BANG] = ACTIONS(173),
    [anon_sym_BANGbreath_BANG] = ACTIONS(173),
    [anon_sym_BANGpppp_BANG] = ACTIONS(173),
    [anon_sym_BANGppp_BANG] = ACTIONS(173),
    [anon_sym_BANGpp_BANG] = ACTIONS(173),
    [anon_sym_BANGp_BANG] = ACTIONS(173),
    [anon_sym_BANGmp_BANG] = ACTIONS(173),
    [anon_sym_BANGmf_BANG] = ACTIONS(173),
    [anon_sym_BANGf_BANG] = ACTIONS(173),
    [anon_sym_BANGff_BANG] = ACTIONS(173),
    [anon_sym_BANGfff_BANG] = ACTIONS(173),
    [anon_sym_BANGffff_BANG] = ACTIONS(173),
    [anon_sym_BANGsfz_BANG] = ACTIONS(173),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(173),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(173),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(173),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(173),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(173),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(173),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(173),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(173),
    [anon_sym_BANGsegno_BANG] = ACTIONS(173),
    [anon_sym_BANGcoda_BANG] = ACTIONS(173),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(173),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(173),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(173),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(173),
    [anon_sym_BANGfine_BANG] = ACTIONS(173),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(173),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(173),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(173),
    [sym_parts_line] = ACTIONS(173),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(171),
    [sym_area] = ACTIONS(173),
    [sym_book] = ACTIONS(173),
    [sym_composer] = ACTIONS(173),
    [sym_discography] = ACTIONS(173),
    [sym_file] = ACTIONS(173),
    [sym_group] = ACTIONS(173),
    [sym_history] = ACTIONS(173),
    [sym_instruction] = ACTIONS(173),
    [sym_key] = ACTIONS(173),
    [sym_macros] = ACTIONS(173),
    [sym_meter] = ACTIONS(173),
    [sym_notes] = ACTIONS(173),
    [sym_origin] = ACTIONS(173),
    [sym_remark] = ACTIONS(173),
    [sym_rhythm_line] = ACTIONS(173),
    [sym_source] = ACTIONS(173),
    [anon_sym_s_COLON] = ACTIONS(173),
    [sym_tempo] = ACTIONS(173),
    [sym_transcription] = ACTIONS(173),
    [sym_tune_title] = ACTIONS(173),
    [sym_unit_note_length] = ACTIONS(173),
    [anon_sym_U_COLON] = ACTIONS(173),
    [sym_voice] = ACTIONS(173),
    [sym_words_postbody] = ACTIONS(173),
  },
  [11] = {
    [sym__NL] = STATE(230),
    [sym__MUSIC_CODE] = STATE(4),
    [sym_tune_body] = STATE(166),
    [sym__music_content] = STATE(28),
    [sym__nte_or_chrd] = STATE(58),
    [sym_beam] = STATE(28),
    [sym_note_construct] = STATE(58),
    [sym__chord_cstrct] = STATE(58),
    [sym_note] = STATE(122),
    [sym__pitch] = STATE(82),
    [sym_multimeasure_rest] = STATE(28),
    [sym_grace_note] = STATE(68),
    [sym_chord_symbol] = STATE(154),
    [sym_decoration] = STATE(178),
    [sym_nth_ending_barline] = STATE(23),
    [sym_generic_bar_line] = STATE(28),
    [sym_first_repeat_bar] = STATE(23),
    [sym_second_repeat_bar] = STATE(23),
    [sym_lyric_line] = STATE(190),
    [sym_lyric_section] = STATE(211),
    [sym_symbol] = STATE(28),
    [aux_sym_note_construct_repeat1] = STATE(68),
    [aux_sym_lyric_section_repeat1] = STATE(190),
    [anon_sym_LF] = ACTIONS(175),
    [aux_sym__music_content_token1] = ACTIONS(84),
    [sym_slur_open] = ACTIONS(86),
    [sym_slur_close] = ACTIONS(88),
    [anon_sym_LBRACK] = ACTIONS(90),
    [sym_alteration] = ACTIONS(92),
    [sym_note_letter] = ACTIONS(94),
    [sym_rest] = ACTIONS(96),
    [anon_sym_Z] = ACTIONS(98),
    [anon_sym_X] = ACTIONS(98),
    [aux_sym_grace_note_token1] = ACTIONS(100),
    [aux_sym_chord_symbol_token1] = ACTIONS(102),
    [sym_annotation] = ACTIONS(88),
    [sym_tuplet_marker] = ACTIONS(104),
    [sym_decoration_shorthand] = ACTIONS(177),
    [sym_bar_line] = ACTIONS(108),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(110),
    [sym_thin_double_bar_line] = ACTIONS(110),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(110),
    [sym_start_of_repeated_section] = ACTIONS(112),
    [sym_end_of_repeated_section] = ACTIONS(114),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(112),
    [anon_sym_BANGtrill_BANG] = ACTIONS(116),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(116),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(116),
    [anon_sym_BANGmordent_BANG] = ACTIONS(116),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(116),
    [anon_sym_BANGroll_BANG] = ACTIONS(116),
    [anon_sym_BANGturn_BANG] = ACTIONS(116),
    [anon_sym_BANGturnx_BANG] = ACTIONS(116),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(116),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(116),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(116),
    [anon_sym_BANG_GT_BANG] = ACTIONS(116),
    [anon_sym_BANGaccent_BANG] = ACTIONS(116),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(116),
    [anon_sym_BANGfermata_BANG] = ACTIONS(116),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(116),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(116),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(116),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(116),
    [anon_sym_BANGplus_BANG] = ACTIONS(116),
    [anon_sym_BANGsnap_BANG] = ACTIONS(116),
    [anon_sym_BANGslide_BANG] = ACTIONS(116),
    [anon_sym_BANGwedge_BANG] = ACTIONS(116),
    [anon_sym_BANGupbow_BANG] = ACTIONS(116),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(116),
    [anon_sym_BANGopen_BANG] = ACTIONS(116),
    [anon_sym_BANGthumb_BANG] = ACTIONS(116),
    [anon_sym_BANGbreath_BANG] = ACTIONS(116),
    [anon_sym_BANGpppp_BANG] = ACTIONS(116),
    [anon_sym_BANGppp_BANG] = ACTIONS(116),
    [anon_sym_BANGpp_BANG] = ACTIONS(116),
    [anon_sym_BANGp_BANG] = ACTIONS(116),
    [anon_sym_BANGmp_BANG] = ACTIONS(116),
    [anon_sym_BANGmf_BANG] = ACTIONS(116),
    [anon_sym_BANGf_BANG] = ACTIONS(116),
    [anon_sym_BANGff_BANG] = ACTIONS(116),
    [anon_sym_BANGfff_BANG] = ACTIONS(116),
    [anon_sym_BANGffff_BANG] = ACTIONS(116),
    [anon_sym_BANGsfz_BANG] = ACTIONS(116),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(116),
    [anon_sym_BANGsegno_BANG] = ACTIONS(116),
    [anon_sym_BANGcoda_BANG] = ACTIONS(116),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(116),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(116),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(116),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(116),
    [anon_sym_BANGfine_BANG] = ACTIONS(116),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(116),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(116),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(116),
    [sym_words_postbody] = ACTIONS(179),
  },
  [12] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(13),
    [anon_sym_LF] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(183),
    [sym_COMMENT] = ACTIONS(181),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(185),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(181),
    [aux_sym__music_content_token1] = ACTIONS(181),
    [sym_slur_open] = ACTIONS(181),
    [sym_slur_close] = ACTIONS(185),
    [anon_sym_LBRACK] = ACTIONS(181),
    [sym_alteration] = ACTIONS(185),
    [sym_note_letter] = ACTIONS(185),
    [sym_rest] = ACTIONS(185),
    [anon_sym_Z] = ACTIONS(185),
    [anon_sym_X] = ACTIONS(185),
    [aux_sym_grace_note_token1] = ACTIONS(185),
    [aux_sym_chord_symbol_token1] = ACTIONS(181),
    [sym_annotation] = ACTIONS(185),
    [sym_tuplet_marker] = ACTIONS(185),
    [sym_decoration_shorthand] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_bar_line] = ACTIONS(181),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(185),
    [sym_thin_double_bar_line] = ACTIONS(185),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(185),
    [sym_start_of_repeated_section] = ACTIONS(185),
    [sym_end_of_repeated_section] = ACTIONS(185),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(185),
    [anon_sym_BANGtrill_BANG] = ACTIONS(185),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(185),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(185),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(185),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(185),
    [anon_sym_BANGmordent_BANG] = ACTIONS(185),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(185),
    [anon_sym_BANGroll_BANG] = ACTIONS(185),
    [anon_sym_BANGturn_BANG] = ACTIONS(185),
    [anon_sym_BANGturnx_BANG] = ACTIONS(185),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(185),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(185),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(185),
    [anon_sym_BANG_GT_BANG] = ACTIONS(185),
    [anon_sym_BANGaccent_BANG] = ACTIONS(185),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(185),
    [anon_sym_BANGfermata_BANG] = ACTIONS(185),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(185),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(185),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(185),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(185),
    [anon_sym_BANGplus_BANG] = ACTIONS(185),
    [anon_sym_BANGsnap_BANG] = ACTIONS(185),
    [anon_sym_BANGslide_BANG] = ACTIONS(185),
    [anon_sym_BANGwedge_BANG] = ACTIONS(185),
    [anon_sym_BANGupbow_BANG] = ACTIONS(185),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(185),
    [anon_sym_BANGopen_BANG] = ACTIONS(185),
    [anon_sym_BANGthumb_BANG] = ACTIONS(185),
    [anon_sym_BANGbreath_BANG] = ACTIONS(185),
    [anon_sym_BANGpppp_BANG] = ACTIONS(185),
    [anon_sym_BANGppp_BANG] = ACTIONS(185),
    [anon_sym_BANGpp_BANG] = ACTIONS(185),
    [anon_sym_BANGp_BANG] = ACTIONS(185),
    [anon_sym_BANGmp_BANG] = ACTIONS(185),
    [anon_sym_BANGmf_BANG] = ACTIONS(185),
    [anon_sym_BANGf_BANG] = ACTIONS(185),
    [anon_sym_BANGff_BANG] = ACTIONS(185),
    [anon_sym_BANGfff_BANG] = ACTIONS(185),
    [anon_sym_BANGffff_BANG] = ACTIONS(185),
    [anon_sym_BANGsfz_BANG] = ACTIONS(185),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(185),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(185),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(185),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(185),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(185),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(185),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(185),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(185),
    [anon_sym_BANGsegno_BANG] = ACTIONS(185),
    [anon_sym_BANGcoda_BANG] = ACTIONS(185),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(185),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(185),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(185),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(185),
    [anon_sym_BANGfine_BANG] = ACTIONS(185),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(185),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(185),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(185),
    [sym_parts_line] = ACTIONS(185),
    [sym_instruction] = ACTIONS(185),
    [sym_key] = ACTIONS(185),
    [sym_macros] = ACTIONS(185),
    [sym_meter] = ACTIONS(185),
    [sym_notes] = ACTIONS(185),
    [sym_remark] = ACTIONS(185),
    [sym_rhythm_line] = ACTIONS(185),
    [anon_sym_s_COLON] = ACTIONS(185),
    [sym_tempo] = ACTIONS(185),
    [sym_tune_title] = ACTIONS(185),
    [sym_unit_note_length] = ACTIONS(185),
    [anon_sym_U_COLON] = ACTIONS(185),
    [sym_voice] = ACTIONS(185),
    [anon_sym_w_COLON] = ACTIONS(185),
    [sym_words_postbody] = ACTIONS(185),
  },
  [13] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(14),
    [anon_sym_LF] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(183),
    [sym_COMMENT] = ACTIONS(187),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(189),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(187),
    [aux_sym__music_content_token1] = ACTIONS(187),
    [sym_slur_open] = ACTIONS(187),
    [sym_slur_close] = ACTIONS(189),
    [anon_sym_LBRACK] = ACTIONS(187),
    [sym_alteration] = ACTIONS(189),
    [sym_note_letter] = ACTIONS(189),
    [sym_rest] = ACTIONS(189),
    [anon_sym_Z] = ACTIONS(189),
    [anon_sym_X] = ACTIONS(189),
    [aux_sym_grace_note_token1] = ACTIONS(189),
    [aux_sym_chord_symbol_token1] = ACTIONS(187),
    [sym_annotation] = ACTIONS(189),
    [sym_tuplet_marker] = ACTIONS(189),
    [sym_decoration_shorthand] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(183),
    [sym_bar_line] = ACTIONS(187),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(189),
    [sym_thin_double_bar_line] = ACTIONS(189),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(189),
    [sym_start_of_repeated_section] = ACTIONS(189),
    [sym_end_of_repeated_section] = ACTIONS(189),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(189),
    [anon_sym_BANGtrill_BANG] = ACTIONS(189),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(189),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(189),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(189),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(189),
    [anon_sym_BANGmordent_BANG] = ACTIONS(189),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(189),
    [anon_sym_BANGroll_BANG] = ACTIONS(189),
    [anon_sym_BANGturn_BANG] = ACTIONS(189),
    [anon_sym_BANGturnx_BANG] = ACTIONS(189),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(189),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(189),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(189),
    [anon_sym_BANG_GT_BANG] = ACTIONS(189),
    [anon_sym_BANGaccent_BANG] = ACTIONS(189),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(189),
    [anon_sym_BANGfermata_BANG] = ACTIONS(189),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(189),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(189),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(189),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(189),
    [anon_sym_BANGplus_BANG] = ACTIONS(189),
    [anon_sym_BANGsnap_BANG] = ACTIONS(189),
    [anon_sym_BANGslide_BANG] = ACTIONS(189),
    [anon_sym_BANGwedge_BANG] = ACTIONS(189),
    [anon_sym_BANGupbow_BANG] = ACTIONS(189),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(189),
    [anon_sym_BANGopen_BANG] = ACTIONS(189),
    [anon_sym_BANGthumb_BANG] = ACTIONS(189),
    [anon_sym_BANGbreath_BANG] = ACTIONS(189),
    [anon_sym_BANGpppp_BANG] = ACTIONS(189),
    [anon_sym_BANGppp_BANG] = ACTIONS(189),
    [anon_sym_BANGpp_BANG] = ACTIONS(189),
    [anon_sym_BANGp_BANG] = ACTIONS(189),
    [anon_sym_BANGmp_BANG] = ACTIONS(189),
    [anon_sym_BANGmf_BANG] = ACTIONS(189),
    [anon_sym_BANGf_BANG] = ACTIONS(189),
    [anon_sym_BANGff_BANG] = ACTIONS(189),
    [anon_sym_BANGfff_BANG] = ACTIONS(189),
    [anon_sym_BANGffff_BANG] = ACTIONS(189),
    [anon_sym_BANGsfz_BANG] = ACTIONS(189),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(189),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(189),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(189),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(189),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(189),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(189),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(189),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(189),
    [anon_sym_BANGsegno_BANG] = ACTIONS(189),
    [anon_sym_BANGcoda_BANG] = ACTIONS(189),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(189),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(189),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(189),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(189),
    [anon_sym_BANGfine_BANG] = ACTIONS(189),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(189),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(189),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(189),
    [sym_parts_line] = ACTIONS(189),
    [sym_instruction] = ACTIONS(189),
    [sym_key] = ACTIONS(189),
    [sym_macros] = ACTIONS(189),
    [sym_meter] = ACTIONS(189),
    [sym_notes] = ACTIONS(189),
    [sym_remark] = ACTIONS(189),
    [sym_rhythm_line] = ACTIONS(189),
    [anon_sym_s_COLON] = ACTIONS(189),
    [sym_tempo] = ACTIONS(189),
    [sym_tune_title] = ACTIONS(189),
    [sym_unit_note_length] = ACTIONS(189),
    [anon_sym_U_COLON] = ACTIONS(189),
    [sym_voice] = ACTIONS(189),
    [anon_sym_w_COLON] = ACTIONS(189),
    [sym_words_postbody] = ACTIONS(189),
  },
  [14] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(14),
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(193),
    [sym_COMMENT] = ACTIONS(191),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(196),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(191),
    [aux_sym__music_content_token1] = ACTIONS(191),
    [sym_slur_open] = ACTIONS(191),
    [sym_slur_close] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(191),
    [sym_alteration] = ACTIONS(196),
    [sym_note_letter] = ACTIONS(196),
    [sym_rest] = ACTIONS(196),
    [anon_sym_Z] = ACTIONS(196),
    [anon_sym_X] = ACTIONS(196),
    [aux_sym_grace_note_token1] = ACTIONS(196),
    [aux_sym_chord_symbol_token1] = ACTIONS(191),
    [sym_annotation] = ACTIONS(196),
    [sym_tuplet_marker] = ACTIONS(196),
    [sym_decoration_shorthand] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(193),
    [sym_bar_line] = ACTIONS(191),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(196),
    [sym_thin_double_bar_line] = ACTIONS(196),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(196),
    [sym_start_of_repeated_section] = ACTIONS(196),
    [sym_end_of_repeated_section] = ACTIONS(196),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(196),
    [anon_sym_BANGtrill_BANG] = ACTIONS(196),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(196),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(196),
    [anon_sym_BANGmordent_BANG] = ACTIONS(196),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(196),
    [anon_sym_BANGroll_BANG] = ACTIONS(196),
    [anon_sym_BANGturn_BANG] = ACTIONS(196),
    [anon_sym_BANGturnx_BANG] = ACTIONS(196),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(196),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(196),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(196),
    [anon_sym_BANG_GT_BANG] = ACTIONS(196),
    [anon_sym_BANGaccent_BANG] = ACTIONS(196),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(196),
    [anon_sym_BANGfermata_BANG] = ACTIONS(196),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(196),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(196),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(196),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(196),
    [anon_sym_BANGplus_BANG] = ACTIONS(196),
    [anon_sym_BANGsnap_BANG] = ACTIONS(196),
    [anon_sym_BANGslide_BANG] = ACTIONS(196),
    [anon_sym_BANGwedge_BANG] = ACTIONS(196),
    [anon_sym_BANGupbow_BANG] = ACTIONS(196),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(196),
    [anon_sym_BANGopen_BANG] = ACTIONS(196),
    [anon_sym_BANGthumb_BANG] = ACTIONS(196),
    [anon_sym_BANGbreath_BANG] = ACTIONS(196),
    [anon_sym_BANGpppp_BANG] = ACTIONS(196),
    [anon_sym_BANGppp_BANG] = ACTIONS(196),
    [anon_sym_BANGpp_BANG] = ACTIONS(196),
    [anon_sym_BANGp_BANG] = ACTIONS(196),
    [anon_sym_BANGmp_BANG] = ACTIONS(196),
    [anon_sym_BANGmf_BANG] = ACTIONS(196),
    [anon_sym_BANGf_BANG] = ACTIONS(196),
    [anon_sym_BANGff_BANG] = ACTIONS(196),
    [anon_sym_BANGfff_BANG] = ACTIONS(196),
    [anon_sym_BANGffff_BANG] = ACTIONS(196),
    [anon_sym_BANGsfz_BANG] = ACTIONS(196),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGsegno_BANG] = ACTIONS(196),
    [anon_sym_BANGcoda_BANG] = ACTIONS(196),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(196),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(196),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(196),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(196),
    [anon_sym_BANGfine_BANG] = ACTIONS(196),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(196),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(196),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(196),
    [sym_parts_line] = ACTIONS(196),
    [sym_instruction] = ACTIONS(196),
    [sym_key] = ACTIONS(196),
    [sym_macros] = ACTIONS(196),
    [sym_meter] = ACTIONS(196),
    [sym_notes] = ACTIONS(196),
    [sym_remark] = ACTIONS(196),
    [sym_rhythm_line] = ACTIONS(196),
    [anon_sym_s_COLON] = ACTIONS(196),
    [sym_tempo] = ACTIONS(196),
    [sym_tune_title] = ACTIONS(196),
    [sym_unit_note_length] = ACTIONS(196),
    [anon_sym_U_COLON] = ACTIONS(196),
    [sym_voice] = ACTIONS(196),
    [anon_sym_w_COLON] = ACTIONS(196),
    [sym_words_postbody] = ACTIONS(196),
  },
  [15] = {
    [anon_sym_LF] = ACTIONS(198),
    [sym_COMMENT] = ACTIONS(198),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(200),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(198),
    [aux_sym__music_content_token1] = ACTIONS(198),
    [aux_sym_beam_token1] = ACTIONS(202),
    [sym_slur_open] = ACTIONS(198),
    [sym_slur_close] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(198),
    [sym_alteration] = ACTIONS(200),
    [sym_note_letter] = ACTIONS(200),
    [sym_rest] = ACTIONS(200),
    [anon_sym_Z] = ACTIONS(200),
    [anon_sym_X] = ACTIONS(200),
    [aux_sym_grace_note_token1] = ACTIONS(200),
    [aux_sym_chord_symbol_token1] = ACTIONS(198),
    [sym_annotation] = ACTIONS(200),
    [sym_tuplet_marker] = ACTIONS(200),
    [sym_decoration_shorthand] = ACTIONS(198),
    [sym_bar_line] = ACTIONS(198),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(200),
    [sym_thin_double_bar_line] = ACTIONS(200),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(200),
    [sym_start_of_repeated_section] = ACTIONS(200),
    [sym_end_of_repeated_section] = ACTIONS(200),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(200),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(204),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(206),
    [anon_sym_BANGtrill_BANG] = ACTIONS(200),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(200),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(200),
    [anon_sym_BANGmordent_BANG] = ACTIONS(200),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(200),
    [anon_sym_BANGroll_BANG] = ACTIONS(200),
    [anon_sym_BANGturn_BANG] = ACTIONS(200),
    [anon_sym_BANGturnx_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(200),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_BANG] = ACTIONS(200),
    [anon_sym_BANGaccent_BANG] = ACTIONS(200),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(200),
    [anon_sym_BANGfermata_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(200),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(200),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(200),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(200),
    [anon_sym_BANGplus_BANG] = ACTIONS(200),
    [anon_sym_BANGsnap_BANG] = ACTIONS(200),
    [anon_sym_BANGslide_BANG] = ACTIONS(200),
    [anon_sym_BANGwedge_BANG] = ACTIONS(200),
    [anon_sym_BANGupbow_BANG] = ACTIONS(200),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(200),
    [anon_sym_BANGopen_BANG] = ACTIONS(200),
    [anon_sym_BANGthumb_BANG] = ACTIONS(200),
    [anon_sym_BANGbreath_BANG] = ACTIONS(200),
    [anon_sym_BANGpppp_BANG] = ACTIONS(200),
    [anon_sym_BANGppp_BANG] = ACTIONS(200),
    [anon_sym_BANGpp_BANG] = ACTIONS(200),
    [anon_sym_BANGp_BANG] = ACTIONS(200),
    [anon_sym_BANGmp_BANG] = ACTIONS(200),
    [anon_sym_BANGmf_BANG] = ACTIONS(200),
    [anon_sym_BANGf_BANG] = ACTIONS(200),
    [anon_sym_BANGff_BANG] = ACTIONS(200),
    [anon_sym_BANGfff_BANG] = ACTIONS(200),
    [anon_sym_BANGffff_BANG] = ACTIONS(200),
    [anon_sym_BANGsfz_BANG] = ACTIONS(200),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGsegno_BANG] = ACTIONS(200),
    [anon_sym_BANGcoda_BANG] = ACTIONS(200),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(200),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(200),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(200),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(200),
    [anon_sym_BANGfine_BANG] = ACTIONS(200),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(200),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(200),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(200),
    [sym_parts_line] = ACTIONS(200),
    [sym_instruction] = ACTIONS(200),
    [sym_key] = ACTIONS(200),
    [sym_macros] = ACTIONS(200),
    [sym_meter] = ACTIONS(200),
    [sym_notes] = ACTIONS(200),
    [sym_remark] = ACTIONS(200),
    [sym_rhythm_line] = ACTIONS(200),
    [anon_sym_s_COLON] = ACTIONS(200),
    [sym_tempo] = ACTIONS(200),
    [sym_tune_title] = ACTIONS(200),
    [sym_unit_note_length] = ACTIONS(200),
    [anon_sym_U_COLON] = ACTIONS(200),
    [sym_voice] = ACTIONS(200),
    [anon_sym_w_COLON] = ACTIONS(200),
    [sym_words_postbody] = ACTIONS(200),
  },
  [16] = {
    [anon_sym_LF] = ACTIONS(198),
    [sym_COMMENT] = ACTIONS(198),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(200),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(198),
    [aux_sym__music_content_token1] = ACTIONS(198),
    [aux_sym_beam_token1] = ACTIONS(202),
    [sym_slur_open] = ACTIONS(198),
    [sym_slur_close] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(198),
    [sym_alteration] = ACTIONS(200),
    [sym_note_letter] = ACTIONS(200),
    [sym_rest] = ACTIONS(200),
    [anon_sym_Z] = ACTIONS(200),
    [anon_sym_X] = ACTIONS(200),
    [aux_sym_grace_note_token1] = ACTIONS(200),
    [aux_sym_chord_symbol_token1] = ACTIONS(198),
    [sym_annotation] = ACTIONS(200),
    [sym_tuplet_marker] = ACTIONS(200),
    [sym_decoration_shorthand] = ACTIONS(198),
    [sym_bar_line] = ACTIONS(198),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(200),
    [sym_thin_double_bar_line] = ACTIONS(200),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(200),
    [sym_start_of_repeated_section] = ACTIONS(200),
    [sym_end_of_repeated_section] = ACTIONS(200),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(200),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(208),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(210),
    [anon_sym_BANGtrill_BANG] = ACTIONS(200),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(200),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(200),
    [anon_sym_BANGmordent_BANG] = ACTIONS(200),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(200),
    [anon_sym_BANGroll_BANG] = ACTIONS(200),
    [anon_sym_BANGturn_BANG] = ACTIONS(200),
    [anon_sym_BANGturnx_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(200),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_BANG] = ACTIONS(200),
    [anon_sym_BANGaccent_BANG] = ACTIONS(200),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(200),
    [anon_sym_BANGfermata_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(200),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(200),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(200),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(200),
    [anon_sym_BANGplus_BANG] = ACTIONS(200),
    [anon_sym_BANGsnap_BANG] = ACTIONS(200),
    [anon_sym_BANGslide_BANG] = ACTIONS(200),
    [anon_sym_BANGwedge_BANG] = ACTIONS(200),
    [anon_sym_BANGupbow_BANG] = ACTIONS(200),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(200),
    [anon_sym_BANGopen_BANG] = ACTIONS(200),
    [anon_sym_BANGthumb_BANG] = ACTIONS(200),
    [anon_sym_BANGbreath_BANG] = ACTIONS(200),
    [anon_sym_BANGpppp_BANG] = ACTIONS(200),
    [anon_sym_BANGppp_BANG] = ACTIONS(200),
    [anon_sym_BANGpp_BANG] = ACTIONS(200),
    [anon_sym_BANGp_BANG] = ACTIONS(200),
    [anon_sym_BANGmp_BANG] = ACTIONS(200),
    [anon_sym_BANGmf_BANG] = ACTIONS(200),
    [anon_sym_BANGf_BANG] = ACTIONS(200),
    [anon_sym_BANGff_BANG] = ACTIONS(200),
    [anon_sym_BANGfff_BANG] = ACTIONS(200),
    [anon_sym_BANGffff_BANG] = ACTIONS(200),
    [anon_sym_BANGsfz_BANG] = ACTIONS(200),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGsegno_BANG] = ACTIONS(200),
    [anon_sym_BANGcoda_BANG] = ACTIONS(200),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(200),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(200),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(200),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(200),
    [anon_sym_BANGfine_BANG] = ACTIONS(200),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(200),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(200),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(200),
    [sym_parts_line] = ACTIONS(200),
    [sym_instruction] = ACTIONS(200),
    [sym_key] = ACTIONS(200),
    [sym_macros] = ACTIONS(200),
    [sym_meter] = ACTIONS(200),
    [sym_notes] = ACTIONS(200),
    [sym_remark] = ACTIONS(200),
    [sym_rhythm_line] = ACTIONS(200),
    [anon_sym_s_COLON] = ACTIONS(200),
    [sym_tempo] = ACTIONS(200),
    [sym_tune_title] = ACTIONS(200),
    [sym_unit_note_length] = ACTIONS(200),
    [anon_sym_U_COLON] = ACTIONS(200),
    [sym_voice] = ACTIONS(200),
    [anon_sym_w_COLON] = ACTIONS(200),
    [sym_words_postbody] = ACTIONS(200),
  },
  [17] = {
    [anon_sym_LF] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(196),
    [sym_COMMENT] = ACTIONS(191),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(196),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(191),
    [aux_sym__music_content_token1] = ACTIONS(191),
    [sym_slur_open] = ACTIONS(191),
    [sym_slur_close] = ACTIONS(196),
    [anon_sym_LBRACK] = ACTIONS(191),
    [sym_alteration] = ACTIONS(196),
    [sym_note_letter] = ACTIONS(196),
    [sym_rest] = ACTIONS(196),
    [anon_sym_Z] = ACTIONS(196),
    [anon_sym_X] = ACTIONS(196),
    [aux_sym_grace_note_token1] = ACTIONS(196),
    [aux_sym_chord_symbol_token1] = ACTIONS(191),
    [sym_annotation] = ACTIONS(196),
    [sym_tuplet_marker] = ACTIONS(196),
    [sym_decoration_shorthand] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(196),
    [sym_bar_line] = ACTIONS(191),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(196),
    [sym_thin_double_bar_line] = ACTIONS(196),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(196),
    [sym_start_of_repeated_section] = ACTIONS(196),
    [sym_end_of_repeated_section] = ACTIONS(196),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(196),
    [anon_sym_BANGtrill_BANG] = ACTIONS(196),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(196),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(196),
    [anon_sym_BANGmordent_BANG] = ACTIONS(196),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(196),
    [anon_sym_BANGroll_BANG] = ACTIONS(196),
    [anon_sym_BANGturn_BANG] = ACTIONS(196),
    [anon_sym_BANGturnx_BANG] = ACTIONS(196),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(196),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(196),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(196),
    [anon_sym_BANG_GT_BANG] = ACTIONS(196),
    [anon_sym_BANGaccent_BANG] = ACTIONS(196),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(196),
    [anon_sym_BANGfermata_BANG] = ACTIONS(196),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(196),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(196),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(196),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(196),
    [anon_sym_BANGplus_BANG] = ACTIONS(196),
    [anon_sym_BANGsnap_BANG] = ACTIONS(196),
    [anon_sym_BANGslide_BANG] = ACTIONS(196),
    [anon_sym_BANGwedge_BANG] = ACTIONS(196),
    [anon_sym_BANGupbow_BANG] = ACTIONS(196),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(196),
    [anon_sym_BANGopen_BANG] = ACTIONS(196),
    [anon_sym_BANGthumb_BANG] = ACTIONS(196),
    [anon_sym_BANGbreath_BANG] = ACTIONS(196),
    [anon_sym_BANGpppp_BANG] = ACTIONS(196),
    [anon_sym_BANGppp_BANG] = ACTIONS(196),
    [anon_sym_BANGpp_BANG] = ACTIONS(196),
    [anon_sym_BANGp_BANG] = ACTIONS(196),
    [anon_sym_BANGmp_BANG] = ACTIONS(196),
    [anon_sym_BANGmf_BANG] = ACTIONS(196),
    [anon_sym_BANGf_BANG] = ACTIONS(196),
    [anon_sym_BANGff_BANG] = ACTIONS(196),
    [anon_sym_BANGfff_BANG] = ACTIONS(196),
    [anon_sym_BANGffff_BANG] = ACTIONS(196),
    [anon_sym_BANGsfz_BANG] = ACTIONS(196),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(196),
    [anon_sym_BANGsegno_BANG] = ACTIONS(196),
    [anon_sym_BANGcoda_BANG] = ACTIONS(196),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(196),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(196),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(196),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(196),
    [anon_sym_BANGfine_BANG] = ACTIONS(196),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(196),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(196),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(196),
    [sym_parts_line] = ACTIONS(196),
    [sym_instruction] = ACTIONS(196),
    [sym_key] = ACTIONS(196),
    [sym_macros] = ACTIONS(196),
    [sym_meter] = ACTIONS(196),
    [sym_notes] = ACTIONS(196),
    [sym_remark] = ACTIONS(196),
    [sym_rhythm_line] = ACTIONS(196),
    [anon_sym_s_COLON] = ACTIONS(196),
    [sym_tempo] = ACTIONS(196),
    [sym_tune_title] = ACTIONS(196),
    [sym_unit_note_length] = ACTIONS(196),
    [anon_sym_U_COLON] = ACTIONS(196),
    [sym_voice] = ACTIONS(196),
    [anon_sym_w_COLON] = ACTIONS(196),
    [sym_words_postbody] = ACTIONS(196),
  },
  [18] = {
    [anon_sym_LF] = ACTIONS(198),
    [sym_COMMENT] = ACTIONS(198),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(200),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(198),
    [aux_sym__music_content_token1] = ACTIONS(198),
    [aux_sym_beam_token1] = ACTIONS(202),
    [sym_slur_open] = ACTIONS(198),
    [sym_slur_close] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(198),
    [sym_alteration] = ACTIONS(200),
    [sym_note_letter] = ACTIONS(200),
    [sym_rest] = ACTIONS(200),
    [anon_sym_Z] = ACTIONS(200),
    [anon_sym_X] = ACTIONS(200),
    [aux_sym_grace_note_token1] = ACTIONS(200),
    [aux_sym_chord_symbol_token1] = ACTIONS(198),
    [sym_annotation] = ACTIONS(200),
    [sym_tuplet_marker] = ACTIONS(200),
    [sym_decoration_shorthand] = ACTIONS(198),
    [sym_bar_line] = ACTIONS(198),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(200),
    [sym_thin_double_bar_line] = ACTIONS(200),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(200),
    [sym_start_of_repeated_section] = ACTIONS(200),
    [sym_end_of_repeated_section] = ACTIONS(200),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(200),
    [anon_sym_BANGtrill_BANG] = ACTIONS(200),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(200),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(200),
    [anon_sym_BANGmordent_BANG] = ACTIONS(200),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(200),
    [anon_sym_BANGroll_BANG] = ACTIONS(200),
    [anon_sym_BANGturn_BANG] = ACTIONS(200),
    [anon_sym_BANGturnx_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(200),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_BANG] = ACTIONS(200),
    [anon_sym_BANGaccent_BANG] = ACTIONS(200),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(200),
    [anon_sym_BANGfermata_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(200),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(200),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(200),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(200),
    [anon_sym_BANGplus_BANG] = ACTIONS(200),
    [anon_sym_BANGsnap_BANG] = ACTIONS(200),
    [anon_sym_BANGslide_BANG] = ACTIONS(200),
    [anon_sym_BANGwedge_BANG] = ACTIONS(200),
    [anon_sym_BANGupbow_BANG] = ACTIONS(200),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(200),
    [anon_sym_BANGopen_BANG] = ACTIONS(200),
    [anon_sym_BANGthumb_BANG] = ACTIONS(200),
    [anon_sym_BANGbreath_BANG] = ACTIONS(200),
    [anon_sym_BANGpppp_BANG] = ACTIONS(200),
    [anon_sym_BANGppp_BANG] = ACTIONS(200),
    [anon_sym_BANGpp_BANG] = ACTIONS(200),
    [anon_sym_BANGp_BANG] = ACTIONS(200),
    [anon_sym_BANGmp_BANG] = ACTIONS(200),
    [anon_sym_BANGmf_BANG] = ACTIONS(200),
    [anon_sym_BANGf_BANG] = ACTIONS(200),
    [anon_sym_BANGff_BANG] = ACTIONS(200),
    [anon_sym_BANGfff_BANG] = ACTIONS(200),
    [anon_sym_BANGffff_BANG] = ACTIONS(200),
    [anon_sym_BANGsfz_BANG] = ACTIONS(200),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGsegno_BANG] = ACTIONS(200),
    [anon_sym_BANGcoda_BANG] = ACTIONS(200),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(200),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(200),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(200),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(200),
    [anon_sym_BANGfine_BANG] = ACTIONS(200),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(200),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(200),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(200),
    [sym_parts_line] = ACTIONS(200),
    [sym_instruction] = ACTIONS(200),
    [sym_key] = ACTIONS(200),
    [sym_macros] = ACTIONS(200),
    [sym_meter] = ACTIONS(200),
    [sym_notes] = ACTIONS(200),
    [sym_remark] = ACTIONS(200),
    [sym_rhythm_line] = ACTIONS(200),
    [anon_sym_s_COLON] = ACTIONS(200),
    [sym_tempo] = ACTIONS(200),
    [sym_tune_title] = ACTIONS(200),
    [sym_unit_note_length] = ACTIONS(200),
    [anon_sym_U_COLON] = ACTIONS(200),
    [sym_voice] = ACTIONS(200),
    [anon_sym_w_COLON] = ACTIONS(200),
    [sym_words_postbody] = ACTIONS(200),
  },
  [19] = {
    [anon_sym_LF] = ACTIONS(212),
    [sym_COMMENT] = ACTIONS(212),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(214),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(212),
    [aux_sym__music_content_token1] = ACTIONS(212),
    [sym_slur_open] = ACTIONS(212),
    [sym_slur_close] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(212),
    [sym_alteration] = ACTIONS(214),
    [sym_note_letter] = ACTIONS(214),
    [sym_rest] = ACTIONS(214),
    [anon_sym_Z] = ACTIONS(214),
    [anon_sym_X] = ACTIONS(214),
    [aux_sym_grace_note_token1] = ACTIONS(214),
    [aux_sym_chord_symbol_token1] = ACTIONS(212),
    [sym_annotation] = ACTIONS(214),
    [sym_tuplet_marker] = ACTIONS(214),
    [sym_decoration_shorthand] = ACTIONS(212),
    [sym_bar_line] = ACTIONS(212),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(214),
    [sym_thin_double_bar_line] = ACTIONS(214),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(214),
    [sym_start_of_repeated_section] = ACTIONS(214),
    [sym_end_of_repeated_section] = ACTIONS(214),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(214),
    [anon_sym_BANGtrill_BANG] = ACTIONS(214),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(214),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(214),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(214),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(214),
    [anon_sym_BANGmordent_BANG] = ACTIONS(214),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(214),
    [anon_sym_BANGroll_BANG] = ACTIONS(214),
    [anon_sym_BANGturn_BANG] = ACTIONS(214),
    [anon_sym_BANGturnx_BANG] = ACTIONS(214),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(214),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(214),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(214),
    [anon_sym_BANG_GT_BANG] = ACTIONS(214),
    [anon_sym_BANGaccent_BANG] = ACTIONS(214),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(214),
    [anon_sym_BANGfermata_BANG] = ACTIONS(214),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(214),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(214),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(214),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(214),
    [anon_sym_BANGplus_BANG] = ACTIONS(214),
    [anon_sym_BANGsnap_BANG] = ACTIONS(214),
    [anon_sym_BANGslide_BANG] = ACTIONS(214),
    [anon_sym_BANGwedge_BANG] = ACTIONS(214),
    [anon_sym_BANGupbow_BANG] = ACTIONS(214),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(214),
    [anon_sym_BANGopen_BANG] = ACTIONS(214),
    [anon_sym_BANGthumb_BANG] = ACTIONS(214),
    [anon_sym_BANGbreath_BANG] = ACTIONS(214),
    [anon_sym_BANGpppp_BANG] = ACTIONS(214),
    [anon_sym_BANGppp_BANG] = ACTIONS(214),
    [anon_sym_BANGpp_BANG] = ACTIONS(214),
    [anon_sym_BANGp_BANG] = ACTIONS(214),
    [anon_sym_BANGmp_BANG] = ACTIONS(214),
    [anon_sym_BANGmf_BANG] = ACTIONS(214),
    [anon_sym_BANGf_BANG] = ACTIONS(214),
    [anon_sym_BANGff_BANG] = ACTIONS(214),
    [anon_sym_BANGfff_BANG] = ACTIONS(214),
    [anon_sym_BANGffff_BANG] = ACTIONS(214),
    [anon_sym_BANGsfz_BANG] = ACTIONS(214),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(214),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(214),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(214),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(214),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(214),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(214),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(214),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(214),
    [anon_sym_BANGsegno_BANG] = ACTIONS(214),
    [anon_sym_BANGcoda_BANG] = ACTIONS(214),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(214),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(214),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(214),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(214),
    [anon_sym_BANGfine_BANG] = ACTIONS(214),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(214),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(214),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(214),
    [sym_parts_line] = ACTIONS(214),
    [sym_instruction] = ACTIONS(214),
    [sym_key] = ACTIONS(214),
    [sym_macros] = ACTIONS(214),
    [sym_meter] = ACTIONS(214),
    [sym_notes] = ACTIONS(214),
    [sym_remark] = ACTIONS(214),
    [sym_rhythm_line] = ACTIONS(214),
    [anon_sym_s_COLON] = ACTIONS(214),
    [sym_tempo] = ACTIONS(214),
    [sym_tune_title] = ACTIONS(214),
    [sym_unit_note_length] = ACTIONS(214),
    [anon_sym_U_COLON] = ACTIONS(214),
    [sym_voice] = ACTIONS(214),
    [anon_sym_w_COLON] = ACTIONS(214),
    [sym_words_postbody] = ACTIONS(214),
  },
  [20] = {
    [anon_sym_LF] = ACTIONS(216),
    [sym_COMMENT] = ACTIONS(216),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(218),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(216),
    [aux_sym__music_content_token1] = ACTIONS(216),
    [sym_slur_open] = ACTIONS(216),
    [sym_slur_close] = ACTIONS(218),
    [anon_sym_LBRACK] = ACTIONS(216),
    [sym_alteration] = ACTIONS(218),
    [sym_note_letter] = ACTIONS(218),
    [sym_rest] = ACTIONS(218),
    [anon_sym_Z] = ACTIONS(218),
    [anon_sym_X] = ACTIONS(218),
    [aux_sym_grace_note_token1] = ACTIONS(218),
    [aux_sym_chord_symbol_token1] = ACTIONS(216),
    [sym_annotation] = ACTIONS(218),
    [sym_tuplet_marker] = ACTIONS(218),
    [sym_decoration_shorthand] = ACTIONS(216),
    [sym_bar_line] = ACTIONS(216),
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
    [sym_parts_line] = ACTIONS(218),
    [sym_instruction] = ACTIONS(218),
    [sym_key] = ACTIONS(218),
    [sym_macros] = ACTIONS(218),
    [sym_meter] = ACTIONS(218),
    [sym_notes] = ACTIONS(218),
    [sym_remark] = ACTIONS(218),
    [sym_rhythm_line] = ACTIONS(218),
    [anon_sym_s_COLON] = ACTIONS(218),
    [sym_tempo] = ACTIONS(218),
    [sym_tune_title] = ACTIONS(218),
    [sym_unit_note_length] = ACTIONS(218),
    [anon_sym_U_COLON] = ACTIONS(218),
    [sym_voice] = ACTIONS(218),
    [anon_sym_w_COLON] = ACTIONS(218),
    [sym_words_postbody] = ACTIONS(218),
  },
  [21] = {
    [anon_sym_LF] = ACTIONS(220),
    [sym_COMMENT] = ACTIONS(220),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(222),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(220),
    [aux_sym__music_content_token1] = ACTIONS(220),
    [sym_slur_open] = ACTIONS(220),
    [sym_slur_close] = ACTIONS(222),
    [anon_sym_LBRACK] = ACTIONS(220),
    [sym_alteration] = ACTIONS(222),
    [sym_note_letter] = ACTIONS(222),
    [sym_rest] = ACTIONS(222),
    [anon_sym_Z] = ACTIONS(222),
    [anon_sym_X] = ACTIONS(222),
    [aux_sym_grace_note_token1] = ACTIONS(222),
    [aux_sym_chord_symbol_token1] = ACTIONS(220),
    [sym_annotation] = ACTIONS(222),
    [sym_tuplet_marker] = ACTIONS(222),
    [sym_decoration_shorthand] = ACTIONS(220),
    [sym_bar_line] = ACTIONS(220),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(222),
    [sym_thin_double_bar_line] = ACTIONS(222),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(222),
    [sym_start_of_repeated_section] = ACTIONS(222),
    [sym_end_of_repeated_section] = ACTIONS(222),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(222),
    [anon_sym_BANGtrill_BANG] = ACTIONS(222),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(222),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(222),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(222),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(222),
    [anon_sym_BANGmordent_BANG] = ACTIONS(222),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(222),
    [anon_sym_BANGroll_BANG] = ACTIONS(222),
    [anon_sym_BANGturn_BANG] = ACTIONS(222),
    [anon_sym_BANGturnx_BANG] = ACTIONS(222),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(222),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(222),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(222),
    [anon_sym_BANG_GT_BANG] = ACTIONS(222),
    [anon_sym_BANGaccent_BANG] = ACTIONS(222),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(222),
    [anon_sym_BANGfermata_BANG] = ACTIONS(222),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(222),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(222),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(222),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(222),
    [anon_sym_BANGplus_BANG] = ACTIONS(222),
    [anon_sym_BANGsnap_BANG] = ACTIONS(222),
    [anon_sym_BANGslide_BANG] = ACTIONS(222),
    [anon_sym_BANGwedge_BANG] = ACTIONS(222),
    [anon_sym_BANGupbow_BANG] = ACTIONS(222),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(222),
    [anon_sym_BANGopen_BANG] = ACTIONS(222),
    [anon_sym_BANGthumb_BANG] = ACTIONS(222),
    [anon_sym_BANGbreath_BANG] = ACTIONS(222),
    [anon_sym_BANGpppp_BANG] = ACTIONS(222),
    [anon_sym_BANGppp_BANG] = ACTIONS(222),
    [anon_sym_BANGpp_BANG] = ACTIONS(222),
    [anon_sym_BANGp_BANG] = ACTIONS(222),
    [anon_sym_BANGmp_BANG] = ACTIONS(222),
    [anon_sym_BANGmf_BANG] = ACTIONS(222),
    [anon_sym_BANGf_BANG] = ACTIONS(222),
    [anon_sym_BANGff_BANG] = ACTIONS(222),
    [anon_sym_BANGfff_BANG] = ACTIONS(222),
    [anon_sym_BANGffff_BANG] = ACTIONS(222),
    [anon_sym_BANGsfz_BANG] = ACTIONS(222),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(222),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(222),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(222),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(222),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(222),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(222),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(222),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(222),
    [anon_sym_BANGsegno_BANG] = ACTIONS(222),
    [anon_sym_BANGcoda_BANG] = ACTIONS(222),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(222),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(222),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(222),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(222),
    [anon_sym_BANGfine_BANG] = ACTIONS(222),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(222),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(222),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(222),
    [sym_parts_line] = ACTIONS(222),
    [sym_instruction] = ACTIONS(222),
    [sym_key] = ACTIONS(222),
    [sym_macros] = ACTIONS(222),
    [sym_meter] = ACTIONS(222),
    [sym_notes] = ACTIONS(222),
    [sym_remark] = ACTIONS(222),
    [sym_rhythm_line] = ACTIONS(222),
    [anon_sym_s_COLON] = ACTIONS(222),
    [sym_tempo] = ACTIONS(222),
    [sym_tune_title] = ACTIONS(222),
    [sym_unit_note_length] = ACTIONS(222),
    [anon_sym_U_COLON] = ACTIONS(222),
    [sym_voice] = ACTIONS(222),
    [anon_sym_w_COLON] = ACTIONS(222),
    [sym_words_postbody] = ACTIONS(222),
  },
  [22] = {
    [anon_sym_LF] = ACTIONS(224),
    [sym_COMMENT] = ACTIONS(224),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(226),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(224),
    [aux_sym__music_content_token1] = ACTIONS(224),
    [sym_slur_open] = ACTIONS(224),
    [sym_slur_close] = ACTIONS(226),
    [anon_sym_LBRACK] = ACTIONS(224),
    [sym_alteration] = ACTIONS(226),
    [sym_note_letter] = ACTIONS(226),
    [sym_rest] = ACTIONS(226),
    [anon_sym_Z] = ACTIONS(226),
    [anon_sym_X] = ACTIONS(226),
    [aux_sym_grace_note_token1] = ACTIONS(226),
    [aux_sym_chord_symbol_token1] = ACTIONS(224),
    [sym_annotation] = ACTIONS(226),
    [sym_tuplet_marker] = ACTIONS(226),
    [sym_decoration_shorthand] = ACTIONS(224),
    [sym_bar_line] = ACTIONS(224),
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
  [23] = {
    [anon_sym_LF] = ACTIONS(198),
    [sym_COMMENT] = ACTIONS(198),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(200),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(198),
    [aux_sym__music_content_token1] = ACTIONS(198),
    [sym_slur_open] = ACTIONS(198),
    [sym_slur_close] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(198),
    [sym_alteration] = ACTIONS(200),
    [sym_note_letter] = ACTIONS(200),
    [sym_rest] = ACTIONS(200),
    [anon_sym_Z] = ACTIONS(200),
    [anon_sym_X] = ACTIONS(200),
    [aux_sym_grace_note_token1] = ACTIONS(200),
    [aux_sym_chord_symbol_token1] = ACTIONS(198),
    [sym_annotation] = ACTIONS(200),
    [sym_tuplet_marker] = ACTIONS(200),
    [sym_decoration_shorthand] = ACTIONS(198),
    [sym_bar_line] = ACTIONS(198),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(200),
    [sym_thin_double_bar_line] = ACTIONS(200),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(200),
    [sym_start_of_repeated_section] = ACTIONS(200),
    [sym_end_of_repeated_section] = ACTIONS(200),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(200),
    [anon_sym_BANGtrill_BANG] = ACTIONS(200),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(200),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(200),
    [anon_sym_BANGmordent_BANG] = ACTIONS(200),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(200),
    [anon_sym_BANGroll_BANG] = ACTIONS(200),
    [anon_sym_BANGturn_BANG] = ACTIONS(200),
    [anon_sym_BANGturnx_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(200),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_BANG] = ACTIONS(200),
    [anon_sym_BANGaccent_BANG] = ACTIONS(200),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(200),
    [anon_sym_BANGfermata_BANG] = ACTIONS(200),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(200),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(200),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(200),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(200),
    [anon_sym_BANGplus_BANG] = ACTIONS(200),
    [anon_sym_BANGsnap_BANG] = ACTIONS(200),
    [anon_sym_BANGslide_BANG] = ACTIONS(200),
    [anon_sym_BANGwedge_BANG] = ACTIONS(200),
    [anon_sym_BANGupbow_BANG] = ACTIONS(200),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(200),
    [anon_sym_BANGopen_BANG] = ACTIONS(200),
    [anon_sym_BANGthumb_BANG] = ACTIONS(200),
    [anon_sym_BANGbreath_BANG] = ACTIONS(200),
    [anon_sym_BANGpppp_BANG] = ACTIONS(200),
    [anon_sym_BANGppp_BANG] = ACTIONS(200),
    [anon_sym_BANGpp_BANG] = ACTIONS(200),
    [anon_sym_BANGp_BANG] = ACTIONS(200),
    [anon_sym_BANGmp_BANG] = ACTIONS(200),
    [anon_sym_BANGmf_BANG] = ACTIONS(200),
    [anon_sym_BANGf_BANG] = ACTIONS(200),
    [anon_sym_BANGff_BANG] = ACTIONS(200),
    [anon_sym_BANGfff_BANG] = ACTIONS(200),
    [anon_sym_BANGffff_BANG] = ACTIONS(200),
    [anon_sym_BANGsfz_BANG] = ACTIONS(200),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(200),
    [anon_sym_BANGsegno_BANG] = ACTIONS(200),
    [anon_sym_BANGcoda_BANG] = ACTIONS(200),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(200),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(200),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(200),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(200),
    [anon_sym_BANGfine_BANG] = ACTIONS(200),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(200),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(200),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(200),
    [sym_parts_line] = ACTIONS(200),
    [sym_instruction] = ACTIONS(200),
    [sym_key] = ACTIONS(200),
    [sym_macros] = ACTIONS(200),
    [sym_meter] = ACTIONS(200),
    [sym_notes] = ACTIONS(200),
    [sym_remark] = ACTIONS(200),
    [sym_rhythm_line] = ACTIONS(200),
    [anon_sym_s_COLON] = ACTIONS(200),
    [sym_tempo] = ACTIONS(200),
    [sym_tune_title] = ACTIONS(200),
    [sym_unit_note_length] = ACTIONS(200),
    [anon_sym_U_COLON] = ACTIONS(200),
    [sym_voice] = ACTIONS(200),
    [anon_sym_w_COLON] = ACTIONS(200),
    [sym_words_postbody] = ACTIONS(200),
  },
  [24] = {
    [anon_sym_LF] = ACTIONS(228),
    [sym_COMMENT] = ACTIONS(228),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(230),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(228),
    [aux_sym__music_content_token1] = ACTIONS(228),
    [sym_slur_open] = ACTIONS(228),
    [sym_slur_close] = ACTIONS(230),
    [anon_sym_LBRACK] = ACTIONS(228),
    [sym_alteration] = ACTIONS(230),
    [sym_note_letter] = ACTIONS(230),
    [sym_rest] = ACTIONS(230),
    [anon_sym_Z] = ACTIONS(230),
    [anon_sym_X] = ACTIONS(230),
    [aux_sym_grace_note_token1] = ACTIONS(230),
    [aux_sym_chord_symbol_token1] = ACTIONS(228),
    [sym_annotation] = ACTIONS(230),
    [sym_tuplet_marker] = ACTIONS(230),
    [sym_decoration_shorthand] = ACTIONS(228),
    [sym_bar_line] = ACTIONS(228),
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
  [25] = {
    [anon_sym_LF] = ACTIONS(232),
    [sym_COMMENT] = ACTIONS(232),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(234),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(232),
    [aux_sym__music_content_token1] = ACTIONS(232),
    [sym_slur_open] = ACTIONS(232),
    [sym_slur_close] = ACTIONS(234),
    [anon_sym_LBRACK] = ACTIONS(232),
    [sym_alteration] = ACTIONS(234),
    [sym_note_letter] = ACTIONS(234),
    [sym_rest] = ACTIONS(234),
    [anon_sym_Z] = ACTIONS(234),
    [anon_sym_X] = ACTIONS(234),
    [aux_sym_grace_note_token1] = ACTIONS(234),
    [aux_sym_chord_symbol_token1] = ACTIONS(232),
    [sym_annotation] = ACTIONS(234),
    [sym_tuplet_marker] = ACTIONS(234),
    [sym_decoration_shorthand] = ACTIONS(232),
    [sym_bar_line] = ACTIONS(232),
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
  [26] = {
    [anon_sym_LF] = ACTIONS(236),
    [sym_COMMENT] = ACTIONS(236),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(238),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(236),
    [aux_sym__music_content_token1] = ACTIONS(236),
    [sym_slur_open] = ACTIONS(236),
    [sym_slur_close] = ACTIONS(238),
    [anon_sym_LBRACK] = ACTIONS(236),
    [sym_alteration] = ACTIONS(238),
    [sym_note_letter] = ACTIONS(238),
    [sym_rest] = ACTIONS(238),
    [anon_sym_Z] = ACTIONS(238),
    [anon_sym_X] = ACTIONS(238),
    [aux_sym_grace_note_token1] = ACTIONS(238),
    [aux_sym_chord_symbol_token1] = ACTIONS(236),
    [sym_annotation] = ACTIONS(238),
    [sym_tuplet_marker] = ACTIONS(238),
    [sym_decoration_shorthand] = ACTIONS(236),
    [sym_bar_line] = ACTIONS(236),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(238),
    [sym_thin_double_bar_line] = ACTIONS(238),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(238),
    [sym_start_of_repeated_section] = ACTIONS(238),
    [sym_end_of_repeated_section] = ACTIONS(238),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(238),
    [anon_sym_BANGtrill_BANG] = ACTIONS(238),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(238),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(238),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(238),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(238),
    [anon_sym_BANGmordent_BANG] = ACTIONS(238),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(238),
    [anon_sym_BANGroll_BANG] = ACTIONS(238),
    [anon_sym_BANGturn_BANG] = ACTIONS(238),
    [anon_sym_BANGturnx_BANG] = ACTIONS(238),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(238),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(238),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(238),
    [anon_sym_BANG_GT_BANG] = ACTIONS(238),
    [anon_sym_BANGaccent_BANG] = ACTIONS(238),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(238),
    [anon_sym_BANGfermata_BANG] = ACTIONS(238),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(238),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(238),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(238),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(238),
    [anon_sym_BANGplus_BANG] = ACTIONS(238),
    [anon_sym_BANGsnap_BANG] = ACTIONS(238),
    [anon_sym_BANGslide_BANG] = ACTIONS(238),
    [anon_sym_BANGwedge_BANG] = ACTIONS(238),
    [anon_sym_BANGupbow_BANG] = ACTIONS(238),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(238),
    [anon_sym_BANGopen_BANG] = ACTIONS(238),
    [anon_sym_BANGthumb_BANG] = ACTIONS(238),
    [anon_sym_BANGbreath_BANG] = ACTIONS(238),
    [anon_sym_BANGpppp_BANG] = ACTIONS(238),
    [anon_sym_BANGppp_BANG] = ACTIONS(238),
    [anon_sym_BANGpp_BANG] = ACTIONS(238),
    [anon_sym_BANGp_BANG] = ACTIONS(238),
    [anon_sym_BANGmp_BANG] = ACTIONS(238),
    [anon_sym_BANGmf_BANG] = ACTIONS(238),
    [anon_sym_BANGf_BANG] = ACTIONS(238),
    [anon_sym_BANGff_BANG] = ACTIONS(238),
    [anon_sym_BANGfff_BANG] = ACTIONS(238),
    [anon_sym_BANGffff_BANG] = ACTIONS(238),
    [anon_sym_BANGsfz_BANG] = ACTIONS(238),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(238),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(238),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(238),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(238),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(238),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(238),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(238),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(238),
    [anon_sym_BANGsegno_BANG] = ACTIONS(238),
    [anon_sym_BANGcoda_BANG] = ACTIONS(238),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(238),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(238),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(238),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(238),
    [anon_sym_BANGfine_BANG] = ACTIONS(238),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(238),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(238),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(238),
    [sym_parts_line] = ACTIONS(238),
    [sym_instruction] = ACTIONS(238),
    [sym_key] = ACTIONS(238),
    [sym_macros] = ACTIONS(238),
    [sym_meter] = ACTIONS(238),
    [sym_notes] = ACTIONS(238),
    [sym_remark] = ACTIONS(238),
    [sym_rhythm_line] = ACTIONS(238),
    [anon_sym_s_COLON] = ACTIONS(238),
    [sym_tempo] = ACTIONS(238),
    [sym_tune_title] = ACTIONS(238),
    [sym_unit_note_length] = ACTIONS(238),
    [anon_sym_U_COLON] = ACTIONS(238),
    [sym_voice] = ACTIONS(238),
    [anon_sym_w_COLON] = ACTIONS(238),
    [sym_words_postbody] = ACTIONS(238),
  },
  [27] = {
    [anon_sym_LF] = ACTIONS(240),
    [sym_COMMENT] = ACTIONS(240),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(242),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(240),
    [aux_sym__music_content_token1] = ACTIONS(240),
    [sym_slur_open] = ACTIONS(240),
    [sym_slur_close] = ACTIONS(242),
    [anon_sym_LBRACK] = ACTIONS(240),
    [sym_alteration] = ACTIONS(242),
    [sym_note_letter] = ACTIONS(242),
    [sym_rest] = ACTIONS(242),
    [anon_sym_Z] = ACTIONS(242),
    [anon_sym_X] = ACTIONS(242),
    [aux_sym_grace_note_token1] = ACTIONS(242),
    [aux_sym_chord_symbol_token1] = ACTIONS(240),
    [sym_annotation] = ACTIONS(242),
    [sym_tuplet_marker] = ACTIONS(242),
    [sym_decoration_shorthand] = ACTIONS(240),
    [sym_bar_line] = ACTIONS(240),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(242),
    [sym_thin_double_bar_line] = ACTIONS(242),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(242),
    [sym_start_of_repeated_section] = ACTIONS(242),
    [sym_end_of_repeated_section] = ACTIONS(242),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(242),
    [anon_sym_BANGtrill_BANG] = ACTIONS(242),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(242),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(242),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(242),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(242),
    [anon_sym_BANGmordent_BANG] = ACTIONS(242),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(242),
    [anon_sym_BANGroll_BANG] = ACTIONS(242),
    [anon_sym_BANGturn_BANG] = ACTIONS(242),
    [anon_sym_BANGturnx_BANG] = ACTIONS(242),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(242),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(242),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(242),
    [anon_sym_BANG_GT_BANG] = ACTIONS(242),
    [anon_sym_BANGaccent_BANG] = ACTIONS(242),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(242),
    [anon_sym_BANGfermata_BANG] = ACTIONS(242),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(242),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(242),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(242),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(242),
    [anon_sym_BANGplus_BANG] = ACTIONS(242),
    [anon_sym_BANGsnap_BANG] = ACTIONS(242),
    [anon_sym_BANGslide_BANG] = ACTIONS(242),
    [anon_sym_BANGwedge_BANG] = ACTIONS(242),
    [anon_sym_BANGupbow_BANG] = ACTIONS(242),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(242),
    [anon_sym_BANGopen_BANG] = ACTIONS(242),
    [anon_sym_BANGthumb_BANG] = ACTIONS(242),
    [anon_sym_BANGbreath_BANG] = ACTIONS(242),
    [anon_sym_BANGpppp_BANG] = ACTIONS(242),
    [anon_sym_BANGppp_BANG] = ACTIONS(242),
    [anon_sym_BANGpp_BANG] = ACTIONS(242),
    [anon_sym_BANGp_BANG] = ACTIONS(242),
    [anon_sym_BANGmp_BANG] = ACTIONS(242),
    [anon_sym_BANGmf_BANG] = ACTIONS(242),
    [anon_sym_BANGf_BANG] = ACTIONS(242),
    [anon_sym_BANGff_BANG] = ACTIONS(242),
    [anon_sym_BANGfff_BANG] = ACTIONS(242),
    [anon_sym_BANGffff_BANG] = ACTIONS(242),
    [anon_sym_BANGsfz_BANG] = ACTIONS(242),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(242),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(242),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(242),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(242),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(242),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(242),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(242),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(242),
    [anon_sym_BANGsegno_BANG] = ACTIONS(242),
    [anon_sym_BANGcoda_BANG] = ACTIONS(242),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(242),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(242),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(242),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(242),
    [anon_sym_BANGfine_BANG] = ACTIONS(242),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(242),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(242),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(242),
    [sym_parts_line] = ACTIONS(242),
    [sym_instruction] = ACTIONS(242),
    [sym_key] = ACTIONS(242),
    [sym_macros] = ACTIONS(242),
    [sym_meter] = ACTIONS(242),
    [sym_notes] = ACTIONS(242),
    [sym_remark] = ACTIONS(242),
    [sym_rhythm_line] = ACTIONS(242),
    [anon_sym_s_COLON] = ACTIONS(242),
    [sym_tempo] = ACTIONS(242),
    [sym_tune_title] = ACTIONS(242),
    [sym_unit_note_length] = ACTIONS(242),
    [anon_sym_U_COLON] = ACTIONS(242),
    [sym_voice] = ACTIONS(242),
    [anon_sym_w_COLON] = ACTIONS(242),
    [sym_words_postbody] = ACTIONS(242),
  },
  [28] = {
    [anon_sym_LF] = ACTIONS(244),
    [sym_COMMENT] = ACTIONS(244),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(246),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(248),
    [aux_sym__music_content_token1] = ACTIONS(244),
    [sym_slur_open] = ACTIONS(244),
    [sym_slur_close] = ACTIONS(246),
    [anon_sym_LBRACK] = ACTIONS(244),
    [sym_alteration] = ACTIONS(246),
    [sym_note_letter] = ACTIONS(246),
    [sym_rest] = ACTIONS(246),
    [anon_sym_Z] = ACTIONS(246),
    [anon_sym_X] = ACTIONS(246),
    [aux_sym_grace_note_token1] = ACTIONS(246),
    [aux_sym_chord_symbol_token1] = ACTIONS(244),
    [sym_annotation] = ACTIONS(246),
    [sym_tuplet_marker] = ACTIONS(246),
    [sym_decoration_shorthand] = ACTIONS(244),
    [sym_bar_line] = ACTIONS(244),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(246),
    [sym_thin_double_bar_line] = ACTIONS(246),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(246),
    [sym_start_of_repeated_section] = ACTIONS(246),
    [sym_end_of_repeated_section] = ACTIONS(246),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(246),
    [anon_sym_BANGtrill_BANG] = ACTIONS(246),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(246),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(246),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(246),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(246),
    [anon_sym_BANGmordent_BANG] = ACTIONS(246),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(246),
    [anon_sym_BANGroll_BANG] = ACTIONS(246),
    [anon_sym_BANGturn_BANG] = ACTIONS(246),
    [anon_sym_BANGturnx_BANG] = ACTIONS(246),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(246),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(246),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(246),
    [anon_sym_BANG_GT_BANG] = ACTIONS(246),
    [anon_sym_BANGaccent_BANG] = ACTIONS(246),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(246),
    [anon_sym_BANGfermata_BANG] = ACTIONS(246),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(246),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(246),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(246),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(246),
    [anon_sym_BANGplus_BANG] = ACTIONS(246),
    [anon_sym_BANGsnap_BANG] = ACTIONS(246),
    [anon_sym_BANGslide_BANG] = ACTIONS(246),
    [anon_sym_BANGwedge_BANG] = ACTIONS(246),
    [anon_sym_BANGupbow_BANG] = ACTIONS(246),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(246),
    [anon_sym_BANGopen_BANG] = ACTIONS(246),
    [anon_sym_BANGthumb_BANG] = ACTIONS(246),
    [anon_sym_BANGbreath_BANG] = ACTIONS(246),
    [anon_sym_BANGpppp_BANG] = ACTIONS(246),
    [anon_sym_BANGppp_BANG] = ACTIONS(246),
    [anon_sym_BANGpp_BANG] = ACTIONS(246),
    [anon_sym_BANGp_BANG] = ACTIONS(246),
    [anon_sym_BANGmp_BANG] = ACTIONS(246),
    [anon_sym_BANGmf_BANG] = ACTIONS(246),
    [anon_sym_BANGf_BANG] = ACTIONS(246),
    [anon_sym_BANGff_BANG] = ACTIONS(246),
    [anon_sym_BANGfff_BANG] = ACTIONS(246),
    [anon_sym_BANGffff_BANG] = ACTIONS(246),
    [anon_sym_BANGsfz_BANG] = ACTIONS(246),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(246),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(246),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(246),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(246),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(246),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(246),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(246),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(246),
    [anon_sym_BANGsegno_BANG] = ACTIONS(246),
    [anon_sym_BANGcoda_BANG] = ACTIONS(246),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(246),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(246),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(246),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(246),
    [anon_sym_BANGfine_BANG] = ACTIONS(246),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(246),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(246),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(246),
    [sym_parts_line] = ACTIONS(246),
    [sym_instruction] = ACTIONS(246),
    [sym_key] = ACTIONS(246),
    [sym_macros] = ACTIONS(246),
    [sym_meter] = ACTIONS(246),
    [sym_notes] = ACTIONS(246),
    [sym_remark] = ACTIONS(246),
    [sym_rhythm_line] = ACTIONS(246),
    [anon_sym_s_COLON] = ACTIONS(246),
    [sym_tempo] = ACTIONS(246),
    [sym_tune_title] = ACTIONS(246),
    [sym_unit_note_length] = ACTIONS(246),
    [anon_sym_U_COLON] = ACTIONS(246),
    [sym_voice] = ACTIONS(246),
    [anon_sym_w_COLON] = ACTIONS(246),
    [sym_words_postbody] = ACTIONS(246),
  },
  [29] = {
    [anon_sym_LF] = ACTIONS(250),
    [sym_COMMENT] = ACTIONS(250),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(252),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(250),
    [aux_sym__music_content_token1] = ACTIONS(250),
    [sym_slur_open] = ACTIONS(250),
    [sym_slur_close] = ACTIONS(252),
    [anon_sym_LBRACK] = ACTIONS(250),
    [sym_alteration] = ACTIONS(252),
    [sym_note_letter] = ACTIONS(252),
    [sym_rest] = ACTIONS(252),
    [anon_sym_Z] = ACTIONS(252),
    [anon_sym_X] = ACTIONS(252),
    [aux_sym_grace_note_token1] = ACTIONS(252),
    [aux_sym_chord_symbol_token1] = ACTIONS(250),
    [sym_annotation] = ACTIONS(252),
    [sym_tuplet_marker] = ACTIONS(252),
    [sym_decoration_shorthand] = ACTIONS(250),
    [sym_bar_line] = ACTIONS(250),
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
  [30] = {
    [anon_sym_LF] = ACTIONS(254),
    [sym_COMMENT] = ACTIONS(254),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(256),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(254),
    [aux_sym__music_content_token1] = ACTIONS(254),
    [sym_slur_open] = ACTIONS(254),
    [sym_slur_close] = ACTIONS(256),
    [anon_sym_LBRACK] = ACTIONS(254),
    [sym_alteration] = ACTIONS(256),
    [sym_note_letter] = ACTIONS(256),
    [sym_rest] = ACTIONS(256),
    [anon_sym_Z] = ACTIONS(256),
    [anon_sym_X] = ACTIONS(256),
    [aux_sym_grace_note_token1] = ACTIONS(256),
    [aux_sym_chord_symbol_token1] = ACTIONS(254),
    [sym_annotation] = ACTIONS(256),
    [sym_tuplet_marker] = ACTIONS(256),
    [sym_decoration_shorthand] = ACTIONS(254),
    [sym_bar_line] = ACTIONS(254),
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
  [31] = {
    [anon_sym_LF] = ACTIONS(258),
    [sym_COMMENT] = ACTIONS(258),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(260),
    [aux_sym__music_content_token1] = ACTIONS(258),
    [sym_slur_open] = ACTIONS(258),
    [sym_slur_close] = ACTIONS(260),
    [anon_sym_LBRACK] = ACTIONS(258),
    [sym_alteration] = ACTIONS(260),
    [sym_note_letter] = ACTIONS(260),
    [sym_rest] = ACTIONS(260),
    [anon_sym_Z] = ACTIONS(260),
    [anon_sym_X] = ACTIONS(260),
    [aux_sym_grace_note_token1] = ACTIONS(260),
    [aux_sym_chord_symbol_token1] = ACTIONS(258),
    [sym_annotation] = ACTIONS(260),
    [sym_tuplet_marker] = ACTIONS(260),
    [sym_decoration_shorthand] = ACTIONS(258),
    [sym_bar_line] = ACTIONS(258),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(260),
    [sym_thin_double_bar_line] = ACTIONS(260),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(260),
    [sym_start_of_repeated_section] = ACTIONS(260),
    [sym_end_of_repeated_section] = ACTIONS(260),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(260),
    [anon_sym_BANGtrill_BANG] = ACTIONS(260),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(260),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(260),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(260),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(260),
    [anon_sym_BANGmordent_BANG] = ACTIONS(260),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(260),
    [anon_sym_BANGroll_BANG] = ACTIONS(260),
    [anon_sym_BANGturn_BANG] = ACTIONS(260),
    [anon_sym_BANGturnx_BANG] = ACTIONS(260),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(260),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(260),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(260),
    [anon_sym_BANG_GT_BANG] = ACTIONS(260),
    [anon_sym_BANGaccent_BANG] = ACTIONS(260),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(260),
    [anon_sym_BANGfermata_BANG] = ACTIONS(260),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(260),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(260),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(260),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(260),
    [anon_sym_BANGplus_BANG] = ACTIONS(260),
    [anon_sym_BANGsnap_BANG] = ACTIONS(260),
    [anon_sym_BANGslide_BANG] = ACTIONS(260),
    [anon_sym_BANGwedge_BANG] = ACTIONS(260),
    [anon_sym_BANGupbow_BANG] = ACTIONS(260),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(260),
    [anon_sym_BANGopen_BANG] = ACTIONS(260),
    [anon_sym_BANGthumb_BANG] = ACTIONS(260),
    [anon_sym_BANGbreath_BANG] = ACTIONS(260),
    [anon_sym_BANGpppp_BANG] = ACTIONS(260),
    [anon_sym_BANGppp_BANG] = ACTIONS(260),
    [anon_sym_BANGpp_BANG] = ACTIONS(260),
    [anon_sym_BANGp_BANG] = ACTIONS(260),
    [anon_sym_BANGmp_BANG] = ACTIONS(260),
    [anon_sym_BANGmf_BANG] = ACTIONS(260),
    [anon_sym_BANGf_BANG] = ACTIONS(260),
    [anon_sym_BANGff_BANG] = ACTIONS(260),
    [anon_sym_BANGfff_BANG] = ACTIONS(260),
    [anon_sym_BANGffff_BANG] = ACTIONS(260),
    [anon_sym_BANGsfz_BANG] = ACTIONS(260),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(260),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(260),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(260),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(260),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(260),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(260),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(260),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(260),
    [anon_sym_BANGsegno_BANG] = ACTIONS(260),
    [anon_sym_BANGcoda_BANG] = ACTIONS(260),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(260),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(260),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(260),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(260),
    [anon_sym_BANGfine_BANG] = ACTIONS(260),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(260),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(260),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(260),
    [sym_parts_line] = ACTIONS(260),
    [sym_instruction] = ACTIONS(260),
    [sym_key] = ACTIONS(260),
    [sym_macros] = ACTIONS(260),
    [sym_meter] = ACTIONS(260),
    [sym_notes] = ACTIONS(260),
    [sym_remark] = ACTIONS(260),
    [sym_rhythm_line] = ACTIONS(260),
    [anon_sym_s_COLON] = ACTIONS(260),
    [sym_tempo] = ACTIONS(260),
    [sym_tune_title] = ACTIONS(260),
    [sym_unit_note_length] = ACTIONS(260),
    [anon_sym_U_COLON] = ACTIONS(260),
    [sym_voice] = ACTIONS(260),
    [anon_sym_w_COLON] = ACTIONS(260),
    [sym_words_postbody] = ACTIONS(260),
  },
  [32] = {
    [anon_sym_LF] = ACTIONS(262),
    [sym_COMMENT] = ACTIONS(262),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(264),
    [aux_sym__music_content_token1] = ACTIONS(262),
    [sym_slur_open] = ACTIONS(262),
    [sym_slur_close] = ACTIONS(264),
    [anon_sym_LBRACK] = ACTIONS(262),
    [sym_alteration] = ACTIONS(264),
    [sym_note_letter] = ACTIONS(264),
    [sym_rest] = ACTIONS(264),
    [anon_sym_Z] = ACTIONS(264),
    [anon_sym_X] = ACTIONS(264),
    [aux_sym_grace_note_token1] = ACTIONS(264),
    [aux_sym_chord_symbol_token1] = ACTIONS(262),
    [sym_annotation] = ACTIONS(264),
    [sym_tuplet_marker] = ACTIONS(264),
    [sym_decoration_shorthand] = ACTIONS(262),
    [sym_bar_line] = ACTIONS(262),
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
    [sym_parts_line] = ACTIONS(264),
    [sym_instruction] = ACTIONS(264),
    [sym_key] = ACTIONS(264),
    [sym_macros] = ACTIONS(264),
    [sym_meter] = ACTIONS(264),
    [sym_notes] = ACTIONS(264),
    [sym_remark] = ACTIONS(264),
    [sym_rhythm_line] = ACTIONS(264),
    [anon_sym_s_COLON] = ACTIONS(264),
    [sym_tempo] = ACTIONS(264),
    [sym_tune_title] = ACTIONS(264),
    [sym_unit_note_length] = ACTIONS(264),
    [anon_sym_U_COLON] = ACTIONS(264),
    [sym_voice] = ACTIONS(264),
    [anon_sym_w_COLON] = ACTIONS(264),
    [sym_words_postbody] = ACTIONS(264),
  },
  [33] = {
    [anon_sym_LF] = ACTIONS(266),
    [sym_COMMENT] = ACTIONS(266),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(268),
    [aux_sym__music_content_token1] = ACTIONS(266),
    [sym_slur_open] = ACTIONS(266),
    [sym_slur_close] = ACTIONS(268),
    [anon_sym_LBRACK] = ACTIONS(266),
    [sym_alteration] = ACTIONS(268),
    [sym_note_letter] = ACTIONS(268),
    [sym_rest] = ACTIONS(268),
    [anon_sym_Z] = ACTIONS(268),
    [anon_sym_X] = ACTIONS(268),
    [aux_sym_grace_note_token1] = ACTIONS(268),
    [aux_sym_chord_symbol_token1] = ACTIONS(266),
    [sym_annotation] = ACTIONS(268),
    [sym_tuplet_marker] = ACTIONS(268),
    [sym_decoration_shorthand] = ACTIONS(266),
    [sym_bar_line] = ACTIONS(266),
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
  [34] = {
    [sym_chord_symbol] = STATE(34),
    [sym_nth_ending_barline] = STATE(47),
    [sym_generic_bar_line] = STATE(34),
    [sym_first_repeat_bar] = STATE(47),
    [sym_second_repeat_bar] = STATE(47),
    [sym_symbol] = STATE(34),
    [aux_sym_symbol_line_repeat1] = STATE(34),
    [sym_noCommentText] = ACTIONS(270),
    [sym_note_skip] = ACTIONS(272),
    [aux_sym_chord_symbol_token1] = ACTIONS(275),
    [sym_annotation] = ACTIONS(272),
    [sym_bar_line] = ACTIONS(278),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(281),
    [sym_thin_double_bar_line] = ACTIONS(281),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(281),
    [sym_start_of_repeated_section] = ACTIONS(284),
    [sym_end_of_repeated_section] = ACTIONS(287),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(284),
    [anon_sym_BANGtrill_BANG] = ACTIONS(290),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(290),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(290),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(290),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(290),
    [anon_sym_BANGmordent_BANG] = ACTIONS(290),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(290),
    [anon_sym_BANGroll_BANG] = ACTIONS(290),
    [anon_sym_BANGturn_BANG] = ACTIONS(290),
    [anon_sym_BANGturnx_BANG] = ACTIONS(290),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(290),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(290),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(290),
    [anon_sym_BANG_GT_BANG] = ACTIONS(290),
    [anon_sym_BANGaccent_BANG] = ACTIONS(290),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(290),
    [anon_sym_BANGfermata_BANG] = ACTIONS(290),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(290),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(290),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(290),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(290),
    [anon_sym_BANGplus_BANG] = ACTIONS(290),
    [anon_sym_BANGsnap_BANG] = ACTIONS(290),
    [anon_sym_BANGslide_BANG] = ACTIONS(290),
    [anon_sym_BANGwedge_BANG] = ACTIONS(290),
    [anon_sym_BANGupbow_BANG] = ACTIONS(290),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(290),
    [anon_sym_BANGopen_BANG] = ACTIONS(290),
    [anon_sym_BANGthumb_BANG] = ACTIONS(290),
    [anon_sym_BANGbreath_BANG] = ACTIONS(290),
    [anon_sym_BANGpppp_BANG] = ACTIONS(290),
    [anon_sym_BANGppp_BANG] = ACTIONS(290),
    [anon_sym_BANGpp_BANG] = ACTIONS(290),
    [anon_sym_BANGp_BANG] = ACTIONS(290),
    [anon_sym_BANGmp_BANG] = ACTIONS(290),
    [anon_sym_BANGmf_BANG] = ACTIONS(290),
    [anon_sym_BANGf_BANG] = ACTIONS(290),
    [anon_sym_BANGff_BANG] = ACTIONS(290),
    [anon_sym_BANGfff_BANG] = ACTIONS(290),
    [anon_sym_BANGffff_BANG] = ACTIONS(290),
    [anon_sym_BANGsfz_BANG] = ACTIONS(290),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(290),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(290),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(290),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(290),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(290),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(290),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(290),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(290),
    [anon_sym_BANGsegno_BANG] = ACTIONS(290),
    [anon_sym_BANGcoda_BANG] = ACTIONS(290),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(290),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(290),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(290),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(290),
    [anon_sym_BANGfine_BANG] = ACTIONS(290),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(290),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(290),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(290),
  },
  [35] = {
    [sym_chord_symbol] = STATE(34),
    [sym_nth_ending_barline] = STATE(47),
    [sym_generic_bar_line] = STATE(34),
    [sym_first_repeat_bar] = STATE(47),
    [sym_second_repeat_bar] = STATE(47),
    [sym_symbol] = STATE(34),
    [aux_sym_symbol_line_repeat1] = STATE(34),
    [sym_noCommentText] = ACTIONS(293),
    [sym_note_skip] = ACTIONS(295),
    [aux_sym_chord_symbol_token1] = ACTIONS(297),
    [sym_annotation] = ACTIONS(295),
    [sym_bar_line] = ACTIONS(299),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(301),
    [sym_thin_double_bar_line] = ACTIONS(301),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(301),
    [sym_start_of_repeated_section] = ACTIONS(303),
    [sym_end_of_repeated_section] = ACTIONS(305),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(303),
    [anon_sym_BANGtrill_BANG] = ACTIONS(307),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(307),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(307),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(307),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(307),
    [anon_sym_BANGmordent_BANG] = ACTIONS(307),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(307),
    [anon_sym_BANGroll_BANG] = ACTIONS(307),
    [anon_sym_BANGturn_BANG] = ACTIONS(307),
    [anon_sym_BANGturnx_BANG] = ACTIONS(307),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(307),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(307),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(307),
    [anon_sym_BANG_GT_BANG] = ACTIONS(307),
    [anon_sym_BANGaccent_BANG] = ACTIONS(307),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(307),
    [anon_sym_BANGfermata_BANG] = ACTIONS(307),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(307),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(307),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(307),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(307),
    [anon_sym_BANGplus_BANG] = ACTIONS(307),
    [anon_sym_BANGsnap_BANG] = ACTIONS(307),
    [anon_sym_BANGslide_BANG] = ACTIONS(307),
    [anon_sym_BANGwedge_BANG] = ACTIONS(307),
    [anon_sym_BANGupbow_BANG] = ACTIONS(307),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(307),
    [anon_sym_BANGopen_BANG] = ACTIONS(307),
    [anon_sym_BANGthumb_BANG] = ACTIONS(307),
    [anon_sym_BANGbreath_BANG] = ACTIONS(307),
    [anon_sym_BANGpppp_BANG] = ACTIONS(307),
    [anon_sym_BANGppp_BANG] = ACTIONS(307),
    [anon_sym_BANGpp_BANG] = ACTIONS(307),
    [anon_sym_BANGp_BANG] = ACTIONS(307),
    [anon_sym_BANGmp_BANG] = ACTIONS(307),
    [anon_sym_BANGmf_BANG] = ACTIONS(307),
    [anon_sym_BANGf_BANG] = ACTIONS(307),
    [anon_sym_BANGff_BANG] = ACTIONS(307),
    [anon_sym_BANGfff_BANG] = ACTIONS(307),
    [anon_sym_BANGffff_BANG] = ACTIONS(307),
    [anon_sym_BANGsfz_BANG] = ACTIONS(307),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(307),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(307),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(307),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(307),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(307),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(307),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(307),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(307),
    [anon_sym_BANGsegno_BANG] = ACTIONS(307),
    [anon_sym_BANGcoda_BANG] = ACTIONS(307),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(307),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(307),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(307),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(307),
    [anon_sym_BANGfine_BANG] = ACTIONS(307),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(307),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(307),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(307),
  },
  [36] = {
    [sym_chord_symbol] = STATE(35),
    [sym_nth_ending_barline] = STATE(47),
    [sym_generic_bar_line] = STATE(35),
    [sym_first_repeat_bar] = STATE(47),
    [sym_second_repeat_bar] = STATE(47),
    [sym_symbol] = STATE(35),
    [aux_sym_symbol_line_repeat1] = STATE(35),
    [sym_note_skip] = ACTIONS(309),
    [aux_sym_chord_symbol_token1] = ACTIONS(297),
    [sym_annotation] = ACTIONS(309),
    [sym_bar_line] = ACTIONS(299),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(311),
    [sym_thin_double_bar_line] = ACTIONS(311),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(311),
    [sym_start_of_repeated_section] = ACTIONS(313),
    [sym_end_of_repeated_section] = ACTIONS(315),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(313),
    [anon_sym_BANGtrill_BANG] = ACTIONS(317),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(317),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(317),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(317),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(317),
    [anon_sym_BANGmordent_BANG] = ACTIONS(317),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(317),
    [anon_sym_BANGroll_BANG] = ACTIONS(317),
    [anon_sym_BANGturn_BANG] = ACTIONS(317),
    [anon_sym_BANGturnx_BANG] = ACTIONS(317),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(317),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(317),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(317),
    [anon_sym_BANG_GT_BANG] = ACTIONS(317),
    [anon_sym_BANGaccent_BANG] = ACTIONS(317),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(317),
    [anon_sym_BANGfermata_BANG] = ACTIONS(317),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(317),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(317),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(317),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(317),
    [anon_sym_BANGplus_BANG] = ACTIONS(317),
    [anon_sym_BANGsnap_BANG] = ACTIONS(317),
    [anon_sym_BANGslide_BANG] = ACTIONS(317),
    [anon_sym_BANGwedge_BANG] = ACTIONS(317),
    [anon_sym_BANGupbow_BANG] = ACTIONS(317),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(317),
    [anon_sym_BANGopen_BANG] = ACTIONS(317),
    [anon_sym_BANGthumb_BANG] = ACTIONS(317),
    [anon_sym_BANGbreath_BANG] = ACTIONS(317),
    [anon_sym_BANGpppp_BANG] = ACTIONS(317),
    [anon_sym_BANGppp_BANG] = ACTIONS(317),
    [anon_sym_BANGpp_BANG] = ACTIONS(317),
    [anon_sym_BANGp_BANG] = ACTIONS(317),
    [anon_sym_BANGmp_BANG] = ACTIONS(317),
    [anon_sym_BANGmf_BANG] = ACTIONS(317),
    [anon_sym_BANGf_BANG] = ACTIONS(317),
    [anon_sym_BANGff_BANG] = ACTIONS(317),
    [anon_sym_BANGfff_BANG] = ACTIONS(317),
    [anon_sym_BANGffff_BANG] = ACTIONS(317),
    [anon_sym_BANGsfz_BANG] = ACTIONS(317),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(317),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(317),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(317),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(317),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(317),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(317),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(317),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(317),
    [anon_sym_BANGsegno_BANG] = ACTIONS(317),
    [anon_sym_BANGcoda_BANG] = ACTIONS(317),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(317),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(317),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(317),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(317),
    [anon_sym_BANGfine_BANG] = ACTIONS(317),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(317),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(317),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(317),
  },
  [37] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(37),
    [sym_noCommentText] = ACTIONS(191),
    [sym_note_skip] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(319),
    [aux_sym_chord_symbol_token1] = ACTIONS(191),
    [sym_annotation] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(319),
    [sym_bar_line] = ACTIONS(191),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(191),
    [sym_thin_double_bar_line] = ACTIONS(191),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(191),
    [sym_start_of_repeated_section] = ACTIONS(191),
    [sym_end_of_repeated_section] = ACTIONS(191),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(191),
    [anon_sym_BANGtrill_BANG] = ACTIONS(191),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(191),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(191),
    [anon_sym_BANGmordent_BANG] = ACTIONS(191),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(191),
    [anon_sym_BANGroll_BANG] = ACTIONS(191),
    [anon_sym_BANGturn_BANG] = ACTIONS(191),
    [anon_sym_BANGturnx_BANG] = ACTIONS(191),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(191),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(191),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(191),
    [anon_sym_BANG_GT_BANG] = ACTIONS(191),
    [anon_sym_BANGaccent_BANG] = ACTIONS(191),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(191),
    [anon_sym_BANGfermata_BANG] = ACTIONS(191),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(191),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(191),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(191),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(191),
    [anon_sym_BANGplus_BANG] = ACTIONS(191),
    [anon_sym_BANGsnap_BANG] = ACTIONS(191),
    [anon_sym_BANGslide_BANG] = ACTIONS(191),
    [anon_sym_BANGwedge_BANG] = ACTIONS(191),
    [anon_sym_BANGupbow_BANG] = ACTIONS(191),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(191),
    [anon_sym_BANGopen_BANG] = ACTIONS(191),
    [anon_sym_BANGthumb_BANG] = ACTIONS(191),
    [anon_sym_BANGbreath_BANG] = ACTIONS(191),
    [anon_sym_BANGpppp_BANG] = ACTIONS(191),
    [anon_sym_BANGppp_BANG] = ACTIONS(191),
    [anon_sym_BANGpp_BANG] = ACTIONS(191),
    [anon_sym_BANGp_BANG] = ACTIONS(191),
    [anon_sym_BANGmp_BANG] = ACTIONS(191),
    [anon_sym_BANGmf_BANG] = ACTIONS(191),
    [anon_sym_BANGf_BANG] = ACTIONS(191),
    [anon_sym_BANGff_BANG] = ACTIONS(191),
    [anon_sym_BANGfff_BANG] = ACTIONS(191),
    [anon_sym_BANGffff_BANG] = ACTIONS(191),
    [anon_sym_BANGsfz_BANG] = ACTIONS(191),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGsegno_BANG] = ACTIONS(191),
    [anon_sym_BANGcoda_BANG] = ACTIONS(191),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(191),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(191),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(191),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(191),
    [anon_sym_BANGfine_BANG] = ACTIONS(191),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(191),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(191),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(191),
  },
  [38] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(39),
    [sym_noCommentText] = ACTIONS(181),
    [sym_note_skip] = ACTIONS(181),
    [anon_sym_DASH] = ACTIONS(322),
    [aux_sym_chord_symbol_token1] = ACTIONS(181),
    [sym_annotation] = ACTIONS(181),
    [anon_sym_COMMA] = ACTIONS(322),
    [sym_bar_line] = ACTIONS(181),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(181),
    [sym_thin_double_bar_line] = ACTIONS(181),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(181),
    [sym_start_of_repeated_section] = ACTIONS(181),
    [sym_end_of_repeated_section] = ACTIONS(181),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(181),
    [anon_sym_BANGtrill_BANG] = ACTIONS(181),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(181),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(181),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(181),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(181),
    [anon_sym_BANGmordent_BANG] = ACTIONS(181),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(181),
    [anon_sym_BANGroll_BANG] = ACTIONS(181),
    [anon_sym_BANGturn_BANG] = ACTIONS(181),
    [anon_sym_BANGturnx_BANG] = ACTIONS(181),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(181),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(181),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(181),
    [anon_sym_BANG_GT_BANG] = ACTIONS(181),
    [anon_sym_BANGaccent_BANG] = ACTIONS(181),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(181),
    [anon_sym_BANGfermata_BANG] = ACTIONS(181),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(181),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(181),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(181),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(181),
    [anon_sym_BANGplus_BANG] = ACTIONS(181),
    [anon_sym_BANGsnap_BANG] = ACTIONS(181),
    [anon_sym_BANGslide_BANG] = ACTIONS(181),
    [anon_sym_BANGwedge_BANG] = ACTIONS(181),
    [anon_sym_BANGupbow_BANG] = ACTIONS(181),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(181),
    [anon_sym_BANGopen_BANG] = ACTIONS(181),
    [anon_sym_BANGthumb_BANG] = ACTIONS(181),
    [anon_sym_BANGbreath_BANG] = ACTIONS(181),
    [anon_sym_BANGpppp_BANG] = ACTIONS(181),
    [anon_sym_BANGppp_BANG] = ACTIONS(181),
    [anon_sym_BANGpp_BANG] = ACTIONS(181),
    [anon_sym_BANGp_BANG] = ACTIONS(181),
    [anon_sym_BANGmp_BANG] = ACTIONS(181),
    [anon_sym_BANGmf_BANG] = ACTIONS(181),
    [anon_sym_BANGf_BANG] = ACTIONS(181),
    [anon_sym_BANGff_BANG] = ACTIONS(181),
    [anon_sym_BANGfff_BANG] = ACTIONS(181),
    [anon_sym_BANGffff_BANG] = ACTIONS(181),
    [anon_sym_BANGsfz_BANG] = ACTIONS(181),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(181),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(181),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(181),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(181),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(181),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(181),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(181),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(181),
    [anon_sym_BANGsegno_BANG] = ACTIONS(181),
    [anon_sym_BANGcoda_BANG] = ACTIONS(181),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(181),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(181),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(181),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(181),
    [anon_sym_BANGfine_BANG] = ACTIONS(181),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(181),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(181),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(181),
  },
  [39] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(37),
    [sym_noCommentText] = ACTIONS(187),
    [sym_note_skip] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(322),
    [aux_sym_chord_symbol_token1] = ACTIONS(187),
    [sym_annotation] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(322),
    [sym_bar_line] = ACTIONS(187),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(187),
    [sym_thin_double_bar_line] = ACTIONS(187),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(187),
    [sym_start_of_repeated_section] = ACTIONS(187),
    [sym_end_of_repeated_section] = ACTIONS(187),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(187),
    [anon_sym_BANGtrill_BANG] = ACTIONS(187),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(187),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(187),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(187),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(187),
    [anon_sym_BANGmordent_BANG] = ACTIONS(187),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(187),
    [anon_sym_BANGroll_BANG] = ACTIONS(187),
    [anon_sym_BANGturn_BANG] = ACTIONS(187),
    [anon_sym_BANGturnx_BANG] = ACTIONS(187),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(187),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(187),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(187),
    [anon_sym_BANG_GT_BANG] = ACTIONS(187),
    [anon_sym_BANGaccent_BANG] = ACTIONS(187),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(187),
    [anon_sym_BANGfermata_BANG] = ACTIONS(187),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(187),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(187),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(187),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(187),
    [anon_sym_BANGplus_BANG] = ACTIONS(187),
    [anon_sym_BANGsnap_BANG] = ACTIONS(187),
    [anon_sym_BANGslide_BANG] = ACTIONS(187),
    [anon_sym_BANGwedge_BANG] = ACTIONS(187),
    [anon_sym_BANGupbow_BANG] = ACTIONS(187),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(187),
    [anon_sym_BANGopen_BANG] = ACTIONS(187),
    [anon_sym_BANGthumb_BANG] = ACTIONS(187),
    [anon_sym_BANGbreath_BANG] = ACTIONS(187),
    [anon_sym_BANGpppp_BANG] = ACTIONS(187),
    [anon_sym_BANGppp_BANG] = ACTIONS(187),
    [anon_sym_BANGpp_BANG] = ACTIONS(187),
    [anon_sym_BANGp_BANG] = ACTIONS(187),
    [anon_sym_BANGmp_BANG] = ACTIONS(187),
    [anon_sym_BANGmf_BANG] = ACTIONS(187),
    [anon_sym_BANGf_BANG] = ACTIONS(187),
    [anon_sym_BANGff_BANG] = ACTIONS(187),
    [anon_sym_BANGfff_BANG] = ACTIONS(187),
    [anon_sym_BANGffff_BANG] = ACTIONS(187),
    [anon_sym_BANGsfz_BANG] = ACTIONS(187),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(187),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(187),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(187),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(187),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(187),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(187),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(187),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(187),
    [anon_sym_BANGsegno_BANG] = ACTIONS(187),
    [anon_sym_BANGcoda_BANG] = ACTIONS(187),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(187),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(187),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(187),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(187),
    [anon_sym_BANGfine_BANG] = ACTIONS(187),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(187),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(187),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(187),
  },
  [40] = {
    [sym_noCommentText] = ACTIONS(198),
    [sym_note_skip] = ACTIONS(198),
    [aux_sym_beam_token1] = ACTIONS(324),
    [aux_sym_chord_symbol_token1] = ACTIONS(198),
    [sym_annotation] = ACTIONS(198),
    [sym_bar_line] = ACTIONS(198),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(198),
    [sym_thin_double_bar_line] = ACTIONS(198),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(198),
    [sym_start_of_repeated_section] = ACTIONS(198),
    [sym_end_of_repeated_section] = ACTIONS(198),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(198),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(326),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(328),
    [anon_sym_BANGtrill_BANG] = ACTIONS(198),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(198),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(198),
    [anon_sym_BANGmordent_BANG] = ACTIONS(198),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(198),
    [anon_sym_BANGroll_BANG] = ACTIONS(198),
    [anon_sym_BANGturn_BANG] = ACTIONS(198),
    [anon_sym_BANGturnx_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(198),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_BANG] = ACTIONS(198),
    [anon_sym_BANGaccent_BANG] = ACTIONS(198),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(198),
    [anon_sym_BANGfermata_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(198),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(198),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(198),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(198),
    [anon_sym_BANGplus_BANG] = ACTIONS(198),
    [anon_sym_BANGsnap_BANG] = ACTIONS(198),
    [anon_sym_BANGslide_BANG] = ACTIONS(198),
    [anon_sym_BANGwedge_BANG] = ACTIONS(198),
    [anon_sym_BANGupbow_BANG] = ACTIONS(198),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(198),
    [anon_sym_BANGopen_BANG] = ACTIONS(198),
    [anon_sym_BANGthumb_BANG] = ACTIONS(198),
    [anon_sym_BANGbreath_BANG] = ACTIONS(198),
    [anon_sym_BANGpppp_BANG] = ACTIONS(198),
    [anon_sym_BANGppp_BANG] = ACTIONS(198),
    [anon_sym_BANGpp_BANG] = ACTIONS(198),
    [anon_sym_BANGp_BANG] = ACTIONS(198),
    [anon_sym_BANGmp_BANG] = ACTIONS(198),
    [anon_sym_BANGmf_BANG] = ACTIONS(198),
    [anon_sym_BANGf_BANG] = ACTIONS(198),
    [anon_sym_BANGff_BANG] = ACTIONS(198),
    [anon_sym_BANGfff_BANG] = ACTIONS(198),
    [anon_sym_BANGffff_BANG] = ACTIONS(198),
    [anon_sym_BANGsfz_BANG] = ACTIONS(198),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGsegno_BANG] = ACTIONS(198),
    [anon_sym_BANGcoda_BANG] = ACTIONS(198),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(198),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(198),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(198),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(198),
    [anon_sym_BANGfine_BANG] = ACTIONS(198),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(198),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(198),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(198),
  },
  [41] = {
    [sym_noCommentText] = ACTIONS(198),
    [sym_note_skip] = ACTIONS(198),
    [aux_sym_beam_token1] = ACTIONS(324),
    [aux_sym_chord_symbol_token1] = ACTIONS(198),
    [sym_annotation] = ACTIONS(198),
    [sym_bar_line] = ACTIONS(198),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(198),
    [sym_thin_double_bar_line] = ACTIONS(198),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(198),
    [sym_start_of_repeated_section] = ACTIONS(198),
    [sym_end_of_repeated_section] = ACTIONS(198),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(198),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(330),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(332),
    [anon_sym_BANGtrill_BANG] = ACTIONS(198),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(198),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(198),
    [anon_sym_BANGmordent_BANG] = ACTIONS(198),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(198),
    [anon_sym_BANGroll_BANG] = ACTIONS(198),
    [anon_sym_BANGturn_BANG] = ACTIONS(198),
    [anon_sym_BANGturnx_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(198),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_BANG] = ACTIONS(198),
    [anon_sym_BANGaccent_BANG] = ACTIONS(198),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(198),
    [anon_sym_BANGfermata_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(198),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(198),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(198),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(198),
    [anon_sym_BANGplus_BANG] = ACTIONS(198),
    [anon_sym_BANGsnap_BANG] = ACTIONS(198),
    [anon_sym_BANGslide_BANG] = ACTIONS(198),
    [anon_sym_BANGwedge_BANG] = ACTIONS(198),
    [anon_sym_BANGupbow_BANG] = ACTIONS(198),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(198),
    [anon_sym_BANGopen_BANG] = ACTIONS(198),
    [anon_sym_BANGthumb_BANG] = ACTIONS(198),
    [anon_sym_BANGbreath_BANG] = ACTIONS(198),
    [anon_sym_BANGpppp_BANG] = ACTIONS(198),
    [anon_sym_BANGppp_BANG] = ACTIONS(198),
    [anon_sym_BANGpp_BANG] = ACTIONS(198),
    [anon_sym_BANGp_BANG] = ACTIONS(198),
    [anon_sym_BANGmp_BANG] = ACTIONS(198),
    [anon_sym_BANGmf_BANG] = ACTIONS(198),
    [anon_sym_BANGf_BANG] = ACTIONS(198),
    [anon_sym_BANGff_BANG] = ACTIONS(198),
    [anon_sym_BANGfff_BANG] = ACTIONS(198),
    [anon_sym_BANGffff_BANG] = ACTIONS(198),
    [anon_sym_BANGsfz_BANG] = ACTIONS(198),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGsegno_BANG] = ACTIONS(198),
    [anon_sym_BANGcoda_BANG] = ACTIONS(198),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(198),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(198),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(198),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(198),
    [anon_sym_BANGfine_BANG] = ACTIONS(198),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(198),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(198),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(198),
  },
  [42] = {
    [sym_noCommentText] = ACTIONS(191),
    [sym_note_skip] = ACTIONS(191),
    [anon_sym_DASH] = ACTIONS(191),
    [aux_sym_chord_symbol_token1] = ACTIONS(191),
    [sym_annotation] = ACTIONS(191),
    [anon_sym_COMMA] = ACTIONS(191),
    [sym_bar_line] = ACTIONS(191),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(191),
    [sym_thin_double_bar_line] = ACTIONS(191),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(191),
    [sym_start_of_repeated_section] = ACTIONS(191),
    [sym_end_of_repeated_section] = ACTIONS(191),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(191),
    [anon_sym_BANGtrill_BANG] = ACTIONS(191),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(191),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(191),
    [anon_sym_BANGmordent_BANG] = ACTIONS(191),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(191),
    [anon_sym_BANGroll_BANG] = ACTIONS(191),
    [anon_sym_BANGturn_BANG] = ACTIONS(191),
    [anon_sym_BANGturnx_BANG] = ACTIONS(191),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(191),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(191),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(191),
    [anon_sym_BANG_GT_BANG] = ACTIONS(191),
    [anon_sym_BANGaccent_BANG] = ACTIONS(191),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(191),
    [anon_sym_BANGfermata_BANG] = ACTIONS(191),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(191),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(191),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(191),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(191),
    [anon_sym_BANGplus_BANG] = ACTIONS(191),
    [anon_sym_BANGsnap_BANG] = ACTIONS(191),
    [anon_sym_BANGslide_BANG] = ACTIONS(191),
    [anon_sym_BANGwedge_BANG] = ACTIONS(191),
    [anon_sym_BANGupbow_BANG] = ACTIONS(191),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(191),
    [anon_sym_BANGopen_BANG] = ACTIONS(191),
    [anon_sym_BANGthumb_BANG] = ACTIONS(191),
    [anon_sym_BANGbreath_BANG] = ACTIONS(191),
    [anon_sym_BANGpppp_BANG] = ACTIONS(191),
    [anon_sym_BANGppp_BANG] = ACTIONS(191),
    [anon_sym_BANGpp_BANG] = ACTIONS(191),
    [anon_sym_BANGp_BANG] = ACTIONS(191),
    [anon_sym_BANGmp_BANG] = ACTIONS(191),
    [anon_sym_BANGmf_BANG] = ACTIONS(191),
    [anon_sym_BANGf_BANG] = ACTIONS(191),
    [anon_sym_BANGff_BANG] = ACTIONS(191),
    [anon_sym_BANGfff_BANG] = ACTIONS(191),
    [anon_sym_BANGffff_BANG] = ACTIONS(191),
    [anon_sym_BANGsfz_BANG] = ACTIONS(191),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(191),
    [anon_sym_BANGsegno_BANG] = ACTIONS(191),
    [anon_sym_BANGcoda_BANG] = ACTIONS(191),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(191),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(191),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(191),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(191),
    [anon_sym_BANGfine_BANG] = ACTIONS(191),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(191),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(191),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(191),
  },
  [43] = {
    [sym_noCommentText] = ACTIONS(198),
    [sym_note_skip] = ACTIONS(198),
    [aux_sym_beam_token1] = ACTIONS(324),
    [aux_sym_chord_symbol_token1] = ACTIONS(198),
    [sym_annotation] = ACTIONS(198),
    [sym_bar_line] = ACTIONS(198),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(198),
    [sym_thin_double_bar_line] = ACTIONS(198),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(198),
    [sym_start_of_repeated_section] = ACTIONS(198),
    [sym_end_of_repeated_section] = ACTIONS(198),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(198),
    [anon_sym_BANGtrill_BANG] = ACTIONS(198),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(198),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(198),
    [anon_sym_BANGmordent_BANG] = ACTIONS(198),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(198),
    [anon_sym_BANGroll_BANG] = ACTIONS(198),
    [anon_sym_BANGturn_BANG] = ACTIONS(198),
    [anon_sym_BANGturnx_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(198),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_BANG] = ACTIONS(198),
    [anon_sym_BANGaccent_BANG] = ACTIONS(198),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(198),
    [anon_sym_BANGfermata_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(198),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(198),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(198),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(198),
    [anon_sym_BANGplus_BANG] = ACTIONS(198),
    [anon_sym_BANGsnap_BANG] = ACTIONS(198),
    [anon_sym_BANGslide_BANG] = ACTIONS(198),
    [anon_sym_BANGwedge_BANG] = ACTIONS(198),
    [anon_sym_BANGupbow_BANG] = ACTIONS(198),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(198),
    [anon_sym_BANGopen_BANG] = ACTIONS(198),
    [anon_sym_BANGthumb_BANG] = ACTIONS(198),
    [anon_sym_BANGbreath_BANG] = ACTIONS(198),
    [anon_sym_BANGpppp_BANG] = ACTIONS(198),
    [anon_sym_BANGppp_BANG] = ACTIONS(198),
    [anon_sym_BANGpp_BANG] = ACTIONS(198),
    [anon_sym_BANGp_BANG] = ACTIONS(198),
    [anon_sym_BANGmp_BANG] = ACTIONS(198),
    [anon_sym_BANGmf_BANG] = ACTIONS(198),
    [anon_sym_BANGf_BANG] = ACTIONS(198),
    [anon_sym_BANGff_BANG] = ACTIONS(198),
    [anon_sym_BANGfff_BANG] = ACTIONS(198),
    [anon_sym_BANGffff_BANG] = ACTIONS(198),
    [anon_sym_BANGsfz_BANG] = ACTIONS(198),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGsegno_BANG] = ACTIONS(198),
    [anon_sym_BANGcoda_BANG] = ACTIONS(198),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(198),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(198),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(198),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(198),
    [anon_sym_BANGfine_BANG] = ACTIONS(198),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(198),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(198),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(198),
  },
  [44] = {
    [sym_noCommentText] = ACTIONS(232),
    [sym_note_skip] = ACTIONS(232),
    [aux_sym_chord_symbol_token1] = ACTIONS(232),
    [sym_annotation] = ACTIONS(232),
    [sym_bar_line] = ACTIONS(232),
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
  },
  [45] = {
    [sym_noCommentText] = ACTIONS(334),
    [sym_note_skip] = ACTIONS(334),
    [aux_sym_chord_symbol_token1] = ACTIONS(334),
    [sym_annotation] = ACTIONS(334),
    [sym_bar_line] = ACTIONS(334),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(334),
    [sym_thin_double_bar_line] = ACTIONS(334),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(334),
    [sym_start_of_repeated_section] = ACTIONS(334),
    [sym_end_of_repeated_section] = ACTIONS(334),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(334),
    [anon_sym_BANGtrill_BANG] = ACTIONS(334),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(334),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(334),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(334),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(334),
    [anon_sym_BANGmordent_BANG] = ACTIONS(334),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(334),
    [anon_sym_BANGroll_BANG] = ACTIONS(334),
    [anon_sym_BANGturn_BANG] = ACTIONS(334),
    [anon_sym_BANGturnx_BANG] = ACTIONS(334),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(334),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(334),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(334),
    [anon_sym_BANG_GT_BANG] = ACTIONS(334),
    [anon_sym_BANGaccent_BANG] = ACTIONS(334),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(334),
    [anon_sym_BANGfermata_BANG] = ACTIONS(334),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(334),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(334),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(334),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(334),
    [anon_sym_BANGplus_BANG] = ACTIONS(334),
    [anon_sym_BANGsnap_BANG] = ACTIONS(334),
    [anon_sym_BANGslide_BANG] = ACTIONS(334),
    [anon_sym_BANGwedge_BANG] = ACTIONS(334),
    [anon_sym_BANGupbow_BANG] = ACTIONS(334),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(334),
    [anon_sym_BANGopen_BANG] = ACTIONS(334),
    [anon_sym_BANGthumb_BANG] = ACTIONS(334),
    [anon_sym_BANGbreath_BANG] = ACTIONS(334),
    [anon_sym_BANGpppp_BANG] = ACTIONS(334),
    [anon_sym_BANGppp_BANG] = ACTIONS(334),
    [anon_sym_BANGpp_BANG] = ACTIONS(334),
    [anon_sym_BANGp_BANG] = ACTIONS(334),
    [anon_sym_BANGmp_BANG] = ACTIONS(334),
    [anon_sym_BANGmf_BANG] = ACTIONS(334),
    [anon_sym_BANGf_BANG] = ACTIONS(334),
    [anon_sym_BANGff_BANG] = ACTIONS(334),
    [anon_sym_BANGfff_BANG] = ACTIONS(334),
    [anon_sym_BANGffff_BANG] = ACTIONS(334),
    [anon_sym_BANGsfz_BANG] = ACTIONS(334),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(334),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(334),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(334),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(334),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(334),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(334),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(334),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(334),
    [anon_sym_BANGsegno_BANG] = ACTIONS(334),
    [anon_sym_BANGcoda_BANG] = ACTIONS(334),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(334),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(334),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(334),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(334),
    [anon_sym_BANGfine_BANG] = ACTIONS(334),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(334),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(334),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(334),
  },
  [46] = {
    [sym_noCommentText] = ACTIONS(212),
    [sym_note_skip] = ACTIONS(212),
    [aux_sym_chord_symbol_token1] = ACTIONS(212),
    [sym_annotation] = ACTIONS(212),
    [sym_bar_line] = ACTIONS(212),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(212),
    [sym_thin_double_bar_line] = ACTIONS(212),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(212),
    [sym_start_of_repeated_section] = ACTIONS(212),
    [sym_end_of_repeated_section] = ACTIONS(212),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(212),
    [anon_sym_BANGtrill_BANG] = ACTIONS(212),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(212),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(212),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(212),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(212),
    [anon_sym_BANGmordent_BANG] = ACTIONS(212),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(212),
    [anon_sym_BANGroll_BANG] = ACTIONS(212),
    [anon_sym_BANGturn_BANG] = ACTIONS(212),
    [anon_sym_BANGturnx_BANG] = ACTIONS(212),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(212),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(212),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(212),
    [anon_sym_BANG_GT_BANG] = ACTIONS(212),
    [anon_sym_BANGaccent_BANG] = ACTIONS(212),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(212),
    [anon_sym_BANGfermata_BANG] = ACTIONS(212),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(212),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(212),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(212),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(212),
    [anon_sym_BANGplus_BANG] = ACTIONS(212),
    [anon_sym_BANGsnap_BANG] = ACTIONS(212),
    [anon_sym_BANGslide_BANG] = ACTIONS(212),
    [anon_sym_BANGwedge_BANG] = ACTIONS(212),
    [anon_sym_BANGupbow_BANG] = ACTIONS(212),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(212),
    [anon_sym_BANGopen_BANG] = ACTIONS(212),
    [anon_sym_BANGthumb_BANG] = ACTIONS(212),
    [anon_sym_BANGbreath_BANG] = ACTIONS(212),
    [anon_sym_BANGpppp_BANG] = ACTIONS(212),
    [anon_sym_BANGppp_BANG] = ACTIONS(212),
    [anon_sym_BANGpp_BANG] = ACTIONS(212),
    [anon_sym_BANGp_BANG] = ACTIONS(212),
    [anon_sym_BANGmp_BANG] = ACTIONS(212),
    [anon_sym_BANGmf_BANG] = ACTIONS(212),
    [anon_sym_BANGf_BANG] = ACTIONS(212),
    [anon_sym_BANGff_BANG] = ACTIONS(212),
    [anon_sym_BANGfff_BANG] = ACTIONS(212),
    [anon_sym_BANGffff_BANG] = ACTIONS(212),
    [anon_sym_BANGsfz_BANG] = ACTIONS(212),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(212),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(212),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(212),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(212),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(212),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(212),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(212),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(212),
    [anon_sym_BANGsegno_BANG] = ACTIONS(212),
    [anon_sym_BANGcoda_BANG] = ACTIONS(212),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(212),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(212),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(212),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(212),
    [anon_sym_BANGfine_BANG] = ACTIONS(212),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(212),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(212),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(212),
  },
  [47] = {
    [sym_noCommentText] = ACTIONS(198),
    [sym_note_skip] = ACTIONS(198),
    [aux_sym_chord_symbol_token1] = ACTIONS(198),
    [sym_annotation] = ACTIONS(198),
    [sym_bar_line] = ACTIONS(198),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(198),
    [sym_thin_double_bar_line] = ACTIONS(198),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(198),
    [sym_start_of_repeated_section] = ACTIONS(198),
    [sym_end_of_repeated_section] = ACTIONS(198),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(198),
    [anon_sym_BANGtrill_BANG] = ACTIONS(198),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(198),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(198),
    [anon_sym_BANGmordent_BANG] = ACTIONS(198),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(198),
    [anon_sym_BANGroll_BANG] = ACTIONS(198),
    [anon_sym_BANGturn_BANG] = ACTIONS(198),
    [anon_sym_BANGturnx_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(198),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_BANG] = ACTIONS(198),
    [anon_sym_BANGaccent_BANG] = ACTIONS(198),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(198),
    [anon_sym_BANGfermata_BANG] = ACTIONS(198),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(198),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(198),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(198),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(198),
    [anon_sym_BANGplus_BANG] = ACTIONS(198),
    [anon_sym_BANGsnap_BANG] = ACTIONS(198),
    [anon_sym_BANGslide_BANG] = ACTIONS(198),
    [anon_sym_BANGwedge_BANG] = ACTIONS(198),
    [anon_sym_BANGupbow_BANG] = ACTIONS(198),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(198),
    [anon_sym_BANGopen_BANG] = ACTIONS(198),
    [anon_sym_BANGthumb_BANG] = ACTIONS(198),
    [anon_sym_BANGbreath_BANG] = ACTIONS(198),
    [anon_sym_BANGpppp_BANG] = ACTIONS(198),
    [anon_sym_BANGppp_BANG] = ACTIONS(198),
    [anon_sym_BANGpp_BANG] = ACTIONS(198),
    [anon_sym_BANGp_BANG] = ACTIONS(198),
    [anon_sym_BANGmp_BANG] = ACTIONS(198),
    [anon_sym_BANGmf_BANG] = ACTIONS(198),
    [anon_sym_BANGf_BANG] = ACTIONS(198),
    [anon_sym_BANGff_BANG] = ACTIONS(198),
    [anon_sym_BANGfff_BANG] = ACTIONS(198),
    [anon_sym_BANGffff_BANG] = ACTIONS(198),
    [anon_sym_BANGsfz_BANG] = ACTIONS(198),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(198),
    [anon_sym_BANGsegno_BANG] = ACTIONS(198),
    [anon_sym_BANGcoda_BANG] = ACTIONS(198),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(198),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(198),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(198),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(198),
    [anon_sym_BANGfine_BANG] = ACTIONS(198),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(198),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(198),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(198),
  },
  [48] = {
    [sym_noCommentText] = ACTIONS(216),
    [sym_note_skip] = ACTIONS(216),
    [aux_sym_chord_symbol_token1] = ACTIONS(216),
    [sym_annotation] = ACTIONS(216),
    [sym_bar_line] = ACTIONS(216),
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
  },
  [49] = {
    [sym_noCommentText] = ACTIONS(240),
    [sym_note_skip] = ACTIONS(240),
    [aux_sym_chord_symbol_token1] = ACTIONS(240),
    [sym_annotation] = ACTIONS(240),
    [sym_bar_line] = ACTIONS(240),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(240),
    [sym_thin_double_bar_line] = ACTIONS(240),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(240),
    [sym_start_of_repeated_section] = ACTIONS(240),
    [sym_end_of_repeated_section] = ACTIONS(240),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(240),
    [anon_sym_BANGtrill_BANG] = ACTIONS(240),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(240),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(240),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(240),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(240),
    [anon_sym_BANGmordent_BANG] = ACTIONS(240),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(240),
    [anon_sym_BANGroll_BANG] = ACTIONS(240),
    [anon_sym_BANGturn_BANG] = ACTIONS(240),
    [anon_sym_BANGturnx_BANG] = ACTIONS(240),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(240),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(240),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(240),
    [anon_sym_BANG_GT_BANG] = ACTIONS(240),
    [anon_sym_BANGaccent_BANG] = ACTIONS(240),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(240),
    [anon_sym_BANGfermata_BANG] = ACTIONS(240),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(240),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(240),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(240),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(240),
    [anon_sym_BANGplus_BANG] = ACTIONS(240),
    [anon_sym_BANGsnap_BANG] = ACTIONS(240),
    [anon_sym_BANGslide_BANG] = ACTIONS(240),
    [anon_sym_BANGwedge_BANG] = ACTIONS(240),
    [anon_sym_BANGupbow_BANG] = ACTIONS(240),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(240),
    [anon_sym_BANGopen_BANG] = ACTIONS(240),
    [anon_sym_BANGthumb_BANG] = ACTIONS(240),
    [anon_sym_BANGbreath_BANG] = ACTIONS(240),
    [anon_sym_BANGpppp_BANG] = ACTIONS(240),
    [anon_sym_BANGppp_BANG] = ACTIONS(240),
    [anon_sym_BANGpp_BANG] = ACTIONS(240),
    [anon_sym_BANGp_BANG] = ACTIONS(240),
    [anon_sym_BANGmp_BANG] = ACTIONS(240),
    [anon_sym_BANGmf_BANG] = ACTIONS(240),
    [anon_sym_BANGf_BANG] = ACTIONS(240),
    [anon_sym_BANGff_BANG] = ACTIONS(240),
    [anon_sym_BANGfff_BANG] = ACTIONS(240),
    [anon_sym_BANGffff_BANG] = ACTIONS(240),
    [anon_sym_BANGsfz_BANG] = ACTIONS(240),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(240),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(240),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(240),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(240),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(240),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(240),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(240),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(240),
    [anon_sym_BANGsegno_BANG] = ACTIONS(240),
    [anon_sym_BANGcoda_BANG] = ACTIONS(240),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(240),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(240),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(240),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(240),
    [anon_sym_BANGfine_BANG] = ACTIONS(240),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(240),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(240),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(240),
  },
  [50] = {
    [sym_noCommentText] = ACTIONS(336),
    [sym_note_skip] = ACTIONS(336),
    [aux_sym_chord_symbol_token1] = ACTIONS(336),
    [sym_annotation] = ACTIONS(336),
    [sym_bar_line] = ACTIONS(336),
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
  },
  [51] = {
    [sym_noCommentText] = ACTIONS(338),
    [sym_note_skip] = ACTIONS(338),
    [aux_sym_chord_symbol_token1] = ACTIONS(338),
    [sym_annotation] = ACTIONS(338),
    [sym_bar_line] = ACTIONS(338),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(338),
    [sym_thin_double_bar_line] = ACTIONS(338),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(338),
    [sym_start_of_repeated_section] = ACTIONS(338),
    [sym_end_of_repeated_section] = ACTIONS(338),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(338),
    [anon_sym_BANGtrill_BANG] = ACTIONS(338),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(338),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(338),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(338),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(338),
    [anon_sym_BANGmordent_BANG] = ACTIONS(338),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(338),
    [anon_sym_BANGroll_BANG] = ACTIONS(338),
    [anon_sym_BANGturn_BANG] = ACTIONS(338),
    [anon_sym_BANGturnx_BANG] = ACTIONS(338),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(338),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(338),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(338),
    [anon_sym_BANG_GT_BANG] = ACTIONS(338),
    [anon_sym_BANGaccent_BANG] = ACTIONS(338),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(338),
    [anon_sym_BANGfermata_BANG] = ACTIONS(338),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(338),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(338),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(338),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(338),
    [anon_sym_BANGplus_BANG] = ACTIONS(338),
    [anon_sym_BANGsnap_BANG] = ACTIONS(338),
    [anon_sym_BANGslide_BANG] = ACTIONS(338),
    [anon_sym_BANGwedge_BANG] = ACTIONS(338),
    [anon_sym_BANGupbow_BANG] = ACTIONS(338),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(338),
    [anon_sym_BANGopen_BANG] = ACTIONS(338),
    [anon_sym_BANGthumb_BANG] = ACTIONS(338),
    [anon_sym_BANGbreath_BANG] = ACTIONS(338),
    [anon_sym_BANGpppp_BANG] = ACTIONS(338),
    [anon_sym_BANGppp_BANG] = ACTIONS(338),
    [anon_sym_BANGpp_BANG] = ACTIONS(338),
    [anon_sym_BANGp_BANG] = ACTIONS(338),
    [anon_sym_BANGmp_BANG] = ACTIONS(338),
    [anon_sym_BANGmf_BANG] = ACTIONS(338),
    [anon_sym_BANGf_BANG] = ACTIONS(338),
    [anon_sym_BANGff_BANG] = ACTIONS(338),
    [anon_sym_BANGfff_BANG] = ACTIONS(338),
    [anon_sym_BANGffff_BANG] = ACTIONS(338),
    [anon_sym_BANGsfz_BANG] = ACTIONS(338),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(338),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(338),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(338),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(338),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(338),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(338),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(338),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(338),
    [anon_sym_BANGsegno_BANG] = ACTIONS(338),
    [anon_sym_BANGcoda_BANG] = ACTIONS(338),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(338),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(338),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(338),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(338),
    [anon_sym_BANGfine_BANG] = ACTIONS(338),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(338),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(338),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(338),
  },
  [52] = {
    [sym_noCommentText] = ACTIONS(224),
    [sym_note_skip] = ACTIONS(224),
    [aux_sym_chord_symbol_token1] = ACTIONS(224),
    [sym_annotation] = ACTIONS(224),
    [sym_bar_line] = ACTIONS(224),
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
  },
  [53] = {
    [sym_noCommentText] = ACTIONS(340),
    [sym_note_skip] = ACTIONS(340),
    [aux_sym_chord_symbol_token1] = ACTIONS(340),
    [sym_annotation] = ACTIONS(340),
    [sym_bar_line] = ACTIONS(340),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(340),
    [sym_thin_double_bar_line] = ACTIONS(340),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(340),
    [sym_start_of_repeated_section] = ACTIONS(340),
    [sym_end_of_repeated_section] = ACTIONS(340),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(340),
    [anon_sym_BANGtrill_BANG] = ACTIONS(340),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(340),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(340),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(340),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(340),
    [anon_sym_BANGmordent_BANG] = ACTIONS(340),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(340),
    [anon_sym_BANGroll_BANG] = ACTIONS(340),
    [anon_sym_BANGturn_BANG] = ACTIONS(340),
    [anon_sym_BANGturnx_BANG] = ACTIONS(340),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(340),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(340),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(340),
    [anon_sym_BANG_GT_BANG] = ACTIONS(340),
    [anon_sym_BANGaccent_BANG] = ACTIONS(340),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(340),
    [anon_sym_BANGfermata_BANG] = ACTIONS(340),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(340),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(340),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(340),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(340),
    [anon_sym_BANGplus_BANG] = ACTIONS(340),
    [anon_sym_BANGsnap_BANG] = ACTIONS(340),
    [anon_sym_BANGslide_BANG] = ACTIONS(340),
    [anon_sym_BANGwedge_BANG] = ACTIONS(340),
    [anon_sym_BANGupbow_BANG] = ACTIONS(340),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(340),
    [anon_sym_BANGopen_BANG] = ACTIONS(340),
    [anon_sym_BANGthumb_BANG] = ACTIONS(340),
    [anon_sym_BANGbreath_BANG] = ACTIONS(340),
    [anon_sym_BANGpppp_BANG] = ACTIONS(340),
    [anon_sym_BANGppp_BANG] = ACTIONS(340),
    [anon_sym_BANGpp_BANG] = ACTIONS(340),
    [anon_sym_BANGp_BANG] = ACTIONS(340),
    [anon_sym_BANGmp_BANG] = ACTIONS(340),
    [anon_sym_BANGmf_BANG] = ACTIONS(340),
    [anon_sym_BANGf_BANG] = ACTIONS(340),
    [anon_sym_BANGff_BANG] = ACTIONS(340),
    [anon_sym_BANGfff_BANG] = ACTIONS(340),
    [anon_sym_BANGffff_BANG] = ACTIONS(340),
    [anon_sym_BANGsfz_BANG] = ACTIONS(340),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(340),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(340),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(340),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(340),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(340),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(340),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(340),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(340),
    [anon_sym_BANGsegno_BANG] = ACTIONS(340),
    [anon_sym_BANGcoda_BANG] = ACTIONS(340),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(340),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(340),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(340),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(340),
    [anon_sym_BANGfine_BANG] = ACTIONS(340),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(340),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(340),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(340),
  },
  [54] = {
    [sym_noCommentText] = ACTIONS(236),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(263), 1,
      sym_symbol,
    ACTIONS(342), 59,
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
  [65] = 16,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(344), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(346), 1,
      aux_sym_beam_token1,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(356), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(358), 1,
      sym_tuplet_marker,
    STATE(100), 1,
      sym__pitch,
    STATE(116), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(171), 1,
      sym_decoration,
    STATE(73), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(57), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [118] = 16,
    ACTIONS(360), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(363), 1,
      aux_sym_beam_token1,
    ACTIONS(365), 1,
      anon_sym_LBRACK,
    ACTIONS(368), 1,
      sym_alteration,
    ACTIONS(371), 1,
      sym_note_letter,
    ACTIONS(374), 1,
      sym_rest,
    ACTIONS(377), 1,
      aux_sym_grace_note_token1,
    ACTIONS(380), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(383), 1,
      sym_tuplet_marker,
    ACTIONS(386), 1,
      sym_decoration_shorthand,
    STATE(100), 1,
      sym__pitch,
    STATE(116), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(171), 1,
      sym_decoration,
    STATE(73), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(57), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [171] = 16,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(344), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(356), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(358), 1,
      sym_tuplet_marker,
    ACTIONS(389), 1,
      aux_sym__MUSIC_CODE_token1,
    STATE(100), 1,
      sym__pitch,
    STATE(116), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(171), 1,
      sym_decoration,
    STATE(73), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(56), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [224] = 14,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(348), 1,
      anon_sym_LBRACK,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(356), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(358), 1,
      sym_tuplet_marker,
    STATE(100), 1,
      sym__pitch,
    STATE(116), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(171), 1,
      sym_decoration,
    STATE(73), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(145), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [270] = 14,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(104), 1,
      sym_tuplet_marker,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(356), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(122), 1,
      sym_note,
    STATE(154), 1,
      sym_chord_symbol,
    STATE(178), 1,
      sym_decoration,
    STATE(68), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(262), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [316] = 3,
    ACTIONS(395), 1,
      sym_octave,
    STATE(62), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(393), 14,
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
  [339] = 3,
    ACTIONS(399), 1,
      sym_octave,
    STATE(62), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(397), 14,
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
  [362] = 3,
    ACTIONS(402), 1,
      sym_octave,
    STATE(64), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(393), 14,
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
  [385] = 3,
    ACTIONS(395), 1,
      sym_octave,
    STATE(62), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(404), 14,
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
  [408] = 3,
    ACTIONS(408), 1,
      sym_octave,
    STATE(61), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(406), 14,
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
  [431] = 4,
    ACTIONS(410), 1,
      aux_sym_beam_token1,
    ACTIONS(412), 1,
      sym_octave,
    STATE(67), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(393), 11,
      sym_BEAM_SEPARATOR,
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
  [454] = 4,
    ACTIONS(414), 1,
      aux_sym_beam_token1,
    ACTIONS(416), 1,
      sym_octave,
    STATE(69), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(404), 11,
      sym_BEAM_SEPARATOR,
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
  [477] = 13,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(356), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_tuplet_marker,
    STATE(82), 1,
      sym__pitch,
    STATE(112), 1,
      sym_note,
    STATE(152), 1,
      sym_chord_symbol,
    STATE(175), 1,
      sym_decoration,
    STATE(125), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [518] = 4,
    ACTIONS(422), 1,
      aux_sym_beam_token1,
    ACTIONS(424), 1,
      sym_octave,
    STATE(69), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(397), 11,
      sym_BEAM_SEPARATOR,
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
  [541] = 7,
    ACTIONS(432), 1,
      anon_sym_DASH,
    ACTIONS(435), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(438), 1,
      aux_sym_verse_number_token1,
    ACTIONS(427), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(70), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(150), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(429), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [570] = 4,
    ACTIONS(410), 1,
      aux_sym_beam_token1,
    ACTIONS(416), 1,
      sym_octave,
    STATE(69), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(393), 11,
      sym_BEAM_SEPARATOR,
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
  [593] = 9,
    ACTIONS(441), 1,
      anon_sym_LF,
    ACTIONS(445), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_UNDERSCORE,
    ACTIONS(449), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(451), 1,
      aux_sym_verse_number_token1,
    STATE(193), 1,
      sym__NL,
    STATE(83), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(443), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(159), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [626] = 13,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(356), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(455), 1,
      sym_tuplet_marker,
    STATE(100), 1,
      sym__pitch,
    STATE(118), 1,
      sym_note,
    STATE(149), 1,
      sym_chord_symbol,
    STATE(173), 1,
      sym_decoration,
    STATE(125), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [667] = 7,
    ACTIONS(461), 1,
      anon_sym_DASH,
    ACTIONS(463), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(465), 1,
      aux_sym_verse_number_token1,
    ACTIONS(457), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(70), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(150), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(459), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [696] = 4,
    ACTIONS(467), 1,
      aux_sym_beam_token1,
    ACTIONS(469), 1,
      sym_octave,
    STATE(71), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(406), 11,
      sym_BEAM_SEPARATOR,
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
  [719] = 11,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [755] = 11,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [791] = 11,
    ACTIONS(475), 1,
      anon_sym_RBRACK,
    ACTIONS(477), 1,
      sym_alteration,
    ACTIONS(480), 1,
      sym_note_letter,
    ACTIONS(483), 1,
      sym_rest,
    ACTIONS(486), 1,
      aux_sym_grace_note_token1,
    ACTIONS(489), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [827] = 11,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [863] = 11,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [899] = 11,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(496), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [935] = 2,
    ACTIONS(500), 1,
      sym_rhythm,
    ACTIONS(498), 12,
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
  [953] = 8,
    ACTIONS(502), 1,
      anon_sym_LF,
    ACTIONS(507), 1,
      anon_sym_DASH,
    ACTIONS(510), 1,
      sym_UNDERSCORE,
    ACTIONS(513), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(516), 1,
      aux_sym_verse_number_token1,
    STATE(83), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(504), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(159), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [983] = 11,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(519), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1019] = 11,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(521), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1055] = 11,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(523), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1091] = 11,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(525), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1127] = 11,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(527), 1,
      anon_sym_RBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1163] = 7,
    ACTIONS(445), 1,
      anon_sym_DASH,
    ACTIONS(447), 1,
      sym_UNDERSCORE,
    ACTIONS(449), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(451), 1,
      aux_sym_verse_number_token1,
    STATE(72), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(443), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(159), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1190] = 10,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(81), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1223] = 10,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(88), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1256] = 10,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1289] = 7,
    ACTIONS(459), 1,
      sym_UNDERSCORE,
    ACTIONS(463), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(465), 1,
      aux_sym_verse_number_token1,
    ACTIONS(531), 1,
      anon_sym_DASH,
    STATE(74), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(529), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(150), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1316] = 10,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(77), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1349] = 10,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1382] = 10,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(86), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1415] = 10,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(85), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1448] = 10,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(80), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1481] = 10,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(79), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1514] = 3,
    ACTIONS(533), 1,
      aux_sym_beam_token1,
    ACTIONS(535), 1,
      sym_rhythm,
    ACTIONS(498), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1533] = 1,
    ACTIONS(537), 12,
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
  [1548] = 10,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
    STATE(76), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(124), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1581] = 2,
    ACTIONS(539), 1,
      aux_sym_beam_token1,
    ACTIONS(537), 10,
      sym_BEAM_SEPARATOR,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1597] = 3,
    ACTIONS(543), 1,
      aux_sym_beam_token1,
    ACTIONS(545), 1,
      sym_rhythm,
    ACTIONS(541), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1615] = 2,
    ACTIONS(549), 1,
      aux_sym_note_construct_token1,
    ACTIONS(547), 10,
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
  [1631] = 2,
    ACTIONS(553), 1,
      sym_rhythm,
    ACTIONS(551), 10,
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
  [1647] = 3,
    ACTIONS(555), 1,
      aux_sym_beam_token1,
    ACTIONS(557), 1,
      sym_rhythm,
    ACTIONS(551), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1665] = 2,
    ACTIONS(561), 1,
      sym_rhythm,
    ACTIONS(559), 10,
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
  [1681] = 3,
    ACTIONS(563), 1,
      aux_sym_beam_token1,
    ACTIONS(565), 1,
      aux_sym_note_construct_token1,
    ACTIONS(547), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1699] = 2,
    ACTIONS(569), 1,
      sym_rhythm,
    ACTIONS(567), 10,
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
  [1715] = 2,
    ACTIONS(573), 1,
      aux_sym_note_construct_token1,
    ACTIONS(571), 10,
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
  [1731] = 2,
    ACTIONS(577), 1,
      aux_sym_note_construct_token1,
    ACTIONS(575), 10,
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
  [1747] = 3,
    ACTIONS(579), 1,
      aux_sym_beam_token1,
    ACTIONS(581), 1,
      sym_rhythm,
    ACTIONS(559), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1765] = 3,
    ACTIONS(583), 1,
      aux_sym_beam_token1,
    ACTIONS(585), 1,
      sym_rhythm,
    ACTIONS(567), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1783] = 2,
    ACTIONS(589), 1,
      sym_rhythm,
    ACTIONS(587), 10,
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
  [1799] = 3,
    ACTIONS(593), 1,
      aux_sym_beam_token1,
    ACTIONS(595), 1,
      aux_sym_note_construct_token1,
    ACTIONS(591), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1817] = 2,
    ACTIONS(599), 1,
      aux_sym_note_construct_token1,
    ACTIONS(597), 10,
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
  [1833] = 3,
    ACTIONS(601), 1,
      aux_sym_beam_token1,
    ACTIONS(603), 1,
      aux_sym_note_construct_token1,
    ACTIONS(575), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1851] = 3,
    ACTIONS(605), 1,
      aux_sym_beam_token1,
    ACTIONS(607), 1,
      aux_sym_note_construct_token1,
    ACTIONS(597), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1869] = 3,
    ACTIONS(609), 1,
      aux_sym_beam_token1,
    ACTIONS(611), 1,
      sym_rhythm,
    ACTIONS(587), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1887] = 2,
    ACTIONS(613), 1,
      sym_rhythm,
    ACTIONS(541), 10,
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
  [1903] = 2,
    ACTIONS(615), 1,
      aux_sym_note_construct_token1,
    ACTIONS(591), 10,
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
  [1919] = 3,
    ACTIONS(617), 1,
      aux_sym_beam_token1,
    ACTIONS(619), 1,
      aux_sym_note_construct_token1,
    ACTIONS(571), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1937] = 9,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(100), 1,
      aux_sym_grace_note_token1,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(170), 1,
      sym_note,
    STATE(186), 1,
      sym_decoration,
    STATE(125), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1966] = 3,
    ACTIONS(623), 1,
      aux_sym_grace_note_token1,
    STATE(125), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(621), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1983] = 1,
    ACTIONS(551), 10,
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
  [1996] = 1,
    ACTIONS(626), 10,
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
  [2009] = 2,
    ACTIONS(543), 1,
      aux_sym_beam_token1,
    ACTIONS(541), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2024] = 2,
    ACTIONS(628), 1,
      aux_sym_beam_token1,
    ACTIONS(626), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2039] = 1,
    ACTIONS(547), 10,
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
  [2052] = 1,
    ACTIONS(630), 10,
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
  [2065] = 2,
    ACTIONS(555), 1,
      aux_sym_beam_token1,
    ACTIONS(551), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2080] = 1,
    ACTIONS(575), 10,
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
  [2093] = 1,
    ACTIONS(541), 10,
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
  [2106] = 2,
    ACTIONS(583), 1,
      aux_sym_beam_token1,
    ACTIONS(567), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2121] = 2,
    ACTIONS(579), 1,
      aux_sym_beam_token1,
    ACTIONS(559), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2136] = 2,
    ACTIONS(617), 1,
      aux_sym_beam_token1,
    ACTIONS(571), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2151] = 2,
    ACTIONS(605), 1,
      aux_sym_beam_token1,
    ACTIONS(597), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2166] = 1,
    ACTIONS(571), 10,
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
  [2179] = 1,
    ACTIONS(597), 10,
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
  [2192] = 2,
    ACTIONS(632), 1,
      aux_sym_beam_token1,
    ACTIONS(630), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2207] = 2,
    ACTIONS(563), 1,
      aux_sym_beam_token1,
    ACTIONS(547), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2222] = 2,
    ACTIONS(601), 1,
      aux_sym_beam_token1,
    ACTIONS(575), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2237] = 1,
    ACTIONS(567), 10,
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
  [2250] = 2,
    ACTIONS(363), 1,
      aux_sym_beam_token1,
    ACTIONS(634), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2265] = 1,
    ACTIONS(559), 10,
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
  [2278] = 1,
    ACTIONS(636), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2290] = 9,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(455), 1,
      sym_tuplet_marker,
    STATE(100), 1,
      sym__pitch,
    STATE(118), 1,
      sym_note,
    STATE(173), 1,
      sym_decoration,
  [2318] = 9,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    ACTIONS(640), 1,
      sym_tuplet_marker,
    STATE(100), 1,
      sym__pitch,
    STATE(123), 1,
      sym_note,
    STATE(179), 1,
      sym_decoration,
  [2346] = 1,
    ACTIONS(642), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2358] = 1,
    ACTIONS(644), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2370] = 9,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    ACTIONS(648), 1,
      sym_tuplet_marker,
    STATE(82), 1,
      sym__pitch,
    STATE(111), 1,
      sym_note,
    STATE(176), 1,
      sym_decoration,
  [2398] = 1,
    ACTIONS(650), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2410] = 9,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    ACTIONS(420), 1,
      sym_tuplet_marker,
    STATE(82), 1,
      sym__pitch,
    STATE(112), 1,
      sym_note,
    STATE(175), 1,
      sym_decoration,
  [2438] = 8,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(111), 1,
      sym_note,
    STATE(176), 1,
      sym_decoration,
  [2463] = 2,
    ACTIONS(650), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(652), 5,
      anon_sym_LF,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2476] = 2,
    ACTIONS(644), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(654), 5,
      anon_sym_LF,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2489] = 1,
    ACTIONS(656), 8,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2500] = 2,
    ACTIONS(642), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(658), 5,
      anon_sym_LF,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2513] = 8,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym__pitch,
    STATE(118), 1,
      sym_note,
    STATE(173), 1,
      sym_decoration,
  [2538] = 8,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(112), 1,
      sym_note,
    STATE(175), 1,
      sym_decoration,
  [2563] = 8,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(660), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(117), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
  [2588] = 2,
    ACTIONS(636), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(662), 5,
      anon_sym_LF,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2601] = 8,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym__pitch,
    STATE(123), 1,
      sym_note,
    STATE(179), 1,
      sym_decoration,
  [2626] = 8,
    ACTIONS(177), 1,
      sym_decoration_shorthand,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym__pitch,
    STATE(119), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
  [2651] = 6,
    ACTIONS(179), 1,
      sym_words_postbody,
    ACTIONS(666), 1,
      anon_sym_LF,
    STATE(167), 1,
      aux_sym_file_header_repeat1,
    STATE(194), 1,
      sym__NL,
    STATE(210), 1,
      sym_lyric_section,
    STATE(190), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [2671] = 6,
    ACTIONS(179), 1,
      sym_words_postbody,
    ACTIONS(668), 1,
      anon_sym_LF,
    STATE(188), 1,
      aux_sym_file_header_repeat1,
    STATE(196), 1,
      sym__NL,
    STATE(218), 1,
      sym_lyric_section,
    STATE(190), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [2691] = 1,
    ACTIONS(670), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2700] = 6,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(672), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(105), 1,
      sym_note,
  [2719] = 1,
    ACTIONS(674), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2728] = 6,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym__pitch,
    STATE(118), 1,
      sym_note,
  [2747] = 6,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(676), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym__pitch,
    STATE(109), 1,
      sym_note,
  [2766] = 6,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(638), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym__pitch,
    STATE(123), 1,
      sym_note,
  [2785] = 1,
    ACTIONS(678), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2794] = 6,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(646), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(111), 1,
      sym_note,
  [2813] = 6,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(660), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(117), 1,
      sym_note,
  [2832] = 1,
    ACTIONS(680), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2841] = 6,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    ACTIONS(418), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(112), 1,
      sym_note,
  [2860] = 6,
    ACTIONS(350), 1,
      sym_alteration,
    ACTIONS(352), 1,
      sym_note_letter,
    ACTIONS(354), 1,
      sym_rest,
    ACTIONS(664), 1,
      anon_sym_LBRACK,
    STATE(100), 1,
      sym__pitch,
    STATE(119), 1,
      sym_note,
  [2879] = 1,
    ACTIONS(682), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2888] = 1,
    ACTIONS(684), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2897] = 1,
    ACTIONS(686), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2906] = 4,
    ACTIONS(688), 1,
      sym_alteration,
    ACTIONS(691), 1,
      sym_note_letter,
    ACTIONS(694), 1,
      aux_sym_grace_note_token2,
    STATE(183), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [2920] = 5,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    STATE(82), 1,
      sym__pitch,
    STATE(170), 1,
      sym_note,
  [2936] = 4,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(696), 1,
      aux_sym_grace_note_token2,
    STATE(183), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [2950] = 5,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    ACTIONS(96), 1,
      sym_rest,
    STATE(82), 1,
      sym__pitch,
    STATE(168), 1,
      sym_note,
  [2966] = 2,
    ACTIONS(698), 1,
      sym_alteration,
    ACTIONS(700), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [2975] = 3,
    ACTIONS(702), 1,
      anon_sym_LF,
    ACTIONS(705), 1,
      sym_words_postbody,
    STATE(188), 2,
      sym__NL,
      aux_sym_file_header_repeat1,
  [2986] = 1,
    ACTIONS(707), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [2993] = 3,
    ACTIONS(179), 1,
      sym_words_postbody,
    ACTIONS(709), 1,
      anon_sym_LF,
    STATE(192), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [3004] = 3,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(94), 1,
      sym_note_letter,
    STATE(185), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [3015] = 3,
    ACTIONS(711), 1,
      anon_sym_LF,
    ACTIONS(713), 1,
      sym_words_postbody,
    STATE(192), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [3026] = 3,
    ACTIONS(716), 1,
      sym_noCommentText,
    ACTIONS(718), 1,
      aux_sym_words_line_token1,
    STATE(195), 1,
      aux_sym_words_line_repeat2,
  [3036] = 2,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
    ACTIONS(722), 2,
      anon_sym_LF,
      sym_words_postbody,
  [3044] = 3,
    ACTIONS(718), 1,
      aux_sym_words_line_token1,
    ACTIONS(724), 1,
      sym_noCommentText,
    STATE(197), 1,
      aux_sym_words_line_repeat2,
  [3054] = 2,
    ACTIONS(726), 1,
      ts_builtin_sym_end,
    ACTIONS(722), 2,
      anon_sym_LF,
      sym_words_postbody,
  [3062] = 3,
    ACTIONS(728), 1,
      sym_noCommentText,
    ACTIONS(730), 1,
      aux_sym_words_line_token1,
    STATE(197), 1,
      aux_sym_words_line_repeat2,
  [3072] = 3,
    ACTIONS(733), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(735), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(737), 1,
      sym_chord_type,
  [3082] = 3,
    ACTIONS(739), 1,
      sym_noCommentText,
    ACTIONS(741), 1,
      anon_sym_DOT,
    STATE(204), 1,
      aux_sym_abc_version_repeat1,
  [3092] = 1,
    ACTIONS(743), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [3098] = 3,
    ACTIONS(745), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(747), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(749), 1,
      sym_chord_type,
  [3108] = 3,
    ACTIONS(741), 1,
      anon_sym_DOT,
    ACTIONS(751), 1,
      sym_noCommentText,
    STATE(199), 1,
      aux_sym_abc_version_repeat1,
  [3118] = 3,
    ACTIONS(753), 1,
      anon_sym_LF,
    ACTIONS(755), 1,
      sym_COMMENT,
    STATE(8), 1,
      sym__NL,
  [3128] = 3,
    ACTIONS(757), 1,
      sym_noCommentText,
    ACTIONS(759), 1,
      anon_sym_DOT,
    STATE(204), 1,
      aux_sym_abc_version_repeat1,
  [3138] = 1,
    ACTIONS(757), 2,
      sym_noCommentText,
      anon_sym_DOT,
  [3143] = 2,
    ACTIONS(762), 1,
      sym_note_letter,
    STATE(261), 1,
      sym_chord_symbol_note,
  [3150] = 2,
    ACTIONS(762), 1,
      sym_note_letter,
    STATE(250), 1,
      sym_chord_symbol_note,
  [3157] = 2,
    ACTIONS(700), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(764), 1,
      sym_alteration,
  [3164] = 2,
    ACTIONS(766), 1,
      anon_sym_LF,
    STATE(10), 1,
      sym__NL,
  [3171] = 2,
    ACTIONS(768), 1,
      anon_sym_LF,
    STATE(226), 1,
      sym__NL,
  [3178] = 2,
    ACTIONS(770), 1,
      anon_sym_LF,
    STATE(264), 1,
      sym__NL,
  [3185] = 1,
    ACTIONS(772), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [3190] = 2,
    ACTIONS(774), 1,
      anon_sym_LBRACK,
    STATE(52), 1,
      sym_nth_ending_number,
  [3197] = 2,
    ACTIONS(762), 1,
      sym_note_letter,
    STATE(252), 1,
      sym_chord_symbol_note,
  [3204] = 2,
    ACTIONS(762), 1,
      sym_note_letter,
    STATE(238), 1,
      sym_chord_symbol_note,
  [3211] = 2,
    ACTIONS(776), 1,
      anon_sym_LF,
    STATE(222), 1,
      sym__NL,
  [3218] = 2,
    ACTIONS(778), 1,
      sym_note_letter,
    STATE(201), 1,
      sym_chord_symbol_note,
  [3225] = 2,
    ACTIONS(780), 1,
      anon_sym_LF,
    STATE(225), 1,
      sym__NL,
  [3232] = 2,
    ACTIONS(782), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(784), 1,
      aux_sym_chord_symbol_token2,
  [3239] = 2,
    ACTIONS(786), 1,
      anon_sym_LBRACK,
    STATE(22), 1,
      sym_nth_ending_number,
  [3246] = 2,
    ACTIONS(788), 1,
      anon_sym_LF,
    ACTIONS(790), 1,
      sym_COMMENT,
  [3253] = 1,
    ACTIONS(792), 2,
      anon_sym_LF,
      sym_words_postbody,
  [3258] = 2,
    ACTIONS(778), 1,
      sym_note_letter,
    STATE(198), 1,
      sym_chord_symbol_note,
  [3265] = 2,
    ACTIONS(794), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(796), 1,
      aux_sym_chord_symbol_token2,
  [3272] = 1,
    ACTIONS(798), 1,
      ts_builtin_sym_end,
  [3276] = 1,
    ACTIONS(726), 1,
      ts_builtin_sym_end,
  [3280] = 1,
    ACTIONS(800), 1,
      aux_sym_first_repeat_bar_token2,
  [3284] = 1,
    ACTIONS(802), 1,
      aux_sym_first_repeat_bar_token2,
  [3288] = 1,
    ACTIONS(804), 1,
      aux_sym_nth_ending_number_token1,
  [3292] = 1,
    ACTIONS(806), 1,
      ts_builtin_sym_end,
  [3296] = 1,
    ACTIONS(808), 1,
      aux_sym_lyric_line_token1,
  [3300] = 1,
    ACTIONS(810), 1,
      anon_sym_DOT,
  [3304] = 1,
    ACTIONS(812), 1,
      aux_sym_multimeasure_rest_token1,
  [3308] = 1,
    ACTIONS(814), 1,
      aux_sym_nth_ending_number_token1,
  [3312] = 1,
    ACTIONS(816), 1,
      anon_sym_LF,
  [3316] = 1,
    ACTIONS(818), 1,
      aux_sym_nth_ending_number_token1,
  [3320] = 1,
    ACTIONS(820), 1,
      aux_sym_nth_ending_number_token1,
  [3324] = 1,
    ACTIONS(822), 1,
      aux_sym_chord_symbol_token1,
  [3328] = 1,
    ACTIONS(214), 1,
      sym_noCommentText,
  [3332] = 1,
    ACTIONS(824), 1,
      sym_note_letter,
  [3336] = 1,
    ACTIONS(826), 1,
      sym_note_letter,
  [3340] = 1,
    ACTIONS(828), 1,
      anon_sym_LF,
  [3344] = 1,
    ACTIONS(830), 1,
      sym_noCommentText,
  [3348] = 1,
    ACTIONS(832), 1,
      sym_noCommentText,
  [3352] = 1,
    ACTIONS(834), 1,
      sym_noCommentText,
  [3356] = 1,
    ACTIONS(836), 1,
      aux_sym_nth_ending_number_token1,
  [3360] = 1,
    ACTIONS(838), 1,
      aux_sym_first_repeat_bar_token2,
  [3364] = 1,
    ACTIONS(840), 1,
      aux_sym_first_repeat_bar_token2,
  [3368] = 1,
    ACTIONS(842), 1,
      anon_sym_DOT,
  [3372] = 1,
    ACTIONS(844), 1,
      aux_sym_chord_symbol_token1,
  [3376] = 1,
    ACTIONS(846), 1,
      aux_sym_lyric_line_token1,
  [3380] = 1,
    ACTIONS(848), 1,
      aux_sym_chord_symbol_token1,
  [3384] = 1,
    ACTIONS(850), 1,
      aux_sym_nth_ending_number_token1,
  [3388] = 1,
    ACTIONS(852), 1,
      ts_builtin_sym_end,
  [3392] = 1,
    ACTIONS(854), 1,
      ts_builtin_sym_end,
  [3396] = 1,
    ACTIONS(856), 1,
      aux_sym_nth_ending_number_token1,
  [3400] = 1,
    ACTIONS(858), 1,
      anon_sym_LBRACK,
  [3404] = 1,
    ACTIONS(860), 1,
      anon_sym_EQ,
  [3408] = 1,
    ACTIONS(862), 1,
      anon_sym_LBRACK,
  [3412] = 1,
    ACTIONS(864), 1,
      anon_sym_LBRACK,
  [3416] = 1,
    ACTIONS(866), 1,
      aux_sym_chord_symbol_token1,
  [3420] = 1,
    ACTIONS(868), 1,
      aux_sym__MUSIC_CODE_token1,
  [3424] = 1,
    ACTIONS(870), 1,
      sym_noCommentText,
  [3428] = 1,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
  [3432] = 1,
    ACTIONS(872), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(55)] = 0,
  [SMALL_STATE(56)] = 65,
  [SMALL_STATE(57)] = 118,
  [SMALL_STATE(58)] = 171,
  [SMALL_STATE(59)] = 224,
  [SMALL_STATE(60)] = 270,
  [SMALL_STATE(61)] = 316,
  [SMALL_STATE(62)] = 339,
  [SMALL_STATE(63)] = 362,
  [SMALL_STATE(64)] = 385,
  [SMALL_STATE(65)] = 408,
  [SMALL_STATE(66)] = 431,
  [SMALL_STATE(67)] = 454,
  [SMALL_STATE(68)] = 477,
  [SMALL_STATE(69)] = 518,
  [SMALL_STATE(70)] = 541,
  [SMALL_STATE(71)] = 570,
  [SMALL_STATE(72)] = 593,
  [SMALL_STATE(73)] = 626,
  [SMALL_STATE(74)] = 667,
  [SMALL_STATE(75)] = 696,
  [SMALL_STATE(76)] = 719,
  [SMALL_STATE(77)] = 755,
  [SMALL_STATE(78)] = 791,
  [SMALL_STATE(79)] = 827,
  [SMALL_STATE(80)] = 863,
  [SMALL_STATE(81)] = 899,
  [SMALL_STATE(82)] = 935,
  [SMALL_STATE(83)] = 953,
  [SMALL_STATE(84)] = 983,
  [SMALL_STATE(85)] = 1019,
  [SMALL_STATE(86)] = 1055,
  [SMALL_STATE(87)] = 1091,
  [SMALL_STATE(88)] = 1127,
  [SMALL_STATE(89)] = 1163,
  [SMALL_STATE(90)] = 1190,
  [SMALL_STATE(91)] = 1223,
  [SMALL_STATE(92)] = 1256,
  [SMALL_STATE(93)] = 1289,
  [SMALL_STATE(94)] = 1316,
  [SMALL_STATE(95)] = 1349,
  [SMALL_STATE(96)] = 1382,
  [SMALL_STATE(97)] = 1415,
  [SMALL_STATE(98)] = 1448,
  [SMALL_STATE(99)] = 1481,
  [SMALL_STATE(100)] = 1514,
  [SMALL_STATE(101)] = 1533,
  [SMALL_STATE(102)] = 1548,
  [SMALL_STATE(103)] = 1581,
  [SMALL_STATE(104)] = 1597,
  [SMALL_STATE(105)] = 1615,
  [SMALL_STATE(106)] = 1631,
  [SMALL_STATE(107)] = 1647,
  [SMALL_STATE(108)] = 1665,
  [SMALL_STATE(109)] = 1681,
  [SMALL_STATE(110)] = 1699,
  [SMALL_STATE(111)] = 1715,
  [SMALL_STATE(112)] = 1731,
  [SMALL_STATE(113)] = 1747,
  [SMALL_STATE(114)] = 1765,
  [SMALL_STATE(115)] = 1783,
  [SMALL_STATE(116)] = 1799,
  [SMALL_STATE(117)] = 1817,
  [SMALL_STATE(118)] = 1833,
  [SMALL_STATE(119)] = 1851,
  [SMALL_STATE(120)] = 1869,
  [SMALL_STATE(121)] = 1887,
  [SMALL_STATE(122)] = 1903,
  [SMALL_STATE(123)] = 1919,
  [SMALL_STATE(124)] = 1937,
  [SMALL_STATE(125)] = 1966,
  [SMALL_STATE(126)] = 1983,
  [SMALL_STATE(127)] = 1996,
  [SMALL_STATE(128)] = 2009,
  [SMALL_STATE(129)] = 2024,
  [SMALL_STATE(130)] = 2039,
  [SMALL_STATE(131)] = 2052,
  [SMALL_STATE(132)] = 2065,
  [SMALL_STATE(133)] = 2080,
  [SMALL_STATE(134)] = 2093,
  [SMALL_STATE(135)] = 2106,
  [SMALL_STATE(136)] = 2121,
  [SMALL_STATE(137)] = 2136,
  [SMALL_STATE(138)] = 2151,
  [SMALL_STATE(139)] = 2166,
  [SMALL_STATE(140)] = 2179,
  [SMALL_STATE(141)] = 2192,
  [SMALL_STATE(142)] = 2207,
  [SMALL_STATE(143)] = 2222,
  [SMALL_STATE(144)] = 2237,
  [SMALL_STATE(145)] = 2250,
  [SMALL_STATE(146)] = 2265,
  [SMALL_STATE(147)] = 2278,
  [SMALL_STATE(148)] = 2290,
  [SMALL_STATE(149)] = 2318,
  [SMALL_STATE(150)] = 2346,
  [SMALL_STATE(151)] = 2358,
  [SMALL_STATE(152)] = 2370,
  [SMALL_STATE(153)] = 2398,
  [SMALL_STATE(154)] = 2410,
  [SMALL_STATE(155)] = 2438,
  [SMALL_STATE(156)] = 2463,
  [SMALL_STATE(157)] = 2476,
  [SMALL_STATE(158)] = 2489,
  [SMALL_STATE(159)] = 2500,
  [SMALL_STATE(160)] = 2513,
  [SMALL_STATE(161)] = 2538,
  [SMALL_STATE(162)] = 2563,
  [SMALL_STATE(163)] = 2588,
  [SMALL_STATE(164)] = 2601,
  [SMALL_STATE(165)] = 2626,
  [SMALL_STATE(166)] = 2651,
  [SMALL_STATE(167)] = 2671,
  [SMALL_STATE(168)] = 2691,
  [SMALL_STATE(169)] = 2700,
  [SMALL_STATE(170)] = 2719,
  [SMALL_STATE(171)] = 2728,
  [SMALL_STATE(172)] = 2747,
  [SMALL_STATE(173)] = 2766,
  [SMALL_STATE(174)] = 2785,
  [SMALL_STATE(175)] = 2794,
  [SMALL_STATE(176)] = 2813,
  [SMALL_STATE(177)] = 2832,
  [SMALL_STATE(178)] = 2841,
  [SMALL_STATE(179)] = 2860,
  [SMALL_STATE(180)] = 2879,
  [SMALL_STATE(181)] = 2888,
  [SMALL_STATE(182)] = 2897,
  [SMALL_STATE(183)] = 2906,
  [SMALL_STATE(184)] = 2920,
  [SMALL_STATE(185)] = 2936,
  [SMALL_STATE(186)] = 2950,
  [SMALL_STATE(187)] = 2966,
  [SMALL_STATE(188)] = 2975,
  [SMALL_STATE(189)] = 2986,
  [SMALL_STATE(190)] = 2993,
  [SMALL_STATE(191)] = 3004,
  [SMALL_STATE(192)] = 3015,
  [SMALL_STATE(193)] = 3026,
  [SMALL_STATE(194)] = 3036,
  [SMALL_STATE(195)] = 3044,
  [SMALL_STATE(196)] = 3054,
  [SMALL_STATE(197)] = 3062,
  [SMALL_STATE(198)] = 3072,
  [SMALL_STATE(199)] = 3082,
  [SMALL_STATE(200)] = 3092,
  [SMALL_STATE(201)] = 3098,
  [SMALL_STATE(202)] = 3108,
  [SMALL_STATE(203)] = 3118,
  [SMALL_STATE(204)] = 3128,
  [SMALL_STATE(205)] = 3138,
  [SMALL_STATE(206)] = 3143,
  [SMALL_STATE(207)] = 3150,
  [SMALL_STATE(208)] = 3157,
  [SMALL_STATE(209)] = 3164,
  [SMALL_STATE(210)] = 3171,
  [SMALL_STATE(211)] = 3178,
  [SMALL_STATE(212)] = 3185,
  [SMALL_STATE(213)] = 3190,
  [SMALL_STATE(214)] = 3197,
  [SMALL_STATE(215)] = 3204,
  [SMALL_STATE(216)] = 3211,
  [SMALL_STATE(217)] = 3218,
  [SMALL_STATE(218)] = 3225,
  [SMALL_STATE(219)] = 3232,
  [SMALL_STATE(220)] = 3239,
  [SMALL_STATE(221)] = 3246,
  [SMALL_STATE(222)] = 3253,
  [SMALL_STATE(223)] = 3258,
  [SMALL_STATE(224)] = 3265,
  [SMALL_STATE(225)] = 3272,
  [SMALL_STATE(226)] = 3276,
  [SMALL_STATE(227)] = 3280,
  [SMALL_STATE(228)] = 3284,
  [SMALL_STATE(229)] = 3288,
  [SMALL_STATE(230)] = 3292,
  [SMALL_STATE(231)] = 3296,
  [SMALL_STATE(232)] = 3300,
  [SMALL_STATE(233)] = 3304,
  [SMALL_STATE(234)] = 3308,
  [SMALL_STATE(235)] = 3312,
  [SMALL_STATE(236)] = 3316,
  [SMALL_STATE(237)] = 3320,
  [SMALL_STATE(238)] = 3324,
  [SMALL_STATE(239)] = 3328,
  [SMALL_STATE(240)] = 3332,
  [SMALL_STATE(241)] = 3336,
  [SMALL_STATE(242)] = 3340,
  [SMALL_STATE(243)] = 3344,
  [SMALL_STATE(244)] = 3348,
  [SMALL_STATE(245)] = 3352,
  [SMALL_STATE(246)] = 3356,
  [SMALL_STATE(247)] = 3360,
  [SMALL_STATE(248)] = 3364,
  [SMALL_STATE(249)] = 3368,
  [SMALL_STATE(250)] = 3372,
  [SMALL_STATE(251)] = 3376,
  [SMALL_STATE(252)] = 3380,
  [SMALL_STATE(253)] = 3384,
  [SMALL_STATE(254)] = 3388,
  [SMALL_STATE(255)] = 3392,
  [SMALL_STATE(256)] = 3396,
  [SMALL_STATE(257)] = 3400,
  [SMALL_STATE(258)] = 3404,
  [SMALL_STATE(259)] = 3408,
  [SMALL_STATE(260)] = 3412,
  [SMALL_STATE(261)] = 3416,
  [SMALL_STATE(262)] = 3420,
  [SMALL_STATE(263)] = 3424,
  [SMALL_STATE(264)] = 3428,
  [SMALL_STATE(265)] = 3432,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [5] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [7] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(2),
  [10] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(244),
  [13] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(60),
  [16] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(28),
  [19] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(28),
  [22] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(99),
  [25] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(241),
  [28] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(65),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(82),
  [34] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(233),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(191),
  [40] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(223),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(161),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(189),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(16),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(18),
  [55] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(23),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(15),
  [61] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(19),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(243),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(36),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(212),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(89),
  [76] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [78] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 2),
  [80] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [84] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [86] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [88] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [102] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [108] = {.entry = {.count = 1, .reusable = false}}, SHIFT(16),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 2),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 1),
  [130] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [132] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 1),
  [134] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(242),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(245),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(256),
  [147] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(36),
  [150] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(212),
  [153] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 1),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(242),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [161] = {.entry = {.count = 1, .reusable = false}}, SHIFT(256),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 2),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 2),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 4),
  [169] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 4),
  [171] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 5),
  [173] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 5),
  [175] = {.entry = {.count = 1, .reusable = false}}, SHIFT(230),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [181] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 2),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [185] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 2),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 3),
  [191] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(234),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [198] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_bar_line, 1),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_bar_line, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [208] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 4),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 4),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 3),
  [222] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 3),
  [224] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_barline, 3),
  [226] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_barline, 3),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [232] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 2),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 2),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 4),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 4),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 2),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 2),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1),
  [246] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1),
  [248] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 3),
  [254] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 2),
  [256] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 2),
  [258] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stylesheet_directives, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet_directives, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 2),
  [264] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 2),
  [266] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_info_line, 2, .production_id = 1),
  [268] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_info_line, 2, .production_id = 1),
  [270] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2),
  [272] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(34),
  [275] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(217),
  [278] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(40),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(43),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(47),
  [287] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(41),
  [290] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(46),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_line, 2),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [301] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [303] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [305] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [311] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [313] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(253),
  [322] = {.entry = {.count = 1, .reusable = false}}, SHIFT(253),
  [324] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [326] = {.entry = {.count = 1, .reusable = false}}, SHIFT(259),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [330] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 3),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 5),
  [338] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 4),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 6),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [346] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [352] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(59),
  [363] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(98),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(240),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(75),
  [374] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(100),
  [377] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(191),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(223),
  [383] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(160),
  [386] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(189),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 2),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [399] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(62),
  [402] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [404] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 3),
  [406] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 1),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [414] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 3),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [422] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [424] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(69),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [429] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(150),
  [432] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(151),
  [435] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(153),
  [438] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(249),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [443] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [445] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(153),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(241),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(65),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(82),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(191),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(189),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [496] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [498] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [500] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [502] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(159),
  [507] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(157),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(159),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(156),
  [516] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(232),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [533] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [539] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 4),
  [543] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 4),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 6),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [555] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 6),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [559] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 7),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [563] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 5),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 5),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [579] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 7),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [583] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 5),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [587] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [593] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 1),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [597] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [601] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 2),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [609] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [613] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [617] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 3),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [621] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [623] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(191),
  [626] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 6),
  [628] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 6),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 8),
  [632] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 8),
  [634] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [636] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse_number, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [642] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_text, 1),
  [644] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HYPHEN, 1),
  [646] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [648] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [650] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_syllable, 1),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_syllable, 1),
  [654] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HYPHEN, 1),
  [656] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_text, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse_number, 2),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [670] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [674] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [678] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [680] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [684] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [686] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [688] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(241),
  [691] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(65),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [700] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [702] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(188),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_section, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2),
  [713] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2), SHIFT_REPEAT(231),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 3),
  [718] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 1),
  [724] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 4),
  [726] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 4),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [730] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2), SHIFT_REPEAT(93),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 3),
  [741] = {.entry = {.count = 1, .reusable = false}}, SHIFT(236),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [745] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [749] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [751] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 2),
  [753] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [755] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [757] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2),
  [759] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(236),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [770] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 2, .production_id = 1),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [792] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_line, 3),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [798] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 5),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [806] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 2),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [852] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [854] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [870] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined, 4),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
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
