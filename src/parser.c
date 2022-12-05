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
#define STATE_COUNT 275
#define LARGE_STATE_COUNT 55
#define SYMBOL_COUNT 200
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
  sym_abc_version = 176,
  sym_reference_number_line = 177,
  sym_symbol_line = 178,
  sym_user_defined = 179,
  sym_words_line = 180,
  sym_body_info_line = 181,
  sym_tune_header_info_line = 182,
  sym_file_header_info_line = 183,
  aux_sym_file_structure_repeat1 = 184,
  aux_sym_file_structure_repeat2 = 185,
  aux_sym_file_header_repeat1 = 186,
  aux_sym_tune_header_repeat1 = 187,
  aux_sym_tune_body_repeat1 = 188,
  aux_sym_beam_repeat1 = 189,
  aux_sym_note_construct_repeat1 = 190,
  aux_sym__chord_cstrct_repeat1 = 191,
  aux_sym__pitch_repeat1 = 192,
  aux_sym_grace_note_repeat1 = 193,
  aux_sym_nth_ending_number_repeat1 = 194,
  aux_sym_lyric_section_repeat1 = 195,
  aux_sym_abc_version_repeat1 = 196,
  aux_sym_symbol_line_repeat1 = 197,
  aux_sym_words_line_repeat1 = 198,
  aux_sym_words_line_repeat2 = 199,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [sym__NL] = "_NL",
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
  [37] = 16,
  [38] = 15,
  [39] = 13,
  [40] = 12,
  [41] = 14,
  [42] = 17,
  [43] = 18,
  [44] = 25,
  [45] = 24,
  [46] = 19,
  [47] = 26,
  [48] = 48,
  [49] = 49,
  [50] = 30,
  [51] = 51,
  [52] = 52,
  [53] = 27,
  [54] = 28,
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
  [72] = 69,
  [73] = 70,
  [74] = 66,
  [75] = 65,
  [76] = 68,
  [77] = 67,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 82,
  [83] = 81,
  [84] = 78,
  [85] = 85,
  [86] = 82,
  [87] = 87,
  [88] = 80,
  [89] = 89,
  [90] = 89,
  [91] = 91,
  [92] = 79,
  [93] = 93,
  [94] = 94,
  [95] = 93,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 99,
  [100] = 99,
  [101] = 101,
  [102] = 91,
  [103] = 103,
  [104] = 96,
  [105] = 101,
  [106] = 98,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 107,
  [111] = 108,
  [112] = 112,
  [113] = 103,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 109,
  [118] = 118,
  [119] = 119,
  [120] = 118,
  [121] = 115,
  [122] = 119,
  [123] = 123,
  [124] = 116,
  [125] = 114,
  [126] = 123,
  [127] = 112,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 129,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 136,
  [139] = 132,
  [140] = 135,
  [141] = 134,
  [142] = 142,
  [143] = 137,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 142,
  [148] = 146,
  [149] = 130,
  [150] = 128,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 153,
  [157] = 157,
  [158] = 157,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 159,
  [164] = 154,
  [165] = 165,
  [166] = 162,
  [167] = 161,
  [168] = 155,
  [169] = 151,
  [170] = 152,
  [171] = 171,
  [172] = 49,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 52,
  [179] = 179,
  [180] = 180,
  [181] = 48,
  [182] = 182,
  [183] = 183,
  [184] = 51,
  [185] = 183,
  [186] = 180,
  [187] = 187,
  [188] = 187,
  [189] = 179,
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
  [201] = 201,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 205,
  [206] = 206,
  [207] = 207,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 205,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 216,
  [222] = 222,
  [223] = 218,
  [224] = 219,
  [225] = 225,
  [226] = 200,
  [227] = 227,
  [228] = 228,
  [229] = 220,
  [230] = 227,
  [231] = 231,
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
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 28,
  [248] = 241,
  [249] = 237,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 245,
  [256] = 243,
  [257] = 239,
  [258] = 235,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 250,
  [263] = 32,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 251,
  [269] = 254,
  [270] = 259,
  [271] = 261,
  [272] = 272,
  [273] = 273,
  [274] = 274,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '%') ADVANCE(568);
      if (lookahead == '\'') ADVANCE(597);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')') ADVANCE(582);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == '+') ADVANCE(557);
      if (lookahead == ',') ADVANCE(656);
      if (lookahead == '-') ADVANCE(560);
      if (lookahead == '/') ADVANCE(605);
      if (lookahead == '0') ADVANCE(603);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(587);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(650);
      if (lookahead == 'Q') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(601);
      if (lookahead == 'Z') ADVANCE(599);
      if (lookahead == '[') ADVANCE(585);
      if (lookahead == '\\') ADVANCE(556);
      if (lookahead == ']') ADVANCE(586);
      if (lookahead == '^') ADVANCE(588);
      if (lookahead == '_') ADVANCE(589);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(96);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == '|') ADVANCE(659);
      if (lookahead == '}') ADVANCE(611);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(575);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(607);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(598);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(647);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(602);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(590);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '!') ADVANCE(365);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '%') ADVANCE(573);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead == ':') ADVANCE(372);
      if (lookahead == '[') ADVANCE(552);
      if (lookahead == '|') ADVANCE(660);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == '-') ADVANCE(560);
      if (lookahead == '.') ADVANCE(677);
      if (lookahead == '=') ADVANCE(824);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == '|') ADVANCE(658);
      if (lookahead == '~') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(719);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(705);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(751);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(745);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(763);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(767);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(771);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(775);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(753);
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(749);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(747);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(743);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(755);
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(741);
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(759);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(783);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(781);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(779);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(757);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(789);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(733);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(721);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(739);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(693);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(723);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(695);
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(777);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(725);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(735);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(679);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(697);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(729);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(727);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(707);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(787);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(785);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(715);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(681);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(683);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(717);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(731);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(711);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(689);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(703);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(709);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(761);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(765);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(795);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(769);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(773);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(791);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(699);
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(685);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(793);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(691);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(687);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(701);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(713);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(365);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead == ',') ADVANCE(657);
      if (lookahead == '-') ADVANCE(561);
      if (lookahead == ':') ADVANCE(372);
      if (lookahead == '[') ADVANCE(552);
      if (lookahead == '|') ADVANCE(660);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == '-') ADVANCE(583);
      if (lookahead == '/') ADVANCE(605);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(587);
      if (lookahead == '[') ADVANCE(584);
      if (lookahead == ']') ADVANCE(586);
      if (lookahead == '^') ADVANCE(588);
      if (lookahead == '_') ADVANCE(589);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == '}') ADVANCE(611);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(597);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(607);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(606);
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
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(590);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '/') ADVANCE(614);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(646);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(587);
      if (lookahead == '^') ADVANCE(588);
      if (lookahead == '_') ADVANCE(619);
      if (lookahead == 'a') ADVANCE(644);
      if (lookahead == 'd') ADVANCE(628);
      if (lookahead == 'm') ADVANCE(620);
      if (lookahead == 's') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(646);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      END_STATE();
    case 71:
      if (lookahead == '(') ADVANCE(53);
      if (lookahead == ')') ADVANCE(54);
      END_STATE();
    case 72:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      END_STATE();
    case 73:
      if (lookahead == '*') ADVANCE(559);
      if (lookahead == '+') ADVANCE(371);
      if (lookahead == '-') ADVANCE(561);
      if (lookahead == '_') ADVANCE(562);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == '~') ADVANCE(565);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(554);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 74:
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == 'D') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(123);
      if (lookahead == 'b') ADVANCE(237);
      if (lookahead == 'c') ADVANCE(214);
      if (lookahead == 'd') ADVANCE(106);
      if (lookahead == 'e') ADVANCE(191);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(198);
      if (lookahead == 'l') ADVANCE(215);
      if (lookahead == 'm') ADVANCE(140);
      if (lookahead == 'o') ADVANCE(231);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(216);
      if (lookahead == 's') ADVANCE(138);
      if (lookahead == 't') ADVANCE(141);
      if (lookahead == 'u') ADVANCE(228);
      if (lookahead == 'w') ADVANCE(142);
      END_STATE();
    case 75:
      if (lookahead == '+') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(104);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(102);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(678);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 82:
      if (lookahead == '5') ADVANCE(47);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == '|') ADVANCE(670);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(806);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(807);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(810);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(817);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(814);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(821);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(825);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(828);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(812);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(808);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(813);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(816);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(826);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(818);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(286);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(99);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(98);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(101);
      END_STATE();
    case 102:
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 103:
      if (lookahead == 'H') ADVANCE(76);
      if (('h' <= lookahead && lookahead <= 'w')) ADVANCE(822);
      END_STATE();
    case 104:
      if (lookahead == 'W') ADVANCE(823);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(124);
      if (lookahead == 'i') ADVANCE(192);
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(254);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(233);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(234);
      if (lookahead == 'o') ADVANCE(132);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(184);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(217);
      if (lookahead == 'p') ADVANCE(163);
      END_STATE();
    case 121:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 122:
      if (lookahead == 'b') ADVANCE(224);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(125);
      if (lookahead == 'r') ADVANCE(232);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(110);
      END_STATE();
    case 125:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(150);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(112);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(113);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(152);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(160);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(225);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(167);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == 'h') ADVANCE(218);
      if (lookahead == 'l') ADVANCE(176);
      if (lookahead == 'n') ADVANCE(108);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(260);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(130);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(240);
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(203);
      if (lookahead == 'h') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(179);
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(128);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(165);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(127);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(204);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(246);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(241);
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
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 164:
      if (lookahead == 'f') ADVANCE(162);
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 165:
      if (lookahead == 'g') ADVANCE(166);
      END_STATE();
    case 166:
      if (lookahead == 'g') ADVANCE(181);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(205);
      END_STATE();
    case 168:
      if (lookahead == 'g') ADVANCE(230);
      END_STATE();
    case 169:
      if (lookahead == 'g') ADVANCE(153);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(107);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(244);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(249);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(251);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(133);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(256);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(186);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(222);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(187);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(182);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(188);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(262);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(149);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(178);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(226);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(111);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(236);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(122);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(168);
      if (lookahead == 'w') ADVANCE(157);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(219);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(131);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(137);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(129);
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(201);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(183);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(238);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(248);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(120);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(170);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(145);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(144);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(220);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(143);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(267);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(109);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(202);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(136);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(177);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(156);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(126);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(172);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(247);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(147);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(114);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(221);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(115);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(235);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(255);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(190);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(197);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(245);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(161);
      END_STATE();
    case 278:
      if (lookahead == 'v') ADVANCE(146);
      END_STATE();
    case 279:
      if (lookahead == 'w') ADVANCE(199);
      END_STATE();
    case 280:
      if (lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 281:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 282:
      if (lookahead == 'z') ADVANCE(20);
      END_STATE();
    case 283:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 287:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '%') ADVANCE(568);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')') ADVANCE(582);
      if (lookahead == ',') ADVANCE(656);
      if (lookahead == '-') ADVANCE(560);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(587);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(650);
      if (lookahead == 'Q') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(601);
      if (lookahead == 'Z') ADVANCE(599);
      if (lookahead == '[') ADVANCE(585);
      if (lookahead == '^') ADVANCE(588);
      if (lookahead == '_') ADVANCE(589);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(96);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == '|') ADVANCE(659);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(647);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(590);
      END_STATE();
    case 288:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '%') ADVANCE(567);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == '/') ADVANCE(614);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(587);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == 'B') ADVANCE(592);
      if (lookahead == 'C') ADVANCE(593);
      if (lookahead == 'D') ADVANCE(594);
      if (lookahead == 'F') ADVANCE(595);
      if (lookahead == 'G') ADVANCE(596);
      if (lookahead == 'H') ADVANCE(652);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(653);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(654);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(92);
      if (lookahead == 'Z') ADVANCE(97);
      if (lookahead == '[') ADVANCE(584);
      if (lookahead == '^') ADVANCE(588);
      if (lookahead == '_') ADVANCE(589);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(598);
      if (lookahead == '.' ||
          lookahead == 'P' ||
          lookahead == 'T' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(647);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(590);
      END_STATE();
    case 289:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '%') ADVANCE(568);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')') ADVANCE(582);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(587);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(650);
      if (lookahead == 'Q') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(601);
      if (lookahead == 'Z') ADVANCE(599);
      if (lookahead == '[') ADVANCE(585);
      if (lookahead == '^') ADVANCE(588);
      if (lookahead == '_') ADVANCE(589);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(96);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == '|') ADVANCE(659);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(590);
      END_STATE();
    case 290:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '%') ADVANCE(567);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')') ADVANCE(582);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(587);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == 'B') ADVANCE(592);
      if (lookahead == 'C') ADVANCE(593);
      if (lookahead == 'D') ADVANCE(594);
      if (lookahead == 'F') ADVANCE(595);
      if (lookahead == 'G') ADVANCE(596);
      if (lookahead == 'H') ADVANCE(652);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(653);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(654);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(601);
      if (lookahead == 'Z') ADVANCE(600);
      if (lookahead == '[') ADVANCE(585);
      if (lookahead == ']') ADVANCE(586);
      if (lookahead == '^') ADVANCE(588);
      if (lookahead == '_') ADVANCE(589);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == '|') ADVANCE(659);
      if (lookahead == '}') ADVANCE(611);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead == '.' ||
          lookahead == 'P' ||
          lookahead == 'T' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(647);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(655);
      END_STATE();
    case 291:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '%') ADVANCE(570);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')') ADVANCE(582);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(587);
      if (lookahead == 'A') ADVANCE(591);
      if (lookahead == 'B') ADVANCE(592);
      if (lookahead == 'C') ADVANCE(593);
      if (lookahead == 'D') ADVANCE(594);
      if (lookahead == 'F') ADVANCE(595);
      if (lookahead == 'G') ADVANCE(596);
      if (lookahead == 'H') ADVANCE(652);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(653);
      if (lookahead == 'P') ADVANCE(650);
      if (lookahead == 'Q') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(654);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(601);
      if (lookahead == 'Z') ADVANCE(600);
      if (lookahead == '[') ADVANCE(585);
      if (lookahead == '^') ADVANCE(588);
      if (lookahead == '_') ADVANCE(589);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == '|') ADVANCE(659);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(647);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(590);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__NL);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__NL);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__NL);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ' ') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ' ') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(706);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(752);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(746);
      if (lookahead == 'l') ADVANCE(541);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(754);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(744);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead == 'f') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(742);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(758);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(696);
      if (lookahead == 'x') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(680);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(682);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(700);
      if (lookahead == 'x') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '"') ADVANCE(555);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(305);
      if (lookahead == ')') ADVANCE(306);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(348);
      if (lookahead == ')') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(351);
      if (lookahead == ')') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '+') ADVANCE(300);
      if (lookahead == '0') ADVANCE(301);
      if (lookahead == '<') ADVANCE(362);
      if (lookahead == '>') ADVANCE(302);
      if (lookahead == 'D') ADVANCE(367);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'b') ADVANCE(506);
      if (lookahead == 'c') ADVANCE(483);
      if (lookahead == 'd') ADVANCE(375);
      if (lookahead == 'e') ADVANCE(460);
      if (lookahead == 'f') ADVANCE(303);
      if (lookahead == 'i') ADVANCE(467);
      if (lookahead == 'l') ADVANCE(484);
      if (lookahead == 'm') ADVANCE(409);
      if (lookahead == 'o') ADVANCE(500);
      if (lookahead == 'p') ADVANCE(304);
      if (lookahead == 'r') ADVANCE(485);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead == 't') ADVANCE(410);
      if (lookahead == 'u') ADVANCE(497);
      if (lookahead == 'w') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '-') ADVANCE(299);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '5') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ':') ADVANCE(555);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ':') ADVANCE(673);
      if (lookahead == '|') ADVANCE(671);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'C') ADVANCE(368);
      if (lookahead == 'S') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(393);
      if (lookahead == 'i') ADVANCE(461);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(503);
      if (lookahead == 'o') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(360);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(486);
      if (lookahead == 'p') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(394);
      if (lookahead == 'r') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(436);
      if (lookahead == 'f') ADVANCE(551);
      if (lookahead == 'h') ADVANCE(487);
      if (lookahead == 'l') ADVANCE(445);
      if (lookahead == 'n') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(399);
      if (lookahead == 'f') ADVANCE(310);
      if (lookahead == 'o') ADVANCE(509);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'h') ADVANCE(543);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead == 'u') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(374);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'f') ADVANCE(431);
      if (lookahead == 't') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(499);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(496);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(437);
      if (lookahead == 'w') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(406);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(398);
      if (lookahead == 'r') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'v') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'z') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '|') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_noCommentText);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_noCommentText);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == ':') ADVANCE(827);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_note_skip);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_note_skip);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_TILDE);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_BEAM_SEPARATOR);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '%') ADVANCE(574);
      if (lookahead == 'a') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(573);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '%') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(573);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '-') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(573);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'a') ADVANCE(571);
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
      if (lookahead == 'c') ADVANCE(569);
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
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym__music_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(576);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '!') ADVANCE(365);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead == ':') ADVANCE(372);
      if (lookahead == '[') ADVANCE(552);
      if (lookahead == '|') ADVANCE(660);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == '-') ADVANCE(583);
      if (lookahead == '/') ADVANCE(605);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(587);
      if (lookahead == '[') ADVANCE(584);
      if (lookahead == '^') ADVANCE(588);
      if (lookahead == '_') ADVANCE(589);
      if (lookahead == '`') ADVANCE(566);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(597);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(607);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(579);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(606);
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
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(590);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(613);
      if (lookahead == '%') ADVANCE(568);
      if (lookahead == '(') ADVANCE(581);
      if (lookahead == ')') ADVANCE(582);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(587);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(650);
      if (lookahead == 'Q') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(651);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(601);
      if (lookahead == 'Z') ADVANCE(599);
      if (lookahead == '[') ADVANCE(585);
      if (lookahead == '^') ADVANCE(588);
      if (lookahead == '_') ADVANCE(589);
      if (lookahead == 'm') ADVANCE(93);
      if (lookahead == 'r') ADVANCE(94);
      if (lookahead == 's') ADVANCE(95);
      if (lookahead == 'w') ADVANCE(96);
      if (lookahead == '{') ADVANCE(610);
      if (lookahead == '|') ADVANCE(659);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(598);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(590);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(666);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(587);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(587);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_note_letter);
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
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(801);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(802);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(803);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(804);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == ':') ADVANCE(818);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == ':') ADVANCE(812);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == '0') ADVANCE(603);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(602);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(604);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(604);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(283);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(608);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(609);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(615);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(285);
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
      if (lookahead == ':') ADVANCE(820);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(809);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(797);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(819);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(805);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(811);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(815);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_nth_ending_number_token1);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_bar_line);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(668);
      if (lookahead == ']') ADVANCE(662);
      if (lookahead == '|') ADVANCE(664);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(669);
      if (lookahead == ']') ADVANCE(663);
      if (lookahead == '|') ADVANCE(665);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(674);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_lyric_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(sym_parts_line);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(573);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_area);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_book);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_composer);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_discography);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_file);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_group);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_history);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_macros);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_meter);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_X_COLON);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_remark);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_rhythm_line);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(anon_sym_s_COLON);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_tempo);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_transcription);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_tune_title);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_unit_note_length);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(anon_sym_U_COLON);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(aux_sym_user_defined_token2);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_voice);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_w_COLON);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_words_postbody);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 290},
  [2] = {.lex_state = 289},
  [3] = {.lex_state = 289},
  [4] = {.lex_state = 289},
  [5] = {.lex_state = 291},
  [6] = {.lex_state = 291},
  [7] = {.lex_state = 291},
  [8] = {.lex_state = 291},
  [9] = {.lex_state = 291},
  [10] = {.lex_state = 291},
  [11] = {.lex_state = 290},
  [12] = {.lex_state = 287},
  [13] = {.lex_state = 580},
  [14] = {.lex_state = 580},
  [15] = {.lex_state = 287},
  [16] = {.lex_state = 287},
  [17] = {.lex_state = 287},
  [18] = {.lex_state = 580},
  [19] = {.lex_state = 287},
  [20] = {.lex_state = 287},
  [21] = {.lex_state = 287},
  [22] = {.lex_state = 287},
  [23] = {.lex_state = 287},
  [24] = {.lex_state = 287},
  [25] = {.lex_state = 287},
  [26] = {.lex_state = 287},
  [27] = {.lex_state = 287},
  [28] = {.lex_state = 287},
  [29] = {.lex_state = 287},
  [30] = {.lex_state = 287},
  [31] = {.lex_state = 289},
  [32] = {.lex_state = 289},
  [33] = {.lex_state = 289},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 66},
  [38] = {.lex_state = 66},
  [39] = {.lex_state = 577},
  [40] = {.lex_state = 66},
  [41] = {.lex_state = 577},
  [42] = {.lex_state = 66},
  [43] = {.lex_state = 577},
  [44] = {.lex_state = 1},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 1},
  [47] = {.lex_state = 1},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 1},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 1},
  [53] = {.lex_state = 1},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 290},
  [57] = {.lex_state = 290},
  [58] = {.lex_state = 288},
  [59] = {.lex_state = 288},
  [60] = {.lex_state = 578},
  [61] = {.lex_state = 68},
  [62] = {.lex_state = 578},
  [63] = {.lex_state = 288},
  [64] = {.lex_state = 288},
  [65] = {.lex_state = 68},
  [66] = {.lex_state = 68},
  [67] = {.lex_state = 68},
  [68] = {.lex_state = 68},
  [69] = {.lex_state = 68},
  [70] = {.lex_state = 288},
  [71] = {.lex_state = 73},
  [72] = {.lex_state = 578},
  [73] = {.lex_state = 288},
  [74] = {.lex_state = 578},
  [75] = {.lex_state = 578},
  [76] = {.lex_state = 578},
  [77] = {.lex_state = 578},
  [78] = {.lex_state = 73},
  [79] = {.lex_state = 290},
  [80] = {.lex_state = 290},
  [81] = {.lex_state = 290},
  [82] = {.lex_state = 290},
  [83] = {.lex_state = 290},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 2},
  [86] = {.lex_state = 290},
  [87] = {.lex_state = 290},
  [88] = {.lex_state = 290},
  [89] = {.lex_state = 290},
  [90] = {.lex_state = 290},
  [91] = {.lex_state = 68},
  [92] = {.lex_state = 290},
  [93] = {.lex_state = 0},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 0},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 578},
  [103] = {.lex_state = 68},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 0},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 68},
  [108] = {.lex_state = 68},
  [109] = {.lex_state = 68},
  [110] = {.lex_state = 578},
  [111] = {.lex_state = 578},
  [112] = {.lex_state = 578},
  [113] = {.lex_state = 578},
  [114] = {.lex_state = 68},
  [115] = {.lex_state = 578},
  [116] = {.lex_state = 68},
  [117] = {.lex_state = 578},
  [118] = {.lex_state = 68},
  [119] = {.lex_state = 578},
  [120] = {.lex_state = 578},
  [121] = {.lex_state = 68},
  [122] = {.lex_state = 68},
  [123] = {.lex_state = 578},
  [124] = {.lex_state = 578},
  [125] = {.lex_state = 578},
  [126] = {.lex_state = 68},
  [127] = {.lex_state = 68},
  [128] = {.lex_state = 578},
  [129] = {.lex_state = 68},
  [130] = {.lex_state = 578},
  [131] = {.lex_state = 0},
  [132] = {.lex_state = 68},
  [133] = {.lex_state = 578},
  [134] = {.lex_state = 578},
  [135] = {.lex_state = 578},
  [136] = {.lex_state = 578},
  [137] = {.lex_state = 578},
  [138] = {.lex_state = 68},
  [139] = {.lex_state = 578},
  [140] = {.lex_state = 68},
  [141] = {.lex_state = 68},
  [142] = {.lex_state = 578},
  [143] = {.lex_state = 68},
  [144] = {.lex_state = 288},
  [145] = {.lex_state = 578},
  [146] = {.lex_state = 68},
  [147] = {.lex_state = 68},
  [148] = {.lex_state = 578},
  [149] = {.lex_state = 68},
  [150] = {.lex_state = 68},
  [151] = {.lex_state = 73},
  [152] = {.lex_state = 73},
  [153] = {.lex_state = 0},
  [154] = {.lex_state = 73},
  [155] = {.lex_state = 73},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 0},
  [159] = {.lex_state = 0},
  [160] = {.lex_state = 288},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 2},
  [165] = {.lex_state = 288},
  [166] = {.lex_state = 0},
  [167] = {.lex_state = 0},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 2},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 288},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 288},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 290},
  [176] = {.lex_state = 288},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 290},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 0},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 290},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 0},
  [193] = {.lex_state = 290},
  [194] = {.lex_state = 0},
  [195] = {.lex_state = 290},
  [196] = {.lex_state = 0},
  [197] = {.lex_state = 288},
  [198] = {.lex_state = 288},
  [199] = {.lex_state = 288},
  [200] = {.lex_state = 69},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 288},
  [204] = {.lex_state = 288},
  [205] = {.lex_state = 69},
  [206] = {.lex_state = 75},
  [207] = {.lex_state = 79},
  [208] = {.lex_state = 75},
  [209] = {.lex_state = 75},
  [210] = {.lex_state = 288},
  [211] = {.lex_state = 69},
  [212] = {.lex_state = 79},
  [213] = {.lex_state = 69},
  [214] = {.lex_state = 79},
  [215] = {.lex_state = 1},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 1},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 288},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 103},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 288},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 288},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 1},
  [229] = {.lex_state = 0},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 79},
  [232] = {.lex_state = 75},
  [233] = {.lex_state = 675},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 2},
  [236] = {.lex_state = 290},
  [237] = {.lex_state = 0},
  [238] = {.lex_state = 1},
  [239] = {.lex_state = 289},
  [240] = {.lex_state = 290},
  [241] = {.lex_state = 75},
  [242] = {.lex_state = 75},
  [243] = {.lex_state = 289},
  [244] = {.lex_state = 2},
  [245] = {.lex_state = 290},
  [246] = {.lex_state = 291},
  [247] = {.lex_state = 75},
  [248] = {.lex_state = 75},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 290},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 1},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 290},
  [256] = {.lex_state = 289},
  [257] = {.lex_state = 289},
  [258] = {.lex_state = 2},
  [259] = {.lex_state = 288},
  [260] = {.lex_state = 68},
  [261] = {.lex_state = 288},
  [262] = {.lex_state = 290},
  [263] = {.lex_state = 1},
  [264] = {.lex_state = 1},
  [265] = {.lex_state = 1},
  [266] = {.lex_state = 75},
  [267] = {.lex_state = 290},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 288},
  [271] = {.lex_state = 288},
  [272] = {.lex_state = 675},
  [273] = {.lex_state = 75},
  [274] = {.lex_state = 1},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [sym__NL] = ACTIONS(1),
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
    [anon_sym_X_COLON] = ACTIONS(1),
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
    [sym_source_file] = STATE(234),
    [sym_stylesheet_directives] = STATE(225),
    [sym_file_structure] = STATE(253),
    [sym_file_header] = STATE(192),
    [sym_tune] = STATE(197),
    [sym_tune_header] = STATE(11),
    [sym_abc_version] = STATE(232),
    [sym_reference_number_line] = STATE(7),
    [sym_user_defined] = STATE(232),
    [sym_file_header_info_line] = STATE(225),
    [aux_sym_file_structure_repeat2] = STATE(177),
    [aux_sym_file_header_repeat1] = STATE(56),
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
    [sym__music_content] = STATE(20),
    [sym__nte_or_chrd] = STATE(61),
    [sym_beam] = STATE(20),
    [sym_note_construct] = STATE(61),
    [sym__chord_cstrct] = STATE(61),
    [sym_note] = STATE(127),
    [sym__pitch] = STATE(91),
    [sym_multimeasure_rest] = STATE(20),
    [sym_grace_note] = STATE(70),
    [sym_chord_symbol] = STATE(158),
    [sym_decoration] = STATE(185),
    [sym_nth_ending_barline] = STATE(30),
    [sym_generic_bar_line] = STATE(20),
    [sym_first_repeat_bar] = STATE(30),
    [sym_second_repeat_bar] = STATE(30),
    [sym_symbol] = STATE(20),
    [sym_symbol_line] = STATE(266),
    [sym_user_defined] = STATE(266),
    [sym_words_line] = STATE(266),
    [sym_body_info_line] = STATE(3),
    [aux_sym_tune_body_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__NL] = ACTIONS(17),
    [sym_COMMENT] = ACTIONS(19),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(21),
    [aux_sym__music_content_token1] = ACTIONS(23),
    [sym_slur_open] = ACTIONS(25),
    [sym_slur_close] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_alteration] = ACTIONS(31),
    [sym_note_letter] = ACTIONS(33),
    [sym_rest] = ACTIONS(35),
    [anon_sym_Z] = ACTIONS(37),
    [anon_sym_X] = ACTIONS(39),
    [aux_sym_grace_note_token1] = ACTIONS(41),
    [aux_sym_chord_symbol_token1] = ACTIONS(43),
    [sym_annotation] = ACTIONS(27),
    [sym_tuplet_marker] = ACTIONS(45),
    [sym_decoration_shorthand] = ACTIONS(47),
    [sym_bar_line] = ACTIONS(49),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(51),
    [sym_thin_double_bar_line] = ACTIONS(51),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(51),
    [sym_start_of_repeated_section] = ACTIONS(53),
    [sym_end_of_repeated_section] = ACTIONS(55),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(53),
    [anon_sym_BANGtrill_BANG] = ACTIONS(57),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(57),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(57),
    [anon_sym_BANGmordent_BANG] = ACTIONS(57),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(57),
    [anon_sym_BANGroll_BANG] = ACTIONS(57),
    [anon_sym_BANGturn_BANG] = ACTIONS(57),
    [anon_sym_BANGturnx_BANG] = ACTIONS(57),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(57),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(57),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(57),
    [anon_sym_BANG_GT_BANG] = ACTIONS(57),
    [anon_sym_BANGaccent_BANG] = ACTIONS(57),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(57),
    [anon_sym_BANGfermata_BANG] = ACTIONS(57),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(57),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(57),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(57),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(57),
    [anon_sym_BANGplus_BANG] = ACTIONS(57),
    [anon_sym_BANGsnap_BANG] = ACTIONS(57),
    [anon_sym_BANGslide_BANG] = ACTIONS(57),
    [anon_sym_BANGwedge_BANG] = ACTIONS(57),
    [anon_sym_BANGupbow_BANG] = ACTIONS(57),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(57),
    [anon_sym_BANGopen_BANG] = ACTIONS(57),
    [anon_sym_BANGthumb_BANG] = ACTIONS(57),
    [anon_sym_BANGbreath_BANG] = ACTIONS(57),
    [anon_sym_BANGpppp_BANG] = ACTIONS(57),
    [anon_sym_BANGppp_BANG] = ACTIONS(57),
    [anon_sym_BANGpp_BANG] = ACTIONS(57),
    [anon_sym_BANGp_BANG] = ACTIONS(57),
    [anon_sym_BANGmp_BANG] = ACTIONS(57),
    [anon_sym_BANGmf_BANG] = ACTIONS(57),
    [anon_sym_BANGf_BANG] = ACTIONS(57),
    [anon_sym_BANGff_BANG] = ACTIONS(57),
    [anon_sym_BANGfff_BANG] = ACTIONS(57),
    [anon_sym_BANGffff_BANG] = ACTIONS(57),
    [anon_sym_BANGsfz_BANG] = ACTIONS(57),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGsegno_BANG] = ACTIONS(57),
    [anon_sym_BANGcoda_BANG] = ACTIONS(57),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(57),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(57),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(57),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(57),
    [anon_sym_BANGfine_BANG] = ACTIONS(57),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(57),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(57),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(57),
    [sym_parts_line] = ACTIONS(59),
    [sym_instruction] = ACTIONS(59),
    [sym_key] = ACTIONS(59),
    [sym_macros] = ACTIONS(59),
    [sym_meter] = ACTIONS(59),
    [sym_notes] = ACTIONS(59),
    [anon_sym_X_COLON] = ACTIONS(15),
    [sym_remark] = ACTIONS(59),
    [sym_rhythm_line] = ACTIONS(59),
    [anon_sym_s_COLON] = ACTIONS(61),
    [sym_tempo] = ACTIONS(59),
    [sym_tune_title] = ACTIONS(59),
    [sym_unit_note_length] = ACTIONS(59),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(59),
    [anon_sym_w_COLON] = ACTIONS(63),
    [sym_words_postbody] = ACTIONS(15),
  },
  [3] = {
    [sym_stylesheet_directives] = STATE(3),
    [sym__MUSIC_CODE] = STATE(3),
    [sym__music_content] = STATE(20),
    [sym__nte_or_chrd] = STATE(61),
    [sym_beam] = STATE(20),
    [sym_note_construct] = STATE(61),
    [sym__chord_cstrct] = STATE(61),
    [sym_note] = STATE(127),
    [sym__pitch] = STATE(91),
    [sym_multimeasure_rest] = STATE(20),
    [sym_grace_note] = STATE(70),
    [sym_chord_symbol] = STATE(158),
    [sym_decoration] = STATE(185),
    [sym_nth_ending_barline] = STATE(30),
    [sym_generic_bar_line] = STATE(20),
    [sym_first_repeat_bar] = STATE(30),
    [sym_second_repeat_bar] = STATE(30),
    [sym_symbol] = STATE(20),
    [sym_symbol_line] = STATE(266),
    [sym_user_defined] = STATE(266),
    [sym_words_line] = STATE(266),
    [sym_body_info_line] = STATE(3),
    [aux_sym_tune_body_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(65),
    [sym__NL] = ACTIONS(67),
    [sym_COMMENT] = ACTIONS(69),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(72),
    [aux_sym__music_content_token1] = ACTIONS(75),
    [sym_slur_open] = ACTIONS(78),
    [sym_slur_close] = ACTIONS(81),
    [anon_sym_LBRACK] = ACTIONS(84),
    [sym_alteration] = ACTIONS(87),
    [sym_note_letter] = ACTIONS(90),
    [sym_rest] = ACTIONS(93),
    [anon_sym_Z] = ACTIONS(96),
    [anon_sym_X] = ACTIONS(99),
    [aux_sym_grace_note_token1] = ACTIONS(102),
    [aux_sym_chord_symbol_token1] = ACTIONS(105),
    [sym_annotation] = ACTIONS(81),
    [sym_tuplet_marker] = ACTIONS(108),
    [sym_decoration_shorthand] = ACTIONS(111),
    [sym_bar_line] = ACTIONS(114),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(117),
    [sym_thin_double_bar_line] = ACTIONS(117),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(117),
    [sym_start_of_repeated_section] = ACTIONS(120),
    [sym_end_of_repeated_section] = ACTIONS(123),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(120),
    [anon_sym_BANGtrill_BANG] = ACTIONS(126),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(126),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(126),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(126),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(126),
    [anon_sym_BANGmordent_BANG] = ACTIONS(126),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(126),
    [anon_sym_BANGroll_BANG] = ACTIONS(126),
    [anon_sym_BANGturn_BANG] = ACTIONS(126),
    [anon_sym_BANGturnx_BANG] = ACTIONS(126),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(126),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(126),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(126),
    [anon_sym_BANG_GT_BANG] = ACTIONS(126),
    [anon_sym_BANGaccent_BANG] = ACTIONS(126),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(126),
    [anon_sym_BANGfermata_BANG] = ACTIONS(126),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(126),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(126),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(126),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(126),
    [anon_sym_BANGplus_BANG] = ACTIONS(126),
    [anon_sym_BANGsnap_BANG] = ACTIONS(126),
    [anon_sym_BANGslide_BANG] = ACTIONS(126),
    [anon_sym_BANGwedge_BANG] = ACTIONS(126),
    [anon_sym_BANGupbow_BANG] = ACTIONS(126),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(126),
    [anon_sym_BANGopen_BANG] = ACTIONS(126),
    [anon_sym_BANGthumb_BANG] = ACTIONS(126),
    [anon_sym_BANGbreath_BANG] = ACTIONS(126),
    [anon_sym_BANGpppp_BANG] = ACTIONS(126),
    [anon_sym_BANGppp_BANG] = ACTIONS(126),
    [anon_sym_BANGpp_BANG] = ACTIONS(126),
    [anon_sym_BANGp_BANG] = ACTIONS(126),
    [anon_sym_BANGmp_BANG] = ACTIONS(126),
    [anon_sym_BANGmf_BANG] = ACTIONS(126),
    [anon_sym_BANGf_BANG] = ACTIONS(126),
    [anon_sym_BANGff_BANG] = ACTIONS(126),
    [anon_sym_BANGfff_BANG] = ACTIONS(126),
    [anon_sym_BANGffff_BANG] = ACTIONS(126),
    [anon_sym_BANGsfz_BANG] = ACTIONS(126),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(126),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(126),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(126),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(126),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(126),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(126),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(126),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(126),
    [anon_sym_BANGsegno_BANG] = ACTIONS(126),
    [anon_sym_BANGcoda_BANG] = ACTIONS(126),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(126),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(126),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(126),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(126),
    [anon_sym_BANGfine_BANG] = ACTIONS(126),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(126),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(126),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(126),
    [sym_parts_line] = ACTIONS(129),
    [sym_instruction] = ACTIONS(129),
    [sym_key] = ACTIONS(129),
    [sym_macros] = ACTIONS(129),
    [sym_meter] = ACTIONS(129),
    [sym_notes] = ACTIONS(129),
    [anon_sym_X_COLON] = ACTIONS(65),
    [sym_remark] = ACTIONS(129),
    [sym_rhythm_line] = ACTIONS(129),
    [anon_sym_s_COLON] = ACTIONS(132),
    [sym_tempo] = ACTIONS(129),
    [sym_tune_title] = ACTIONS(129),
    [sym_unit_note_length] = ACTIONS(129),
    [anon_sym_U_COLON] = ACTIONS(135),
    [sym_voice] = ACTIONS(129),
    [anon_sym_w_COLON] = ACTIONS(138),
    [sym_words_postbody] = ACTIONS(65),
  },
  [4] = {
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(20),
    [sym__nte_or_chrd] = STATE(61),
    [sym_beam] = STATE(20),
    [sym_note_construct] = STATE(61),
    [sym__chord_cstrct] = STATE(61),
    [sym_note] = STATE(127),
    [sym__pitch] = STATE(91),
    [sym_multimeasure_rest] = STATE(20),
    [sym_grace_note] = STATE(70),
    [sym_chord_symbol] = STATE(158),
    [sym_decoration] = STATE(185),
    [sym_nth_ending_barline] = STATE(30),
    [sym_generic_bar_line] = STATE(20),
    [sym_first_repeat_bar] = STATE(30),
    [sym_second_repeat_bar] = STATE(30),
    [sym_symbol] = STATE(20),
    [sym_symbol_line] = STATE(266),
    [sym_user_defined] = STATE(266),
    [sym_words_line] = STATE(266),
    [sym_body_info_line] = STATE(2),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(70),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym__NL] = ACTIONS(143),
    [sym_COMMENT] = ACTIONS(145),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(21),
    [aux_sym__music_content_token1] = ACTIONS(23),
    [sym_slur_open] = ACTIONS(25),
    [sym_slur_close] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_alteration] = ACTIONS(31),
    [sym_note_letter] = ACTIONS(33),
    [sym_rest] = ACTIONS(35),
    [anon_sym_Z] = ACTIONS(37),
    [anon_sym_X] = ACTIONS(39),
    [aux_sym_grace_note_token1] = ACTIONS(41),
    [aux_sym_chord_symbol_token1] = ACTIONS(43),
    [sym_annotation] = ACTIONS(27),
    [sym_tuplet_marker] = ACTIONS(45),
    [sym_decoration_shorthand] = ACTIONS(47),
    [sym_bar_line] = ACTIONS(49),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(51),
    [sym_thin_double_bar_line] = ACTIONS(51),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(51),
    [sym_start_of_repeated_section] = ACTIONS(53),
    [sym_end_of_repeated_section] = ACTIONS(55),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(53),
    [anon_sym_BANGtrill_BANG] = ACTIONS(57),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(57),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(57),
    [anon_sym_BANGmordent_BANG] = ACTIONS(57),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(57),
    [anon_sym_BANGroll_BANG] = ACTIONS(57),
    [anon_sym_BANGturn_BANG] = ACTIONS(57),
    [anon_sym_BANGturnx_BANG] = ACTIONS(57),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(57),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(57),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(57),
    [anon_sym_BANG_GT_BANG] = ACTIONS(57),
    [anon_sym_BANGaccent_BANG] = ACTIONS(57),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(57),
    [anon_sym_BANGfermata_BANG] = ACTIONS(57),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(57),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(57),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(57),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(57),
    [anon_sym_BANGplus_BANG] = ACTIONS(57),
    [anon_sym_BANGsnap_BANG] = ACTIONS(57),
    [anon_sym_BANGslide_BANG] = ACTIONS(57),
    [anon_sym_BANGwedge_BANG] = ACTIONS(57),
    [anon_sym_BANGupbow_BANG] = ACTIONS(57),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(57),
    [anon_sym_BANGopen_BANG] = ACTIONS(57),
    [anon_sym_BANGthumb_BANG] = ACTIONS(57),
    [anon_sym_BANGbreath_BANG] = ACTIONS(57),
    [anon_sym_BANGpppp_BANG] = ACTIONS(57),
    [anon_sym_BANGppp_BANG] = ACTIONS(57),
    [anon_sym_BANGpp_BANG] = ACTIONS(57),
    [anon_sym_BANGp_BANG] = ACTIONS(57),
    [anon_sym_BANGmp_BANG] = ACTIONS(57),
    [anon_sym_BANGmf_BANG] = ACTIONS(57),
    [anon_sym_BANGf_BANG] = ACTIONS(57),
    [anon_sym_BANGff_BANG] = ACTIONS(57),
    [anon_sym_BANGfff_BANG] = ACTIONS(57),
    [anon_sym_BANGffff_BANG] = ACTIONS(57),
    [anon_sym_BANGsfz_BANG] = ACTIONS(57),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGsegno_BANG] = ACTIONS(57),
    [anon_sym_BANGcoda_BANG] = ACTIONS(57),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(57),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(57),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(57),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(57),
    [anon_sym_BANGfine_BANG] = ACTIONS(57),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(57),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(57),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(57),
    [sym_parts_line] = ACTIONS(59),
    [sym_instruction] = ACTIONS(59),
    [sym_key] = ACTIONS(59),
    [sym_macros] = ACTIONS(59),
    [sym_meter] = ACTIONS(59),
    [sym_notes] = ACTIONS(59),
    [anon_sym_X_COLON] = ACTIONS(141),
    [sym_remark] = ACTIONS(59),
    [sym_rhythm_line] = ACTIONS(59),
    [anon_sym_s_COLON] = ACTIONS(61),
    [sym_tempo] = ACTIONS(59),
    [sym_tune_title] = ACTIONS(59),
    [sym_unit_note_length] = ACTIONS(59),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(59),
    [anon_sym_w_COLON] = ACTIONS(63),
    [sym_words_postbody] = ACTIONS(141),
  },
  [5] = {
    [sym_abc_version] = STATE(273),
    [sym_symbol_line] = STATE(273),
    [sym_user_defined] = STATE(273),
    [sym_tune_header_info_line] = STATE(274),
    [aux_sym_tune_header_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym__NL] = ACTIONS(149),
    [sym_COMMENT] = ACTIONS(151),
    [aux_sym__music_content_token1] = ACTIONS(149),
    [sym_slur_open] = ACTIONS(149),
    [sym_slur_close] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym_alteration] = ACTIONS(147),
    [sym_note_letter] = ACTIONS(149),
    [sym_rest] = ACTIONS(147),
    [anon_sym_Z] = ACTIONS(149),
    [anon_sym_X] = ACTIONS(149),
    [aux_sym_grace_note_token1] = ACTIONS(147),
    [aux_sym_chord_symbol_token1] = ACTIONS(149),
    [sym_annotation] = ACTIONS(147),
    [sym_tuplet_marker] = ACTIONS(147),
    [sym_decoration_shorthand] = ACTIONS(149),
    [sym_bar_line] = ACTIONS(149),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(147),
    [sym_thin_double_bar_line] = ACTIONS(147),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(147),
    [sym_start_of_repeated_section] = ACTIONS(147),
    [sym_end_of_repeated_section] = ACTIONS(147),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(147),
    [anon_sym_BANGtrill_BANG] = ACTIONS(147),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(147),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(147),
    [anon_sym_BANGmordent_BANG] = ACTIONS(147),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(147),
    [anon_sym_BANGroll_BANG] = ACTIONS(147),
    [anon_sym_BANGturn_BANG] = ACTIONS(147),
    [anon_sym_BANGturnx_BANG] = ACTIONS(147),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(147),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(147),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(147),
    [anon_sym_BANG_GT_BANG] = ACTIONS(147),
    [anon_sym_BANGaccent_BANG] = ACTIONS(147),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(147),
    [anon_sym_BANGfermata_BANG] = ACTIONS(147),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(147),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(147),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(147),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(147),
    [anon_sym_BANGplus_BANG] = ACTIONS(147),
    [anon_sym_BANGsnap_BANG] = ACTIONS(147),
    [anon_sym_BANGslide_BANG] = ACTIONS(147),
    [anon_sym_BANGwedge_BANG] = ACTIONS(147),
    [anon_sym_BANGupbow_BANG] = ACTIONS(147),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(147),
    [anon_sym_BANGopen_BANG] = ACTIONS(147),
    [anon_sym_BANGthumb_BANG] = ACTIONS(147),
    [anon_sym_BANGbreath_BANG] = ACTIONS(147),
    [anon_sym_BANGpppp_BANG] = ACTIONS(147),
    [anon_sym_BANGppp_BANG] = ACTIONS(147),
    [anon_sym_BANGpp_BANG] = ACTIONS(147),
    [anon_sym_BANGp_BANG] = ACTIONS(147),
    [anon_sym_BANGmp_BANG] = ACTIONS(147),
    [anon_sym_BANGmf_BANG] = ACTIONS(147),
    [anon_sym_BANGf_BANG] = ACTIONS(147),
    [anon_sym_BANGff_BANG] = ACTIONS(147),
    [anon_sym_BANGfff_BANG] = ACTIONS(147),
    [anon_sym_BANGffff_BANG] = ACTIONS(147),
    [anon_sym_BANGsfz_BANG] = ACTIONS(147),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGsegno_BANG] = ACTIONS(147),
    [anon_sym_BANGcoda_BANG] = ACTIONS(147),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(147),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(147),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(147),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(147),
    [anon_sym_BANGfine_BANG] = ACTIONS(147),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(147),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(147),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(147),
    [sym_parts_line] = ACTIONS(154),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(157),
    [sym_area] = ACTIONS(154),
    [sym_book] = ACTIONS(154),
    [sym_composer] = ACTIONS(154),
    [sym_discography] = ACTIONS(154),
    [sym_file] = ACTIONS(154),
    [sym_group] = ACTIONS(154),
    [sym_history] = ACTIONS(154),
    [sym_instruction] = ACTIONS(154),
    [sym_key] = ACTIONS(154),
    [sym_macros] = ACTIONS(154),
    [sym_meter] = ACTIONS(154),
    [sym_notes] = ACTIONS(154),
    [sym_origin] = ACTIONS(154),
    [anon_sym_X_COLON] = ACTIONS(147),
    [sym_remark] = ACTIONS(154),
    [sym_rhythm_line] = ACTIONS(154),
    [sym_source] = ACTIONS(154),
    [anon_sym_s_COLON] = ACTIONS(160),
    [sym_tempo] = ACTIONS(154),
    [sym_transcription] = ACTIONS(154),
    [sym_tune_title] = ACTIONS(154),
    [sym_unit_note_length] = ACTIONS(154),
    [anon_sym_U_COLON] = ACTIONS(163),
    [sym_voice] = ACTIONS(154),
    [sym_words_postbody] = ACTIONS(154),
  },
  [6] = {
    [sym_abc_version] = STATE(273),
    [sym_symbol_line] = STATE(273),
    [sym_user_defined] = STATE(273),
    [sym_tune_header_info_line] = STATE(274),
    [aux_sym_tune_header_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(166),
    [sym__NL] = ACTIONS(168),
    [sym_COMMENT] = ACTIONS(170),
    [aux_sym__music_content_token1] = ACTIONS(168),
    [sym_slur_open] = ACTIONS(168),
    [sym_slur_close] = ACTIONS(166),
    [anon_sym_LBRACK] = ACTIONS(168),
    [sym_alteration] = ACTIONS(166),
    [sym_note_letter] = ACTIONS(168),
    [sym_rest] = ACTIONS(166),
    [anon_sym_Z] = ACTIONS(168),
    [anon_sym_X] = ACTIONS(168),
    [aux_sym_grace_note_token1] = ACTIONS(166),
    [aux_sym_chord_symbol_token1] = ACTIONS(168),
    [sym_annotation] = ACTIONS(166),
    [sym_tuplet_marker] = ACTIONS(166),
    [sym_decoration_shorthand] = ACTIONS(168),
    [sym_bar_line] = ACTIONS(168),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(166),
    [sym_thin_double_bar_line] = ACTIONS(166),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(166),
    [sym_start_of_repeated_section] = ACTIONS(166),
    [sym_end_of_repeated_section] = ACTIONS(166),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(166),
    [anon_sym_BANGtrill_BANG] = ACTIONS(166),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(166),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(166),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(166),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(166),
    [anon_sym_BANGmordent_BANG] = ACTIONS(166),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(166),
    [anon_sym_BANGroll_BANG] = ACTIONS(166),
    [anon_sym_BANGturn_BANG] = ACTIONS(166),
    [anon_sym_BANGturnx_BANG] = ACTIONS(166),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(166),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(166),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(166),
    [anon_sym_BANG_GT_BANG] = ACTIONS(166),
    [anon_sym_BANGaccent_BANG] = ACTIONS(166),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(166),
    [anon_sym_BANGfermata_BANG] = ACTIONS(166),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(166),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(166),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(166),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(166),
    [anon_sym_BANGplus_BANG] = ACTIONS(166),
    [anon_sym_BANGsnap_BANG] = ACTIONS(166),
    [anon_sym_BANGslide_BANG] = ACTIONS(166),
    [anon_sym_BANGwedge_BANG] = ACTIONS(166),
    [anon_sym_BANGupbow_BANG] = ACTIONS(166),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(166),
    [anon_sym_BANGopen_BANG] = ACTIONS(166),
    [anon_sym_BANGthumb_BANG] = ACTIONS(166),
    [anon_sym_BANGbreath_BANG] = ACTIONS(166),
    [anon_sym_BANGpppp_BANG] = ACTIONS(166),
    [anon_sym_BANGppp_BANG] = ACTIONS(166),
    [anon_sym_BANGpp_BANG] = ACTIONS(166),
    [anon_sym_BANGp_BANG] = ACTIONS(166),
    [anon_sym_BANGmp_BANG] = ACTIONS(166),
    [anon_sym_BANGmf_BANG] = ACTIONS(166),
    [anon_sym_BANGf_BANG] = ACTIONS(166),
    [anon_sym_BANGff_BANG] = ACTIONS(166),
    [anon_sym_BANGfff_BANG] = ACTIONS(166),
    [anon_sym_BANGffff_BANG] = ACTIONS(166),
    [anon_sym_BANGsfz_BANG] = ACTIONS(166),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(166),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(166),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(166),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(166),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(166),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(166),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(166),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(166),
    [anon_sym_BANGsegno_BANG] = ACTIONS(166),
    [anon_sym_BANGcoda_BANG] = ACTIONS(166),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(166),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(166),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(166),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(166),
    [anon_sym_BANGfine_BANG] = ACTIONS(166),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(166),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(166),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(166),
    [sym_parts_line] = ACTIONS(172),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(7),
    [sym_area] = ACTIONS(172),
    [sym_book] = ACTIONS(172),
    [sym_composer] = ACTIONS(172),
    [sym_discography] = ACTIONS(172),
    [sym_file] = ACTIONS(172),
    [sym_group] = ACTIONS(172),
    [sym_history] = ACTIONS(172),
    [sym_instruction] = ACTIONS(172),
    [sym_key] = ACTIONS(172),
    [sym_macros] = ACTIONS(172),
    [sym_meter] = ACTIONS(172),
    [sym_notes] = ACTIONS(172),
    [sym_origin] = ACTIONS(172),
    [anon_sym_X_COLON] = ACTIONS(166),
    [sym_remark] = ACTIONS(172),
    [sym_rhythm_line] = ACTIONS(172),
    [sym_source] = ACTIONS(172),
    [anon_sym_s_COLON] = ACTIONS(61),
    [sym_tempo] = ACTIONS(172),
    [sym_transcription] = ACTIONS(172),
    [sym_tune_title] = ACTIONS(172),
    [sym_unit_note_length] = ACTIONS(172),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(172),
    [sym_words_postbody] = ACTIONS(166),
  },
  [7] = {
    [sym_abc_version] = STATE(273),
    [sym_symbol_line] = STATE(273),
    [sym_user_defined] = STATE(273),
    [sym_tune_header_info_line] = STATE(274),
    [aux_sym_tune_header_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(174),
    [sym__NL] = ACTIONS(176),
    [sym_COMMENT] = ACTIONS(170),
    [aux_sym__music_content_token1] = ACTIONS(176),
    [sym_slur_open] = ACTIONS(176),
    [sym_slur_close] = ACTIONS(174),
    [anon_sym_LBRACK] = ACTIONS(176),
    [sym_alteration] = ACTIONS(174),
    [sym_note_letter] = ACTIONS(176),
    [sym_rest] = ACTIONS(174),
    [anon_sym_Z] = ACTIONS(176),
    [anon_sym_X] = ACTIONS(176),
    [aux_sym_grace_note_token1] = ACTIONS(174),
    [aux_sym_chord_symbol_token1] = ACTIONS(176),
    [sym_annotation] = ACTIONS(174),
    [sym_tuplet_marker] = ACTIONS(174),
    [sym_decoration_shorthand] = ACTIONS(176),
    [sym_bar_line] = ACTIONS(176),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(174),
    [sym_thin_double_bar_line] = ACTIONS(174),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(174),
    [sym_start_of_repeated_section] = ACTIONS(174),
    [sym_end_of_repeated_section] = ACTIONS(174),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(174),
    [anon_sym_BANGtrill_BANG] = ACTIONS(174),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(174),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(174),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(174),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(174),
    [anon_sym_BANGmordent_BANG] = ACTIONS(174),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(174),
    [anon_sym_BANGroll_BANG] = ACTIONS(174),
    [anon_sym_BANGturn_BANG] = ACTIONS(174),
    [anon_sym_BANGturnx_BANG] = ACTIONS(174),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(174),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(174),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(174),
    [anon_sym_BANG_GT_BANG] = ACTIONS(174),
    [anon_sym_BANGaccent_BANG] = ACTIONS(174),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(174),
    [anon_sym_BANGfermata_BANG] = ACTIONS(174),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(174),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(174),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(174),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(174),
    [anon_sym_BANGplus_BANG] = ACTIONS(174),
    [anon_sym_BANGsnap_BANG] = ACTIONS(174),
    [anon_sym_BANGslide_BANG] = ACTIONS(174),
    [anon_sym_BANGwedge_BANG] = ACTIONS(174),
    [anon_sym_BANGupbow_BANG] = ACTIONS(174),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(174),
    [anon_sym_BANGopen_BANG] = ACTIONS(174),
    [anon_sym_BANGthumb_BANG] = ACTIONS(174),
    [anon_sym_BANGbreath_BANG] = ACTIONS(174),
    [anon_sym_BANGpppp_BANG] = ACTIONS(174),
    [anon_sym_BANGppp_BANG] = ACTIONS(174),
    [anon_sym_BANGpp_BANG] = ACTIONS(174),
    [anon_sym_BANGp_BANG] = ACTIONS(174),
    [anon_sym_BANGmp_BANG] = ACTIONS(174),
    [anon_sym_BANGmf_BANG] = ACTIONS(174),
    [anon_sym_BANGf_BANG] = ACTIONS(174),
    [anon_sym_BANGff_BANG] = ACTIONS(174),
    [anon_sym_BANGfff_BANG] = ACTIONS(174),
    [anon_sym_BANGffff_BANG] = ACTIONS(174),
    [anon_sym_BANGsfz_BANG] = ACTIONS(174),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(174),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(174),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(174),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(174),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(174),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(174),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(174),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(174),
    [anon_sym_BANGsegno_BANG] = ACTIONS(174),
    [anon_sym_BANGcoda_BANG] = ACTIONS(174),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(174),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(174),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(174),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(174),
    [anon_sym_BANGfine_BANG] = ACTIONS(174),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(174),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(174),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(174),
    [sym_parts_line] = ACTIONS(172),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(7),
    [sym_area] = ACTIONS(172),
    [sym_book] = ACTIONS(172),
    [sym_composer] = ACTIONS(172),
    [sym_discography] = ACTIONS(172),
    [sym_file] = ACTIONS(172),
    [sym_group] = ACTIONS(172),
    [sym_history] = ACTIONS(172),
    [sym_instruction] = ACTIONS(172),
    [sym_key] = ACTIONS(172),
    [sym_macros] = ACTIONS(172),
    [sym_meter] = ACTIONS(172),
    [sym_notes] = ACTIONS(172),
    [sym_origin] = ACTIONS(172),
    [anon_sym_X_COLON] = ACTIONS(174),
    [sym_remark] = ACTIONS(172),
    [sym_rhythm_line] = ACTIONS(172),
    [sym_source] = ACTIONS(172),
    [anon_sym_s_COLON] = ACTIONS(61),
    [sym_tempo] = ACTIONS(172),
    [sym_transcription] = ACTIONS(172),
    [sym_tune_title] = ACTIONS(172),
    [sym_unit_note_length] = ACTIONS(172),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(172),
    [sym_words_postbody] = ACTIONS(174),
  },
  [8] = {
    [ts_builtin_sym_end] = ACTIONS(178),
    [sym__NL] = ACTIONS(180),
    [sym_COMMENT] = ACTIONS(180),
    [aux_sym__music_content_token1] = ACTIONS(180),
    [sym_slur_open] = ACTIONS(180),
    [sym_slur_close] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(180),
    [sym_alteration] = ACTIONS(178),
    [sym_note_letter] = ACTIONS(180),
    [sym_rest] = ACTIONS(178),
    [anon_sym_Z] = ACTIONS(180),
    [anon_sym_X] = ACTIONS(180),
    [aux_sym_grace_note_token1] = ACTIONS(178),
    [aux_sym_chord_symbol_token1] = ACTIONS(180),
    [sym_annotation] = ACTIONS(178),
    [sym_tuplet_marker] = ACTIONS(178),
    [sym_decoration_shorthand] = ACTIONS(180),
    [sym_bar_line] = ACTIONS(180),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(178),
    [sym_thin_double_bar_line] = ACTIONS(178),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(178),
    [sym_start_of_repeated_section] = ACTIONS(178),
    [sym_end_of_repeated_section] = ACTIONS(178),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(178),
    [anon_sym_BANGtrill_BANG] = ACTIONS(178),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(178),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(178),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(178),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(178),
    [anon_sym_BANGmordent_BANG] = ACTIONS(178),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(178),
    [anon_sym_BANGroll_BANG] = ACTIONS(178),
    [anon_sym_BANGturn_BANG] = ACTIONS(178),
    [anon_sym_BANGturnx_BANG] = ACTIONS(178),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(178),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(178),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(178),
    [anon_sym_BANG_GT_BANG] = ACTIONS(178),
    [anon_sym_BANGaccent_BANG] = ACTIONS(178),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(178),
    [anon_sym_BANGfermata_BANG] = ACTIONS(178),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(178),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(178),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(178),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(178),
    [anon_sym_BANGplus_BANG] = ACTIONS(178),
    [anon_sym_BANGsnap_BANG] = ACTIONS(178),
    [anon_sym_BANGslide_BANG] = ACTIONS(178),
    [anon_sym_BANGwedge_BANG] = ACTIONS(178),
    [anon_sym_BANGupbow_BANG] = ACTIONS(178),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(178),
    [anon_sym_BANGopen_BANG] = ACTIONS(178),
    [anon_sym_BANGthumb_BANG] = ACTIONS(178),
    [anon_sym_BANGbreath_BANG] = ACTIONS(178),
    [anon_sym_BANGpppp_BANG] = ACTIONS(178),
    [anon_sym_BANGppp_BANG] = ACTIONS(178),
    [anon_sym_BANGpp_BANG] = ACTIONS(178),
    [anon_sym_BANGp_BANG] = ACTIONS(178),
    [anon_sym_BANGmp_BANG] = ACTIONS(178),
    [anon_sym_BANGmf_BANG] = ACTIONS(178),
    [anon_sym_BANGf_BANG] = ACTIONS(178),
    [anon_sym_BANGff_BANG] = ACTIONS(178),
    [anon_sym_BANGfff_BANG] = ACTIONS(178),
    [anon_sym_BANGffff_BANG] = ACTIONS(178),
    [anon_sym_BANGsfz_BANG] = ACTIONS(178),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(178),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(178),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(178),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(178),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(178),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(178),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(178),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(178),
    [anon_sym_BANGsegno_BANG] = ACTIONS(178),
    [anon_sym_BANGcoda_BANG] = ACTIONS(178),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(178),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(178),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(178),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(178),
    [anon_sym_BANGfine_BANG] = ACTIONS(178),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(178),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(178),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(178),
    [sym_parts_line] = ACTIONS(178),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(180),
    [sym_area] = ACTIONS(178),
    [sym_book] = ACTIONS(178),
    [sym_composer] = ACTIONS(178),
    [sym_discography] = ACTIONS(178),
    [sym_file] = ACTIONS(178),
    [sym_group] = ACTIONS(178),
    [sym_history] = ACTIONS(178),
    [sym_instruction] = ACTIONS(178),
    [sym_key] = ACTIONS(178),
    [sym_macros] = ACTIONS(178),
    [sym_meter] = ACTIONS(178),
    [sym_notes] = ACTIONS(178),
    [sym_origin] = ACTIONS(178),
    [anon_sym_X_COLON] = ACTIONS(178),
    [sym_remark] = ACTIONS(178),
    [sym_rhythm_line] = ACTIONS(178),
    [sym_source] = ACTIONS(178),
    [anon_sym_s_COLON] = ACTIONS(178),
    [sym_tempo] = ACTIONS(178),
    [sym_transcription] = ACTIONS(178),
    [sym_tune_title] = ACTIONS(178),
    [sym_unit_note_length] = ACTIONS(178),
    [anon_sym_U_COLON] = ACTIONS(178),
    [sym_voice] = ACTIONS(178),
    [sym_words_postbody] = ACTIONS(178),
  },
  [9] = {
    [ts_builtin_sym_end] = ACTIONS(147),
    [sym__NL] = ACTIONS(149),
    [sym_COMMENT] = ACTIONS(149),
    [aux_sym__music_content_token1] = ACTIONS(149),
    [sym_slur_open] = ACTIONS(149),
    [sym_slur_close] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(149),
    [sym_alteration] = ACTIONS(147),
    [sym_note_letter] = ACTIONS(149),
    [sym_rest] = ACTIONS(147),
    [anon_sym_Z] = ACTIONS(149),
    [anon_sym_X] = ACTIONS(149),
    [aux_sym_grace_note_token1] = ACTIONS(147),
    [aux_sym_chord_symbol_token1] = ACTIONS(149),
    [sym_annotation] = ACTIONS(147),
    [sym_tuplet_marker] = ACTIONS(147),
    [sym_decoration_shorthand] = ACTIONS(149),
    [sym_bar_line] = ACTIONS(149),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(147),
    [sym_thin_double_bar_line] = ACTIONS(147),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(147),
    [sym_start_of_repeated_section] = ACTIONS(147),
    [sym_end_of_repeated_section] = ACTIONS(147),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(147),
    [anon_sym_BANGtrill_BANG] = ACTIONS(147),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(147),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(147),
    [anon_sym_BANGmordent_BANG] = ACTIONS(147),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(147),
    [anon_sym_BANGroll_BANG] = ACTIONS(147),
    [anon_sym_BANGturn_BANG] = ACTIONS(147),
    [anon_sym_BANGturnx_BANG] = ACTIONS(147),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(147),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(147),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(147),
    [anon_sym_BANG_GT_BANG] = ACTIONS(147),
    [anon_sym_BANGaccent_BANG] = ACTIONS(147),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(147),
    [anon_sym_BANGfermata_BANG] = ACTIONS(147),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(147),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(147),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(147),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(147),
    [anon_sym_BANGplus_BANG] = ACTIONS(147),
    [anon_sym_BANGsnap_BANG] = ACTIONS(147),
    [anon_sym_BANGslide_BANG] = ACTIONS(147),
    [anon_sym_BANGwedge_BANG] = ACTIONS(147),
    [anon_sym_BANGupbow_BANG] = ACTIONS(147),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(147),
    [anon_sym_BANGopen_BANG] = ACTIONS(147),
    [anon_sym_BANGthumb_BANG] = ACTIONS(147),
    [anon_sym_BANGbreath_BANG] = ACTIONS(147),
    [anon_sym_BANGpppp_BANG] = ACTIONS(147),
    [anon_sym_BANGppp_BANG] = ACTIONS(147),
    [anon_sym_BANGpp_BANG] = ACTIONS(147),
    [anon_sym_BANGp_BANG] = ACTIONS(147),
    [anon_sym_BANGmp_BANG] = ACTIONS(147),
    [anon_sym_BANGmf_BANG] = ACTIONS(147),
    [anon_sym_BANGf_BANG] = ACTIONS(147),
    [anon_sym_BANGff_BANG] = ACTIONS(147),
    [anon_sym_BANGfff_BANG] = ACTIONS(147),
    [anon_sym_BANGffff_BANG] = ACTIONS(147),
    [anon_sym_BANGsfz_BANG] = ACTIONS(147),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(147),
    [anon_sym_BANGsegno_BANG] = ACTIONS(147),
    [anon_sym_BANGcoda_BANG] = ACTIONS(147),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(147),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(147),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(147),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(147),
    [anon_sym_BANGfine_BANG] = ACTIONS(147),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(147),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(147),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(147),
    [sym_parts_line] = ACTIONS(147),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(149),
    [sym_area] = ACTIONS(147),
    [sym_book] = ACTIONS(147),
    [sym_composer] = ACTIONS(147),
    [sym_discography] = ACTIONS(147),
    [sym_file] = ACTIONS(147),
    [sym_group] = ACTIONS(147),
    [sym_history] = ACTIONS(147),
    [sym_instruction] = ACTIONS(147),
    [sym_key] = ACTIONS(147),
    [sym_macros] = ACTIONS(147),
    [sym_meter] = ACTIONS(147),
    [sym_notes] = ACTIONS(147),
    [sym_origin] = ACTIONS(147),
    [anon_sym_X_COLON] = ACTIONS(147),
    [sym_remark] = ACTIONS(147),
    [sym_rhythm_line] = ACTIONS(147),
    [sym_source] = ACTIONS(147),
    [anon_sym_s_COLON] = ACTIONS(147),
    [sym_tempo] = ACTIONS(147),
    [sym_transcription] = ACTIONS(147),
    [sym_tune_title] = ACTIONS(147),
    [sym_unit_note_length] = ACTIONS(147),
    [anon_sym_U_COLON] = ACTIONS(147),
    [sym_voice] = ACTIONS(147),
    [sym_words_postbody] = ACTIONS(147),
  },
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(182),
    [sym__NL] = ACTIONS(184),
    [sym_COMMENT] = ACTIONS(184),
    [aux_sym__music_content_token1] = ACTIONS(184),
    [sym_slur_open] = ACTIONS(184),
    [sym_slur_close] = ACTIONS(182),
    [anon_sym_LBRACK] = ACTIONS(184),
    [sym_alteration] = ACTIONS(182),
    [sym_note_letter] = ACTIONS(184),
    [sym_rest] = ACTIONS(182),
    [anon_sym_Z] = ACTIONS(184),
    [anon_sym_X] = ACTIONS(184),
    [aux_sym_grace_note_token1] = ACTIONS(182),
    [aux_sym_chord_symbol_token1] = ACTIONS(184),
    [sym_annotation] = ACTIONS(182),
    [sym_tuplet_marker] = ACTIONS(182),
    [sym_decoration_shorthand] = ACTIONS(184),
    [sym_bar_line] = ACTIONS(184),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(182),
    [sym_thin_double_bar_line] = ACTIONS(182),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(182),
    [sym_start_of_repeated_section] = ACTIONS(182),
    [sym_end_of_repeated_section] = ACTIONS(182),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(182),
    [anon_sym_BANGtrill_BANG] = ACTIONS(182),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(182),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(182),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(182),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(182),
    [anon_sym_BANGmordent_BANG] = ACTIONS(182),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(182),
    [anon_sym_BANGroll_BANG] = ACTIONS(182),
    [anon_sym_BANGturn_BANG] = ACTIONS(182),
    [anon_sym_BANGturnx_BANG] = ACTIONS(182),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(182),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(182),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(182),
    [anon_sym_BANG_GT_BANG] = ACTIONS(182),
    [anon_sym_BANGaccent_BANG] = ACTIONS(182),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(182),
    [anon_sym_BANGfermata_BANG] = ACTIONS(182),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(182),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(182),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(182),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(182),
    [anon_sym_BANGplus_BANG] = ACTIONS(182),
    [anon_sym_BANGsnap_BANG] = ACTIONS(182),
    [anon_sym_BANGslide_BANG] = ACTIONS(182),
    [anon_sym_BANGwedge_BANG] = ACTIONS(182),
    [anon_sym_BANGupbow_BANG] = ACTIONS(182),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(182),
    [anon_sym_BANGopen_BANG] = ACTIONS(182),
    [anon_sym_BANGthumb_BANG] = ACTIONS(182),
    [anon_sym_BANGbreath_BANG] = ACTIONS(182),
    [anon_sym_BANGpppp_BANG] = ACTIONS(182),
    [anon_sym_BANGppp_BANG] = ACTIONS(182),
    [anon_sym_BANGpp_BANG] = ACTIONS(182),
    [anon_sym_BANGp_BANG] = ACTIONS(182),
    [anon_sym_BANGmp_BANG] = ACTIONS(182),
    [anon_sym_BANGmf_BANG] = ACTIONS(182),
    [anon_sym_BANGf_BANG] = ACTIONS(182),
    [anon_sym_BANGff_BANG] = ACTIONS(182),
    [anon_sym_BANGfff_BANG] = ACTIONS(182),
    [anon_sym_BANGffff_BANG] = ACTIONS(182),
    [anon_sym_BANGsfz_BANG] = ACTIONS(182),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(182),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(182),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(182),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(182),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(182),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(182),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(182),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(182),
    [anon_sym_BANGsegno_BANG] = ACTIONS(182),
    [anon_sym_BANGcoda_BANG] = ACTIONS(182),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(182),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(182),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(182),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(182),
    [anon_sym_BANGfine_BANG] = ACTIONS(182),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(182),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(182),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(182),
    [sym_parts_line] = ACTIONS(182),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(184),
    [sym_area] = ACTIONS(182),
    [sym_book] = ACTIONS(182),
    [sym_composer] = ACTIONS(182),
    [sym_discography] = ACTIONS(182),
    [sym_file] = ACTIONS(182),
    [sym_group] = ACTIONS(182),
    [sym_history] = ACTIONS(182),
    [sym_instruction] = ACTIONS(182),
    [sym_key] = ACTIONS(182),
    [sym_macros] = ACTIONS(182),
    [sym_meter] = ACTIONS(182),
    [sym_notes] = ACTIONS(182),
    [sym_origin] = ACTIONS(182),
    [anon_sym_X_COLON] = ACTIONS(182),
    [sym_remark] = ACTIONS(182),
    [sym_rhythm_line] = ACTIONS(182),
    [sym_source] = ACTIONS(182),
    [anon_sym_s_COLON] = ACTIONS(182),
    [sym_tempo] = ACTIONS(182),
    [sym_transcription] = ACTIONS(182),
    [sym_tune_title] = ACTIONS(182),
    [sym_unit_note_length] = ACTIONS(182),
    [anon_sym_U_COLON] = ACTIONS(182),
    [sym_voice] = ACTIONS(182),
    [sym_words_postbody] = ACTIONS(182),
  },
  [11] = {
    [sym__MUSIC_CODE] = STATE(4),
    [sym_tune_body] = STATE(165),
    [sym__music_content] = STATE(20),
    [sym__nte_or_chrd] = STATE(61),
    [sym_beam] = STATE(20),
    [sym_note_construct] = STATE(61),
    [sym__chord_cstrct] = STATE(61),
    [sym_note] = STATE(127),
    [sym__pitch] = STATE(91),
    [sym_multimeasure_rest] = STATE(20),
    [sym_grace_note] = STATE(70),
    [sym_chord_symbol] = STATE(158),
    [sym_decoration] = STATE(185),
    [sym_nth_ending_barline] = STATE(30),
    [sym_generic_bar_line] = STATE(20),
    [sym_first_repeat_bar] = STATE(30),
    [sym_second_repeat_bar] = STATE(30),
    [sym_lyric_line] = STATE(176),
    [sym_lyric_section] = STATE(210),
    [sym_symbol] = STATE(20),
    [aux_sym_note_construct_repeat1] = STATE(70),
    [aux_sym_lyric_section_repeat1] = STATE(176),
    [ts_builtin_sym_end] = ACTIONS(186),
    [sym__NL] = ACTIONS(188),
    [aux_sym__music_content_token1] = ACTIONS(23),
    [sym_slur_open] = ACTIONS(25),
    [sym_slur_close] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(29),
    [sym_alteration] = ACTIONS(31),
    [sym_note_letter] = ACTIONS(33),
    [sym_rest] = ACTIONS(35),
    [anon_sym_Z] = ACTIONS(37),
    [anon_sym_X] = ACTIONS(39),
    [aux_sym_grace_note_token1] = ACTIONS(41),
    [aux_sym_chord_symbol_token1] = ACTIONS(43),
    [sym_annotation] = ACTIONS(27),
    [sym_tuplet_marker] = ACTIONS(45),
    [sym_decoration_shorthand] = ACTIONS(190),
    [sym_bar_line] = ACTIONS(49),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(51),
    [sym_thin_double_bar_line] = ACTIONS(51),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(51),
    [sym_start_of_repeated_section] = ACTIONS(53),
    [sym_end_of_repeated_section] = ACTIONS(55),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(53),
    [anon_sym_BANGtrill_BANG] = ACTIONS(57),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(57),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(57),
    [anon_sym_BANGmordent_BANG] = ACTIONS(57),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(57),
    [anon_sym_BANGroll_BANG] = ACTIONS(57),
    [anon_sym_BANGturn_BANG] = ACTIONS(57),
    [anon_sym_BANGturnx_BANG] = ACTIONS(57),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(57),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(57),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(57),
    [anon_sym_BANG_GT_BANG] = ACTIONS(57),
    [anon_sym_BANGaccent_BANG] = ACTIONS(57),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(57),
    [anon_sym_BANGfermata_BANG] = ACTIONS(57),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(57),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(57),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(57),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(57),
    [anon_sym_BANGplus_BANG] = ACTIONS(57),
    [anon_sym_BANGsnap_BANG] = ACTIONS(57),
    [anon_sym_BANGslide_BANG] = ACTIONS(57),
    [anon_sym_BANGwedge_BANG] = ACTIONS(57),
    [anon_sym_BANGupbow_BANG] = ACTIONS(57),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(57),
    [anon_sym_BANGopen_BANG] = ACTIONS(57),
    [anon_sym_BANGthumb_BANG] = ACTIONS(57),
    [anon_sym_BANGbreath_BANG] = ACTIONS(57),
    [anon_sym_BANGpppp_BANG] = ACTIONS(57),
    [anon_sym_BANGppp_BANG] = ACTIONS(57),
    [anon_sym_BANGpp_BANG] = ACTIONS(57),
    [anon_sym_BANGp_BANG] = ACTIONS(57),
    [anon_sym_BANGmp_BANG] = ACTIONS(57),
    [anon_sym_BANGmf_BANG] = ACTIONS(57),
    [anon_sym_BANGf_BANG] = ACTIONS(57),
    [anon_sym_BANGff_BANG] = ACTIONS(57),
    [anon_sym_BANGfff_BANG] = ACTIONS(57),
    [anon_sym_BANGffff_BANG] = ACTIONS(57),
    [anon_sym_BANGsfz_BANG] = ACTIONS(57),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(57),
    [anon_sym_BANGsegno_BANG] = ACTIONS(57),
    [anon_sym_BANGcoda_BANG] = ACTIONS(57),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(57),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(57),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(57),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(57),
    [anon_sym_BANGfine_BANG] = ACTIONS(57),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(57),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(57),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(57),
    [anon_sym_X_COLON] = ACTIONS(186),
    [sym_words_postbody] = ACTIONS(192),
  },
  [12] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(194),
    [sym__NL] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_COMMENT] = ACTIONS(196),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(194),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(196),
    [aux_sym__music_content_token1] = ACTIONS(196),
    [sym_slur_open] = ACTIONS(196),
    [sym_slur_close] = ACTIONS(194),
    [anon_sym_LBRACK] = ACTIONS(196),
    [sym_alteration] = ACTIONS(194),
    [sym_note_letter] = ACTIONS(194),
    [sym_rest] = ACTIONS(194),
    [anon_sym_Z] = ACTIONS(194),
    [anon_sym_X] = ACTIONS(196),
    [aux_sym_grace_note_token1] = ACTIONS(194),
    [aux_sym_chord_symbol_token1] = ACTIONS(196),
    [sym_annotation] = ACTIONS(194),
    [sym_tuplet_marker] = ACTIONS(194),
    [sym_decoration_shorthand] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(198),
    [sym_bar_line] = ACTIONS(196),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(194),
    [sym_thin_double_bar_line] = ACTIONS(194),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(194),
    [sym_start_of_repeated_section] = ACTIONS(194),
    [sym_end_of_repeated_section] = ACTIONS(194),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(194),
    [anon_sym_BANGtrill_BANG] = ACTIONS(194),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(194),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(194),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(194),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(194),
    [anon_sym_BANGmordent_BANG] = ACTIONS(194),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(194),
    [anon_sym_BANGroll_BANG] = ACTIONS(194),
    [anon_sym_BANGturn_BANG] = ACTIONS(194),
    [anon_sym_BANGturnx_BANG] = ACTIONS(194),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(194),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(194),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(194),
    [anon_sym_BANG_GT_BANG] = ACTIONS(194),
    [anon_sym_BANGaccent_BANG] = ACTIONS(194),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(194),
    [anon_sym_BANGfermata_BANG] = ACTIONS(194),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(194),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(194),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(194),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(194),
    [anon_sym_BANGplus_BANG] = ACTIONS(194),
    [anon_sym_BANGsnap_BANG] = ACTIONS(194),
    [anon_sym_BANGslide_BANG] = ACTIONS(194),
    [anon_sym_BANGwedge_BANG] = ACTIONS(194),
    [anon_sym_BANGupbow_BANG] = ACTIONS(194),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(194),
    [anon_sym_BANGopen_BANG] = ACTIONS(194),
    [anon_sym_BANGthumb_BANG] = ACTIONS(194),
    [anon_sym_BANGbreath_BANG] = ACTIONS(194),
    [anon_sym_BANGpppp_BANG] = ACTIONS(194),
    [anon_sym_BANGppp_BANG] = ACTIONS(194),
    [anon_sym_BANGpp_BANG] = ACTIONS(194),
    [anon_sym_BANGp_BANG] = ACTIONS(194),
    [anon_sym_BANGmp_BANG] = ACTIONS(194),
    [anon_sym_BANGmf_BANG] = ACTIONS(194),
    [anon_sym_BANGf_BANG] = ACTIONS(194),
    [anon_sym_BANGff_BANG] = ACTIONS(194),
    [anon_sym_BANGfff_BANG] = ACTIONS(194),
    [anon_sym_BANGffff_BANG] = ACTIONS(194),
    [anon_sym_BANGsfz_BANG] = ACTIONS(194),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(194),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(194),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(194),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(194),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(194),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(194),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(194),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(194),
    [anon_sym_BANGsegno_BANG] = ACTIONS(194),
    [anon_sym_BANGcoda_BANG] = ACTIONS(194),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(194),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(194),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(194),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(194),
    [anon_sym_BANGfine_BANG] = ACTIONS(194),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(194),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(194),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(194),
    [sym_parts_line] = ACTIONS(194),
    [sym_instruction] = ACTIONS(194),
    [sym_key] = ACTIONS(194),
    [sym_macros] = ACTIONS(194),
    [sym_meter] = ACTIONS(194),
    [sym_notes] = ACTIONS(194),
    [anon_sym_X_COLON] = ACTIONS(194),
    [sym_remark] = ACTIONS(194),
    [sym_rhythm_line] = ACTIONS(194),
    [anon_sym_s_COLON] = ACTIONS(194),
    [sym_tempo] = ACTIONS(194),
    [sym_tune_title] = ACTIONS(194),
    [sym_unit_note_length] = ACTIONS(194),
    [anon_sym_U_COLON] = ACTIONS(194),
    [sym_voice] = ACTIONS(194),
    [anon_sym_w_COLON] = ACTIONS(194),
    [sym_words_postbody] = ACTIONS(194),
  },
  [13] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym__NL] = ACTIONS(202),
    [sym_COMMENT] = ACTIONS(202),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(200),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(202),
    [aux_sym__music_content_token1] = ACTIONS(202),
    [aux_sym_beam_token1] = ACTIONS(204),
    [sym_slur_open] = ACTIONS(202),
    [sym_slur_close] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(202),
    [sym_alteration] = ACTIONS(200),
    [sym_note_letter] = ACTIONS(200),
    [sym_rest] = ACTIONS(200),
    [anon_sym_Z] = ACTIONS(200),
    [anon_sym_X] = ACTIONS(202),
    [aux_sym_grace_note_token1] = ACTIONS(200),
    [aux_sym_chord_symbol_token1] = ACTIONS(202),
    [sym_annotation] = ACTIONS(200),
    [sym_tuplet_marker] = ACTIONS(200),
    [sym_decoration_shorthand] = ACTIONS(202),
    [sym_bar_line] = ACTIONS(202),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(200),
    [sym_thin_double_bar_line] = ACTIONS(200),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(200),
    [sym_start_of_repeated_section] = ACTIONS(200),
    [sym_end_of_repeated_section] = ACTIONS(200),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(200),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(206),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(208),
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
    [anon_sym_X_COLON] = ACTIONS(200),
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
  [14] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym__NL] = ACTIONS(202),
    [sym_COMMENT] = ACTIONS(202),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(200),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(202),
    [aux_sym__music_content_token1] = ACTIONS(202),
    [aux_sym_beam_token1] = ACTIONS(204),
    [sym_slur_open] = ACTIONS(202),
    [sym_slur_close] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(202),
    [sym_alteration] = ACTIONS(200),
    [sym_note_letter] = ACTIONS(200),
    [sym_rest] = ACTIONS(200),
    [anon_sym_Z] = ACTIONS(200),
    [anon_sym_X] = ACTIONS(202),
    [aux_sym_grace_note_token1] = ACTIONS(200),
    [aux_sym_chord_symbol_token1] = ACTIONS(202),
    [sym_annotation] = ACTIONS(200),
    [sym_tuplet_marker] = ACTIONS(200),
    [sym_decoration_shorthand] = ACTIONS(202),
    [sym_bar_line] = ACTIONS(202),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(200),
    [sym_thin_double_bar_line] = ACTIONS(200),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(200),
    [sym_start_of_repeated_section] = ACTIONS(200),
    [sym_end_of_repeated_section] = ACTIONS(200),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(200),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(210),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(212),
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
    [anon_sym_X_COLON] = ACTIONS(200),
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
  [15] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(12),
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym__NL] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_COMMENT] = ACTIONS(216),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(214),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(216),
    [aux_sym__music_content_token1] = ACTIONS(216),
    [sym_slur_open] = ACTIONS(216),
    [sym_slur_close] = ACTIONS(214),
    [anon_sym_LBRACK] = ACTIONS(216),
    [sym_alteration] = ACTIONS(214),
    [sym_note_letter] = ACTIONS(214),
    [sym_rest] = ACTIONS(214),
    [anon_sym_Z] = ACTIONS(214),
    [anon_sym_X] = ACTIONS(216),
    [aux_sym_grace_note_token1] = ACTIONS(214),
    [aux_sym_chord_symbol_token1] = ACTIONS(216),
    [sym_annotation] = ACTIONS(214),
    [sym_tuplet_marker] = ACTIONS(214),
    [sym_decoration_shorthand] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(198),
    [sym_bar_line] = ACTIONS(216),
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
    [anon_sym_X_COLON] = ACTIONS(214),
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
  [16] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym__NL] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(222),
    [sym_COMMENT] = ACTIONS(220),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(218),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(220),
    [aux_sym__music_content_token1] = ACTIONS(220),
    [sym_slur_open] = ACTIONS(220),
    [sym_slur_close] = ACTIONS(218),
    [anon_sym_LBRACK] = ACTIONS(220),
    [sym_alteration] = ACTIONS(218),
    [sym_note_letter] = ACTIONS(218),
    [sym_rest] = ACTIONS(218),
    [anon_sym_Z] = ACTIONS(218),
    [anon_sym_X] = ACTIONS(220),
    [aux_sym_grace_note_token1] = ACTIONS(218),
    [aux_sym_chord_symbol_token1] = ACTIONS(220),
    [sym_annotation] = ACTIONS(218),
    [sym_tuplet_marker] = ACTIONS(218),
    [sym_decoration_shorthand] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(222),
    [sym_bar_line] = ACTIONS(220),
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
    [anon_sym_X_COLON] = ACTIONS(218),
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
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(218),
    [sym__NL] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(218),
    [sym_COMMENT] = ACTIONS(220),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(218),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(220),
    [aux_sym__music_content_token1] = ACTIONS(220),
    [sym_slur_open] = ACTIONS(220),
    [sym_slur_close] = ACTIONS(218),
    [anon_sym_LBRACK] = ACTIONS(220),
    [sym_alteration] = ACTIONS(218),
    [sym_note_letter] = ACTIONS(218),
    [sym_rest] = ACTIONS(218),
    [anon_sym_Z] = ACTIONS(218),
    [anon_sym_X] = ACTIONS(220),
    [aux_sym_grace_note_token1] = ACTIONS(218),
    [aux_sym_chord_symbol_token1] = ACTIONS(220),
    [sym_annotation] = ACTIONS(218),
    [sym_tuplet_marker] = ACTIONS(218),
    [sym_decoration_shorthand] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(218),
    [sym_bar_line] = ACTIONS(220),
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
    [anon_sym_X_COLON] = ACTIONS(218),
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
  [18] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym__NL] = ACTIONS(202),
    [sym_COMMENT] = ACTIONS(202),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(200),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(202),
    [aux_sym__music_content_token1] = ACTIONS(202),
    [aux_sym_beam_token1] = ACTIONS(204),
    [sym_slur_open] = ACTIONS(202),
    [sym_slur_close] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(202),
    [sym_alteration] = ACTIONS(200),
    [sym_note_letter] = ACTIONS(200),
    [sym_rest] = ACTIONS(200),
    [anon_sym_Z] = ACTIONS(200),
    [anon_sym_X] = ACTIONS(202),
    [aux_sym_grace_note_token1] = ACTIONS(200),
    [aux_sym_chord_symbol_token1] = ACTIONS(202),
    [sym_annotation] = ACTIONS(200),
    [sym_tuplet_marker] = ACTIONS(200),
    [sym_decoration_shorthand] = ACTIONS(202),
    [sym_bar_line] = ACTIONS(202),
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
    [anon_sym_X_COLON] = ACTIONS(200),
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
    [ts_builtin_sym_end] = ACTIONS(225),
    [sym__NL] = ACTIONS(227),
    [sym_COMMENT] = ACTIONS(227),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(225),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(227),
    [aux_sym__music_content_token1] = ACTIONS(227),
    [sym_slur_open] = ACTIONS(227),
    [sym_slur_close] = ACTIONS(225),
    [anon_sym_LBRACK] = ACTIONS(227),
    [sym_alteration] = ACTIONS(225),
    [sym_note_letter] = ACTIONS(225),
    [sym_rest] = ACTIONS(225),
    [anon_sym_Z] = ACTIONS(225),
    [anon_sym_X] = ACTIONS(227),
    [aux_sym_grace_note_token1] = ACTIONS(225),
    [aux_sym_chord_symbol_token1] = ACTIONS(227),
    [sym_annotation] = ACTIONS(225),
    [sym_tuplet_marker] = ACTIONS(225),
    [sym_decoration_shorthand] = ACTIONS(227),
    [sym_bar_line] = ACTIONS(227),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(225),
    [sym_thin_double_bar_line] = ACTIONS(225),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(225),
    [sym_start_of_repeated_section] = ACTIONS(225),
    [sym_end_of_repeated_section] = ACTIONS(225),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(225),
    [anon_sym_BANGtrill_BANG] = ACTIONS(225),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(225),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(225),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(225),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(225),
    [anon_sym_BANGmordent_BANG] = ACTIONS(225),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(225),
    [anon_sym_BANGroll_BANG] = ACTIONS(225),
    [anon_sym_BANGturn_BANG] = ACTIONS(225),
    [anon_sym_BANGturnx_BANG] = ACTIONS(225),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(225),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(225),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(225),
    [anon_sym_BANG_GT_BANG] = ACTIONS(225),
    [anon_sym_BANGaccent_BANG] = ACTIONS(225),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(225),
    [anon_sym_BANGfermata_BANG] = ACTIONS(225),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(225),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(225),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(225),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(225),
    [anon_sym_BANGplus_BANG] = ACTIONS(225),
    [anon_sym_BANGsnap_BANG] = ACTIONS(225),
    [anon_sym_BANGslide_BANG] = ACTIONS(225),
    [anon_sym_BANGwedge_BANG] = ACTIONS(225),
    [anon_sym_BANGupbow_BANG] = ACTIONS(225),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(225),
    [anon_sym_BANGopen_BANG] = ACTIONS(225),
    [anon_sym_BANGthumb_BANG] = ACTIONS(225),
    [anon_sym_BANGbreath_BANG] = ACTIONS(225),
    [anon_sym_BANGpppp_BANG] = ACTIONS(225),
    [anon_sym_BANGppp_BANG] = ACTIONS(225),
    [anon_sym_BANGpp_BANG] = ACTIONS(225),
    [anon_sym_BANGp_BANG] = ACTIONS(225),
    [anon_sym_BANGmp_BANG] = ACTIONS(225),
    [anon_sym_BANGmf_BANG] = ACTIONS(225),
    [anon_sym_BANGf_BANG] = ACTIONS(225),
    [anon_sym_BANGff_BANG] = ACTIONS(225),
    [anon_sym_BANGfff_BANG] = ACTIONS(225),
    [anon_sym_BANGffff_BANG] = ACTIONS(225),
    [anon_sym_BANGsfz_BANG] = ACTIONS(225),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(225),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(225),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(225),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(225),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(225),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(225),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(225),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(225),
    [anon_sym_BANGsegno_BANG] = ACTIONS(225),
    [anon_sym_BANGcoda_BANG] = ACTIONS(225),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(225),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(225),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(225),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(225),
    [anon_sym_BANGfine_BANG] = ACTIONS(225),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(225),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(225),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(225),
    [sym_parts_line] = ACTIONS(225),
    [sym_instruction] = ACTIONS(225),
    [sym_key] = ACTIONS(225),
    [sym_macros] = ACTIONS(225),
    [sym_meter] = ACTIONS(225),
    [sym_notes] = ACTIONS(225),
    [anon_sym_X_COLON] = ACTIONS(225),
    [sym_remark] = ACTIONS(225),
    [sym_rhythm_line] = ACTIONS(225),
    [anon_sym_s_COLON] = ACTIONS(225),
    [sym_tempo] = ACTIONS(225),
    [sym_tune_title] = ACTIONS(225),
    [sym_unit_note_length] = ACTIONS(225),
    [anon_sym_U_COLON] = ACTIONS(225),
    [sym_voice] = ACTIONS(225),
    [anon_sym_w_COLON] = ACTIONS(225),
    [sym_words_postbody] = ACTIONS(225),
  },
  [20] = {
    [ts_builtin_sym_end] = ACTIONS(229),
    [sym__NL] = ACTIONS(231),
    [sym_COMMENT] = ACTIONS(231),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(229),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(233),
    [aux_sym__music_content_token1] = ACTIONS(231),
    [sym_slur_open] = ACTIONS(231),
    [sym_slur_close] = ACTIONS(229),
    [anon_sym_LBRACK] = ACTIONS(231),
    [sym_alteration] = ACTIONS(229),
    [sym_note_letter] = ACTIONS(229),
    [sym_rest] = ACTIONS(229),
    [anon_sym_Z] = ACTIONS(229),
    [anon_sym_X] = ACTIONS(231),
    [aux_sym_grace_note_token1] = ACTIONS(229),
    [aux_sym_chord_symbol_token1] = ACTIONS(231),
    [sym_annotation] = ACTIONS(229),
    [sym_tuplet_marker] = ACTIONS(229),
    [sym_decoration_shorthand] = ACTIONS(231),
    [sym_bar_line] = ACTIONS(231),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(229),
    [sym_thin_double_bar_line] = ACTIONS(229),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(229),
    [sym_start_of_repeated_section] = ACTIONS(229),
    [sym_end_of_repeated_section] = ACTIONS(229),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(229),
    [anon_sym_BANGtrill_BANG] = ACTIONS(229),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(229),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(229),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(229),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(229),
    [anon_sym_BANGmordent_BANG] = ACTIONS(229),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(229),
    [anon_sym_BANGroll_BANG] = ACTIONS(229),
    [anon_sym_BANGturn_BANG] = ACTIONS(229),
    [anon_sym_BANGturnx_BANG] = ACTIONS(229),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(229),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(229),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(229),
    [anon_sym_BANG_GT_BANG] = ACTIONS(229),
    [anon_sym_BANGaccent_BANG] = ACTIONS(229),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(229),
    [anon_sym_BANGfermata_BANG] = ACTIONS(229),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(229),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(229),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(229),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(229),
    [anon_sym_BANGplus_BANG] = ACTIONS(229),
    [anon_sym_BANGsnap_BANG] = ACTIONS(229),
    [anon_sym_BANGslide_BANG] = ACTIONS(229),
    [anon_sym_BANGwedge_BANG] = ACTIONS(229),
    [anon_sym_BANGupbow_BANG] = ACTIONS(229),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(229),
    [anon_sym_BANGopen_BANG] = ACTIONS(229),
    [anon_sym_BANGthumb_BANG] = ACTIONS(229),
    [anon_sym_BANGbreath_BANG] = ACTIONS(229),
    [anon_sym_BANGpppp_BANG] = ACTIONS(229),
    [anon_sym_BANGppp_BANG] = ACTIONS(229),
    [anon_sym_BANGpp_BANG] = ACTIONS(229),
    [anon_sym_BANGp_BANG] = ACTIONS(229),
    [anon_sym_BANGmp_BANG] = ACTIONS(229),
    [anon_sym_BANGmf_BANG] = ACTIONS(229),
    [anon_sym_BANGf_BANG] = ACTIONS(229),
    [anon_sym_BANGff_BANG] = ACTIONS(229),
    [anon_sym_BANGfff_BANG] = ACTIONS(229),
    [anon_sym_BANGffff_BANG] = ACTIONS(229),
    [anon_sym_BANGsfz_BANG] = ACTIONS(229),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(229),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(229),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(229),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(229),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(229),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(229),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(229),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(229),
    [anon_sym_BANGsegno_BANG] = ACTIONS(229),
    [anon_sym_BANGcoda_BANG] = ACTIONS(229),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(229),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(229),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(229),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(229),
    [anon_sym_BANGfine_BANG] = ACTIONS(229),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(229),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(229),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(229),
    [sym_parts_line] = ACTIONS(229),
    [sym_instruction] = ACTIONS(229),
    [sym_key] = ACTIONS(229),
    [sym_macros] = ACTIONS(229),
    [sym_meter] = ACTIONS(229),
    [sym_notes] = ACTIONS(229),
    [anon_sym_X_COLON] = ACTIONS(229),
    [sym_remark] = ACTIONS(229),
    [sym_rhythm_line] = ACTIONS(229),
    [anon_sym_s_COLON] = ACTIONS(229),
    [sym_tempo] = ACTIONS(229),
    [sym_tune_title] = ACTIONS(229),
    [sym_unit_note_length] = ACTIONS(229),
    [anon_sym_U_COLON] = ACTIONS(229),
    [sym_voice] = ACTIONS(229),
    [anon_sym_w_COLON] = ACTIONS(229),
    [sym_words_postbody] = ACTIONS(229),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(235),
    [sym__NL] = ACTIONS(237),
    [sym_COMMENT] = ACTIONS(237),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(235),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(237),
    [aux_sym__music_content_token1] = ACTIONS(237),
    [sym_slur_open] = ACTIONS(237),
    [sym_slur_close] = ACTIONS(235),
    [anon_sym_LBRACK] = ACTIONS(237),
    [sym_alteration] = ACTIONS(235),
    [sym_note_letter] = ACTIONS(235),
    [sym_rest] = ACTIONS(235),
    [anon_sym_Z] = ACTIONS(235),
    [anon_sym_X] = ACTIONS(237),
    [aux_sym_grace_note_token1] = ACTIONS(235),
    [aux_sym_chord_symbol_token1] = ACTIONS(237),
    [sym_annotation] = ACTIONS(235),
    [sym_tuplet_marker] = ACTIONS(235),
    [sym_decoration_shorthand] = ACTIONS(237),
    [sym_bar_line] = ACTIONS(237),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(235),
    [sym_thin_double_bar_line] = ACTIONS(235),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(235),
    [sym_start_of_repeated_section] = ACTIONS(235),
    [sym_end_of_repeated_section] = ACTIONS(235),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(235),
    [anon_sym_BANGtrill_BANG] = ACTIONS(235),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(235),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(235),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(235),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(235),
    [anon_sym_BANGmordent_BANG] = ACTIONS(235),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(235),
    [anon_sym_BANGroll_BANG] = ACTIONS(235),
    [anon_sym_BANGturn_BANG] = ACTIONS(235),
    [anon_sym_BANGturnx_BANG] = ACTIONS(235),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(235),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(235),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(235),
    [anon_sym_BANG_GT_BANG] = ACTIONS(235),
    [anon_sym_BANGaccent_BANG] = ACTIONS(235),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(235),
    [anon_sym_BANGfermata_BANG] = ACTIONS(235),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(235),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(235),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(235),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(235),
    [anon_sym_BANGplus_BANG] = ACTIONS(235),
    [anon_sym_BANGsnap_BANG] = ACTIONS(235),
    [anon_sym_BANGslide_BANG] = ACTIONS(235),
    [anon_sym_BANGwedge_BANG] = ACTIONS(235),
    [anon_sym_BANGupbow_BANG] = ACTIONS(235),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(235),
    [anon_sym_BANGopen_BANG] = ACTIONS(235),
    [anon_sym_BANGthumb_BANG] = ACTIONS(235),
    [anon_sym_BANGbreath_BANG] = ACTIONS(235),
    [anon_sym_BANGpppp_BANG] = ACTIONS(235),
    [anon_sym_BANGppp_BANG] = ACTIONS(235),
    [anon_sym_BANGpp_BANG] = ACTIONS(235),
    [anon_sym_BANGp_BANG] = ACTIONS(235),
    [anon_sym_BANGmp_BANG] = ACTIONS(235),
    [anon_sym_BANGmf_BANG] = ACTIONS(235),
    [anon_sym_BANGf_BANG] = ACTIONS(235),
    [anon_sym_BANGff_BANG] = ACTIONS(235),
    [anon_sym_BANGfff_BANG] = ACTIONS(235),
    [anon_sym_BANGffff_BANG] = ACTIONS(235),
    [anon_sym_BANGsfz_BANG] = ACTIONS(235),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(235),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(235),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(235),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(235),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(235),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(235),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(235),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(235),
    [anon_sym_BANGsegno_BANG] = ACTIONS(235),
    [anon_sym_BANGcoda_BANG] = ACTIONS(235),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(235),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(235),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(235),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(235),
    [anon_sym_BANGfine_BANG] = ACTIONS(235),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(235),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(235),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(235),
    [sym_parts_line] = ACTIONS(235),
    [sym_instruction] = ACTIONS(235),
    [sym_key] = ACTIONS(235),
    [sym_macros] = ACTIONS(235),
    [sym_meter] = ACTIONS(235),
    [sym_notes] = ACTIONS(235),
    [anon_sym_X_COLON] = ACTIONS(235),
    [sym_remark] = ACTIONS(235),
    [sym_rhythm_line] = ACTIONS(235),
    [anon_sym_s_COLON] = ACTIONS(235),
    [sym_tempo] = ACTIONS(235),
    [sym_tune_title] = ACTIONS(235),
    [sym_unit_note_length] = ACTIONS(235),
    [anon_sym_U_COLON] = ACTIONS(235),
    [sym_voice] = ACTIONS(235),
    [anon_sym_w_COLON] = ACTIONS(235),
    [sym_words_postbody] = ACTIONS(235),
  },
  [22] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym__NL] = ACTIONS(241),
    [sym_COMMENT] = ACTIONS(241),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(239),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(241),
    [aux_sym__music_content_token1] = ACTIONS(241),
    [sym_slur_open] = ACTIONS(241),
    [sym_slur_close] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_alteration] = ACTIONS(239),
    [sym_note_letter] = ACTIONS(239),
    [sym_rest] = ACTIONS(239),
    [anon_sym_Z] = ACTIONS(239),
    [anon_sym_X] = ACTIONS(241),
    [aux_sym_grace_note_token1] = ACTIONS(239),
    [aux_sym_chord_symbol_token1] = ACTIONS(241),
    [sym_annotation] = ACTIONS(239),
    [sym_tuplet_marker] = ACTIONS(239),
    [sym_decoration_shorthand] = ACTIONS(241),
    [sym_bar_line] = ACTIONS(241),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(239),
    [sym_thin_double_bar_line] = ACTIONS(239),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(239),
    [sym_start_of_repeated_section] = ACTIONS(239),
    [sym_end_of_repeated_section] = ACTIONS(239),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(239),
    [anon_sym_BANGtrill_BANG] = ACTIONS(239),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(239),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(239),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(239),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(239),
    [anon_sym_BANGmordent_BANG] = ACTIONS(239),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(239),
    [anon_sym_BANGroll_BANG] = ACTIONS(239),
    [anon_sym_BANGturn_BANG] = ACTIONS(239),
    [anon_sym_BANGturnx_BANG] = ACTIONS(239),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(239),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(239),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(239),
    [anon_sym_BANG_GT_BANG] = ACTIONS(239),
    [anon_sym_BANGaccent_BANG] = ACTIONS(239),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(239),
    [anon_sym_BANGfermata_BANG] = ACTIONS(239),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(239),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(239),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(239),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(239),
    [anon_sym_BANGplus_BANG] = ACTIONS(239),
    [anon_sym_BANGsnap_BANG] = ACTIONS(239),
    [anon_sym_BANGslide_BANG] = ACTIONS(239),
    [anon_sym_BANGwedge_BANG] = ACTIONS(239),
    [anon_sym_BANGupbow_BANG] = ACTIONS(239),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(239),
    [anon_sym_BANGopen_BANG] = ACTIONS(239),
    [anon_sym_BANGthumb_BANG] = ACTIONS(239),
    [anon_sym_BANGbreath_BANG] = ACTIONS(239),
    [anon_sym_BANGpppp_BANG] = ACTIONS(239),
    [anon_sym_BANGppp_BANG] = ACTIONS(239),
    [anon_sym_BANGpp_BANG] = ACTIONS(239),
    [anon_sym_BANGp_BANG] = ACTIONS(239),
    [anon_sym_BANGmp_BANG] = ACTIONS(239),
    [anon_sym_BANGmf_BANG] = ACTIONS(239),
    [anon_sym_BANGf_BANG] = ACTIONS(239),
    [anon_sym_BANGff_BANG] = ACTIONS(239),
    [anon_sym_BANGfff_BANG] = ACTIONS(239),
    [anon_sym_BANGffff_BANG] = ACTIONS(239),
    [anon_sym_BANGsfz_BANG] = ACTIONS(239),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(239),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(239),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(239),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(239),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(239),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(239),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(239),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(239),
    [anon_sym_BANGsegno_BANG] = ACTIONS(239),
    [anon_sym_BANGcoda_BANG] = ACTIONS(239),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(239),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(239),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(239),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(239),
    [anon_sym_BANGfine_BANG] = ACTIONS(239),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(239),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(239),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(239),
    [sym_parts_line] = ACTIONS(239),
    [sym_instruction] = ACTIONS(239),
    [sym_key] = ACTIONS(239),
    [sym_macros] = ACTIONS(239),
    [sym_meter] = ACTIONS(239),
    [sym_notes] = ACTIONS(239),
    [anon_sym_X_COLON] = ACTIONS(239),
    [sym_remark] = ACTIONS(239),
    [sym_rhythm_line] = ACTIONS(239),
    [anon_sym_s_COLON] = ACTIONS(239),
    [sym_tempo] = ACTIONS(239),
    [sym_tune_title] = ACTIONS(239),
    [sym_unit_note_length] = ACTIONS(239),
    [anon_sym_U_COLON] = ACTIONS(239),
    [sym_voice] = ACTIONS(239),
    [anon_sym_w_COLON] = ACTIONS(239),
    [sym_words_postbody] = ACTIONS(239),
  },
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym__NL] = ACTIONS(245),
    [sym_COMMENT] = ACTIONS(245),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(243),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(245),
    [aux_sym__music_content_token1] = ACTIONS(245),
    [sym_slur_open] = ACTIONS(245),
    [sym_slur_close] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_alteration] = ACTIONS(243),
    [sym_note_letter] = ACTIONS(243),
    [sym_rest] = ACTIONS(243),
    [anon_sym_Z] = ACTIONS(243),
    [anon_sym_X] = ACTIONS(245),
    [aux_sym_grace_note_token1] = ACTIONS(243),
    [aux_sym_chord_symbol_token1] = ACTIONS(245),
    [sym_annotation] = ACTIONS(243),
    [sym_tuplet_marker] = ACTIONS(243),
    [sym_decoration_shorthand] = ACTIONS(245),
    [sym_bar_line] = ACTIONS(245),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(243),
    [sym_thin_double_bar_line] = ACTIONS(243),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(243),
    [sym_start_of_repeated_section] = ACTIONS(243),
    [sym_end_of_repeated_section] = ACTIONS(243),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(243),
    [anon_sym_BANGtrill_BANG] = ACTIONS(243),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(243),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(243),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(243),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(243),
    [anon_sym_BANGmordent_BANG] = ACTIONS(243),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(243),
    [anon_sym_BANGroll_BANG] = ACTIONS(243),
    [anon_sym_BANGturn_BANG] = ACTIONS(243),
    [anon_sym_BANGturnx_BANG] = ACTIONS(243),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(243),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(243),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(243),
    [anon_sym_BANG_GT_BANG] = ACTIONS(243),
    [anon_sym_BANGaccent_BANG] = ACTIONS(243),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(243),
    [anon_sym_BANGfermata_BANG] = ACTIONS(243),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(243),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(243),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(243),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(243),
    [anon_sym_BANGplus_BANG] = ACTIONS(243),
    [anon_sym_BANGsnap_BANG] = ACTIONS(243),
    [anon_sym_BANGslide_BANG] = ACTIONS(243),
    [anon_sym_BANGwedge_BANG] = ACTIONS(243),
    [anon_sym_BANGupbow_BANG] = ACTIONS(243),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(243),
    [anon_sym_BANGopen_BANG] = ACTIONS(243),
    [anon_sym_BANGthumb_BANG] = ACTIONS(243),
    [anon_sym_BANGbreath_BANG] = ACTIONS(243),
    [anon_sym_BANGpppp_BANG] = ACTIONS(243),
    [anon_sym_BANGppp_BANG] = ACTIONS(243),
    [anon_sym_BANGpp_BANG] = ACTIONS(243),
    [anon_sym_BANGp_BANG] = ACTIONS(243),
    [anon_sym_BANGmp_BANG] = ACTIONS(243),
    [anon_sym_BANGmf_BANG] = ACTIONS(243),
    [anon_sym_BANGf_BANG] = ACTIONS(243),
    [anon_sym_BANGff_BANG] = ACTIONS(243),
    [anon_sym_BANGfff_BANG] = ACTIONS(243),
    [anon_sym_BANGffff_BANG] = ACTIONS(243),
    [anon_sym_BANGsfz_BANG] = ACTIONS(243),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(243),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(243),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(243),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(243),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(243),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(243),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(243),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(243),
    [anon_sym_BANGsegno_BANG] = ACTIONS(243),
    [anon_sym_BANGcoda_BANG] = ACTIONS(243),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(243),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(243),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(243),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(243),
    [anon_sym_BANGfine_BANG] = ACTIONS(243),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(243),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(243),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(243),
    [sym_parts_line] = ACTIONS(243),
    [sym_instruction] = ACTIONS(243),
    [sym_key] = ACTIONS(243),
    [sym_macros] = ACTIONS(243),
    [sym_meter] = ACTIONS(243),
    [sym_notes] = ACTIONS(243),
    [anon_sym_X_COLON] = ACTIONS(243),
    [sym_remark] = ACTIONS(243),
    [sym_rhythm_line] = ACTIONS(243),
    [anon_sym_s_COLON] = ACTIONS(243),
    [sym_tempo] = ACTIONS(243),
    [sym_tune_title] = ACTIONS(243),
    [sym_unit_note_length] = ACTIONS(243),
    [anon_sym_U_COLON] = ACTIONS(243),
    [sym_voice] = ACTIONS(243),
    [anon_sym_w_COLON] = ACTIONS(243),
    [sym_words_postbody] = ACTIONS(243),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym__NL] = ACTIONS(249),
    [sym_COMMENT] = ACTIONS(249),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(247),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(249),
    [aux_sym__music_content_token1] = ACTIONS(249),
    [sym_slur_open] = ACTIONS(249),
    [sym_slur_close] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [sym_alteration] = ACTIONS(247),
    [sym_note_letter] = ACTIONS(247),
    [sym_rest] = ACTIONS(247),
    [anon_sym_Z] = ACTIONS(247),
    [anon_sym_X] = ACTIONS(249),
    [aux_sym_grace_note_token1] = ACTIONS(247),
    [aux_sym_chord_symbol_token1] = ACTIONS(249),
    [sym_annotation] = ACTIONS(247),
    [sym_tuplet_marker] = ACTIONS(247),
    [sym_decoration_shorthand] = ACTIONS(249),
    [sym_bar_line] = ACTIONS(249),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(247),
    [sym_thin_double_bar_line] = ACTIONS(247),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(247),
    [sym_start_of_repeated_section] = ACTIONS(247),
    [sym_end_of_repeated_section] = ACTIONS(247),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(247),
    [anon_sym_BANGtrill_BANG] = ACTIONS(247),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(247),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(247),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(247),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(247),
    [anon_sym_BANGmordent_BANG] = ACTIONS(247),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(247),
    [anon_sym_BANGroll_BANG] = ACTIONS(247),
    [anon_sym_BANGturn_BANG] = ACTIONS(247),
    [anon_sym_BANGturnx_BANG] = ACTIONS(247),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(247),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(247),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(247),
    [anon_sym_BANG_GT_BANG] = ACTIONS(247),
    [anon_sym_BANGaccent_BANG] = ACTIONS(247),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(247),
    [anon_sym_BANGfermata_BANG] = ACTIONS(247),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(247),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(247),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(247),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(247),
    [anon_sym_BANGplus_BANG] = ACTIONS(247),
    [anon_sym_BANGsnap_BANG] = ACTIONS(247),
    [anon_sym_BANGslide_BANG] = ACTIONS(247),
    [anon_sym_BANGwedge_BANG] = ACTIONS(247),
    [anon_sym_BANGupbow_BANG] = ACTIONS(247),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(247),
    [anon_sym_BANGopen_BANG] = ACTIONS(247),
    [anon_sym_BANGthumb_BANG] = ACTIONS(247),
    [anon_sym_BANGbreath_BANG] = ACTIONS(247),
    [anon_sym_BANGpppp_BANG] = ACTIONS(247),
    [anon_sym_BANGppp_BANG] = ACTIONS(247),
    [anon_sym_BANGpp_BANG] = ACTIONS(247),
    [anon_sym_BANGp_BANG] = ACTIONS(247),
    [anon_sym_BANGmp_BANG] = ACTIONS(247),
    [anon_sym_BANGmf_BANG] = ACTIONS(247),
    [anon_sym_BANGf_BANG] = ACTIONS(247),
    [anon_sym_BANGff_BANG] = ACTIONS(247),
    [anon_sym_BANGfff_BANG] = ACTIONS(247),
    [anon_sym_BANGffff_BANG] = ACTIONS(247),
    [anon_sym_BANGsfz_BANG] = ACTIONS(247),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(247),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(247),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(247),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(247),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(247),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(247),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(247),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(247),
    [anon_sym_BANGsegno_BANG] = ACTIONS(247),
    [anon_sym_BANGcoda_BANG] = ACTIONS(247),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(247),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(247),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(247),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(247),
    [anon_sym_BANGfine_BANG] = ACTIONS(247),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(247),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(247),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(247),
    [sym_parts_line] = ACTIONS(247),
    [sym_instruction] = ACTIONS(247),
    [sym_key] = ACTIONS(247),
    [sym_macros] = ACTIONS(247),
    [sym_meter] = ACTIONS(247),
    [sym_notes] = ACTIONS(247),
    [anon_sym_X_COLON] = ACTIONS(247),
    [sym_remark] = ACTIONS(247),
    [sym_rhythm_line] = ACTIONS(247),
    [anon_sym_s_COLON] = ACTIONS(247),
    [sym_tempo] = ACTIONS(247),
    [sym_tune_title] = ACTIONS(247),
    [sym_unit_note_length] = ACTIONS(247),
    [anon_sym_U_COLON] = ACTIONS(247),
    [sym_voice] = ACTIONS(247),
    [anon_sym_w_COLON] = ACTIONS(247),
    [sym_words_postbody] = ACTIONS(247),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(251),
    [sym__NL] = ACTIONS(253),
    [sym_COMMENT] = ACTIONS(253),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(251),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(253),
    [aux_sym__music_content_token1] = ACTIONS(253),
    [sym_slur_open] = ACTIONS(253),
    [sym_slur_close] = ACTIONS(251),
    [anon_sym_LBRACK] = ACTIONS(253),
    [sym_alteration] = ACTIONS(251),
    [sym_note_letter] = ACTIONS(251),
    [sym_rest] = ACTIONS(251),
    [anon_sym_Z] = ACTIONS(251),
    [anon_sym_X] = ACTIONS(253),
    [aux_sym_grace_note_token1] = ACTIONS(251),
    [aux_sym_chord_symbol_token1] = ACTIONS(253),
    [sym_annotation] = ACTIONS(251),
    [sym_tuplet_marker] = ACTIONS(251),
    [sym_decoration_shorthand] = ACTIONS(253),
    [sym_bar_line] = ACTIONS(253),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(251),
    [sym_thin_double_bar_line] = ACTIONS(251),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(251),
    [sym_start_of_repeated_section] = ACTIONS(251),
    [sym_end_of_repeated_section] = ACTIONS(251),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(251),
    [anon_sym_BANGtrill_BANG] = ACTIONS(251),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(251),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(251),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(251),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(251),
    [anon_sym_BANGmordent_BANG] = ACTIONS(251),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(251),
    [anon_sym_BANGroll_BANG] = ACTIONS(251),
    [anon_sym_BANGturn_BANG] = ACTIONS(251),
    [anon_sym_BANGturnx_BANG] = ACTIONS(251),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(251),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(251),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(251),
    [anon_sym_BANG_GT_BANG] = ACTIONS(251),
    [anon_sym_BANGaccent_BANG] = ACTIONS(251),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(251),
    [anon_sym_BANGfermata_BANG] = ACTIONS(251),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(251),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(251),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(251),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(251),
    [anon_sym_BANGplus_BANG] = ACTIONS(251),
    [anon_sym_BANGsnap_BANG] = ACTIONS(251),
    [anon_sym_BANGslide_BANG] = ACTIONS(251),
    [anon_sym_BANGwedge_BANG] = ACTIONS(251),
    [anon_sym_BANGupbow_BANG] = ACTIONS(251),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(251),
    [anon_sym_BANGopen_BANG] = ACTIONS(251),
    [anon_sym_BANGthumb_BANG] = ACTIONS(251),
    [anon_sym_BANGbreath_BANG] = ACTIONS(251),
    [anon_sym_BANGpppp_BANG] = ACTIONS(251),
    [anon_sym_BANGppp_BANG] = ACTIONS(251),
    [anon_sym_BANGpp_BANG] = ACTIONS(251),
    [anon_sym_BANGp_BANG] = ACTIONS(251),
    [anon_sym_BANGmp_BANG] = ACTIONS(251),
    [anon_sym_BANGmf_BANG] = ACTIONS(251),
    [anon_sym_BANGf_BANG] = ACTIONS(251),
    [anon_sym_BANGff_BANG] = ACTIONS(251),
    [anon_sym_BANGfff_BANG] = ACTIONS(251),
    [anon_sym_BANGffff_BANG] = ACTIONS(251),
    [anon_sym_BANGsfz_BANG] = ACTIONS(251),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(251),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(251),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(251),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(251),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(251),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(251),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(251),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(251),
    [anon_sym_BANGsegno_BANG] = ACTIONS(251),
    [anon_sym_BANGcoda_BANG] = ACTIONS(251),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(251),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(251),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(251),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(251),
    [anon_sym_BANGfine_BANG] = ACTIONS(251),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(251),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(251),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(251),
    [sym_parts_line] = ACTIONS(251),
    [sym_instruction] = ACTIONS(251),
    [sym_key] = ACTIONS(251),
    [sym_macros] = ACTIONS(251),
    [sym_meter] = ACTIONS(251),
    [sym_notes] = ACTIONS(251),
    [anon_sym_X_COLON] = ACTIONS(251),
    [sym_remark] = ACTIONS(251),
    [sym_rhythm_line] = ACTIONS(251),
    [anon_sym_s_COLON] = ACTIONS(251),
    [sym_tempo] = ACTIONS(251),
    [sym_tune_title] = ACTIONS(251),
    [sym_unit_note_length] = ACTIONS(251),
    [anon_sym_U_COLON] = ACTIONS(251),
    [sym_voice] = ACTIONS(251),
    [anon_sym_w_COLON] = ACTIONS(251),
    [sym_words_postbody] = ACTIONS(251),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(255),
    [sym__NL] = ACTIONS(257),
    [sym_COMMENT] = ACTIONS(257),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(255),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(257),
    [aux_sym__music_content_token1] = ACTIONS(257),
    [sym_slur_open] = ACTIONS(257),
    [sym_slur_close] = ACTIONS(255),
    [anon_sym_LBRACK] = ACTIONS(257),
    [sym_alteration] = ACTIONS(255),
    [sym_note_letter] = ACTIONS(255),
    [sym_rest] = ACTIONS(255),
    [anon_sym_Z] = ACTIONS(255),
    [anon_sym_X] = ACTIONS(257),
    [aux_sym_grace_note_token1] = ACTIONS(255),
    [aux_sym_chord_symbol_token1] = ACTIONS(257),
    [sym_annotation] = ACTIONS(255),
    [sym_tuplet_marker] = ACTIONS(255),
    [sym_decoration_shorthand] = ACTIONS(257),
    [sym_bar_line] = ACTIONS(257),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(255),
    [sym_thin_double_bar_line] = ACTIONS(255),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(255),
    [sym_start_of_repeated_section] = ACTIONS(255),
    [sym_end_of_repeated_section] = ACTIONS(255),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(255),
    [anon_sym_BANGtrill_BANG] = ACTIONS(255),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(255),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(255),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(255),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(255),
    [anon_sym_BANGmordent_BANG] = ACTIONS(255),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(255),
    [anon_sym_BANGroll_BANG] = ACTIONS(255),
    [anon_sym_BANGturn_BANG] = ACTIONS(255),
    [anon_sym_BANGturnx_BANG] = ACTIONS(255),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(255),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(255),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(255),
    [anon_sym_BANG_GT_BANG] = ACTIONS(255),
    [anon_sym_BANGaccent_BANG] = ACTIONS(255),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(255),
    [anon_sym_BANGfermata_BANG] = ACTIONS(255),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(255),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(255),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(255),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(255),
    [anon_sym_BANGplus_BANG] = ACTIONS(255),
    [anon_sym_BANGsnap_BANG] = ACTIONS(255),
    [anon_sym_BANGslide_BANG] = ACTIONS(255),
    [anon_sym_BANGwedge_BANG] = ACTIONS(255),
    [anon_sym_BANGupbow_BANG] = ACTIONS(255),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(255),
    [anon_sym_BANGopen_BANG] = ACTIONS(255),
    [anon_sym_BANGthumb_BANG] = ACTIONS(255),
    [anon_sym_BANGbreath_BANG] = ACTIONS(255),
    [anon_sym_BANGpppp_BANG] = ACTIONS(255),
    [anon_sym_BANGppp_BANG] = ACTIONS(255),
    [anon_sym_BANGpp_BANG] = ACTIONS(255),
    [anon_sym_BANGp_BANG] = ACTIONS(255),
    [anon_sym_BANGmp_BANG] = ACTIONS(255),
    [anon_sym_BANGmf_BANG] = ACTIONS(255),
    [anon_sym_BANGf_BANG] = ACTIONS(255),
    [anon_sym_BANGff_BANG] = ACTIONS(255),
    [anon_sym_BANGfff_BANG] = ACTIONS(255),
    [anon_sym_BANGffff_BANG] = ACTIONS(255),
    [anon_sym_BANGsfz_BANG] = ACTIONS(255),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(255),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(255),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(255),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(255),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(255),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(255),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(255),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(255),
    [anon_sym_BANGsegno_BANG] = ACTIONS(255),
    [anon_sym_BANGcoda_BANG] = ACTIONS(255),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(255),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(255),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(255),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(255),
    [anon_sym_BANGfine_BANG] = ACTIONS(255),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(255),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(255),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(255),
    [sym_parts_line] = ACTIONS(255),
    [sym_instruction] = ACTIONS(255),
    [sym_key] = ACTIONS(255),
    [sym_macros] = ACTIONS(255),
    [sym_meter] = ACTIONS(255),
    [sym_notes] = ACTIONS(255),
    [anon_sym_X_COLON] = ACTIONS(255),
    [sym_remark] = ACTIONS(255),
    [sym_rhythm_line] = ACTIONS(255),
    [anon_sym_s_COLON] = ACTIONS(255),
    [sym_tempo] = ACTIONS(255),
    [sym_tune_title] = ACTIONS(255),
    [sym_unit_note_length] = ACTIONS(255),
    [anon_sym_U_COLON] = ACTIONS(255),
    [sym_voice] = ACTIONS(255),
    [anon_sym_w_COLON] = ACTIONS(255),
    [sym_words_postbody] = ACTIONS(255),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(259),
    [sym__NL] = ACTIONS(261),
    [sym_COMMENT] = ACTIONS(261),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(259),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(261),
    [aux_sym__music_content_token1] = ACTIONS(261),
    [sym_slur_open] = ACTIONS(261),
    [sym_slur_close] = ACTIONS(259),
    [anon_sym_LBRACK] = ACTIONS(261),
    [sym_alteration] = ACTIONS(259),
    [sym_note_letter] = ACTIONS(259),
    [sym_rest] = ACTIONS(259),
    [anon_sym_Z] = ACTIONS(259),
    [anon_sym_X] = ACTIONS(261),
    [aux_sym_grace_note_token1] = ACTIONS(259),
    [aux_sym_chord_symbol_token1] = ACTIONS(261),
    [sym_annotation] = ACTIONS(259),
    [sym_tuplet_marker] = ACTIONS(259),
    [sym_decoration_shorthand] = ACTIONS(261),
    [sym_bar_line] = ACTIONS(261),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(259),
    [sym_thin_double_bar_line] = ACTIONS(259),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(259),
    [sym_start_of_repeated_section] = ACTIONS(259),
    [sym_end_of_repeated_section] = ACTIONS(259),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(259),
    [anon_sym_BANGtrill_BANG] = ACTIONS(259),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(259),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(259),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(259),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(259),
    [anon_sym_BANGmordent_BANG] = ACTIONS(259),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(259),
    [anon_sym_BANGroll_BANG] = ACTIONS(259),
    [anon_sym_BANGturn_BANG] = ACTIONS(259),
    [anon_sym_BANGturnx_BANG] = ACTIONS(259),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(259),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(259),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(259),
    [anon_sym_BANG_GT_BANG] = ACTIONS(259),
    [anon_sym_BANGaccent_BANG] = ACTIONS(259),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(259),
    [anon_sym_BANGfermata_BANG] = ACTIONS(259),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(259),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(259),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(259),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(259),
    [anon_sym_BANGplus_BANG] = ACTIONS(259),
    [anon_sym_BANGsnap_BANG] = ACTIONS(259),
    [anon_sym_BANGslide_BANG] = ACTIONS(259),
    [anon_sym_BANGwedge_BANG] = ACTIONS(259),
    [anon_sym_BANGupbow_BANG] = ACTIONS(259),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(259),
    [anon_sym_BANGopen_BANG] = ACTIONS(259),
    [anon_sym_BANGthumb_BANG] = ACTIONS(259),
    [anon_sym_BANGbreath_BANG] = ACTIONS(259),
    [anon_sym_BANGpppp_BANG] = ACTIONS(259),
    [anon_sym_BANGppp_BANG] = ACTIONS(259),
    [anon_sym_BANGpp_BANG] = ACTIONS(259),
    [anon_sym_BANGp_BANG] = ACTIONS(259),
    [anon_sym_BANGmp_BANG] = ACTIONS(259),
    [anon_sym_BANGmf_BANG] = ACTIONS(259),
    [anon_sym_BANGf_BANG] = ACTIONS(259),
    [anon_sym_BANGff_BANG] = ACTIONS(259),
    [anon_sym_BANGfff_BANG] = ACTIONS(259),
    [anon_sym_BANGffff_BANG] = ACTIONS(259),
    [anon_sym_BANGsfz_BANG] = ACTIONS(259),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(259),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(259),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(259),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(259),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(259),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(259),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(259),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(259),
    [anon_sym_BANGsegno_BANG] = ACTIONS(259),
    [anon_sym_BANGcoda_BANG] = ACTIONS(259),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(259),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(259),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(259),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(259),
    [anon_sym_BANGfine_BANG] = ACTIONS(259),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(259),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(259),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(259),
    [sym_parts_line] = ACTIONS(259),
    [sym_instruction] = ACTIONS(259),
    [sym_key] = ACTIONS(259),
    [sym_macros] = ACTIONS(259),
    [sym_meter] = ACTIONS(259),
    [sym_notes] = ACTIONS(259),
    [anon_sym_X_COLON] = ACTIONS(259),
    [sym_remark] = ACTIONS(259),
    [sym_rhythm_line] = ACTIONS(259),
    [anon_sym_s_COLON] = ACTIONS(259),
    [sym_tempo] = ACTIONS(259),
    [sym_tune_title] = ACTIONS(259),
    [sym_unit_note_length] = ACTIONS(259),
    [anon_sym_U_COLON] = ACTIONS(259),
    [sym_voice] = ACTIONS(259),
    [anon_sym_w_COLON] = ACTIONS(259),
    [sym_words_postbody] = ACTIONS(259),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(263),
    [sym__NL] = ACTIONS(265),
    [sym_COMMENT] = ACTIONS(265),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(263),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(265),
    [aux_sym__music_content_token1] = ACTIONS(265),
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
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(267),
    [sym__NL] = ACTIONS(269),
    [sym_COMMENT] = ACTIONS(269),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(267),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(269),
    [aux_sym__music_content_token1] = ACTIONS(269),
    [sym_slur_open] = ACTIONS(269),
    [sym_slur_close] = ACTIONS(267),
    [anon_sym_LBRACK] = ACTIONS(269),
    [sym_alteration] = ACTIONS(267),
    [sym_note_letter] = ACTIONS(267),
    [sym_rest] = ACTIONS(267),
    [anon_sym_Z] = ACTIONS(267),
    [anon_sym_X] = ACTIONS(269),
    [aux_sym_grace_note_token1] = ACTIONS(267),
    [aux_sym_chord_symbol_token1] = ACTIONS(269),
    [sym_annotation] = ACTIONS(267),
    [sym_tuplet_marker] = ACTIONS(267),
    [sym_decoration_shorthand] = ACTIONS(269),
    [sym_bar_line] = ACTIONS(269),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(267),
    [sym_thin_double_bar_line] = ACTIONS(267),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(267),
    [sym_start_of_repeated_section] = ACTIONS(267),
    [sym_end_of_repeated_section] = ACTIONS(267),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(267),
    [anon_sym_BANGtrill_BANG] = ACTIONS(267),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(267),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(267),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(267),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(267),
    [anon_sym_BANGmordent_BANG] = ACTIONS(267),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(267),
    [anon_sym_BANGroll_BANG] = ACTIONS(267),
    [anon_sym_BANGturn_BANG] = ACTIONS(267),
    [anon_sym_BANGturnx_BANG] = ACTIONS(267),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(267),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(267),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(267),
    [anon_sym_BANG_GT_BANG] = ACTIONS(267),
    [anon_sym_BANGaccent_BANG] = ACTIONS(267),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(267),
    [anon_sym_BANGfermata_BANG] = ACTIONS(267),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(267),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(267),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(267),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(267),
    [anon_sym_BANGplus_BANG] = ACTIONS(267),
    [anon_sym_BANGsnap_BANG] = ACTIONS(267),
    [anon_sym_BANGslide_BANG] = ACTIONS(267),
    [anon_sym_BANGwedge_BANG] = ACTIONS(267),
    [anon_sym_BANGupbow_BANG] = ACTIONS(267),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(267),
    [anon_sym_BANGopen_BANG] = ACTIONS(267),
    [anon_sym_BANGthumb_BANG] = ACTIONS(267),
    [anon_sym_BANGbreath_BANG] = ACTIONS(267),
    [anon_sym_BANGpppp_BANG] = ACTIONS(267),
    [anon_sym_BANGppp_BANG] = ACTIONS(267),
    [anon_sym_BANGpp_BANG] = ACTIONS(267),
    [anon_sym_BANGp_BANG] = ACTIONS(267),
    [anon_sym_BANGmp_BANG] = ACTIONS(267),
    [anon_sym_BANGmf_BANG] = ACTIONS(267),
    [anon_sym_BANGf_BANG] = ACTIONS(267),
    [anon_sym_BANGff_BANG] = ACTIONS(267),
    [anon_sym_BANGfff_BANG] = ACTIONS(267),
    [anon_sym_BANGffff_BANG] = ACTIONS(267),
    [anon_sym_BANGsfz_BANG] = ACTIONS(267),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(267),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(267),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(267),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(267),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(267),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(267),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(267),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(267),
    [anon_sym_BANGsegno_BANG] = ACTIONS(267),
    [anon_sym_BANGcoda_BANG] = ACTIONS(267),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(267),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(267),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(267),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(267),
    [anon_sym_BANGfine_BANG] = ACTIONS(267),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(267),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(267),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(267),
    [sym_parts_line] = ACTIONS(267),
    [sym_instruction] = ACTIONS(267),
    [sym_key] = ACTIONS(267),
    [sym_macros] = ACTIONS(267),
    [sym_meter] = ACTIONS(267),
    [sym_notes] = ACTIONS(267),
    [anon_sym_X_COLON] = ACTIONS(267),
    [sym_remark] = ACTIONS(267),
    [sym_rhythm_line] = ACTIONS(267),
    [anon_sym_s_COLON] = ACTIONS(267),
    [sym_tempo] = ACTIONS(267),
    [sym_tune_title] = ACTIONS(267),
    [sym_unit_note_length] = ACTIONS(267),
    [anon_sym_U_COLON] = ACTIONS(267),
    [sym_voice] = ACTIONS(267),
    [anon_sym_w_COLON] = ACTIONS(267),
    [sym_words_postbody] = ACTIONS(267),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(200),
    [sym__NL] = ACTIONS(202),
    [sym_COMMENT] = ACTIONS(202),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(200),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(202),
    [aux_sym__music_content_token1] = ACTIONS(202),
    [sym_slur_open] = ACTIONS(202),
    [sym_slur_close] = ACTIONS(200),
    [anon_sym_LBRACK] = ACTIONS(202),
    [sym_alteration] = ACTIONS(200),
    [sym_note_letter] = ACTIONS(200),
    [sym_rest] = ACTIONS(200),
    [anon_sym_Z] = ACTIONS(200),
    [anon_sym_X] = ACTIONS(202),
    [aux_sym_grace_note_token1] = ACTIONS(200),
    [aux_sym_chord_symbol_token1] = ACTIONS(202),
    [sym_annotation] = ACTIONS(200),
    [sym_tuplet_marker] = ACTIONS(200),
    [sym_decoration_shorthand] = ACTIONS(202),
    [sym_bar_line] = ACTIONS(202),
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
    [anon_sym_X_COLON] = ACTIONS(200),
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
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(271),
    [sym__NL] = ACTIONS(273),
    [sym_COMMENT] = ACTIONS(273),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(271),
    [aux_sym__music_content_token1] = ACTIONS(273),
    [sym_slur_open] = ACTIONS(273),
    [sym_slur_close] = ACTIONS(271),
    [anon_sym_LBRACK] = ACTIONS(273),
    [sym_alteration] = ACTIONS(271),
    [sym_note_letter] = ACTIONS(271),
    [sym_rest] = ACTIONS(271),
    [anon_sym_Z] = ACTIONS(271),
    [anon_sym_X] = ACTIONS(273),
    [aux_sym_grace_note_token1] = ACTIONS(271),
    [aux_sym_chord_symbol_token1] = ACTIONS(273),
    [sym_annotation] = ACTIONS(271),
    [sym_tuplet_marker] = ACTIONS(271),
    [sym_decoration_shorthand] = ACTIONS(273),
    [sym_bar_line] = ACTIONS(273),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(271),
    [sym_thin_double_bar_line] = ACTIONS(271),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(271),
    [sym_start_of_repeated_section] = ACTIONS(271),
    [sym_end_of_repeated_section] = ACTIONS(271),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(271),
    [anon_sym_BANGtrill_BANG] = ACTIONS(271),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(271),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(271),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(271),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(271),
    [anon_sym_BANGmordent_BANG] = ACTIONS(271),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(271),
    [anon_sym_BANGroll_BANG] = ACTIONS(271),
    [anon_sym_BANGturn_BANG] = ACTIONS(271),
    [anon_sym_BANGturnx_BANG] = ACTIONS(271),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(271),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(271),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(271),
    [anon_sym_BANG_GT_BANG] = ACTIONS(271),
    [anon_sym_BANGaccent_BANG] = ACTIONS(271),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(271),
    [anon_sym_BANGfermata_BANG] = ACTIONS(271),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(271),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(271),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(271),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(271),
    [anon_sym_BANGplus_BANG] = ACTIONS(271),
    [anon_sym_BANGsnap_BANG] = ACTIONS(271),
    [anon_sym_BANGslide_BANG] = ACTIONS(271),
    [anon_sym_BANGwedge_BANG] = ACTIONS(271),
    [anon_sym_BANGupbow_BANG] = ACTIONS(271),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(271),
    [anon_sym_BANGopen_BANG] = ACTIONS(271),
    [anon_sym_BANGthumb_BANG] = ACTIONS(271),
    [anon_sym_BANGbreath_BANG] = ACTIONS(271),
    [anon_sym_BANGpppp_BANG] = ACTIONS(271),
    [anon_sym_BANGppp_BANG] = ACTIONS(271),
    [anon_sym_BANGpp_BANG] = ACTIONS(271),
    [anon_sym_BANGp_BANG] = ACTIONS(271),
    [anon_sym_BANGmp_BANG] = ACTIONS(271),
    [anon_sym_BANGmf_BANG] = ACTIONS(271),
    [anon_sym_BANGf_BANG] = ACTIONS(271),
    [anon_sym_BANGff_BANG] = ACTIONS(271),
    [anon_sym_BANGfff_BANG] = ACTIONS(271),
    [anon_sym_BANGffff_BANG] = ACTIONS(271),
    [anon_sym_BANGsfz_BANG] = ACTIONS(271),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(271),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(271),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(271),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(271),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(271),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(271),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(271),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(271),
    [anon_sym_BANGsegno_BANG] = ACTIONS(271),
    [anon_sym_BANGcoda_BANG] = ACTIONS(271),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(271),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(271),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(271),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(271),
    [anon_sym_BANGfine_BANG] = ACTIONS(271),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(271),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(271),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(271),
    [sym_parts_line] = ACTIONS(271),
    [sym_instruction] = ACTIONS(271),
    [sym_key] = ACTIONS(271),
    [sym_macros] = ACTIONS(271),
    [sym_meter] = ACTIONS(271),
    [sym_notes] = ACTIONS(271),
    [anon_sym_X_COLON] = ACTIONS(271),
    [sym_remark] = ACTIONS(271),
    [sym_rhythm_line] = ACTIONS(271),
    [anon_sym_s_COLON] = ACTIONS(271),
    [sym_tempo] = ACTIONS(271),
    [sym_tune_title] = ACTIONS(271),
    [sym_unit_note_length] = ACTIONS(271),
    [anon_sym_U_COLON] = ACTIONS(271),
    [sym_voice] = ACTIONS(271),
    [anon_sym_w_COLON] = ACTIONS(271),
    [sym_words_postbody] = ACTIONS(271),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(275),
    [sym__NL] = ACTIONS(277),
    [sym_COMMENT] = ACTIONS(277),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(275),
    [aux_sym__music_content_token1] = ACTIONS(277),
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
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(279),
    [sym__NL] = ACTIONS(281),
    [sym_COMMENT] = ACTIONS(281),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(279),
    [aux_sym__music_content_token1] = ACTIONS(281),
    [sym_slur_open] = ACTIONS(281),
    [sym_slur_close] = ACTIONS(279),
    [anon_sym_LBRACK] = ACTIONS(281),
    [sym_alteration] = ACTIONS(279),
    [sym_note_letter] = ACTIONS(279),
    [sym_rest] = ACTIONS(279),
    [anon_sym_Z] = ACTIONS(279),
    [anon_sym_X] = ACTIONS(281),
    [aux_sym_grace_note_token1] = ACTIONS(279),
    [aux_sym_chord_symbol_token1] = ACTIONS(281),
    [sym_annotation] = ACTIONS(279),
    [sym_tuplet_marker] = ACTIONS(279),
    [sym_decoration_shorthand] = ACTIONS(281),
    [sym_bar_line] = ACTIONS(281),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(279),
    [sym_thin_double_bar_line] = ACTIONS(279),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(279),
    [sym_start_of_repeated_section] = ACTIONS(279),
    [sym_end_of_repeated_section] = ACTIONS(279),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(279),
    [anon_sym_BANGtrill_BANG] = ACTIONS(279),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(279),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(279),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(279),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(279),
    [anon_sym_BANGmordent_BANG] = ACTIONS(279),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(279),
    [anon_sym_BANGroll_BANG] = ACTIONS(279),
    [anon_sym_BANGturn_BANG] = ACTIONS(279),
    [anon_sym_BANGturnx_BANG] = ACTIONS(279),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(279),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(279),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(279),
    [anon_sym_BANG_GT_BANG] = ACTIONS(279),
    [anon_sym_BANGaccent_BANG] = ACTIONS(279),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(279),
    [anon_sym_BANGfermata_BANG] = ACTIONS(279),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(279),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(279),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(279),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(279),
    [anon_sym_BANGplus_BANG] = ACTIONS(279),
    [anon_sym_BANGsnap_BANG] = ACTIONS(279),
    [anon_sym_BANGslide_BANG] = ACTIONS(279),
    [anon_sym_BANGwedge_BANG] = ACTIONS(279),
    [anon_sym_BANGupbow_BANG] = ACTIONS(279),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(279),
    [anon_sym_BANGopen_BANG] = ACTIONS(279),
    [anon_sym_BANGthumb_BANG] = ACTIONS(279),
    [anon_sym_BANGbreath_BANG] = ACTIONS(279),
    [anon_sym_BANGpppp_BANG] = ACTIONS(279),
    [anon_sym_BANGppp_BANG] = ACTIONS(279),
    [anon_sym_BANGpp_BANG] = ACTIONS(279),
    [anon_sym_BANGp_BANG] = ACTIONS(279),
    [anon_sym_BANGmp_BANG] = ACTIONS(279),
    [anon_sym_BANGmf_BANG] = ACTIONS(279),
    [anon_sym_BANGf_BANG] = ACTIONS(279),
    [anon_sym_BANGff_BANG] = ACTIONS(279),
    [anon_sym_BANGfff_BANG] = ACTIONS(279),
    [anon_sym_BANGffff_BANG] = ACTIONS(279),
    [anon_sym_BANGsfz_BANG] = ACTIONS(279),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(279),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(279),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(279),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(279),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(279),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(279),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(279),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(279),
    [anon_sym_BANGsegno_BANG] = ACTIONS(279),
    [anon_sym_BANGcoda_BANG] = ACTIONS(279),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(279),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(279),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(279),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(279),
    [anon_sym_BANGfine_BANG] = ACTIONS(279),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(279),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(279),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(279),
    [sym_parts_line] = ACTIONS(279),
    [sym_instruction] = ACTIONS(279),
    [sym_key] = ACTIONS(279),
    [sym_macros] = ACTIONS(279),
    [sym_meter] = ACTIONS(279),
    [sym_notes] = ACTIONS(279),
    [anon_sym_X_COLON] = ACTIONS(279),
    [sym_remark] = ACTIONS(279),
    [sym_rhythm_line] = ACTIONS(279),
    [anon_sym_s_COLON] = ACTIONS(279),
    [sym_tempo] = ACTIONS(279),
    [sym_tune_title] = ACTIONS(279),
    [sym_unit_note_length] = ACTIONS(279),
    [anon_sym_U_COLON] = ACTIONS(279),
    [sym_voice] = ACTIONS(279),
    [anon_sym_w_COLON] = ACTIONS(279),
    [sym_words_postbody] = ACTIONS(279),
  },
  [34] = {
    [sym_chord_symbol] = STATE(35),
    [sym_nth_ending_barline] = STATE(50),
    [sym_generic_bar_line] = STATE(35),
    [sym_first_repeat_bar] = STATE(50),
    [sym_second_repeat_bar] = STATE(50),
    [sym_symbol] = STATE(35),
    [aux_sym_symbol_line_repeat1] = STATE(35),
    [sym_noCommentText] = ACTIONS(283),
    [sym_note_skip] = ACTIONS(285),
    [aux_sym_chord_symbol_token1] = ACTIONS(287),
    [sym_annotation] = ACTIONS(285),
    [sym_bar_line] = ACTIONS(289),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(291),
    [sym_thin_double_bar_line] = ACTIONS(291),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(291),
    [sym_start_of_repeated_section] = ACTIONS(293),
    [sym_end_of_repeated_section] = ACTIONS(295),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(293),
    [anon_sym_BANGtrill_BANG] = ACTIONS(297),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(297),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(297),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(297),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(297),
    [anon_sym_BANGmordent_BANG] = ACTIONS(297),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(297),
    [anon_sym_BANGroll_BANG] = ACTIONS(297),
    [anon_sym_BANGturn_BANG] = ACTIONS(297),
    [anon_sym_BANGturnx_BANG] = ACTIONS(297),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(297),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(297),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(297),
    [anon_sym_BANG_GT_BANG] = ACTIONS(297),
    [anon_sym_BANGaccent_BANG] = ACTIONS(297),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(297),
    [anon_sym_BANGfermata_BANG] = ACTIONS(297),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(297),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(297),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(297),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(297),
    [anon_sym_BANGplus_BANG] = ACTIONS(297),
    [anon_sym_BANGsnap_BANG] = ACTIONS(297),
    [anon_sym_BANGslide_BANG] = ACTIONS(297),
    [anon_sym_BANGwedge_BANG] = ACTIONS(297),
    [anon_sym_BANGupbow_BANG] = ACTIONS(297),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(297),
    [anon_sym_BANGopen_BANG] = ACTIONS(297),
    [anon_sym_BANGthumb_BANG] = ACTIONS(297),
    [anon_sym_BANGbreath_BANG] = ACTIONS(297),
    [anon_sym_BANGpppp_BANG] = ACTIONS(297),
    [anon_sym_BANGppp_BANG] = ACTIONS(297),
    [anon_sym_BANGpp_BANG] = ACTIONS(297),
    [anon_sym_BANGp_BANG] = ACTIONS(297),
    [anon_sym_BANGmp_BANG] = ACTIONS(297),
    [anon_sym_BANGmf_BANG] = ACTIONS(297),
    [anon_sym_BANGf_BANG] = ACTIONS(297),
    [anon_sym_BANGff_BANG] = ACTIONS(297),
    [anon_sym_BANGfff_BANG] = ACTIONS(297),
    [anon_sym_BANGffff_BANG] = ACTIONS(297),
    [anon_sym_BANGsfz_BANG] = ACTIONS(297),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(297),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(297),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(297),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(297),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(297),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(297),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(297),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(297),
    [anon_sym_BANGsegno_BANG] = ACTIONS(297),
    [anon_sym_BANGcoda_BANG] = ACTIONS(297),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(297),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(297),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(297),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(297),
    [anon_sym_BANGfine_BANG] = ACTIONS(297),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(297),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(297),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(297),
  },
  [35] = {
    [sym_chord_symbol] = STATE(35),
    [sym_nth_ending_barline] = STATE(50),
    [sym_generic_bar_line] = STATE(35),
    [sym_first_repeat_bar] = STATE(50),
    [sym_second_repeat_bar] = STATE(50),
    [sym_symbol] = STATE(35),
    [aux_sym_symbol_line_repeat1] = STATE(35),
    [sym_noCommentText] = ACTIONS(299),
    [sym_note_skip] = ACTIONS(301),
    [aux_sym_chord_symbol_token1] = ACTIONS(304),
    [sym_annotation] = ACTIONS(301),
    [sym_bar_line] = ACTIONS(307),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(310),
    [sym_thin_double_bar_line] = ACTIONS(310),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(310),
    [sym_start_of_repeated_section] = ACTIONS(313),
    [sym_end_of_repeated_section] = ACTIONS(316),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(313),
    [anon_sym_BANGtrill_BANG] = ACTIONS(319),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(319),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(319),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(319),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(319),
    [anon_sym_BANGmordent_BANG] = ACTIONS(319),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(319),
    [anon_sym_BANGroll_BANG] = ACTIONS(319),
    [anon_sym_BANGturn_BANG] = ACTIONS(319),
    [anon_sym_BANGturnx_BANG] = ACTIONS(319),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(319),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(319),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(319),
    [anon_sym_BANG_GT_BANG] = ACTIONS(319),
    [anon_sym_BANGaccent_BANG] = ACTIONS(319),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(319),
    [anon_sym_BANGfermata_BANG] = ACTIONS(319),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(319),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(319),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(319),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(319),
    [anon_sym_BANGplus_BANG] = ACTIONS(319),
    [anon_sym_BANGsnap_BANG] = ACTIONS(319),
    [anon_sym_BANGslide_BANG] = ACTIONS(319),
    [anon_sym_BANGwedge_BANG] = ACTIONS(319),
    [anon_sym_BANGupbow_BANG] = ACTIONS(319),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(319),
    [anon_sym_BANGopen_BANG] = ACTIONS(319),
    [anon_sym_BANGthumb_BANG] = ACTIONS(319),
    [anon_sym_BANGbreath_BANG] = ACTIONS(319),
    [anon_sym_BANGpppp_BANG] = ACTIONS(319),
    [anon_sym_BANGppp_BANG] = ACTIONS(319),
    [anon_sym_BANGpp_BANG] = ACTIONS(319),
    [anon_sym_BANGp_BANG] = ACTIONS(319),
    [anon_sym_BANGmp_BANG] = ACTIONS(319),
    [anon_sym_BANGmf_BANG] = ACTIONS(319),
    [anon_sym_BANGf_BANG] = ACTIONS(319),
    [anon_sym_BANGff_BANG] = ACTIONS(319),
    [anon_sym_BANGfff_BANG] = ACTIONS(319),
    [anon_sym_BANGffff_BANG] = ACTIONS(319),
    [anon_sym_BANGsfz_BANG] = ACTIONS(319),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(319),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(319),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(319),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(319),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(319),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(319),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(319),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(319),
    [anon_sym_BANGsegno_BANG] = ACTIONS(319),
    [anon_sym_BANGcoda_BANG] = ACTIONS(319),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(319),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(319),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(319),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(319),
    [anon_sym_BANGfine_BANG] = ACTIONS(319),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(319),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(319),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(319),
  },
  [36] = {
    [sym_chord_symbol] = STATE(34),
    [sym_nth_ending_barline] = STATE(50),
    [sym_generic_bar_line] = STATE(34),
    [sym_first_repeat_bar] = STATE(50),
    [sym_second_repeat_bar] = STATE(50),
    [sym_symbol] = STATE(34),
    [aux_sym_symbol_line_repeat1] = STATE(34),
    [sym_note_skip] = ACTIONS(322),
    [aux_sym_chord_symbol_token1] = ACTIONS(287),
    [sym_annotation] = ACTIONS(322),
    [sym_bar_line] = ACTIONS(289),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(324),
    [sym_thin_double_bar_line] = ACTIONS(324),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(324),
    [sym_start_of_repeated_section] = ACTIONS(326),
    [sym_end_of_repeated_section] = ACTIONS(328),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(326),
    [anon_sym_BANGtrill_BANG] = ACTIONS(330),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(330),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(330),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(330),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(330),
    [anon_sym_BANGmordent_BANG] = ACTIONS(330),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(330),
    [anon_sym_BANGroll_BANG] = ACTIONS(330),
    [anon_sym_BANGturn_BANG] = ACTIONS(330),
    [anon_sym_BANGturnx_BANG] = ACTIONS(330),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(330),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(330),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(330),
    [anon_sym_BANG_GT_BANG] = ACTIONS(330),
    [anon_sym_BANGaccent_BANG] = ACTIONS(330),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(330),
    [anon_sym_BANGfermata_BANG] = ACTIONS(330),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(330),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(330),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(330),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(330),
    [anon_sym_BANGplus_BANG] = ACTIONS(330),
    [anon_sym_BANGsnap_BANG] = ACTIONS(330),
    [anon_sym_BANGslide_BANG] = ACTIONS(330),
    [anon_sym_BANGwedge_BANG] = ACTIONS(330),
    [anon_sym_BANGupbow_BANG] = ACTIONS(330),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(330),
    [anon_sym_BANGopen_BANG] = ACTIONS(330),
    [anon_sym_BANGthumb_BANG] = ACTIONS(330),
    [anon_sym_BANGbreath_BANG] = ACTIONS(330),
    [anon_sym_BANGpppp_BANG] = ACTIONS(330),
    [anon_sym_BANGppp_BANG] = ACTIONS(330),
    [anon_sym_BANGpp_BANG] = ACTIONS(330),
    [anon_sym_BANGp_BANG] = ACTIONS(330),
    [anon_sym_BANGmp_BANG] = ACTIONS(330),
    [anon_sym_BANGmf_BANG] = ACTIONS(330),
    [anon_sym_BANGf_BANG] = ACTIONS(330),
    [anon_sym_BANGff_BANG] = ACTIONS(330),
    [anon_sym_BANGfff_BANG] = ACTIONS(330),
    [anon_sym_BANGffff_BANG] = ACTIONS(330),
    [anon_sym_BANGsfz_BANG] = ACTIONS(330),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(330),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(330),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(330),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(330),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(330),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(330),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(330),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(330),
    [anon_sym_BANGsegno_BANG] = ACTIONS(330),
    [anon_sym_BANGcoda_BANG] = ACTIONS(330),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(330),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(330),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(330),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(330),
    [anon_sym_BANGfine_BANG] = ACTIONS(330),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(330),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(330),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(330),
  },
  [37] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(37),
    [sym_noCommentText] = ACTIONS(220),
    [sym_note_skip] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(332),
    [aux_sym_chord_symbol_token1] = ACTIONS(220),
    [sym_annotation] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(332),
    [sym_bar_line] = ACTIONS(220),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(220),
    [sym_thin_double_bar_line] = ACTIONS(220),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(220),
    [sym_start_of_repeated_section] = ACTIONS(220),
    [sym_end_of_repeated_section] = ACTIONS(220),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(220),
    [anon_sym_BANGtrill_BANG] = ACTIONS(220),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(220),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(220),
    [anon_sym_BANGmordent_BANG] = ACTIONS(220),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(220),
    [anon_sym_BANGroll_BANG] = ACTIONS(220),
    [anon_sym_BANGturn_BANG] = ACTIONS(220),
    [anon_sym_BANGturnx_BANG] = ACTIONS(220),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(220),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(220),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(220),
    [anon_sym_BANG_GT_BANG] = ACTIONS(220),
    [anon_sym_BANGaccent_BANG] = ACTIONS(220),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(220),
    [anon_sym_BANGfermata_BANG] = ACTIONS(220),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(220),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(220),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(220),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(220),
    [anon_sym_BANGplus_BANG] = ACTIONS(220),
    [anon_sym_BANGsnap_BANG] = ACTIONS(220),
    [anon_sym_BANGslide_BANG] = ACTIONS(220),
    [anon_sym_BANGwedge_BANG] = ACTIONS(220),
    [anon_sym_BANGupbow_BANG] = ACTIONS(220),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(220),
    [anon_sym_BANGopen_BANG] = ACTIONS(220),
    [anon_sym_BANGthumb_BANG] = ACTIONS(220),
    [anon_sym_BANGbreath_BANG] = ACTIONS(220),
    [anon_sym_BANGpppp_BANG] = ACTIONS(220),
    [anon_sym_BANGppp_BANG] = ACTIONS(220),
    [anon_sym_BANGpp_BANG] = ACTIONS(220),
    [anon_sym_BANGp_BANG] = ACTIONS(220),
    [anon_sym_BANGmp_BANG] = ACTIONS(220),
    [anon_sym_BANGmf_BANG] = ACTIONS(220),
    [anon_sym_BANGf_BANG] = ACTIONS(220),
    [anon_sym_BANGff_BANG] = ACTIONS(220),
    [anon_sym_BANGfff_BANG] = ACTIONS(220),
    [anon_sym_BANGffff_BANG] = ACTIONS(220),
    [anon_sym_BANGsfz_BANG] = ACTIONS(220),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGsegno_BANG] = ACTIONS(220),
    [anon_sym_BANGcoda_BANG] = ACTIONS(220),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(220),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(220),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(220),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(220),
    [anon_sym_BANGfine_BANG] = ACTIONS(220),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(220),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(220),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(220),
  },
  [38] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(40),
    [sym_noCommentText] = ACTIONS(216),
    [sym_note_skip] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(335),
    [aux_sym_chord_symbol_token1] = ACTIONS(216),
    [sym_annotation] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(335),
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
  [39] = {
    [sym_noCommentText] = ACTIONS(202),
    [sym_note_skip] = ACTIONS(202),
    [aux_sym_beam_token1] = ACTIONS(337),
    [aux_sym_chord_symbol_token1] = ACTIONS(202),
    [sym_annotation] = ACTIONS(202),
    [sym_bar_line] = ACTIONS(202),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(202),
    [sym_thin_double_bar_line] = ACTIONS(202),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(202),
    [sym_start_of_repeated_section] = ACTIONS(202),
    [sym_end_of_repeated_section] = ACTIONS(202),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(202),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(339),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(341),
    [anon_sym_BANGtrill_BANG] = ACTIONS(202),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(202),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(202),
    [anon_sym_BANGmordent_BANG] = ACTIONS(202),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(202),
    [anon_sym_BANGroll_BANG] = ACTIONS(202),
    [anon_sym_BANGturn_BANG] = ACTIONS(202),
    [anon_sym_BANGturnx_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(202),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_BANG] = ACTIONS(202),
    [anon_sym_BANGaccent_BANG] = ACTIONS(202),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(202),
    [anon_sym_BANGfermata_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(202),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(202),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(202),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(202),
    [anon_sym_BANGplus_BANG] = ACTIONS(202),
    [anon_sym_BANGsnap_BANG] = ACTIONS(202),
    [anon_sym_BANGslide_BANG] = ACTIONS(202),
    [anon_sym_BANGwedge_BANG] = ACTIONS(202),
    [anon_sym_BANGupbow_BANG] = ACTIONS(202),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(202),
    [anon_sym_BANGopen_BANG] = ACTIONS(202),
    [anon_sym_BANGthumb_BANG] = ACTIONS(202),
    [anon_sym_BANGbreath_BANG] = ACTIONS(202),
    [anon_sym_BANGpppp_BANG] = ACTIONS(202),
    [anon_sym_BANGppp_BANG] = ACTIONS(202),
    [anon_sym_BANGpp_BANG] = ACTIONS(202),
    [anon_sym_BANGp_BANG] = ACTIONS(202),
    [anon_sym_BANGmp_BANG] = ACTIONS(202),
    [anon_sym_BANGmf_BANG] = ACTIONS(202),
    [anon_sym_BANGf_BANG] = ACTIONS(202),
    [anon_sym_BANGff_BANG] = ACTIONS(202),
    [anon_sym_BANGfff_BANG] = ACTIONS(202),
    [anon_sym_BANGffff_BANG] = ACTIONS(202),
    [anon_sym_BANGsfz_BANG] = ACTIONS(202),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGsegno_BANG] = ACTIONS(202),
    [anon_sym_BANGcoda_BANG] = ACTIONS(202),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(202),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(202),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(202),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(202),
    [anon_sym_BANGfine_BANG] = ACTIONS(202),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(202),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(202),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(202),
  },
  [40] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(37),
    [sym_noCommentText] = ACTIONS(196),
    [sym_note_skip] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(335),
    [aux_sym_chord_symbol_token1] = ACTIONS(196),
    [sym_annotation] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(335),
    [sym_bar_line] = ACTIONS(196),
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
  },
  [41] = {
    [sym_noCommentText] = ACTIONS(202),
    [sym_note_skip] = ACTIONS(202),
    [aux_sym_beam_token1] = ACTIONS(337),
    [aux_sym_chord_symbol_token1] = ACTIONS(202),
    [sym_annotation] = ACTIONS(202),
    [sym_bar_line] = ACTIONS(202),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(202),
    [sym_thin_double_bar_line] = ACTIONS(202),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(202),
    [sym_start_of_repeated_section] = ACTIONS(202),
    [sym_end_of_repeated_section] = ACTIONS(202),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(202),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(343),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(345),
    [anon_sym_BANGtrill_BANG] = ACTIONS(202),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(202),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(202),
    [anon_sym_BANGmordent_BANG] = ACTIONS(202),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(202),
    [anon_sym_BANGroll_BANG] = ACTIONS(202),
    [anon_sym_BANGturn_BANG] = ACTIONS(202),
    [anon_sym_BANGturnx_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(202),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_BANG] = ACTIONS(202),
    [anon_sym_BANGaccent_BANG] = ACTIONS(202),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(202),
    [anon_sym_BANGfermata_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(202),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(202),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(202),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(202),
    [anon_sym_BANGplus_BANG] = ACTIONS(202),
    [anon_sym_BANGsnap_BANG] = ACTIONS(202),
    [anon_sym_BANGslide_BANG] = ACTIONS(202),
    [anon_sym_BANGwedge_BANG] = ACTIONS(202),
    [anon_sym_BANGupbow_BANG] = ACTIONS(202),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(202),
    [anon_sym_BANGopen_BANG] = ACTIONS(202),
    [anon_sym_BANGthumb_BANG] = ACTIONS(202),
    [anon_sym_BANGbreath_BANG] = ACTIONS(202),
    [anon_sym_BANGpppp_BANG] = ACTIONS(202),
    [anon_sym_BANGppp_BANG] = ACTIONS(202),
    [anon_sym_BANGpp_BANG] = ACTIONS(202),
    [anon_sym_BANGp_BANG] = ACTIONS(202),
    [anon_sym_BANGmp_BANG] = ACTIONS(202),
    [anon_sym_BANGmf_BANG] = ACTIONS(202),
    [anon_sym_BANGf_BANG] = ACTIONS(202),
    [anon_sym_BANGff_BANG] = ACTIONS(202),
    [anon_sym_BANGfff_BANG] = ACTIONS(202),
    [anon_sym_BANGffff_BANG] = ACTIONS(202),
    [anon_sym_BANGsfz_BANG] = ACTIONS(202),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGsegno_BANG] = ACTIONS(202),
    [anon_sym_BANGcoda_BANG] = ACTIONS(202),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(202),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(202),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(202),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(202),
    [anon_sym_BANGfine_BANG] = ACTIONS(202),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(202),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(202),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(202),
  },
  [42] = {
    [sym_noCommentText] = ACTIONS(220),
    [sym_note_skip] = ACTIONS(220),
    [anon_sym_DASH] = ACTIONS(220),
    [aux_sym_chord_symbol_token1] = ACTIONS(220),
    [sym_annotation] = ACTIONS(220),
    [anon_sym_COMMA] = ACTIONS(220),
    [sym_bar_line] = ACTIONS(220),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(220),
    [sym_thin_double_bar_line] = ACTIONS(220),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(220),
    [sym_start_of_repeated_section] = ACTIONS(220),
    [sym_end_of_repeated_section] = ACTIONS(220),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(220),
    [anon_sym_BANGtrill_BANG] = ACTIONS(220),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(220),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(220),
    [anon_sym_BANGmordent_BANG] = ACTIONS(220),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(220),
    [anon_sym_BANGroll_BANG] = ACTIONS(220),
    [anon_sym_BANGturn_BANG] = ACTIONS(220),
    [anon_sym_BANGturnx_BANG] = ACTIONS(220),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(220),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(220),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(220),
    [anon_sym_BANG_GT_BANG] = ACTIONS(220),
    [anon_sym_BANGaccent_BANG] = ACTIONS(220),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(220),
    [anon_sym_BANGfermata_BANG] = ACTIONS(220),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(220),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(220),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(220),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(220),
    [anon_sym_BANGplus_BANG] = ACTIONS(220),
    [anon_sym_BANGsnap_BANG] = ACTIONS(220),
    [anon_sym_BANGslide_BANG] = ACTIONS(220),
    [anon_sym_BANGwedge_BANG] = ACTIONS(220),
    [anon_sym_BANGupbow_BANG] = ACTIONS(220),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(220),
    [anon_sym_BANGopen_BANG] = ACTIONS(220),
    [anon_sym_BANGthumb_BANG] = ACTIONS(220),
    [anon_sym_BANGbreath_BANG] = ACTIONS(220),
    [anon_sym_BANGpppp_BANG] = ACTIONS(220),
    [anon_sym_BANGppp_BANG] = ACTIONS(220),
    [anon_sym_BANGpp_BANG] = ACTIONS(220),
    [anon_sym_BANGp_BANG] = ACTIONS(220),
    [anon_sym_BANGmp_BANG] = ACTIONS(220),
    [anon_sym_BANGmf_BANG] = ACTIONS(220),
    [anon_sym_BANGf_BANG] = ACTIONS(220),
    [anon_sym_BANGff_BANG] = ACTIONS(220),
    [anon_sym_BANGfff_BANG] = ACTIONS(220),
    [anon_sym_BANGffff_BANG] = ACTIONS(220),
    [anon_sym_BANGsfz_BANG] = ACTIONS(220),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(220),
    [anon_sym_BANGsegno_BANG] = ACTIONS(220),
    [anon_sym_BANGcoda_BANG] = ACTIONS(220),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(220),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(220),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(220),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(220),
    [anon_sym_BANGfine_BANG] = ACTIONS(220),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(220),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(220),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(220),
  },
  [43] = {
    [sym_noCommentText] = ACTIONS(202),
    [sym_note_skip] = ACTIONS(202),
    [aux_sym_beam_token1] = ACTIONS(337),
    [aux_sym_chord_symbol_token1] = ACTIONS(202),
    [sym_annotation] = ACTIONS(202),
    [sym_bar_line] = ACTIONS(202),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(202),
    [sym_thin_double_bar_line] = ACTIONS(202),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(202),
    [sym_start_of_repeated_section] = ACTIONS(202),
    [sym_end_of_repeated_section] = ACTIONS(202),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(202),
    [anon_sym_BANGtrill_BANG] = ACTIONS(202),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(202),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(202),
    [anon_sym_BANGmordent_BANG] = ACTIONS(202),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(202),
    [anon_sym_BANGroll_BANG] = ACTIONS(202),
    [anon_sym_BANGturn_BANG] = ACTIONS(202),
    [anon_sym_BANGturnx_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(202),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_BANG] = ACTIONS(202),
    [anon_sym_BANGaccent_BANG] = ACTIONS(202),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(202),
    [anon_sym_BANGfermata_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(202),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(202),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(202),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(202),
    [anon_sym_BANGplus_BANG] = ACTIONS(202),
    [anon_sym_BANGsnap_BANG] = ACTIONS(202),
    [anon_sym_BANGslide_BANG] = ACTIONS(202),
    [anon_sym_BANGwedge_BANG] = ACTIONS(202),
    [anon_sym_BANGupbow_BANG] = ACTIONS(202),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(202),
    [anon_sym_BANGopen_BANG] = ACTIONS(202),
    [anon_sym_BANGthumb_BANG] = ACTIONS(202),
    [anon_sym_BANGbreath_BANG] = ACTIONS(202),
    [anon_sym_BANGpppp_BANG] = ACTIONS(202),
    [anon_sym_BANGppp_BANG] = ACTIONS(202),
    [anon_sym_BANGpp_BANG] = ACTIONS(202),
    [anon_sym_BANGp_BANG] = ACTIONS(202),
    [anon_sym_BANGmp_BANG] = ACTIONS(202),
    [anon_sym_BANGmf_BANG] = ACTIONS(202),
    [anon_sym_BANGf_BANG] = ACTIONS(202),
    [anon_sym_BANGff_BANG] = ACTIONS(202),
    [anon_sym_BANGfff_BANG] = ACTIONS(202),
    [anon_sym_BANGffff_BANG] = ACTIONS(202),
    [anon_sym_BANGsfz_BANG] = ACTIONS(202),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGsegno_BANG] = ACTIONS(202),
    [anon_sym_BANGcoda_BANG] = ACTIONS(202),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(202),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(202),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(202),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(202),
    [anon_sym_BANGfine_BANG] = ACTIONS(202),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(202),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(202),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(202),
  },
  [44] = {
    [sym_noCommentText] = ACTIONS(253),
    [sym_note_skip] = ACTIONS(253),
    [aux_sym_chord_symbol_token1] = ACTIONS(253),
    [sym_annotation] = ACTIONS(253),
    [sym_bar_line] = ACTIONS(253),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(253),
    [sym_thin_double_bar_line] = ACTIONS(253),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(253),
    [sym_start_of_repeated_section] = ACTIONS(253),
    [sym_end_of_repeated_section] = ACTIONS(253),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(253),
    [anon_sym_BANGtrill_BANG] = ACTIONS(253),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(253),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(253),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(253),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(253),
    [anon_sym_BANGmordent_BANG] = ACTIONS(253),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(253),
    [anon_sym_BANGroll_BANG] = ACTIONS(253),
    [anon_sym_BANGturn_BANG] = ACTIONS(253),
    [anon_sym_BANGturnx_BANG] = ACTIONS(253),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(253),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(253),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(253),
    [anon_sym_BANG_GT_BANG] = ACTIONS(253),
    [anon_sym_BANGaccent_BANG] = ACTIONS(253),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(253),
    [anon_sym_BANGfermata_BANG] = ACTIONS(253),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(253),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(253),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(253),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(253),
    [anon_sym_BANGplus_BANG] = ACTIONS(253),
    [anon_sym_BANGsnap_BANG] = ACTIONS(253),
    [anon_sym_BANGslide_BANG] = ACTIONS(253),
    [anon_sym_BANGwedge_BANG] = ACTIONS(253),
    [anon_sym_BANGupbow_BANG] = ACTIONS(253),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(253),
    [anon_sym_BANGopen_BANG] = ACTIONS(253),
    [anon_sym_BANGthumb_BANG] = ACTIONS(253),
    [anon_sym_BANGbreath_BANG] = ACTIONS(253),
    [anon_sym_BANGpppp_BANG] = ACTIONS(253),
    [anon_sym_BANGppp_BANG] = ACTIONS(253),
    [anon_sym_BANGpp_BANG] = ACTIONS(253),
    [anon_sym_BANGp_BANG] = ACTIONS(253),
    [anon_sym_BANGmp_BANG] = ACTIONS(253),
    [anon_sym_BANGmf_BANG] = ACTIONS(253),
    [anon_sym_BANGf_BANG] = ACTIONS(253),
    [anon_sym_BANGff_BANG] = ACTIONS(253),
    [anon_sym_BANGfff_BANG] = ACTIONS(253),
    [anon_sym_BANGffff_BANG] = ACTIONS(253),
    [anon_sym_BANGsfz_BANG] = ACTIONS(253),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(253),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(253),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(253),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(253),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(253),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(253),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(253),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(253),
    [anon_sym_BANGsegno_BANG] = ACTIONS(253),
    [anon_sym_BANGcoda_BANG] = ACTIONS(253),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(253),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(253),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(253),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(253),
    [anon_sym_BANGfine_BANG] = ACTIONS(253),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(253),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(253),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(253),
  },
  [45] = {
    [sym_noCommentText] = ACTIONS(249),
    [sym_note_skip] = ACTIONS(249),
    [aux_sym_chord_symbol_token1] = ACTIONS(249),
    [sym_annotation] = ACTIONS(249),
    [sym_bar_line] = ACTIONS(249),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(249),
    [sym_thin_double_bar_line] = ACTIONS(249),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(249),
    [sym_start_of_repeated_section] = ACTIONS(249),
    [sym_end_of_repeated_section] = ACTIONS(249),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(249),
    [anon_sym_BANGtrill_BANG] = ACTIONS(249),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(249),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(249),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(249),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(249),
    [anon_sym_BANGmordent_BANG] = ACTIONS(249),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(249),
    [anon_sym_BANGroll_BANG] = ACTIONS(249),
    [anon_sym_BANGturn_BANG] = ACTIONS(249),
    [anon_sym_BANGturnx_BANG] = ACTIONS(249),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(249),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(249),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(249),
    [anon_sym_BANG_GT_BANG] = ACTIONS(249),
    [anon_sym_BANGaccent_BANG] = ACTIONS(249),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(249),
    [anon_sym_BANGfermata_BANG] = ACTIONS(249),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(249),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(249),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(249),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(249),
    [anon_sym_BANGplus_BANG] = ACTIONS(249),
    [anon_sym_BANGsnap_BANG] = ACTIONS(249),
    [anon_sym_BANGslide_BANG] = ACTIONS(249),
    [anon_sym_BANGwedge_BANG] = ACTIONS(249),
    [anon_sym_BANGupbow_BANG] = ACTIONS(249),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(249),
    [anon_sym_BANGopen_BANG] = ACTIONS(249),
    [anon_sym_BANGthumb_BANG] = ACTIONS(249),
    [anon_sym_BANGbreath_BANG] = ACTIONS(249),
    [anon_sym_BANGpppp_BANG] = ACTIONS(249),
    [anon_sym_BANGppp_BANG] = ACTIONS(249),
    [anon_sym_BANGpp_BANG] = ACTIONS(249),
    [anon_sym_BANGp_BANG] = ACTIONS(249),
    [anon_sym_BANGmp_BANG] = ACTIONS(249),
    [anon_sym_BANGmf_BANG] = ACTIONS(249),
    [anon_sym_BANGf_BANG] = ACTIONS(249),
    [anon_sym_BANGff_BANG] = ACTIONS(249),
    [anon_sym_BANGfff_BANG] = ACTIONS(249),
    [anon_sym_BANGffff_BANG] = ACTIONS(249),
    [anon_sym_BANGsfz_BANG] = ACTIONS(249),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(249),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(249),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(249),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(249),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(249),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(249),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(249),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(249),
    [anon_sym_BANGsegno_BANG] = ACTIONS(249),
    [anon_sym_BANGcoda_BANG] = ACTIONS(249),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(249),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(249),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(249),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(249),
    [anon_sym_BANGfine_BANG] = ACTIONS(249),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(249),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(249),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(249),
  },
  [46] = {
    [sym_noCommentText] = ACTIONS(227),
    [sym_note_skip] = ACTIONS(227),
    [aux_sym_chord_symbol_token1] = ACTIONS(227),
    [sym_annotation] = ACTIONS(227),
    [sym_bar_line] = ACTIONS(227),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(227),
    [sym_thin_double_bar_line] = ACTIONS(227),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(227),
    [sym_start_of_repeated_section] = ACTIONS(227),
    [sym_end_of_repeated_section] = ACTIONS(227),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(227),
    [anon_sym_BANGtrill_BANG] = ACTIONS(227),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(227),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(227),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(227),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(227),
    [anon_sym_BANGmordent_BANG] = ACTIONS(227),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(227),
    [anon_sym_BANGroll_BANG] = ACTIONS(227),
    [anon_sym_BANGturn_BANG] = ACTIONS(227),
    [anon_sym_BANGturnx_BANG] = ACTIONS(227),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(227),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(227),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(227),
    [anon_sym_BANG_GT_BANG] = ACTIONS(227),
    [anon_sym_BANGaccent_BANG] = ACTIONS(227),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(227),
    [anon_sym_BANGfermata_BANG] = ACTIONS(227),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(227),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(227),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(227),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(227),
    [anon_sym_BANGplus_BANG] = ACTIONS(227),
    [anon_sym_BANGsnap_BANG] = ACTIONS(227),
    [anon_sym_BANGslide_BANG] = ACTIONS(227),
    [anon_sym_BANGwedge_BANG] = ACTIONS(227),
    [anon_sym_BANGupbow_BANG] = ACTIONS(227),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(227),
    [anon_sym_BANGopen_BANG] = ACTIONS(227),
    [anon_sym_BANGthumb_BANG] = ACTIONS(227),
    [anon_sym_BANGbreath_BANG] = ACTIONS(227),
    [anon_sym_BANGpppp_BANG] = ACTIONS(227),
    [anon_sym_BANGppp_BANG] = ACTIONS(227),
    [anon_sym_BANGpp_BANG] = ACTIONS(227),
    [anon_sym_BANGp_BANG] = ACTIONS(227),
    [anon_sym_BANGmp_BANG] = ACTIONS(227),
    [anon_sym_BANGmf_BANG] = ACTIONS(227),
    [anon_sym_BANGf_BANG] = ACTIONS(227),
    [anon_sym_BANGff_BANG] = ACTIONS(227),
    [anon_sym_BANGfff_BANG] = ACTIONS(227),
    [anon_sym_BANGffff_BANG] = ACTIONS(227),
    [anon_sym_BANGsfz_BANG] = ACTIONS(227),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(227),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(227),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(227),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(227),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(227),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(227),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(227),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(227),
    [anon_sym_BANGsegno_BANG] = ACTIONS(227),
    [anon_sym_BANGcoda_BANG] = ACTIONS(227),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(227),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(227),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(227),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(227),
    [anon_sym_BANGfine_BANG] = ACTIONS(227),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(227),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(227),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(227),
  },
  [47] = {
    [sym_noCommentText] = ACTIONS(257),
    [sym_note_skip] = ACTIONS(257),
    [aux_sym_chord_symbol_token1] = ACTIONS(257),
    [sym_annotation] = ACTIONS(257),
    [sym_bar_line] = ACTIONS(257),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(257),
    [sym_thin_double_bar_line] = ACTIONS(257),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(257),
    [sym_start_of_repeated_section] = ACTIONS(257),
    [sym_end_of_repeated_section] = ACTIONS(257),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(257),
    [anon_sym_BANGtrill_BANG] = ACTIONS(257),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(257),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(257),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(257),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(257),
    [anon_sym_BANGmordent_BANG] = ACTIONS(257),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(257),
    [anon_sym_BANGroll_BANG] = ACTIONS(257),
    [anon_sym_BANGturn_BANG] = ACTIONS(257),
    [anon_sym_BANGturnx_BANG] = ACTIONS(257),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(257),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(257),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(257),
    [anon_sym_BANG_GT_BANG] = ACTIONS(257),
    [anon_sym_BANGaccent_BANG] = ACTIONS(257),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(257),
    [anon_sym_BANGfermata_BANG] = ACTIONS(257),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(257),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(257),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(257),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(257),
    [anon_sym_BANGplus_BANG] = ACTIONS(257),
    [anon_sym_BANGsnap_BANG] = ACTIONS(257),
    [anon_sym_BANGslide_BANG] = ACTIONS(257),
    [anon_sym_BANGwedge_BANG] = ACTIONS(257),
    [anon_sym_BANGupbow_BANG] = ACTIONS(257),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(257),
    [anon_sym_BANGopen_BANG] = ACTIONS(257),
    [anon_sym_BANGthumb_BANG] = ACTIONS(257),
    [anon_sym_BANGbreath_BANG] = ACTIONS(257),
    [anon_sym_BANGpppp_BANG] = ACTIONS(257),
    [anon_sym_BANGppp_BANG] = ACTIONS(257),
    [anon_sym_BANGpp_BANG] = ACTIONS(257),
    [anon_sym_BANGp_BANG] = ACTIONS(257),
    [anon_sym_BANGmp_BANG] = ACTIONS(257),
    [anon_sym_BANGmf_BANG] = ACTIONS(257),
    [anon_sym_BANGf_BANG] = ACTIONS(257),
    [anon_sym_BANGff_BANG] = ACTIONS(257),
    [anon_sym_BANGfff_BANG] = ACTIONS(257),
    [anon_sym_BANGffff_BANG] = ACTIONS(257),
    [anon_sym_BANGsfz_BANG] = ACTIONS(257),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(257),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(257),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(257),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(257),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(257),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(257),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(257),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(257),
    [anon_sym_BANGsegno_BANG] = ACTIONS(257),
    [anon_sym_BANGcoda_BANG] = ACTIONS(257),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(257),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(257),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(257),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(257),
    [anon_sym_BANGfine_BANG] = ACTIONS(257),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(257),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(257),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(257),
  },
  [48] = {
    [sym_noCommentText] = ACTIONS(347),
    [sym_note_skip] = ACTIONS(347),
    [aux_sym_chord_symbol_token1] = ACTIONS(347),
    [sym_annotation] = ACTIONS(347),
    [sym_bar_line] = ACTIONS(347),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(347),
    [sym_thin_double_bar_line] = ACTIONS(347),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(347),
    [sym_start_of_repeated_section] = ACTIONS(347),
    [sym_end_of_repeated_section] = ACTIONS(347),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(347),
    [anon_sym_BANGtrill_BANG] = ACTIONS(347),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(347),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(347),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(347),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(347),
    [anon_sym_BANGmordent_BANG] = ACTIONS(347),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(347),
    [anon_sym_BANGroll_BANG] = ACTIONS(347),
    [anon_sym_BANGturn_BANG] = ACTIONS(347),
    [anon_sym_BANGturnx_BANG] = ACTIONS(347),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(347),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(347),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(347),
    [anon_sym_BANG_GT_BANG] = ACTIONS(347),
    [anon_sym_BANGaccent_BANG] = ACTIONS(347),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(347),
    [anon_sym_BANGfermata_BANG] = ACTIONS(347),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(347),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(347),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(347),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(347),
    [anon_sym_BANGplus_BANG] = ACTIONS(347),
    [anon_sym_BANGsnap_BANG] = ACTIONS(347),
    [anon_sym_BANGslide_BANG] = ACTIONS(347),
    [anon_sym_BANGwedge_BANG] = ACTIONS(347),
    [anon_sym_BANGupbow_BANG] = ACTIONS(347),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(347),
    [anon_sym_BANGopen_BANG] = ACTIONS(347),
    [anon_sym_BANGthumb_BANG] = ACTIONS(347),
    [anon_sym_BANGbreath_BANG] = ACTIONS(347),
    [anon_sym_BANGpppp_BANG] = ACTIONS(347),
    [anon_sym_BANGppp_BANG] = ACTIONS(347),
    [anon_sym_BANGpp_BANG] = ACTIONS(347),
    [anon_sym_BANGp_BANG] = ACTIONS(347),
    [anon_sym_BANGmp_BANG] = ACTIONS(347),
    [anon_sym_BANGmf_BANG] = ACTIONS(347),
    [anon_sym_BANGf_BANG] = ACTIONS(347),
    [anon_sym_BANGff_BANG] = ACTIONS(347),
    [anon_sym_BANGfff_BANG] = ACTIONS(347),
    [anon_sym_BANGffff_BANG] = ACTIONS(347),
    [anon_sym_BANGsfz_BANG] = ACTIONS(347),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(347),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(347),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(347),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(347),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(347),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(347),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(347),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(347),
    [anon_sym_BANGsegno_BANG] = ACTIONS(347),
    [anon_sym_BANGcoda_BANG] = ACTIONS(347),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(347),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(347),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(347),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(347),
    [anon_sym_BANGfine_BANG] = ACTIONS(347),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(347),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(347),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(347),
  },
  [49] = {
    [sym_noCommentText] = ACTIONS(349),
    [sym_note_skip] = ACTIONS(349),
    [aux_sym_chord_symbol_token1] = ACTIONS(349),
    [sym_annotation] = ACTIONS(349),
    [sym_bar_line] = ACTIONS(349),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(349),
    [sym_thin_double_bar_line] = ACTIONS(349),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(349),
    [sym_start_of_repeated_section] = ACTIONS(349),
    [sym_end_of_repeated_section] = ACTIONS(349),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(349),
    [anon_sym_BANGtrill_BANG] = ACTIONS(349),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(349),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(349),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(349),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(349),
    [anon_sym_BANGmordent_BANG] = ACTIONS(349),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(349),
    [anon_sym_BANGroll_BANG] = ACTIONS(349),
    [anon_sym_BANGturn_BANG] = ACTIONS(349),
    [anon_sym_BANGturnx_BANG] = ACTIONS(349),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(349),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(349),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(349),
    [anon_sym_BANG_GT_BANG] = ACTIONS(349),
    [anon_sym_BANGaccent_BANG] = ACTIONS(349),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(349),
    [anon_sym_BANGfermata_BANG] = ACTIONS(349),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(349),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(349),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(349),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(349),
    [anon_sym_BANGplus_BANG] = ACTIONS(349),
    [anon_sym_BANGsnap_BANG] = ACTIONS(349),
    [anon_sym_BANGslide_BANG] = ACTIONS(349),
    [anon_sym_BANGwedge_BANG] = ACTIONS(349),
    [anon_sym_BANGupbow_BANG] = ACTIONS(349),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(349),
    [anon_sym_BANGopen_BANG] = ACTIONS(349),
    [anon_sym_BANGthumb_BANG] = ACTIONS(349),
    [anon_sym_BANGbreath_BANG] = ACTIONS(349),
    [anon_sym_BANGpppp_BANG] = ACTIONS(349),
    [anon_sym_BANGppp_BANG] = ACTIONS(349),
    [anon_sym_BANGpp_BANG] = ACTIONS(349),
    [anon_sym_BANGp_BANG] = ACTIONS(349),
    [anon_sym_BANGmp_BANG] = ACTIONS(349),
    [anon_sym_BANGmf_BANG] = ACTIONS(349),
    [anon_sym_BANGf_BANG] = ACTIONS(349),
    [anon_sym_BANGff_BANG] = ACTIONS(349),
    [anon_sym_BANGfff_BANG] = ACTIONS(349),
    [anon_sym_BANGffff_BANG] = ACTIONS(349),
    [anon_sym_BANGsfz_BANG] = ACTIONS(349),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(349),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(349),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(349),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(349),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(349),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(349),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(349),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(349),
    [anon_sym_BANGsegno_BANG] = ACTIONS(349),
    [anon_sym_BANGcoda_BANG] = ACTIONS(349),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(349),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(349),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(349),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(349),
    [anon_sym_BANGfine_BANG] = ACTIONS(349),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(349),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(349),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(349),
  },
  [50] = {
    [sym_noCommentText] = ACTIONS(202),
    [sym_note_skip] = ACTIONS(202),
    [aux_sym_chord_symbol_token1] = ACTIONS(202),
    [sym_annotation] = ACTIONS(202),
    [sym_bar_line] = ACTIONS(202),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(202),
    [sym_thin_double_bar_line] = ACTIONS(202),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(202),
    [sym_start_of_repeated_section] = ACTIONS(202),
    [sym_end_of_repeated_section] = ACTIONS(202),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(202),
    [anon_sym_BANGtrill_BANG] = ACTIONS(202),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(202),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(202),
    [anon_sym_BANGmordent_BANG] = ACTIONS(202),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(202),
    [anon_sym_BANGroll_BANG] = ACTIONS(202),
    [anon_sym_BANGturn_BANG] = ACTIONS(202),
    [anon_sym_BANGturnx_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(202),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_BANG] = ACTIONS(202),
    [anon_sym_BANGaccent_BANG] = ACTIONS(202),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(202),
    [anon_sym_BANGfermata_BANG] = ACTIONS(202),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(202),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(202),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(202),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(202),
    [anon_sym_BANGplus_BANG] = ACTIONS(202),
    [anon_sym_BANGsnap_BANG] = ACTIONS(202),
    [anon_sym_BANGslide_BANG] = ACTIONS(202),
    [anon_sym_BANGwedge_BANG] = ACTIONS(202),
    [anon_sym_BANGupbow_BANG] = ACTIONS(202),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(202),
    [anon_sym_BANGopen_BANG] = ACTIONS(202),
    [anon_sym_BANGthumb_BANG] = ACTIONS(202),
    [anon_sym_BANGbreath_BANG] = ACTIONS(202),
    [anon_sym_BANGpppp_BANG] = ACTIONS(202),
    [anon_sym_BANGppp_BANG] = ACTIONS(202),
    [anon_sym_BANGpp_BANG] = ACTIONS(202),
    [anon_sym_BANGp_BANG] = ACTIONS(202),
    [anon_sym_BANGmp_BANG] = ACTIONS(202),
    [anon_sym_BANGmf_BANG] = ACTIONS(202),
    [anon_sym_BANGf_BANG] = ACTIONS(202),
    [anon_sym_BANGff_BANG] = ACTIONS(202),
    [anon_sym_BANGfff_BANG] = ACTIONS(202),
    [anon_sym_BANGffff_BANG] = ACTIONS(202),
    [anon_sym_BANGsfz_BANG] = ACTIONS(202),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(202),
    [anon_sym_BANGsegno_BANG] = ACTIONS(202),
    [anon_sym_BANGcoda_BANG] = ACTIONS(202),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(202),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(202),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(202),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(202),
    [anon_sym_BANGfine_BANG] = ACTIONS(202),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(202),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(202),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(202),
  },
  [51] = {
    [sym_noCommentText] = ACTIONS(351),
    [sym_note_skip] = ACTIONS(351),
    [aux_sym_chord_symbol_token1] = ACTIONS(351),
    [sym_annotation] = ACTIONS(351),
    [sym_bar_line] = ACTIONS(351),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(351),
    [sym_thin_double_bar_line] = ACTIONS(351),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(351),
    [sym_start_of_repeated_section] = ACTIONS(351),
    [sym_end_of_repeated_section] = ACTIONS(351),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(351),
    [anon_sym_BANGtrill_BANG] = ACTIONS(351),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(351),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(351),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(351),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(351),
    [anon_sym_BANGmordent_BANG] = ACTIONS(351),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(351),
    [anon_sym_BANGroll_BANG] = ACTIONS(351),
    [anon_sym_BANGturn_BANG] = ACTIONS(351),
    [anon_sym_BANGturnx_BANG] = ACTIONS(351),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(351),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(351),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(351),
    [anon_sym_BANG_GT_BANG] = ACTIONS(351),
    [anon_sym_BANGaccent_BANG] = ACTIONS(351),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(351),
    [anon_sym_BANGfermata_BANG] = ACTIONS(351),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(351),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(351),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(351),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(351),
    [anon_sym_BANGplus_BANG] = ACTIONS(351),
    [anon_sym_BANGsnap_BANG] = ACTIONS(351),
    [anon_sym_BANGslide_BANG] = ACTIONS(351),
    [anon_sym_BANGwedge_BANG] = ACTIONS(351),
    [anon_sym_BANGupbow_BANG] = ACTIONS(351),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(351),
    [anon_sym_BANGopen_BANG] = ACTIONS(351),
    [anon_sym_BANGthumb_BANG] = ACTIONS(351),
    [anon_sym_BANGbreath_BANG] = ACTIONS(351),
    [anon_sym_BANGpppp_BANG] = ACTIONS(351),
    [anon_sym_BANGppp_BANG] = ACTIONS(351),
    [anon_sym_BANGpp_BANG] = ACTIONS(351),
    [anon_sym_BANGp_BANG] = ACTIONS(351),
    [anon_sym_BANGmp_BANG] = ACTIONS(351),
    [anon_sym_BANGmf_BANG] = ACTIONS(351),
    [anon_sym_BANGf_BANG] = ACTIONS(351),
    [anon_sym_BANGff_BANG] = ACTIONS(351),
    [anon_sym_BANGfff_BANG] = ACTIONS(351),
    [anon_sym_BANGffff_BANG] = ACTIONS(351),
    [anon_sym_BANGsfz_BANG] = ACTIONS(351),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(351),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(351),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(351),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(351),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(351),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(351),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(351),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(351),
    [anon_sym_BANGsegno_BANG] = ACTIONS(351),
    [anon_sym_BANGcoda_BANG] = ACTIONS(351),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(351),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(351),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(351),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(351),
    [anon_sym_BANGfine_BANG] = ACTIONS(351),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(351),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(351),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(351),
  },
  [52] = {
    [sym_noCommentText] = ACTIONS(353),
    [sym_note_skip] = ACTIONS(353),
    [aux_sym_chord_symbol_token1] = ACTIONS(353),
    [sym_annotation] = ACTIONS(353),
    [sym_bar_line] = ACTIONS(353),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(353),
    [sym_thin_double_bar_line] = ACTIONS(353),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(353),
    [sym_start_of_repeated_section] = ACTIONS(353),
    [sym_end_of_repeated_section] = ACTIONS(353),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(353),
    [anon_sym_BANGtrill_BANG] = ACTIONS(353),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(353),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(353),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(353),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(353),
    [anon_sym_BANGmordent_BANG] = ACTIONS(353),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(353),
    [anon_sym_BANGroll_BANG] = ACTIONS(353),
    [anon_sym_BANGturn_BANG] = ACTIONS(353),
    [anon_sym_BANGturnx_BANG] = ACTIONS(353),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(353),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(353),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(353),
    [anon_sym_BANG_GT_BANG] = ACTIONS(353),
    [anon_sym_BANGaccent_BANG] = ACTIONS(353),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(353),
    [anon_sym_BANGfermata_BANG] = ACTIONS(353),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(353),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(353),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(353),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(353),
    [anon_sym_BANGplus_BANG] = ACTIONS(353),
    [anon_sym_BANGsnap_BANG] = ACTIONS(353),
    [anon_sym_BANGslide_BANG] = ACTIONS(353),
    [anon_sym_BANGwedge_BANG] = ACTIONS(353),
    [anon_sym_BANGupbow_BANG] = ACTIONS(353),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(353),
    [anon_sym_BANGopen_BANG] = ACTIONS(353),
    [anon_sym_BANGthumb_BANG] = ACTIONS(353),
    [anon_sym_BANGbreath_BANG] = ACTIONS(353),
    [anon_sym_BANGpppp_BANG] = ACTIONS(353),
    [anon_sym_BANGppp_BANG] = ACTIONS(353),
    [anon_sym_BANGpp_BANG] = ACTIONS(353),
    [anon_sym_BANGp_BANG] = ACTIONS(353),
    [anon_sym_BANGmp_BANG] = ACTIONS(353),
    [anon_sym_BANGmf_BANG] = ACTIONS(353),
    [anon_sym_BANGf_BANG] = ACTIONS(353),
    [anon_sym_BANGff_BANG] = ACTIONS(353),
    [anon_sym_BANGfff_BANG] = ACTIONS(353),
    [anon_sym_BANGffff_BANG] = ACTIONS(353),
    [anon_sym_BANGsfz_BANG] = ACTIONS(353),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(353),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(353),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(353),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(353),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(353),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(353),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(353),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(353),
    [anon_sym_BANGsegno_BANG] = ACTIONS(353),
    [anon_sym_BANGcoda_BANG] = ACTIONS(353),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(353),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(353),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(353),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(353),
    [anon_sym_BANGfine_BANG] = ACTIONS(353),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(353),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(353),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(353),
  },
  [53] = {
    [sym_noCommentText] = ACTIONS(261),
    [sym_note_skip] = ACTIONS(261),
    [aux_sym_chord_symbol_token1] = ACTIONS(261),
    [sym_annotation] = ACTIONS(261),
    [sym_bar_line] = ACTIONS(261),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(261),
    [sym_thin_double_bar_line] = ACTIONS(261),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(261),
    [sym_start_of_repeated_section] = ACTIONS(261),
    [sym_end_of_repeated_section] = ACTIONS(261),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(261),
    [anon_sym_BANGtrill_BANG] = ACTIONS(261),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(261),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(261),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(261),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(261),
    [anon_sym_BANGmordent_BANG] = ACTIONS(261),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(261),
    [anon_sym_BANGroll_BANG] = ACTIONS(261),
    [anon_sym_BANGturn_BANG] = ACTIONS(261),
    [anon_sym_BANGturnx_BANG] = ACTIONS(261),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(261),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(261),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(261),
    [anon_sym_BANG_GT_BANG] = ACTIONS(261),
    [anon_sym_BANGaccent_BANG] = ACTIONS(261),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(261),
    [anon_sym_BANGfermata_BANG] = ACTIONS(261),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(261),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(261),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(261),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(261),
    [anon_sym_BANGplus_BANG] = ACTIONS(261),
    [anon_sym_BANGsnap_BANG] = ACTIONS(261),
    [anon_sym_BANGslide_BANG] = ACTIONS(261),
    [anon_sym_BANGwedge_BANG] = ACTIONS(261),
    [anon_sym_BANGupbow_BANG] = ACTIONS(261),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(261),
    [anon_sym_BANGopen_BANG] = ACTIONS(261),
    [anon_sym_BANGthumb_BANG] = ACTIONS(261),
    [anon_sym_BANGbreath_BANG] = ACTIONS(261),
    [anon_sym_BANGpppp_BANG] = ACTIONS(261),
    [anon_sym_BANGppp_BANG] = ACTIONS(261),
    [anon_sym_BANGpp_BANG] = ACTIONS(261),
    [anon_sym_BANGp_BANG] = ACTIONS(261),
    [anon_sym_BANGmp_BANG] = ACTIONS(261),
    [anon_sym_BANGmf_BANG] = ACTIONS(261),
    [anon_sym_BANGf_BANG] = ACTIONS(261),
    [anon_sym_BANGff_BANG] = ACTIONS(261),
    [anon_sym_BANGfff_BANG] = ACTIONS(261),
    [anon_sym_BANGffff_BANG] = ACTIONS(261),
    [anon_sym_BANGsfz_BANG] = ACTIONS(261),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(261),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(261),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(261),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(261),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(261),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(261),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(261),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(261),
    [anon_sym_BANGsegno_BANG] = ACTIONS(261),
    [anon_sym_BANGcoda_BANG] = ACTIONS(261),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(261),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(261),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(261),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(261),
    [anon_sym_BANGfine_BANG] = ACTIONS(261),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(261),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(261),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(261),
  },
  [54] = {
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(242), 1,
      sym_symbol,
    ACTIONS(355), 59,
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
  [65] = 9,
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(7), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(13), 1,
      anon_sym_U_COLON,
    ACTIONS(357), 1,
      anon_sym_X_COLON,
    STATE(57), 1,
      aux_sym_file_header_repeat1,
    STATE(225), 2,
      sym_stylesheet_directives,
      sym_file_header_info_line,
    STATE(232), 2,
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
  [111] = 9,
    ACTIONS(359), 1,
      sym_COMMENT,
    ACTIONS(362), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(365), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(371), 1,
      anon_sym_X_COLON,
    ACTIONS(373), 1,
      anon_sym_U_COLON,
    STATE(57), 1,
      aux_sym_file_header_repeat1,
    STATE(225), 2,
      sym_stylesheet_directives,
      sym_file_header_info_line,
    STATE(232), 2,
      sym_abc_version,
      sym_user_defined,
    ACTIONS(368), 17,
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
  [157] = 4,
    ACTIONS(378), 1,
      sym__NL,
    STATE(58), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(381), 2,
      sym_COMMENT,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(376), 22,
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
  [192] = 4,
    ACTIONS(383), 1,
      sym__NL,
    STATE(58), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(385), 2,
      sym_COMMENT,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(371), 20,
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
  [225] = 16,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(387), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(389), 1,
      aux_sym_beam_token1,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(399), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(401), 1,
      sym_tuplet_marker,
    STATE(102), 1,
      sym__pitch,
    STATE(112), 1,
      sym_note,
    STATE(157), 1,
      sym_chord_symbol,
    STATE(183), 1,
      sym_decoration,
    STATE(73), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(62), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [278] = 16,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(387), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(399), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(401), 1,
      sym_tuplet_marker,
    ACTIONS(403), 1,
      aux_sym__MUSIC_CODE_token1,
    STATE(102), 1,
      sym__pitch,
    STATE(112), 1,
      sym_note,
    STATE(157), 1,
      sym_chord_symbol,
    STATE(183), 1,
      sym_decoration,
    STATE(73), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(60), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [331] = 16,
    ACTIONS(405), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(408), 1,
      aux_sym_beam_token1,
    ACTIONS(410), 1,
      anon_sym_LBRACK,
    ACTIONS(413), 1,
      sym_alteration,
    ACTIONS(416), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(422), 1,
      aux_sym_grace_note_token1,
    ACTIONS(425), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(428), 1,
      sym_tuplet_marker,
    ACTIONS(431), 1,
      sym_decoration_shorthand,
    STATE(102), 1,
      sym__pitch,
    STATE(112), 1,
      sym_note,
    STATE(157), 1,
      sym_chord_symbol,
    STATE(183), 1,
      sym_decoration,
    STATE(73), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(62), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [384] = 14,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(45), 1,
      sym_tuplet_marker,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(399), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(434), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(127), 1,
      sym_note,
    STATE(158), 1,
      sym_chord_symbol,
    STATE(185), 1,
      sym_decoration,
    STATE(70), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(260), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [430] = 14,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(399), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(401), 1,
      sym_tuplet_marker,
    STATE(102), 1,
      sym__pitch,
    STATE(112), 1,
      sym_note,
    STATE(157), 1,
      sym_chord_symbol,
    STATE(183), 1,
      sym_decoration,
    STATE(73), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(145), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [476] = 3,
    ACTIONS(438), 1,
      sym_octave,
    STATE(67), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(436), 14,
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
  [499] = 3,
    ACTIONS(440), 1,
      sym_octave,
    STATE(68), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(436), 14,
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
  [522] = 3,
    ACTIONS(444), 1,
      sym_octave,
    STATE(67), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(442), 14,
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
  [545] = 3,
    ACTIONS(438), 1,
      sym_octave,
    STATE(67), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(447), 14,
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
  [568] = 3,
    ACTIONS(451), 1,
      sym_octave,
    STATE(65), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(449), 14,
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
  [591] = 13,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(399), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(455), 1,
      sym_tuplet_marker,
    STATE(91), 1,
      sym__pitch,
    STATE(121), 1,
      sym_note,
    STATE(156), 1,
      sym_chord_symbol,
    STATE(187), 1,
      sym_decoration,
    STATE(144), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [632] = 7,
    ACTIONS(461), 1,
      anon_sym_DASH,
    ACTIONS(463), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(465), 1,
      aux_sym_verse_number_token1,
    ACTIONS(457), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(78), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(152), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(459), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [661] = 4,
    ACTIONS(467), 1,
      aux_sym_beam_token1,
    ACTIONS(469), 1,
      sym_octave,
    STATE(75), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(449), 11,
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
  [684] = 13,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(399), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(471), 1,
      anon_sym_LBRACK,
    ACTIONS(473), 1,
      sym_tuplet_marker,
    STATE(102), 1,
      sym__pitch,
    STATE(115), 1,
      sym_note,
    STATE(153), 1,
      sym_chord_symbol,
    STATE(188), 1,
      sym_decoration,
    STATE(144), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [725] = 4,
    ACTIONS(475), 1,
      aux_sym_beam_token1,
    ACTIONS(477), 1,
      sym_octave,
    STATE(76), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(436), 11,
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
  [748] = 4,
    ACTIONS(475), 1,
      aux_sym_beam_token1,
    ACTIONS(479), 1,
      sym_octave,
    STATE(77), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(436), 11,
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
  [771] = 4,
    ACTIONS(479), 1,
      sym_octave,
    ACTIONS(481), 1,
      aux_sym_beam_token1,
    STATE(77), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(447), 11,
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
  [794] = 4,
    ACTIONS(483), 1,
      aux_sym_beam_token1,
    ACTIONS(485), 1,
      sym_octave,
    STATE(77), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(442), 11,
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
  [817] = 7,
    ACTIONS(493), 1,
      anon_sym_DASH,
    ACTIONS(496), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(499), 1,
      aux_sym_verse_number_token1,
    ACTIONS(488), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(78), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(152), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(490), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [846] = 11,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(502), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [882] = 11,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(504), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [918] = 11,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(506), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [954] = 11,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(508), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [990] = 11,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(510), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1026] = 8,
    ACTIONS(512), 1,
      sym__NL,
    ACTIONS(517), 1,
      anon_sym_DASH,
    ACTIONS(520), 1,
      sym_UNDERSCORE,
    ACTIONS(523), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(526), 1,
      aux_sym_verse_number_token1,
    STATE(84), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(514), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(170), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1056] = 8,
    ACTIONS(529), 1,
      sym__NL,
    ACTIONS(533), 1,
      anon_sym_DASH,
    ACTIONS(535), 1,
      sym_UNDERSCORE,
    ACTIONS(537), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(539), 1,
      aux_sym_verse_number_token1,
    STATE(84), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(531), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(170), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1086] = 11,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(541), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1122] = 11,
    ACTIONS(543), 1,
      anon_sym_RBRACK,
    ACTIONS(545), 1,
      sym_alteration,
    ACTIONS(548), 1,
      sym_note_letter,
    ACTIONS(551), 1,
      sym_rest,
    ACTIONS(554), 1,
      aux_sym_grace_note_token1,
    ACTIONS(557), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1158] = 11,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(560), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1194] = 11,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(562), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1230] = 11,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(564), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1266] = 2,
    ACTIONS(568), 1,
      sym_rhythm,
    ACTIONS(566), 12,
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
  [1284] = 11,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(570), 1,
      anon_sym_RBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(87), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1320] = 10,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(81), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1353] = 7,
    ACTIONS(533), 1,
      anon_sym_DASH,
    ACTIONS(535), 1,
      sym_UNDERSCORE,
    ACTIONS(537), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(539), 1,
      aux_sym_verse_number_token1,
    STATE(85), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(531), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(170), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1380] = 10,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(83), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1413] = 10,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(86), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1446] = 7,
    ACTIONS(459), 1,
      sym_UNDERSCORE,
    ACTIONS(463), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(465), 1,
      aux_sym_verse_number_token1,
    ACTIONS(574), 1,
      anon_sym_DASH,
    STATE(71), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(572), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(152), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1473] = 10,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(89), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1506] = 10,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(88), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1539] = 10,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(80), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1572] = 10,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(79), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1605] = 3,
    ACTIONS(576), 1,
      aux_sym_beam_token1,
    ACTIONS(578), 1,
      sym_rhythm,
    ACTIONS(566), 10,
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
  [1624] = 1,
    ACTIONS(580), 12,
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
  [1639] = 10,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(82), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1672] = 10,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(92), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1705] = 10,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(196), 1,
      sym_decoration,
    STATE(90), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(131), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1738] = 2,
    ACTIONS(584), 1,
      sym_rhythm,
    ACTIONS(582), 10,
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
  [1754] = 2,
    ACTIONS(588), 1,
      sym_rhythm,
    ACTIONS(586), 10,
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
  [1770] = 2,
    ACTIONS(592), 1,
      sym_rhythm,
    ACTIONS(590), 10,
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
  [1786] = 3,
    ACTIONS(594), 1,
      aux_sym_beam_token1,
    ACTIONS(596), 1,
      sym_rhythm,
    ACTIONS(582), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1804] = 3,
    ACTIONS(598), 1,
      aux_sym_beam_token1,
    ACTIONS(600), 1,
      sym_rhythm,
    ACTIONS(586), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1822] = 3,
    ACTIONS(604), 1,
      aux_sym_beam_token1,
    ACTIONS(606), 1,
      aux_sym_note_construct_token1,
    ACTIONS(602), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1840] = 2,
    ACTIONS(608), 1,
      aux_sym_beam_token1,
    ACTIONS(580), 10,
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
  [1856] = 2,
    ACTIONS(612), 1,
      aux_sym_note_construct_token1,
    ACTIONS(610), 10,
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
  [1872] = 3,
    ACTIONS(616), 1,
      aux_sym_beam_token1,
    ACTIONS(618), 1,
      aux_sym_note_construct_token1,
    ACTIONS(614), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1890] = 2,
    ACTIONS(622), 1,
      sym_rhythm,
    ACTIONS(620), 10,
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
  [1906] = 3,
    ACTIONS(624), 1,
      aux_sym_beam_token1,
    ACTIONS(626), 1,
      sym_rhythm,
    ACTIONS(590), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1924] = 2,
    ACTIONS(630), 1,
      sym_rhythm,
    ACTIONS(628), 10,
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
  [1940] = 3,
    ACTIONS(634), 1,
      aux_sym_beam_token1,
    ACTIONS(636), 1,
      aux_sym_note_construct_token1,
    ACTIONS(632), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1958] = 3,
    ACTIONS(638), 1,
      aux_sym_beam_token1,
    ACTIONS(640), 1,
      sym_rhythm,
    ACTIONS(628), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1976] = 2,
    ACTIONS(642), 1,
      aux_sym_note_construct_token1,
    ACTIONS(614), 10,
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
  [1992] = 2,
    ACTIONS(644), 1,
      aux_sym_note_construct_token1,
    ACTIONS(632), 10,
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
  [2008] = 3,
    ACTIONS(648), 1,
      aux_sym_beam_token1,
    ACTIONS(650), 1,
      aux_sym_note_construct_token1,
    ACTIONS(646), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2026] = 3,
    ACTIONS(652), 1,
      aux_sym_beam_token1,
    ACTIONS(654), 1,
      sym_rhythm,
    ACTIONS(620), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2044] = 3,
    ACTIONS(656), 1,
      aux_sym_beam_token1,
    ACTIONS(658), 1,
      aux_sym_note_construct_token1,
    ACTIONS(610), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2062] = 2,
    ACTIONS(660), 1,
      aux_sym_note_construct_token1,
    ACTIONS(646), 10,
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
  [2078] = 2,
    ACTIONS(662), 1,
      aux_sym_note_construct_token1,
    ACTIONS(602), 10,
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
  [2094] = 2,
    ACTIONS(638), 1,
      aux_sym_beam_token1,
    ACTIONS(628), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2109] = 1,
    ACTIONS(582), 10,
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
  [2122] = 2,
    ACTIONS(666), 1,
      aux_sym_beam_token1,
    ACTIONS(664), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2137] = 9,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(41), 1,
      aux_sym_grace_note_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    STATE(91), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(194), 1,
      sym_decoration,
    STATE(144), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2166] = 1,
    ACTIONS(632), 10,
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
  [2179] = 2,
    ACTIONS(594), 1,
      aux_sym_beam_token1,
    ACTIONS(582), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2194] = 2,
    ACTIONS(670), 1,
      aux_sym_beam_token1,
    ACTIONS(668), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2209] = 2,
    ACTIONS(598), 1,
      aux_sym_beam_token1,
    ACTIONS(586), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2224] = 2,
    ACTIONS(656), 1,
      aux_sym_beam_token1,
    ACTIONS(610), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2239] = 2,
    ACTIONS(652), 1,
      aux_sym_beam_token1,
    ACTIONS(620), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2254] = 1,
    ACTIONS(610), 10,
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
  [2267] = 2,
    ACTIONS(634), 1,
      aux_sym_beam_token1,
    ACTIONS(632), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2282] = 1,
    ACTIONS(586), 10,
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
  [2295] = 1,
    ACTIONS(668), 10,
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
  [2308] = 2,
    ACTIONS(648), 1,
      aux_sym_beam_token1,
    ACTIONS(646), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2323] = 1,
    ACTIONS(620), 10,
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
  [2336] = 3,
    ACTIONS(674), 1,
      aux_sym_grace_note_token1,
    STATE(144), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(672), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2353] = 2,
    ACTIONS(408), 1,
      aux_sym_beam_token1,
    ACTIONS(677), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2368] = 1,
    ACTIONS(614), 10,
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
  [2381] = 1,
    ACTIONS(646), 10,
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
  [2394] = 2,
    ACTIONS(616), 1,
      aux_sym_beam_token1,
    ACTIONS(614), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2409] = 1,
    ACTIONS(664), 10,
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
  [2422] = 1,
    ACTIONS(628), 10,
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
  [2435] = 1,
    ACTIONS(679), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2447] = 1,
    ACTIONS(681), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2459] = 9,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    ACTIONS(685), 1,
      sym_tuplet_marker,
    STATE(102), 1,
      sym__pitch,
    STATE(119), 1,
      sym_note,
    STATE(179), 1,
      sym_decoration,
  [2487] = 1,
    ACTIONS(687), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2499] = 1,
    ACTIONS(689), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2511] = 9,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(691), 1,
      anon_sym_LBRACK,
    ACTIONS(693), 1,
      sym_tuplet_marker,
    STATE(91), 1,
      sym__pitch,
    STATE(122), 1,
      sym_note,
    STATE(189), 1,
      sym_decoration,
  [2539] = 9,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(471), 1,
      anon_sym_LBRACK,
    ACTIONS(473), 1,
      sym_tuplet_marker,
    STATE(102), 1,
      sym__pitch,
    STATE(115), 1,
      sym_note,
    STATE(188), 1,
      sym_decoration,
  [2567] = 9,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(455), 1,
      sym_tuplet_marker,
    STATE(91), 1,
      sym__pitch,
    STATE(121), 1,
      sym_note,
    STATE(187), 1,
      sym_decoration,
  [2595] = 8,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym__pitch,
    STATE(119), 1,
      sym_note,
    STATE(179), 1,
      sym_decoration,
  [2620] = 5,
    ACTIONS(192), 1,
      sym_words_postbody,
    STATE(58), 1,
      aux_sym_file_structure_repeat1,
    STATE(203), 1,
      sym_lyric_section,
    STATE(176), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(695), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2639] = 8,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(126), 1,
      sym_note,
    STATE(180), 1,
      sym_decoration,
  [2664] = 8,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(121), 1,
      sym_note,
    STATE(187), 1,
      sym_decoration,
  [2689] = 8,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(691), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(122), 1,
      sym_note,
    STATE(189), 1,
      sym_decoration,
  [2714] = 2,
    ACTIONS(687), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(699), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2727] = 5,
    ACTIONS(192), 1,
      sym_words_postbody,
    STATE(160), 1,
      aux_sym_file_structure_repeat1,
    STATE(204), 1,
      sym_lyric_section,
    STATE(176), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(701), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2746] = 8,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(471), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym__pitch,
    STATE(115), 1,
      sym_note,
    STATE(188), 1,
      sym_decoration,
  [2771] = 8,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(703), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym__pitch,
    STATE(123), 1,
      sym_note,
    STATE(186), 1,
      sym_decoration,
  [2796] = 2,
    ACTIONS(689), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(705), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2809] = 2,
    ACTIONS(679), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(707), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2822] = 2,
    ACTIONS(681), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(709), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2835] = 1,
    ACTIONS(711), 8,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2846] = 1,
    ACTIONS(713), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2855] = 3,
    ACTIONS(717), 1,
      sym_words_postbody,
    STATE(173), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(715), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2868] = 6,
    ACTIONS(720), 1,
      ts_builtin_sym_end,
    ACTIONS(722), 1,
      anon_sym_X_COLON,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(174), 1,
      aux_sym_file_structure_repeat2,
    STATE(197), 1,
      sym_tune,
  [2887] = 1,
    ACTIONS(725), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2896] = 3,
    ACTIONS(192), 1,
      sym_words_postbody,
    STATE(173), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(727), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2909] = 6,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    ACTIONS(729), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(174), 1,
      aux_sym_file_structure_repeat2,
    STATE(197), 1,
      sym_tune,
  [2928] = 1,
    ACTIONS(731), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2937] = 6,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(703), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym__pitch,
    STATE(123), 1,
      sym_note,
  [2956] = 6,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(733), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(114), 1,
      sym_note,
  [2975] = 1,
    ACTIONS(735), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2984] = 1,
    ACTIONS(737), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2993] = 6,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(471), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym__pitch,
    STATE(115), 1,
      sym_note,
  [3012] = 1,
    ACTIONS(739), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3021] = 6,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(121), 1,
      sym_note,
  [3040] = 6,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(741), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym__pitch,
    STATE(125), 1,
      sym_note,
  [3059] = 6,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(691), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(122), 1,
      sym_note,
  [3078] = 6,
    ACTIONS(393), 1,
      sym_alteration,
    ACTIONS(395), 1,
      sym_note_letter,
    ACTIONS(397), 1,
      sym_rest,
    ACTIONS(683), 1,
      anon_sym_LBRACK,
    STATE(102), 1,
      sym__pitch,
    STATE(119), 1,
      sym_note,
  [3097] = 6,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(697), 1,
      anon_sym_LBRACK,
    STATE(91), 1,
      sym__pitch,
    STATE(126), 1,
      sym_note,
  [3116] = 1,
    ACTIONS(743), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [3125] = 6,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    ACTIONS(745), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(174), 1,
      aux_sym_file_structure_repeat2,
    STATE(197), 1,
      sym_tune,
  [3144] = 5,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(191), 1,
      aux_sym_file_structure_repeat2,
    STATE(197), 1,
      sym_tune,
  [3160] = 4,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(747), 1,
      aux_sym_grace_note_token2,
    STATE(195), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [3174] = 5,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    STATE(91), 1,
      sym__pitch,
    STATE(190), 1,
      sym_note,
  [3190] = 4,
    ACTIONS(749), 1,
      sym_alteration,
    ACTIONS(752), 1,
      sym_note_letter,
    ACTIONS(755), 1,
      aux_sym_grace_note_token2,
    STATE(195), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [3204] = 5,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    STATE(91), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
  [3220] = 3,
    ACTIONS(759), 1,
      sym__NL,
    STATE(198), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(757), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [3231] = 3,
    ACTIONS(383), 1,
      sym__NL,
    STATE(58), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(720), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [3242] = 1,
    ACTIONS(761), 4,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
      sym_words_postbody,
  [3249] = 2,
    ACTIONS(763), 1,
      sym_alteration,
    ACTIONS(765), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [3258] = 3,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    STATE(193), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [3269] = 1,
    ACTIONS(767), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [3276] = 1,
    ACTIONS(769), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [3282] = 1,
    ACTIONS(695), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [3288] = 3,
    ACTIONS(771), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(773), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(775), 1,
      sym_chord_type,
  [3298] = 3,
    ACTIONS(777), 1,
      sym_noCommentText,
    ACTIONS(779), 1,
      aux_sym_words_line_token1,
    STATE(209), 1,
      aux_sym_words_line_repeat2,
  [3308] = 3,
    ACTIONS(781), 1,
      sym_noCommentText,
    ACTIONS(783), 1,
      anon_sym_DOT,
    STATE(207), 1,
      aux_sym_abc_version_repeat1,
  [3318] = 3,
    ACTIONS(779), 1,
      aux_sym_words_line_token1,
    ACTIONS(786), 1,
      sym_noCommentText,
    STATE(206), 1,
      aux_sym_words_line_repeat2,
  [3328] = 3,
    ACTIONS(788), 1,
      sym_noCommentText,
    ACTIONS(790), 1,
      aux_sym_words_line_token1,
    STATE(209), 1,
      aux_sym_words_line_repeat2,
  [3338] = 1,
    ACTIONS(701), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [3344] = 3,
    ACTIONS(793), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(795), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(797), 1,
      sym_chord_type,
  [3354] = 3,
    ACTIONS(799), 1,
      sym_noCommentText,
    ACTIONS(801), 1,
      anon_sym_DOT,
    STATE(214), 1,
      aux_sym_abc_version_repeat1,
  [3364] = 1,
    ACTIONS(803), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [3370] = 3,
    ACTIONS(801), 1,
      anon_sym_DOT,
    ACTIONS(805), 1,
      sym_noCommentText,
    STATE(207), 1,
      aux_sym_abc_version_repeat1,
  [3380] = 2,
    ACTIONS(807), 1,
      sym__NL,
    ACTIONS(809), 1,
      sym_COMMENT,
  [3387] = 2,
    ACTIONS(811), 1,
      sym_note_letter,
    STATE(261), 1,
      sym_chord_symbol_note,
  [3394] = 2,
    ACTIONS(813), 1,
      sym__NL,
    ACTIONS(815), 1,
      sym_COMMENT,
  [3401] = 2,
    ACTIONS(817), 1,
      sym_note_letter,
    STATE(211), 1,
      sym_chord_symbol_note,
  [3408] = 2,
    ACTIONS(819), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(821), 1,
      aux_sym_chord_symbol_token2,
  [3415] = 2,
    ACTIONS(823), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_nth_ending_number,
  [3422] = 2,
    ACTIONS(811), 1,
      sym_note_letter,
    STATE(271), 1,
      sym_chord_symbol_note,
  [3429] = 1,
    ACTIONS(825), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [3434] = 2,
    ACTIONS(817), 1,
      sym_note_letter,
    STATE(205), 1,
      sym_chord_symbol_note,
  [3441] = 2,
    ACTIONS(827), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(829), 1,
      aux_sym_chord_symbol_token2,
  [3448] = 2,
    ACTIONS(831), 1,
      sym__NL,
    STATE(59), 1,
      aux_sym_file_structure_repeat1,
  [3455] = 2,
    ACTIONS(765), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(833), 1,
      sym_alteration,
  [3462] = 2,
    ACTIONS(811), 1,
      sym_note_letter,
    STATE(259), 1,
      sym_chord_symbol_note,
  [3469] = 2,
    ACTIONS(835), 1,
      sym__NL,
    ACTIONS(837), 1,
      sym_COMMENT,
  [3476] = 2,
    ACTIONS(839), 1,
      anon_sym_LBRACK,
    STATE(27), 1,
      sym_nth_ending_number,
  [3483] = 2,
    ACTIONS(811), 1,
      sym_note_letter,
    STATE(270), 1,
      sym_chord_symbol_note,
  [3490] = 1,
    ACTIONS(781), 2,
      sym_noCommentText,
      anon_sym_DOT,
  [3495] = 1,
    ACTIONS(841), 1,
      sym_noCommentText,
  [3499] = 1,
    ACTIONS(843), 1,
      aux_sym_lyric_line_token1,
  [3503] = 1,
    ACTIONS(845), 1,
      ts_builtin_sym_end,
  [3507] = 1,
    ACTIONS(847), 1,
      anon_sym_DOT,
  [3511] = 1,
    ACTIONS(849), 1,
      aux_sym_nth_ending_number_token1,
  [3515] = 1,
    ACTIONS(851), 1,
      sym_note_letter,
  [3519] = 1,
    ACTIONS(853), 1,
      sym__NL,
  [3523] = 1,
    ACTIONS(855), 1,
      aux_sym_first_repeat_bar_token2,
  [3527] = 1,
    ACTIONS(857), 1,
      aux_sym_nth_ending_number_token1,
  [3531] = 1,
    ACTIONS(859), 1,
      sym_noCommentText,
  [3535] = 1,
    ACTIONS(861), 1,
      sym_noCommentText,
  [3539] = 1,
    ACTIONS(863), 1,
      aux_sym_first_repeat_bar_token2,
  [3543] = 1,
    ACTIONS(865), 1,
      anon_sym_EQ,
  [3547] = 1,
    ACTIONS(867), 1,
      aux_sym_nth_ending_number_token1,
  [3551] = 1,
    ACTIONS(869), 1,
      aux_sym_multimeasure_rest_token1,
  [3555] = 1,
    ACTIONS(263), 1,
      sym_noCommentText,
  [3559] = 1,
    ACTIONS(871), 1,
      sym_noCommentText,
  [3563] = 1,
    ACTIONS(873), 1,
      sym_note_letter,
  [3567] = 1,
    ACTIONS(875), 1,
      aux_sym_nth_ending_number_token1,
  [3571] = 1,
    ACTIONS(877), 1,
      anon_sym_LBRACK,
  [3575] = 1,
    ACTIONS(879), 1,
      sym__NL,
  [3579] = 1,
    ACTIONS(881), 1,
      ts_builtin_sym_end,
  [3583] = 1,
    ACTIONS(883), 1,
      anon_sym_LBRACK,
  [3587] = 1,
    ACTIONS(885), 1,
      aux_sym_nth_ending_number_token1,
  [3591] = 1,
    ACTIONS(887), 1,
      aux_sym_first_repeat_bar_token2,
  [3595] = 1,
    ACTIONS(889), 1,
      aux_sym_first_repeat_bar_token2,
  [3599] = 1,
    ACTIONS(891), 1,
      anon_sym_DOT,
  [3603] = 1,
    ACTIONS(893), 1,
      aux_sym_chord_symbol_token1,
  [3607] = 1,
    ACTIONS(895), 1,
      aux_sym__MUSIC_CODE_token1,
  [3611] = 1,
    ACTIONS(897), 1,
      aux_sym_chord_symbol_token1,
  [3615] = 1,
    ACTIONS(899), 1,
      aux_sym_nth_ending_number_token1,
  [3619] = 1,
    ACTIONS(275), 1,
      sym__NL,
  [3623] = 1,
    ACTIONS(901), 1,
      sym__NL,
  [3627] = 1,
    ACTIONS(903), 1,
      sym__NL,
  [3631] = 1,
    ACTIONS(905), 1,
      sym_noCommentText,
  [3635] = 1,
    ACTIONS(907), 1,
      aux_sym_nth_ending_number_token1,
  [3639] = 1,
    ACTIONS(909), 1,
      anon_sym_LBRACK,
  [3643] = 1,
    ACTIONS(911), 1,
      anon_sym_LBRACK,
  [3647] = 1,
    ACTIONS(913), 1,
      aux_sym_chord_symbol_token1,
  [3651] = 1,
    ACTIONS(915), 1,
      aux_sym_chord_symbol_token1,
  [3655] = 1,
    ACTIONS(917), 1,
      aux_sym_lyric_line_token1,
  [3659] = 1,
    ACTIONS(919), 1,
      sym_noCommentText,
  [3663] = 1,
    ACTIONS(921), 1,
      sym__NL,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(55)] = 0,
  [SMALL_STATE(56)] = 65,
  [SMALL_STATE(57)] = 111,
  [SMALL_STATE(58)] = 157,
  [SMALL_STATE(59)] = 192,
  [SMALL_STATE(60)] = 225,
  [SMALL_STATE(61)] = 278,
  [SMALL_STATE(62)] = 331,
  [SMALL_STATE(63)] = 384,
  [SMALL_STATE(64)] = 430,
  [SMALL_STATE(65)] = 476,
  [SMALL_STATE(66)] = 499,
  [SMALL_STATE(67)] = 522,
  [SMALL_STATE(68)] = 545,
  [SMALL_STATE(69)] = 568,
  [SMALL_STATE(70)] = 591,
  [SMALL_STATE(71)] = 632,
  [SMALL_STATE(72)] = 661,
  [SMALL_STATE(73)] = 684,
  [SMALL_STATE(74)] = 725,
  [SMALL_STATE(75)] = 748,
  [SMALL_STATE(76)] = 771,
  [SMALL_STATE(77)] = 794,
  [SMALL_STATE(78)] = 817,
  [SMALL_STATE(79)] = 846,
  [SMALL_STATE(80)] = 882,
  [SMALL_STATE(81)] = 918,
  [SMALL_STATE(82)] = 954,
  [SMALL_STATE(83)] = 990,
  [SMALL_STATE(84)] = 1026,
  [SMALL_STATE(85)] = 1056,
  [SMALL_STATE(86)] = 1086,
  [SMALL_STATE(87)] = 1122,
  [SMALL_STATE(88)] = 1158,
  [SMALL_STATE(89)] = 1194,
  [SMALL_STATE(90)] = 1230,
  [SMALL_STATE(91)] = 1266,
  [SMALL_STATE(92)] = 1284,
  [SMALL_STATE(93)] = 1320,
  [SMALL_STATE(94)] = 1353,
  [SMALL_STATE(95)] = 1380,
  [SMALL_STATE(96)] = 1413,
  [SMALL_STATE(97)] = 1446,
  [SMALL_STATE(98)] = 1473,
  [SMALL_STATE(99)] = 1506,
  [SMALL_STATE(100)] = 1539,
  [SMALL_STATE(101)] = 1572,
  [SMALL_STATE(102)] = 1605,
  [SMALL_STATE(103)] = 1624,
  [SMALL_STATE(104)] = 1639,
  [SMALL_STATE(105)] = 1672,
  [SMALL_STATE(106)] = 1705,
  [SMALL_STATE(107)] = 1738,
  [SMALL_STATE(108)] = 1754,
  [SMALL_STATE(109)] = 1770,
  [SMALL_STATE(110)] = 1786,
  [SMALL_STATE(111)] = 1804,
  [SMALL_STATE(112)] = 1822,
  [SMALL_STATE(113)] = 1840,
  [SMALL_STATE(114)] = 1856,
  [SMALL_STATE(115)] = 1872,
  [SMALL_STATE(116)] = 1890,
  [SMALL_STATE(117)] = 1906,
  [SMALL_STATE(118)] = 1924,
  [SMALL_STATE(119)] = 1940,
  [SMALL_STATE(120)] = 1958,
  [SMALL_STATE(121)] = 1976,
  [SMALL_STATE(122)] = 1992,
  [SMALL_STATE(123)] = 2008,
  [SMALL_STATE(124)] = 2026,
  [SMALL_STATE(125)] = 2044,
  [SMALL_STATE(126)] = 2062,
  [SMALL_STATE(127)] = 2078,
  [SMALL_STATE(128)] = 2094,
  [SMALL_STATE(129)] = 2109,
  [SMALL_STATE(130)] = 2122,
  [SMALL_STATE(131)] = 2137,
  [SMALL_STATE(132)] = 2166,
  [SMALL_STATE(133)] = 2179,
  [SMALL_STATE(134)] = 2194,
  [SMALL_STATE(135)] = 2209,
  [SMALL_STATE(136)] = 2224,
  [SMALL_STATE(137)] = 2239,
  [SMALL_STATE(138)] = 2254,
  [SMALL_STATE(139)] = 2267,
  [SMALL_STATE(140)] = 2282,
  [SMALL_STATE(141)] = 2295,
  [SMALL_STATE(142)] = 2308,
  [SMALL_STATE(143)] = 2323,
  [SMALL_STATE(144)] = 2336,
  [SMALL_STATE(145)] = 2353,
  [SMALL_STATE(146)] = 2368,
  [SMALL_STATE(147)] = 2381,
  [SMALL_STATE(148)] = 2394,
  [SMALL_STATE(149)] = 2409,
  [SMALL_STATE(150)] = 2422,
  [SMALL_STATE(151)] = 2435,
  [SMALL_STATE(152)] = 2447,
  [SMALL_STATE(153)] = 2459,
  [SMALL_STATE(154)] = 2487,
  [SMALL_STATE(155)] = 2499,
  [SMALL_STATE(156)] = 2511,
  [SMALL_STATE(157)] = 2539,
  [SMALL_STATE(158)] = 2567,
  [SMALL_STATE(159)] = 2595,
  [SMALL_STATE(160)] = 2620,
  [SMALL_STATE(161)] = 2639,
  [SMALL_STATE(162)] = 2664,
  [SMALL_STATE(163)] = 2689,
  [SMALL_STATE(164)] = 2714,
  [SMALL_STATE(165)] = 2727,
  [SMALL_STATE(166)] = 2746,
  [SMALL_STATE(167)] = 2771,
  [SMALL_STATE(168)] = 2796,
  [SMALL_STATE(169)] = 2809,
  [SMALL_STATE(170)] = 2822,
  [SMALL_STATE(171)] = 2835,
  [SMALL_STATE(172)] = 2846,
  [SMALL_STATE(173)] = 2855,
  [SMALL_STATE(174)] = 2868,
  [SMALL_STATE(175)] = 2887,
  [SMALL_STATE(176)] = 2896,
  [SMALL_STATE(177)] = 2909,
  [SMALL_STATE(178)] = 2928,
  [SMALL_STATE(179)] = 2937,
  [SMALL_STATE(180)] = 2956,
  [SMALL_STATE(181)] = 2975,
  [SMALL_STATE(182)] = 2984,
  [SMALL_STATE(183)] = 2993,
  [SMALL_STATE(184)] = 3012,
  [SMALL_STATE(185)] = 3021,
  [SMALL_STATE(186)] = 3040,
  [SMALL_STATE(187)] = 3059,
  [SMALL_STATE(188)] = 3078,
  [SMALL_STATE(189)] = 3097,
  [SMALL_STATE(190)] = 3116,
  [SMALL_STATE(191)] = 3125,
  [SMALL_STATE(192)] = 3144,
  [SMALL_STATE(193)] = 3160,
  [SMALL_STATE(194)] = 3174,
  [SMALL_STATE(195)] = 3190,
  [SMALL_STATE(196)] = 3204,
  [SMALL_STATE(197)] = 3220,
  [SMALL_STATE(198)] = 3231,
  [SMALL_STATE(199)] = 3242,
  [SMALL_STATE(200)] = 3249,
  [SMALL_STATE(201)] = 3258,
  [SMALL_STATE(202)] = 3269,
  [SMALL_STATE(203)] = 3276,
  [SMALL_STATE(204)] = 3282,
  [SMALL_STATE(205)] = 3288,
  [SMALL_STATE(206)] = 3298,
  [SMALL_STATE(207)] = 3308,
  [SMALL_STATE(208)] = 3318,
  [SMALL_STATE(209)] = 3328,
  [SMALL_STATE(210)] = 3338,
  [SMALL_STATE(211)] = 3344,
  [SMALL_STATE(212)] = 3354,
  [SMALL_STATE(213)] = 3364,
  [SMALL_STATE(214)] = 3370,
  [SMALL_STATE(215)] = 3380,
  [SMALL_STATE(216)] = 3387,
  [SMALL_STATE(217)] = 3394,
  [SMALL_STATE(218)] = 3401,
  [SMALL_STATE(219)] = 3408,
  [SMALL_STATE(220)] = 3415,
  [SMALL_STATE(221)] = 3422,
  [SMALL_STATE(222)] = 3429,
  [SMALL_STATE(223)] = 3434,
  [SMALL_STATE(224)] = 3441,
  [SMALL_STATE(225)] = 3448,
  [SMALL_STATE(226)] = 3455,
  [SMALL_STATE(227)] = 3462,
  [SMALL_STATE(228)] = 3469,
  [SMALL_STATE(229)] = 3476,
  [SMALL_STATE(230)] = 3483,
  [SMALL_STATE(231)] = 3490,
  [SMALL_STATE(232)] = 3495,
  [SMALL_STATE(233)] = 3499,
  [SMALL_STATE(234)] = 3503,
  [SMALL_STATE(235)] = 3507,
  [SMALL_STATE(236)] = 3511,
  [SMALL_STATE(237)] = 3515,
  [SMALL_STATE(238)] = 3519,
  [SMALL_STATE(239)] = 3523,
  [SMALL_STATE(240)] = 3527,
  [SMALL_STATE(241)] = 3531,
  [SMALL_STATE(242)] = 3535,
  [SMALL_STATE(243)] = 3539,
  [SMALL_STATE(244)] = 3543,
  [SMALL_STATE(245)] = 3547,
  [SMALL_STATE(246)] = 3551,
  [SMALL_STATE(247)] = 3555,
  [SMALL_STATE(248)] = 3559,
  [SMALL_STATE(249)] = 3563,
  [SMALL_STATE(250)] = 3567,
  [SMALL_STATE(251)] = 3571,
  [SMALL_STATE(252)] = 3575,
  [SMALL_STATE(253)] = 3579,
  [SMALL_STATE(254)] = 3583,
  [SMALL_STATE(255)] = 3587,
  [SMALL_STATE(256)] = 3591,
  [SMALL_STATE(257)] = 3595,
  [SMALL_STATE(258)] = 3599,
  [SMALL_STATE(259)] = 3603,
  [SMALL_STATE(260)] = 3607,
  [SMALL_STATE(261)] = 3611,
  [SMALL_STATE(262)] = 3615,
  [SMALL_STATE(263)] = 3619,
  [SMALL_STATE(264)] = 3623,
  [SMALL_STATE(265)] = 3627,
  [SMALL_STATE(266)] = 3631,
  [SMALL_STATE(267)] = 3635,
  [SMALL_STATE(268)] = 3639,
  [SMALL_STATE(269)] = 3643,
  [SMALL_STATE(270)] = 3647,
  [SMALL_STATE(271)] = 3651,
  [SMALL_STATE(272)] = 3655,
  [SMALL_STATE(273)] = 3659,
  [SMALL_STATE(274)] = 3663,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(240),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(246),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(202),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(3),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(248),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(63),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(20),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(20),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(101),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(237),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(69),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(91),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(246),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(246),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(201),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(223),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(162),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(202),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(14),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(18),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(30),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(13),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(28),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(266),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(36),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(222),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(94),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(274),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(273),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(240),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(36),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(222),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 3),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 3),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_bar_line, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_bar_line, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(254),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(251),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 2),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [220] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [222] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(250),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 2),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 2),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 3),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 3),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 4),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 4),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 4),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 4),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_barline, 3),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_barline, 3),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 3),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 3),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet_directives, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stylesheet_directives, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_info_line, 2, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_info_line, 2, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_line, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(35),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(218),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(41),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(43),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(50),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(39),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(54),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [332] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(262),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 5),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 6),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header, 1),
  [359] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(225),
  [362] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(241),
  [365] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(240),
  [368] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(232),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [373] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(222),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2), SHIFT_REPEAT(58),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_structure_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [389] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [397] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [401] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [403] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(64),
  [408] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2),
  [410] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(105),
  [413] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(249),
  [416] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(72),
  [419] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(102),
  [422] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(201),
  [425] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(223),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(166),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(202),
  [434] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [436] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 2),
  [438] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [444] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(67),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 3),
  [449] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 1),
  [451] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [461] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [463] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [465] = {.entry = {.count = 1, .reusable = false}}, SHIFT(258),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 1),
  [469] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 2),
  [477] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [481] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 3),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [485] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(77),
  [488] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(152),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(151),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(155),
  [499] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(258),
  [502] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [504] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [506] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [508] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [510] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [512] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [514] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(170),
  [517] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(169),
  [520] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(170),
  [523] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(168),
  [526] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(235),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(170),
  [537] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(235),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(237),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(69),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(91),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(201),
  [557] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(202),
  [560] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [562] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [564] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [566] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [580] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 7),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [586] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 6),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [590] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 3),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 7),
  [596] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [598] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 6),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [608] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [612] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [616] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 2),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 5),
  [622] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [624] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 3),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 4),
  [630] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [632] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [634] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 3),
  [636] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [638] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 4),
  [640] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [642] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [644] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [648] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 4),
  [650] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [652] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 5),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [656] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 5),
  [658] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [660] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [662] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [664] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 8),
  [666] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 8),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 6),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 6),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [674] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(201),
  [677] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HYPHEN, 1),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_text, 1),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [687] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse_number, 2),
  [689] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_syllable, 1),
  [691] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [693] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [695] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 3),
  [697] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [699] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse_number, 2),
  [701] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 2),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [705] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_syllable, 1),
  [707] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HYPHEN, 1),
  [709] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_text, 1),
  [711] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [713] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [715] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2),
  [717] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2), SHIFT_REPEAT(233),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 2),
  [722] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 2), SHIFT_REPEAT(236),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_section, 1),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [733] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [735] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 2),
  [747] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [749] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(237),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(69),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 1),
  [759] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_line, 3),
  [763] = {.entry = {.count = 1, .reusable = false}}, SHIFT(213),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [769] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 4),
  [771] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 4),
  [779] = {.entry = {.count = 1, .reusable = false}}, SHIFT(97),
  [781] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2),
  [783] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(267),
  [786] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 3),
  [788] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [790] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2), SHIFT_REPEAT(97),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [795] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [799] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 2),
  [801] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [803] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [805] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 3),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 2, .production_id = 1),
  [809] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [813] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [815] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [817] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [821] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [823] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [825] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [827] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [829] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [835] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 2, .production_id = 1),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [845] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [861] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined, 4),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [879] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [883] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [901] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 3, .production_id = 1),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [915] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
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
