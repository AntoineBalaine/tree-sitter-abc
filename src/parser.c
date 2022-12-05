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
#define STATE_COUNT 279
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
  aux_sym_file_header_repeat1 = 185,
  aux_sym_file_header_repeat2 = 186,
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
  [aux_sym_file_header_repeat1] = "file_header_repeat1",
  [aux_sym_file_header_repeat2] = "file_header_repeat2",
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
  [aux_sym_file_header_repeat1] = aux_sym_file_header_repeat1,
  [aux_sym_file_header_repeat2] = aux_sym_file_header_repeat2,
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
  [aux_sym_file_header_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_file_header_repeat2] = {
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
  [37] = 15,
  [38] = 13,
  [39] = 16,
  [40] = 12,
  [41] = 14,
  [42] = 17,
  [43] = 18,
  [44] = 44,
  [45] = 22,
  [46] = 21,
  [47] = 47,
  [48] = 48,
  [49] = 20,
  [50] = 24,
  [51] = 30,
  [52] = 52,
  [53] = 29,
  [54] = 19,
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
  [72] = 67,
  [73] = 65,
  [74] = 66,
  [75] = 69,
  [76] = 76,
  [77] = 76,
  [78] = 68,
  [79] = 79,
  [80] = 80,
  [81] = 70,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 80,
  [86] = 82,
  [87] = 87,
  [88] = 79,
  [89] = 89,
  [90] = 83,
  [91] = 89,
  [92] = 92,
  [93] = 93,
  [94] = 87,
  [95] = 95,
  [96] = 96,
  [97] = 97,
  [98] = 98,
  [99] = 96,
  [100] = 98,
  [101] = 101,
  [102] = 102,
  [103] = 97,
  [104] = 102,
  [105] = 105,
  [106] = 101,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 110,
  [114] = 114,
  [115] = 115,
  [116] = 107,
  [117] = 111,
  [118] = 95,
  [119] = 119,
  [120] = 115,
  [121] = 112,
  [122] = 108,
  [123] = 114,
  [124] = 119,
  [125] = 109,
  [126] = 126,
  [127] = 126,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 133,
  [137] = 137,
  [138] = 129,
  [139] = 139,
  [140] = 130,
  [141] = 131,
  [142] = 134,
  [143] = 143,
  [144] = 135,
  [145] = 145,
  [146] = 145,
  [147] = 147,
  [148] = 143,
  [149] = 128,
  [150] = 132,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 151,
  [157] = 155,
  [158] = 158,
  [159] = 153,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 161,
  [164] = 158,
  [165] = 154,
  [166] = 152,
  [167] = 167,
  [168] = 160,
  [169] = 162,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 44,
  [178] = 178,
  [179] = 47,
  [180] = 173,
  [181] = 181,
  [182] = 182,
  [183] = 182,
  [184] = 52,
  [185] = 185,
  [186] = 176,
  [187] = 48,
  [188] = 188,
  [189] = 174,
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
  [208] = 207,
  [209] = 209,
  [210] = 210,
  [211] = 211,
  [212] = 212,
  [213] = 198,
  [214] = 211,
  [215] = 215,
  [216] = 216,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 222,
  [224] = 215,
  [225] = 220,
  [226] = 217,
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
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 24,
  [252] = 252,
  [253] = 236,
  [254] = 31,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 248,
  [260] = 247,
  [261] = 246,
  [262] = 244,
  [263] = 238,
  [264] = 264,
  [265] = 234,
  [266] = 257,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 250,
  [273] = 233,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 252,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (eof) ADVANCE(291);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '%') ADVANCE(567);
      if (lookahead == '\'') ADVANCE(596);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')') ADVANCE(581);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == '+') ADVANCE(556);
      if (lookahead == ',') ADVANCE(655);
      if (lookahead == '-') ADVANCE(559);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == '0') ADVANCE(602);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(586);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(649);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(650);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(600);
      if (lookahead == 'Z') ADVANCE(598);
      if (lookahead == '[') ADVANCE(584);
      if (lookahead == '\\') ADVANCE(555);
      if (lookahead == ']') ADVANCE(585);
      if (lookahead == '^') ADVANCE(587);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == '`') ADVANCE(565);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '|') ADVANCE(658);
      if (lookahead == '}') ADVANCE(610);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(574);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(606);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(597);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(646);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(601);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(589);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '%') ADVANCE(567);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')') ADVANCE(581);
      if (lookahead == ',') ADVANCE(655);
      if (lookahead == '-') ADVANCE(559);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(586);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(649);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(650);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(600);
      if (lookahead == 'Z') ADVANCE(598);
      if (lookahead == '[') ADVANCE(584);
      if (lookahead == '^') ADVANCE(587);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '|') ADVANCE(658);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(597);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(574);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(589);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == '!') ADVANCE(364);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '%') ADVANCE(572);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == '[') ADVANCE(551);
      if (lookahead == '|') ADVANCE(659);
      if (lookahead != 0) ADVANCE(554);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == '*') ADVANCE(557);
      if (lookahead == '-') ADVANCE(559);
      if (lookahead == '.') ADVANCE(676);
      if (lookahead == '=') ADVANCE(823);
      if (lookahead == '_') ADVANCE(562);
      if (lookahead == '|') ADVANCE(657);
      if (lookahead == '~') ADVANCE(563);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(675);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '%') ADVANCE(567);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')') ADVANCE(581);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(586);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(649);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(650);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(600);
      if (lookahead == 'Z') ADVANCE(598);
      if (lookahead == '[') ADVANCE(584);
      if (lookahead == '^') ADVANCE(587);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '|') ADVANCE(658);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(597);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(589);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '%') ADVANCE(569);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')') ADVANCE(581);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(586);
      if (lookahead == 'A') ADVANCE(590);
      if (lookahead == 'B') ADVANCE(591);
      if (lookahead == 'C') ADVANCE(592);
      if (lookahead == 'D') ADVANCE(593);
      if (lookahead == 'F') ADVANCE(594);
      if (lookahead == 'G') ADVANCE(595);
      if (lookahead == 'H') ADVANCE(651);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(652);
      if (lookahead == 'P') ADVANCE(649);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'S') ADVANCE(653);
      if (lookahead == 'T') ADVANCE(650);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(600);
      if (lookahead == 'Z') ADVANCE(599);
      if (lookahead == '[') ADVANCE(584);
      if (lookahead == '^') ADVANCE(587);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '|') ADVANCE(658);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(597);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(646);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(654);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(80);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(718);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(704);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(750);
      if (lookahead == 'e') ADVANCE(242);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(210);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(744);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(119);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(762);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(766);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(770);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(774);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(752);
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(748);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(746);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(742);
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(754);
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(740);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(758);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(782);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(780);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(778);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(756);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(788);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(732);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(720);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(738);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(692);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(722);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(694);
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(85);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(776);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(724);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(734);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(678);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(696);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(728);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(726);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(706);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(736);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(786);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(784);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(714);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(680);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(682);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(716);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(730);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(710);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(688);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(702);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(708);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(760);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(764);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(794);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(768);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(772);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(790);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(698);
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(684);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(792);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(690);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(686);
      END_STATE();
    case 67:
      if (lookahead == '!') ADVANCE(700);
      END_STATE();
    case 68:
      if (lookahead == '!') ADVANCE(712);
      END_STATE();
    case 69:
      if (lookahead == '!') ADVANCE(364);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == ',') ADVANCE(656);
      if (lookahead == '-') ADVANCE(560);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == '[') ADVANCE(551);
      if (lookahead == '|') ADVANCE(659);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '-') ADVANCE(582);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(586);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == ']') ADVANCE(585);
      if (lookahead == '^') ADVANCE(587);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == '`') ADVANCE(565);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '}') ADVANCE(610);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(596);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(606);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(597);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(574);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(605);
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
          lookahead == '~') ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(589);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '/') ADVANCE(613);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(645);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(586);
      if (lookahead == '^') ADVANCE(587);
      if (lookahead == '_') ADVANCE(618);
      if (lookahead == 'a') ADVANCE(643);
      if (lookahead == 'd') ADVANCE(627);
      if (lookahead == 'm') ADVANCE(619);
      if (lookahead == 's') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(645);
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
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == '+') ADVANCE(370);
      if (lookahead == '-') ADVANCE(560);
      if (lookahead == '_') ADVANCE(561);
      if (lookahead == '|') ADVANCE(660);
      if (lookahead == '~') ADVANCE(564);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 77:
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '>') ADVANCE(10);
      if (lookahead == 'D') ADVANCE(81);
      if (lookahead == 'a') ADVANCE(126);
      if (lookahead == 'b') ADVANCE(240);
      if (lookahead == 'c') ADVANCE(217);
      if (lookahead == 'd') ADVANCE(109);
      if (lookahead == 'e') ADVANCE(194);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(201);
      if (lookahead == 'l') ADVANCE(218);
      if (lookahead == 'm') ADVANCE(143);
      if (lookahead == 'o') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(219);
      if (lookahead == 's') ADVANCE(141);
      if (lookahead == 't') ADVANCE(144);
      if (lookahead == 'u') ADVANCE(231);
      if (lookahead == 'w') ADVANCE(145);
      END_STATE();
    case 78:
      if (lookahead == '+') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(107);
      END_STATE();
    case 80:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(105);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(677);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
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
      if (lookahead == ':') ADVANCE(671);
      if (lookahead == '|') ADVANCE(669);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(805);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(806);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(809);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(816);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(813);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(820);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(824);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(827);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(807);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(812);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(815);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(825);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(811);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(817);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(289);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(102);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(101);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(104);
      END_STATE();
    case 105:
      if (lookahead == 'C') ADVANCE(83);
      if (lookahead == 'S') ADVANCE(84);
      END_STATE();
    case 106:
      if (lookahead == 'H') ADVANCE(79);
      if (('h' <= lookahead && lookahead <= 'w')) ADVANCE(821);
      END_STATE();
    case 107:
      if (lookahead == 'W') ADVANCE(822);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(264);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(127);
      if (lookahead == 'i') ADVANCE(195);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(237);
      if (lookahead == 'o') ADVANCE(135);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(187);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(262);
      END_STATE();
    case 123:
      if (lookahead == 'b') ADVANCE(220);
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 124:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 125:
      if (lookahead == 'b') ADVANCE(227);
      END_STATE();
    case 126:
      if (lookahead == 'c') ADVANCE(128);
      if (lookahead == 'r') ADVANCE(235);
      END_STATE();
    case 127:
      if (lookahead == 'c') ADVANCE(113);
      END_STATE();
    case 128:
      if (lookahead == 'c') ADVANCE(151);
      END_STATE();
    case 129:
      if (lookahead == 'c') ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(115);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(116);
      END_STATE();
    case 136:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 137:
      if (lookahead == 'd') ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(228);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(170);
      if (lookahead == 'f') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(221);
      if (lookahead == 'l') ADVANCE(179);
      if (lookahead == 'n') ADVANCE(111);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(133);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(243);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(206);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(182);
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(131);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(108);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(168);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(245);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(130);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(249);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(216);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(256);
      END_STATE();
    case 167:
      if (lookahead == 'f') ADVANCE(165);
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 168:
      if (lookahead == 'g') ADVANCE(169);
      END_STATE();
    case 169:
      if (lookahead == 'g') ADVANCE(184);
      END_STATE();
    case 170:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 171:
      if (lookahead == 'g') ADVANCE(233);
      END_STATE();
    case 172:
      if (lookahead == 'g') ADVANCE(156);
      END_STATE();
    case 173:
      if (lookahead == 'h') ADVANCE(110);
      END_STATE();
    case 174:
      if (lookahead == 'h') ADVANCE(247);
      END_STATE();
    case 175:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 176:
      if (lookahead == 'h') ADVANCE(252);
      END_STATE();
    case 177:
      if (lookahead == 'h') ADVANCE(254);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(136);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(259);
      END_STATE();
    case 181:
      if (lookahead == 'i') ADVANCE(209);
      END_STATE();
    case 182:
      if (lookahead == 'i') ADVANCE(188);
      END_STATE();
    case 183:
      if (lookahead == 'i') ADVANCE(189);
      END_STATE();
    case 184:
      if (lookahead == 'i') ADVANCE(225);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(192);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(190);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(191);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(265);
      END_STATE();
    case 191:
      if (lookahead == 'l') ADVANCE(152);
      END_STATE();
    case 192:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(124);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(232);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(181);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(229);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(114);
      END_STATE();
    case 198:
      if (lookahead == 'm') ADVANCE(121);
      END_STATE();
    case 199:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 200:
      if (lookahead == 'm') ADVANCE(239);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(125);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(171);
      if (lookahead == 'w') ADVANCE(160);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(222);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(154);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(134);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(269);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(140);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(132);
      if (lookahead == 'r') ADVANCE(142);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(204);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(186);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(241);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(47);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(54);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(251);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(253);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(173);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(147);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(223);
      END_STATE();
    case 238:
      if (lookahead == 'p') ADVANCE(176);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(270);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(183);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(139);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(122);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(199);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(180);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(157);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(158);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(159);
      END_STATE();
    case 263:
      if (lookahead == 's') ADVANCE(129);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(175);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(250);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(117);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(224);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(118);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(258);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(193);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(200);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(248);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(164);
      END_STATE();
    case 281:
      if (lookahead == 'v') ADVANCE(149);
      END_STATE();
    case 282:
      if (lookahead == 'w') ADVANCE(202);
      END_STATE();
    case 283:
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 284:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 285:
      if (lookahead == 'z') ADVANCE(23);
      END_STATE();
    case 286:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 287:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(103);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      END_STATE();
    case 290:
      if (eof) ADVANCE(291);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(566);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '/') ADVANCE(613);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(586);
      if (lookahead == 'A') ADVANCE(590);
      if (lookahead == 'B') ADVANCE(591);
      if (lookahead == 'C') ADVANCE(592);
      if (lookahead == 'D') ADVANCE(593);
      if (lookahead == 'F') ADVANCE(594);
      if (lookahead == 'G') ADVANCE(595);
      if (lookahead == 'H') ADVANCE(651);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'L') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'O') ADVANCE(652);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'S') ADVANCE(653);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(99);
      if (lookahead == 'Z') ADVANCE(100);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == ']') ADVANCE(585);
      if (lookahead == '^') ADVANCE(587);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '}') ADVANCE(610);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(597);
      if (lookahead == '.' ||
          lookahead == 'P' ||
          lookahead == 'T' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(646);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(589);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(602);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(574);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__NL);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__NL);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(574);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__NL);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ' ') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ' ') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(719);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(297);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(705);
      if (lookahead == '(') ADVANCE(306);
      if (lookahead == ')') ADVANCE(307);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(751);
      if (lookahead == 'e') ADVANCE(507);
      if (lookahead == 'f') ADVANCE(308);
      if (lookahead == 'i') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(745);
      if (lookahead == 'l') ADVANCE(540);
      if (lookahead == 'p') ADVANCE(311);
      if (lookahead == 'r') ADVANCE(384);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(763);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(767);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(771);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(775);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(753);
      if (lookahead == 'f') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(749);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(747);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(743);
      if (lookahead == 'p') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(755);
      if (lookahead == 'f') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(741);
      if (lookahead == 'p') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(759);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(783);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(781);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(779);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(757);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(789);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(733);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(721);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(739);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(693);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(723);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(695);
      if (lookahead == 'x') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(777);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(725);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(735);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(679);
      if (lookahead == '(') ADVANCE(339);
      if (lookahead == ')') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(697);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(729);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(727);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(707);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(737);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(787);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(785);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(715);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(683);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(717);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(731);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(711);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(689);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(703);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(709);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(761);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(765);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(795);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(769);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(773);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(791);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(699);
      if (lookahead == 'x') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(793);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(691);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(687);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(701);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(713);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '"') ADVANCE(554);
      if (lookahead == '%') ADVANCE(70);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(360);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(304);
      if (lookahead == ')') ADVANCE(305);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(347);
      if (lookahead == ')') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(350);
      if (lookahead == ')') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '+') ADVANCE(299);
      if (lookahead == '0') ADVANCE(300);
      if (lookahead == '<') ADVANCE(361);
      if (lookahead == '>') ADVANCE(301);
      if (lookahead == 'D') ADVANCE(366);
      if (lookahead == 'a') ADVANCE(391);
      if (lookahead == 'b') ADVANCE(505);
      if (lookahead == 'c') ADVANCE(482);
      if (lookahead == 'd') ADVANCE(374);
      if (lookahead == 'e') ADVANCE(459);
      if (lookahead == 'f') ADVANCE(302);
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead == 'l') ADVANCE(483);
      if (lookahead == 'm') ADVANCE(408);
      if (lookahead == 'o') ADVANCE(499);
      if (lookahead == 'p') ADVANCE(303);
      if (lookahead == 'r') ADVANCE(484);
      if (lookahead == 's') ADVANCE(406);
      if (lookahead == 't') ADVANCE(409);
      if (lookahead == 'u') ADVANCE(496);
      if (lookahead == 'w') ADVANCE(410);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '-') ADVANCE(298);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(316);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '5') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ':') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ':') ADVANCE(672);
      if (lookahead == '|') ADVANCE(670);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'C') ADVANCE(367);
      if (lookahead == 'S') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(392);
      if (lookahead == 'i') ADVANCE(460);
      if (lookahead == 'o') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(502);
      if (lookahead == 'o') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(317);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(485);
      if (lookahead == 'p') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(393);
      if (lookahead == 'r') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(380);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(443);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(435);
      if (lookahead == 'f') ADVANCE(550);
      if (lookahead == 'h') ADVANCE(486);
      if (lookahead == 'l') ADVANCE(444);
      if (lookahead == 'n') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(398);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'o') ADVANCE(508);
      if (lookahead == 'p') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(471);
      if (lookahead == 'h') ADVANCE(542);
      if (lookahead == 'r') ADVANCE(447);
      if (lookahead == 'u') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(373);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(509);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(479);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(521);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'f') ADVANCE(430);
      if (lookahead == 't') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(473);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(512);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(497);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(379);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(495);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(436);
      if (lookahead == 'w') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(419);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(397);
      if (lookahead == 'r') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(363);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(411);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(448);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(404);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(387);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(321);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(422);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(515);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'v') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'z') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '|') ADVANCE(666);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_noCommentText);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_noCommentText);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == ':') ADVANCE(826);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_note_skip);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_note_skip);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_TILDE);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_BEAM_SEPARATOR);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '%') ADVANCE(573);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '%') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(572);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '-') ADVANCE(797);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(572);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'a') ADVANCE(570);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(572);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'b') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(572);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'c') ADVANCE(568);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(572);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(572);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(aux_sym__MUSIC_CODE_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(574);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(aux_sym__music_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '!') ADVANCE(77);
      if (lookahead == '"') ADVANCE(612);
      if (lookahead == '%') ADVANCE(567);
      if (lookahead == '(') ADVANCE(580);
      if (lookahead == ')') ADVANCE(581);
      if (lookahead == ':') ADVANCE(86);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(586);
      if (lookahead == 'I') ADVANCE(87);
      if (lookahead == 'K') ADVANCE(88);
      if (lookahead == 'L') ADVANCE(647);
      if (lookahead == 'M') ADVANCE(648);
      if (lookahead == 'N') ADVANCE(89);
      if (lookahead == 'P') ADVANCE(649);
      if (lookahead == 'Q') ADVANCE(90);
      if (lookahead == 'R') ADVANCE(91);
      if (lookahead == 'T') ADVANCE(650);
      if (lookahead == 'U') ADVANCE(92);
      if (lookahead == 'V') ADVANCE(93);
      if (lookahead == 'W') ADVANCE(94);
      if (lookahead == 'X') ADVANCE(600);
      if (lookahead == 'Z') ADVANCE(598);
      if (lookahead == '[') ADVANCE(584);
      if (lookahead == '^') ADVANCE(587);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == 'm') ADVANCE(95);
      if (lookahead == 'r') ADVANCE(96);
      if (lookahead == 's') ADVANCE(97);
      if (lookahead == 'w') ADVANCE(98);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '|') ADVANCE(658);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(597);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(574);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(589);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (lookahead == '\n') ADVANCE(579);
      if (lookahead == '!') ADVANCE(364);
      if (lookahead == '"') ADVANCE(360);
      if (lookahead == '*') ADVANCE(558);
      if (lookahead == ':') ADVANCE(371);
      if (lookahead == '[') ADVANCE(551);
      if (lookahead == '|') ADVANCE(659);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(296);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '(') ADVANCE(287);
      if (lookahead == '-') ADVANCE(582);
      if (lookahead == '/') ADVANCE(604);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(586);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == '^') ADVANCE(587);
      if (lookahead == '_') ADVANCE(588);
      if (lookahead == '`') ADVANCE(565);
      if (lookahead == '{') ADVANCE(609);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(596);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(606);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(597);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(579);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(605);
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
          lookahead == '~') ADVANCE(646);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(589);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(579);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(665);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(586);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(586);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(sym_note_letter);
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
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == ':') ADVANCE(817);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(286);
      if (lookahead == '0') ADVANCE(602);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(602);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(603);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(603);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(286);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(605);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(606);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(607);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(608);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(614);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(616);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(630);
      if (lookahead == 'i') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(629);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(626);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(645);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(819);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(808);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(796);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(818);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(804);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(810);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(814);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_nth_ending_number_token1);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_bar_line);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(667);
      if (lookahead == ']') ADVANCE(661);
      if (lookahead == '|') ADVANCE(663);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(668);
      if (lookahead == ']') ADVANCE(662);
      if (lookahead == '|') ADVANCE(664);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(673);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(aux_sym_lyric_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(674);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(675);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(554);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(sym_parts_line);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(572);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(sym_area);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_book);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(sym_composer);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_discography);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_file);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_group);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_history);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_macros);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_meter);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(anon_sym_X_COLON);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_remark);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_rhythm_line);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(anon_sym_s_COLON);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_tempo);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_transcription);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_tune_title);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_unit_note_length);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(anon_sym_U_COLON);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(aux_sym_user_defined_token2);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_voice);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(anon_sym_w_COLON);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_words_postbody);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 290},
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
  [13] = {.lex_state = 576},
  [14] = {.lex_state = 1},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 576},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 576},
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
  [38] = {.lex_state = 577},
  [39] = {.lex_state = 577},
  [40] = {.lex_state = 69},
  [41] = {.lex_state = 69},
  [42] = {.lex_state = 69},
  [43] = {.lex_state = 577},
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
  [56] = {.lex_state = 290},
  [57] = {.lex_state = 290},
  [58] = {.lex_state = 290},
  [59] = {.lex_state = 290},
  [60] = {.lex_state = 578},
  [61] = {.lex_state = 578},
  [62] = {.lex_state = 71},
  [63] = {.lex_state = 290},
  [64] = {.lex_state = 290},
  [65] = {.lex_state = 71},
  [66] = {.lex_state = 71},
  [67] = {.lex_state = 71},
  [68] = {.lex_state = 71},
  [69] = {.lex_state = 71},
  [70] = {.lex_state = 76},
  [71] = {.lex_state = 76},
  [72] = {.lex_state = 578},
  [73] = {.lex_state = 578},
  [74] = {.lex_state = 578},
  [75] = {.lex_state = 578},
  [76] = {.lex_state = 290},
  [77] = {.lex_state = 290},
  [78] = {.lex_state = 578},
  [79] = {.lex_state = 290},
  [80] = {.lex_state = 290},
  [81] = {.lex_state = 3},
  [82] = {.lex_state = 290},
  [83] = {.lex_state = 290},
  [84] = {.lex_state = 290},
  [85] = {.lex_state = 290},
  [86] = {.lex_state = 290},
  [87] = {.lex_state = 71},
  [88] = {.lex_state = 290},
  [89] = {.lex_state = 290},
  [90] = {.lex_state = 290},
  [91] = {.lex_state = 290},
  [92] = {.lex_state = 3},
  [93] = {.lex_state = 3},
  [94] = {.lex_state = 578},
  [95] = {.lex_state = 71},
  [96] = {.lex_state = 0},
  [97] = {.lex_state = 0},
  [98] = {.lex_state = 0},
  [99] = {.lex_state = 0},
  [100] = {.lex_state = 0},
  [101] = {.lex_state = 0},
  [102] = {.lex_state = 0},
  [103] = {.lex_state = 0},
  [104] = {.lex_state = 0},
  [105] = {.lex_state = 3},
  [106] = {.lex_state = 0},
  [107] = {.lex_state = 578},
  [108] = {.lex_state = 71},
  [109] = {.lex_state = 578},
  [110] = {.lex_state = 71},
  [111] = {.lex_state = 578},
  [112] = {.lex_state = 71},
  [113] = {.lex_state = 578},
  [114] = {.lex_state = 71},
  [115] = {.lex_state = 71},
  [116] = {.lex_state = 71},
  [117] = {.lex_state = 71},
  [118] = {.lex_state = 578},
  [119] = {.lex_state = 71},
  [120] = {.lex_state = 578},
  [121] = {.lex_state = 578},
  [122] = {.lex_state = 578},
  [123] = {.lex_state = 578},
  [124] = {.lex_state = 578},
  [125] = {.lex_state = 71},
  [126] = {.lex_state = 71},
  [127] = {.lex_state = 578},
  [128] = {.lex_state = 71},
  [129] = {.lex_state = 71},
  [130] = {.lex_state = 578},
  [131] = {.lex_state = 71},
  [132] = {.lex_state = 71},
  [133] = {.lex_state = 578},
  [134] = {.lex_state = 578},
  [135] = {.lex_state = 578},
  [136] = {.lex_state = 71},
  [137] = {.lex_state = 0},
  [138] = {.lex_state = 578},
  [139] = {.lex_state = 578},
  [140] = {.lex_state = 71},
  [141] = {.lex_state = 578},
  [142] = {.lex_state = 71},
  [143] = {.lex_state = 578},
  [144] = {.lex_state = 71},
  [145] = {.lex_state = 71},
  [146] = {.lex_state = 578},
  [147] = {.lex_state = 290},
  [148] = {.lex_state = 71},
  [149] = {.lex_state = 578},
  [150] = {.lex_state = 578},
  [151] = {.lex_state = 0},
  [152] = {.lex_state = 76},
  [153] = {.lex_state = 76},
  [154] = {.lex_state = 76},
  [155] = {.lex_state = 0},
  [156] = {.lex_state = 0},
  [157] = {.lex_state = 0},
  [158] = {.lex_state = 76},
  [159] = {.lex_state = 3},
  [160] = {.lex_state = 0},
  [161] = {.lex_state = 0},
  [162] = {.lex_state = 0},
  [163] = {.lex_state = 0},
  [164] = {.lex_state = 3},
  [165] = {.lex_state = 3},
  [166] = {.lex_state = 3},
  [167] = {.lex_state = 290},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 290},
  [171] = {.lex_state = 290},
  [172] = {.lex_state = 290},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 0},
  [175] = {.lex_state = 290},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 290},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 0},
  [181] = {.lex_state = 290},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 0},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 290},
  [186] = {.lex_state = 0},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 290},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 0},
  [191] = {.lex_state = 290},
  [192] = {.lex_state = 290},
  [193] = {.lex_state = 0},
  [194] = {.lex_state = 290},
  [195] = {.lex_state = 290},
  [196] = {.lex_state = 290},
  [197] = {.lex_state = 290},
  [198] = {.lex_state = 72},
  [199] = {.lex_state = 0},
  [200] = {.lex_state = 290},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 82},
  [203] = {.lex_state = 82},
  [204] = {.lex_state = 72},
  [205] = {.lex_state = 78},
  [206] = {.lex_state = 78},
  [207] = {.lex_state = 72},
  [208] = {.lex_state = 72},
  [209] = {.lex_state = 82},
  [210] = {.lex_state = 78},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 290},
  [213] = {.lex_state = 290},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 2},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 106},
  [219] = {.lex_state = 82},
  [220] = {.lex_state = 290},
  [221] = {.lex_state = 2},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 290},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 290},
  [228] = {.lex_state = 290},
  [229] = {.lex_state = 290},
  [230] = {.lex_state = 290},
  [231] = {.lex_state = 2},
  [232] = {.lex_state = 290},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 290},
  [235] = {.lex_state = 290},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 78},
  [238] = {.lex_state = 290},
  [239] = {.lex_state = 290},
  [240] = {.lex_state = 290},
  [241] = {.lex_state = 3},
  [242] = {.lex_state = 290},
  [243] = {.lex_state = 674},
  [244] = {.lex_state = 3},
  [245] = {.lex_state = 290},
  [246] = {.lex_state = 4},
  [247] = {.lex_state = 4},
  [248] = {.lex_state = 5},
  [249] = {.lex_state = 78},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 78},
  [252] = {.lex_state = 78},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 290},
  [255] = {.lex_state = 78},
  [256] = {.lex_state = 290},
  [257] = {.lex_state = 5},
  [258] = {.lex_state = 290},
  [259] = {.lex_state = 5},
  [260] = {.lex_state = 4},
  [261] = {.lex_state = 4},
  [262] = {.lex_state = 3},
  [263] = {.lex_state = 290},
  [264] = {.lex_state = 290},
  [265] = {.lex_state = 290},
  [266] = {.lex_state = 5},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 71},
  [270] = {.lex_state = 290},
  [271] = {.lex_state = 5},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
  [274] = {.lex_state = 5},
  [275] = {.lex_state = 78},
  [276] = {.lex_state = 674},
  [277] = {.lex_state = 5},
  [278] = {.lex_state = 78},
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
    [sym_source_file] = STATE(268),
    [sym_stylesheet_directives] = STATE(229),
    [sym_file_structure] = STATE(267),
    [sym_file_header] = STATE(194),
    [sym_tune] = STATE(178),
    [sym_tune_header] = STATE(11),
    [sym_abc_version] = STATE(275),
    [sym_reference_number_line] = STATE(7),
    [sym_user_defined] = STATE(275),
    [sym_file_header_info_line] = STATE(229),
    [aux_sym_file_structure_repeat1] = STATE(178),
    [aux_sym_file_header_repeat2] = STATE(56),
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
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(27),
    [sym__nte_or_chrd] = STATE(62),
    [sym_beam] = STATE(27),
    [sym_note_construct] = STATE(62),
    [sym__chord_cstrct] = STATE(62),
    [sym_note] = STATE(115),
    [sym__pitch] = STATE(87),
    [sym_multimeasure_rest] = STATE(27),
    [sym_grace_note] = STATE(77),
    [sym_chord_symbol] = STATE(151),
    [sym_decoration] = STATE(182),
    [sym_nth_ending_barline] = STATE(30),
    [sym_generic_bar_line] = STATE(27),
    [sym_first_repeat_bar] = STATE(30),
    [sym_second_repeat_bar] = STATE(30),
    [sym_symbol] = STATE(27),
    [sym_symbol_line] = STATE(237),
    [sym_user_defined] = STATE(237),
    [sym_words_line] = STATE(237),
    [sym_body_info_line] = STATE(2),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(77),
    [sym__NL] = ACTIONS(15),
    [sym_COMMENT] = ACTIONS(17),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(20),
    [aux_sym__music_content_token1] = ACTIONS(23),
    [sym_slur_open] = ACTIONS(26),
    [sym_slur_close] = ACTIONS(29),
    [anon_sym_LBRACK] = ACTIONS(32),
    [sym_alteration] = ACTIONS(35),
    [sym_note_letter] = ACTIONS(38),
    [sym_rest] = ACTIONS(41),
    [anon_sym_Z] = ACTIONS(44),
    [anon_sym_X] = ACTIONS(44),
    [aux_sym_grace_note_token1] = ACTIONS(47),
    [aux_sym_chord_symbol_token1] = ACTIONS(50),
    [sym_annotation] = ACTIONS(29),
    [sym_tuplet_marker] = ACTIONS(53),
    [sym_decoration_shorthand] = ACTIONS(56),
    [sym_bar_line] = ACTIONS(59),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(62),
    [sym_thin_double_bar_line] = ACTIONS(62),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(62),
    [sym_start_of_repeated_section] = ACTIONS(65),
    [sym_end_of_repeated_section] = ACTIONS(68),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(65),
    [anon_sym_BANGtrill_BANG] = ACTIONS(71),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(71),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(71),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(71),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(71),
    [anon_sym_BANGmordent_BANG] = ACTIONS(71),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(71),
    [anon_sym_BANGroll_BANG] = ACTIONS(71),
    [anon_sym_BANGturn_BANG] = ACTIONS(71),
    [anon_sym_BANGturnx_BANG] = ACTIONS(71),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(71),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(71),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(71),
    [anon_sym_BANG_GT_BANG] = ACTIONS(71),
    [anon_sym_BANGaccent_BANG] = ACTIONS(71),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(71),
    [anon_sym_BANGfermata_BANG] = ACTIONS(71),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(71),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(71),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(71),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(71),
    [anon_sym_BANGplus_BANG] = ACTIONS(71),
    [anon_sym_BANGsnap_BANG] = ACTIONS(71),
    [anon_sym_BANGslide_BANG] = ACTIONS(71),
    [anon_sym_BANGwedge_BANG] = ACTIONS(71),
    [anon_sym_BANGupbow_BANG] = ACTIONS(71),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(71),
    [anon_sym_BANGopen_BANG] = ACTIONS(71),
    [anon_sym_BANGthumb_BANG] = ACTIONS(71),
    [anon_sym_BANGbreath_BANG] = ACTIONS(71),
    [anon_sym_BANGpppp_BANG] = ACTIONS(71),
    [anon_sym_BANGppp_BANG] = ACTIONS(71),
    [anon_sym_BANGpp_BANG] = ACTIONS(71),
    [anon_sym_BANGp_BANG] = ACTIONS(71),
    [anon_sym_BANGmp_BANG] = ACTIONS(71),
    [anon_sym_BANGmf_BANG] = ACTIONS(71),
    [anon_sym_BANGf_BANG] = ACTIONS(71),
    [anon_sym_BANGff_BANG] = ACTIONS(71),
    [anon_sym_BANGfff_BANG] = ACTIONS(71),
    [anon_sym_BANGffff_BANG] = ACTIONS(71),
    [anon_sym_BANGsfz_BANG] = ACTIONS(71),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(71),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(71),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(71),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(71),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(71),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(71),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(71),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(71),
    [anon_sym_BANGsegno_BANG] = ACTIONS(71),
    [anon_sym_BANGcoda_BANG] = ACTIONS(71),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(71),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(71),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(71),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(71),
    [anon_sym_BANGfine_BANG] = ACTIONS(71),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(71),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(71),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(71),
    [sym_parts_line] = ACTIONS(74),
    [sym_instruction] = ACTIONS(74),
    [sym_key] = ACTIONS(74),
    [sym_macros] = ACTIONS(74),
    [sym_meter] = ACTIONS(74),
    [sym_notes] = ACTIONS(74),
    [sym_remark] = ACTIONS(74),
    [sym_rhythm_line] = ACTIONS(74),
    [anon_sym_s_COLON] = ACTIONS(77),
    [sym_tempo] = ACTIONS(74),
    [sym_tune_title] = ACTIONS(74),
    [sym_unit_note_length] = ACTIONS(74),
    [anon_sym_U_COLON] = ACTIONS(80),
    [sym_voice] = ACTIONS(74),
    [anon_sym_w_COLON] = ACTIONS(83),
    [sym_words_postbody] = ACTIONS(86),
  },
  [3] = {
    [sym_stylesheet_directives] = STATE(4),
    [sym__MUSIC_CODE] = STATE(4),
    [sym__music_content] = STATE(27),
    [sym__nte_or_chrd] = STATE(62),
    [sym_beam] = STATE(27),
    [sym_note_construct] = STATE(62),
    [sym__chord_cstrct] = STATE(62),
    [sym_note] = STATE(115),
    [sym__pitch] = STATE(87),
    [sym_multimeasure_rest] = STATE(27),
    [sym_grace_note] = STATE(77),
    [sym_chord_symbol] = STATE(151),
    [sym_decoration] = STATE(182),
    [sym_nth_ending_barline] = STATE(30),
    [sym_generic_bar_line] = STATE(27),
    [sym_first_repeat_bar] = STATE(30),
    [sym_second_repeat_bar] = STATE(30),
    [sym_symbol] = STATE(27),
    [sym_symbol_line] = STATE(237),
    [sym_user_defined] = STATE(237),
    [sym_words_line] = STATE(237),
    [sym_body_info_line] = STATE(4),
    [aux_sym_tune_body_repeat1] = STATE(4),
    [aux_sym_note_construct_repeat1] = STATE(77),
    [sym__NL] = ACTIONS(88),
    [sym_COMMENT] = ACTIONS(90),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(92),
    [aux_sym__music_content_token1] = ACTIONS(94),
    [sym_slur_open] = ACTIONS(96),
    [sym_slur_close] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_alteration] = ACTIONS(102),
    [sym_note_letter] = ACTIONS(104),
    [sym_rest] = ACTIONS(106),
    [anon_sym_Z] = ACTIONS(108),
    [anon_sym_X] = ACTIONS(108),
    [aux_sym_grace_note_token1] = ACTIONS(110),
    [aux_sym_chord_symbol_token1] = ACTIONS(112),
    [sym_annotation] = ACTIONS(98),
    [sym_tuplet_marker] = ACTIONS(114),
    [sym_decoration_shorthand] = ACTIONS(116),
    [sym_bar_line] = ACTIONS(118),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(120),
    [sym_thin_double_bar_line] = ACTIONS(120),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(120),
    [sym_start_of_repeated_section] = ACTIONS(122),
    [sym_end_of_repeated_section] = ACTIONS(124),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(122),
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
    [sym_parts_line] = ACTIONS(128),
    [sym_instruction] = ACTIONS(128),
    [sym_key] = ACTIONS(128),
    [sym_macros] = ACTIONS(128),
    [sym_meter] = ACTIONS(128),
    [sym_notes] = ACTIONS(128),
    [sym_remark] = ACTIONS(128),
    [sym_rhythm_line] = ACTIONS(128),
    [anon_sym_s_COLON] = ACTIONS(130),
    [sym_tempo] = ACTIONS(128),
    [sym_tune_title] = ACTIONS(128),
    [sym_unit_note_length] = ACTIONS(128),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(128),
    [anon_sym_w_COLON] = ACTIONS(132),
    [sym_words_postbody] = ACTIONS(134),
  },
  [4] = {
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(27),
    [sym__nte_or_chrd] = STATE(62),
    [sym_beam] = STATE(27),
    [sym_note_construct] = STATE(62),
    [sym__chord_cstrct] = STATE(62),
    [sym_note] = STATE(115),
    [sym__pitch] = STATE(87),
    [sym_multimeasure_rest] = STATE(27),
    [sym_grace_note] = STATE(77),
    [sym_chord_symbol] = STATE(151),
    [sym_decoration] = STATE(182),
    [sym_nth_ending_barline] = STATE(30),
    [sym_generic_bar_line] = STATE(27),
    [sym_first_repeat_bar] = STATE(30),
    [sym_second_repeat_bar] = STATE(30),
    [sym_symbol] = STATE(27),
    [sym_symbol_line] = STATE(237),
    [sym_user_defined] = STATE(237),
    [sym_words_line] = STATE(237),
    [sym_body_info_line] = STATE(2),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(77),
    [sym__NL] = ACTIONS(136),
    [sym_COMMENT] = ACTIONS(138),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(92),
    [aux_sym__music_content_token1] = ACTIONS(94),
    [sym_slur_open] = ACTIONS(96),
    [sym_slur_close] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_alteration] = ACTIONS(102),
    [sym_note_letter] = ACTIONS(104),
    [sym_rest] = ACTIONS(106),
    [anon_sym_Z] = ACTIONS(108),
    [anon_sym_X] = ACTIONS(108),
    [aux_sym_grace_note_token1] = ACTIONS(110),
    [aux_sym_chord_symbol_token1] = ACTIONS(112),
    [sym_annotation] = ACTIONS(98),
    [sym_tuplet_marker] = ACTIONS(114),
    [sym_decoration_shorthand] = ACTIONS(116),
    [sym_bar_line] = ACTIONS(118),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(120),
    [sym_thin_double_bar_line] = ACTIONS(120),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(120),
    [sym_start_of_repeated_section] = ACTIONS(122),
    [sym_end_of_repeated_section] = ACTIONS(124),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(122),
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
    [sym_parts_line] = ACTIONS(128),
    [sym_instruction] = ACTIONS(128),
    [sym_key] = ACTIONS(128),
    [sym_macros] = ACTIONS(128),
    [sym_meter] = ACTIONS(128),
    [sym_notes] = ACTIONS(128),
    [sym_remark] = ACTIONS(128),
    [sym_rhythm_line] = ACTIONS(128),
    [anon_sym_s_COLON] = ACTIONS(130),
    [sym_tempo] = ACTIONS(128),
    [sym_tune_title] = ACTIONS(128),
    [sym_unit_note_length] = ACTIONS(128),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(128),
    [anon_sym_w_COLON] = ACTIONS(132),
    [sym_words_postbody] = ACTIONS(140),
  },
  [5] = {
    [sym_abc_version] = STATE(249),
    [sym_symbol_line] = STATE(249),
    [sym_user_defined] = STATE(249),
    [sym_tune_header_info_line] = STATE(270),
    [aux_sym_tune_header_repeat1] = STATE(5),
    [sym__NL] = ACTIONS(142),
    [sym_COMMENT] = ACTIONS(144),
    [aux_sym__music_content_token1] = ACTIONS(142),
    [sym_slur_open] = ACTIONS(142),
    [sym_slur_close] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(142),
    [sym_alteration] = ACTIONS(147),
    [sym_note_letter] = ACTIONS(142),
    [sym_rest] = ACTIONS(147),
    [anon_sym_Z] = ACTIONS(142),
    [anon_sym_X] = ACTIONS(147),
    [aux_sym_grace_note_token1] = ACTIONS(147),
    [aux_sym_chord_symbol_token1] = ACTIONS(142),
    [sym_annotation] = ACTIONS(147),
    [sym_tuplet_marker] = ACTIONS(147),
    [sym_decoration_shorthand] = ACTIONS(142),
    [sym_bar_line] = ACTIONS(142),
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
    [sym_parts_line] = ACTIONS(149),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(152),
    [sym_area] = ACTIONS(149),
    [sym_book] = ACTIONS(149),
    [sym_composer] = ACTIONS(149),
    [sym_discography] = ACTIONS(149),
    [sym_file] = ACTIONS(149),
    [sym_group] = ACTIONS(149),
    [sym_history] = ACTIONS(149),
    [sym_instruction] = ACTIONS(149),
    [sym_key] = ACTIONS(149),
    [sym_macros] = ACTIONS(149),
    [sym_meter] = ACTIONS(149),
    [sym_notes] = ACTIONS(149),
    [sym_origin] = ACTIONS(149),
    [sym_remark] = ACTIONS(149),
    [sym_rhythm_line] = ACTIONS(149),
    [sym_source] = ACTIONS(149),
    [anon_sym_s_COLON] = ACTIONS(155),
    [sym_tempo] = ACTIONS(149),
    [sym_transcription] = ACTIONS(149),
    [sym_tune_title] = ACTIONS(149),
    [sym_unit_note_length] = ACTIONS(149),
    [anon_sym_U_COLON] = ACTIONS(158),
    [sym_voice] = ACTIONS(149),
    [sym_words_postbody] = ACTIONS(149),
  },
  [6] = {
    [sym_abc_version] = STATE(249),
    [sym_symbol_line] = STATE(249),
    [sym_user_defined] = STATE(249),
    [sym_tune_header_info_line] = STATE(270),
    [aux_sym_tune_header_repeat1] = STATE(5),
    [sym__NL] = ACTIONS(161),
    [sym_COMMENT] = ACTIONS(163),
    [aux_sym__music_content_token1] = ACTIONS(161),
    [sym_slur_open] = ACTIONS(161),
    [sym_slur_close] = ACTIONS(165),
    [anon_sym_LBRACK] = ACTIONS(161),
    [sym_alteration] = ACTIONS(165),
    [sym_note_letter] = ACTIONS(161),
    [sym_rest] = ACTIONS(165),
    [anon_sym_Z] = ACTIONS(161),
    [anon_sym_X] = ACTIONS(165),
    [aux_sym_grace_note_token1] = ACTIONS(165),
    [aux_sym_chord_symbol_token1] = ACTIONS(161),
    [sym_annotation] = ACTIONS(165),
    [sym_tuplet_marker] = ACTIONS(165),
    [sym_decoration_shorthand] = ACTIONS(161),
    [sym_bar_line] = ACTIONS(161),
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
    [sym_parts_line] = ACTIONS(167),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(7),
    [sym_area] = ACTIONS(167),
    [sym_book] = ACTIONS(167),
    [sym_composer] = ACTIONS(167),
    [sym_discography] = ACTIONS(167),
    [sym_file] = ACTIONS(167),
    [sym_group] = ACTIONS(167),
    [sym_history] = ACTIONS(167),
    [sym_instruction] = ACTIONS(167),
    [sym_key] = ACTIONS(167),
    [sym_macros] = ACTIONS(167),
    [sym_meter] = ACTIONS(167),
    [sym_notes] = ACTIONS(167),
    [sym_origin] = ACTIONS(167),
    [sym_remark] = ACTIONS(167),
    [sym_rhythm_line] = ACTIONS(167),
    [sym_source] = ACTIONS(167),
    [anon_sym_s_COLON] = ACTIONS(130),
    [sym_tempo] = ACTIONS(167),
    [sym_transcription] = ACTIONS(167),
    [sym_tune_title] = ACTIONS(167),
    [sym_unit_note_length] = ACTIONS(167),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(167),
    [sym_words_postbody] = ACTIONS(165),
  },
  [7] = {
    [sym_abc_version] = STATE(249),
    [sym_symbol_line] = STATE(249),
    [sym_user_defined] = STATE(249),
    [sym_tune_header_info_line] = STATE(270),
    [aux_sym_tune_header_repeat1] = STATE(6),
    [sym__NL] = ACTIONS(169),
    [sym_COMMENT] = ACTIONS(163),
    [aux_sym__music_content_token1] = ACTIONS(169),
    [sym_slur_open] = ACTIONS(169),
    [sym_slur_close] = ACTIONS(171),
    [anon_sym_LBRACK] = ACTIONS(169),
    [sym_alteration] = ACTIONS(171),
    [sym_note_letter] = ACTIONS(169),
    [sym_rest] = ACTIONS(171),
    [anon_sym_Z] = ACTIONS(169),
    [anon_sym_X] = ACTIONS(171),
    [aux_sym_grace_note_token1] = ACTIONS(171),
    [aux_sym_chord_symbol_token1] = ACTIONS(169),
    [sym_annotation] = ACTIONS(171),
    [sym_tuplet_marker] = ACTIONS(171),
    [sym_decoration_shorthand] = ACTIONS(169),
    [sym_bar_line] = ACTIONS(169),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(171),
    [sym_thin_double_bar_line] = ACTIONS(171),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(171),
    [sym_start_of_repeated_section] = ACTIONS(171),
    [sym_end_of_repeated_section] = ACTIONS(171),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(171),
    [anon_sym_BANGtrill_BANG] = ACTIONS(171),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(171),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(171),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(171),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(171),
    [anon_sym_BANGmordent_BANG] = ACTIONS(171),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(171),
    [anon_sym_BANGroll_BANG] = ACTIONS(171),
    [anon_sym_BANGturn_BANG] = ACTIONS(171),
    [anon_sym_BANGturnx_BANG] = ACTIONS(171),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(171),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(171),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(171),
    [anon_sym_BANG_GT_BANG] = ACTIONS(171),
    [anon_sym_BANGaccent_BANG] = ACTIONS(171),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(171),
    [anon_sym_BANGfermata_BANG] = ACTIONS(171),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(171),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(171),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(171),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(171),
    [anon_sym_BANGplus_BANG] = ACTIONS(171),
    [anon_sym_BANGsnap_BANG] = ACTIONS(171),
    [anon_sym_BANGslide_BANG] = ACTIONS(171),
    [anon_sym_BANGwedge_BANG] = ACTIONS(171),
    [anon_sym_BANGupbow_BANG] = ACTIONS(171),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(171),
    [anon_sym_BANGopen_BANG] = ACTIONS(171),
    [anon_sym_BANGthumb_BANG] = ACTIONS(171),
    [anon_sym_BANGbreath_BANG] = ACTIONS(171),
    [anon_sym_BANGpppp_BANG] = ACTIONS(171),
    [anon_sym_BANGppp_BANG] = ACTIONS(171),
    [anon_sym_BANGpp_BANG] = ACTIONS(171),
    [anon_sym_BANGp_BANG] = ACTIONS(171),
    [anon_sym_BANGmp_BANG] = ACTIONS(171),
    [anon_sym_BANGmf_BANG] = ACTIONS(171),
    [anon_sym_BANGf_BANG] = ACTIONS(171),
    [anon_sym_BANGff_BANG] = ACTIONS(171),
    [anon_sym_BANGfff_BANG] = ACTIONS(171),
    [anon_sym_BANGffff_BANG] = ACTIONS(171),
    [anon_sym_BANGsfz_BANG] = ACTIONS(171),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(171),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(171),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(171),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(171),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(171),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(171),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(171),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(171),
    [anon_sym_BANGsegno_BANG] = ACTIONS(171),
    [anon_sym_BANGcoda_BANG] = ACTIONS(171),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(171),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(171),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(171),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(171),
    [anon_sym_BANGfine_BANG] = ACTIONS(171),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(171),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(171),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(171),
    [sym_parts_line] = ACTIONS(167),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(7),
    [sym_area] = ACTIONS(167),
    [sym_book] = ACTIONS(167),
    [sym_composer] = ACTIONS(167),
    [sym_discography] = ACTIONS(167),
    [sym_file] = ACTIONS(167),
    [sym_group] = ACTIONS(167),
    [sym_history] = ACTIONS(167),
    [sym_instruction] = ACTIONS(167),
    [sym_key] = ACTIONS(167),
    [sym_macros] = ACTIONS(167),
    [sym_meter] = ACTIONS(167),
    [sym_notes] = ACTIONS(167),
    [sym_origin] = ACTIONS(167),
    [sym_remark] = ACTIONS(167),
    [sym_rhythm_line] = ACTIONS(167),
    [sym_source] = ACTIONS(167),
    [anon_sym_s_COLON] = ACTIONS(130),
    [sym_tempo] = ACTIONS(167),
    [sym_transcription] = ACTIONS(167),
    [sym_tune_title] = ACTIONS(167),
    [sym_unit_note_length] = ACTIONS(167),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(167),
    [sym_words_postbody] = ACTIONS(171),
  },
  [8] = {
    [sym__NL] = ACTIONS(173),
    [sym_COMMENT] = ACTIONS(173),
    [aux_sym__music_content_token1] = ACTIONS(173),
    [sym_slur_open] = ACTIONS(173),
    [sym_slur_close] = ACTIONS(175),
    [anon_sym_LBRACK] = ACTIONS(173),
    [sym_alteration] = ACTIONS(175),
    [sym_note_letter] = ACTIONS(173),
    [sym_rest] = ACTIONS(175),
    [anon_sym_Z] = ACTIONS(173),
    [anon_sym_X] = ACTIONS(175),
    [aux_sym_grace_note_token1] = ACTIONS(175),
    [aux_sym_chord_symbol_token1] = ACTIONS(173),
    [sym_annotation] = ACTIONS(175),
    [sym_tuplet_marker] = ACTIONS(175),
    [sym_decoration_shorthand] = ACTIONS(173),
    [sym_bar_line] = ACTIONS(173),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(175),
    [sym_thin_double_bar_line] = ACTIONS(175),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(175),
    [sym_start_of_repeated_section] = ACTIONS(175),
    [sym_end_of_repeated_section] = ACTIONS(175),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(175),
    [anon_sym_BANGtrill_BANG] = ACTIONS(175),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(175),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(175),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(175),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(175),
    [anon_sym_BANGmordent_BANG] = ACTIONS(175),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(175),
    [anon_sym_BANGroll_BANG] = ACTIONS(175),
    [anon_sym_BANGturn_BANG] = ACTIONS(175),
    [anon_sym_BANGturnx_BANG] = ACTIONS(175),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(175),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(175),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(175),
    [anon_sym_BANG_GT_BANG] = ACTIONS(175),
    [anon_sym_BANGaccent_BANG] = ACTIONS(175),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(175),
    [anon_sym_BANGfermata_BANG] = ACTIONS(175),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(175),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(175),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(175),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(175),
    [anon_sym_BANGplus_BANG] = ACTIONS(175),
    [anon_sym_BANGsnap_BANG] = ACTIONS(175),
    [anon_sym_BANGslide_BANG] = ACTIONS(175),
    [anon_sym_BANGwedge_BANG] = ACTIONS(175),
    [anon_sym_BANGupbow_BANG] = ACTIONS(175),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(175),
    [anon_sym_BANGopen_BANG] = ACTIONS(175),
    [anon_sym_BANGthumb_BANG] = ACTIONS(175),
    [anon_sym_BANGbreath_BANG] = ACTIONS(175),
    [anon_sym_BANGpppp_BANG] = ACTIONS(175),
    [anon_sym_BANGppp_BANG] = ACTIONS(175),
    [anon_sym_BANGpp_BANG] = ACTIONS(175),
    [anon_sym_BANGp_BANG] = ACTIONS(175),
    [anon_sym_BANGmp_BANG] = ACTIONS(175),
    [anon_sym_BANGmf_BANG] = ACTIONS(175),
    [anon_sym_BANGf_BANG] = ACTIONS(175),
    [anon_sym_BANGff_BANG] = ACTIONS(175),
    [anon_sym_BANGfff_BANG] = ACTIONS(175),
    [anon_sym_BANGffff_BANG] = ACTIONS(175),
    [anon_sym_BANGsfz_BANG] = ACTIONS(175),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(175),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(175),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(175),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(175),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(175),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(175),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(175),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(175),
    [anon_sym_BANGsegno_BANG] = ACTIONS(175),
    [anon_sym_BANGcoda_BANG] = ACTIONS(175),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(175),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(175),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(175),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(175),
    [anon_sym_BANGfine_BANG] = ACTIONS(175),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(175),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(175),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(175),
    [sym_parts_line] = ACTIONS(175),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(173),
    [sym_area] = ACTIONS(175),
    [sym_book] = ACTIONS(175),
    [sym_composer] = ACTIONS(175),
    [sym_discography] = ACTIONS(175),
    [sym_file] = ACTIONS(175),
    [sym_group] = ACTIONS(175),
    [sym_history] = ACTIONS(175),
    [sym_instruction] = ACTIONS(175),
    [sym_key] = ACTIONS(175),
    [sym_macros] = ACTIONS(175),
    [sym_meter] = ACTIONS(175),
    [sym_notes] = ACTIONS(175),
    [sym_origin] = ACTIONS(175),
    [sym_remark] = ACTIONS(175),
    [sym_rhythm_line] = ACTIONS(175),
    [sym_source] = ACTIONS(175),
    [anon_sym_s_COLON] = ACTIONS(175),
    [sym_tempo] = ACTIONS(175),
    [sym_transcription] = ACTIONS(175),
    [sym_tune_title] = ACTIONS(175),
    [sym_unit_note_length] = ACTIONS(175),
    [anon_sym_U_COLON] = ACTIONS(175),
    [sym_voice] = ACTIONS(175),
    [sym_words_postbody] = ACTIONS(175),
  },
  [9] = {
    [sym__NL] = ACTIONS(142),
    [sym_COMMENT] = ACTIONS(142),
    [aux_sym__music_content_token1] = ACTIONS(142),
    [sym_slur_open] = ACTIONS(142),
    [sym_slur_close] = ACTIONS(147),
    [anon_sym_LBRACK] = ACTIONS(142),
    [sym_alteration] = ACTIONS(147),
    [sym_note_letter] = ACTIONS(142),
    [sym_rest] = ACTIONS(147),
    [anon_sym_Z] = ACTIONS(142),
    [anon_sym_X] = ACTIONS(147),
    [aux_sym_grace_note_token1] = ACTIONS(147),
    [aux_sym_chord_symbol_token1] = ACTIONS(142),
    [sym_annotation] = ACTIONS(147),
    [sym_tuplet_marker] = ACTIONS(147),
    [sym_decoration_shorthand] = ACTIONS(142),
    [sym_bar_line] = ACTIONS(142),
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
    [anon_sym_PERCENTabc_DASH] = ACTIONS(142),
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
    [sym__NL] = ACTIONS(177),
    [sym_COMMENT] = ACTIONS(177),
    [aux_sym__music_content_token1] = ACTIONS(177),
    [sym_slur_open] = ACTIONS(177),
    [sym_slur_close] = ACTIONS(179),
    [anon_sym_LBRACK] = ACTIONS(177),
    [sym_alteration] = ACTIONS(179),
    [sym_note_letter] = ACTIONS(177),
    [sym_rest] = ACTIONS(179),
    [anon_sym_Z] = ACTIONS(177),
    [anon_sym_X] = ACTIONS(179),
    [aux_sym_grace_note_token1] = ACTIONS(179),
    [aux_sym_chord_symbol_token1] = ACTIONS(177),
    [sym_annotation] = ACTIONS(179),
    [sym_tuplet_marker] = ACTIONS(179),
    [sym_decoration_shorthand] = ACTIONS(177),
    [sym_bar_line] = ACTIONS(177),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(179),
    [sym_thin_double_bar_line] = ACTIONS(179),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(179),
    [sym_start_of_repeated_section] = ACTIONS(179),
    [sym_end_of_repeated_section] = ACTIONS(179),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(179),
    [anon_sym_BANGtrill_BANG] = ACTIONS(179),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(179),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(179),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(179),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(179),
    [anon_sym_BANGmordent_BANG] = ACTIONS(179),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(179),
    [anon_sym_BANGroll_BANG] = ACTIONS(179),
    [anon_sym_BANGturn_BANG] = ACTIONS(179),
    [anon_sym_BANGturnx_BANG] = ACTIONS(179),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(179),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(179),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(179),
    [anon_sym_BANG_GT_BANG] = ACTIONS(179),
    [anon_sym_BANGaccent_BANG] = ACTIONS(179),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(179),
    [anon_sym_BANGfermata_BANG] = ACTIONS(179),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(179),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(179),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(179),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(179),
    [anon_sym_BANGplus_BANG] = ACTIONS(179),
    [anon_sym_BANGsnap_BANG] = ACTIONS(179),
    [anon_sym_BANGslide_BANG] = ACTIONS(179),
    [anon_sym_BANGwedge_BANG] = ACTIONS(179),
    [anon_sym_BANGupbow_BANG] = ACTIONS(179),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(179),
    [anon_sym_BANGopen_BANG] = ACTIONS(179),
    [anon_sym_BANGthumb_BANG] = ACTIONS(179),
    [anon_sym_BANGbreath_BANG] = ACTIONS(179),
    [anon_sym_BANGpppp_BANG] = ACTIONS(179),
    [anon_sym_BANGppp_BANG] = ACTIONS(179),
    [anon_sym_BANGpp_BANG] = ACTIONS(179),
    [anon_sym_BANGp_BANG] = ACTIONS(179),
    [anon_sym_BANGmp_BANG] = ACTIONS(179),
    [anon_sym_BANGmf_BANG] = ACTIONS(179),
    [anon_sym_BANGf_BANG] = ACTIONS(179),
    [anon_sym_BANGff_BANG] = ACTIONS(179),
    [anon_sym_BANGfff_BANG] = ACTIONS(179),
    [anon_sym_BANGffff_BANG] = ACTIONS(179),
    [anon_sym_BANGsfz_BANG] = ACTIONS(179),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(179),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(179),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(179),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(179),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(179),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(179),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(179),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(179),
    [anon_sym_BANGsegno_BANG] = ACTIONS(179),
    [anon_sym_BANGcoda_BANG] = ACTIONS(179),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(179),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(179),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(179),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(179),
    [anon_sym_BANGfine_BANG] = ACTIONS(179),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(179),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(179),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(179),
    [sym_parts_line] = ACTIONS(179),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(177),
    [sym_area] = ACTIONS(179),
    [sym_book] = ACTIONS(179),
    [sym_composer] = ACTIONS(179),
    [sym_discography] = ACTIONS(179),
    [sym_file] = ACTIONS(179),
    [sym_group] = ACTIONS(179),
    [sym_history] = ACTIONS(179),
    [sym_instruction] = ACTIONS(179),
    [sym_key] = ACTIONS(179),
    [sym_macros] = ACTIONS(179),
    [sym_meter] = ACTIONS(179),
    [sym_notes] = ACTIONS(179),
    [sym_origin] = ACTIONS(179),
    [sym_remark] = ACTIONS(179),
    [sym_rhythm_line] = ACTIONS(179),
    [sym_source] = ACTIONS(179),
    [anon_sym_s_COLON] = ACTIONS(179),
    [sym_tempo] = ACTIONS(179),
    [sym_transcription] = ACTIONS(179),
    [sym_tune_title] = ACTIONS(179),
    [sym_unit_note_length] = ACTIONS(179),
    [anon_sym_U_COLON] = ACTIONS(179),
    [sym_voice] = ACTIONS(179),
    [sym_words_postbody] = ACTIONS(179),
  },
  [11] = {
    [sym__MUSIC_CODE] = STATE(3),
    [sym_tune_body] = STATE(170),
    [sym__music_content] = STATE(27),
    [sym__nte_or_chrd] = STATE(62),
    [sym_beam] = STATE(27),
    [sym_note_construct] = STATE(62),
    [sym__chord_cstrct] = STATE(62),
    [sym_note] = STATE(115),
    [sym__pitch] = STATE(87),
    [sym_multimeasure_rest] = STATE(27),
    [sym_grace_note] = STATE(77),
    [sym_chord_symbol] = STATE(151),
    [sym_decoration] = STATE(182),
    [sym_nth_ending_barline] = STATE(30),
    [sym_generic_bar_line] = STATE(27),
    [sym_first_repeat_bar] = STATE(30),
    [sym_second_repeat_bar] = STATE(30),
    [sym_lyric_line] = STATE(196),
    [sym_lyric_section] = STATE(264),
    [sym_symbol] = STATE(27),
    [aux_sym_note_construct_repeat1] = STATE(77),
    [aux_sym_lyric_section_repeat1] = STATE(196),
    [sym__NL] = ACTIONS(181),
    [aux_sym__music_content_token1] = ACTIONS(94),
    [sym_slur_open] = ACTIONS(96),
    [sym_slur_close] = ACTIONS(98),
    [anon_sym_LBRACK] = ACTIONS(100),
    [sym_alteration] = ACTIONS(102),
    [sym_note_letter] = ACTIONS(104),
    [sym_rest] = ACTIONS(106),
    [anon_sym_Z] = ACTIONS(108),
    [anon_sym_X] = ACTIONS(108),
    [aux_sym_grace_note_token1] = ACTIONS(110),
    [aux_sym_chord_symbol_token1] = ACTIONS(112),
    [sym_annotation] = ACTIONS(98),
    [sym_tuplet_marker] = ACTIONS(114),
    [sym_decoration_shorthand] = ACTIONS(183),
    [sym_bar_line] = ACTIONS(118),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(120),
    [sym_thin_double_bar_line] = ACTIONS(120),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(120),
    [sym_start_of_repeated_section] = ACTIONS(122),
    [sym_end_of_repeated_section] = ACTIONS(124),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(122),
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
    [sym_words_postbody] = ACTIONS(185),
  },
  [12] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(14),
    [sym__NL] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(189),
    [sym_COMMENT] = ACTIONS(187),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(191),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(187),
    [aux_sym__music_content_token1] = ACTIONS(187),
    [sym_slur_open] = ACTIONS(187),
    [sym_slur_close] = ACTIONS(191),
    [anon_sym_LBRACK] = ACTIONS(187),
    [sym_alteration] = ACTIONS(191),
    [sym_note_letter] = ACTIONS(191),
    [sym_rest] = ACTIONS(191),
    [anon_sym_Z] = ACTIONS(191),
    [anon_sym_X] = ACTIONS(191),
    [aux_sym_grace_note_token1] = ACTIONS(191),
    [aux_sym_chord_symbol_token1] = ACTIONS(187),
    [sym_annotation] = ACTIONS(191),
    [sym_tuplet_marker] = ACTIONS(191),
    [sym_decoration_shorthand] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(189),
    [sym_bar_line] = ACTIONS(187),
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
    [sym_parts_line] = ACTIONS(191),
    [sym_instruction] = ACTIONS(191),
    [sym_key] = ACTIONS(191),
    [sym_macros] = ACTIONS(191),
    [sym_meter] = ACTIONS(191),
    [sym_notes] = ACTIONS(191),
    [sym_remark] = ACTIONS(191),
    [sym_rhythm_line] = ACTIONS(191),
    [anon_sym_s_COLON] = ACTIONS(191),
    [sym_tempo] = ACTIONS(191),
    [sym_tune_title] = ACTIONS(191),
    [sym_unit_note_length] = ACTIONS(191),
    [anon_sym_U_COLON] = ACTIONS(191),
    [sym_voice] = ACTIONS(191),
    [anon_sym_w_COLON] = ACTIONS(191),
    [sym_words_postbody] = ACTIONS(191),
  },
  [13] = {
    [sym__NL] = ACTIONS(193),
    [sym_COMMENT] = ACTIONS(193),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(195),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(193),
    [aux_sym__music_content_token1] = ACTIONS(193),
    [aux_sym_beam_token1] = ACTIONS(197),
    [sym_slur_open] = ACTIONS(193),
    [sym_slur_close] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(193),
    [sym_alteration] = ACTIONS(195),
    [sym_note_letter] = ACTIONS(195),
    [sym_rest] = ACTIONS(195),
    [anon_sym_Z] = ACTIONS(195),
    [anon_sym_X] = ACTIONS(195),
    [aux_sym_grace_note_token1] = ACTIONS(195),
    [aux_sym_chord_symbol_token1] = ACTIONS(193),
    [sym_annotation] = ACTIONS(195),
    [sym_tuplet_marker] = ACTIONS(195),
    [sym_decoration_shorthand] = ACTIONS(193),
    [sym_bar_line] = ACTIONS(193),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(195),
    [sym_thin_double_bar_line] = ACTIONS(195),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(195),
    [sym_start_of_repeated_section] = ACTIONS(195),
    [sym_end_of_repeated_section] = ACTIONS(195),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(195),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(199),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(201),
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
    [sym_parts_line] = ACTIONS(195),
    [sym_instruction] = ACTIONS(195),
    [sym_key] = ACTIONS(195),
    [sym_macros] = ACTIONS(195),
    [sym_meter] = ACTIONS(195),
    [sym_notes] = ACTIONS(195),
    [sym_remark] = ACTIONS(195),
    [sym_rhythm_line] = ACTIONS(195),
    [anon_sym_s_COLON] = ACTIONS(195),
    [sym_tempo] = ACTIONS(195),
    [sym_tune_title] = ACTIONS(195),
    [sym_unit_note_length] = ACTIONS(195),
    [anon_sym_U_COLON] = ACTIONS(195),
    [sym_voice] = ACTIONS(195),
    [anon_sym_w_COLON] = ACTIONS(195),
    [sym_words_postbody] = ACTIONS(195),
  },
  [14] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(14),
    [sym__NL] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(205),
    [sym_COMMENT] = ACTIONS(203),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(208),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(203),
    [aux_sym__music_content_token1] = ACTIONS(203),
    [sym_slur_open] = ACTIONS(203),
    [sym_slur_close] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(203),
    [sym_alteration] = ACTIONS(208),
    [sym_note_letter] = ACTIONS(208),
    [sym_rest] = ACTIONS(208),
    [anon_sym_Z] = ACTIONS(208),
    [anon_sym_X] = ACTIONS(208),
    [aux_sym_grace_note_token1] = ACTIONS(208),
    [aux_sym_chord_symbol_token1] = ACTIONS(203),
    [sym_annotation] = ACTIONS(208),
    [sym_tuplet_marker] = ACTIONS(208),
    [sym_decoration_shorthand] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(205),
    [sym_bar_line] = ACTIONS(203),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(208),
    [sym_thin_double_bar_line] = ACTIONS(208),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(208),
    [sym_start_of_repeated_section] = ACTIONS(208),
    [sym_end_of_repeated_section] = ACTIONS(208),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(208),
    [anon_sym_BANGtrill_BANG] = ACTIONS(208),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(208),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(208),
    [anon_sym_BANGmordent_BANG] = ACTIONS(208),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(208),
    [anon_sym_BANGroll_BANG] = ACTIONS(208),
    [anon_sym_BANGturn_BANG] = ACTIONS(208),
    [anon_sym_BANGturnx_BANG] = ACTIONS(208),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(208),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(208),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(208),
    [anon_sym_BANG_GT_BANG] = ACTIONS(208),
    [anon_sym_BANGaccent_BANG] = ACTIONS(208),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(208),
    [anon_sym_BANGfermata_BANG] = ACTIONS(208),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(208),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(208),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(208),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(208),
    [anon_sym_BANGplus_BANG] = ACTIONS(208),
    [anon_sym_BANGsnap_BANG] = ACTIONS(208),
    [anon_sym_BANGslide_BANG] = ACTIONS(208),
    [anon_sym_BANGwedge_BANG] = ACTIONS(208),
    [anon_sym_BANGupbow_BANG] = ACTIONS(208),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(208),
    [anon_sym_BANGopen_BANG] = ACTIONS(208),
    [anon_sym_BANGthumb_BANG] = ACTIONS(208),
    [anon_sym_BANGbreath_BANG] = ACTIONS(208),
    [anon_sym_BANGpppp_BANG] = ACTIONS(208),
    [anon_sym_BANGppp_BANG] = ACTIONS(208),
    [anon_sym_BANGpp_BANG] = ACTIONS(208),
    [anon_sym_BANGp_BANG] = ACTIONS(208),
    [anon_sym_BANGmp_BANG] = ACTIONS(208),
    [anon_sym_BANGmf_BANG] = ACTIONS(208),
    [anon_sym_BANGf_BANG] = ACTIONS(208),
    [anon_sym_BANGff_BANG] = ACTIONS(208),
    [anon_sym_BANGfff_BANG] = ACTIONS(208),
    [anon_sym_BANGffff_BANG] = ACTIONS(208),
    [anon_sym_BANGsfz_BANG] = ACTIONS(208),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGsegno_BANG] = ACTIONS(208),
    [anon_sym_BANGcoda_BANG] = ACTIONS(208),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(208),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(208),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(208),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(208),
    [anon_sym_BANGfine_BANG] = ACTIONS(208),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(208),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(208),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(208),
    [sym_parts_line] = ACTIONS(208),
    [sym_instruction] = ACTIONS(208),
    [sym_key] = ACTIONS(208),
    [sym_macros] = ACTIONS(208),
    [sym_meter] = ACTIONS(208),
    [sym_notes] = ACTIONS(208),
    [sym_remark] = ACTIONS(208),
    [sym_rhythm_line] = ACTIONS(208),
    [anon_sym_s_COLON] = ACTIONS(208),
    [sym_tempo] = ACTIONS(208),
    [sym_tune_title] = ACTIONS(208),
    [sym_unit_note_length] = ACTIONS(208),
    [anon_sym_U_COLON] = ACTIONS(208),
    [sym_voice] = ACTIONS(208),
    [anon_sym_w_COLON] = ACTIONS(208),
    [sym_words_postbody] = ACTIONS(208),
  },
  [15] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(12),
    [sym__NL] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(189),
    [sym_COMMENT] = ACTIONS(210),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(212),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(210),
    [aux_sym__music_content_token1] = ACTIONS(210),
    [sym_slur_open] = ACTIONS(210),
    [sym_slur_close] = ACTIONS(212),
    [anon_sym_LBRACK] = ACTIONS(210),
    [sym_alteration] = ACTIONS(212),
    [sym_note_letter] = ACTIONS(212),
    [sym_rest] = ACTIONS(212),
    [anon_sym_Z] = ACTIONS(212),
    [anon_sym_X] = ACTIONS(212),
    [aux_sym_grace_note_token1] = ACTIONS(212),
    [aux_sym_chord_symbol_token1] = ACTIONS(210),
    [sym_annotation] = ACTIONS(212),
    [sym_tuplet_marker] = ACTIONS(212),
    [sym_decoration_shorthand] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(189),
    [sym_bar_line] = ACTIONS(210),
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
    [sym_parts_line] = ACTIONS(212),
    [sym_instruction] = ACTIONS(212),
    [sym_key] = ACTIONS(212),
    [sym_macros] = ACTIONS(212),
    [sym_meter] = ACTIONS(212),
    [sym_notes] = ACTIONS(212),
    [sym_remark] = ACTIONS(212),
    [sym_rhythm_line] = ACTIONS(212),
    [anon_sym_s_COLON] = ACTIONS(212),
    [sym_tempo] = ACTIONS(212),
    [sym_tune_title] = ACTIONS(212),
    [sym_unit_note_length] = ACTIONS(212),
    [anon_sym_U_COLON] = ACTIONS(212),
    [sym_voice] = ACTIONS(212),
    [anon_sym_w_COLON] = ACTIONS(212),
    [sym_words_postbody] = ACTIONS(212),
  },
  [16] = {
    [sym__NL] = ACTIONS(193),
    [sym_COMMENT] = ACTIONS(193),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(195),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(193),
    [aux_sym__music_content_token1] = ACTIONS(193),
    [aux_sym_beam_token1] = ACTIONS(197),
    [sym_slur_open] = ACTIONS(193),
    [sym_slur_close] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(193),
    [sym_alteration] = ACTIONS(195),
    [sym_note_letter] = ACTIONS(195),
    [sym_rest] = ACTIONS(195),
    [anon_sym_Z] = ACTIONS(195),
    [anon_sym_X] = ACTIONS(195),
    [aux_sym_grace_note_token1] = ACTIONS(195),
    [aux_sym_chord_symbol_token1] = ACTIONS(193),
    [sym_annotation] = ACTIONS(195),
    [sym_tuplet_marker] = ACTIONS(195),
    [sym_decoration_shorthand] = ACTIONS(193),
    [sym_bar_line] = ACTIONS(193),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(195),
    [sym_thin_double_bar_line] = ACTIONS(195),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(195),
    [sym_start_of_repeated_section] = ACTIONS(195),
    [sym_end_of_repeated_section] = ACTIONS(195),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(195),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(214),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(216),
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
    [sym_parts_line] = ACTIONS(195),
    [sym_instruction] = ACTIONS(195),
    [sym_key] = ACTIONS(195),
    [sym_macros] = ACTIONS(195),
    [sym_meter] = ACTIONS(195),
    [sym_notes] = ACTIONS(195),
    [sym_remark] = ACTIONS(195),
    [sym_rhythm_line] = ACTIONS(195),
    [anon_sym_s_COLON] = ACTIONS(195),
    [sym_tempo] = ACTIONS(195),
    [sym_tune_title] = ACTIONS(195),
    [sym_unit_note_length] = ACTIONS(195),
    [anon_sym_U_COLON] = ACTIONS(195),
    [sym_voice] = ACTIONS(195),
    [anon_sym_w_COLON] = ACTIONS(195),
    [sym_words_postbody] = ACTIONS(195),
  },
  [17] = {
    [sym__NL] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(208),
    [sym_COMMENT] = ACTIONS(203),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(208),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(203),
    [aux_sym__music_content_token1] = ACTIONS(203),
    [sym_slur_open] = ACTIONS(203),
    [sym_slur_close] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(203),
    [sym_alteration] = ACTIONS(208),
    [sym_note_letter] = ACTIONS(208),
    [sym_rest] = ACTIONS(208),
    [anon_sym_Z] = ACTIONS(208),
    [anon_sym_X] = ACTIONS(208),
    [aux_sym_grace_note_token1] = ACTIONS(208),
    [aux_sym_chord_symbol_token1] = ACTIONS(203),
    [sym_annotation] = ACTIONS(208),
    [sym_tuplet_marker] = ACTIONS(208),
    [sym_decoration_shorthand] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(208),
    [sym_bar_line] = ACTIONS(203),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(208),
    [sym_thin_double_bar_line] = ACTIONS(208),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(208),
    [sym_start_of_repeated_section] = ACTIONS(208),
    [sym_end_of_repeated_section] = ACTIONS(208),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(208),
    [anon_sym_BANGtrill_BANG] = ACTIONS(208),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(208),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(208),
    [anon_sym_BANGmordent_BANG] = ACTIONS(208),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(208),
    [anon_sym_BANGroll_BANG] = ACTIONS(208),
    [anon_sym_BANGturn_BANG] = ACTIONS(208),
    [anon_sym_BANGturnx_BANG] = ACTIONS(208),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(208),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(208),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(208),
    [anon_sym_BANG_GT_BANG] = ACTIONS(208),
    [anon_sym_BANGaccent_BANG] = ACTIONS(208),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(208),
    [anon_sym_BANGfermata_BANG] = ACTIONS(208),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(208),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(208),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(208),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(208),
    [anon_sym_BANGplus_BANG] = ACTIONS(208),
    [anon_sym_BANGsnap_BANG] = ACTIONS(208),
    [anon_sym_BANGslide_BANG] = ACTIONS(208),
    [anon_sym_BANGwedge_BANG] = ACTIONS(208),
    [anon_sym_BANGupbow_BANG] = ACTIONS(208),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(208),
    [anon_sym_BANGopen_BANG] = ACTIONS(208),
    [anon_sym_BANGthumb_BANG] = ACTIONS(208),
    [anon_sym_BANGbreath_BANG] = ACTIONS(208),
    [anon_sym_BANGpppp_BANG] = ACTIONS(208),
    [anon_sym_BANGppp_BANG] = ACTIONS(208),
    [anon_sym_BANGpp_BANG] = ACTIONS(208),
    [anon_sym_BANGp_BANG] = ACTIONS(208),
    [anon_sym_BANGmp_BANG] = ACTIONS(208),
    [anon_sym_BANGmf_BANG] = ACTIONS(208),
    [anon_sym_BANGf_BANG] = ACTIONS(208),
    [anon_sym_BANGff_BANG] = ACTIONS(208),
    [anon_sym_BANGfff_BANG] = ACTIONS(208),
    [anon_sym_BANGffff_BANG] = ACTIONS(208),
    [anon_sym_BANGsfz_BANG] = ACTIONS(208),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(208),
    [anon_sym_BANGsegno_BANG] = ACTIONS(208),
    [anon_sym_BANGcoda_BANG] = ACTIONS(208),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(208),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(208),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(208),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(208),
    [anon_sym_BANGfine_BANG] = ACTIONS(208),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(208),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(208),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(208),
    [sym_parts_line] = ACTIONS(208),
    [sym_instruction] = ACTIONS(208),
    [sym_key] = ACTIONS(208),
    [sym_macros] = ACTIONS(208),
    [sym_meter] = ACTIONS(208),
    [sym_notes] = ACTIONS(208),
    [sym_remark] = ACTIONS(208),
    [sym_rhythm_line] = ACTIONS(208),
    [anon_sym_s_COLON] = ACTIONS(208),
    [sym_tempo] = ACTIONS(208),
    [sym_tune_title] = ACTIONS(208),
    [sym_unit_note_length] = ACTIONS(208),
    [anon_sym_U_COLON] = ACTIONS(208),
    [sym_voice] = ACTIONS(208),
    [anon_sym_w_COLON] = ACTIONS(208),
    [sym_words_postbody] = ACTIONS(208),
  },
  [18] = {
    [sym__NL] = ACTIONS(193),
    [sym_COMMENT] = ACTIONS(193),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(195),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(193),
    [aux_sym__music_content_token1] = ACTIONS(193),
    [aux_sym_beam_token1] = ACTIONS(197),
    [sym_slur_open] = ACTIONS(193),
    [sym_slur_close] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(193),
    [sym_alteration] = ACTIONS(195),
    [sym_note_letter] = ACTIONS(195),
    [sym_rest] = ACTIONS(195),
    [anon_sym_Z] = ACTIONS(195),
    [anon_sym_X] = ACTIONS(195),
    [aux_sym_grace_note_token1] = ACTIONS(195),
    [aux_sym_chord_symbol_token1] = ACTIONS(193),
    [sym_annotation] = ACTIONS(195),
    [sym_tuplet_marker] = ACTIONS(195),
    [sym_decoration_shorthand] = ACTIONS(193),
    [sym_bar_line] = ACTIONS(193),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(195),
    [sym_thin_double_bar_line] = ACTIONS(195),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(195),
    [sym_start_of_repeated_section] = ACTIONS(195),
    [sym_end_of_repeated_section] = ACTIONS(195),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(195),
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
    [sym_parts_line] = ACTIONS(195),
    [sym_instruction] = ACTIONS(195),
    [sym_key] = ACTIONS(195),
    [sym_macros] = ACTIONS(195),
    [sym_meter] = ACTIONS(195),
    [sym_notes] = ACTIONS(195),
    [sym_remark] = ACTIONS(195),
    [sym_rhythm_line] = ACTIONS(195),
    [anon_sym_s_COLON] = ACTIONS(195),
    [sym_tempo] = ACTIONS(195),
    [sym_tune_title] = ACTIONS(195),
    [sym_unit_note_length] = ACTIONS(195),
    [anon_sym_U_COLON] = ACTIONS(195),
    [sym_voice] = ACTIONS(195),
    [anon_sym_w_COLON] = ACTIONS(195),
    [sym_words_postbody] = ACTIONS(195),
  },
  [19] = {
    [sym__NL] = ACTIONS(218),
    [sym_COMMENT] = ACTIONS(218),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(220),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(218),
    [aux_sym__music_content_token1] = ACTIONS(218),
    [sym_slur_open] = ACTIONS(218),
    [sym_slur_close] = ACTIONS(220),
    [anon_sym_LBRACK] = ACTIONS(218),
    [sym_alteration] = ACTIONS(220),
    [sym_note_letter] = ACTIONS(220),
    [sym_rest] = ACTIONS(220),
    [anon_sym_Z] = ACTIONS(220),
    [anon_sym_X] = ACTIONS(220),
    [aux_sym_grace_note_token1] = ACTIONS(220),
    [aux_sym_chord_symbol_token1] = ACTIONS(218),
    [sym_annotation] = ACTIONS(220),
    [sym_tuplet_marker] = ACTIONS(220),
    [sym_decoration_shorthand] = ACTIONS(218),
    [sym_bar_line] = ACTIONS(218),
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
    [sym_parts_line] = ACTIONS(220),
    [sym_instruction] = ACTIONS(220),
    [sym_key] = ACTIONS(220),
    [sym_macros] = ACTIONS(220),
    [sym_meter] = ACTIONS(220),
    [sym_notes] = ACTIONS(220),
    [sym_remark] = ACTIONS(220),
    [sym_rhythm_line] = ACTIONS(220),
    [anon_sym_s_COLON] = ACTIONS(220),
    [sym_tempo] = ACTIONS(220),
    [sym_tune_title] = ACTIONS(220),
    [sym_unit_note_length] = ACTIONS(220),
    [anon_sym_U_COLON] = ACTIONS(220),
    [sym_voice] = ACTIONS(220),
    [anon_sym_w_COLON] = ACTIONS(220),
    [sym_words_postbody] = ACTIONS(220),
  },
  [20] = {
    [sym__NL] = ACTIONS(222),
    [sym_COMMENT] = ACTIONS(222),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(224),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(222),
    [aux_sym__music_content_token1] = ACTIONS(222),
    [sym_slur_open] = ACTIONS(222),
    [sym_slur_close] = ACTIONS(224),
    [anon_sym_LBRACK] = ACTIONS(222),
    [sym_alteration] = ACTIONS(224),
    [sym_note_letter] = ACTIONS(224),
    [sym_rest] = ACTIONS(224),
    [anon_sym_Z] = ACTIONS(224),
    [anon_sym_X] = ACTIONS(224),
    [aux_sym_grace_note_token1] = ACTIONS(224),
    [aux_sym_chord_symbol_token1] = ACTIONS(222),
    [sym_annotation] = ACTIONS(224),
    [sym_tuplet_marker] = ACTIONS(224),
    [sym_decoration_shorthand] = ACTIONS(222),
    [sym_bar_line] = ACTIONS(222),
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
    [sym_instruction] = ACTIONS(224),
    [sym_key] = ACTIONS(224),
    [sym_macros] = ACTIONS(224),
    [sym_meter] = ACTIONS(224),
    [sym_notes] = ACTIONS(224),
    [sym_remark] = ACTIONS(224),
    [sym_rhythm_line] = ACTIONS(224),
    [anon_sym_s_COLON] = ACTIONS(224),
    [sym_tempo] = ACTIONS(224),
    [sym_tune_title] = ACTIONS(224),
    [sym_unit_note_length] = ACTIONS(224),
    [anon_sym_U_COLON] = ACTIONS(224),
    [sym_voice] = ACTIONS(224),
    [anon_sym_w_COLON] = ACTIONS(224),
    [sym_words_postbody] = ACTIONS(224),
  },
  [21] = {
    [sym__NL] = ACTIONS(226),
    [sym_COMMENT] = ACTIONS(226),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(228),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(226),
    [aux_sym__music_content_token1] = ACTIONS(226),
    [sym_slur_open] = ACTIONS(226),
    [sym_slur_close] = ACTIONS(228),
    [anon_sym_LBRACK] = ACTIONS(226),
    [sym_alteration] = ACTIONS(228),
    [sym_note_letter] = ACTIONS(228),
    [sym_rest] = ACTIONS(228),
    [anon_sym_Z] = ACTIONS(228),
    [anon_sym_X] = ACTIONS(228),
    [aux_sym_grace_note_token1] = ACTIONS(228),
    [aux_sym_chord_symbol_token1] = ACTIONS(226),
    [sym_annotation] = ACTIONS(228),
    [sym_tuplet_marker] = ACTIONS(228),
    [sym_decoration_shorthand] = ACTIONS(226),
    [sym_bar_line] = ACTIONS(226),
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
    [sym_instruction] = ACTIONS(228),
    [sym_key] = ACTIONS(228),
    [sym_macros] = ACTIONS(228),
    [sym_meter] = ACTIONS(228),
    [sym_notes] = ACTIONS(228),
    [sym_remark] = ACTIONS(228),
    [sym_rhythm_line] = ACTIONS(228),
    [anon_sym_s_COLON] = ACTIONS(228),
    [sym_tempo] = ACTIONS(228),
    [sym_tune_title] = ACTIONS(228),
    [sym_unit_note_length] = ACTIONS(228),
    [anon_sym_U_COLON] = ACTIONS(228),
    [sym_voice] = ACTIONS(228),
    [anon_sym_w_COLON] = ACTIONS(228),
    [sym_words_postbody] = ACTIONS(228),
  },
  [22] = {
    [sym__NL] = ACTIONS(230),
    [sym_COMMENT] = ACTIONS(230),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(232),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(230),
    [aux_sym__music_content_token1] = ACTIONS(230),
    [sym_slur_open] = ACTIONS(230),
    [sym_slur_close] = ACTIONS(232),
    [anon_sym_LBRACK] = ACTIONS(230),
    [sym_alteration] = ACTIONS(232),
    [sym_note_letter] = ACTIONS(232),
    [sym_rest] = ACTIONS(232),
    [anon_sym_Z] = ACTIONS(232),
    [anon_sym_X] = ACTIONS(232),
    [aux_sym_grace_note_token1] = ACTIONS(232),
    [aux_sym_chord_symbol_token1] = ACTIONS(230),
    [sym_annotation] = ACTIONS(232),
    [sym_tuplet_marker] = ACTIONS(232),
    [sym_decoration_shorthand] = ACTIONS(230),
    [sym_bar_line] = ACTIONS(230),
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
  [23] = {
    [sym__NL] = ACTIONS(234),
    [sym_COMMENT] = ACTIONS(234),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(236),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(234),
    [aux_sym__music_content_token1] = ACTIONS(234),
    [sym_slur_open] = ACTIONS(234),
    [sym_slur_close] = ACTIONS(236),
    [anon_sym_LBRACK] = ACTIONS(234),
    [sym_alteration] = ACTIONS(236),
    [sym_note_letter] = ACTIONS(236),
    [sym_rest] = ACTIONS(236),
    [anon_sym_Z] = ACTIONS(236),
    [anon_sym_X] = ACTIONS(236),
    [aux_sym_grace_note_token1] = ACTIONS(236),
    [aux_sym_chord_symbol_token1] = ACTIONS(234),
    [sym_annotation] = ACTIONS(236),
    [sym_tuplet_marker] = ACTIONS(236),
    [sym_decoration_shorthand] = ACTIONS(234),
    [sym_bar_line] = ACTIONS(234),
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
    [sym_parts_line] = ACTIONS(236),
    [sym_instruction] = ACTIONS(236),
    [sym_key] = ACTIONS(236),
    [sym_macros] = ACTIONS(236),
    [sym_meter] = ACTIONS(236),
    [sym_notes] = ACTIONS(236),
    [sym_remark] = ACTIONS(236),
    [sym_rhythm_line] = ACTIONS(236),
    [anon_sym_s_COLON] = ACTIONS(236),
    [sym_tempo] = ACTIONS(236),
    [sym_tune_title] = ACTIONS(236),
    [sym_unit_note_length] = ACTIONS(236),
    [anon_sym_U_COLON] = ACTIONS(236),
    [sym_voice] = ACTIONS(236),
    [anon_sym_w_COLON] = ACTIONS(236),
    [sym_words_postbody] = ACTIONS(236),
  },
  [24] = {
    [sym__NL] = ACTIONS(238),
    [sym_COMMENT] = ACTIONS(238),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(240),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(238),
    [aux_sym__music_content_token1] = ACTIONS(238),
    [sym_slur_open] = ACTIONS(238),
    [sym_slur_close] = ACTIONS(240),
    [anon_sym_LBRACK] = ACTIONS(238),
    [sym_alteration] = ACTIONS(240),
    [sym_note_letter] = ACTIONS(240),
    [sym_rest] = ACTIONS(240),
    [anon_sym_Z] = ACTIONS(240),
    [anon_sym_X] = ACTIONS(240),
    [aux_sym_grace_note_token1] = ACTIONS(240),
    [aux_sym_chord_symbol_token1] = ACTIONS(238),
    [sym_annotation] = ACTIONS(240),
    [sym_tuplet_marker] = ACTIONS(240),
    [sym_decoration_shorthand] = ACTIONS(238),
    [sym_bar_line] = ACTIONS(238),
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
    [sym_parts_line] = ACTIONS(240),
    [sym_instruction] = ACTIONS(240),
    [sym_key] = ACTIONS(240),
    [sym_macros] = ACTIONS(240),
    [sym_meter] = ACTIONS(240),
    [sym_notes] = ACTIONS(240),
    [sym_remark] = ACTIONS(240),
    [sym_rhythm_line] = ACTIONS(240),
    [anon_sym_s_COLON] = ACTIONS(240),
    [sym_tempo] = ACTIONS(240),
    [sym_tune_title] = ACTIONS(240),
    [sym_unit_note_length] = ACTIONS(240),
    [anon_sym_U_COLON] = ACTIONS(240),
    [sym_voice] = ACTIONS(240),
    [anon_sym_w_COLON] = ACTIONS(240),
    [sym_words_postbody] = ACTIONS(240),
  },
  [25] = {
    [sym__NL] = ACTIONS(242),
    [sym_COMMENT] = ACTIONS(242),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(244),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(242),
    [aux_sym__music_content_token1] = ACTIONS(242),
    [sym_slur_open] = ACTIONS(242),
    [sym_slur_close] = ACTIONS(244),
    [anon_sym_LBRACK] = ACTIONS(242),
    [sym_alteration] = ACTIONS(244),
    [sym_note_letter] = ACTIONS(244),
    [sym_rest] = ACTIONS(244),
    [anon_sym_Z] = ACTIONS(244),
    [anon_sym_X] = ACTIONS(244),
    [aux_sym_grace_note_token1] = ACTIONS(244),
    [aux_sym_chord_symbol_token1] = ACTIONS(242),
    [sym_annotation] = ACTIONS(244),
    [sym_tuplet_marker] = ACTIONS(244),
    [sym_decoration_shorthand] = ACTIONS(242),
    [sym_bar_line] = ACTIONS(242),
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
  [26] = {
    [sym__NL] = ACTIONS(246),
    [sym_COMMENT] = ACTIONS(246),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(248),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(246),
    [aux_sym__music_content_token1] = ACTIONS(246),
    [sym_slur_open] = ACTIONS(246),
    [sym_slur_close] = ACTIONS(248),
    [anon_sym_LBRACK] = ACTIONS(246),
    [sym_alteration] = ACTIONS(248),
    [sym_note_letter] = ACTIONS(248),
    [sym_rest] = ACTIONS(248),
    [anon_sym_Z] = ACTIONS(248),
    [anon_sym_X] = ACTIONS(248),
    [aux_sym_grace_note_token1] = ACTIONS(248),
    [aux_sym_chord_symbol_token1] = ACTIONS(246),
    [sym_annotation] = ACTIONS(248),
    [sym_tuplet_marker] = ACTIONS(248),
    [sym_decoration_shorthand] = ACTIONS(246),
    [sym_bar_line] = ACTIONS(246),
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
  [27] = {
    [sym__NL] = ACTIONS(250),
    [sym_COMMENT] = ACTIONS(250),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(252),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(254),
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
  [28] = {
    [sym__NL] = ACTIONS(256),
    [sym_COMMENT] = ACTIONS(256),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(258),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(256),
    [aux_sym__music_content_token1] = ACTIONS(256),
    [sym_slur_open] = ACTIONS(256),
    [sym_slur_close] = ACTIONS(258),
    [anon_sym_LBRACK] = ACTIONS(256),
    [sym_alteration] = ACTIONS(258),
    [sym_note_letter] = ACTIONS(258),
    [sym_rest] = ACTIONS(258),
    [anon_sym_Z] = ACTIONS(258),
    [anon_sym_X] = ACTIONS(258),
    [aux_sym_grace_note_token1] = ACTIONS(258),
    [aux_sym_chord_symbol_token1] = ACTIONS(256),
    [sym_annotation] = ACTIONS(258),
    [sym_tuplet_marker] = ACTIONS(258),
    [sym_decoration_shorthand] = ACTIONS(256),
    [sym_bar_line] = ACTIONS(256),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(258),
    [sym_thin_double_bar_line] = ACTIONS(258),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(258),
    [sym_start_of_repeated_section] = ACTIONS(258),
    [sym_end_of_repeated_section] = ACTIONS(258),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(258),
    [anon_sym_BANGtrill_BANG] = ACTIONS(258),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(258),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(258),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(258),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(258),
    [anon_sym_BANGmordent_BANG] = ACTIONS(258),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(258),
    [anon_sym_BANGroll_BANG] = ACTIONS(258),
    [anon_sym_BANGturn_BANG] = ACTIONS(258),
    [anon_sym_BANGturnx_BANG] = ACTIONS(258),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(258),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(258),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(258),
    [anon_sym_BANG_GT_BANG] = ACTIONS(258),
    [anon_sym_BANGaccent_BANG] = ACTIONS(258),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(258),
    [anon_sym_BANGfermata_BANG] = ACTIONS(258),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(258),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(258),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(258),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(258),
    [anon_sym_BANGplus_BANG] = ACTIONS(258),
    [anon_sym_BANGsnap_BANG] = ACTIONS(258),
    [anon_sym_BANGslide_BANG] = ACTIONS(258),
    [anon_sym_BANGwedge_BANG] = ACTIONS(258),
    [anon_sym_BANGupbow_BANG] = ACTIONS(258),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(258),
    [anon_sym_BANGopen_BANG] = ACTIONS(258),
    [anon_sym_BANGthumb_BANG] = ACTIONS(258),
    [anon_sym_BANGbreath_BANG] = ACTIONS(258),
    [anon_sym_BANGpppp_BANG] = ACTIONS(258),
    [anon_sym_BANGppp_BANG] = ACTIONS(258),
    [anon_sym_BANGpp_BANG] = ACTIONS(258),
    [anon_sym_BANGp_BANG] = ACTIONS(258),
    [anon_sym_BANGmp_BANG] = ACTIONS(258),
    [anon_sym_BANGmf_BANG] = ACTIONS(258),
    [anon_sym_BANGf_BANG] = ACTIONS(258),
    [anon_sym_BANGff_BANG] = ACTIONS(258),
    [anon_sym_BANGfff_BANG] = ACTIONS(258),
    [anon_sym_BANGffff_BANG] = ACTIONS(258),
    [anon_sym_BANGsfz_BANG] = ACTIONS(258),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(258),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(258),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(258),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(258),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(258),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(258),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(258),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(258),
    [anon_sym_BANGsegno_BANG] = ACTIONS(258),
    [anon_sym_BANGcoda_BANG] = ACTIONS(258),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(258),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(258),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(258),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(258),
    [anon_sym_BANGfine_BANG] = ACTIONS(258),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(258),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(258),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(258),
    [sym_parts_line] = ACTIONS(258),
    [sym_instruction] = ACTIONS(258),
    [sym_key] = ACTIONS(258),
    [sym_macros] = ACTIONS(258),
    [sym_meter] = ACTIONS(258),
    [sym_notes] = ACTIONS(258),
    [sym_remark] = ACTIONS(258),
    [sym_rhythm_line] = ACTIONS(258),
    [anon_sym_s_COLON] = ACTIONS(258),
    [sym_tempo] = ACTIONS(258),
    [sym_tune_title] = ACTIONS(258),
    [sym_unit_note_length] = ACTIONS(258),
    [anon_sym_U_COLON] = ACTIONS(258),
    [sym_voice] = ACTIONS(258),
    [anon_sym_w_COLON] = ACTIONS(258),
    [sym_words_postbody] = ACTIONS(258),
  },
  [29] = {
    [sym__NL] = ACTIONS(260),
    [sym_COMMENT] = ACTIONS(260),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(262),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(260),
    [aux_sym__music_content_token1] = ACTIONS(260),
    [sym_slur_open] = ACTIONS(260),
    [sym_slur_close] = ACTIONS(262),
    [anon_sym_LBRACK] = ACTIONS(260),
    [sym_alteration] = ACTIONS(262),
    [sym_note_letter] = ACTIONS(262),
    [sym_rest] = ACTIONS(262),
    [anon_sym_Z] = ACTIONS(262),
    [anon_sym_X] = ACTIONS(262),
    [aux_sym_grace_note_token1] = ACTIONS(262),
    [aux_sym_chord_symbol_token1] = ACTIONS(260),
    [sym_annotation] = ACTIONS(262),
    [sym_tuplet_marker] = ACTIONS(262),
    [sym_decoration_shorthand] = ACTIONS(260),
    [sym_bar_line] = ACTIONS(260),
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
  [30] = {
    [sym__NL] = ACTIONS(193),
    [sym_COMMENT] = ACTIONS(193),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(195),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(193),
    [aux_sym__music_content_token1] = ACTIONS(193),
    [sym_slur_open] = ACTIONS(193),
    [sym_slur_close] = ACTIONS(195),
    [anon_sym_LBRACK] = ACTIONS(193),
    [sym_alteration] = ACTIONS(195),
    [sym_note_letter] = ACTIONS(195),
    [sym_rest] = ACTIONS(195),
    [anon_sym_Z] = ACTIONS(195),
    [anon_sym_X] = ACTIONS(195),
    [aux_sym_grace_note_token1] = ACTIONS(195),
    [aux_sym_chord_symbol_token1] = ACTIONS(193),
    [sym_annotation] = ACTIONS(195),
    [sym_tuplet_marker] = ACTIONS(195),
    [sym_decoration_shorthand] = ACTIONS(193),
    [sym_bar_line] = ACTIONS(193),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(195),
    [sym_thin_double_bar_line] = ACTIONS(195),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(195),
    [sym_start_of_repeated_section] = ACTIONS(195),
    [sym_end_of_repeated_section] = ACTIONS(195),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(195),
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
    [sym_parts_line] = ACTIONS(195),
    [sym_instruction] = ACTIONS(195),
    [sym_key] = ACTIONS(195),
    [sym_macros] = ACTIONS(195),
    [sym_meter] = ACTIONS(195),
    [sym_notes] = ACTIONS(195),
    [sym_remark] = ACTIONS(195),
    [sym_rhythm_line] = ACTIONS(195),
    [anon_sym_s_COLON] = ACTIONS(195),
    [sym_tempo] = ACTIONS(195),
    [sym_tune_title] = ACTIONS(195),
    [sym_unit_note_length] = ACTIONS(195),
    [anon_sym_U_COLON] = ACTIONS(195),
    [sym_voice] = ACTIONS(195),
    [anon_sym_w_COLON] = ACTIONS(195),
    [sym_words_postbody] = ACTIONS(195),
  },
  [31] = {
    [sym__NL] = ACTIONS(264),
    [sym_COMMENT] = ACTIONS(264),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(266),
    [aux_sym__music_content_token1] = ACTIONS(264),
    [sym_slur_open] = ACTIONS(264),
    [sym_slur_close] = ACTIONS(266),
    [anon_sym_LBRACK] = ACTIONS(264),
    [sym_alteration] = ACTIONS(266),
    [sym_note_letter] = ACTIONS(266),
    [sym_rest] = ACTIONS(266),
    [anon_sym_Z] = ACTIONS(266),
    [anon_sym_X] = ACTIONS(266),
    [aux_sym_grace_note_token1] = ACTIONS(266),
    [aux_sym_chord_symbol_token1] = ACTIONS(264),
    [sym_annotation] = ACTIONS(266),
    [sym_tuplet_marker] = ACTIONS(266),
    [sym_decoration_shorthand] = ACTIONS(264),
    [sym_bar_line] = ACTIONS(264),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(266),
    [sym_thin_double_bar_line] = ACTIONS(266),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(266),
    [sym_start_of_repeated_section] = ACTIONS(266),
    [sym_end_of_repeated_section] = ACTIONS(266),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(266),
    [anon_sym_BANGtrill_BANG] = ACTIONS(266),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(266),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(266),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(266),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(266),
    [anon_sym_BANGmordent_BANG] = ACTIONS(266),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(266),
    [anon_sym_BANGroll_BANG] = ACTIONS(266),
    [anon_sym_BANGturn_BANG] = ACTIONS(266),
    [anon_sym_BANGturnx_BANG] = ACTIONS(266),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(266),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(266),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(266),
    [anon_sym_BANG_GT_BANG] = ACTIONS(266),
    [anon_sym_BANGaccent_BANG] = ACTIONS(266),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(266),
    [anon_sym_BANGfermata_BANG] = ACTIONS(266),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(266),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(266),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(266),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(266),
    [anon_sym_BANGplus_BANG] = ACTIONS(266),
    [anon_sym_BANGsnap_BANG] = ACTIONS(266),
    [anon_sym_BANGslide_BANG] = ACTIONS(266),
    [anon_sym_BANGwedge_BANG] = ACTIONS(266),
    [anon_sym_BANGupbow_BANG] = ACTIONS(266),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(266),
    [anon_sym_BANGopen_BANG] = ACTIONS(266),
    [anon_sym_BANGthumb_BANG] = ACTIONS(266),
    [anon_sym_BANGbreath_BANG] = ACTIONS(266),
    [anon_sym_BANGpppp_BANG] = ACTIONS(266),
    [anon_sym_BANGppp_BANG] = ACTIONS(266),
    [anon_sym_BANGpp_BANG] = ACTIONS(266),
    [anon_sym_BANGp_BANG] = ACTIONS(266),
    [anon_sym_BANGmp_BANG] = ACTIONS(266),
    [anon_sym_BANGmf_BANG] = ACTIONS(266),
    [anon_sym_BANGf_BANG] = ACTIONS(266),
    [anon_sym_BANGff_BANG] = ACTIONS(266),
    [anon_sym_BANGfff_BANG] = ACTIONS(266),
    [anon_sym_BANGffff_BANG] = ACTIONS(266),
    [anon_sym_BANGsfz_BANG] = ACTIONS(266),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(266),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(266),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(266),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(266),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(266),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(266),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(266),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(266),
    [anon_sym_BANGsegno_BANG] = ACTIONS(266),
    [anon_sym_BANGcoda_BANG] = ACTIONS(266),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(266),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(266),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(266),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(266),
    [anon_sym_BANGfine_BANG] = ACTIONS(266),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(266),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(266),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(266),
    [sym_parts_line] = ACTIONS(266),
    [sym_instruction] = ACTIONS(266),
    [sym_key] = ACTIONS(266),
    [sym_macros] = ACTIONS(266),
    [sym_meter] = ACTIONS(266),
    [sym_notes] = ACTIONS(266),
    [sym_remark] = ACTIONS(266),
    [sym_rhythm_line] = ACTIONS(266),
    [anon_sym_s_COLON] = ACTIONS(266),
    [sym_tempo] = ACTIONS(266),
    [sym_tune_title] = ACTIONS(266),
    [sym_unit_note_length] = ACTIONS(266),
    [anon_sym_U_COLON] = ACTIONS(266),
    [sym_voice] = ACTIONS(266),
    [anon_sym_w_COLON] = ACTIONS(266),
    [sym_words_postbody] = ACTIONS(266),
  },
  [32] = {
    [sym__NL] = ACTIONS(268),
    [sym_COMMENT] = ACTIONS(268),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(270),
    [aux_sym__music_content_token1] = ACTIONS(268),
    [sym_slur_open] = ACTIONS(268),
    [sym_slur_close] = ACTIONS(270),
    [anon_sym_LBRACK] = ACTIONS(268),
    [sym_alteration] = ACTIONS(270),
    [sym_note_letter] = ACTIONS(270),
    [sym_rest] = ACTIONS(270),
    [anon_sym_Z] = ACTIONS(270),
    [anon_sym_X] = ACTIONS(270),
    [aux_sym_grace_note_token1] = ACTIONS(270),
    [aux_sym_chord_symbol_token1] = ACTIONS(268),
    [sym_annotation] = ACTIONS(270),
    [sym_tuplet_marker] = ACTIONS(270),
    [sym_decoration_shorthand] = ACTIONS(268),
    [sym_bar_line] = ACTIONS(268),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(270),
    [sym_thin_double_bar_line] = ACTIONS(270),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(270),
    [sym_start_of_repeated_section] = ACTIONS(270),
    [sym_end_of_repeated_section] = ACTIONS(270),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(270),
    [anon_sym_BANGtrill_BANG] = ACTIONS(270),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(270),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(270),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(270),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(270),
    [anon_sym_BANGmordent_BANG] = ACTIONS(270),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(270),
    [anon_sym_BANGroll_BANG] = ACTIONS(270),
    [anon_sym_BANGturn_BANG] = ACTIONS(270),
    [anon_sym_BANGturnx_BANG] = ACTIONS(270),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(270),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(270),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(270),
    [anon_sym_BANG_GT_BANG] = ACTIONS(270),
    [anon_sym_BANGaccent_BANG] = ACTIONS(270),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(270),
    [anon_sym_BANGfermata_BANG] = ACTIONS(270),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(270),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(270),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(270),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(270),
    [anon_sym_BANGplus_BANG] = ACTIONS(270),
    [anon_sym_BANGsnap_BANG] = ACTIONS(270),
    [anon_sym_BANGslide_BANG] = ACTIONS(270),
    [anon_sym_BANGwedge_BANG] = ACTIONS(270),
    [anon_sym_BANGupbow_BANG] = ACTIONS(270),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(270),
    [anon_sym_BANGopen_BANG] = ACTIONS(270),
    [anon_sym_BANGthumb_BANG] = ACTIONS(270),
    [anon_sym_BANGbreath_BANG] = ACTIONS(270),
    [anon_sym_BANGpppp_BANG] = ACTIONS(270),
    [anon_sym_BANGppp_BANG] = ACTIONS(270),
    [anon_sym_BANGpp_BANG] = ACTIONS(270),
    [anon_sym_BANGp_BANG] = ACTIONS(270),
    [anon_sym_BANGmp_BANG] = ACTIONS(270),
    [anon_sym_BANGmf_BANG] = ACTIONS(270),
    [anon_sym_BANGf_BANG] = ACTIONS(270),
    [anon_sym_BANGff_BANG] = ACTIONS(270),
    [anon_sym_BANGfff_BANG] = ACTIONS(270),
    [anon_sym_BANGffff_BANG] = ACTIONS(270),
    [anon_sym_BANGsfz_BANG] = ACTIONS(270),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(270),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(270),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(270),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(270),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(270),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(270),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(270),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(270),
    [anon_sym_BANGsegno_BANG] = ACTIONS(270),
    [anon_sym_BANGcoda_BANG] = ACTIONS(270),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(270),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(270),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(270),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(270),
    [anon_sym_BANGfine_BANG] = ACTIONS(270),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(270),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(270),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(270),
    [sym_parts_line] = ACTIONS(270),
    [sym_instruction] = ACTIONS(270),
    [sym_key] = ACTIONS(270),
    [sym_macros] = ACTIONS(270),
    [sym_meter] = ACTIONS(270),
    [sym_notes] = ACTIONS(270),
    [sym_remark] = ACTIONS(270),
    [sym_rhythm_line] = ACTIONS(270),
    [anon_sym_s_COLON] = ACTIONS(270),
    [sym_tempo] = ACTIONS(270),
    [sym_tune_title] = ACTIONS(270),
    [sym_unit_note_length] = ACTIONS(270),
    [anon_sym_U_COLON] = ACTIONS(270),
    [sym_voice] = ACTIONS(270),
    [anon_sym_w_COLON] = ACTIONS(270),
    [sym_words_postbody] = ACTIONS(270),
  },
  [33] = {
    [sym__NL] = ACTIONS(272),
    [sym_COMMENT] = ACTIONS(272),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(274),
    [aux_sym__music_content_token1] = ACTIONS(272),
    [sym_slur_open] = ACTIONS(272),
    [sym_slur_close] = ACTIONS(274),
    [anon_sym_LBRACK] = ACTIONS(272),
    [sym_alteration] = ACTIONS(274),
    [sym_note_letter] = ACTIONS(274),
    [sym_rest] = ACTIONS(274),
    [anon_sym_Z] = ACTIONS(274),
    [anon_sym_X] = ACTIONS(274),
    [aux_sym_grace_note_token1] = ACTIONS(274),
    [aux_sym_chord_symbol_token1] = ACTIONS(272),
    [sym_annotation] = ACTIONS(274),
    [sym_tuplet_marker] = ACTIONS(274),
    [sym_decoration_shorthand] = ACTIONS(272),
    [sym_bar_line] = ACTIONS(272),
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
    [sym_parts_line] = ACTIONS(274),
    [sym_instruction] = ACTIONS(274),
    [sym_key] = ACTIONS(274),
    [sym_macros] = ACTIONS(274),
    [sym_meter] = ACTIONS(274),
    [sym_notes] = ACTIONS(274),
    [sym_remark] = ACTIONS(274),
    [sym_rhythm_line] = ACTIONS(274),
    [anon_sym_s_COLON] = ACTIONS(274),
    [sym_tempo] = ACTIONS(274),
    [sym_tune_title] = ACTIONS(274),
    [sym_unit_note_length] = ACTIONS(274),
    [anon_sym_U_COLON] = ACTIONS(274),
    [sym_voice] = ACTIONS(274),
    [anon_sym_w_COLON] = ACTIONS(274),
    [sym_words_postbody] = ACTIONS(274),
  },
  [34] = {
    [sym_chord_symbol] = STATE(35),
    [sym_nth_ending_barline] = STATE(51),
    [sym_generic_bar_line] = STATE(35),
    [sym_first_repeat_bar] = STATE(51),
    [sym_second_repeat_bar] = STATE(51),
    [sym_symbol] = STATE(35),
    [aux_sym_symbol_line_repeat1] = STATE(35),
    [sym_noCommentText] = ACTIONS(276),
    [sym_note_skip] = ACTIONS(278),
    [aux_sym_chord_symbol_token1] = ACTIONS(280),
    [sym_annotation] = ACTIONS(278),
    [sym_bar_line] = ACTIONS(282),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(284),
    [sym_thin_double_bar_line] = ACTIONS(284),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(284),
    [sym_start_of_repeated_section] = ACTIONS(286),
    [sym_end_of_repeated_section] = ACTIONS(288),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(286),
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
    [sym_chord_symbol] = STATE(35),
    [sym_nth_ending_barline] = STATE(51),
    [sym_generic_bar_line] = STATE(35),
    [sym_first_repeat_bar] = STATE(51),
    [sym_second_repeat_bar] = STATE(51),
    [sym_symbol] = STATE(35),
    [aux_sym_symbol_line_repeat1] = STATE(35),
    [sym_noCommentText] = ACTIONS(292),
    [sym_note_skip] = ACTIONS(294),
    [aux_sym_chord_symbol_token1] = ACTIONS(297),
    [sym_annotation] = ACTIONS(294),
    [sym_bar_line] = ACTIONS(300),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(303),
    [sym_thin_double_bar_line] = ACTIONS(303),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(303),
    [sym_start_of_repeated_section] = ACTIONS(306),
    [sym_end_of_repeated_section] = ACTIONS(309),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(306),
    [anon_sym_BANGtrill_BANG] = ACTIONS(312),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(312),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(312),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(312),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(312),
    [anon_sym_BANGmordent_BANG] = ACTIONS(312),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(312),
    [anon_sym_BANGroll_BANG] = ACTIONS(312),
    [anon_sym_BANGturn_BANG] = ACTIONS(312),
    [anon_sym_BANGturnx_BANG] = ACTIONS(312),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(312),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(312),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(312),
    [anon_sym_BANG_GT_BANG] = ACTIONS(312),
    [anon_sym_BANGaccent_BANG] = ACTIONS(312),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(312),
    [anon_sym_BANGfermata_BANG] = ACTIONS(312),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(312),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(312),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(312),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(312),
    [anon_sym_BANGplus_BANG] = ACTIONS(312),
    [anon_sym_BANGsnap_BANG] = ACTIONS(312),
    [anon_sym_BANGslide_BANG] = ACTIONS(312),
    [anon_sym_BANGwedge_BANG] = ACTIONS(312),
    [anon_sym_BANGupbow_BANG] = ACTIONS(312),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(312),
    [anon_sym_BANGopen_BANG] = ACTIONS(312),
    [anon_sym_BANGthumb_BANG] = ACTIONS(312),
    [anon_sym_BANGbreath_BANG] = ACTIONS(312),
    [anon_sym_BANGpppp_BANG] = ACTIONS(312),
    [anon_sym_BANGppp_BANG] = ACTIONS(312),
    [anon_sym_BANGpp_BANG] = ACTIONS(312),
    [anon_sym_BANGp_BANG] = ACTIONS(312),
    [anon_sym_BANGmp_BANG] = ACTIONS(312),
    [anon_sym_BANGmf_BANG] = ACTIONS(312),
    [anon_sym_BANGf_BANG] = ACTIONS(312),
    [anon_sym_BANGff_BANG] = ACTIONS(312),
    [anon_sym_BANGfff_BANG] = ACTIONS(312),
    [anon_sym_BANGffff_BANG] = ACTIONS(312),
    [anon_sym_BANGsfz_BANG] = ACTIONS(312),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(312),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(312),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(312),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(312),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(312),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(312),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(312),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(312),
    [anon_sym_BANGsegno_BANG] = ACTIONS(312),
    [anon_sym_BANGcoda_BANG] = ACTIONS(312),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(312),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(312),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(312),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(312),
    [anon_sym_BANGfine_BANG] = ACTIONS(312),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(312),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(312),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(312),
  },
  [36] = {
    [sym_chord_symbol] = STATE(34),
    [sym_nth_ending_barline] = STATE(51),
    [sym_generic_bar_line] = STATE(34),
    [sym_first_repeat_bar] = STATE(51),
    [sym_second_repeat_bar] = STATE(51),
    [sym_symbol] = STATE(34),
    [aux_sym_symbol_line_repeat1] = STATE(34),
    [sym_note_skip] = ACTIONS(315),
    [aux_sym_chord_symbol_token1] = ACTIONS(280),
    [sym_annotation] = ACTIONS(315),
    [sym_bar_line] = ACTIONS(282),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(317),
    [sym_thin_double_bar_line] = ACTIONS(317),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(317),
    [sym_start_of_repeated_section] = ACTIONS(319),
    [sym_end_of_repeated_section] = ACTIONS(321),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(319),
    [anon_sym_BANGtrill_BANG] = ACTIONS(323),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(323),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(323),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(323),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(323),
    [anon_sym_BANGmordent_BANG] = ACTIONS(323),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(323),
    [anon_sym_BANGroll_BANG] = ACTIONS(323),
    [anon_sym_BANGturn_BANG] = ACTIONS(323),
    [anon_sym_BANGturnx_BANG] = ACTIONS(323),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(323),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(323),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(323),
    [anon_sym_BANG_GT_BANG] = ACTIONS(323),
    [anon_sym_BANGaccent_BANG] = ACTIONS(323),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(323),
    [anon_sym_BANGfermata_BANG] = ACTIONS(323),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(323),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(323),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(323),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(323),
    [anon_sym_BANGplus_BANG] = ACTIONS(323),
    [anon_sym_BANGsnap_BANG] = ACTIONS(323),
    [anon_sym_BANGslide_BANG] = ACTIONS(323),
    [anon_sym_BANGwedge_BANG] = ACTIONS(323),
    [anon_sym_BANGupbow_BANG] = ACTIONS(323),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(323),
    [anon_sym_BANGopen_BANG] = ACTIONS(323),
    [anon_sym_BANGthumb_BANG] = ACTIONS(323),
    [anon_sym_BANGbreath_BANG] = ACTIONS(323),
    [anon_sym_BANGpppp_BANG] = ACTIONS(323),
    [anon_sym_BANGppp_BANG] = ACTIONS(323),
    [anon_sym_BANGpp_BANG] = ACTIONS(323),
    [anon_sym_BANGp_BANG] = ACTIONS(323),
    [anon_sym_BANGmp_BANG] = ACTIONS(323),
    [anon_sym_BANGmf_BANG] = ACTIONS(323),
    [anon_sym_BANGf_BANG] = ACTIONS(323),
    [anon_sym_BANGff_BANG] = ACTIONS(323),
    [anon_sym_BANGfff_BANG] = ACTIONS(323),
    [anon_sym_BANGffff_BANG] = ACTIONS(323),
    [anon_sym_BANGsfz_BANG] = ACTIONS(323),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(323),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(323),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(323),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(323),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(323),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(323),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(323),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(323),
    [anon_sym_BANGsegno_BANG] = ACTIONS(323),
    [anon_sym_BANGcoda_BANG] = ACTIONS(323),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(323),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(323),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(323),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(323),
    [anon_sym_BANGfine_BANG] = ACTIONS(323),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(323),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(323),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(323),
  },
  [37] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(40),
    [sym_noCommentText] = ACTIONS(210),
    [sym_note_skip] = ACTIONS(210),
    [anon_sym_DASH] = ACTIONS(325),
    [aux_sym_chord_symbol_token1] = ACTIONS(210),
    [sym_annotation] = ACTIONS(210),
    [anon_sym_COMMA] = ACTIONS(325),
    [sym_bar_line] = ACTIONS(210),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(210),
    [sym_thin_double_bar_line] = ACTIONS(210),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(210),
    [sym_start_of_repeated_section] = ACTIONS(210),
    [sym_end_of_repeated_section] = ACTIONS(210),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(210),
    [anon_sym_BANGtrill_BANG] = ACTIONS(210),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(210),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(210),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(210),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(210),
    [anon_sym_BANGmordent_BANG] = ACTIONS(210),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(210),
    [anon_sym_BANGroll_BANG] = ACTIONS(210),
    [anon_sym_BANGturn_BANG] = ACTIONS(210),
    [anon_sym_BANGturnx_BANG] = ACTIONS(210),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(210),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(210),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(210),
    [anon_sym_BANG_GT_BANG] = ACTIONS(210),
    [anon_sym_BANGaccent_BANG] = ACTIONS(210),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(210),
    [anon_sym_BANGfermata_BANG] = ACTIONS(210),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(210),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(210),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(210),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(210),
    [anon_sym_BANGplus_BANG] = ACTIONS(210),
    [anon_sym_BANGsnap_BANG] = ACTIONS(210),
    [anon_sym_BANGslide_BANG] = ACTIONS(210),
    [anon_sym_BANGwedge_BANG] = ACTIONS(210),
    [anon_sym_BANGupbow_BANG] = ACTIONS(210),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(210),
    [anon_sym_BANGopen_BANG] = ACTIONS(210),
    [anon_sym_BANGthumb_BANG] = ACTIONS(210),
    [anon_sym_BANGbreath_BANG] = ACTIONS(210),
    [anon_sym_BANGpppp_BANG] = ACTIONS(210),
    [anon_sym_BANGppp_BANG] = ACTIONS(210),
    [anon_sym_BANGpp_BANG] = ACTIONS(210),
    [anon_sym_BANGp_BANG] = ACTIONS(210),
    [anon_sym_BANGmp_BANG] = ACTIONS(210),
    [anon_sym_BANGmf_BANG] = ACTIONS(210),
    [anon_sym_BANGf_BANG] = ACTIONS(210),
    [anon_sym_BANGff_BANG] = ACTIONS(210),
    [anon_sym_BANGfff_BANG] = ACTIONS(210),
    [anon_sym_BANGffff_BANG] = ACTIONS(210),
    [anon_sym_BANGsfz_BANG] = ACTIONS(210),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(210),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(210),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(210),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(210),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(210),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(210),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(210),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(210),
    [anon_sym_BANGsegno_BANG] = ACTIONS(210),
    [anon_sym_BANGcoda_BANG] = ACTIONS(210),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(210),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(210),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(210),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(210),
    [anon_sym_BANGfine_BANG] = ACTIONS(210),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(210),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(210),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(210),
  },
  [38] = {
    [sym_noCommentText] = ACTIONS(193),
    [sym_note_skip] = ACTIONS(193),
    [aux_sym_beam_token1] = ACTIONS(327),
    [aux_sym_chord_symbol_token1] = ACTIONS(193),
    [sym_annotation] = ACTIONS(193),
    [sym_bar_line] = ACTIONS(193),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(193),
    [sym_thin_double_bar_line] = ACTIONS(193),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(193),
    [sym_start_of_repeated_section] = ACTIONS(193),
    [sym_end_of_repeated_section] = ACTIONS(193),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(193),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(329),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(331),
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
  },
  [39] = {
    [sym_noCommentText] = ACTIONS(193),
    [sym_note_skip] = ACTIONS(193),
    [aux_sym_beam_token1] = ACTIONS(327),
    [aux_sym_chord_symbol_token1] = ACTIONS(193),
    [sym_annotation] = ACTIONS(193),
    [sym_bar_line] = ACTIONS(193),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(193),
    [sym_thin_double_bar_line] = ACTIONS(193),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(193),
    [sym_start_of_repeated_section] = ACTIONS(193),
    [sym_end_of_repeated_section] = ACTIONS(193),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(193),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(333),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(335),
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
  },
  [40] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(41),
    [sym_noCommentText] = ACTIONS(187),
    [sym_note_skip] = ACTIONS(187),
    [anon_sym_DASH] = ACTIONS(325),
    [aux_sym_chord_symbol_token1] = ACTIONS(187),
    [sym_annotation] = ACTIONS(187),
    [anon_sym_COMMA] = ACTIONS(325),
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
  [41] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(41),
    [sym_noCommentText] = ACTIONS(203),
    [sym_note_skip] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(337),
    [aux_sym_chord_symbol_token1] = ACTIONS(203),
    [sym_annotation] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(337),
    [sym_bar_line] = ACTIONS(203),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(203),
    [sym_thin_double_bar_line] = ACTIONS(203),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(203),
    [sym_start_of_repeated_section] = ACTIONS(203),
    [sym_end_of_repeated_section] = ACTIONS(203),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(203),
    [anon_sym_BANGtrill_BANG] = ACTIONS(203),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(203),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(203),
    [anon_sym_BANGmordent_BANG] = ACTIONS(203),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(203),
    [anon_sym_BANGroll_BANG] = ACTIONS(203),
    [anon_sym_BANGturn_BANG] = ACTIONS(203),
    [anon_sym_BANGturnx_BANG] = ACTIONS(203),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(203),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(203),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(203),
    [anon_sym_BANG_GT_BANG] = ACTIONS(203),
    [anon_sym_BANGaccent_BANG] = ACTIONS(203),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(203),
    [anon_sym_BANGfermata_BANG] = ACTIONS(203),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(203),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(203),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(203),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(203),
    [anon_sym_BANGplus_BANG] = ACTIONS(203),
    [anon_sym_BANGsnap_BANG] = ACTIONS(203),
    [anon_sym_BANGslide_BANG] = ACTIONS(203),
    [anon_sym_BANGwedge_BANG] = ACTIONS(203),
    [anon_sym_BANGupbow_BANG] = ACTIONS(203),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(203),
    [anon_sym_BANGopen_BANG] = ACTIONS(203),
    [anon_sym_BANGthumb_BANG] = ACTIONS(203),
    [anon_sym_BANGbreath_BANG] = ACTIONS(203),
    [anon_sym_BANGpppp_BANG] = ACTIONS(203),
    [anon_sym_BANGppp_BANG] = ACTIONS(203),
    [anon_sym_BANGpp_BANG] = ACTIONS(203),
    [anon_sym_BANGp_BANG] = ACTIONS(203),
    [anon_sym_BANGmp_BANG] = ACTIONS(203),
    [anon_sym_BANGmf_BANG] = ACTIONS(203),
    [anon_sym_BANGf_BANG] = ACTIONS(203),
    [anon_sym_BANGff_BANG] = ACTIONS(203),
    [anon_sym_BANGfff_BANG] = ACTIONS(203),
    [anon_sym_BANGffff_BANG] = ACTIONS(203),
    [anon_sym_BANGsfz_BANG] = ACTIONS(203),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGsegno_BANG] = ACTIONS(203),
    [anon_sym_BANGcoda_BANG] = ACTIONS(203),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(203),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(203),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(203),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(203),
    [anon_sym_BANGfine_BANG] = ACTIONS(203),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(203),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(203),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(203),
  },
  [42] = {
    [sym_noCommentText] = ACTIONS(203),
    [sym_note_skip] = ACTIONS(203),
    [anon_sym_DASH] = ACTIONS(203),
    [aux_sym_chord_symbol_token1] = ACTIONS(203),
    [sym_annotation] = ACTIONS(203),
    [anon_sym_COMMA] = ACTIONS(203),
    [sym_bar_line] = ACTIONS(203),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(203),
    [sym_thin_double_bar_line] = ACTIONS(203),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(203),
    [sym_start_of_repeated_section] = ACTIONS(203),
    [sym_end_of_repeated_section] = ACTIONS(203),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(203),
    [anon_sym_BANGtrill_BANG] = ACTIONS(203),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(203),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(203),
    [anon_sym_BANGmordent_BANG] = ACTIONS(203),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(203),
    [anon_sym_BANGroll_BANG] = ACTIONS(203),
    [anon_sym_BANGturn_BANG] = ACTIONS(203),
    [anon_sym_BANGturnx_BANG] = ACTIONS(203),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(203),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(203),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(203),
    [anon_sym_BANG_GT_BANG] = ACTIONS(203),
    [anon_sym_BANGaccent_BANG] = ACTIONS(203),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(203),
    [anon_sym_BANGfermata_BANG] = ACTIONS(203),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(203),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(203),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(203),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(203),
    [anon_sym_BANGplus_BANG] = ACTIONS(203),
    [anon_sym_BANGsnap_BANG] = ACTIONS(203),
    [anon_sym_BANGslide_BANG] = ACTIONS(203),
    [anon_sym_BANGwedge_BANG] = ACTIONS(203),
    [anon_sym_BANGupbow_BANG] = ACTIONS(203),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(203),
    [anon_sym_BANGopen_BANG] = ACTIONS(203),
    [anon_sym_BANGthumb_BANG] = ACTIONS(203),
    [anon_sym_BANGbreath_BANG] = ACTIONS(203),
    [anon_sym_BANGpppp_BANG] = ACTIONS(203),
    [anon_sym_BANGppp_BANG] = ACTIONS(203),
    [anon_sym_BANGpp_BANG] = ACTIONS(203),
    [anon_sym_BANGp_BANG] = ACTIONS(203),
    [anon_sym_BANGmp_BANG] = ACTIONS(203),
    [anon_sym_BANGmf_BANG] = ACTIONS(203),
    [anon_sym_BANGf_BANG] = ACTIONS(203),
    [anon_sym_BANGff_BANG] = ACTIONS(203),
    [anon_sym_BANGfff_BANG] = ACTIONS(203),
    [anon_sym_BANGffff_BANG] = ACTIONS(203),
    [anon_sym_BANGsfz_BANG] = ACTIONS(203),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(203),
    [anon_sym_BANGsegno_BANG] = ACTIONS(203),
    [anon_sym_BANGcoda_BANG] = ACTIONS(203),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(203),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(203),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(203),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(203),
    [anon_sym_BANGfine_BANG] = ACTIONS(203),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(203),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(203),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(203),
  },
  [43] = {
    [sym_noCommentText] = ACTIONS(193),
    [sym_note_skip] = ACTIONS(193),
    [aux_sym_beam_token1] = ACTIONS(327),
    [aux_sym_chord_symbol_token1] = ACTIONS(193),
    [sym_annotation] = ACTIONS(193),
    [sym_bar_line] = ACTIONS(193),
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
  },
  [44] = {
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
  [45] = {
    [sym_noCommentText] = ACTIONS(230),
    [sym_note_skip] = ACTIONS(230),
    [aux_sym_chord_symbol_token1] = ACTIONS(230),
    [sym_annotation] = ACTIONS(230),
    [sym_bar_line] = ACTIONS(230),
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
  },
  [46] = {
    [sym_noCommentText] = ACTIONS(226),
    [sym_note_skip] = ACTIONS(226),
    [aux_sym_chord_symbol_token1] = ACTIONS(226),
    [sym_annotation] = ACTIONS(226),
    [sym_bar_line] = ACTIONS(226),
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
  },
  [47] = {
    [sym_noCommentText] = ACTIONS(342),
    [sym_note_skip] = ACTIONS(342),
    [aux_sym_chord_symbol_token1] = ACTIONS(342),
    [sym_annotation] = ACTIONS(342),
    [sym_bar_line] = ACTIONS(342),
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
  },
  [48] = {
    [sym_noCommentText] = ACTIONS(344),
    [sym_note_skip] = ACTIONS(344),
    [aux_sym_chord_symbol_token1] = ACTIONS(344),
    [sym_annotation] = ACTIONS(344),
    [sym_bar_line] = ACTIONS(344),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(344),
    [sym_thin_double_bar_line] = ACTIONS(344),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(344),
    [sym_start_of_repeated_section] = ACTIONS(344),
    [sym_end_of_repeated_section] = ACTIONS(344),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(344),
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
  },
  [49] = {
    [sym_noCommentText] = ACTIONS(222),
    [sym_note_skip] = ACTIONS(222),
    [aux_sym_chord_symbol_token1] = ACTIONS(222),
    [sym_annotation] = ACTIONS(222),
    [sym_bar_line] = ACTIONS(222),
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
  },
  [50] = {
    [sym_noCommentText] = ACTIONS(238),
    [sym_note_skip] = ACTIONS(238),
    [aux_sym_chord_symbol_token1] = ACTIONS(238),
    [sym_annotation] = ACTIONS(238),
    [sym_bar_line] = ACTIONS(238),
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
  },
  [51] = {
    [sym_noCommentText] = ACTIONS(193),
    [sym_note_skip] = ACTIONS(193),
    [aux_sym_chord_symbol_token1] = ACTIONS(193),
    [sym_annotation] = ACTIONS(193),
    [sym_bar_line] = ACTIONS(193),
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
  },
  [52] = {
    [sym_noCommentText] = ACTIONS(346),
    [sym_note_skip] = ACTIONS(346),
    [aux_sym_chord_symbol_token1] = ACTIONS(346),
    [sym_annotation] = ACTIONS(346),
    [sym_bar_line] = ACTIONS(346),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(346),
    [sym_thin_double_bar_line] = ACTIONS(346),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(346),
    [sym_start_of_repeated_section] = ACTIONS(346),
    [sym_end_of_repeated_section] = ACTIONS(346),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(346),
    [anon_sym_BANGtrill_BANG] = ACTIONS(346),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(346),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(346),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(346),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(346),
    [anon_sym_BANGmordent_BANG] = ACTIONS(346),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(346),
    [anon_sym_BANGroll_BANG] = ACTIONS(346),
    [anon_sym_BANGturn_BANG] = ACTIONS(346),
    [anon_sym_BANGturnx_BANG] = ACTIONS(346),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(346),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(346),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(346),
    [anon_sym_BANG_GT_BANG] = ACTIONS(346),
    [anon_sym_BANGaccent_BANG] = ACTIONS(346),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(346),
    [anon_sym_BANGfermata_BANG] = ACTIONS(346),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(346),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(346),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(346),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(346),
    [anon_sym_BANGplus_BANG] = ACTIONS(346),
    [anon_sym_BANGsnap_BANG] = ACTIONS(346),
    [anon_sym_BANGslide_BANG] = ACTIONS(346),
    [anon_sym_BANGwedge_BANG] = ACTIONS(346),
    [anon_sym_BANGupbow_BANG] = ACTIONS(346),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(346),
    [anon_sym_BANGopen_BANG] = ACTIONS(346),
    [anon_sym_BANGthumb_BANG] = ACTIONS(346),
    [anon_sym_BANGbreath_BANG] = ACTIONS(346),
    [anon_sym_BANGpppp_BANG] = ACTIONS(346),
    [anon_sym_BANGppp_BANG] = ACTIONS(346),
    [anon_sym_BANGpp_BANG] = ACTIONS(346),
    [anon_sym_BANGp_BANG] = ACTIONS(346),
    [anon_sym_BANGmp_BANG] = ACTIONS(346),
    [anon_sym_BANGmf_BANG] = ACTIONS(346),
    [anon_sym_BANGf_BANG] = ACTIONS(346),
    [anon_sym_BANGff_BANG] = ACTIONS(346),
    [anon_sym_BANGfff_BANG] = ACTIONS(346),
    [anon_sym_BANGffff_BANG] = ACTIONS(346),
    [anon_sym_BANGsfz_BANG] = ACTIONS(346),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(346),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(346),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(346),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(346),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(346),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(346),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(346),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(346),
    [anon_sym_BANGsegno_BANG] = ACTIONS(346),
    [anon_sym_BANGcoda_BANG] = ACTIONS(346),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(346),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(346),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(346),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(346),
    [anon_sym_BANGfine_BANG] = ACTIONS(346),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(346),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(346),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(346),
  },
  [53] = {
    [sym_noCommentText] = ACTIONS(260),
    [sym_note_skip] = ACTIONS(260),
    [aux_sym_chord_symbol_token1] = ACTIONS(260),
    [sym_annotation] = ACTIONS(260),
    [sym_bar_line] = ACTIONS(260),
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
  },
  [54] = {
    [sym_noCommentText] = ACTIONS(218),
    [sym_note_skip] = ACTIONS(218),
    [aux_sym_chord_symbol_token1] = ACTIONS(218),
    [sym_annotation] = ACTIONS(218),
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
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(255), 1,
      sym_symbol,
    ACTIONS(348), 59,
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
    ACTIONS(350), 1,
      anon_sym_X_COLON,
    STATE(57), 1,
      aux_sym_file_header_repeat2,
    STATE(229), 2,
      sym_stylesheet_directives,
      sym_file_header_info_line,
    STATE(275), 2,
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
    ACTIONS(352), 1,
      sym_COMMENT,
    ACTIONS(355), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(358), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(364), 1,
      anon_sym_X_COLON,
    ACTIONS(366), 1,
      anon_sym_U_COLON,
    STATE(57), 1,
      aux_sym_file_header_repeat2,
    STATE(229), 2,
      sym_stylesheet_directives,
      sym_file_header_info_line,
    STATE(275), 2,
      sym_abc_version,
      sym_user_defined,
    ACTIONS(361), 17,
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
    ACTIONS(369), 1,
      sym__NL,
    STATE(58), 1,
      aux_sym_file_header_repeat1,
    ACTIONS(372), 2,
      sym_COMMENT,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(374), 21,
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
  [191] = 4,
    ACTIONS(376), 1,
      sym__NL,
    STATE(58), 1,
      aux_sym_file_header_repeat1,
    ACTIONS(378), 2,
      sym_COMMENT,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(364), 20,
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
  [224] = 16,
    ACTIONS(380), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(383), 1,
      aux_sym_beam_token1,
    ACTIONS(385), 1,
      anon_sym_LBRACK,
    ACTIONS(388), 1,
      sym_alteration,
    ACTIONS(391), 1,
      sym_note_letter,
    ACTIONS(394), 1,
      sym_rest,
    ACTIONS(397), 1,
      aux_sym_grace_note_token1,
    ACTIONS(400), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(403), 1,
      sym_tuplet_marker,
    ACTIONS(406), 1,
      sym_decoration_shorthand,
    STATE(94), 1,
      sym__pitch,
    STATE(120), 1,
      sym_note,
    STATE(156), 1,
      sym_chord_symbol,
    STATE(183), 1,
      sym_decoration,
    STATE(76), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(60), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [277] = 16,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(409), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(411), 1,
      aux_sym_beam_token1,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(421), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(423), 1,
      sym_tuplet_marker,
    STATE(94), 1,
      sym__pitch,
    STATE(120), 1,
      sym_note,
    STATE(156), 1,
      sym_chord_symbol,
    STATE(183), 1,
      sym_decoration,
    STATE(76), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(60), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [330] = 16,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(409), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(421), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(423), 1,
      sym_tuplet_marker,
    ACTIONS(425), 1,
      aux_sym__MUSIC_CODE_token1,
    STATE(94), 1,
      sym__pitch,
    STATE(120), 1,
      sym_note,
    STATE(156), 1,
      sym_chord_symbol,
    STATE(183), 1,
      sym_decoration,
    STATE(76), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(61), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [383] = 14,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(413), 1,
      anon_sym_LBRACK,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(421), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(423), 1,
      sym_tuplet_marker,
    STATE(94), 1,
      sym__pitch,
    STATE(120), 1,
      sym_note,
    STATE(156), 1,
      sym_chord_symbol,
    STATE(183), 1,
      sym_decoration,
    STATE(76), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(139), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [429] = 14,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(114), 1,
      sym_tuplet_marker,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(421), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(427), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(115), 1,
      sym_note,
    STATE(151), 1,
      sym_chord_symbol,
    STATE(182), 1,
      sym_decoration,
    STATE(77), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(269), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [475] = 3,
    ACTIONS(431), 1,
      sym_octave,
    STATE(65), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(429), 14,
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
  [498] = 3,
    ACTIONS(436), 1,
      sym_octave,
    STATE(65), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(434), 14,
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
  [521] = 3,
    ACTIONS(440), 1,
      sym_octave,
    STATE(69), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(438), 14,
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
  [544] = 3,
    ACTIONS(444), 1,
      sym_octave,
    STATE(66), 1,
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
  [567] = 3,
    ACTIONS(436), 1,
      sym_octave,
    STATE(65), 1,
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
  [590] = 7,
    ACTIONS(451), 1,
      anon_sym_DASH,
    ACTIONS(454), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(457), 1,
      aux_sym_verse_number_token1,
    ACTIONS(446), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(70), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(158), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(448), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [619] = 7,
    ACTIONS(464), 1,
      anon_sym_DASH,
    ACTIONS(466), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(468), 1,
      aux_sym_verse_number_token1,
    ACTIONS(460), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(70), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(158), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(462), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [648] = 4,
    ACTIONS(470), 1,
      aux_sym_beam_token1,
    ACTIONS(472), 1,
      sym_octave,
    STATE(75), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(438), 11,
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
  [671] = 4,
    ACTIONS(474), 1,
      aux_sym_beam_token1,
    ACTIONS(476), 1,
      sym_octave,
    STATE(73), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(429), 11,
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
  [694] = 4,
    ACTIONS(479), 1,
      aux_sym_beam_token1,
    ACTIONS(481), 1,
      sym_octave,
    STATE(73), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(434), 11,
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
  [717] = 4,
    ACTIONS(481), 1,
      sym_octave,
    ACTIONS(483), 1,
      aux_sym_beam_token1,
    STATE(73), 1,
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
  [740] = 13,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(421), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_tuplet_marker,
    STATE(94), 1,
      sym__pitch,
    STATE(107), 1,
      sym_note,
    STATE(155), 1,
      sym_chord_symbol,
    STATE(180), 1,
      sym_decoration,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [781] = 13,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(421), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(489), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_tuplet_marker,
    STATE(87), 1,
      sym__pitch,
    STATE(116), 1,
      sym_note,
    STATE(157), 1,
      sym_chord_symbol,
    STATE(173), 1,
      sym_decoration,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [822] = 4,
    ACTIONS(483), 1,
      aux_sym_beam_token1,
    ACTIONS(493), 1,
      sym_octave,
    STATE(74), 1,
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
  [845] = 11,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(495), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [881] = 11,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(497), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [917] = 8,
    ACTIONS(499), 1,
      sym__NL,
    ACTIONS(504), 1,
      anon_sym_DASH,
    ACTIONS(507), 1,
      sym_UNDERSCORE,
    ACTIONS(510), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(513), 1,
      aux_sym_verse_number_token1,
    STATE(81), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(501), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(164), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [947] = 11,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(516), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [983] = 11,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(518), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1019] = 11,
    ACTIONS(520), 1,
      anon_sym_RBRACK,
    ACTIONS(522), 1,
      sym_alteration,
    ACTIONS(525), 1,
      sym_note_letter,
    ACTIONS(528), 1,
      sym_rest,
    ACTIONS(531), 1,
      aux_sym_grace_note_token1,
    ACTIONS(534), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1055] = 11,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(537), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1091] = 11,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(539), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1127] = 2,
    ACTIONS(543), 1,
      sym_rhythm,
    ACTIONS(541), 12,
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
  [1145] = 11,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(545), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1181] = 11,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(547), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1217] = 11,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(549), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1253] = 11,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(551), 1,
      anon_sym_RBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(84), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1289] = 8,
    ACTIONS(553), 1,
      sym__NL,
    ACTIONS(557), 1,
      anon_sym_DASH,
    ACTIONS(559), 1,
      sym_UNDERSCORE,
    ACTIONS(561), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(563), 1,
      aux_sym_verse_number_token1,
    STATE(81), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(555), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(164), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1319] = 7,
    ACTIONS(462), 1,
      sym_UNDERSCORE,
    ACTIONS(466), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(468), 1,
      aux_sym_verse_number_token1,
    ACTIONS(567), 1,
      anon_sym_DASH,
    STATE(71), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(565), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(158), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1346] = 3,
    ACTIONS(569), 1,
      aux_sym_beam_token1,
    ACTIONS(571), 1,
      sym_rhythm,
    ACTIONS(541), 10,
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
  [1365] = 1,
    ACTIONS(573), 12,
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
  [1380] = 10,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(83), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1413] = 10,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(82), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1446] = 10,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(88), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1479] = 10,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(90), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1512] = 10,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(79), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1545] = 10,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(80), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1578] = 10,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(89), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1611] = 10,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(86), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1644] = 10,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(91), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1677] = 7,
    ACTIONS(557), 1,
      anon_sym_DASH,
    ACTIONS(559), 1,
      sym_UNDERSCORE,
    ACTIONS(561), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(563), 1,
      aux_sym_verse_number_token1,
    STATE(92), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(555), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(164), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1704] = 10,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(85), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(137), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1737] = 3,
    ACTIONS(577), 1,
      aux_sym_beam_token1,
    ACTIONS(579), 1,
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
  [1755] = 2,
    ACTIONS(583), 1,
      sym_rhythm,
    ACTIONS(581), 10,
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
  [1771] = 3,
    ACTIONS(587), 1,
      aux_sym_beam_token1,
    ACTIONS(589), 1,
      aux_sym_note_construct_token1,
    ACTIONS(585), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1789] = 2,
    ACTIONS(593), 1,
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
  [1805] = 3,
    ACTIONS(597), 1,
      aux_sym_beam_token1,
    ACTIONS(599), 1,
      sym_rhythm,
    ACTIONS(595), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1823] = 2,
    ACTIONS(603), 1,
      sym_rhythm,
    ACTIONS(601), 10,
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
  [1839] = 3,
    ACTIONS(605), 1,
      aux_sym_beam_token1,
    ACTIONS(607), 1,
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
  [1857] = 2,
    ACTIONS(611), 1,
      sym_rhythm,
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
  [1873] = 2,
    ACTIONS(615), 1,
      aux_sym_note_construct_token1,
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
  [1889] = 2,
    ACTIONS(617), 1,
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
  [1905] = 2,
    ACTIONS(619), 1,
      sym_rhythm,
    ACTIONS(595), 10,
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
  [1921] = 2,
    ACTIONS(621), 1,
      aux_sym_beam_token1,
    ACTIONS(573), 10,
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
  [1937] = 2,
    ACTIONS(625), 1,
      aux_sym_note_construct_token1,
    ACTIONS(623), 10,
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
  [1953] = 3,
    ACTIONS(627), 1,
      aux_sym_beam_token1,
    ACTIONS(629), 1,
      aux_sym_note_construct_token1,
    ACTIONS(613), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1971] = 3,
    ACTIONS(631), 1,
      aux_sym_beam_token1,
    ACTIONS(633), 1,
      sym_rhythm,
    ACTIONS(601), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1989] = 3,
    ACTIONS(635), 1,
      aux_sym_beam_token1,
    ACTIONS(637), 1,
      sym_rhythm,
    ACTIONS(581), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2007] = 3,
    ACTIONS(639), 1,
      aux_sym_beam_token1,
    ACTIONS(641), 1,
      sym_rhythm,
    ACTIONS(609), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2025] = 3,
    ACTIONS(643), 1,
      aux_sym_beam_token1,
    ACTIONS(645), 1,
      aux_sym_note_construct_token1,
    ACTIONS(623), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2043] = 2,
    ACTIONS(647), 1,
      aux_sym_note_construct_token1,
    ACTIONS(585), 10,
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
  [2059] = 2,
    ACTIONS(651), 1,
      sym_rhythm,
    ACTIONS(649), 10,
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
  [2075] = 3,
    ACTIONS(653), 1,
      aux_sym_beam_token1,
    ACTIONS(655), 1,
      sym_rhythm,
    ACTIONS(649), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2093] = 1,
    ACTIONS(657), 10,
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
  [2106] = 1,
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
  [2119] = 2,
    ACTIONS(653), 1,
      aux_sym_beam_token1,
    ACTIONS(649), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2134] = 1,
    ACTIONS(581), 10,
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
  [2147] = 1,
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
  [2160] = 2,
    ACTIONS(587), 1,
      aux_sym_beam_token1,
    ACTIONS(585), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2175] = 2,
    ACTIONS(643), 1,
      aux_sym_beam_token1,
    ACTIONS(623), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2190] = 2,
    ACTIONS(605), 1,
      aux_sym_beam_token1,
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
  [2205] = 1,
    ACTIONS(585), 10,
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
  [2218] = 9,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(110), 1,
      aux_sym_grace_note_token1,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    STATE(87), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2247] = 2,
    ACTIONS(639), 1,
      aux_sym_beam_token1,
    ACTIONS(609), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2262] = 2,
    ACTIONS(383), 1,
      aux_sym_beam_token1,
    ACTIONS(661), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2277] = 1,
    ACTIONS(649), 10,
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
  [2290] = 2,
    ACTIONS(635), 1,
      aux_sym_beam_token1,
    ACTIONS(581), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2305] = 1,
    ACTIONS(623), 10,
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
  [2318] = 2,
    ACTIONS(631), 1,
      aux_sym_beam_token1,
    ACTIONS(601), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2333] = 1,
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
  [2346] = 1,
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
  [2359] = 2,
    ACTIONS(577), 1,
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
  [2374] = 3,
    ACTIONS(665), 1,
      aux_sym_grace_note_token1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(663), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2391] = 1,
    ACTIONS(601), 10,
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
  [2404] = 2,
    ACTIONS(668), 1,
      aux_sym_beam_token1,
    ACTIONS(657), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2419] = 2,
    ACTIONS(670), 1,
      aux_sym_beam_token1,
    ACTIONS(659), 9,
      sym_BEAM_SEPARATOR,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2434] = 9,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(489), 1,
      anon_sym_LBRACK,
    ACTIONS(491), 1,
      sym_tuplet_marker,
    STATE(87), 1,
      sym__pitch,
    STATE(116), 1,
      sym_note,
    STATE(173), 1,
      sym_decoration,
  [2462] = 1,
    ACTIONS(672), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2474] = 1,
    ACTIONS(674), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2486] = 1,
    ACTIONS(676), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2498] = 9,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(678), 1,
      anon_sym_LBRACK,
    ACTIONS(680), 1,
      sym_tuplet_marker,
    STATE(94), 1,
      sym__pitch,
    STATE(109), 1,
      sym_note,
    STATE(186), 1,
      sym_decoration,
  [2526] = 9,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    ACTIONS(487), 1,
      sym_tuplet_marker,
    STATE(94), 1,
      sym__pitch,
    STATE(107), 1,
      sym_note,
    STATE(180), 1,
      sym_decoration,
  [2554] = 9,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(682), 1,
      anon_sym_LBRACK,
    ACTIONS(684), 1,
      sym_tuplet_marker,
    STATE(87), 1,
      sym__pitch,
    STATE(125), 1,
      sym_note,
    STATE(176), 1,
      sym_decoration,
  [2582] = 1,
    ACTIONS(686), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [2594] = 2,
    ACTIONS(674), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(688), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2607] = 8,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(678), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym__pitch,
    STATE(109), 1,
      sym_note,
    STATE(186), 1,
      sym_decoration,
  [2632] = 8,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(489), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(116), 1,
      sym_note,
    STATE(173), 1,
      sym_decoration,
  [2657] = 8,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(690), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym__pitch,
    STATE(113), 1,
      sym_note,
    STATE(174), 1,
      sym_decoration,
  [2682] = 8,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym__pitch,
    STATE(107), 1,
      sym_note,
    STATE(180), 1,
      sym_decoration,
  [2707] = 2,
    ACTIONS(686), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(692), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2720] = 2,
    ACTIONS(676), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(694), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2733] = 2,
    ACTIONS(672), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(696), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2746] = 1,
    ACTIONS(698), 8,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2757] = 8,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(682), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(125), 1,
      sym_note,
    STATE(176), 1,
      sym_decoration,
  [2782] = 8,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(183), 1,
      sym_decoration_shorthand,
    ACTIONS(700), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(110), 1,
      sym_note,
    STATE(189), 1,
      sym_decoration,
  [2807] = 5,
    ACTIONS(185), 1,
      sym_words_postbody,
    ACTIONS(702), 1,
      sym__NL,
    STATE(172), 1,
      aux_sym_file_header_repeat1,
    STATE(242), 1,
      sym_lyric_section,
    STATE(196), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [2824] = 1,
    ACTIONS(704), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2833] = 5,
    ACTIONS(185), 1,
      sym_words_postbody,
    ACTIONS(706), 1,
      sym__NL,
    STATE(58), 1,
      aux_sym_file_header_repeat1,
    STATE(240), 1,
      sym_lyric_section,
    STATE(196), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [2850] = 6,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(682), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(125), 1,
      sym_note,
  [2869] = 6,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(708), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym__pitch,
    STATE(124), 1,
      sym_note,
  [2888] = 1,
    ACTIONS(710), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2897] = 6,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(700), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(110), 1,
      sym_note,
  [2916] = 1,
    ACTIONS(712), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2925] = 5,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    ACTIONS(714), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(185), 2,
      sym_tune,
      aux_sym_file_structure_repeat1,
  [2942] = 1,
    ACTIONS(716), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2951] = 6,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(678), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym__pitch,
    STATE(109), 1,
      sym_note,
  [2970] = 5,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    ACTIONS(718), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(185), 2,
      sym_tune,
      aux_sym_file_structure_repeat1,
  [2987] = 6,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(489), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(116), 1,
      sym_note,
  [3006] = 6,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(485), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym__pitch,
    STATE(107), 1,
      sym_note,
  [3025] = 1,
    ACTIONS(720), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3034] = 5,
    ACTIONS(722), 1,
      ts_builtin_sym_end,
    ACTIONS(724), 1,
      anon_sym_X_COLON,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(185), 2,
      sym_tune,
      aux_sym_file_structure_repeat1,
  [3051] = 6,
    ACTIONS(415), 1,
      sym_alteration,
    ACTIONS(417), 1,
      sym_note_letter,
    ACTIONS(419), 1,
      sym_rest,
    ACTIONS(690), 1,
      anon_sym_LBRACK,
    STATE(94), 1,
      sym__pitch,
    STATE(113), 1,
      sym_note,
  [3070] = 1,
    ACTIONS(727), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3079] = 1,
    ACTIONS(729), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [3088] = 6,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    ACTIONS(731), 1,
      anon_sym_LBRACK,
    STATE(87), 1,
      sym__pitch,
    STATE(119), 1,
      sym_note,
  [3107] = 5,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    STATE(87), 1,
      sym__pitch,
    STATE(175), 1,
      sym_note,
  [3123] = 4,
    ACTIONS(733), 1,
      sym_alteration,
    ACTIONS(736), 1,
      sym_note_letter,
    ACTIONS(739), 1,
      aux_sym_grace_note_token2,
    STATE(191), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [3137] = 4,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(741), 1,
      aux_sym_grace_note_token2,
    STATE(191), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [3151] = 5,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    ACTIONS(106), 1,
      sym_rest,
    STATE(87), 1,
      sym__pitch,
    STATE(171), 1,
      sym_note,
  [3167] = 4,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(181), 2,
      sym_tune,
      aux_sym_file_structure_repeat1,
  [3181] = 3,
    ACTIONS(743), 1,
      sym__NL,
    ACTIONS(745), 1,
      sym_words_postbody,
    STATE(195), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [3192] = 3,
    ACTIONS(185), 1,
      sym_words_postbody,
    ACTIONS(748), 1,
      sym__NL,
    STATE(195), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [3203] = 2,
    ACTIONS(750), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
    ACTIONS(752), 2,
      sym__NL,
      sym_words_postbody,
  [3212] = 2,
    ACTIONS(754), 1,
      sym_alteration,
    ACTIONS(756), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [3221] = 1,
    ACTIONS(758), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [3228] = 2,
    ACTIONS(752), 2,
      sym__NL,
      sym_words_postbody,
    ACTIONS(760), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [3237] = 3,
    ACTIONS(102), 1,
      sym_alteration,
    ACTIONS(104), 1,
      sym_note_letter,
    STATE(192), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [3248] = 3,
    ACTIONS(762), 1,
      sym_noCommentText,
    ACTIONS(764), 1,
      anon_sym_DOT,
    STATE(209), 1,
      aux_sym_abc_version_repeat1,
  [3258] = 3,
    ACTIONS(764), 1,
      anon_sym_DOT,
    ACTIONS(766), 1,
      sym_noCommentText,
    STATE(202), 1,
      aux_sym_abc_version_repeat1,
  [3268] = 1,
    ACTIONS(768), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [3274] = 3,
    ACTIONS(770), 1,
      sym_noCommentText,
    ACTIONS(772), 1,
      aux_sym_words_line_token1,
    STATE(210), 1,
      aux_sym_words_line_repeat2,
  [3284] = 3,
    ACTIONS(774), 1,
      sym_noCommentText,
    ACTIONS(776), 1,
      aux_sym_words_line_token1,
    STATE(206), 1,
      aux_sym_words_line_repeat2,
  [3294] = 3,
    ACTIONS(779), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(781), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(783), 1,
      sym_chord_type,
  [3304] = 3,
    ACTIONS(785), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(787), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(789), 1,
      sym_chord_type,
  [3314] = 3,
    ACTIONS(791), 1,
      sym_noCommentText,
    ACTIONS(793), 1,
      anon_sym_DOT,
    STATE(209), 1,
      aux_sym_abc_version_repeat1,
  [3324] = 3,
    ACTIONS(772), 1,
      aux_sym_words_line_token1,
    ACTIONS(796), 1,
      sym_noCommentText,
    STATE(206), 1,
      aux_sym_words_line_repeat2,
  [3334] = 2,
    ACTIONS(798), 1,
      sym_note_letter,
    STATE(234), 1,
      sym_chord_symbol_note,
  [3341] = 1,
    ACTIONS(800), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [3346] = 2,
    ACTIONS(756), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(802), 1,
      sym_alteration,
  [3353] = 2,
    ACTIONS(798), 1,
      sym_note_letter,
    STATE(265), 1,
      sym_chord_symbol_note,
  [3360] = 2,
    ACTIONS(798), 1,
      sym_note_letter,
    STATE(263), 1,
      sym_chord_symbol_note,
  [3367] = 2,
    ACTIONS(804), 1,
      sym__NL,
    ACTIONS(806), 1,
      sym_COMMENT,
  [3374] = 2,
    ACTIONS(808), 1,
      sym_note_letter,
    STATE(208), 1,
      sym_chord_symbol_note,
  [3381] = 1,
    ACTIONS(810), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [3386] = 1,
    ACTIONS(791), 2,
      sym_noCommentText,
      anon_sym_DOT,
  [3391] = 2,
    ACTIONS(812), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(814), 1,
      aux_sym_chord_symbol_token2,
  [3398] = 2,
    ACTIONS(816), 1,
      sym__NL,
    ACTIONS(818), 1,
      sym_COMMENT,
  [3405] = 2,
    ACTIONS(820), 1,
      anon_sym_LBRACK,
    STATE(29), 1,
      sym_nth_ending_number,
  [3412] = 2,
    ACTIONS(822), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_nth_ending_number,
  [3419] = 2,
    ACTIONS(798), 1,
      sym_note_letter,
    STATE(238), 1,
      sym_chord_symbol_note,
  [3426] = 2,
    ACTIONS(824), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(826), 1,
      aux_sym_chord_symbol_token2,
  [3433] = 2,
    ACTIONS(808), 1,
      sym_note_letter,
    STATE(207), 1,
      sym_chord_symbol_note,
  [3440] = 1,
    ACTIONS(828), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [3445] = 1,
    ACTIONS(830), 2,
      sym__NL,
      sym_words_postbody,
  [3450] = 2,
    ACTIONS(832), 1,
      sym__NL,
    STATE(59), 1,
      aux_sym_file_header_repeat1,
  [3457] = 1,
    ACTIONS(750), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [3462] = 2,
    ACTIONS(834), 1,
      sym__NL,
    ACTIONS(836), 1,
      sym_COMMENT,
  [3469] = 1,
    ACTIONS(760), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [3474] = 1,
    ACTIONS(838), 1,
      anon_sym_LBRACK,
  [3478] = 1,
    ACTIONS(840), 1,
      aux_sym_chord_symbol_token1,
  [3482] = 1,
    ACTIONS(842), 1,
      aux_sym_multimeasure_rest_token1,
  [3486] = 1,
    ACTIONS(844), 1,
      sym_note_letter,
  [3490] = 1,
    ACTIONS(846), 1,
      sym_noCommentText,
  [3494] = 1,
    ACTIONS(848), 1,
      aux_sym_chord_symbol_token1,
  [3498] = 1,
    ACTIONS(850), 1,
      sym__NL,
  [3502] = 1,
    ACTIONS(852), 1,
      sym__NL,
  [3506] = 1,
    ACTIONS(854), 1,
      anon_sym_EQ,
  [3510] = 1,
    ACTIONS(856), 1,
      sym__NL,
  [3514] = 1,
    ACTIONS(858), 1,
      aux_sym_lyric_line_token1,
  [3518] = 1,
    ACTIONS(860), 1,
      anon_sym_DOT,
  [3522] = 1,
    ACTIONS(862), 1,
      sym__NL,
  [3526] = 1,
    ACTIONS(864), 1,
      aux_sym_first_repeat_bar_token2,
  [3530] = 1,
    ACTIONS(866), 1,
      aux_sym_first_repeat_bar_token2,
  [3534] = 1,
    ACTIONS(868), 1,
      aux_sym_nth_ending_number_token1,
  [3538] = 1,
    ACTIONS(870), 1,
      sym_noCommentText,
  [3542] = 1,
    ACTIONS(872), 1,
      anon_sym_LBRACK,
  [3546] = 1,
    ACTIONS(240), 1,
      sym_noCommentText,
  [3550] = 1,
    ACTIONS(874), 1,
      sym_noCommentText,
  [3554] = 1,
    ACTIONS(876), 1,
      sym_note_letter,
  [3558] = 1,
    ACTIONS(266), 1,
      sym__NL,
  [3562] = 1,
    ACTIONS(878), 1,
      sym_noCommentText,
  [3566] = 1,
    ACTIONS(880), 1,
      sym__NL,
  [3570] = 1,
    ACTIONS(882), 1,
      aux_sym_nth_ending_number_token1,
  [3574] = 1,
    ACTIONS(884), 1,
      sym__NL,
  [3578] = 1,
    ACTIONS(886), 1,
      aux_sym_nth_ending_number_token1,
  [3582] = 1,
    ACTIONS(888), 1,
      aux_sym_first_repeat_bar_token2,
  [3586] = 1,
    ACTIONS(890), 1,
      aux_sym_first_repeat_bar_token2,
  [3590] = 1,
    ACTIONS(892), 1,
      anon_sym_DOT,
  [3594] = 1,
    ACTIONS(894), 1,
      aux_sym_chord_symbol_token1,
  [3598] = 1,
    ACTIONS(896), 1,
      sym__NL,
  [3602] = 1,
    ACTIONS(898), 1,
      aux_sym_chord_symbol_token1,
  [3606] = 1,
    ACTIONS(900), 1,
      aux_sym_nth_ending_number_token1,
  [3610] = 1,
    ACTIONS(902), 1,
      ts_builtin_sym_end,
  [3614] = 1,
    ACTIONS(904), 1,
      ts_builtin_sym_end,
  [3618] = 1,
    ACTIONS(906), 1,
      aux_sym__MUSIC_CODE_token1,
  [3622] = 1,
    ACTIONS(908), 1,
      sym__NL,
  [3626] = 1,
    ACTIONS(910), 1,
      aux_sym_nth_ending_number_token1,
  [3630] = 1,
    ACTIONS(912), 1,
      anon_sym_LBRACK,
  [3634] = 1,
    ACTIONS(914), 1,
      anon_sym_LBRACK,
  [3638] = 1,
    ACTIONS(916), 1,
      aux_sym_nth_ending_number_token1,
  [3642] = 1,
    ACTIONS(918), 1,
      sym_noCommentText,
  [3646] = 1,
    ACTIONS(920), 1,
      aux_sym_lyric_line_token1,
  [3650] = 1,
    ACTIONS(922), 1,
      aux_sym_nth_ending_number_token1,
  [3654] = 1,
    ACTIONS(924), 1,
      sym_noCommentText,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(55)] = 0,
  [SMALL_STATE(56)] = 65,
  [SMALL_STATE(57)] = 111,
  [SMALL_STATE(58)] = 157,
  [SMALL_STATE(59)] = 191,
  [SMALL_STATE(60)] = 224,
  [SMALL_STATE(61)] = 277,
  [SMALL_STATE(62)] = 330,
  [SMALL_STATE(63)] = 383,
  [SMALL_STATE(64)] = 429,
  [SMALL_STATE(65)] = 475,
  [SMALL_STATE(66)] = 498,
  [SMALL_STATE(67)] = 521,
  [SMALL_STATE(68)] = 544,
  [SMALL_STATE(69)] = 567,
  [SMALL_STATE(70)] = 590,
  [SMALL_STATE(71)] = 619,
  [SMALL_STATE(72)] = 648,
  [SMALL_STATE(73)] = 671,
  [SMALL_STATE(74)] = 694,
  [SMALL_STATE(75)] = 717,
  [SMALL_STATE(76)] = 740,
  [SMALL_STATE(77)] = 781,
  [SMALL_STATE(78)] = 822,
  [SMALL_STATE(79)] = 845,
  [SMALL_STATE(80)] = 881,
  [SMALL_STATE(81)] = 917,
  [SMALL_STATE(82)] = 947,
  [SMALL_STATE(83)] = 983,
  [SMALL_STATE(84)] = 1019,
  [SMALL_STATE(85)] = 1055,
  [SMALL_STATE(86)] = 1091,
  [SMALL_STATE(87)] = 1127,
  [SMALL_STATE(88)] = 1145,
  [SMALL_STATE(89)] = 1181,
  [SMALL_STATE(90)] = 1217,
  [SMALL_STATE(91)] = 1253,
  [SMALL_STATE(92)] = 1289,
  [SMALL_STATE(93)] = 1319,
  [SMALL_STATE(94)] = 1346,
  [SMALL_STATE(95)] = 1365,
  [SMALL_STATE(96)] = 1380,
  [SMALL_STATE(97)] = 1413,
  [SMALL_STATE(98)] = 1446,
  [SMALL_STATE(99)] = 1479,
  [SMALL_STATE(100)] = 1512,
  [SMALL_STATE(101)] = 1545,
  [SMALL_STATE(102)] = 1578,
  [SMALL_STATE(103)] = 1611,
  [SMALL_STATE(104)] = 1644,
  [SMALL_STATE(105)] = 1677,
  [SMALL_STATE(106)] = 1704,
  [SMALL_STATE(107)] = 1737,
  [SMALL_STATE(108)] = 1755,
  [SMALL_STATE(109)] = 1771,
  [SMALL_STATE(110)] = 1789,
  [SMALL_STATE(111)] = 1805,
  [SMALL_STATE(112)] = 1823,
  [SMALL_STATE(113)] = 1839,
  [SMALL_STATE(114)] = 1857,
  [SMALL_STATE(115)] = 1873,
  [SMALL_STATE(116)] = 1889,
  [SMALL_STATE(117)] = 1905,
  [SMALL_STATE(118)] = 1921,
  [SMALL_STATE(119)] = 1937,
  [SMALL_STATE(120)] = 1953,
  [SMALL_STATE(121)] = 1971,
  [SMALL_STATE(122)] = 1989,
  [SMALL_STATE(123)] = 2007,
  [SMALL_STATE(124)] = 2025,
  [SMALL_STATE(125)] = 2043,
  [SMALL_STATE(126)] = 2059,
  [SMALL_STATE(127)] = 2075,
  [SMALL_STATE(128)] = 2093,
  [SMALL_STATE(129)] = 2106,
  [SMALL_STATE(130)] = 2119,
  [SMALL_STATE(131)] = 2134,
  [SMALL_STATE(132)] = 2147,
  [SMALL_STATE(133)] = 2160,
  [SMALL_STATE(134)] = 2175,
  [SMALL_STATE(135)] = 2190,
  [SMALL_STATE(136)] = 2205,
  [SMALL_STATE(137)] = 2218,
  [SMALL_STATE(138)] = 2247,
  [SMALL_STATE(139)] = 2262,
  [SMALL_STATE(140)] = 2277,
  [SMALL_STATE(141)] = 2290,
  [SMALL_STATE(142)] = 2305,
  [SMALL_STATE(143)] = 2318,
  [SMALL_STATE(144)] = 2333,
  [SMALL_STATE(145)] = 2346,
  [SMALL_STATE(146)] = 2359,
  [SMALL_STATE(147)] = 2374,
  [SMALL_STATE(148)] = 2391,
  [SMALL_STATE(149)] = 2404,
  [SMALL_STATE(150)] = 2419,
  [SMALL_STATE(151)] = 2434,
  [SMALL_STATE(152)] = 2462,
  [SMALL_STATE(153)] = 2474,
  [SMALL_STATE(154)] = 2486,
  [SMALL_STATE(155)] = 2498,
  [SMALL_STATE(156)] = 2526,
  [SMALL_STATE(157)] = 2554,
  [SMALL_STATE(158)] = 2582,
  [SMALL_STATE(159)] = 2594,
  [SMALL_STATE(160)] = 2607,
  [SMALL_STATE(161)] = 2632,
  [SMALL_STATE(162)] = 2657,
  [SMALL_STATE(163)] = 2682,
  [SMALL_STATE(164)] = 2707,
  [SMALL_STATE(165)] = 2720,
  [SMALL_STATE(166)] = 2733,
  [SMALL_STATE(167)] = 2746,
  [SMALL_STATE(168)] = 2757,
  [SMALL_STATE(169)] = 2782,
  [SMALL_STATE(170)] = 2807,
  [SMALL_STATE(171)] = 2824,
  [SMALL_STATE(172)] = 2833,
  [SMALL_STATE(173)] = 2850,
  [SMALL_STATE(174)] = 2869,
  [SMALL_STATE(175)] = 2888,
  [SMALL_STATE(176)] = 2897,
  [SMALL_STATE(177)] = 2916,
  [SMALL_STATE(178)] = 2925,
  [SMALL_STATE(179)] = 2942,
  [SMALL_STATE(180)] = 2951,
  [SMALL_STATE(181)] = 2970,
  [SMALL_STATE(182)] = 2987,
  [SMALL_STATE(183)] = 3006,
  [SMALL_STATE(184)] = 3025,
  [SMALL_STATE(185)] = 3034,
  [SMALL_STATE(186)] = 3051,
  [SMALL_STATE(187)] = 3070,
  [SMALL_STATE(188)] = 3079,
  [SMALL_STATE(189)] = 3088,
  [SMALL_STATE(190)] = 3107,
  [SMALL_STATE(191)] = 3123,
  [SMALL_STATE(192)] = 3137,
  [SMALL_STATE(193)] = 3151,
  [SMALL_STATE(194)] = 3167,
  [SMALL_STATE(195)] = 3181,
  [SMALL_STATE(196)] = 3192,
  [SMALL_STATE(197)] = 3203,
  [SMALL_STATE(198)] = 3212,
  [SMALL_STATE(199)] = 3221,
  [SMALL_STATE(200)] = 3228,
  [SMALL_STATE(201)] = 3237,
  [SMALL_STATE(202)] = 3248,
  [SMALL_STATE(203)] = 3258,
  [SMALL_STATE(204)] = 3268,
  [SMALL_STATE(205)] = 3274,
  [SMALL_STATE(206)] = 3284,
  [SMALL_STATE(207)] = 3294,
  [SMALL_STATE(208)] = 3304,
  [SMALL_STATE(209)] = 3314,
  [SMALL_STATE(210)] = 3324,
  [SMALL_STATE(211)] = 3334,
  [SMALL_STATE(212)] = 3341,
  [SMALL_STATE(213)] = 3346,
  [SMALL_STATE(214)] = 3353,
  [SMALL_STATE(215)] = 3360,
  [SMALL_STATE(216)] = 3367,
  [SMALL_STATE(217)] = 3374,
  [SMALL_STATE(218)] = 3381,
  [SMALL_STATE(219)] = 3386,
  [SMALL_STATE(220)] = 3391,
  [SMALL_STATE(221)] = 3398,
  [SMALL_STATE(222)] = 3405,
  [SMALL_STATE(223)] = 3412,
  [SMALL_STATE(224)] = 3419,
  [SMALL_STATE(225)] = 3426,
  [SMALL_STATE(226)] = 3433,
  [SMALL_STATE(227)] = 3440,
  [SMALL_STATE(228)] = 3445,
  [SMALL_STATE(229)] = 3450,
  [SMALL_STATE(230)] = 3457,
  [SMALL_STATE(231)] = 3462,
  [SMALL_STATE(232)] = 3469,
  [SMALL_STATE(233)] = 3474,
  [SMALL_STATE(234)] = 3478,
  [SMALL_STATE(235)] = 3482,
  [SMALL_STATE(236)] = 3486,
  [SMALL_STATE(237)] = 3490,
  [SMALL_STATE(238)] = 3494,
  [SMALL_STATE(239)] = 3498,
  [SMALL_STATE(240)] = 3502,
  [SMALL_STATE(241)] = 3506,
  [SMALL_STATE(242)] = 3510,
  [SMALL_STATE(243)] = 3514,
  [SMALL_STATE(244)] = 3518,
  [SMALL_STATE(245)] = 3522,
  [SMALL_STATE(246)] = 3526,
  [SMALL_STATE(247)] = 3530,
  [SMALL_STATE(248)] = 3534,
  [SMALL_STATE(249)] = 3538,
  [SMALL_STATE(250)] = 3542,
  [SMALL_STATE(251)] = 3546,
  [SMALL_STATE(252)] = 3550,
  [SMALL_STATE(253)] = 3554,
  [SMALL_STATE(254)] = 3558,
  [SMALL_STATE(255)] = 3562,
  [SMALL_STATE(256)] = 3566,
  [SMALL_STATE(257)] = 3570,
  [SMALL_STATE(258)] = 3574,
  [SMALL_STATE(259)] = 3578,
  [SMALL_STATE(260)] = 3582,
  [SMALL_STATE(261)] = 3586,
  [SMALL_STATE(262)] = 3590,
  [SMALL_STATE(263)] = 3594,
  [SMALL_STATE(264)] = 3598,
  [SMALL_STATE(265)] = 3602,
  [SMALL_STATE(266)] = 3606,
  [SMALL_STATE(267)] = 3610,
  [SMALL_STATE(268)] = 3614,
  [SMALL_STATE(269)] = 3618,
  [SMALL_STATE(270)] = 3622,
  [SMALL_STATE(271)] = 3626,
  [SMALL_STATE(272)] = 3630,
  [SMALL_STATE(273)] = 3634,
  [SMALL_STATE(274)] = 3638,
  [SMALL_STATE(275)] = 3642,
  [SMALL_STATE(276)] = 3646,
  [SMALL_STATE(277)] = 3650,
  [SMALL_STATE(278)] = 3654,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(277),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [15] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [17] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(2),
  [20] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(252),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(64),
  [26] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(27),
  [29] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(27),
  [32] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(96),
  [35] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(236),
  [38] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(67),
  [41] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(87),
  [44] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(235),
  [47] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(201),
  [50] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(226),
  [53] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(161),
  [56] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(199),
  [59] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(13),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(18),
  [65] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(30),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(16),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(24),
  [74] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(237),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(36),
  [80] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(218),
  [83] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(105),
  [86] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [88] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 1),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [94] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [96] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [100] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [118] = {.entry = {.count = 1, .reusable = false}}, SHIFT(13),
  [120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [134] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 1),
  [136] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 2),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 2),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(270),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [149] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(249),
  [152] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(277),
  [155] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(36),
  [158] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(218),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 2),
  [163] = {.entry = {.count = 1, .reusable = false}}, SHIFT(270),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 2),
  [167] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [169] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 1),
  [171] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 1),
  [173] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 4),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 4),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 5),
  [181] = {.entry = {.count = 1, .reusable = false}}, SHIFT(212),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [187] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 3),
  [189] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [191] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 3),
  [193] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_bar_line, 1),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_bar_line, 1),
  [197] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [199] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [203] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(257),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 2),
  [212] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 2),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(233),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [218] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 4),
  [220] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 4),
  [222] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 4),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 4),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 2),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 2),
  [232] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 2),
  [234] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [236] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [238] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 2),
  [244] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 2),
  [246] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 3),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 3),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1),
  [254] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 3),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 3),
  [260] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_barline, 3),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_barline, 3),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stylesheet_directives, 2),
  [266] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet_directives, 2),
  [268] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 2),
  [270] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 2),
  [272] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_info_line, 2, .production_id = 1),
  [274] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_info_line, 2, .production_id = 1),
  [276] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_line, 2),
  [278] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [280] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [282] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [284] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [286] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [288] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [290] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [292] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2),
  [294] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(35),
  [297] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(217),
  [300] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(38),
  [303] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(43),
  [306] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(51),
  [309] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(39),
  [312] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(50),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [317] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [319] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [323] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [325] = {.entry = {.count = 1, .reusable = false}}, SHIFT(266),
  [327] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [329] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [331] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [333] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [335] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [337] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(266),
  [340] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 6),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 4),
  [344] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 5),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 3),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header, 1),
  [352] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat2, 2), SHIFT_REPEAT(229),
  [355] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat2, 2), SHIFT_REPEAT(278),
  [358] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat2, 2), SHIFT_REPEAT(277),
  [361] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat2, 2), SHIFT_REPEAT(275),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_header_repeat2, 2),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat2, 2), SHIFT_REPEAT(218),
  [369] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(58),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_header_repeat2, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(63),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2),
  [385] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(99),
  [388] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(253),
  [391] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(72),
  [394] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(94),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(201),
  [400] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(226),
  [403] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(163),
  [406] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(199),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [411] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [413] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [415] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [417] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [419] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [421] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [423] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [425] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [427] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [431] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(65),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 3),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [438] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 1),
  [440] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [442] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 2),
  [444] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [446] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(158),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(154),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(152),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(262),
  [460] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [462] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [464] = {.entry = {.count = 1, .reusable = false}}, SHIFT(154),
  [466] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(262),
  [470] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 1),
  [472] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [474] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [476] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(73),
  [479] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 3),
  [481] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [483] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 2),
  [485] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [487] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [489] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [491] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [493] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [495] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [497] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [499] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(164),
  [504] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(165),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(164),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(166),
  [513] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(244),
  [516] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [518] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [520] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(236),
  [525] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(67),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(87),
  [531] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(201),
  [534] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(199),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(164),
  [561] = {.entry = {.count = 1, .reusable = false}}, SHIFT(166),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [569] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [575] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [577] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 2),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [581] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 7),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [585] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [587] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 3),
  [589] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [595] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 3),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 3),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [601] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 4),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [605] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 4),
  [607] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 5),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [613] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [615] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [621] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [623] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 1),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [631] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 4),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [635] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 7),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [639] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 5),
  [641] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [643] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 5),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [649] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 6),
  [651] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [653] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 6),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 8),
  [659] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 6),
  [661] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [663] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [665] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(201),
  [668] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 8),
  [670] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 6),
  [672] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_syllable, 1),
  [674] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse_number, 2),
  [676] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HYPHEN, 1),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_text, 1),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse_number, 2),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [692] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_text, 1),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HYPHEN, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_syllable, 1),
  [698] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [704] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [710] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [712] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [714] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 1),
  [716] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 2),
  [720] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [722] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2),
  [724] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2), SHIFT_REPEAT(271),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [733] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(236),
  [736] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(67),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [741] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2), SHIFT_REPEAT(276),
  [748] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_section, 1),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 4),
  [752] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 1),
  [754] = {.entry = {.count = 1, .reusable = false}}, SHIFT(204),
  [756] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [758] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 3),
  [762] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 3),
  [764] = {.entry = {.count = 1, .reusable = false}}, SHIFT(274),
  [766] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 2),
  [768] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 3),
  [772] = {.entry = {.count = 1, .reusable = false}}, SHIFT(93),
  [774] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [776] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2), SHIFT_REPEAT(93),
  [779] = {.entry = {.count = 1, .reusable = true}}, SHIFT(184),
  [781] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [785] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [787] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [789] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2),
  [793] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(274),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 4),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 2),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 2, .production_id = 1),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [828] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 5),
  [830] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_line, 3),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [834] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 2, .production_id = 1),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [862] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 3, .production_id = 1),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [878] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined, 4),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [902] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [904] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
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
