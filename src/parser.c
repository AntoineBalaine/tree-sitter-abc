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
#define STATE_COUNT 227
#define LARGE_STATE_COUNT 55
#define SYMBOL_COUNT 201
#define ALIAS_COUNT 0
#define TOKEN_COUNT 144
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
  aux_sym__music_content_token1 = 15,
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
  aux_sym_lyric_line_token1 = 49,
  aux_sym_lyric_syllable_token1 = 50,
  aux_sym_verse_number_token1 = 51,
  anon_sym_DOT = 52,
  anon_sym_BANGtrill_BANG = 53,
  anon_sym_BANGtrill_LPAREN_BANG = 54,
  anon_sym_BANGtrill_RPAREN_BANG = 55,
  anon_sym_BANGlowermordent_BANG = 56,
  anon_sym_BANGuppermordent_BANG = 57,
  anon_sym_BANGmordent_BANG = 58,
  anon_sym_BANGpralltriller_BANG = 59,
  anon_sym_BANGroll_BANG = 60,
  anon_sym_BANGturn_BANG = 61,
  anon_sym_BANGturnx_BANG = 62,
  anon_sym_BANGinvertedturn_BANG = 63,
  anon_sym_BANGinvertedturnx_BANG = 64,
  anon_sym_BANGarpeggio_BANG = 65,
  anon_sym_BANG_GT_BANG = 66,
  anon_sym_BANGaccent_BANG = 67,
  anon_sym_BANGemphasis_BANG = 68,
  anon_sym_BANGfermata_BANG = 69,
  anon_sym_BANGinvertedfermata_BANG = 70,
  anon_sym_BANGtenuto_BANG = 71,
  anon_sym_BANG0_BANG_DASH_BANG5_BANG = 72,
  anon_sym_BANG_PLUS_BANG = 73,
  anon_sym_BANGplus_BANG = 74,
  anon_sym_BANGsnap_BANG = 75,
  anon_sym_BANGslide_BANG = 76,
  anon_sym_BANGwedge_BANG = 77,
  anon_sym_BANGupbow_BANG = 78,
  anon_sym_BANGdownbow_BANG = 79,
  anon_sym_BANGopen_BANG = 80,
  anon_sym_BANGthumb_BANG = 81,
  anon_sym_BANGbreath_BANG = 82,
  anon_sym_BANGpppp_BANG = 83,
  anon_sym_BANGppp_BANG = 84,
  anon_sym_BANGpp_BANG = 85,
  anon_sym_BANGp_BANG = 86,
  anon_sym_BANGmp_BANG = 87,
  anon_sym_BANGmf_BANG = 88,
  anon_sym_BANGf_BANG = 89,
  anon_sym_BANGff_BANG = 90,
  anon_sym_BANGfff_BANG = 91,
  anon_sym_BANGffff_BANG = 92,
  anon_sym_BANGsfz_BANG = 93,
  anon_sym_BANGcrescendo_LPAREN_BANG = 94,
  anon_sym_BANG_LT_LPAREN_BANG = 95,
  anon_sym_BANGcrescendo_RPAREN_BANG = 96,
  anon_sym_BANG_LT_RPAREN_BANG = 97,
  anon_sym_BANGdiminuendo_LPAREN_BANG = 98,
  anon_sym_BANG_GT_LPAREN_BANG = 99,
  anon_sym_BANGdiminuendo_RPAREN_BANG = 100,
  anon_sym_BANG_GT_RPAREN_BANG = 101,
  anon_sym_BANGsegno_BANG = 102,
  anon_sym_BANGcoda_BANG = 103,
  anon_sym_BANGD_DOTS_DOT_BANG = 104,
  anon_sym_BANGD_DOTC_DOT_BANG = 105,
  anon_sym_BANGdacoda_BANG = 106,
  anon_sym_BANGdacapo_BANG = 107,
  anon_sym_BANGfine_BANG = 108,
  anon_sym_BANGshortphrase_BANG = 109,
  anon_sym_BANGmediumphrase_BANG = 110,
  anon_sym_BANGlongphrase_BANG = 111,
  sym_parts_line = 112,
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
  sym_source_file = 144,
  sym_HYPHEN = 145,
  sym_stylesheet_directives = 146,
  sym__MUSIC_CODE = 147,
  sym_file_structure = 148,
  sym_file_header = 149,
  sym_tune = 150,
  sym_tune_header = 151,
  sym_tune_body = 152,
  sym__music_content = 153,
  sym__nte_or_chrd = 154,
  sym_beam = 155,
  sym_note_construct = 156,
  sym__chord_cstrct = 157,
  sym_note = 158,
  sym_chord_note = 159,
  sym__pitch = 160,
  sym_multimeasure_rest = 161,
  sym_grace_note = 162,
  sym_chord_symbol_note = 163,
  sym_chord_symbol = 164,
  sym_decoration = 165,
  sym_nth_ending_barline = 166,
  sym_nth_ending_number = 167,
  sym_generic_bar_line = 168,
  sym_first_repeat_bar = 169,
  sym_second_repeat_bar = 170,
  sym_lyric_line = 171,
  sym_lyric_section = 172,
  sym_lyric_syllable = 173,
  sym_verse_number = 174,
  sym_lyric_text = 175,
  sym_symbol = 176,
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
  [aux_sym__music_content_token1] = "_music_content_token1",
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
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_note_skip] = sym_note_skip,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_UNDERSCORE] = sym_UNDERSCORE,
  [sym_TILDE] = sym_TILDE,
  [sym_BEAM_SEPARATOR] = sym_BEAM_SEPARATOR,
  [sym_COMMENT] = sym_COMMENT,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [aux_sym__MUSIC_CODE_token1] = aux_sym__MUSIC_CODE_token1,
  [aux_sym__music_content_token1] = aux_sym__music_content_token1,
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
  [aux_sym__music_content_token1] = {
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
  [37] = 12,
  [38] = 15,
  [39] = 14,
  [40] = 16,
  [41] = 13,
  [42] = 17,
  [43] = 18,
  [44] = 27,
  [45] = 45,
  [46] = 29,
  [47] = 47,
  [48] = 28,
  [49] = 24,
  [50] = 50,
  [51] = 30,
  [52] = 22,
  [53] = 25,
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
  [78] = 72,
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
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 118,
  [119] = 114,
  [120] = 115,
  [121] = 121,
  [122] = 117,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 116,
  [128] = 128,
  [129] = 54,
  [130] = 47,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 45,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 50,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 154,
  [155] = 155,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 161,
  [162] = 162,
  [163] = 163,
  [164] = 162,
  [165] = 165,
  [166] = 166,
  [167] = 167,
  [168] = 168,
  [169] = 168,
  [170] = 170,
  [171] = 171,
  [172] = 172,
  [173] = 173,
  [174] = 174,
  [175] = 175,
  [176] = 176,
  [177] = 171,
  [178] = 173,
  [179] = 179,
  [180] = 180,
  [181] = 172,
  [182] = 182,
  [183] = 151,
  [184] = 176,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 192,
  [193] = 193,
  [194] = 31,
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
  [210] = 27,
  [211] = 209,
  [212] = 212,
  [213] = 213,
  [214] = 214,
  [215] = 199,
  [216] = 200,
  [217] = 213,
  [218] = 218,
  [219] = 190,
  [220] = 214,
  [221] = 212,
  [222] = 218,
  [223] = 189,
  [224] = 187,
  [225] = 225,
  [226] = 226,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(569);
      if (lookahead == '\'') ADVANCE(595);
      if (lookahead == '(') ADVANCE(579);
      if (lookahead == ')') ADVANCE(580);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead == '+') ADVANCE(557);
      if (lookahead == ',') ADVANCE(658);
      if (lookahead == '-') ADVANCE(561);
      if (lookahead == '.') ADVANCE(679);
      if (lookahead == '/') ADVANCE(603);
      if (lookahead == '0') ADVANCE(601);
      if (lookahead == ':') ADVANCE(558);
      if (lookahead == '=') ADVANCE(830);
      if (lookahead == 'A') ADVANCE(589);
      if (lookahead == 'B') ADVANCE(590);
      if (lookahead == 'C') ADVANCE(591);
      if (lookahead == 'D') ADVANCE(592);
      if (lookahead == 'F') ADVANCE(593);
      if (lookahead == 'G') ADVANCE(594);
      if (lookahead == 'H') ADVANCE(646);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'P') ADVANCE(651);
      if (lookahead == 'Q') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(652);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(599);
      if (lookahead == 'Z') ADVANCE(598);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == '\\') ADVANCE(556);
      if (lookahead == ']') ADVANCE(584);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(563);
      if (lookahead == '`') ADVANCE(568);
      if (lookahead == 'm') ADVANCE(825);
      if (lookahead == 'r') ADVANCE(826);
      if (lookahead == 's') ADVANCE(827);
      if (lookahead == 'w') ADVANCE(828);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == '}') ADVANCE(609);
      if (lookahead == '~') ADVANCE(566);
      if ((9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(577);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(605);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == 'u' ||
          lookahead == 'v') ADVANCE(645);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(600);
      if (('h' <= lookahead && lookahead <= 't')) ADVANCE(824);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '!') ADVANCE(365);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '%') ADVANCE(575);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == ':') ADVANCE(372);
      if (lookahead == '[') ADVANCE(552);
      if (lookahead == '|') ADVANCE(662);
      if (lookahead != 0) ADVANCE(555);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead == '-') ADVANCE(561);
      if (lookahead == '.') ADVANCE(679);
      if (lookahead == '=') ADVANCE(830);
      if (lookahead == '_') ADVANCE(565);
      if (lookahead == '|') ADVANCE(660);
      if (lookahead == '~') ADVANCE(566);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(678);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(678);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(721);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(707);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(753);
      if (lookahead == 'e') ADVANCE(239);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(747);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(765);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(769);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(773);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(777);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(755);
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(751);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(749);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(745);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(757);
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(743);
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(761);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(785);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(783);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(781);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(759);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(791);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(735);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(723);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(741);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(695);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(725);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(697);
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(779);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(727);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(681);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(699);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(731);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(729);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(709);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(739);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(789);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(787);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(717);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(683);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(685);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(719);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(733);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(713);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(691);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(705);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(711);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(763);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(767);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(797);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(771);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(775);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(793);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(701);
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(687);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(795);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(693);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(689);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(703);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(715);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(365);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == ',') ADVANCE(659);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == ':') ADVANCE(372);
      if (lookahead == '[') ADVANCE(552);
      if (lookahead == '|') ADVANCE(662);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(610);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == '-') ADVANCE(581);
      if (lookahead == '/') ADVANCE(603);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == '[') ADVANCE(582);
      if (lookahead == ']') ADVANCE(584);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == '`') ADVANCE(568);
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
          lookahead == ' ') ADVANCE(577);
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
          lookahead == '~') ADVANCE(645);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(610);
      if (lookahead == '/') ADVANCE(612);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(644);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(617);
      if (lookahead == 'a') ADVANCE(642);
      if (lookahead == 'd') ADVANCE(626);
      if (lookahead == 'm') ADVANCE(618);
      if (lookahead == 's') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
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
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == '+') ADVANCE(371);
      if (lookahead == '-') ADVANCE(562);
      if (lookahead == '_') ADVANCE(564);
      if (lookahead == '|') ADVANCE(663);
      if (lookahead == '~') ADVANCE(567);
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
      if (lookahead == '.') ADVANCE(680);
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
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '|') ADVANCE(672);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(808);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(809);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(812);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(819);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(816);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(823);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(831);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(834);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(814);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(820);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(810);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(815);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(818);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(832);
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
      if (('h' <= lookahead && lookahead <= 'w')) ADVANCE(824);
      END_STATE();
    case 104:
      if (lookahead == 'W') ADVANCE(829);
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
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(606);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(100);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 287:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(570);
      if (lookahead == '(') ADVANCE(579);
      if (lookahead == ')') ADVANCE(580);
      if (lookahead == ',') ADVANCE(658);
      if (lookahead == '-') ADVANCE(561);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(651);
      if (lookahead == 'Q') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(599);
      if (lookahead == 'Z') ADVANCE(597);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(97);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(645);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      END_STATE();
    case 288:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == '"') ADVANCE(610);
      if (lookahead == '%') ADVANCE(569);
      if (lookahead == '(') ADVANCE(284);
      if (lookahead == '/') ADVANCE(612);
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
      if (lookahead == 'H') ADVANCE(647);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(652);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(92);
      if (lookahead == 'Z') ADVANCE(93);
      if (lookahead == '[') ADVANCE(582);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '.' ||
          lookahead == 'P' ||
          lookahead == 'T' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(645);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      END_STATE();
    case 289:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(569);
      if (lookahead == '(') ADVANCE(579);
      if (lookahead == ')') ADVANCE(580);
      if (lookahead == '*') ADVANCE(559);
      if (lookahead == ':') ADVANCE(83);
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
      if (lookahead == 'H') ADVANCE(647);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(652);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(599);
      if (lookahead == 'Z') ADVANCE(598);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == ']') ADVANCE(584);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == '}') ADVANCE(609);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(578);
      if (lookahead == '.' ||
          lookahead == 'P' ||
          lookahead == 'T' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(645);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(657);
      END_STATE();
    case 290:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(570);
      if (lookahead == '(') ADVANCE(579);
      if (lookahead == ')') ADVANCE(580);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(651);
      if (lookahead == 'Q') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(599);
      if (lookahead == 'Z') ADVANCE(597);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(97);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(578);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      END_STATE();
    case 291:
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(296);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(572);
      if (lookahead == '(') ADVANCE(579);
      if (lookahead == ')') ADVANCE(580);
      if (lookahead == ':') ADVANCE(83);
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
      if (lookahead == 'H') ADVANCE(647);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'O') ADVANCE(650);
      if (lookahead == 'P') ADVANCE(651);
      if (lookahead == 'Q') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'S') ADVANCE(652);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(599);
      if (lookahead == 'Z') ADVANCE(598);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(578);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(645);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(601);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(577);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__NL);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__NL);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(577);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(sym__NL);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(578);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '\n') ADVANCE(655);
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
      if (lookahead == '!') ADVANCE(722);
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
      if (lookahead == '!') ADVANCE(708);
      if (lookahead == '(') ADVANCE(307);
      if (lookahead == ')') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(754);
      if (lookahead == 'e') ADVANCE(508);
      if (lookahead == 'f') ADVANCE(309);
      if (lookahead == 'i') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(748);
      if (lookahead == 'l') ADVANCE(541);
      if (lookahead == 'p') ADVANCE(312);
      if (lookahead == 'r') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(766);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(770);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead == 'f') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(746);
      if (lookahead == 'p') ADVANCE(314);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(758);
      if (lookahead == 'f') ADVANCE(319);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(744);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(760);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(698);
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
      if (lookahead == '!') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(682);
      if (lookahead == '(') ADVANCE(340);
      if (lookahead == ')') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(710);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(684);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(686);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(720);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(714);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(768);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(702);
      if (lookahead == 'x') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(688);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(694);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(690);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(716);
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
      if (lookahead == ':') ADVANCE(675);
      if (lookahead == '|') ADVANCE(673);
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
      if (lookahead == '|') ADVANCE(669);
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
      if (lookahead == ':') ADVANCE(833);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(674);
      if (lookahead == '|') ADVANCE(672);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_note_skip);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_note_skip);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (lookahead == '_') ADVANCE(585);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(678);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_TILDE);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(sym_BEAM_SEPARATOR);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '%') ADVANCE(576);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(575);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '%') ADVANCE(576);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(575);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '-') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(575);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'a') ADVANCE(573);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(575);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'b') ADVANCE(574);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(575);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'c') ADVANCE(571);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(575);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(575);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(aux_sym__MUSIC_CODE_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(577);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(aux_sym__music_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(578);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(668);
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
      if (lookahead == ':') ADVANCE(801);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(802);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(803);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(804);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(805);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(806);
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
      if (lookahead == ':') ADVANCE(820);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == ':') ADVANCE(814);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(283);
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
      if (lookahead == '/') ADVANCE(283);
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
      if (lookahead == '"') ADVANCE(613);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(615);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(615);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(629);
      if (lookahead == 'i') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(619);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(630);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(622);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(641);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(620);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(628);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(638);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(623);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(625);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(621);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(624);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(644);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == '-') ADVANCE(104);
      if (lookahead == ':') ADVANCE(807);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(807);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(822);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(811);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(813);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(799);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(817);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(821);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (lookahead == '\n') ADVANCE(655);
      if (lookahead == '!') ADVANCE(365);
      if (lookahead == '"') ADVANCE(361);
      if (lookahead == '*') ADVANCE(560);
      if (lookahead == ':') ADVANCE(372);
      if (lookahead == '[') ADVANCE(552);
      if (lookahead == '|') ADVANCE(662);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(297);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(553);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(655);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (eof) ADVANCE(292);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(611);
      if (lookahead == '%') ADVANCE(570);
      if (lookahead == '(') ADVANCE(579);
      if (lookahead == ')') ADVANCE(580);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(585);
      if (lookahead == 'I') ADVANCE(84);
      if (lookahead == 'K') ADVANCE(85);
      if (lookahead == 'L') ADVANCE(648);
      if (lookahead == 'M') ADVANCE(649);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(651);
      if (lookahead == 'Q') ADVANCE(87);
      if (lookahead == 'R') ADVANCE(88);
      if (lookahead == 'T') ADVANCE(653);
      if (lookahead == 'U') ADVANCE(89);
      if (lookahead == 'V') ADVANCE(90);
      if (lookahead == 'W') ADVANCE(91);
      if (lookahead == 'X') ADVANCE(599);
      if (lookahead == 'Z') ADVANCE(597);
      if (lookahead == '[') ADVANCE(583);
      if (lookahead == '^') ADVANCE(586);
      if (lookahead == '_') ADVANCE(587);
      if (lookahead == 'm') ADVANCE(94);
      if (lookahead == 'r') ADVANCE(95);
      if (lookahead == 's') ADVANCE(96);
      if (lookahead == 'w') ADVANCE(97);
      if (lookahead == '{') ADVANCE(608);
      if (lookahead == '|') ADVANCE(661);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(596);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(577);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(588);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(aux_sym_nth_ending_number_token1);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_bar_line);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(670);
      if (lookahead == ']') ADVANCE(664);
      if (lookahead == '|') ADVANCE(666);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(671);
      if (lookahead == ']') ADVANCE(665);
      if (lookahead == '|') ADVANCE(667);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(676);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(aux_sym_lyric_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(677);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(678);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(555);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(sym_parts_line);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(575);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(sym_area);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(sym_book);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(sym_composer);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(sym_discography);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(sym_file);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(sym_group);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(sym_history);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(sym_macros);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_meter);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(anon_sym_X_COLON);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_remark);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_rhythm_line);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(anon_sym_s_COLON);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_tempo);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_transcription);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_tune_title);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_unit_note_length);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(anon_sym_U_COLON);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(810);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(815);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(818);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(832);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(aux_sym_user_defined_token2);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_voice);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(anon_sym_w_COLON);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_words_postbody);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 289},
  [2] = {.lex_state = 290},
  [3] = {.lex_state = 290},
  [4] = {.lex_state = 290},
  [5] = {.lex_state = 291},
  [6] = {.lex_state = 291},
  [7] = {.lex_state = 291},
  [8] = {.lex_state = 291},
  [9] = {.lex_state = 291},
  [10] = {.lex_state = 291},
  [11] = {.lex_state = 289},
  [12] = {.lex_state = 287},
  [13] = {.lex_state = 656},
  [14] = {.lex_state = 656},
  [15] = {.lex_state = 287},
  [16] = {.lex_state = 287},
  [17] = {.lex_state = 287},
  [18] = {.lex_state = 656},
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
  [31] = {.lex_state = 290},
  [32] = {.lex_state = 290},
  [33] = {.lex_state = 290},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 289},
  [37] = {.lex_state = 66},
  [38] = {.lex_state = 66},
  [39] = {.lex_state = 654},
  [40] = {.lex_state = 66},
  [41] = {.lex_state = 654},
  [42] = {.lex_state = 66},
  [43] = {.lex_state = 654},
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
  [56] = {.lex_state = 289},
  [57] = {.lex_state = 289},
  [58] = {.lex_state = 288},
  [59] = {.lex_state = 288},
  [60] = {.lex_state = 68},
  [61] = {.lex_state = 68},
  [62] = {.lex_state = 68},
  [63] = {.lex_state = 288},
  [64] = {.lex_state = 288},
  [65] = {.lex_state = 68},
  [66] = {.lex_state = 68},
  [67] = {.lex_state = 68},
  [68] = {.lex_state = 68},
  [69] = {.lex_state = 68},
  [70] = {.lex_state = 73},
  [71] = {.lex_state = 288},
  [72] = {.lex_state = 73},
  [73] = {.lex_state = 289},
  [74] = {.lex_state = 289},
  [75] = {.lex_state = 289},
  [76] = {.lex_state = 289},
  [77] = {.lex_state = 289},
  [78] = {.lex_state = 2},
  [79] = {.lex_state = 68},
  [80] = {.lex_state = 2},
  [81] = {.lex_state = 289},
  [82] = {.lex_state = 289},
  [83] = {.lex_state = 2},
  [84] = {.lex_state = 68},
  [85] = {.lex_state = 289},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 289},
  [88] = {.lex_state = 289},
  [89] = {.lex_state = 289},
  [90] = {.lex_state = 68},
  [91] = {.lex_state = 68},
  [92] = {.lex_state = 68},
  [93] = {.lex_state = 68},
  [94] = {.lex_state = 68},
  [95] = {.lex_state = 68},
  [96] = {.lex_state = 68},
  [97] = {.lex_state = 68},
  [98] = {.lex_state = 68},
  [99] = {.lex_state = 68},
  [100] = {.lex_state = 68},
  [101] = {.lex_state = 288},
  [102] = {.lex_state = 68},
  [103] = {.lex_state = 68},
  [104] = {.lex_state = 68},
  [105] = {.lex_state = 68},
  [106] = {.lex_state = 68},
  [107] = {.lex_state = 68},
  [108] = {.lex_state = 289},
  [109] = {.lex_state = 68},
  [110] = {.lex_state = 68},
  [111] = {.lex_state = 68},
  [112] = {.lex_state = 68},
  [113] = {.lex_state = 289},
  [114] = {.lex_state = 73},
  [115] = {.lex_state = 73},
  [116] = {.lex_state = 73},
  [117] = {.lex_state = 73},
  [118] = {.lex_state = 289},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 2},
  [121] = {.lex_state = 288},
  [122] = {.lex_state = 2},
  [123] = {.lex_state = 289},
  [124] = {.lex_state = 289},
  [125] = {.lex_state = 288},
  [126] = {.lex_state = 289},
  [127] = {.lex_state = 2},
  [128] = {.lex_state = 288},
  [129] = {.lex_state = 289},
  [130] = {.lex_state = 289},
  [131] = {.lex_state = 289},
  [132] = {.lex_state = 288},
  [133] = {.lex_state = 289},
  [134] = {.lex_state = 289},
  [135] = {.lex_state = 288},
  [136] = {.lex_state = 0},
  [137] = {.lex_state = 289},
  [138] = {.lex_state = 289},
  [139] = {.lex_state = 289},
  [140] = {.lex_state = 289},
  [141] = {.lex_state = 289},
  [142] = {.lex_state = 289},
  [143] = {.lex_state = 0},
  [144] = {.lex_state = 0},
  [145] = {.lex_state = 289},
  [146] = {.lex_state = 289},
  [147] = {.lex_state = 289},
  [148] = {.lex_state = 289},
  [149] = {.lex_state = 0},
  [150] = {.lex_state = 288},
  [151] = {.lex_state = 69},
  [152] = {.lex_state = 289},
  [153] = {.lex_state = 288},
  [154] = {.lex_state = 289},
  [155] = {.lex_state = 288},
  [156] = {.lex_state = 75},
  [157] = {.lex_state = 288},
  [158] = {.lex_state = 75},
  [159] = {.lex_state = 79},
  [160] = {.lex_state = 288},
  [161] = {.lex_state = 79},
  [162] = {.lex_state = 69},
  [163] = {.lex_state = 75},
  [164] = {.lex_state = 69},
  [165] = {.lex_state = 69},
  [166] = {.lex_state = 79},
  [167] = {.lex_state = 288},
  [168] = {.lex_state = 0},
  [169] = {.lex_state = 0},
  [170] = {.lex_state = 1},
  [171] = {.lex_state = 288},
  [172] = {.lex_state = 0},
  [173] = {.lex_state = 0},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 103},
  [176] = {.lex_state = 0},
  [177] = {.lex_state = 288},
  [178] = {.lex_state = 0},
  [179] = {.lex_state = 79},
  [180] = {.lex_state = 1},
  [181] = {.lex_state = 0},
  [182] = {.lex_state = 1},
  [183] = {.lex_state = 288},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 289},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 0},
  [189] = {.lex_state = 0},
  [190] = {.lex_state = 288},
  [191] = {.lex_state = 677},
  [192] = {.lex_state = 1},
  [193] = {.lex_state = 75},
  [194] = {.lex_state = 1},
  [195] = {.lex_state = 1},
  [196] = {.lex_state = 68},
  [197] = {.lex_state = 75},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 289},
  [200] = {.lex_state = 290},
  [201] = {.lex_state = 0},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 289},
  [204] = {.lex_state = 75},
  [205] = {.lex_state = 291},
  [206] = {.lex_state = 1},
  [207] = {.lex_state = 75},
  [208] = {.lex_state = 289},
  [209] = {.lex_state = 75},
  [210] = {.lex_state = 75},
  [211] = {.lex_state = 75},
  [212] = {.lex_state = 289},
  [213] = {.lex_state = 290},
  [214] = {.lex_state = 288},
  [215] = {.lex_state = 289},
  [216] = {.lex_state = 290},
  [217] = {.lex_state = 290},
  [218] = {.lex_state = 2},
  [219] = {.lex_state = 288},
  [220] = {.lex_state = 288},
  [221] = {.lex_state = 289},
  [222] = {.lex_state = 2},
  [223] = {.lex_state = 0},
  [224] = {.lex_state = 0},
  [225] = {.lex_state = 1},
  [226] = {.lex_state = 677},
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
    [sym_source_file] = STATE(202),
    [sym_stylesheet_directives] = STATE(174),
    [sym_file_structure] = STATE(201),
    [sym_file_header] = STATE(149),
    [sym_tune] = STATE(153),
    [sym_tune_header] = STATE(11),
    [sym_abc_version] = STATE(207),
    [sym_reference_number_line] = STATE(7),
    [sym_user_defined] = STATE(207),
    [sym_file_header_info_line] = STATE(174),
    [aux_sym_file_structure_repeat2] = STATE(143),
    [aux_sym_file_header_repeat1] = STATE(57),
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
    [sym_note] = STATE(96),
    [sym__pitch] = STATE(79),
    [sym_multimeasure_rest] = STATE(20),
    [sym_grace_note] = STATE(71),
    [sym_chord_symbol] = STATE(118),
    [sym_decoration] = STATE(131),
    [sym_nth_ending_barline] = STATE(28),
    [sym_generic_bar_line] = STATE(20),
    [sym_first_repeat_bar] = STATE(28),
    [sym_second_repeat_bar] = STATE(28),
    [sym_symbol] = STATE(20),
    [sym_symbol_line] = STATE(193),
    [sym_user_defined] = STATE(193),
    [sym_words_line] = STATE(193),
    [sym_body_info_line] = STATE(3),
    [aux_sym_tune_body_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(71),
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
    [sym_note] = STATE(96),
    [sym__pitch] = STATE(79),
    [sym_multimeasure_rest] = STATE(20),
    [sym_grace_note] = STATE(71),
    [sym_chord_symbol] = STATE(118),
    [sym_decoration] = STATE(131),
    [sym_nth_ending_barline] = STATE(28),
    [sym_generic_bar_line] = STATE(20),
    [sym_first_repeat_bar] = STATE(28),
    [sym_second_repeat_bar] = STATE(28),
    [sym_symbol] = STATE(20),
    [sym_symbol_line] = STATE(193),
    [sym_user_defined] = STATE(193),
    [sym_words_line] = STATE(193),
    [sym_body_info_line] = STATE(3),
    [aux_sym_tune_body_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(71),
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
    [sym_note] = STATE(96),
    [sym__pitch] = STATE(79),
    [sym_multimeasure_rest] = STATE(20),
    [sym_grace_note] = STATE(71),
    [sym_chord_symbol] = STATE(118),
    [sym_decoration] = STATE(131),
    [sym_nth_ending_barline] = STATE(28),
    [sym_generic_bar_line] = STATE(20),
    [sym_first_repeat_bar] = STATE(28),
    [sym_second_repeat_bar] = STATE(28),
    [sym_symbol] = STATE(20),
    [sym_symbol_line] = STATE(193),
    [sym_user_defined] = STATE(193),
    [sym_words_line] = STATE(193),
    [sym_body_info_line] = STATE(2),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(71),
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
    [sym_abc_version] = STATE(204),
    [sym_symbol_line] = STATE(204),
    [sym_user_defined] = STATE(204),
    [sym_tune_header_info_line] = STATE(225),
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
    [sym_abc_version] = STATE(204),
    [sym_symbol_line] = STATE(204),
    [sym_user_defined] = STATE(204),
    [sym_tune_header_info_line] = STATE(225),
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
    [sym_abc_version] = STATE(204),
    [sym_symbol_line] = STATE(204),
    [sym_user_defined] = STATE(204),
    [sym_tune_header_info_line] = STATE(225),
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
    [sym_tune_body] = STATE(125),
    [sym__music_content] = STATE(20),
    [sym__nte_or_chrd] = STATE(61),
    [sym_beam] = STATE(20),
    [sym_note_construct] = STATE(61),
    [sym__chord_cstrct] = STATE(61),
    [sym_note] = STATE(96),
    [sym__pitch] = STATE(79),
    [sym_multimeasure_rest] = STATE(20),
    [sym_grace_note] = STATE(71),
    [sym_chord_symbol] = STATE(118),
    [sym_decoration] = STATE(131),
    [sym_nth_ending_barline] = STATE(28),
    [sym_generic_bar_line] = STATE(20),
    [sym_first_repeat_bar] = STATE(28),
    [sym_second_repeat_bar] = STATE(28),
    [sym_lyric_line] = STATE(135),
    [sym_lyric_section] = STATE(167),
    [sym_symbol] = STATE(20),
    [aux_sym_note_construct_repeat1] = STATE(71),
    [aux_sym_lyric_section_repeat1] = STATE(135),
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
    [aux_sym_nth_ending_barline_token1] = ACTIONS(204),
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
    [aux_sym_nth_ending_barline_token1] = ACTIONS(204),
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
    [aux_sym_nth_ending_number_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym__NL] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(218),
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
    [anon_sym_COMMA] = ACTIONS(218),
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
    [aux_sym_nth_ending_number_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(221),
    [sym__NL] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(198),
    [sym_COMMENT] = ACTIONS(223),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(221),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(223),
    [aux_sym__music_content_token1] = ACTIONS(223),
    [sym_slur_open] = ACTIONS(223),
    [sym_slur_close] = ACTIONS(221),
    [anon_sym_LBRACK] = ACTIONS(223),
    [sym_alteration] = ACTIONS(221),
    [sym_note_letter] = ACTIONS(221),
    [sym_rest] = ACTIONS(221),
    [anon_sym_Z] = ACTIONS(221),
    [anon_sym_X] = ACTIONS(223),
    [aux_sym_grace_note_token1] = ACTIONS(221),
    [aux_sym_chord_symbol_token1] = ACTIONS(223),
    [sym_annotation] = ACTIONS(221),
    [sym_tuplet_marker] = ACTIONS(221),
    [sym_decoration_shorthand] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(198),
    [sym_bar_line] = ACTIONS(223),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(221),
    [sym_thin_double_bar_line] = ACTIONS(221),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(221),
    [sym_start_of_repeated_section] = ACTIONS(221),
    [sym_end_of_repeated_section] = ACTIONS(221),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(221),
    [anon_sym_BANGtrill_BANG] = ACTIONS(221),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(221),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(221),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(221),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(221),
    [anon_sym_BANGmordent_BANG] = ACTIONS(221),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(221),
    [anon_sym_BANGroll_BANG] = ACTIONS(221),
    [anon_sym_BANGturn_BANG] = ACTIONS(221),
    [anon_sym_BANGturnx_BANG] = ACTIONS(221),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(221),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(221),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(221),
    [anon_sym_BANG_GT_BANG] = ACTIONS(221),
    [anon_sym_BANGaccent_BANG] = ACTIONS(221),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(221),
    [anon_sym_BANGfermata_BANG] = ACTIONS(221),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(221),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(221),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(221),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(221),
    [anon_sym_BANGplus_BANG] = ACTIONS(221),
    [anon_sym_BANGsnap_BANG] = ACTIONS(221),
    [anon_sym_BANGslide_BANG] = ACTIONS(221),
    [anon_sym_BANGwedge_BANG] = ACTIONS(221),
    [anon_sym_BANGupbow_BANG] = ACTIONS(221),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(221),
    [anon_sym_BANGopen_BANG] = ACTIONS(221),
    [anon_sym_BANGthumb_BANG] = ACTIONS(221),
    [anon_sym_BANGbreath_BANG] = ACTIONS(221),
    [anon_sym_BANGpppp_BANG] = ACTIONS(221),
    [anon_sym_BANGppp_BANG] = ACTIONS(221),
    [anon_sym_BANGpp_BANG] = ACTIONS(221),
    [anon_sym_BANGp_BANG] = ACTIONS(221),
    [anon_sym_BANGmp_BANG] = ACTIONS(221),
    [anon_sym_BANGmf_BANG] = ACTIONS(221),
    [anon_sym_BANGf_BANG] = ACTIONS(221),
    [anon_sym_BANGff_BANG] = ACTIONS(221),
    [anon_sym_BANGfff_BANG] = ACTIONS(221),
    [anon_sym_BANGffff_BANG] = ACTIONS(221),
    [anon_sym_BANGsfz_BANG] = ACTIONS(221),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(221),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(221),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(221),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(221),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(221),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(221),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(221),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(221),
    [anon_sym_BANGsegno_BANG] = ACTIONS(221),
    [anon_sym_BANGcoda_BANG] = ACTIONS(221),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(221),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(221),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(221),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(221),
    [anon_sym_BANGfine_BANG] = ACTIONS(221),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(221),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(221),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(221),
    [sym_parts_line] = ACTIONS(221),
    [sym_instruction] = ACTIONS(221),
    [sym_key] = ACTIONS(221),
    [sym_macros] = ACTIONS(221),
    [sym_meter] = ACTIONS(221),
    [sym_notes] = ACTIONS(221),
    [anon_sym_X_COLON] = ACTIONS(221),
    [sym_remark] = ACTIONS(221),
    [sym_rhythm_line] = ACTIONS(221),
    [anon_sym_s_COLON] = ACTIONS(221),
    [sym_tempo] = ACTIONS(221),
    [sym_tune_title] = ACTIONS(221),
    [sym_unit_note_length] = ACTIONS(221),
    [anon_sym_U_COLON] = ACTIONS(221),
    [sym_voice] = ACTIONS(221),
    [anon_sym_w_COLON] = ACTIONS(221),
    [sym_words_postbody] = ACTIONS(221),
  },
  [17] = {
    [ts_builtin_sym_end] = ACTIONS(214),
    [sym__NL] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(214),
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
    [anon_sym_COMMA] = ACTIONS(214),
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
  [18] = {
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
    [aux_sym_nth_ending_barline_token1] = ACTIONS(204),
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
  [29] = {
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
  [30] = {
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
    [sym_nth_ending_barline] = STATE(48),
    [sym_generic_bar_line] = STATE(35),
    [sym_first_repeat_bar] = STATE(48),
    [sym_second_repeat_bar] = STATE(48),
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
    [sym_nth_ending_barline] = STATE(48),
    [sym_generic_bar_line] = STATE(35),
    [sym_first_repeat_bar] = STATE(48),
    [sym_second_repeat_bar] = STATE(48),
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
    [sym_nth_ending_barline] = STATE(48),
    [sym_generic_bar_line] = STATE(34),
    [sym_first_repeat_bar] = STATE(48),
    [sym_second_repeat_bar] = STATE(48),
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
    [aux_sym_nth_ending_number_repeat1] = STATE(40),
    [sym_noCommentText] = ACTIONS(196),
    [sym_note_skip] = ACTIONS(196),
    [anon_sym_DASH] = ACTIONS(332),
    [aux_sym_chord_symbol_token1] = ACTIONS(196),
    [sym_annotation] = ACTIONS(196),
    [anon_sym_COMMA] = ACTIONS(332),
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
  [38] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(38),
    [sym_noCommentText] = ACTIONS(216),
    [sym_note_skip] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(334),
    [aux_sym_chord_symbol_token1] = ACTIONS(216),
    [sym_annotation] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(334),
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
    [aux_sym_chord_symbol_token1] = ACTIONS(202),
    [sym_annotation] = ACTIONS(202),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(337),
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
    [aux_sym_nth_ending_number_repeat1] = STATE(38),
    [sym_noCommentText] = ACTIONS(223),
    [sym_note_skip] = ACTIONS(223),
    [anon_sym_DASH] = ACTIONS(332),
    [aux_sym_chord_symbol_token1] = ACTIONS(223),
    [sym_annotation] = ACTIONS(223),
    [anon_sym_COMMA] = ACTIONS(332),
    [sym_bar_line] = ACTIONS(223),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(223),
    [sym_thin_double_bar_line] = ACTIONS(223),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(223),
    [sym_start_of_repeated_section] = ACTIONS(223),
    [sym_end_of_repeated_section] = ACTIONS(223),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(223),
    [anon_sym_BANGtrill_BANG] = ACTIONS(223),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(223),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(223),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(223),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(223),
    [anon_sym_BANGmordent_BANG] = ACTIONS(223),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(223),
    [anon_sym_BANGroll_BANG] = ACTIONS(223),
    [anon_sym_BANGturn_BANG] = ACTIONS(223),
    [anon_sym_BANGturnx_BANG] = ACTIONS(223),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(223),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(223),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(223),
    [anon_sym_BANG_GT_BANG] = ACTIONS(223),
    [anon_sym_BANGaccent_BANG] = ACTIONS(223),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(223),
    [anon_sym_BANGfermata_BANG] = ACTIONS(223),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(223),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(223),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(223),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(223),
    [anon_sym_BANGplus_BANG] = ACTIONS(223),
    [anon_sym_BANGsnap_BANG] = ACTIONS(223),
    [anon_sym_BANGslide_BANG] = ACTIONS(223),
    [anon_sym_BANGwedge_BANG] = ACTIONS(223),
    [anon_sym_BANGupbow_BANG] = ACTIONS(223),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(223),
    [anon_sym_BANGopen_BANG] = ACTIONS(223),
    [anon_sym_BANGthumb_BANG] = ACTIONS(223),
    [anon_sym_BANGbreath_BANG] = ACTIONS(223),
    [anon_sym_BANGpppp_BANG] = ACTIONS(223),
    [anon_sym_BANGppp_BANG] = ACTIONS(223),
    [anon_sym_BANGpp_BANG] = ACTIONS(223),
    [anon_sym_BANGp_BANG] = ACTIONS(223),
    [anon_sym_BANGmp_BANG] = ACTIONS(223),
    [anon_sym_BANGmf_BANG] = ACTIONS(223),
    [anon_sym_BANGf_BANG] = ACTIONS(223),
    [anon_sym_BANGff_BANG] = ACTIONS(223),
    [anon_sym_BANGfff_BANG] = ACTIONS(223),
    [anon_sym_BANGffff_BANG] = ACTIONS(223),
    [anon_sym_BANGsfz_BANG] = ACTIONS(223),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(223),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(223),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(223),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(223),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(223),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(223),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(223),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(223),
    [anon_sym_BANGsegno_BANG] = ACTIONS(223),
    [anon_sym_BANGcoda_BANG] = ACTIONS(223),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(223),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(223),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(223),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(223),
    [anon_sym_BANGfine_BANG] = ACTIONS(223),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(223),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(223),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(223),
  },
  [41] = {
    [sym_noCommentText] = ACTIONS(202),
    [sym_note_skip] = ACTIONS(202),
    [aux_sym_chord_symbol_token1] = ACTIONS(202),
    [sym_annotation] = ACTIONS(202),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(337),
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
    [sym_noCommentText] = ACTIONS(216),
    [sym_note_skip] = ACTIONS(216),
    [anon_sym_DASH] = ACTIONS(216),
    [aux_sym_chord_symbol_token1] = ACTIONS(216),
    [sym_annotation] = ACTIONS(216),
    [anon_sym_COMMA] = ACTIONS(216),
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
  [43] = {
    [sym_noCommentText] = ACTIONS(202),
    [sym_note_skip] = ACTIONS(202),
    [aux_sym_chord_symbol_token1] = ACTIONS(202),
    [sym_annotation] = ACTIONS(202),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(337),
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
  [45] = {
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
  [46] = {
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
  [47] = {
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
  [48] = {
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
  [49] = {
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
  [50] = {
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
  [51] = {
    [sym_noCommentText] = ACTIONS(269),
    [sym_note_skip] = ACTIONS(269),
    [aux_sym_chord_symbol_token1] = ACTIONS(269),
    [sym_annotation] = ACTIONS(269),
    [sym_bar_line] = ACTIONS(269),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(269),
    [sym_thin_double_bar_line] = ACTIONS(269),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(269),
    [sym_start_of_repeated_section] = ACTIONS(269),
    [sym_end_of_repeated_section] = ACTIONS(269),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(269),
    [anon_sym_BANGtrill_BANG] = ACTIONS(269),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(269),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(269),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(269),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(269),
    [anon_sym_BANGmordent_BANG] = ACTIONS(269),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(269),
    [anon_sym_BANGroll_BANG] = ACTIONS(269),
    [anon_sym_BANGturn_BANG] = ACTIONS(269),
    [anon_sym_BANGturnx_BANG] = ACTIONS(269),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(269),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(269),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(269),
    [anon_sym_BANG_GT_BANG] = ACTIONS(269),
    [anon_sym_BANGaccent_BANG] = ACTIONS(269),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(269),
    [anon_sym_BANGfermata_BANG] = ACTIONS(269),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(269),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(269),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(269),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(269),
    [anon_sym_BANGplus_BANG] = ACTIONS(269),
    [anon_sym_BANGsnap_BANG] = ACTIONS(269),
    [anon_sym_BANGslide_BANG] = ACTIONS(269),
    [anon_sym_BANGwedge_BANG] = ACTIONS(269),
    [anon_sym_BANGupbow_BANG] = ACTIONS(269),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(269),
    [anon_sym_BANGopen_BANG] = ACTIONS(269),
    [anon_sym_BANGthumb_BANG] = ACTIONS(269),
    [anon_sym_BANGbreath_BANG] = ACTIONS(269),
    [anon_sym_BANGpppp_BANG] = ACTIONS(269),
    [anon_sym_BANGppp_BANG] = ACTIONS(269),
    [anon_sym_BANGpp_BANG] = ACTIONS(269),
    [anon_sym_BANGp_BANG] = ACTIONS(269),
    [anon_sym_BANGmp_BANG] = ACTIONS(269),
    [anon_sym_BANGmf_BANG] = ACTIONS(269),
    [anon_sym_BANGf_BANG] = ACTIONS(269),
    [anon_sym_BANGff_BANG] = ACTIONS(269),
    [anon_sym_BANGfff_BANG] = ACTIONS(269),
    [anon_sym_BANGffff_BANG] = ACTIONS(269),
    [anon_sym_BANGsfz_BANG] = ACTIONS(269),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(269),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(269),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(269),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(269),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(269),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(269),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(269),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(269),
    [anon_sym_BANGsegno_BANG] = ACTIONS(269),
    [anon_sym_BANGcoda_BANG] = ACTIONS(269),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(269),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(269),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(269),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(269),
    [anon_sym_BANGfine_BANG] = ACTIONS(269),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(269),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(269),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(269),
  },
  [52] = {
    [sym_noCommentText] = ACTIONS(241),
    [sym_note_skip] = ACTIONS(241),
    [aux_sym_chord_symbol_token1] = ACTIONS(241),
    [sym_annotation] = ACTIONS(241),
    [sym_bar_line] = ACTIONS(241),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(241),
    [sym_thin_double_bar_line] = ACTIONS(241),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(241),
    [sym_start_of_repeated_section] = ACTIONS(241),
    [sym_end_of_repeated_section] = ACTIONS(241),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(241),
    [anon_sym_BANGtrill_BANG] = ACTIONS(241),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(241),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(241),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(241),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(241),
    [anon_sym_BANGmordent_BANG] = ACTIONS(241),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(241),
    [anon_sym_BANGroll_BANG] = ACTIONS(241),
    [anon_sym_BANGturn_BANG] = ACTIONS(241),
    [anon_sym_BANGturnx_BANG] = ACTIONS(241),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(241),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(241),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(241),
    [anon_sym_BANG_GT_BANG] = ACTIONS(241),
    [anon_sym_BANGaccent_BANG] = ACTIONS(241),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(241),
    [anon_sym_BANGfermata_BANG] = ACTIONS(241),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(241),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(241),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(241),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(241),
    [anon_sym_BANGplus_BANG] = ACTIONS(241),
    [anon_sym_BANGsnap_BANG] = ACTIONS(241),
    [anon_sym_BANGslide_BANG] = ACTIONS(241),
    [anon_sym_BANGwedge_BANG] = ACTIONS(241),
    [anon_sym_BANGupbow_BANG] = ACTIONS(241),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(241),
    [anon_sym_BANGopen_BANG] = ACTIONS(241),
    [anon_sym_BANGthumb_BANG] = ACTIONS(241),
    [anon_sym_BANGbreath_BANG] = ACTIONS(241),
    [anon_sym_BANGpppp_BANG] = ACTIONS(241),
    [anon_sym_BANGppp_BANG] = ACTIONS(241),
    [anon_sym_BANGpp_BANG] = ACTIONS(241),
    [anon_sym_BANGp_BANG] = ACTIONS(241),
    [anon_sym_BANGmp_BANG] = ACTIONS(241),
    [anon_sym_BANGmf_BANG] = ACTIONS(241),
    [anon_sym_BANGf_BANG] = ACTIONS(241),
    [anon_sym_BANGff_BANG] = ACTIONS(241),
    [anon_sym_BANGfff_BANG] = ACTIONS(241),
    [anon_sym_BANGffff_BANG] = ACTIONS(241),
    [anon_sym_BANGsfz_BANG] = ACTIONS(241),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(241),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(241),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(241),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(241),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(241),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(241),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(241),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(241),
    [anon_sym_BANGsegno_BANG] = ACTIONS(241),
    [anon_sym_BANGcoda_BANG] = ACTIONS(241),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(241),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(241),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(241),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(241),
    [anon_sym_BANGfine_BANG] = ACTIONS(241),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(241),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(241),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(241),
  },
  [53] = {
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
  [54] = {
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(197), 1,
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
    ACTIONS(357), 1,
      sym_COMMENT,
    ACTIONS(360), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(363), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(369), 1,
      anon_sym_X_COLON,
    ACTIONS(371), 1,
      anon_sym_U_COLON,
    STATE(56), 1,
      aux_sym_file_header_repeat1,
    STATE(174), 2,
      sym_stylesheet_directives,
      sym_file_header_info_line,
    STATE(207), 2,
      sym_abc_version,
      sym_user_defined,
    ACTIONS(366), 17,
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
    ACTIONS(3), 1,
      sym_COMMENT,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(7), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(13), 1,
      anon_sym_U_COLON,
    ACTIONS(374), 1,
      anon_sym_X_COLON,
    STATE(56), 1,
      aux_sym_file_header_repeat1,
    STATE(174), 2,
      sym_stylesheet_directives,
      sym_file_header_info_line,
    STATE(207), 2,
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
    ACTIONS(369), 20,
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
    ACTIONS(387), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(389), 1,
      aux_sym__MUSIC_CODE_token1,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      aux_sym_chord_symbol_token1,
    STATE(79), 1,
      sym__pitch,
    STATE(96), 1,
      sym_note,
    STATE(118), 1,
      sym_chord_symbol,
    STATE(131), 1,
      sym_decoration,
    STATE(71), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(62), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [278] = 16,
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
    ACTIONS(387), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(395), 1,
      aux_sym__MUSIC_CODE_token1,
    STATE(79), 1,
      sym__pitch,
    STATE(96), 1,
      sym_note,
    STATE(118), 1,
      sym_chord_symbol,
    STATE(131), 1,
      sym_decoration,
    STATE(71), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(60), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [331] = 16,
    ACTIONS(397), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(400), 1,
      aux_sym__MUSIC_CODE_token1,
    ACTIONS(402), 1,
      anon_sym_LBRACK,
    ACTIONS(405), 1,
      sym_alteration,
    ACTIONS(408), 1,
      sym_note_letter,
    ACTIONS(411), 1,
      sym_rest,
    ACTIONS(414), 1,
      aux_sym_grace_note_token1,
    ACTIONS(417), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(420), 1,
      sym_tuplet_marker,
    ACTIONS(423), 1,
      sym_decoration_shorthand,
    STATE(79), 1,
      sym__pitch,
    STATE(96), 1,
      sym_note,
    STATE(118), 1,
      sym_chord_symbol,
    STATE(131), 1,
      sym_decoration,
    STATE(71), 2,
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
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      aux_sym_chord_symbol_token1,
    STATE(79), 1,
      sym__pitch,
    STATE(96), 1,
      sym_note,
    STATE(118), 1,
      sym_chord_symbol,
    STATE(131), 1,
      sym_decoration,
    STATE(71), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(104), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [430] = 14,
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
    ACTIONS(391), 1,
      anon_sym_LBRACK,
    ACTIONS(393), 1,
      aux_sym_chord_symbol_token1,
    STATE(79), 1,
      sym__pitch,
    STATE(96), 1,
      sym_note,
    STATE(118), 1,
      sym_chord_symbol,
    STATE(131), 1,
      sym_decoration,
    STATE(71), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(196), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [476] = 3,
    ACTIONS(428), 1,
      sym_octave,
    STATE(65), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(426), 14,
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
    ACTIONS(433), 1,
      sym_octave,
    STATE(65), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(431), 14,
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
    ACTIONS(437), 1,
      sym_octave,
    STATE(68), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(435), 14,
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
    ACTIONS(433), 1,
      sym_octave,
    STATE(65), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(439), 14,
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
    ACTIONS(441), 1,
      sym_octave,
    STATE(66), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(439), 14,
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
  [591] = 7,
    ACTIONS(447), 1,
      anon_sym_DASH,
    ACTIONS(449), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(451), 1,
      aux_sym_verse_number_token1,
    ACTIONS(443), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(72), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(115), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(445), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [620] = 13,
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
    ACTIONS(393), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    ACTIONS(455), 1,
      sym_tuplet_marker,
    STATE(79), 1,
      sym__pitch,
    STATE(98), 1,
      sym_note,
    STATE(113), 1,
      sym_chord_symbol,
    STATE(134), 1,
      sym_decoration,
    STATE(101), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [661] = 7,
    ACTIONS(462), 1,
      anon_sym_DASH,
    ACTIONS(465), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(468), 1,
      aux_sym_verse_number_token1,
    ACTIONS(457), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(72), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(115), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(459), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [690] = 11,
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
    ACTIONS(471), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__pitch,
    STATE(142), 1,
      sym_note,
    STATE(147), 1,
      sym_decoration,
    STATE(75), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(108), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [726] = 11,
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
    ACTIONS(473), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__pitch,
    STATE(142), 1,
      sym_note,
    STATE(147), 1,
      sym_decoration,
    STATE(75), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(108), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [762] = 11,
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
    STATE(79), 1,
      sym__pitch,
    STATE(142), 1,
      sym_note,
    STATE(147), 1,
      sym_decoration,
    STATE(75), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(108), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [798] = 11,
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
    ACTIONS(492), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__pitch,
    STATE(142), 1,
      sym_note,
    STATE(147), 1,
      sym_decoration,
    STATE(75), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(108), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [834] = 11,
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
    ACTIONS(494), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__pitch,
    STATE(142), 1,
      sym_note,
    STATE(147), 1,
      sym_decoration,
    STATE(75), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(108), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [870] = 8,
    ACTIONS(496), 1,
      sym__NL,
    ACTIONS(501), 1,
      anon_sym_DASH,
    ACTIONS(504), 1,
      sym_UNDERSCORE,
    ACTIONS(507), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(510), 1,
      aux_sym_verse_number_token1,
    STATE(78), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(498), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(120), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [900] = 2,
    ACTIONS(515), 1,
      sym_rhythm,
    ACTIONS(513), 12,
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
  [918] = 8,
    ACTIONS(517), 1,
      sym__NL,
    ACTIONS(521), 1,
      anon_sym_DASH,
    ACTIONS(523), 1,
      sym_UNDERSCORE,
    ACTIONS(525), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(527), 1,
      aux_sym_verse_number_token1,
    STATE(78), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(519), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(120), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [948] = 11,
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
    ACTIONS(529), 1,
      anon_sym_RBRACK,
    STATE(79), 1,
      sym__pitch,
    STATE(142), 1,
      sym_note,
    STATE(147), 1,
      sym_decoration,
    STATE(75), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(108), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [984] = 10,
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
    STATE(79), 1,
      sym__pitch,
    STATE(142), 1,
      sym_note,
    STATE(147), 1,
      sym_decoration,
    STATE(81), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(108), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1017] = 7,
    ACTIONS(445), 1,
      sym_UNDERSCORE,
    ACTIONS(449), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(451), 1,
      aux_sym_verse_number_token1,
    ACTIONS(533), 1,
      anon_sym_DASH,
    STATE(70), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(531), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(115), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1044] = 1,
    ACTIONS(535), 12,
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
  [1059] = 10,
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
    STATE(79), 1,
      sym__pitch,
    STATE(142), 1,
      sym_note,
    STATE(147), 1,
      sym_decoration,
    STATE(74), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(108), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1092] = 7,
    ACTIONS(521), 1,
      anon_sym_DASH,
    ACTIONS(523), 1,
      sym_UNDERSCORE,
    ACTIONS(525), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(527), 1,
      aux_sym_verse_number_token1,
    STATE(80), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(519), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(120), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1119] = 10,
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
    STATE(79), 1,
      sym__pitch,
    STATE(142), 1,
      sym_note,
    STATE(147), 1,
      sym_decoration,
    STATE(73), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(108), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1152] = 10,
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
    STATE(79), 1,
      sym__pitch,
    STATE(142), 1,
      sym_note,
    STATE(147), 1,
      sym_decoration,
    STATE(76), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(108), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1185] = 10,
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
    STATE(79), 1,
      sym__pitch,
    STATE(142), 1,
      sym_note,
    STATE(147), 1,
      sym_decoration,
    STATE(77), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(108), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1218] = 2,
    ACTIONS(539), 1,
      sym_rhythm,
    ACTIONS(537), 10,
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
  [1234] = 2,
    ACTIONS(543), 1,
      aux_sym_note_construct_token1,
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
  [1250] = 2,
    ACTIONS(547), 1,
      aux_sym_note_construct_token1,
    ACTIONS(545), 10,
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
  [1266] = 2,
    ACTIONS(551), 1,
      sym_rhythm,
    ACTIONS(549), 10,
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
  [1282] = 2,
    ACTIONS(555), 1,
      sym_rhythm,
    ACTIONS(553), 10,
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
  [1298] = 2,
    ACTIONS(559), 1,
      sym_rhythm,
    ACTIONS(557), 10,
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
  [1314] = 2,
    ACTIONS(563), 1,
      aux_sym_note_construct_token1,
    ACTIONS(561), 10,
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
  [1330] = 2,
    ACTIONS(567), 1,
      aux_sym_note_construct_token1,
    ACTIONS(565), 10,
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
  [1346] = 2,
    ACTIONS(571), 1,
      aux_sym_note_construct_token1,
    ACTIONS(569), 10,
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
  [1362] = 2,
    ACTIONS(575), 1,
      sym_rhythm,
    ACTIONS(573), 10,
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
  [1378] = 1,
    ACTIONS(537), 10,
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
  [1391] = 3,
    ACTIONS(579), 1,
      aux_sym_grace_note_token1,
    STATE(101), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(577), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1408] = 1,
    ACTIONS(553), 10,
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
  [1421] = 1,
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
  [1434] = 1,
    ACTIONS(400), 10,
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
  [1447] = 1,
    ACTIONS(573), 10,
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
  [1460] = 1,
    ACTIONS(545), 10,
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
  [1473] = 1,
    ACTIONS(569), 10,
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
  [1486] = 9,
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
    STATE(79), 1,
      sym__pitch,
    STATE(139), 1,
      sym_note,
    STATE(148), 1,
      sym_decoration,
    STATE(101), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1515] = 1,
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
  [1528] = 1,
    ACTIONS(549), 10,
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
  [1541] = 1,
    ACTIONS(565), 10,
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
  [1554] = 1,
    ACTIONS(584), 10,
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
  [1567] = 9,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(586), 1,
      anon_sym_LBRACK,
    ACTIONS(588), 1,
      sym_tuplet_marker,
    STATE(79), 1,
      sym__pitch,
    STATE(91), 1,
      sym_note,
    STATE(138), 1,
      sym_decoration,
  [1595] = 1,
    ACTIONS(590), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1607] = 1,
    ACTIONS(592), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1619] = 1,
    ACTIONS(594), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1631] = 1,
    ACTIONS(596), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1643] = 9,
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
    STATE(79), 1,
      sym__pitch,
    STATE(98), 1,
      sym_note,
    STATE(134), 1,
      sym_decoration,
  [1671] = 2,
    ACTIONS(590), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(598), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [1684] = 2,
    ACTIONS(592), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(600), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [1697] = 1,
    ACTIONS(602), 8,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1708] = 2,
    ACTIONS(596), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(604), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [1721] = 8,
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
    STATE(79), 1,
      sym__pitch,
    STATE(98), 1,
      sym_note,
    STATE(134), 1,
      sym_decoration,
  [1746] = 8,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(606), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym__pitch,
    STATE(97), 1,
      sym_note,
    STATE(133), 1,
      sym_decoration,
  [1771] = 5,
    ACTIONS(192), 1,
      sym_words_postbody,
    STATE(128), 1,
      aux_sym_file_structure_repeat1,
    STATE(157), 1,
      sym_lyric_section,
    STATE(135), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(608), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [1790] = 8,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(586), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym__pitch,
    STATE(91), 1,
      sym_note,
    STATE(138), 1,
      sym_decoration,
  [1815] = 2,
    ACTIONS(594), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(610), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [1828] = 5,
    ACTIONS(192), 1,
      sym_words_postbody,
    STATE(58), 1,
      aux_sym_file_structure_repeat1,
    STATE(160), 1,
      sym_lyric_section,
    STATE(135), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(612), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [1847] = 1,
    ACTIONS(614), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1856] = 1,
    ACTIONS(616), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1865] = 6,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(453), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym__pitch,
    STATE(98), 1,
      sym_note,
  [1884] = 3,
    ACTIONS(620), 1,
      sym_words_postbody,
    STATE(132), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(618), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [1897] = 6,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(623), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym__pitch,
    STATE(92), 1,
      sym_note,
  [1916] = 6,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(586), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym__pitch,
    STATE(91), 1,
      sym_note,
  [1935] = 3,
    ACTIONS(192), 1,
      sym_words_postbody,
    STATE(132), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(625), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [1948] = 6,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    ACTIONS(627), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(144), 1,
      aux_sym_file_structure_repeat2,
    STATE(153), 1,
      sym_tune,
  [1967] = 1,
    ACTIONS(629), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1976] = 6,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    ACTIONS(606), 1,
      anon_sym_LBRACK,
    STATE(79), 1,
      sym__pitch,
    STATE(97), 1,
      sym_note,
  [1995] = 1,
    ACTIONS(631), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2004] = 1,
    ACTIONS(633), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2013] = 1,
    ACTIONS(635), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2022] = 1,
    ACTIONS(637), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2031] = 6,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    ACTIONS(639), 1,
      ts_builtin_sym_end,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(144), 1,
      aux_sym_file_structure_repeat2,
    STATE(153), 1,
      sym_tune,
  [2050] = 6,
    ACTIONS(641), 1,
      ts_builtin_sym_end,
    ACTIONS(643), 1,
      anon_sym_X_COLON,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(144), 1,
      aux_sym_file_structure_repeat2,
    STATE(153), 1,
      sym_tune,
  [2069] = 4,
    ACTIONS(646), 1,
      sym_alteration,
    ACTIONS(649), 1,
      sym_note_letter,
    ACTIONS(652), 1,
      aux_sym_grace_note_token2,
    STATE(145), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [2083] = 4,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(654), 1,
      aux_sym_grace_note_token2,
    STATE(145), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [2097] = 5,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    STATE(79), 1,
      sym__pitch,
    STATE(139), 1,
      sym_note,
  [2113] = 5,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    ACTIONS(35), 1,
      sym_rest,
    STATE(79), 1,
      sym__pitch,
    STATE(140), 1,
      sym_note,
  [2129] = 5,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    STATE(7), 1,
      sym_reference_number_line,
    STATE(11), 1,
      sym_tune_header,
    STATE(136), 1,
      aux_sym_file_structure_repeat2,
    STATE(153), 1,
      sym_tune,
  [2145] = 3,
    ACTIONS(383), 1,
      sym__NL,
    STATE(58), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(641), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [2156] = 2,
    ACTIONS(656), 1,
      sym_alteration,
    ACTIONS(658), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [2165] = 1,
    ACTIONS(660), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [2172] = 3,
    ACTIONS(664), 1,
      sym__NL,
    STATE(150), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(662), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [2183] = 3,
    ACTIONS(31), 1,
      sym_alteration,
    ACTIONS(33), 1,
      sym_note_letter,
    STATE(146), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [2194] = 1,
    ACTIONS(666), 4,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
      sym_words_postbody,
  [2201] = 3,
    ACTIONS(668), 1,
      sym_noCommentText,
    ACTIONS(670), 1,
      aux_sym_words_line_token1,
    STATE(158), 1,
      aux_sym_words_line_repeat2,
  [2211] = 1,
    ACTIONS(612), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2217] = 3,
    ACTIONS(672), 1,
      sym_noCommentText,
    ACTIONS(674), 1,
      aux_sym_words_line_token1,
    STATE(158), 1,
      aux_sym_words_line_repeat2,
  [2227] = 3,
    ACTIONS(677), 1,
      sym_noCommentText,
    ACTIONS(679), 1,
      anon_sym_DOT,
    STATE(159), 1,
      aux_sym_abc_version_repeat1,
  [2237] = 1,
    ACTIONS(682), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2243] = 3,
    ACTIONS(684), 1,
      sym_noCommentText,
    ACTIONS(686), 1,
      anon_sym_DOT,
    STATE(166), 1,
      aux_sym_abc_version_repeat1,
  [2253] = 3,
    ACTIONS(688), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(690), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(692), 1,
      sym_chord_type,
  [2263] = 3,
    ACTIONS(670), 1,
      aux_sym_words_line_token1,
    ACTIONS(694), 1,
      sym_noCommentText,
    STATE(156), 1,
      aux_sym_words_line_repeat2,
  [2273] = 3,
    ACTIONS(696), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(698), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(700), 1,
      sym_chord_type,
  [2283] = 1,
    ACTIONS(702), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [2289] = 3,
    ACTIONS(686), 1,
      anon_sym_DOT,
    ACTIONS(704), 1,
      sym_noCommentText,
    STATE(159), 1,
      aux_sym_abc_version_repeat1,
  [2299] = 1,
    ACTIONS(608), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2305] = 2,
    ACTIONS(706), 1,
      sym_note_letter,
    STATE(214), 1,
      sym_chord_symbol_note,
  [2312] = 2,
    ACTIONS(706), 1,
      sym_note_letter,
    STATE(220), 1,
      sym_chord_symbol_note,
  [2319] = 2,
    ACTIONS(708), 1,
      sym__NL,
    ACTIONS(710), 1,
      sym_COMMENT,
  [2326] = 2,
    ACTIONS(712), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(714), 1,
      aux_sym_chord_symbol_token2,
  [2333] = 2,
    ACTIONS(706), 1,
      sym_note_letter,
    STATE(190), 1,
      sym_chord_symbol_note,
  [2340] = 2,
    ACTIONS(716), 1,
      sym_note_letter,
    STATE(162), 1,
      sym_chord_symbol_note,
  [2347] = 2,
    ACTIONS(718), 1,
      sym__NL,
    STATE(59), 1,
      aux_sym_file_structure_repeat1,
  [2354] = 1,
    ACTIONS(720), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [2359] = 2,
    ACTIONS(722), 1,
      anon_sym_LBRACK,
    STATE(53), 1,
      sym_nth_ending_number,
  [2366] = 2,
    ACTIONS(724), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(726), 1,
      aux_sym_chord_symbol_token2,
  [2373] = 2,
    ACTIONS(716), 1,
      sym_note_letter,
    STATE(164), 1,
      sym_chord_symbol_note,
  [2380] = 1,
    ACTIONS(677), 2,
      sym_noCommentText,
      anon_sym_DOT,
  [2385] = 2,
    ACTIONS(728), 1,
      sym__NL,
    ACTIONS(730), 1,
      sym_COMMENT,
  [2392] = 2,
    ACTIONS(706), 1,
      sym_note_letter,
    STATE(219), 1,
      sym_chord_symbol_note,
  [2399] = 2,
    ACTIONS(732), 1,
      sym__NL,
    ACTIONS(734), 1,
      sym_COMMENT,
  [2406] = 2,
    ACTIONS(658), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(736), 1,
      sym_alteration,
  [2413] = 2,
    ACTIONS(738), 1,
      anon_sym_LBRACK,
    STATE(25), 1,
      sym_nth_ending_number,
  [2420] = 1,
    ACTIONS(740), 1,
      anon_sym_EQ,
  [2424] = 1,
    ACTIONS(742), 1,
      aux_sym_nth_ending_number_token1,
  [2428] = 1,
    ACTIONS(744), 1,
      anon_sym_LBRACK,
  [2432] = 1,
    ACTIONS(746), 1,
      sym_note_letter,
  [2436] = 1,
    ACTIONS(748), 1,
      anon_sym_LBRACK,
  [2440] = 1,
    ACTIONS(750), 1,
      aux_sym_chord_symbol_token1,
  [2444] = 1,
    ACTIONS(752), 1,
      aux_sym_lyric_line_token1,
  [2448] = 1,
    ACTIONS(754), 1,
      sym__NL,
  [2452] = 1,
    ACTIONS(756), 1,
      sym_noCommentText,
  [2456] = 1,
    ACTIONS(271), 1,
      sym__NL,
  [2460] = 1,
    ACTIONS(758), 1,
      sym__NL,
  [2464] = 1,
    ACTIONS(760), 1,
      aux_sym__MUSIC_CODE_token1,
  [2468] = 1,
    ACTIONS(762), 1,
      sym_noCommentText,
  [2472] = 1,
    ACTIONS(764), 1,
      sym__NL,
  [2476] = 1,
    ACTIONS(766), 1,
      aux_sym_nth_ending_number_token1,
  [2480] = 1,
    ACTIONS(768), 1,
      aux_sym_first_repeat_bar_token2,
  [2484] = 1,
    ACTIONS(770), 1,
      ts_builtin_sym_end,
  [2488] = 1,
    ACTIONS(772), 1,
      ts_builtin_sym_end,
  [2492] = 1,
    ACTIONS(774), 1,
      aux_sym_nth_ending_number_token1,
  [2496] = 1,
    ACTIONS(776), 1,
      sym_noCommentText,
  [2500] = 1,
    ACTIONS(778), 1,
      aux_sym_multimeasure_rest_token1,
  [2504] = 1,
    ACTIONS(780), 1,
      sym__NL,
  [2508] = 1,
    ACTIONS(782), 1,
      sym_noCommentText,
  [2512] = 1,
    ACTIONS(784), 1,
      aux_sym_nth_ending_number_token1,
  [2516] = 1,
    ACTIONS(786), 1,
      sym_noCommentText,
  [2520] = 1,
    ACTIONS(259), 1,
      sym_noCommentText,
  [2524] = 1,
    ACTIONS(788), 1,
      sym_noCommentText,
  [2528] = 1,
    ACTIONS(790), 1,
      aux_sym_nth_ending_number_token1,
  [2532] = 1,
    ACTIONS(792), 1,
      aux_sym_first_repeat_bar_token2,
  [2536] = 1,
    ACTIONS(794), 1,
      aux_sym_chord_symbol_token1,
  [2540] = 1,
    ACTIONS(796), 1,
      aux_sym_nth_ending_number_token1,
  [2544] = 1,
    ACTIONS(798), 1,
      aux_sym_first_repeat_bar_token2,
  [2548] = 1,
    ACTIONS(800), 1,
      aux_sym_first_repeat_bar_token2,
  [2552] = 1,
    ACTIONS(802), 1,
      anon_sym_DOT,
  [2556] = 1,
    ACTIONS(804), 1,
      aux_sym_chord_symbol_token1,
  [2560] = 1,
    ACTIONS(806), 1,
      aux_sym_chord_symbol_token1,
  [2564] = 1,
    ACTIONS(808), 1,
      aux_sym_nth_ending_number_token1,
  [2568] = 1,
    ACTIONS(810), 1,
      anon_sym_DOT,
  [2572] = 1,
    ACTIONS(812), 1,
      anon_sym_LBRACK,
  [2576] = 1,
    ACTIONS(814), 1,
      anon_sym_LBRACK,
  [2580] = 1,
    ACTIONS(816), 1,
      sym__NL,
  [2584] = 1,
    ACTIONS(818), 1,
      aux_sym_lyric_line_token1,
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
  [SMALL_STATE(71)] = 620,
  [SMALL_STATE(72)] = 661,
  [SMALL_STATE(73)] = 690,
  [SMALL_STATE(74)] = 726,
  [SMALL_STATE(75)] = 762,
  [SMALL_STATE(76)] = 798,
  [SMALL_STATE(77)] = 834,
  [SMALL_STATE(78)] = 870,
  [SMALL_STATE(79)] = 900,
  [SMALL_STATE(80)] = 918,
  [SMALL_STATE(81)] = 948,
  [SMALL_STATE(82)] = 984,
  [SMALL_STATE(83)] = 1017,
  [SMALL_STATE(84)] = 1044,
  [SMALL_STATE(85)] = 1059,
  [SMALL_STATE(86)] = 1092,
  [SMALL_STATE(87)] = 1119,
  [SMALL_STATE(88)] = 1152,
  [SMALL_STATE(89)] = 1185,
  [SMALL_STATE(90)] = 1218,
  [SMALL_STATE(91)] = 1234,
  [SMALL_STATE(92)] = 1250,
  [SMALL_STATE(93)] = 1266,
  [SMALL_STATE(94)] = 1282,
  [SMALL_STATE(95)] = 1298,
  [SMALL_STATE(96)] = 1314,
  [SMALL_STATE(97)] = 1330,
  [SMALL_STATE(98)] = 1346,
  [SMALL_STATE(99)] = 1362,
  [SMALL_STATE(100)] = 1378,
  [SMALL_STATE(101)] = 1391,
  [SMALL_STATE(102)] = 1408,
  [SMALL_STATE(103)] = 1421,
  [SMALL_STATE(104)] = 1434,
  [SMALL_STATE(105)] = 1447,
  [SMALL_STATE(106)] = 1460,
  [SMALL_STATE(107)] = 1473,
  [SMALL_STATE(108)] = 1486,
  [SMALL_STATE(109)] = 1515,
  [SMALL_STATE(110)] = 1528,
  [SMALL_STATE(111)] = 1541,
  [SMALL_STATE(112)] = 1554,
  [SMALL_STATE(113)] = 1567,
  [SMALL_STATE(114)] = 1595,
  [SMALL_STATE(115)] = 1607,
  [SMALL_STATE(116)] = 1619,
  [SMALL_STATE(117)] = 1631,
  [SMALL_STATE(118)] = 1643,
  [SMALL_STATE(119)] = 1671,
  [SMALL_STATE(120)] = 1684,
  [SMALL_STATE(121)] = 1697,
  [SMALL_STATE(122)] = 1708,
  [SMALL_STATE(123)] = 1721,
  [SMALL_STATE(124)] = 1746,
  [SMALL_STATE(125)] = 1771,
  [SMALL_STATE(126)] = 1790,
  [SMALL_STATE(127)] = 1815,
  [SMALL_STATE(128)] = 1828,
  [SMALL_STATE(129)] = 1847,
  [SMALL_STATE(130)] = 1856,
  [SMALL_STATE(131)] = 1865,
  [SMALL_STATE(132)] = 1884,
  [SMALL_STATE(133)] = 1897,
  [SMALL_STATE(134)] = 1916,
  [SMALL_STATE(135)] = 1935,
  [SMALL_STATE(136)] = 1948,
  [SMALL_STATE(137)] = 1967,
  [SMALL_STATE(138)] = 1976,
  [SMALL_STATE(139)] = 1995,
  [SMALL_STATE(140)] = 2004,
  [SMALL_STATE(141)] = 2013,
  [SMALL_STATE(142)] = 2022,
  [SMALL_STATE(143)] = 2031,
  [SMALL_STATE(144)] = 2050,
  [SMALL_STATE(145)] = 2069,
  [SMALL_STATE(146)] = 2083,
  [SMALL_STATE(147)] = 2097,
  [SMALL_STATE(148)] = 2113,
  [SMALL_STATE(149)] = 2129,
  [SMALL_STATE(150)] = 2145,
  [SMALL_STATE(151)] = 2156,
  [SMALL_STATE(152)] = 2165,
  [SMALL_STATE(153)] = 2172,
  [SMALL_STATE(154)] = 2183,
  [SMALL_STATE(155)] = 2194,
  [SMALL_STATE(156)] = 2201,
  [SMALL_STATE(157)] = 2211,
  [SMALL_STATE(158)] = 2217,
  [SMALL_STATE(159)] = 2227,
  [SMALL_STATE(160)] = 2237,
  [SMALL_STATE(161)] = 2243,
  [SMALL_STATE(162)] = 2253,
  [SMALL_STATE(163)] = 2263,
  [SMALL_STATE(164)] = 2273,
  [SMALL_STATE(165)] = 2283,
  [SMALL_STATE(166)] = 2289,
  [SMALL_STATE(167)] = 2299,
  [SMALL_STATE(168)] = 2305,
  [SMALL_STATE(169)] = 2312,
  [SMALL_STATE(170)] = 2319,
  [SMALL_STATE(171)] = 2326,
  [SMALL_STATE(172)] = 2333,
  [SMALL_STATE(173)] = 2340,
  [SMALL_STATE(174)] = 2347,
  [SMALL_STATE(175)] = 2354,
  [SMALL_STATE(176)] = 2359,
  [SMALL_STATE(177)] = 2366,
  [SMALL_STATE(178)] = 2373,
  [SMALL_STATE(179)] = 2380,
  [SMALL_STATE(180)] = 2385,
  [SMALL_STATE(181)] = 2392,
  [SMALL_STATE(182)] = 2399,
  [SMALL_STATE(183)] = 2406,
  [SMALL_STATE(184)] = 2413,
  [SMALL_STATE(185)] = 2420,
  [SMALL_STATE(186)] = 2424,
  [SMALL_STATE(187)] = 2428,
  [SMALL_STATE(188)] = 2432,
  [SMALL_STATE(189)] = 2436,
  [SMALL_STATE(190)] = 2440,
  [SMALL_STATE(191)] = 2444,
  [SMALL_STATE(192)] = 2448,
  [SMALL_STATE(193)] = 2452,
  [SMALL_STATE(194)] = 2456,
  [SMALL_STATE(195)] = 2460,
  [SMALL_STATE(196)] = 2464,
  [SMALL_STATE(197)] = 2468,
  [SMALL_STATE(198)] = 2472,
  [SMALL_STATE(199)] = 2476,
  [SMALL_STATE(200)] = 2480,
  [SMALL_STATE(201)] = 2484,
  [SMALL_STATE(202)] = 2488,
  [SMALL_STATE(203)] = 2492,
  [SMALL_STATE(204)] = 2496,
  [SMALL_STATE(205)] = 2500,
  [SMALL_STATE(206)] = 2504,
  [SMALL_STATE(207)] = 2508,
  [SMALL_STATE(208)] = 2512,
  [SMALL_STATE(209)] = 2516,
  [SMALL_STATE(210)] = 2520,
  [SMALL_STATE(211)] = 2524,
  [SMALL_STATE(212)] = 2528,
  [SMALL_STATE(213)] = 2532,
  [SMALL_STATE(214)] = 2536,
  [SMALL_STATE(215)] = 2540,
  [SMALL_STATE(216)] = 2544,
  [SMALL_STATE(217)] = 2548,
  [SMALL_STATE(218)] = 2552,
  [SMALL_STATE(219)] = 2556,
  [SMALL_STATE(220)] = 2560,
  [SMALL_STATE(221)] = 2564,
  [SMALL_STATE(222)] = 2568,
  [SMALL_STATE(223)] = 2572,
  [SMALL_STATE(224)] = 2576,
  [SMALL_STATE(225)] = 2580,
  [SMALL_STATE(226)] = 2584,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(208),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(175),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [25] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(89),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(205),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [47] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(14),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [57] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [69] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(3),
  [72] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(211),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(64),
  [78] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(20),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(20),
  [84] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(89),
  [87] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(188),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(67),
  [93] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(79),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(205),
  [99] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(205),
  [102] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(154),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(173),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(123),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(152),
  [114] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(14),
  [117] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(18),
  [120] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(28),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(13),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(27),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(193),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(36),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(175),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(86),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 1),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 1),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [151] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(225),
  [154] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(204),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(208),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(36),
  [163] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(175),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 2),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 2),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 1),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 1),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 4),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 4),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 5),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 5),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune, 1),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_bar_line, 1),
  [202] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_bar_line, 1),
  [204] = {.entry = {.count = 1, .reusable = false}}, SHIFT(184),
  [206] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(189),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(212),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 3),
  [223] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 3),
  [225] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 3),
  [227] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 3),
  [229] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1),
  [231] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1),
  [233] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [235] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [237] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 2),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 2),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 2),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 2),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 2),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 2),
  [251] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_barline, 3),
  [253] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_barline, 3),
  [255] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 3),
  [257] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 3),
  [259] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [261] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [263] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 4),
  [265] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 4),
  [267] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 4),
  [269] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 4),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet_directives, 2),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stylesheet_directives, 2),
  [275] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 2),
  [277] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 2),
  [279] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_info_line, 2, .production_id = 1),
  [281] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_info_line, 2, .production_id = 1),
  [283] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_line, 2),
  [285] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [287] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [289] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
  [291] = {.entry = {.count = 1, .reusable = false}}, SHIFT(43),
  [293] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [295] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [299] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2),
  [301] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(35),
  [304] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(178),
  [307] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(39),
  [310] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(43),
  [313] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(48),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(41),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(44),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [332] = {.entry = {.count = 1, .reusable = false}}, SHIFT(221),
  [334] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(221),
  [337] = {.entry = {.count = 1, .reusable = false}}, SHIFT(176),
  [339] = {.entry = {.count = 1, .reusable = false}}, SHIFT(223),
  [341] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [343] = {.entry = {.count = 1, .reusable = false}}, SHIFT(224),
  [345] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 3),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 6),
  [351] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 5),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [357] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(174),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(209),
  [363] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(208),
  [366] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(207),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [371] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(175),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2),
  [378] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2), SHIFT_REPEAT(58),
  [381] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_structure_repeat1, 2),
  [383] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [389] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [395] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [397] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(63),
  [400] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [402] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(89),
  [405] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(188),
  [408] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(67),
  [411] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(79),
  [414] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(154),
  [417] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(173),
  [420] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(123),
  [423] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(152),
  [426] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [428] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(65),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 3),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 1),
  [437] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 2),
  [441] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [447] = {.entry = {.count = 1, .reusable = false}}, SHIFT(114),
  [449] = {.entry = {.count = 1, .reusable = false}}, SHIFT(116),
  [451] = {.entry = {.count = 1, .reusable = false}}, SHIFT(218),
  [453] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [455] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [459] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(115),
  [462] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(114),
  [465] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(116),
  [468] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(218),
  [471] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [473] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [475] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2),
  [477] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(188),
  [480] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(67),
  [483] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(79),
  [486] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(154),
  [489] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(152),
  [492] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [494] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [496] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [498] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(120),
  [501] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(119),
  [504] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(120),
  [507] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(127),
  [510] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(222),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [523] = {.entry = {.count = 1, .reusable = false}}, SHIFT(120),
  [525] = {.entry = {.count = 1, .reusable = false}}, SHIFT(127),
  [527] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [529] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [535] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [537] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 5),
  [539] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [541] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [545] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [549] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 4),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [553] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 7),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [557] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 3),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [565] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [567] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [569] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [571] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [573] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 6),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [577] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [579] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(154),
  [582] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 8),
  [584] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 6),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [590] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HYPHEN, 1),
  [592] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_text, 1),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_syllable, 1),
  [596] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse_number, 2),
  [598] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HYPHEN, 1),
  [600] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_text, 1),
  [602] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [604] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse_number, 2),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [608] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 2),
  [610] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_syllable, 1),
  [612] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 3),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [618] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2),
  [620] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2), SHIFT_REPEAT(226),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_section, 1),
  [627] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [631] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [633] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [635] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [637] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [639] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 1),
  [641] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 2),
  [643] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 2), SHIFT_REPEAT(186),
  [646] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(188),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(67),
  [652] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [654] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [656] = {.entry = {.count = 1, .reusable = false}}, SHIFT(165),
  [658] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [660] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [662] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 1),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [666] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_line, 3),
  [668] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 4),
  [670] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [672] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [674] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2), SHIFT_REPEAT(83),
  [677] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2),
  [679] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(203),
  [682] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 4),
  [684] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 2),
  [686] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 3),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [700] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [704] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 3),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [724] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [726] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [728] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 2, .production_id = 1),
  [730] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [732] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 2, .production_id = 1),
  [734] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [736] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [738] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(191),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [746] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [754] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined, 4),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 3, .production_id = 1),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [772] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [780] = {.entry = {.count = 1, .reusable = true}}, SHIFT(155),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
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
