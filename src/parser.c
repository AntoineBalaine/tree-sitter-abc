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
#define STATE_COUNT 274
#define LARGE_STATE_COUNT 84
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
  [66] = 19,
  [67] = 20,
  [68] = 21,
  [69] = 22,
  [70] = 23,
  [71] = 26,
  [72] = 45,
  [73] = 59,
  [74] = 56,
  [75] = 58,
  [76] = 76,
  [77] = 77,
  [78] = 57,
  [79] = 79,
  [80] = 52,
  [81] = 50,
  [82] = 51,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 90,
  [91] = 91,
  [92] = 14,
  [93] = 17,
  [94] = 16,
  [95] = 15,
  [96] = 13,
  [97] = 97,
  [98] = 98,
  [99] = 97,
  [100] = 100,
  [101] = 101,
  [102] = 98,
  [103] = 103,
  [104] = 103,
  [105] = 105,
  [106] = 101,
  [107] = 24,
  [108] = 108,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 108,
  [113] = 105,
  [114] = 111,
  [115] = 115,
  [116] = 116,
  [117] = 115,
  [118] = 118,
  [119] = 119,
  [120] = 120,
  [121] = 118,
  [122] = 116,
  [123] = 123,
  [124] = 120,
  [125] = 125,
  [126] = 123,
  [127] = 33,
  [128] = 30,
  [129] = 35,
  [130] = 29,
  [131] = 28,
  [132] = 31,
  [133] = 34,
  [134] = 25,
  [135] = 32,
  [136] = 27,
  [137] = 36,
  [138] = 37,
  [139] = 47,
  [140] = 40,
  [141] = 39,
  [142] = 41,
  [143] = 38,
  [144] = 48,
  [145] = 145,
  [146] = 42,
  [147] = 147,
  [148] = 43,
  [149] = 46,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 153,
  [154] = 150,
  [155] = 152,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 159,
  [160] = 156,
  [161] = 157,
  [162] = 151,
  [163] = 163,
  [164] = 164,
  [165] = 165,
  [166] = 166,
  [167] = 163,
  [168] = 159,
  [169] = 164,
  [170] = 153,
  [171] = 171,
  [172] = 77,
  [173] = 79,
  [174] = 76,
  [175] = 175,
  [176] = 176,
  [177] = 177,
  [178] = 178,
  [179] = 179,
  [180] = 83,
  [181] = 181,
  [182] = 182,
  [183] = 171,
  [184] = 184,
  [185] = 185,
  [186] = 184,
  [187] = 187,
  [188] = 188,
  [189] = 185,
  [190] = 178,
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
  [211] = 211,
  [212] = 207,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 199,
  [217] = 217,
  [218] = 218,
  [219] = 219,
  [220] = 218,
  [221] = 221,
  [222] = 215,
  [223] = 223,
  [224] = 224,
  [225] = 221,
  [226] = 226,
  [227] = 217,
  [228] = 226,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 232,
  [233] = 233,
  [234] = 234,
  [235] = 235,
  [236] = 60,
  [237] = 237,
  [238] = 238,
  [239] = 239,
  [240] = 240,
  [241] = 241,
  [242] = 242,
  [243] = 243,
  [244] = 244,
  [245] = 245,
  [246] = 56,
  [247] = 245,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 249,
  [255] = 240,
  [256] = 239,
  [257] = 238,
  [258] = 233,
  [259] = 259,
  [260] = 251,
  [261] = 232,
  [262] = 262,
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 248,
  [270] = 270,
  [271] = 271,
  [272] = 268,
  [273] = 267,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (eof) ADVANCE(304);
      if (lookahead == '\n') ADVANCE(307);
      if (lookahead == ' ') ADVANCE(305);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '%') ADVANCE(581);
      if (lookahead == '\'') ADVANCE(607);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == '+') ADVANCE(569);
      if (lookahead == ',') ADVANCE(670);
      if (lookahead == '-') ADVANCE(573);
      if (lookahead == '.') ADVANCE(691);
      if (lookahead == '/') ADVANCE(615);
      if (lookahead == '0') ADVANCE(613);
      if (lookahead == ':') ADVANCE(570);
      if (lookahead == '=') ADVANCE(842);
      if (lookahead == 'A') ADVANCE(601);
      if (lookahead == 'B') ADVANCE(602);
      if (lookahead == 'C') ADVANCE(603);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'F') ADVANCE(605);
      if (lookahead == 'G') ADVANCE(606);
      if (lookahead == 'H') ADVANCE(658);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'K') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(660);
      if (lookahead == 'M') ADVANCE(661);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(662);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == 'Q') ADVANCE(97);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(665);
      if (lookahead == 'U') ADVANCE(100);
      if (lookahead == 'V') ADVANCE(101);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == 'X') ADVANCE(611);
      if (lookahead == 'Z') ADVANCE(610);
      if (lookahead == '[') ADVANCE(595);
      if (lookahead == '\\') ADVANCE(568);
      if (lookahead == ']') ADVANCE(596);
      if (lookahead == '^') ADVANCE(598);
      if (lookahead == '_') ADVANCE(575);
      if (lookahead == '`') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(837);
      if (lookahead == 'r') ADVANCE(838);
      if (lookahead == 's') ADVANCE(839);
      if (lookahead == 'w') ADVANCE(840);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == '|') ADVANCE(673);
      if (lookahead == '}') ADVANCE(621);
      if (lookahead == '~') ADVANCE(578);
      if ((9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(597);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(589);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(617);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(608);
      if (lookahead == 'u' ||
          lookahead == 'v') ADVANCE(657);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(600);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(612);
      if (('h' <= lookahead && lookahead <= 't')) ADVANCE(836);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead == '!') ADVANCE(377);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '%') ADVANCE(587);
      if (lookahead == '*') ADVANCE(572);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '[') ADVANCE(564);
      if (lookahead == '|') ADVANCE(674);
      if (lookahead != 0) ADVANCE(567);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead == '"') ADVANCE(622);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == '-') ADVANCE(573);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '_') ADVANCE(577);
      if (lookahead == '|') ADVANCE(672);
      if (lookahead == '~') ADVANCE(578);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(690);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(733);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(719);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(765);
      if (lookahead == 'e') ADVANCE(250);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(218);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(759);
      if (lookahead == 'l') ADVANCE(283);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(127);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(777);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(781);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(785);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(789);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(767);
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(763);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(761);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(757);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(769);
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(755);
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(773);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(797);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(795);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(793);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(771);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(803);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(747);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(735);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(753);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(707);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(737);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(709);
      if (lookahead == 'x') ADVANCE(37);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(82);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(791);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(739);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(749);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(693);
      if (lookahead == '(') ADVANCE(45);
      if (lookahead == ')') ADVANCE(46);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(711);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(743);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(741);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(721);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(751);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(801);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(799);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(729);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(695);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(697);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(731);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(745);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(725);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(703);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(717);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(723);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(775);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(779);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(809);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(783);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(787);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(805);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(713);
      if (lookahead == 'x') ADVANCE(64);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(699);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(807);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(705);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(701);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(715);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(727);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(377);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '*') ADVANCE(572);
      if (lookahead == ',') ADVANCE(671);
      if (lookahead == '-') ADVANCE(574);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '[') ADVANCE(564);
      if (lookahead == '|') ADVANCE(674);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(622);
      if (lookahead == '(') ADVANCE(296);
      if (lookahead == '-') ADVANCE(593);
      if (lookahead == '/') ADVANCE(615);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(597);
      if (lookahead == '[') ADVANCE(594);
      if (lookahead == ']') ADVANCE(596);
      if (lookahead == '^') ADVANCE(598);
      if (lookahead == '_') ADVANCE(599);
      if (lookahead == '`') ADVANCE(580);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == '}') ADVANCE(621);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(607);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(617);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(589);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(616);
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
          lookahead == '~') ADVANCE(657);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(600);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(622);
      if (lookahead == '/') ADVANCE(624);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(656);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(597);
      if (lookahead == '^') ADVANCE(598);
      if (lookahead == '_') ADVANCE(629);
      if (lookahead == 'a') ADVANCE(654);
      if (lookahead == 'd') ADVANCE(638);
      if (lookahead == 'm') ADVANCE(630);
      if (lookahead == 's') ADVANCE(655);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(656);
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
      if (lookahead == '*') ADVANCE(572);
      if (lookahead == '+') ADVANCE(383);
      if (lookahead == '-') ADVANCE(574);
      if (lookahead == '_') ADVANCE(576);
      if (lookahead == '|') ADVANCE(675);
      if (lookahead == '~') ADVANCE(579);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(566);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 74:
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == 'D') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(134);
      if (lookahead == 'b') ADVANCE(248);
      if (lookahead == 'c') ADVANCE(225);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(202);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'l') ADVANCE(226);
      if (lookahead == 'm') ADVANCE(151);
      if (lookahead == 'o') ADVANCE(242);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(227);
      if (lookahead == 's') ADVANCE(149);
      if (lookahead == 't') ADVANCE(152);
      if (lookahead == 'u') ADVANCE(239);
      if (lookahead == 'w') ADVANCE(153);
      END_STATE();
    case 75:
      if (lookahead == '+') ADVANCE(383);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(113);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(692);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
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
      if (lookahead == ':') ADVANCE(686);
      if (lookahead == '|') ADVANCE(684);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(813);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(814);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(815);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(816);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(817);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(818);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(819);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(820);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(821);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(834);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(823);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(824);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(825);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(831);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(828);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(829);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(835);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(843);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(846);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(826);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(832);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(822);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(827);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(830);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(844);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(298);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(298);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 111:
      if (lookahead == ':') ADVANCE(110);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 112:
      if (lookahead == ':') ADVANCE(109);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(112);
      END_STATE();
    case 113:
      if (lookahead == 'C') ADVANCE(80);
      if (lookahead == 'S') ADVANCE(81);
      END_STATE();
    case 114:
      if (lookahead == 'H') ADVANCE(76);
      if (('h' <= lookahead && lookahead <= 'w')) ADVANCE(836);
      END_STATE();
    case 115:
      if (lookahead == 'W') ADVANCE(841);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(135);
      if (lookahead == 'i') ADVANCE(203);
      if (lookahead == 'o') ADVANCE(290);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(265);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(244);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(245);
      if (lookahead == 'o') ADVANCE(143);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(43);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(49);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(65);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(195);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(281);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 131:
      if (lookahead == 'b') ADVANCE(228);
      if (lookahead == 'p') ADVANCE(174);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(235);
      END_STATE();
    case 134:
      if (lookahead == 'c') ADVANCE(136);
      if (lookahead == 'r') ADVANCE(243);
      END_STATE();
    case 135:
      if (lookahead == 'c') ADVANCE(121);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(159);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(161);
      END_STATE();
    case 138:
      if (lookahead == 'd') ADVANCE(175);
      END_STATE();
    case 139:
      if (lookahead == 'd') ADVANCE(180);
      END_STATE();
    case 140:
      if (lookahead == 'd') ADVANCE(123);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(186);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(234);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(163);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(169);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(171);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(236);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(178);
      if (lookahead == 'f') ADVANCE(293);
      if (lookahead == 'h') ADVANCE(229);
      if (lookahead == 'l') ADVANCE(187);
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(141);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(251);
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(214);
      if (lookahead == 'h') ADVANCE(285);
      if (lookahead == 'r') ADVANCE(190);
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(139);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(176);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(253);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(138);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(215);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(257);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(39);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(55);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(222);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(223);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(264);
      END_STATE();
    case 175:
      if (lookahead == 'f') ADVANCE(173);
      if (lookahead == 't') ADVANCE(287);
      END_STATE();
    case 176:
      if (lookahead == 'g') ADVANCE(177);
      END_STATE();
    case 177:
      if (lookahead == 'g') ADVANCE(192);
      END_STATE();
    case 178:
      if (lookahead == 'g') ADVANCE(216);
      END_STATE();
    case 179:
      if (lookahead == 'g') ADVANCE(241);
      END_STATE();
    case 180:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 181:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 182:
      if (lookahead == 'h') ADVANCE(255);
      END_STATE();
    case 183:
      if (lookahead == 'h') ADVANCE(41);
      END_STATE();
    case 184:
      if (lookahead == 'h') ADVANCE(260);
      END_STATE();
    case 185:
      if (lookahead == 'h') ADVANCE(262);
      END_STATE();
    case 186:
      if (lookahead == 'i') ADVANCE(286);
      END_STATE();
    case 187:
      if (lookahead == 'i') ADVANCE(144);
      END_STATE();
    case 188:
      if (lookahead == 'i') ADVANCE(267);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(217);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(196);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(197);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(233);
      END_STATE();
    case 193:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 194:
      if (lookahead == 'l') ADVANCE(200);
      END_STATE();
    case 195:
      if (lookahead == 'l') ADVANCE(198);
      END_STATE();
    case 196:
      if (lookahead == 'l') ADVANCE(193);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(199);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(273);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 201:
      if (lookahead == 'm') ADVANCE(132);
      END_STATE();
    case 202:
      if (lookahead == 'm') ADVANCE(240);
      END_STATE();
    case 203:
      if (lookahead == 'm') ADVANCE(189);
      END_STATE();
    case 204:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 205:
      if (lookahead == 'm') ADVANCE(122);
      END_STATE();
    case 206:
      if (lookahead == 'm') ADVANCE(129);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(238);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(247);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(289);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(133);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(179);
      if (lookahead == 'w') ADVANCE(168);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(59);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(274);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(230);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(288);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(162);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(142);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(275);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(148);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(140);
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(212);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(194);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(291);
      END_STATE();
    case 229:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 230:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(42);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(51);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(292);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(261);
      END_STATE();
    case 239:
      if (lookahead == 'p') ADVANCE(131);
      END_STATE();
    case 240:
      if (lookahead == 'p') ADVANCE(181);
      END_STATE();
    case 241:
      if (lookahead == 'p') ADVANCE(182);
      END_STATE();
    case 242:
      if (lookahead == 'p') ADVANCE(156);
      END_STATE();
    case 243:
      if (lookahead == 'p') ADVANCE(155);
      END_STATE();
    case 244:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(231);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(154);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(282);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(205);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(145);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(204);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(278);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(120);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(62);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(146);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(147);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(206);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(207);
      END_STATE();
    case 265:
      if (lookahead == 's') ADVANCE(188);
      END_STATE();
    case 266:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 267:
      if (lookahead == 's') ADVANCE(52);
      END_STATE();
    case 268:
      if (lookahead == 's') ADVANCE(165);
      END_STATE();
    case 269:
      if (lookahead == 's') ADVANCE(166);
      END_STATE();
    case 270:
      if (lookahead == 's') ADVANCE(167);
      END_STATE();
    case 271:
      if (lookahead == 's') ADVANCE(137);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(183);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(258);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(40);
      END_STATE();
    case 275:
      if (lookahead == 't') ADVANCE(50);
      END_STATE();
    case 276:
      if (lookahead == 't') ADVANCE(60);
      END_STATE();
    case 277:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 278:
      if (lookahead == 't') ADVANCE(158);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(232);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 283:
      if (lookahead == 'u') ADVANCE(266);
      END_STATE();
    case 284:
      if (lookahead == 'u') ADVANCE(280);
      END_STATE();
    case 285:
      if (lookahead == 'u') ADVANCE(201);
      END_STATE();
    case 286:
      if (lookahead == 'u') ADVANCE(208);
      END_STATE();
    case 287:
      if (lookahead == 'u') ADVANCE(256);
      END_STATE();
    case 288:
      if (lookahead == 'u') ADVANCE(172);
      END_STATE();
    case 289:
      if (lookahead == 'v') ADVANCE(157);
      END_STATE();
    case 290:
      if (lookahead == 'w') ADVANCE(210);
      END_STATE();
    case 291:
      if (lookahead == 'w') ADVANCE(38);
      END_STATE();
    case 292:
      if (lookahead == 'w') ADVANCE(48);
      END_STATE();
    case 293:
      if (lookahead == 'z') ADVANCE(20);
      END_STATE();
    case 294:
      if (lookahead == '|') ADVANCE(680);
      END_STATE();
    case 295:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 296:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      END_STATE();
    case 297:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 298:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      END_STATE();
    case 299:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') ADVANCE(307);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '%') ADVANCE(582);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == ',') ADVANCE(670);
      if (lookahead == '-') ADVANCE(573);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(597);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'K') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(660);
      if (lookahead == 'M') ADVANCE(661);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == 'Q') ADVANCE(97);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(665);
      if (lookahead == 'U') ADVANCE(100);
      if (lookahead == 'V') ADVANCE(101);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == 'X') ADVANCE(611);
      if (lookahead == 'Z') ADVANCE(609);
      if (lookahead == '[') ADVANCE(595);
      if (lookahead == '^') ADVANCE(598);
      if (lookahead == '_') ADVANCE(599);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == '|') ADVANCE(673);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(589);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(657);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(600);
      END_STATE();
    case 300:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') ADVANCE(307);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '%') ADVANCE(582);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == '-') ADVANCE(593);
      if (lookahead == '/') ADVANCE(615);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(597);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'K') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(660);
      if (lookahead == 'M') ADVANCE(661);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == 'Q') ADVANCE(97);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(665);
      if (lookahead == 'U') ADVANCE(100);
      if (lookahead == 'V') ADVANCE(101);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == 'X') ADVANCE(611);
      if (lookahead == 'Z') ADVANCE(609);
      if (lookahead == '[') ADVANCE(595);
      if (lookahead == '^') ADVANCE(598);
      if (lookahead == '_') ADVANCE(599);
      if (lookahead == '`') ADVANCE(580);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == '|') ADVANCE(673);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(607);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(617);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(589);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(657);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(616);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(600);
      END_STATE();
    case 301:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') ADVANCE(306);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '%') ADVANCE(581);
      if (lookahead == '*') ADVANCE(571);
      if (lookahead == '.') ADVANCE(691);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=') ADVANCE(842);
      if (lookahead == 'A') ADVANCE(84);
      if (lookahead == 'B') ADVANCE(85);
      if (lookahead == 'C') ADVANCE(86);
      if (lookahead == 'D') ADVANCE(87);
      if (lookahead == 'F') ADVANCE(88);
      if (lookahead == 'G') ADVANCE(89);
      if (lookahead == 'H') ADVANCE(90);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'L') ADVANCE(93);
      if (lookahead == 'M') ADVANCE(94);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(96);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(99);
      if (lookahead == 'U') ADVANCE(100);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == 'X') ADVANCE(103);
      if (lookahead == 'Z') ADVANCE(104);
      if (lookahead == '[') ADVANCE(294);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '|') ADVANCE(673);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(669);
      END_STATE();
    case 302:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '%') ADVANCE(582);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(597);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'K') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(660);
      if (lookahead == 'M') ADVANCE(661);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == 'Q') ADVANCE(97);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(665);
      if (lookahead == 'U') ADVANCE(100);
      if (lookahead == 'V') ADVANCE(101);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == 'X') ADVANCE(611);
      if (lookahead == 'Z') ADVANCE(609);
      if (lookahead == '[') ADVANCE(595);
      if (lookahead == ']') ADVANCE(596);
      if (lookahead == '^') ADVANCE(598);
      if (lookahead == '_') ADVANCE(599);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == '|') ADVANCE(673);
      if (lookahead == '}') ADVANCE(621);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(590);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(600);
      END_STATE();
    case 303:
      if (eof) ADVANCE(304);
      if (lookahead == '\n') ADVANCE(308);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '%') ADVANCE(584);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(597);
      if (lookahead == 'A') ADVANCE(601);
      if (lookahead == 'B') ADVANCE(602);
      if (lookahead == 'C') ADVANCE(603);
      if (lookahead == 'D') ADVANCE(604);
      if (lookahead == 'F') ADVANCE(605);
      if (lookahead == 'G') ADVANCE(606);
      if (lookahead == 'H') ADVANCE(659);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'K') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(660);
      if (lookahead == 'M') ADVANCE(661);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == 'O') ADVANCE(662);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == 'Q') ADVANCE(97);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'S') ADVANCE(664);
      if (lookahead == 'T') ADVANCE(665);
      if (lookahead == 'U') ADVANCE(100);
      if (lookahead == 'V') ADVANCE(101);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == 'X') ADVANCE(611);
      if (lookahead == 'Z') ADVANCE(610);
      if (lookahead == '[') ADVANCE(595);
      if (lookahead == '^') ADVANCE(598);
      if (lookahead == '_') ADVANCE(599);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == '|') ADVANCE(673);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(590);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(657);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(600);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym__space);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(589);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym__NL);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym__NL);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(589);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym__NL);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(590);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ' ') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ' ') ADVANCE(339);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(734);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(720);
      if (lookahead == '(') ADVANCE(319);
      if (lookahead == ')') ADVANCE(320);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(766);
      if (lookahead == 'e') ADVANCE(520);
      if (lookahead == 'f') ADVANCE(321);
      if (lookahead == 'i') ADVANCE(488);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(760);
      if (lookahead == 'l') ADVANCE(553);
      if (lookahead == 'p') ADVANCE(324);
      if (lookahead == 'r') ADVANCE(397);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(778);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(782);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(786);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(790);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(768);
      if (lookahead == 'f') ADVANCE(325);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(764);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(762);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(758);
      if (lookahead == 'p') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(770);
      if (lookahead == 'f') ADVANCE(331);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(756);
      if (lookahead == 'p') ADVANCE(335);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(774);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(798);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(796);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(794);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(772);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(804);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(748);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(736);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(754);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(708);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(738);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(710);
      if (lookahead == 'x') ADVANCE(344);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(382);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(792);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(740);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(750);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(694);
      if (lookahead == '(') ADVANCE(352);
      if (lookahead == ')') ADVANCE(353);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(712);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(744);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(742);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(722);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(752);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(802);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(800);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(730);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(696);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(698);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(732);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(746);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(726);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(704);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(718);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(724);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(776);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(780);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(810);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(784);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(788);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(806);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(714);
      if (lookahead == 'x') ADVANCE(371);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(700);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(808);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(706);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(702);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(716);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '!') ADVANCE(728);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '"') ADVANCE(567);
      if (lookahead == '%') ADVANCE(67);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(317);
      if (lookahead == ')') ADVANCE(318);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(360);
      if (lookahead == ')') ADVANCE(361);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '(') ADVANCE(363);
      if (lookahead == ')') ADVANCE(364);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '+') ADVANCE(312);
      if (lookahead == '0') ADVANCE(313);
      if (lookahead == '<') ADVANCE(374);
      if (lookahead == '>') ADVANCE(314);
      if (lookahead == 'D') ADVANCE(379);
      if (lookahead == 'a') ADVANCE(404);
      if (lookahead == 'b') ADVANCE(518);
      if (lookahead == 'c') ADVANCE(495);
      if (lookahead == 'd') ADVANCE(387);
      if (lookahead == 'e') ADVANCE(472);
      if (lookahead == 'f') ADVANCE(315);
      if (lookahead == 'i') ADVANCE(479);
      if (lookahead == 'l') ADVANCE(496);
      if (lookahead == 'm') ADVANCE(421);
      if (lookahead == 'o') ADVANCE(512);
      if (lookahead == 'p') ADVANCE(316);
      if (lookahead == 'r') ADVANCE(497);
      if (lookahead == 's') ADVANCE(419);
      if (lookahead == 't') ADVANCE(422);
      if (lookahead == 'u') ADVANCE(509);
      if (lookahead == 'w') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '-') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(385);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '.') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '5') ADVANCE(354);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ':') ADVANCE(567);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == ':') ADVANCE(687);
      if (lookahead == '|') ADVANCE(685);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'C') ADVANCE(380);
      if (lookahead == 'S') ADVANCE(381);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(542);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(405);
      if (lookahead == 'i') ADVANCE(473);
      if (lookahead == 'o') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(535);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(514);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(538);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(515);
      if (lookahead == 'o') ADVANCE(413);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(549);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(330);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(350);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(356);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(372);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(465);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(539);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'a') ADVANCE(540);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(498);
      if (lookahead == 'p') ADVANCE(444);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(342);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'b') ADVANCE(505);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(406);
      if (lookahead == 'r') ADVANCE(513);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(391);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'c') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(445);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(450);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(393);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(456);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(504);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(394);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(433);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(439);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(440);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'd') ADVANCE(506);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(448);
      if (lookahead == 'f') ADVANCE(563);
      if (lookahead == 'h') ADVANCE(499);
      if (lookahead == 'l') ADVANCE(457);
      if (lookahead == 'n') ADVANCE(389);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(541);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(411);
      if (lookahead == 'f') ADVANCE(322);
      if (lookahead == 'o') ADVANCE(521);
      if (lookahead == 'p') ADVANCE(323);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(484);
      if (lookahead == 'h') ADVANCE(555);
      if (lookahead == 'r') ADVANCE(460);
      if (lookahead == 'u') ADVANCE(524);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(386);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(490);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(523);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(408);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(485);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(527);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(489);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(341);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(346);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(362);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(365);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(368);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(522);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(491);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(492);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(493);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(494);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'e') ADVANCE(534);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'f') ADVANCE(443);
      if (lookahead == 't') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(462);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(486);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'g') ADVANCE(434);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(388);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(525);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(348);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'h') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(556);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(414);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(537);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(487);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(466);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(467);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'i') ADVANCE(503);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(343);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(470);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(468);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(463);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(469);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(543);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(430);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'l') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(402);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(510);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(459);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(507);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(392);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(399);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(508);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'm') ADVANCE(517);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(338);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(449);
      if (lookahead == 'w') ADVANCE(438);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(366);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(554);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(544);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(500);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(432);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(412);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(546);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(547);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'n') ADVANCE(418);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(410);
      if (lookahead == 'r') ADVANCE(420);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(482);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(464);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(519);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(340);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(349);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(358);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(375);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(562);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(376);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(529);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'o') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(401);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(451);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(452);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(426);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(425);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(337);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(501);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(454);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'p') ADVANCE(455);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(424);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(552);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(475);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(474);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(548);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(481);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(390);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(483);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(369);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(461);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(398);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(417);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(400);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(476);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'r') ADVANCE(477);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(458);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(359);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(437);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 's') ADVANCE(407);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(453);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(528);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(347);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(357);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(367);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(428);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(395);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(502);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(396);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 't') ADVANCE(516);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(536);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(550);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(471);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(478);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'u') ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'v') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(480);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(345);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'w') ADVANCE(355);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == 'z') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead == '|') ADVANCE(681);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(sym_noCommentText);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(sym_noCommentText);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(sym_noCommentText);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 568:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 569:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == ':') ADVANCE(845);
      END_STATE();
    case 570:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(686);
      if (lookahead == '|') ADVANCE(684);
      END_STATE();
    case 571:
      ACCEPT_TOKEN(sym_note_skip);
      END_STATE();
    case 572:
      ACCEPT_TOKEN(sym_note_skip);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 573:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 574:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 575:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (lookahead == '_') ADVANCE(597);
      END_STATE();
    case 576:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(566);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 577:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 578:
      ACCEPT_TOKEN(sym_TILDE);
      END_STATE();
    case 579:
      ACCEPT_TOKEN(sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 580:
      ACCEPT_TOKEN(sym_BEAM_SEPARATOR);
      END_STATE();
    case 581:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '%') ADVANCE(588);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 582:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '%') ADVANCE(588);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(587);
      END_STATE();
    case 583:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == '-') ADVANCE(812);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(587);
      END_STATE();
    case 584:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'a') ADVANCE(585);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(587);
      END_STATE();
    case 585:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'b') ADVANCE(586);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(587);
      END_STATE();
    case 586:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead == 'c') ADVANCE(583);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(587);
      END_STATE();
    case 587:
      ACCEPT_TOKEN(sym_COMMENT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(587);
      END_STATE();
    case 588:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 589:
      ACCEPT_TOKEN(aux_sym__MUSIC_CODE_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(589);
      END_STATE();
    case 590:
      ACCEPT_TOKEN(aux_sym__music_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(590);
      END_STATE();
    case 591:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      END_STATE();
    case 592:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 593:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 594:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 595:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(680);
      END_STATE();
    case 596:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 597:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 598:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(597);
      END_STATE();
    case 599:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(597);
      END_STATE();
    case 600:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 601:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(813);
      END_STATE();
    case 602:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(814);
      END_STATE();
    case 603:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(815);
      END_STATE();
    case 604:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(816);
      END_STATE();
    case 605:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(817);
      END_STATE();
    case 606:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(818);
      END_STATE();
    case 607:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 608:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 609:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 610:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == ':') ADVANCE(832);
      END_STATE();
    case 611:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == ':') ADVANCE(826);
      END_STATE();
    case 612:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(295);
      if (lookahead == '0') ADVANCE(613);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(612);
      END_STATE();
    case 613:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(613);
      END_STATE();
    case 614:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(614);
      END_STATE();
    case 615:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(614);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 616:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(295);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(616);
      END_STATE();
    case 617:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(617);
      END_STATE();
    case 618:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(618);
      END_STATE();
    case 619:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 620:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(619);
      END_STATE();
    case 621:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 622:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 623:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(625);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(67);
      END_STATE();
    case 624:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 625:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 626:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(626);
      END_STATE();
    case 627:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      END_STATE();
    case 628:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(627);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(628);
      END_STATE();
    case 629:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 630:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(641);
      if (lookahead == 'i') ADVANCE(644);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 631:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 632:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 633:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(631);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 634:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(645);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 635:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(646);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 636:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(642);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 637:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 638:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(643);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 639:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(647);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 640:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(652);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 641:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 642:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(634);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 643:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(639);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 644:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(648);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 645:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(653);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 646:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(632);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 647:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(640);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 648:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(650);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 649:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(635);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 650:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(656);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 651:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(649);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 652:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(637);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 653:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(633);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 654:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(636);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 655:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(651);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 656:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(656);
      END_STATE();
    case 657:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    case 658:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == ':') ADVANCE(819);
      END_STATE();
    case 659:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(819);
      END_STATE();
    case 660:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(834);
      END_STATE();
    case 661:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(823);
      END_STATE();
    case 662:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(825);
      END_STATE();
    case 663:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(811);
      END_STATE();
    case 664:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(829);
      END_STATE();
    case 665:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(833);
      END_STATE();
    case 666:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (lookahead == '\n') ADVANCE(667);
      if (lookahead == '!') ADVANCE(377);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '*') ADVANCE(572);
      if (lookahead == ':') ADVANCE(384);
      if (lookahead == '[') ADVANCE(564);
      if (lookahead == '|') ADVANCE(674);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(309);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(565);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 667:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(667);
      END_STATE();
    case 668:
      ACCEPT_TOKEN(aux_sym_nth_ending_barline_token1);
      if (eof) ADVANCE(304);
      if (lookahead == '\n') ADVANCE(307);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(623);
      if (lookahead == '%') ADVANCE(582);
      if (lookahead == '(') ADVANCE(591);
      if (lookahead == ')') ADVANCE(592);
      if (lookahead == ':') ADVANCE(83);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(597);
      if (lookahead == 'I') ADVANCE(91);
      if (lookahead == 'K') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(660);
      if (lookahead == 'M') ADVANCE(661);
      if (lookahead == 'N') ADVANCE(95);
      if (lookahead == 'P') ADVANCE(663);
      if (lookahead == 'Q') ADVANCE(97);
      if (lookahead == 'R') ADVANCE(98);
      if (lookahead == 'T') ADVANCE(665);
      if (lookahead == 'U') ADVANCE(100);
      if (lookahead == 'V') ADVANCE(101);
      if (lookahead == 'W') ADVANCE(102);
      if (lookahead == 'X') ADVANCE(611);
      if (lookahead == 'Z') ADVANCE(609);
      if (lookahead == '[') ADVANCE(595);
      if (lookahead == '^') ADVANCE(598);
      if (lookahead == '_') ADVANCE(599);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == '{') ADVANCE(620);
      if (lookahead == '|') ADVANCE(673);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(608);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(589);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(657);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(600);
      END_STATE();
    case 669:
      ACCEPT_TOKEN(aux_sym_nth_ending_number_token1);
      END_STATE();
    case 670:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 671:
      ACCEPT_TOKEN(anon_sym_COMMA);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 672:
      ACCEPT_TOKEN(sym_bar_line);
      END_STATE();
    case 673:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(682);
      if (lookahead == ']') ADVANCE(676);
      if (lookahead == '|') ADVANCE(678);
      END_STATE();
    case 674:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(683);
      if (lookahead == ']') ADVANCE(677);
      if (lookahead == '|') ADVANCE(679);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 675:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 676:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 677:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 678:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 679:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 680:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 681:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 682:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      END_STATE();
    case 683:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 684:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 685:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 686:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 687:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 688:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(688);
      END_STATE();
    case 689:
      ACCEPT_TOKEN(aux_sym_lyric_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(689);
      END_STATE();
    case 690:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(690);
      END_STATE();
    case 691:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 692:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 693:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 694:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 695:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 696:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 697:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 698:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 699:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 700:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 701:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 702:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 703:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 704:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 705:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 706:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 707:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 708:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 709:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 710:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 711:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 712:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 713:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 714:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 715:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 716:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 717:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 718:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 719:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 720:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 721:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 722:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 723:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 724:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 725:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 726:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 727:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 728:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 729:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 730:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 731:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 732:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 733:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 734:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 735:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 736:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 737:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 738:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 739:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 740:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 741:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 742:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 743:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 744:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 745:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 746:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 747:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 748:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 749:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 750:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 751:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 752:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 753:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 754:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 755:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 756:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 757:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 758:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 759:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 760:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 761:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 762:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 763:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 764:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 765:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 766:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 767:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 768:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 769:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 770:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 771:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 772:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 773:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 774:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 775:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 776:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 777:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 778:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 779:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 780:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 781:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 782:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 783:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 784:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 785:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 786:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 787:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 788:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 789:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 790:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 791:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 792:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 793:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 794:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 795:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 796:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 797:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 798:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 799:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 800:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 801:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 802:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 803:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 804:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 805:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 806:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 807:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 808:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 809:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 810:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 811:
      ACCEPT_TOKEN(sym_parts_line);
      END_STATE();
    case 812:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(587);
      END_STATE();
    case 813:
      ACCEPT_TOKEN(sym_area);
      END_STATE();
    case 814:
      ACCEPT_TOKEN(sym_book);
      END_STATE();
    case 815:
      ACCEPT_TOKEN(sym_composer);
      END_STATE();
    case 816:
      ACCEPT_TOKEN(sym_discography);
      END_STATE();
    case 817:
      ACCEPT_TOKEN(sym_file);
      END_STATE();
    case 818:
      ACCEPT_TOKEN(sym_group);
      END_STATE();
    case 819:
      ACCEPT_TOKEN(sym_history);
      END_STATE();
    case 820:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 821:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 822:
      ACCEPT_TOKEN(sym_macros);
      END_STATE();
    case 823:
      ACCEPT_TOKEN(sym_meter);
      END_STATE();
    case 824:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 825:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 826:
      ACCEPT_TOKEN(anon_sym_X_COLON);
      END_STATE();
    case 827:
      ACCEPT_TOKEN(sym_remark);
      END_STATE();
    case 828:
      ACCEPT_TOKEN(sym_rhythm_line);
      END_STATE();
    case 829:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 830:
      ACCEPT_TOKEN(anon_sym_s_COLON);
      END_STATE();
    case 831:
      ACCEPT_TOKEN(sym_tempo);
      END_STATE();
    case 832:
      ACCEPT_TOKEN(sym_transcription);
      END_STATE();
    case 833:
      ACCEPT_TOKEN(sym_tune_title);
      END_STATE();
    case 834:
      ACCEPT_TOKEN(sym_unit_note_length);
      END_STATE();
    case 835:
      ACCEPT_TOKEN(anon_sym_U_COLON);
      END_STATE();
    case 836:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      END_STATE();
    case 837:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(822);
      END_STATE();
    case 838:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(827);
      END_STATE();
    case 839:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(830);
      END_STATE();
    case 840:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(844);
      END_STATE();
    case 841:
      ACCEPT_TOKEN(aux_sym_user_defined_token2);
      END_STATE();
    case 842:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 843:
      ACCEPT_TOKEN(sym_voice);
      END_STATE();
    case 844:
      ACCEPT_TOKEN(anon_sym_w_COLON);
      END_STATE();
    case 845:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    case 846:
      ACCEPT_TOKEN(sym_words_postbody);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 301},
  [2] = {.lex_state = 302},
  [3] = {.lex_state = 302},
  [4] = {.lex_state = 302},
  [5] = {.lex_state = 303},
  [6] = {.lex_state = 303},
  [7] = {.lex_state = 303},
  [8] = {.lex_state = 300},
  [9] = {.lex_state = 300},
  [10] = {.lex_state = 303},
  [11] = {.lex_state = 303},
  [12] = {.lex_state = 303},
  [13] = {.lex_state = 300},
  [14] = {.lex_state = 300},
  [15] = {.lex_state = 300},
  [16] = {.lex_state = 300},
  [17] = {.lex_state = 300},
  [18] = {.lex_state = 302},
  [19] = {.lex_state = 299},
  [20] = {.lex_state = 299},
  [21] = {.lex_state = 668},
  [22] = {.lex_state = 299},
  [23] = {.lex_state = 668},
  [24] = {.lex_state = 300},
  [25] = {.lex_state = 300},
  [26] = {.lex_state = 299},
  [27] = {.lex_state = 300},
  [28] = {.lex_state = 300},
  [29] = {.lex_state = 300},
  [30] = {.lex_state = 300},
  [31] = {.lex_state = 300},
  [32] = {.lex_state = 300},
  [33] = {.lex_state = 300},
  [34] = {.lex_state = 300},
  [35] = {.lex_state = 300},
  [36] = {.lex_state = 300},
  [37] = {.lex_state = 300},
  [38] = {.lex_state = 300},
  [39] = {.lex_state = 300},
  [40] = {.lex_state = 300},
  [41] = {.lex_state = 300},
  [42] = {.lex_state = 300},
  [43] = {.lex_state = 300},
  [44] = {.lex_state = 300},
  [45] = {.lex_state = 668},
  [46] = {.lex_state = 300},
  [47] = {.lex_state = 300},
  [48] = {.lex_state = 300},
  [49] = {.lex_state = 300},
  [50] = {.lex_state = 300},
  [51] = {.lex_state = 300},
  [52] = {.lex_state = 300},
  [53] = {.lex_state = 300},
  [54] = {.lex_state = 300},
  [55] = {.lex_state = 300},
  [56] = {.lex_state = 300},
  [57] = {.lex_state = 300},
  [58] = {.lex_state = 300},
  [59] = {.lex_state = 300},
  [60] = {.lex_state = 302},
  [61] = {.lex_state = 302},
  [62] = {.lex_state = 302},
  [63] = {.lex_state = 1},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 301},
  [66] = {.lex_state = 66},
  [67] = {.lex_state = 66},
  [68] = {.lex_state = 666},
  [69] = {.lex_state = 66},
  [70] = {.lex_state = 666},
  [71] = {.lex_state = 66},
  [72] = {.lex_state = 666},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 1},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 0},
  [85] = {.lex_state = 301},
  [86] = {.lex_state = 301},
  [87] = {.lex_state = 301},
  [88] = {.lex_state = 301},
  [89] = {.lex_state = 68},
  [90] = {.lex_state = 68},
  [91] = {.lex_state = 68},
  [92] = {.lex_state = 68},
  [93] = {.lex_state = 68},
  [94] = {.lex_state = 68},
  [95] = {.lex_state = 68},
  [96] = {.lex_state = 68},
  [97] = {.lex_state = 68},
  [98] = {.lex_state = 73},
  [99] = {.lex_state = 68},
  [100] = {.lex_state = 73},
  [101] = {.lex_state = 302},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 302},
  [104] = {.lex_state = 302},
  [105] = {.lex_state = 302},
  [106] = {.lex_state = 302},
  [107] = {.lex_state = 68},
  [108] = {.lex_state = 302},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 302},
  [111] = {.lex_state = 302},
  [112] = {.lex_state = 302},
  [113] = {.lex_state = 302},
  [114] = {.lex_state = 302},
  [115] = {.lex_state = 302},
  [116] = {.lex_state = 302},
  [117] = {.lex_state = 302},
  [118] = {.lex_state = 302},
  [119] = {.lex_state = 2},
  [120] = {.lex_state = 302},
  [121] = {.lex_state = 302},
  [122] = {.lex_state = 302},
  [123] = {.lex_state = 302},
  [124] = {.lex_state = 302},
  [125] = {.lex_state = 2},
  [126] = {.lex_state = 302},
  [127] = {.lex_state = 68},
  [128] = {.lex_state = 68},
  [129] = {.lex_state = 68},
  [130] = {.lex_state = 68},
  [131] = {.lex_state = 68},
  [132] = {.lex_state = 68},
  [133] = {.lex_state = 68},
  [134] = {.lex_state = 68},
  [135] = {.lex_state = 68},
  [136] = {.lex_state = 68},
  [137] = {.lex_state = 68},
  [138] = {.lex_state = 68},
  [139] = {.lex_state = 68},
  [140] = {.lex_state = 68},
  [141] = {.lex_state = 68},
  [142] = {.lex_state = 68},
  [143] = {.lex_state = 68},
  [144] = {.lex_state = 68},
  [145] = {.lex_state = 68},
  [146] = {.lex_state = 68},
  [147] = {.lex_state = 302},
  [148] = {.lex_state = 68},
  [149] = {.lex_state = 68},
  [150] = {.lex_state = 302},
  [151] = {.lex_state = 73},
  [152] = {.lex_state = 302},
  [153] = {.lex_state = 73},
  [154] = {.lex_state = 302},
  [155] = {.lex_state = 302},
  [156] = {.lex_state = 73},
  [157] = {.lex_state = 73},
  [158] = {.lex_state = 301},
  [159] = {.lex_state = 302},
  [160] = {.lex_state = 2},
  [161] = {.lex_state = 2},
  [162] = {.lex_state = 2},
  [163] = {.lex_state = 302},
  [164] = {.lex_state = 302},
  [165] = {.lex_state = 68},
  [166] = {.lex_state = 301},
  [167] = {.lex_state = 302},
  [168] = {.lex_state = 302},
  [169] = {.lex_state = 302},
  [170] = {.lex_state = 2},
  [171] = {.lex_state = 302},
  [172] = {.lex_state = 302},
  [173] = {.lex_state = 302},
  [174] = {.lex_state = 302},
  [175] = {.lex_state = 301},
  [176] = {.lex_state = 301},
  [177] = {.lex_state = 0},
  [178] = {.lex_state = 302},
  [179] = {.lex_state = 0},
  [180] = {.lex_state = 302},
  [181] = {.lex_state = 302},
  [182] = {.lex_state = 302},
  [183] = {.lex_state = 302},
  [184] = {.lex_state = 302},
  [185] = {.lex_state = 302},
  [186] = {.lex_state = 302},
  [187] = {.lex_state = 0},
  [188] = {.lex_state = 302},
  [189] = {.lex_state = 302},
  [190] = {.lex_state = 302},
  [191] = {.lex_state = 0},
  [192] = {.lex_state = 302},
  [193] = {.lex_state = 302},
  [194] = {.lex_state = 302},
  [195] = {.lex_state = 302},
  [196] = {.lex_state = 302},
  [197] = {.lex_state = 302},
  [198] = {.lex_state = 301},
  [199] = {.lex_state = 69},
  [200] = {.lex_state = 301},
  [201] = {.lex_state = 301},
  [202] = {.lex_state = 79},
  [203] = {.lex_state = 75},
  [204] = {.lex_state = 301},
  [205] = {.lex_state = 301},
  [206] = {.lex_state = 79},
  [207] = {.lex_state = 69},
  [208] = {.lex_state = 79},
  [209] = {.lex_state = 301},
  [210] = {.lex_state = 75},
  [211] = {.lex_state = 69},
  [212] = {.lex_state = 69},
  [213] = {.lex_state = 75},
  [214] = {.lex_state = 1},
  [215] = {.lex_state = 302},
  [216] = {.lex_state = 68},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 302},
  [219] = {.lex_state = 1},
  [220] = {.lex_state = 302},
  [221] = {.lex_state = 302},
  [222] = {.lex_state = 302},
  [223] = {.lex_state = 1},
  [224] = {.lex_state = 79},
  [225] = {.lex_state = 302},
  [226] = {.lex_state = 2},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 2},
  [229] = {.lex_state = 301},
  [230] = {.lex_state = 114},
  [231] = {.lex_state = 75},
  [232] = {.lex_state = 301},
  [233] = {.lex_state = 68},
  [234] = {.lex_state = 301},
  [235] = {.lex_state = 301},
  [236] = {.lex_state = 301},
  [237] = {.lex_state = 301},
  [238] = {.lex_state = 301},
  [239] = {.lex_state = 302},
  [240] = {.lex_state = 302},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 301},
  [244] = {.lex_state = 301},
  [245] = {.lex_state = 75},
  [246] = {.lex_state = 75},
  [247] = {.lex_state = 75},
  [248] = {.lex_state = 302},
  [249] = {.lex_state = 301},
  [250] = {.lex_state = 689},
  [251] = {.lex_state = 68},
  [252] = {.lex_state = 75},
  [253] = {.lex_state = 68},
  [254] = {.lex_state = 301},
  [255] = {.lex_state = 302},
  [256] = {.lex_state = 302},
  [257] = {.lex_state = 301},
  [258] = {.lex_state = 68},
  [259] = {.lex_state = 75},
  [260] = {.lex_state = 68},
  [261] = {.lex_state = 301},
  [262] = {.lex_state = 301},
  [263] = {.lex_state = 689},
  [264] = {.lex_state = 301},
  [265] = {.lex_state = 301},
  [266] = {.lex_state = 75},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 302},
  [270] = {.lex_state = 301},
  [271] = {.lex_state = 303},
  [272] = {.lex_state = 0},
  [273] = {.lex_state = 0},
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
    [sym_source_file] = STATE(242),
    [sym_stylesheet_directives] = STATE(229),
    [sym_file_structure] = STATE(241),
    [sym_file_header] = STATE(191),
    [sym_tune] = STATE(198),
    [sym_tune_header] = STATE(18),
    [sym_abc_version] = STATE(231),
    [sym_reference_number_line] = STATE(6),
    [sym_user_defined] = STATE(231),
    [sym_file_header_info_line] = STATE(229),
    [aux_sym_file_structure_repeat2] = STATE(179),
    [aux_sym_file_header_repeat1] = STATE(85),
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
    [sym__music_content] = STATE(55),
    [sym__nte_or_chrd] = STATE(89),
    [sym_beam] = STATE(55),
    [sym_note_construct] = STATE(89),
    [sym__chord_cstrct] = STATE(89),
    [sym_note] = STATE(129),
    [sym__pitch] = STATE(107),
    [sym_multimeasure_rest] = STATE(55),
    [sym_grace_note] = STATE(97),
    [sym_chord_symbol] = STATE(150),
    [sym_decoration] = STATE(185),
    [sym_nth_ending_barline] = STATE(57),
    [sym_generic_bar_line] = STATE(55),
    [sym_first_repeat_bar] = STATE(57),
    [sym_second_repeat_bar] = STATE(57),
    [sym_symbol] = STATE(55),
    [sym_symbol_line] = STATE(266),
    [sym_user_defined] = STATE(266),
    [sym_words_line] = STATE(266),
    [sym_body_info_line] = STATE(2),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(15),
    [sym__NL] = ACTIONS(17),
    [sym_COMMENT] = ACTIONS(19),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(22),
    [aux_sym__music_content_token1] = ACTIONS(25),
    [sym_slur_open] = ACTIONS(28),
    [sym_slur_close] = ACTIONS(31),
    [anon_sym_LBRACK] = ACTIONS(34),
    [sym_alteration] = ACTIONS(37),
    [sym_note_letter] = ACTIONS(40),
    [sym_rest] = ACTIONS(43),
    [anon_sym_Z] = ACTIONS(46),
    [anon_sym_X] = ACTIONS(49),
    [aux_sym_grace_note_token1] = ACTIONS(52),
    [aux_sym_chord_symbol_token1] = ACTIONS(55),
    [sym_annotation] = ACTIONS(31),
    [sym_tuplet_marker] = ACTIONS(58),
    [sym_decoration_shorthand] = ACTIONS(61),
    [sym_bar_line] = ACTIONS(64),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(67),
    [sym_thin_double_bar_line] = ACTIONS(67),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(67),
    [sym_start_of_repeated_section] = ACTIONS(70),
    [sym_end_of_repeated_section] = ACTIONS(73),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(70),
    [anon_sym_BANGtrill_BANG] = ACTIONS(76),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(76),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(76),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(76),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(76),
    [anon_sym_BANGmordent_BANG] = ACTIONS(76),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(76),
    [anon_sym_BANGroll_BANG] = ACTIONS(76),
    [anon_sym_BANGturn_BANG] = ACTIONS(76),
    [anon_sym_BANGturnx_BANG] = ACTIONS(76),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(76),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(76),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(76),
    [anon_sym_BANG_GT_BANG] = ACTIONS(76),
    [anon_sym_BANGaccent_BANG] = ACTIONS(76),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(76),
    [anon_sym_BANGfermata_BANG] = ACTIONS(76),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(76),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(76),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(76),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(76),
    [anon_sym_BANGplus_BANG] = ACTIONS(76),
    [anon_sym_BANGsnap_BANG] = ACTIONS(76),
    [anon_sym_BANGslide_BANG] = ACTIONS(76),
    [anon_sym_BANGwedge_BANG] = ACTIONS(76),
    [anon_sym_BANGupbow_BANG] = ACTIONS(76),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(76),
    [anon_sym_BANGopen_BANG] = ACTIONS(76),
    [anon_sym_BANGthumb_BANG] = ACTIONS(76),
    [anon_sym_BANGbreath_BANG] = ACTIONS(76),
    [anon_sym_BANGpppp_BANG] = ACTIONS(76),
    [anon_sym_BANGppp_BANG] = ACTIONS(76),
    [anon_sym_BANGpp_BANG] = ACTIONS(76),
    [anon_sym_BANGp_BANG] = ACTIONS(76),
    [anon_sym_BANGmp_BANG] = ACTIONS(76),
    [anon_sym_BANGmf_BANG] = ACTIONS(76),
    [anon_sym_BANGf_BANG] = ACTIONS(76),
    [anon_sym_BANGff_BANG] = ACTIONS(76),
    [anon_sym_BANGfff_BANG] = ACTIONS(76),
    [anon_sym_BANGffff_BANG] = ACTIONS(76),
    [anon_sym_BANGsfz_BANG] = ACTIONS(76),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(76),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(76),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(76),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(76),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(76),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(76),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(76),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(76),
    [anon_sym_BANGsegno_BANG] = ACTIONS(76),
    [anon_sym_BANGcoda_BANG] = ACTIONS(76),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(76),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(76),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(76),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(76),
    [anon_sym_BANGfine_BANG] = ACTIONS(76),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(76),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(76),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(76),
    [sym_parts_line] = ACTIONS(79),
    [sym_instruction] = ACTIONS(79),
    [sym_key] = ACTIONS(79),
    [sym_macros] = ACTIONS(79),
    [sym_meter] = ACTIONS(79),
    [sym_notes] = ACTIONS(79),
    [anon_sym_X_COLON] = ACTIONS(15),
    [sym_remark] = ACTIONS(79),
    [sym_rhythm_line] = ACTIONS(79),
    [anon_sym_s_COLON] = ACTIONS(82),
    [sym_tempo] = ACTIONS(79),
    [sym_tune_title] = ACTIONS(79),
    [sym_unit_note_length] = ACTIONS(79),
    [anon_sym_U_COLON] = ACTIONS(85),
    [sym_voice] = ACTIONS(79),
    [anon_sym_w_COLON] = ACTIONS(88),
    [sym_words_postbody] = ACTIONS(15),
  },
  [3] = {
    [sym_stylesheet_directives] = STATE(4),
    [sym__MUSIC_CODE] = STATE(4),
    [sym__music_content] = STATE(55),
    [sym__nte_or_chrd] = STATE(89),
    [sym_beam] = STATE(55),
    [sym_note_construct] = STATE(89),
    [sym__chord_cstrct] = STATE(89),
    [sym_note] = STATE(129),
    [sym__pitch] = STATE(107),
    [sym_multimeasure_rest] = STATE(55),
    [sym_grace_note] = STATE(97),
    [sym_chord_symbol] = STATE(150),
    [sym_decoration] = STATE(185),
    [sym_nth_ending_barline] = STATE(57),
    [sym_generic_bar_line] = STATE(55),
    [sym_first_repeat_bar] = STATE(57),
    [sym_second_repeat_bar] = STATE(57),
    [sym_symbol] = STATE(55),
    [sym_symbol_line] = STATE(266),
    [sym_user_defined] = STATE(266),
    [sym_words_line] = STATE(266),
    [sym_body_info_line] = STATE(4),
    [aux_sym_tune_body_repeat1] = STATE(4),
    [aux_sym_note_construct_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(91),
    [sym__NL] = ACTIONS(93),
    [sym_COMMENT] = ACTIONS(95),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(97),
    [aux_sym__music_content_token1] = ACTIONS(99),
    [sym_slur_open] = ACTIONS(101),
    [sym_slur_close] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(105),
    [sym_alteration] = ACTIONS(107),
    [sym_note_letter] = ACTIONS(109),
    [sym_rest] = ACTIONS(111),
    [anon_sym_Z] = ACTIONS(113),
    [anon_sym_X] = ACTIONS(115),
    [aux_sym_grace_note_token1] = ACTIONS(117),
    [aux_sym_chord_symbol_token1] = ACTIONS(119),
    [sym_annotation] = ACTIONS(103),
    [sym_tuplet_marker] = ACTIONS(121),
    [sym_decoration_shorthand] = ACTIONS(123),
    [sym_bar_line] = ACTIONS(125),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(127),
    [sym_thin_double_bar_line] = ACTIONS(127),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(127),
    [sym_start_of_repeated_section] = ACTIONS(129),
    [sym_end_of_repeated_section] = ACTIONS(131),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(129),
    [anon_sym_BANGtrill_BANG] = ACTIONS(133),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(133),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(133),
    [anon_sym_BANGmordent_BANG] = ACTIONS(133),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(133),
    [anon_sym_BANGroll_BANG] = ACTIONS(133),
    [anon_sym_BANGturn_BANG] = ACTIONS(133),
    [anon_sym_BANGturnx_BANG] = ACTIONS(133),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(133),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(133),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(133),
    [anon_sym_BANG_GT_BANG] = ACTIONS(133),
    [anon_sym_BANGaccent_BANG] = ACTIONS(133),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(133),
    [anon_sym_BANGfermata_BANG] = ACTIONS(133),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(133),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(133),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(133),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(133),
    [anon_sym_BANGplus_BANG] = ACTIONS(133),
    [anon_sym_BANGsnap_BANG] = ACTIONS(133),
    [anon_sym_BANGslide_BANG] = ACTIONS(133),
    [anon_sym_BANGwedge_BANG] = ACTIONS(133),
    [anon_sym_BANGupbow_BANG] = ACTIONS(133),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(133),
    [anon_sym_BANGopen_BANG] = ACTIONS(133),
    [anon_sym_BANGthumb_BANG] = ACTIONS(133),
    [anon_sym_BANGbreath_BANG] = ACTIONS(133),
    [anon_sym_BANGpppp_BANG] = ACTIONS(133),
    [anon_sym_BANGppp_BANG] = ACTIONS(133),
    [anon_sym_BANGpp_BANG] = ACTIONS(133),
    [anon_sym_BANGp_BANG] = ACTIONS(133),
    [anon_sym_BANGmp_BANG] = ACTIONS(133),
    [anon_sym_BANGmf_BANG] = ACTIONS(133),
    [anon_sym_BANGf_BANG] = ACTIONS(133),
    [anon_sym_BANGff_BANG] = ACTIONS(133),
    [anon_sym_BANGfff_BANG] = ACTIONS(133),
    [anon_sym_BANGffff_BANG] = ACTIONS(133),
    [anon_sym_BANGsfz_BANG] = ACTIONS(133),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGsegno_BANG] = ACTIONS(133),
    [anon_sym_BANGcoda_BANG] = ACTIONS(133),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(133),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(133),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(133),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(133),
    [anon_sym_BANGfine_BANG] = ACTIONS(133),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(133),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(133),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(133),
    [sym_parts_line] = ACTIONS(135),
    [sym_instruction] = ACTIONS(135),
    [sym_key] = ACTIONS(135),
    [sym_macros] = ACTIONS(135),
    [sym_meter] = ACTIONS(135),
    [sym_notes] = ACTIONS(135),
    [anon_sym_X_COLON] = ACTIONS(91),
    [sym_remark] = ACTIONS(135),
    [sym_rhythm_line] = ACTIONS(135),
    [anon_sym_s_COLON] = ACTIONS(137),
    [sym_tempo] = ACTIONS(135),
    [sym_tune_title] = ACTIONS(135),
    [sym_unit_note_length] = ACTIONS(135),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(135),
    [anon_sym_w_COLON] = ACTIONS(139),
    [sym_words_postbody] = ACTIONS(91),
  },
  [4] = {
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(55),
    [sym__nte_or_chrd] = STATE(89),
    [sym_beam] = STATE(55),
    [sym_note_construct] = STATE(89),
    [sym__chord_cstrct] = STATE(89),
    [sym_note] = STATE(129),
    [sym__pitch] = STATE(107),
    [sym_multimeasure_rest] = STATE(55),
    [sym_grace_note] = STATE(97),
    [sym_chord_symbol] = STATE(150),
    [sym_decoration] = STATE(185),
    [sym_nth_ending_barline] = STATE(57),
    [sym_generic_bar_line] = STATE(55),
    [sym_first_repeat_bar] = STATE(57),
    [sym_second_repeat_bar] = STATE(57),
    [sym_symbol] = STATE(55),
    [sym_symbol_line] = STATE(266),
    [sym_user_defined] = STATE(266),
    [sym_words_line] = STATE(266),
    [sym_body_info_line] = STATE(2),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(97),
    [ts_builtin_sym_end] = ACTIONS(141),
    [sym__NL] = ACTIONS(143),
    [sym_COMMENT] = ACTIONS(145),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(97),
    [aux_sym__music_content_token1] = ACTIONS(99),
    [sym_slur_open] = ACTIONS(101),
    [sym_slur_close] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(105),
    [sym_alteration] = ACTIONS(107),
    [sym_note_letter] = ACTIONS(109),
    [sym_rest] = ACTIONS(111),
    [anon_sym_Z] = ACTIONS(113),
    [anon_sym_X] = ACTIONS(115),
    [aux_sym_grace_note_token1] = ACTIONS(117),
    [aux_sym_chord_symbol_token1] = ACTIONS(119),
    [sym_annotation] = ACTIONS(103),
    [sym_tuplet_marker] = ACTIONS(121),
    [sym_decoration_shorthand] = ACTIONS(123),
    [sym_bar_line] = ACTIONS(125),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(127),
    [sym_thin_double_bar_line] = ACTIONS(127),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(127),
    [sym_start_of_repeated_section] = ACTIONS(129),
    [sym_end_of_repeated_section] = ACTIONS(131),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(129),
    [anon_sym_BANGtrill_BANG] = ACTIONS(133),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(133),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(133),
    [anon_sym_BANGmordent_BANG] = ACTIONS(133),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(133),
    [anon_sym_BANGroll_BANG] = ACTIONS(133),
    [anon_sym_BANGturn_BANG] = ACTIONS(133),
    [anon_sym_BANGturnx_BANG] = ACTIONS(133),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(133),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(133),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(133),
    [anon_sym_BANG_GT_BANG] = ACTIONS(133),
    [anon_sym_BANGaccent_BANG] = ACTIONS(133),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(133),
    [anon_sym_BANGfermata_BANG] = ACTIONS(133),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(133),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(133),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(133),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(133),
    [anon_sym_BANGplus_BANG] = ACTIONS(133),
    [anon_sym_BANGsnap_BANG] = ACTIONS(133),
    [anon_sym_BANGslide_BANG] = ACTIONS(133),
    [anon_sym_BANGwedge_BANG] = ACTIONS(133),
    [anon_sym_BANGupbow_BANG] = ACTIONS(133),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(133),
    [anon_sym_BANGopen_BANG] = ACTIONS(133),
    [anon_sym_BANGthumb_BANG] = ACTIONS(133),
    [anon_sym_BANGbreath_BANG] = ACTIONS(133),
    [anon_sym_BANGpppp_BANG] = ACTIONS(133),
    [anon_sym_BANGppp_BANG] = ACTIONS(133),
    [anon_sym_BANGpp_BANG] = ACTIONS(133),
    [anon_sym_BANGp_BANG] = ACTIONS(133),
    [anon_sym_BANGmp_BANG] = ACTIONS(133),
    [anon_sym_BANGmf_BANG] = ACTIONS(133),
    [anon_sym_BANGf_BANG] = ACTIONS(133),
    [anon_sym_BANGff_BANG] = ACTIONS(133),
    [anon_sym_BANGfff_BANG] = ACTIONS(133),
    [anon_sym_BANGffff_BANG] = ACTIONS(133),
    [anon_sym_BANGsfz_BANG] = ACTIONS(133),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGsegno_BANG] = ACTIONS(133),
    [anon_sym_BANGcoda_BANG] = ACTIONS(133),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(133),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(133),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(133),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(133),
    [anon_sym_BANGfine_BANG] = ACTIONS(133),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(133),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(133),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(133),
    [sym_parts_line] = ACTIONS(135),
    [sym_instruction] = ACTIONS(135),
    [sym_key] = ACTIONS(135),
    [sym_macros] = ACTIONS(135),
    [sym_meter] = ACTIONS(135),
    [sym_notes] = ACTIONS(135),
    [anon_sym_X_COLON] = ACTIONS(141),
    [sym_remark] = ACTIONS(135),
    [sym_rhythm_line] = ACTIONS(135),
    [anon_sym_s_COLON] = ACTIONS(137),
    [sym_tempo] = ACTIONS(135),
    [sym_tune_title] = ACTIONS(135),
    [sym_unit_note_length] = ACTIONS(135),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(135),
    [anon_sym_w_COLON] = ACTIONS(139),
    [sym_words_postbody] = ACTIONS(141),
  },
  [5] = {
    [sym_abc_version] = STATE(252),
    [sym_symbol_line] = STATE(252),
    [sym_user_defined] = STATE(252),
    [sym_tune_header_info_line] = STATE(265),
    [aux_sym_tune_header_repeat1] = STATE(7),
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
    [sym_parts_line] = ACTIONS(153),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(7),
    [sym_area] = ACTIONS(153),
    [sym_book] = ACTIONS(153),
    [sym_composer] = ACTIONS(153),
    [sym_discography] = ACTIONS(153),
    [sym_file] = ACTIONS(153),
    [sym_group] = ACTIONS(153),
    [sym_history] = ACTIONS(153),
    [sym_instruction] = ACTIONS(153),
    [sym_key] = ACTIONS(153),
    [sym_macros] = ACTIONS(153),
    [sym_meter] = ACTIONS(153),
    [sym_notes] = ACTIONS(153),
    [sym_origin] = ACTIONS(153),
    [anon_sym_X_COLON] = ACTIONS(147),
    [sym_remark] = ACTIONS(153),
    [sym_rhythm_line] = ACTIONS(153),
    [sym_source] = ACTIONS(153),
    [anon_sym_s_COLON] = ACTIONS(137),
    [sym_tempo] = ACTIONS(153),
    [sym_transcription] = ACTIONS(153),
    [sym_tune_title] = ACTIONS(153),
    [sym_unit_note_length] = ACTIONS(153),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(153),
    [sym_words_postbody] = ACTIONS(147),
  },
  [6] = {
    [sym_abc_version] = STATE(252),
    [sym_symbol_line] = STATE(252),
    [sym_user_defined] = STATE(252),
    [sym_tune_header_info_line] = STATE(265),
    [aux_sym_tune_header_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(155),
    [sym__NL] = ACTIONS(157),
    [sym_COMMENT] = ACTIONS(151),
    [aux_sym__music_content_token1] = ACTIONS(157),
    [sym_slur_open] = ACTIONS(157),
    [sym_slur_close] = ACTIONS(155),
    [anon_sym_LBRACK] = ACTIONS(157),
    [sym_alteration] = ACTIONS(155),
    [sym_note_letter] = ACTIONS(157),
    [sym_rest] = ACTIONS(155),
    [anon_sym_Z] = ACTIONS(157),
    [anon_sym_X] = ACTIONS(157),
    [aux_sym_grace_note_token1] = ACTIONS(155),
    [aux_sym_chord_symbol_token1] = ACTIONS(157),
    [sym_annotation] = ACTIONS(155),
    [sym_tuplet_marker] = ACTIONS(155),
    [sym_decoration_shorthand] = ACTIONS(157),
    [sym_bar_line] = ACTIONS(157),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(155),
    [sym_thin_double_bar_line] = ACTIONS(155),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(155),
    [sym_start_of_repeated_section] = ACTIONS(155),
    [sym_end_of_repeated_section] = ACTIONS(155),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(155),
    [anon_sym_BANGtrill_BANG] = ACTIONS(155),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(155),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(155),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(155),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(155),
    [anon_sym_BANGmordent_BANG] = ACTIONS(155),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(155),
    [anon_sym_BANGroll_BANG] = ACTIONS(155),
    [anon_sym_BANGturn_BANG] = ACTIONS(155),
    [anon_sym_BANGturnx_BANG] = ACTIONS(155),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(155),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(155),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(155),
    [anon_sym_BANG_GT_BANG] = ACTIONS(155),
    [anon_sym_BANGaccent_BANG] = ACTIONS(155),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(155),
    [anon_sym_BANGfermata_BANG] = ACTIONS(155),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(155),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(155),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(155),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(155),
    [anon_sym_BANGplus_BANG] = ACTIONS(155),
    [anon_sym_BANGsnap_BANG] = ACTIONS(155),
    [anon_sym_BANGslide_BANG] = ACTIONS(155),
    [anon_sym_BANGwedge_BANG] = ACTIONS(155),
    [anon_sym_BANGupbow_BANG] = ACTIONS(155),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(155),
    [anon_sym_BANGopen_BANG] = ACTIONS(155),
    [anon_sym_BANGthumb_BANG] = ACTIONS(155),
    [anon_sym_BANGbreath_BANG] = ACTIONS(155),
    [anon_sym_BANGpppp_BANG] = ACTIONS(155),
    [anon_sym_BANGppp_BANG] = ACTIONS(155),
    [anon_sym_BANGpp_BANG] = ACTIONS(155),
    [anon_sym_BANGp_BANG] = ACTIONS(155),
    [anon_sym_BANGmp_BANG] = ACTIONS(155),
    [anon_sym_BANGmf_BANG] = ACTIONS(155),
    [anon_sym_BANGf_BANG] = ACTIONS(155),
    [anon_sym_BANGff_BANG] = ACTIONS(155),
    [anon_sym_BANGfff_BANG] = ACTIONS(155),
    [anon_sym_BANGffff_BANG] = ACTIONS(155),
    [anon_sym_BANGsfz_BANG] = ACTIONS(155),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(155),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(155),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(155),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(155),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(155),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(155),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(155),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(155),
    [anon_sym_BANGsegno_BANG] = ACTIONS(155),
    [anon_sym_BANGcoda_BANG] = ACTIONS(155),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(155),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(155),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(155),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(155),
    [anon_sym_BANGfine_BANG] = ACTIONS(155),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(155),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(155),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(155),
    [sym_parts_line] = ACTIONS(153),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(7),
    [sym_area] = ACTIONS(153),
    [sym_book] = ACTIONS(153),
    [sym_composer] = ACTIONS(153),
    [sym_discography] = ACTIONS(153),
    [sym_file] = ACTIONS(153),
    [sym_group] = ACTIONS(153),
    [sym_history] = ACTIONS(153),
    [sym_instruction] = ACTIONS(153),
    [sym_key] = ACTIONS(153),
    [sym_macros] = ACTIONS(153),
    [sym_meter] = ACTIONS(153),
    [sym_notes] = ACTIONS(153),
    [sym_origin] = ACTIONS(153),
    [anon_sym_X_COLON] = ACTIONS(155),
    [sym_remark] = ACTIONS(153),
    [sym_rhythm_line] = ACTIONS(153),
    [sym_source] = ACTIONS(153),
    [anon_sym_s_COLON] = ACTIONS(137),
    [sym_tempo] = ACTIONS(153),
    [sym_transcription] = ACTIONS(153),
    [sym_tune_title] = ACTIONS(153),
    [sym_unit_note_length] = ACTIONS(153),
    [anon_sym_U_COLON] = ACTIONS(13),
    [sym_voice] = ACTIONS(153),
    [sym_words_postbody] = ACTIONS(155),
  },
  [7] = {
    [sym_abc_version] = STATE(252),
    [sym_symbol_line] = STATE(252),
    [sym_user_defined] = STATE(252),
    [sym_tune_header_info_line] = STATE(265),
    [aux_sym_tune_header_repeat1] = STATE(7),
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym__NL] = ACTIONS(161),
    [sym_COMMENT] = ACTIONS(163),
    [aux_sym__music_content_token1] = ACTIONS(161),
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
    [sym_parts_line] = ACTIONS(166),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(169),
    [sym_area] = ACTIONS(166),
    [sym_book] = ACTIONS(166),
    [sym_composer] = ACTIONS(166),
    [sym_discography] = ACTIONS(166),
    [sym_file] = ACTIONS(166),
    [sym_group] = ACTIONS(166),
    [sym_history] = ACTIONS(166),
    [sym_instruction] = ACTIONS(166),
    [sym_key] = ACTIONS(166),
    [sym_macros] = ACTIONS(166),
    [sym_meter] = ACTIONS(166),
    [sym_notes] = ACTIONS(166),
    [sym_origin] = ACTIONS(166),
    [anon_sym_X_COLON] = ACTIONS(159),
    [sym_remark] = ACTIONS(166),
    [sym_rhythm_line] = ACTIONS(166),
    [sym_source] = ACTIONS(166),
    [anon_sym_s_COLON] = ACTIONS(172),
    [sym_tempo] = ACTIONS(166),
    [sym_transcription] = ACTIONS(166),
    [sym_tune_title] = ACTIONS(166),
    [sym_unit_note_length] = ACTIONS(166),
    [anon_sym_U_COLON] = ACTIONS(175),
    [sym_voice] = ACTIONS(166),
    [sym_words_postbody] = ACTIONS(166),
  },
  [8] = {
    [sym__nte_or_chrd] = STATE(9),
    [sym_note_construct] = STATE(9),
    [sym__chord_cstrct] = STATE(9),
    [sym_note] = STATE(35),
    [sym__pitch] = STATE(24),
    [sym_grace_note] = STATE(99),
    [sym_chord_symbol] = STATE(154),
    [sym_decoration] = STATE(189),
    [aux_sym_beam_repeat1] = STATE(9),
    [aux_sym_note_construct_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(178),
    [sym__NL] = ACTIONS(180),
    [sym_BEAM_SEPARATOR] = ACTIONS(182),
    [sym_COMMENT] = ACTIONS(180),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(178),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(180),
    [aux_sym__music_content_token1] = ACTIONS(180),
    [sym_slur_open] = ACTIONS(180),
    [sym_slur_close] = ACTIONS(178),
    [anon_sym_LBRACK] = ACTIONS(184),
    [sym_alteration] = ACTIONS(187),
    [sym_note_letter] = ACTIONS(190),
    [sym_rest] = ACTIONS(193),
    [anon_sym_Z] = ACTIONS(178),
    [anon_sym_X] = ACTIONS(180),
    [aux_sym_grace_note_token1] = ACTIONS(196),
    [aux_sym_chord_symbol_token1] = ACTIONS(199),
    [sym_annotation] = ACTIONS(178),
    [sym_tuplet_marker] = ACTIONS(202),
    [sym_decoration_shorthand] = ACTIONS(205),
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
    [sym_instruction] = ACTIONS(178),
    [sym_key] = ACTIONS(178),
    [sym_macros] = ACTIONS(178),
    [sym_meter] = ACTIONS(178),
    [sym_notes] = ACTIONS(178),
    [anon_sym_X_COLON] = ACTIONS(178),
    [sym_remark] = ACTIONS(178),
    [sym_rhythm_line] = ACTIONS(178),
    [anon_sym_s_COLON] = ACTIONS(178),
    [sym_tempo] = ACTIONS(178),
    [sym_tune_title] = ACTIONS(178),
    [sym_unit_note_length] = ACTIONS(178),
    [anon_sym_U_COLON] = ACTIONS(178),
    [sym_voice] = ACTIONS(178),
    [anon_sym_w_COLON] = ACTIONS(178),
    [sym_words_postbody] = ACTIONS(178),
  },
  [9] = {
    [sym__nte_or_chrd] = STATE(9),
    [sym_note_construct] = STATE(9),
    [sym__chord_cstrct] = STATE(9),
    [sym_note] = STATE(35),
    [sym__pitch] = STATE(24),
    [sym_grace_note] = STATE(99),
    [sym_chord_symbol] = STATE(154),
    [sym_decoration] = STATE(189),
    [aux_sym_beam_repeat1] = STATE(9),
    [aux_sym_note_construct_repeat1] = STATE(99),
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym__NL] = ACTIONS(210),
    [sym_BEAM_SEPARATOR] = ACTIONS(212),
    [sym_COMMENT] = ACTIONS(210),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(208),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(210),
    [aux_sym__music_content_token1] = ACTIONS(210),
    [sym_slur_open] = ACTIONS(210),
    [sym_slur_close] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(215),
    [sym_alteration] = ACTIONS(218),
    [sym_note_letter] = ACTIONS(221),
    [sym_rest] = ACTIONS(224),
    [anon_sym_Z] = ACTIONS(208),
    [anon_sym_X] = ACTIONS(210),
    [aux_sym_grace_note_token1] = ACTIONS(227),
    [aux_sym_chord_symbol_token1] = ACTIONS(230),
    [sym_annotation] = ACTIONS(208),
    [sym_tuplet_marker] = ACTIONS(233),
    [sym_decoration_shorthand] = ACTIONS(236),
    [sym_bar_line] = ACTIONS(210),
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
    [anon_sym_X_COLON] = ACTIONS(208),
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
  [10] = {
    [ts_builtin_sym_end] = ACTIONS(239),
    [sym__NL] = ACTIONS(241),
    [sym_COMMENT] = ACTIONS(241),
    [aux_sym__music_content_token1] = ACTIONS(241),
    [sym_slur_open] = ACTIONS(241),
    [sym_slur_close] = ACTIONS(239),
    [anon_sym_LBRACK] = ACTIONS(241),
    [sym_alteration] = ACTIONS(239),
    [sym_note_letter] = ACTIONS(241),
    [sym_rest] = ACTIONS(239),
    [anon_sym_Z] = ACTIONS(241),
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
    [anon_sym_PERCENTabc_DASH] = ACTIONS(241),
    [sym_area] = ACTIONS(239),
    [sym_book] = ACTIONS(239),
    [sym_composer] = ACTIONS(239),
    [sym_discography] = ACTIONS(239),
    [sym_file] = ACTIONS(239),
    [sym_group] = ACTIONS(239),
    [sym_history] = ACTIONS(239),
    [sym_instruction] = ACTIONS(239),
    [sym_key] = ACTIONS(239),
    [sym_macros] = ACTIONS(239),
    [sym_meter] = ACTIONS(239),
    [sym_notes] = ACTIONS(239),
    [sym_origin] = ACTIONS(239),
    [anon_sym_X_COLON] = ACTIONS(239),
    [sym_remark] = ACTIONS(239),
    [sym_rhythm_line] = ACTIONS(239),
    [sym_source] = ACTIONS(239),
    [anon_sym_s_COLON] = ACTIONS(239),
    [sym_tempo] = ACTIONS(239),
    [sym_transcription] = ACTIONS(239),
    [sym_tune_title] = ACTIONS(239),
    [sym_unit_note_length] = ACTIONS(239),
    [anon_sym_U_COLON] = ACTIONS(239),
    [sym_voice] = ACTIONS(239),
    [sym_words_postbody] = ACTIONS(239),
  },
  [11] = {
    [ts_builtin_sym_end] = ACTIONS(159),
    [sym__NL] = ACTIONS(161),
    [sym_COMMENT] = ACTIONS(161),
    [aux_sym__music_content_token1] = ACTIONS(161),
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
    [anon_sym_X_COLON] = ACTIONS(159),
    [sym_remark] = ACTIONS(159),
    [sym_rhythm_line] = ACTIONS(159),
    [sym_source] = ACTIONS(159),
    [anon_sym_s_COLON] = ACTIONS(159),
    [sym_tempo] = ACTIONS(159),
    [sym_transcription] = ACTIONS(159),
    [sym_tune_title] = ACTIONS(159),
    [sym_unit_note_length] = ACTIONS(159),
    [anon_sym_U_COLON] = ACTIONS(159),
    [sym_voice] = ACTIONS(159),
    [sym_words_postbody] = ACTIONS(159),
  },
  [12] = {
    [ts_builtin_sym_end] = ACTIONS(243),
    [sym__NL] = ACTIONS(245),
    [sym_COMMENT] = ACTIONS(245),
    [aux_sym__music_content_token1] = ACTIONS(245),
    [sym_slur_open] = ACTIONS(245),
    [sym_slur_close] = ACTIONS(243),
    [anon_sym_LBRACK] = ACTIONS(245),
    [sym_alteration] = ACTIONS(243),
    [sym_note_letter] = ACTIONS(245),
    [sym_rest] = ACTIONS(243),
    [anon_sym_Z] = ACTIONS(245),
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
    [anon_sym_PERCENTabc_DASH] = ACTIONS(245),
    [sym_area] = ACTIONS(243),
    [sym_book] = ACTIONS(243),
    [sym_composer] = ACTIONS(243),
    [sym_discography] = ACTIONS(243),
    [sym_file] = ACTIONS(243),
    [sym_group] = ACTIONS(243),
    [sym_history] = ACTIONS(243),
    [sym_instruction] = ACTIONS(243),
    [sym_key] = ACTIONS(243),
    [sym_macros] = ACTIONS(243),
    [sym_meter] = ACTIONS(243),
    [sym_notes] = ACTIONS(243),
    [sym_origin] = ACTIONS(243),
    [anon_sym_X_COLON] = ACTIONS(243),
    [sym_remark] = ACTIONS(243),
    [sym_rhythm_line] = ACTIONS(243),
    [sym_source] = ACTIONS(243),
    [anon_sym_s_COLON] = ACTIONS(243),
    [sym_tempo] = ACTIONS(243),
    [sym_transcription] = ACTIONS(243),
    [sym_tune_title] = ACTIONS(243),
    [sym_unit_note_length] = ACTIONS(243),
    [anon_sym_U_COLON] = ACTIONS(243),
    [sym_voice] = ACTIONS(243),
    [sym_words_postbody] = ACTIONS(243),
  },
  [13] = {
    [aux_sym__pitch_repeat1] = STATE(15),
    [ts_builtin_sym_end] = ACTIONS(247),
    [sym__NL] = ACTIONS(249),
    [sym_BEAM_SEPARATOR] = ACTIONS(247),
    [sym_COMMENT] = ACTIONS(249),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(247),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(249),
    [aux_sym__music_content_token1] = ACTIONS(249),
    [sym_slur_open] = ACTIONS(249),
    [sym_slur_close] = ACTIONS(247),
    [aux_sym_note_construct_token1] = ACTIONS(247),
    [anon_sym_LBRACK] = ACTIONS(249),
    [sym_alteration] = ACTIONS(247),
    [sym_note_letter] = ACTIONS(247),
    [sym_octave] = ACTIONS(251),
    [sym_rest] = ACTIONS(247),
    [anon_sym_Z] = ACTIONS(247),
    [anon_sym_X] = ACTIONS(249),
    [sym_rhythm] = ACTIONS(247),
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
  [14] = {
    [aux_sym__pitch_repeat1] = STATE(16),
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym__NL] = ACTIONS(255),
    [sym_BEAM_SEPARATOR] = ACTIONS(253),
    [sym_COMMENT] = ACTIONS(255),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(253),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(255),
    [aux_sym__music_content_token1] = ACTIONS(255),
    [sym_slur_open] = ACTIONS(255),
    [sym_slur_close] = ACTIONS(253),
    [aux_sym_note_construct_token1] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(255),
    [sym_alteration] = ACTIONS(253),
    [sym_note_letter] = ACTIONS(253),
    [sym_octave] = ACTIONS(257),
    [sym_rest] = ACTIONS(253),
    [anon_sym_Z] = ACTIONS(253),
    [anon_sym_X] = ACTIONS(255),
    [sym_rhythm] = ACTIONS(253),
    [aux_sym_grace_note_token1] = ACTIONS(253),
    [aux_sym_chord_symbol_token1] = ACTIONS(255),
    [sym_annotation] = ACTIONS(253),
    [sym_tuplet_marker] = ACTIONS(253),
    [sym_decoration_shorthand] = ACTIONS(255),
    [sym_bar_line] = ACTIONS(255),
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
    [sym_parts_line] = ACTIONS(253),
    [sym_instruction] = ACTIONS(253),
    [sym_key] = ACTIONS(253),
    [sym_macros] = ACTIONS(253),
    [sym_meter] = ACTIONS(253),
    [sym_notes] = ACTIONS(253),
    [anon_sym_X_COLON] = ACTIONS(253),
    [sym_remark] = ACTIONS(253),
    [sym_rhythm_line] = ACTIONS(253),
    [anon_sym_s_COLON] = ACTIONS(253),
    [sym_tempo] = ACTIONS(253),
    [sym_tune_title] = ACTIONS(253),
    [sym_unit_note_length] = ACTIONS(253),
    [anon_sym_U_COLON] = ACTIONS(253),
    [sym_voice] = ACTIONS(253),
    [anon_sym_w_COLON] = ACTIONS(253),
    [sym_words_postbody] = ACTIONS(253),
  },
  [15] = {
    [aux_sym__pitch_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(253),
    [sym__NL] = ACTIONS(255),
    [sym_BEAM_SEPARATOR] = ACTIONS(253),
    [sym_COMMENT] = ACTIONS(255),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(253),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(255),
    [aux_sym__music_content_token1] = ACTIONS(255),
    [sym_slur_open] = ACTIONS(255),
    [sym_slur_close] = ACTIONS(253),
    [aux_sym_note_construct_token1] = ACTIONS(253),
    [anon_sym_LBRACK] = ACTIONS(255),
    [sym_alteration] = ACTIONS(253),
    [sym_note_letter] = ACTIONS(253),
    [sym_octave] = ACTIONS(259),
    [sym_rest] = ACTIONS(253),
    [anon_sym_Z] = ACTIONS(253),
    [anon_sym_X] = ACTIONS(255),
    [sym_rhythm] = ACTIONS(253),
    [aux_sym_grace_note_token1] = ACTIONS(253),
    [aux_sym_chord_symbol_token1] = ACTIONS(255),
    [sym_annotation] = ACTIONS(253),
    [sym_tuplet_marker] = ACTIONS(253),
    [sym_decoration_shorthand] = ACTIONS(255),
    [sym_bar_line] = ACTIONS(255),
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
    [sym_parts_line] = ACTIONS(253),
    [sym_instruction] = ACTIONS(253),
    [sym_key] = ACTIONS(253),
    [sym_macros] = ACTIONS(253),
    [sym_meter] = ACTIONS(253),
    [sym_notes] = ACTIONS(253),
    [anon_sym_X_COLON] = ACTIONS(253),
    [sym_remark] = ACTIONS(253),
    [sym_rhythm_line] = ACTIONS(253),
    [anon_sym_s_COLON] = ACTIONS(253),
    [sym_tempo] = ACTIONS(253),
    [sym_tune_title] = ACTIONS(253),
    [sym_unit_note_length] = ACTIONS(253),
    [anon_sym_U_COLON] = ACTIONS(253),
    [sym_voice] = ACTIONS(253),
    [anon_sym_w_COLON] = ACTIONS(253),
    [sym_words_postbody] = ACTIONS(253),
  },
  [16] = {
    [aux_sym__pitch_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(261),
    [sym__NL] = ACTIONS(263),
    [sym_BEAM_SEPARATOR] = ACTIONS(261),
    [sym_COMMENT] = ACTIONS(263),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(261),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(263),
    [aux_sym__music_content_token1] = ACTIONS(263),
    [sym_slur_open] = ACTIONS(263),
    [sym_slur_close] = ACTIONS(261),
    [aux_sym_note_construct_token1] = ACTIONS(261),
    [anon_sym_LBRACK] = ACTIONS(263),
    [sym_alteration] = ACTIONS(261),
    [sym_note_letter] = ACTIONS(261),
    [sym_octave] = ACTIONS(259),
    [sym_rest] = ACTIONS(261),
    [anon_sym_Z] = ACTIONS(261),
    [anon_sym_X] = ACTIONS(263),
    [sym_rhythm] = ACTIONS(261),
    [aux_sym_grace_note_token1] = ACTIONS(261),
    [aux_sym_chord_symbol_token1] = ACTIONS(263),
    [sym_annotation] = ACTIONS(261),
    [sym_tuplet_marker] = ACTIONS(261),
    [sym_decoration_shorthand] = ACTIONS(263),
    [sym_bar_line] = ACTIONS(263),
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
    [sym_parts_line] = ACTIONS(261),
    [sym_instruction] = ACTIONS(261),
    [sym_key] = ACTIONS(261),
    [sym_macros] = ACTIONS(261),
    [sym_meter] = ACTIONS(261),
    [sym_notes] = ACTIONS(261),
    [anon_sym_X_COLON] = ACTIONS(261),
    [sym_remark] = ACTIONS(261),
    [sym_rhythm_line] = ACTIONS(261),
    [anon_sym_s_COLON] = ACTIONS(261),
    [sym_tempo] = ACTIONS(261),
    [sym_tune_title] = ACTIONS(261),
    [sym_unit_note_length] = ACTIONS(261),
    [anon_sym_U_COLON] = ACTIONS(261),
    [sym_voice] = ACTIONS(261),
    [anon_sym_w_COLON] = ACTIONS(261),
    [sym_words_postbody] = ACTIONS(261),
  },
  [17] = {
    [aux_sym__pitch_repeat1] = STATE(17),
    [ts_builtin_sym_end] = ACTIONS(265),
    [sym__NL] = ACTIONS(267),
    [sym_BEAM_SEPARATOR] = ACTIONS(265),
    [sym_COMMENT] = ACTIONS(267),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(265),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(267),
    [aux_sym__music_content_token1] = ACTIONS(267),
    [sym_slur_open] = ACTIONS(267),
    [sym_slur_close] = ACTIONS(265),
    [aux_sym_note_construct_token1] = ACTIONS(265),
    [anon_sym_LBRACK] = ACTIONS(267),
    [sym_alteration] = ACTIONS(265),
    [sym_note_letter] = ACTIONS(265),
    [sym_octave] = ACTIONS(269),
    [sym_rest] = ACTIONS(265),
    [anon_sym_Z] = ACTIONS(265),
    [anon_sym_X] = ACTIONS(267),
    [sym_rhythm] = ACTIONS(265),
    [aux_sym_grace_note_token1] = ACTIONS(265),
    [aux_sym_chord_symbol_token1] = ACTIONS(267),
    [sym_annotation] = ACTIONS(265),
    [sym_tuplet_marker] = ACTIONS(265),
    [sym_decoration_shorthand] = ACTIONS(267),
    [sym_bar_line] = ACTIONS(267),
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
    [sym_parts_line] = ACTIONS(265),
    [sym_instruction] = ACTIONS(265),
    [sym_key] = ACTIONS(265),
    [sym_macros] = ACTIONS(265),
    [sym_meter] = ACTIONS(265),
    [sym_notes] = ACTIONS(265),
    [anon_sym_X_COLON] = ACTIONS(265),
    [sym_remark] = ACTIONS(265),
    [sym_rhythm_line] = ACTIONS(265),
    [anon_sym_s_COLON] = ACTIONS(265),
    [sym_tempo] = ACTIONS(265),
    [sym_tune_title] = ACTIONS(265),
    [sym_unit_note_length] = ACTIONS(265),
    [anon_sym_U_COLON] = ACTIONS(265),
    [sym_voice] = ACTIONS(265),
    [anon_sym_w_COLON] = ACTIONS(265),
    [sym_words_postbody] = ACTIONS(265),
  },
  [18] = {
    [sym__MUSIC_CODE] = STATE(3),
    [sym_tune_body] = STATE(158),
    [sym__music_content] = STATE(55),
    [sym__nte_or_chrd] = STATE(89),
    [sym_beam] = STATE(55),
    [sym_note_construct] = STATE(89),
    [sym__chord_cstrct] = STATE(89),
    [sym_note] = STATE(129),
    [sym__pitch] = STATE(107),
    [sym_multimeasure_rest] = STATE(55),
    [sym_grace_note] = STATE(97),
    [sym_chord_symbol] = STATE(150),
    [sym_decoration] = STATE(185),
    [sym_nth_ending_barline] = STATE(57),
    [sym_generic_bar_line] = STATE(55),
    [sym_first_repeat_bar] = STATE(57),
    [sym_second_repeat_bar] = STATE(57),
    [sym_lyric_line] = STATE(175),
    [sym_lyric_section] = STATE(204),
    [sym_symbol] = STATE(55),
    [aux_sym_note_construct_repeat1] = STATE(97),
    [aux_sym_lyric_section_repeat1] = STATE(175),
    [ts_builtin_sym_end] = ACTIONS(272),
    [sym__NL] = ACTIONS(274),
    [aux_sym__music_content_token1] = ACTIONS(99),
    [sym_slur_open] = ACTIONS(101),
    [sym_slur_close] = ACTIONS(103),
    [anon_sym_LBRACK] = ACTIONS(105),
    [sym_alteration] = ACTIONS(107),
    [sym_note_letter] = ACTIONS(109),
    [sym_rest] = ACTIONS(111),
    [anon_sym_Z] = ACTIONS(113),
    [anon_sym_X] = ACTIONS(115),
    [aux_sym_grace_note_token1] = ACTIONS(117),
    [aux_sym_chord_symbol_token1] = ACTIONS(119),
    [sym_annotation] = ACTIONS(103),
    [sym_tuplet_marker] = ACTIONS(121),
    [sym_decoration_shorthand] = ACTIONS(276),
    [sym_bar_line] = ACTIONS(125),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(127),
    [sym_thin_double_bar_line] = ACTIONS(127),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(127),
    [sym_start_of_repeated_section] = ACTIONS(129),
    [sym_end_of_repeated_section] = ACTIONS(131),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(129),
    [anon_sym_BANGtrill_BANG] = ACTIONS(133),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(133),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(133),
    [anon_sym_BANGmordent_BANG] = ACTIONS(133),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(133),
    [anon_sym_BANGroll_BANG] = ACTIONS(133),
    [anon_sym_BANGturn_BANG] = ACTIONS(133),
    [anon_sym_BANGturnx_BANG] = ACTIONS(133),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(133),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(133),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(133),
    [anon_sym_BANG_GT_BANG] = ACTIONS(133),
    [anon_sym_BANGaccent_BANG] = ACTIONS(133),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(133),
    [anon_sym_BANGfermata_BANG] = ACTIONS(133),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(133),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(133),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(133),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(133),
    [anon_sym_BANGplus_BANG] = ACTIONS(133),
    [anon_sym_BANGsnap_BANG] = ACTIONS(133),
    [anon_sym_BANGslide_BANG] = ACTIONS(133),
    [anon_sym_BANGwedge_BANG] = ACTIONS(133),
    [anon_sym_BANGupbow_BANG] = ACTIONS(133),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(133),
    [anon_sym_BANGopen_BANG] = ACTIONS(133),
    [anon_sym_BANGthumb_BANG] = ACTIONS(133),
    [anon_sym_BANGbreath_BANG] = ACTIONS(133),
    [anon_sym_BANGpppp_BANG] = ACTIONS(133),
    [anon_sym_BANGppp_BANG] = ACTIONS(133),
    [anon_sym_BANGpp_BANG] = ACTIONS(133),
    [anon_sym_BANGp_BANG] = ACTIONS(133),
    [anon_sym_BANGmp_BANG] = ACTIONS(133),
    [anon_sym_BANGmf_BANG] = ACTIONS(133),
    [anon_sym_BANGf_BANG] = ACTIONS(133),
    [anon_sym_BANGff_BANG] = ACTIONS(133),
    [anon_sym_BANGfff_BANG] = ACTIONS(133),
    [anon_sym_BANGffff_BANG] = ACTIONS(133),
    [anon_sym_BANGsfz_BANG] = ACTIONS(133),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(133),
    [anon_sym_BANGsegno_BANG] = ACTIONS(133),
    [anon_sym_BANGcoda_BANG] = ACTIONS(133),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(133),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(133),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(133),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(133),
    [anon_sym_BANGfine_BANG] = ACTIONS(133),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(133),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(133),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(133),
    [anon_sym_X_COLON] = ACTIONS(272),
    [sym_words_postbody] = ACTIONS(278),
  },
  [19] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(280),
    [sym__NL] = ACTIONS(282),
    [anon_sym_DASH] = ACTIONS(284),
    [sym_COMMENT] = ACTIONS(282),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(280),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(282),
    [aux_sym__music_content_token1] = ACTIONS(282),
    [sym_slur_open] = ACTIONS(282),
    [sym_slur_close] = ACTIONS(280),
    [anon_sym_LBRACK] = ACTIONS(282),
    [sym_alteration] = ACTIONS(280),
    [sym_note_letter] = ACTIONS(280),
    [sym_rest] = ACTIONS(280),
    [anon_sym_Z] = ACTIONS(280),
    [anon_sym_X] = ACTIONS(282),
    [aux_sym_grace_note_token1] = ACTIONS(280),
    [aux_sym_chord_symbol_token1] = ACTIONS(282),
    [sym_annotation] = ACTIONS(280),
    [sym_tuplet_marker] = ACTIONS(280),
    [sym_decoration_shorthand] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(284),
    [sym_bar_line] = ACTIONS(282),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(280),
    [sym_thin_double_bar_line] = ACTIONS(280),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(280),
    [sym_start_of_repeated_section] = ACTIONS(280),
    [sym_end_of_repeated_section] = ACTIONS(280),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(280),
    [anon_sym_BANGtrill_BANG] = ACTIONS(280),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(280),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(280),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(280),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(280),
    [anon_sym_BANGmordent_BANG] = ACTIONS(280),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(280),
    [anon_sym_BANGroll_BANG] = ACTIONS(280),
    [anon_sym_BANGturn_BANG] = ACTIONS(280),
    [anon_sym_BANGturnx_BANG] = ACTIONS(280),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(280),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(280),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(280),
    [anon_sym_BANG_GT_BANG] = ACTIONS(280),
    [anon_sym_BANGaccent_BANG] = ACTIONS(280),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(280),
    [anon_sym_BANGfermata_BANG] = ACTIONS(280),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(280),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(280),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(280),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(280),
    [anon_sym_BANGplus_BANG] = ACTIONS(280),
    [anon_sym_BANGsnap_BANG] = ACTIONS(280),
    [anon_sym_BANGslide_BANG] = ACTIONS(280),
    [anon_sym_BANGwedge_BANG] = ACTIONS(280),
    [anon_sym_BANGupbow_BANG] = ACTIONS(280),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(280),
    [anon_sym_BANGopen_BANG] = ACTIONS(280),
    [anon_sym_BANGthumb_BANG] = ACTIONS(280),
    [anon_sym_BANGbreath_BANG] = ACTIONS(280),
    [anon_sym_BANGpppp_BANG] = ACTIONS(280),
    [anon_sym_BANGppp_BANG] = ACTIONS(280),
    [anon_sym_BANGpp_BANG] = ACTIONS(280),
    [anon_sym_BANGp_BANG] = ACTIONS(280),
    [anon_sym_BANGmp_BANG] = ACTIONS(280),
    [anon_sym_BANGmf_BANG] = ACTIONS(280),
    [anon_sym_BANGf_BANG] = ACTIONS(280),
    [anon_sym_BANGff_BANG] = ACTIONS(280),
    [anon_sym_BANGfff_BANG] = ACTIONS(280),
    [anon_sym_BANGffff_BANG] = ACTIONS(280),
    [anon_sym_BANGsfz_BANG] = ACTIONS(280),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(280),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(280),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(280),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(280),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(280),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(280),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(280),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(280),
    [anon_sym_BANGsegno_BANG] = ACTIONS(280),
    [anon_sym_BANGcoda_BANG] = ACTIONS(280),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(280),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(280),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(280),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(280),
    [anon_sym_BANGfine_BANG] = ACTIONS(280),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(280),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(280),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(280),
    [sym_parts_line] = ACTIONS(280),
    [sym_instruction] = ACTIONS(280),
    [sym_key] = ACTIONS(280),
    [sym_macros] = ACTIONS(280),
    [sym_meter] = ACTIONS(280),
    [sym_notes] = ACTIONS(280),
    [anon_sym_X_COLON] = ACTIONS(280),
    [sym_remark] = ACTIONS(280),
    [sym_rhythm_line] = ACTIONS(280),
    [anon_sym_s_COLON] = ACTIONS(280),
    [sym_tempo] = ACTIONS(280),
    [sym_tune_title] = ACTIONS(280),
    [sym_unit_note_length] = ACTIONS(280),
    [anon_sym_U_COLON] = ACTIONS(280),
    [sym_voice] = ACTIONS(280),
    [anon_sym_w_COLON] = ACTIONS(280),
    [sym_words_postbody] = ACTIONS(280),
  },
  [20] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(20),
    [ts_builtin_sym_end] = ACTIONS(286),
    [sym__NL] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(290),
    [sym_COMMENT] = ACTIONS(288),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(286),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(288),
    [aux_sym__music_content_token1] = ACTIONS(288),
    [sym_slur_open] = ACTIONS(288),
    [sym_slur_close] = ACTIONS(286),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_alteration] = ACTIONS(286),
    [sym_note_letter] = ACTIONS(286),
    [sym_rest] = ACTIONS(286),
    [anon_sym_Z] = ACTIONS(286),
    [anon_sym_X] = ACTIONS(288),
    [aux_sym_grace_note_token1] = ACTIONS(286),
    [aux_sym_chord_symbol_token1] = ACTIONS(288),
    [sym_annotation] = ACTIONS(286),
    [sym_tuplet_marker] = ACTIONS(286),
    [sym_decoration_shorthand] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(290),
    [sym_bar_line] = ACTIONS(288),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(286),
    [sym_thin_double_bar_line] = ACTIONS(286),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(286),
    [sym_start_of_repeated_section] = ACTIONS(286),
    [sym_end_of_repeated_section] = ACTIONS(286),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(286),
    [anon_sym_BANGtrill_BANG] = ACTIONS(286),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(286),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(286),
    [anon_sym_BANGmordent_BANG] = ACTIONS(286),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(286),
    [anon_sym_BANGroll_BANG] = ACTIONS(286),
    [anon_sym_BANGturn_BANG] = ACTIONS(286),
    [anon_sym_BANGturnx_BANG] = ACTIONS(286),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(286),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(286),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(286),
    [anon_sym_BANG_GT_BANG] = ACTIONS(286),
    [anon_sym_BANGaccent_BANG] = ACTIONS(286),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(286),
    [anon_sym_BANGfermata_BANG] = ACTIONS(286),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(286),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(286),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(286),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(286),
    [anon_sym_BANGplus_BANG] = ACTIONS(286),
    [anon_sym_BANGsnap_BANG] = ACTIONS(286),
    [anon_sym_BANGslide_BANG] = ACTIONS(286),
    [anon_sym_BANGwedge_BANG] = ACTIONS(286),
    [anon_sym_BANGupbow_BANG] = ACTIONS(286),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(286),
    [anon_sym_BANGopen_BANG] = ACTIONS(286),
    [anon_sym_BANGthumb_BANG] = ACTIONS(286),
    [anon_sym_BANGbreath_BANG] = ACTIONS(286),
    [anon_sym_BANGpppp_BANG] = ACTIONS(286),
    [anon_sym_BANGppp_BANG] = ACTIONS(286),
    [anon_sym_BANGpp_BANG] = ACTIONS(286),
    [anon_sym_BANGp_BANG] = ACTIONS(286),
    [anon_sym_BANGmp_BANG] = ACTIONS(286),
    [anon_sym_BANGmf_BANG] = ACTIONS(286),
    [anon_sym_BANGf_BANG] = ACTIONS(286),
    [anon_sym_BANGff_BANG] = ACTIONS(286),
    [anon_sym_BANGfff_BANG] = ACTIONS(286),
    [anon_sym_BANGffff_BANG] = ACTIONS(286),
    [anon_sym_BANGsfz_BANG] = ACTIONS(286),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGsegno_BANG] = ACTIONS(286),
    [anon_sym_BANGcoda_BANG] = ACTIONS(286),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(286),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(286),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(286),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(286),
    [anon_sym_BANGfine_BANG] = ACTIONS(286),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(286),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(286),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(286),
    [sym_parts_line] = ACTIONS(286),
    [sym_instruction] = ACTIONS(286),
    [sym_key] = ACTIONS(286),
    [sym_macros] = ACTIONS(286),
    [sym_meter] = ACTIONS(286),
    [sym_notes] = ACTIONS(286),
    [anon_sym_X_COLON] = ACTIONS(286),
    [sym_remark] = ACTIONS(286),
    [sym_rhythm_line] = ACTIONS(286),
    [anon_sym_s_COLON] = ACTIONS(286),
    [sym_tempo] = ACTIONS(286),
    [sym_tune_title] = ACTIONS(286),
    [sym_unit_note_length] = ACTIONS(286),
    [anon_sym_U_COLON] = ACTIONS(286),
    [sym_voice] = ACTIONS(286),
    [anon_sym_w_COLON] = ACTIONS(286),
    [sym_words_postbody] = ACTIONS(286),
  },
  [21] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym__NL] = ACTIONS(295),
    [sym_COMMENT] = ACTIONS(295),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(293),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(295),
    [aux_sym__music_content_token1] = ACTIONS(295),
    [sym_slur_open] = ACTIONS(295),
    [sym_slur_close] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(295),
    [sym_alteration] = ACTIONS(293),
    [sym_note_letter] = ACTIONS(293),
    [sym_rest] = ACTIONS(293),
    [anon_sym_Z] = ACTIONS(293),
    [anon_sym_X] = ACTIONS(295),
    [aux_sym_grace_note_token1] = ACTIONS(293),
    [aux_sym_chord_symbol_token1] = ACTIONS(295),
    [sym_annotation] = ACTIONS(293),
    [sym_tuplet_marker] = ACTIONS(293),
    [sym_decoration_shorthand] = ACTIONS(295),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(297),
    [sym_bar_line] = ACTIONS(295),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(293),
    [sym_thin_double_bar_line] = ACTIONS(293),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(293),
    [sym_start_of_repeated_section] = ACTIONS(293),
    [sym_end_of_repeated_section] = ACTIONS(293),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(293),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(299),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(301),
    [anon_sym_BANGtrill_BANG] = ACTIONS(293),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(293),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(293),
    [anon_sym_BANGmordent_BANG] = ACTIONS(293),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(293),
    [anon_sym_BANGroll_BANG] = ACTIONS(293),
    [anon_sym_BANGturn_BANG] = ACTIONS(293),
    [anon_sym_BANGturnx_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(293),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_BANG] = ACTIONS(293),
    [anon_sym_BANGaccent_BANG] = ACTIONS(293),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(293),
    [anon_sym_BANGfermata_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(293),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(293),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(293),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(293),
    [anon_sym_BANGplus_BANG] = ACTIONS(293),
    [anon_sym_BANGsnap_BANG] = ACTIONS(293),
    [anon_sym_BANGslide_BANG] = ACTIONS(293),
    [anon_sym_BANGwedge_BANG] = ACTIONS(293),
    [anon_sym_BANGupbow_BANG] = ACTIONS(293),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(293),
    [anon_sym_BANGopen_BANG] = ACTIONS(293),
    [anon_sym_BANGthumb_BANG] = ACTIONS(293),
    [anon_sym_BANGbreath_BANG] = ACTIONS(293),
    [anon_sym_BANGpppp_BANG] = ACTIONS(293),
    [anon_sym_BANGppp_BANG] = ACTIONS(293),
    [anon_sym_BANGpp_BANG] = ACTIONS(293),
    [anon_sym_BANGp_BANG] = ACTIONS(293),
    [anon_sym_BANGmp_BANG] = ACTIONS(293),
    [anon_sym_BANGmf_BANG] = ACTIONS(293),
    [anon_sym_BANGf_BANG] = ACTIONS(293),
    [anon_sym_BANGff_BANG] = ACTIONS(293),
    [anon_sym_BANGfff_BANG] = ACTIONS(293),
    [anon_sym_BANGffff_BANG] = ACTIONS(293),
    [anon_sym_BANGsfz_BANG] = ACTIONS(293),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGsegno_BANG] = ACTIONS(293),
    [anon_sym_BANGcoda_BANG] = ACTIONS(293),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(293),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(293),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(293),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(293),
    [anon_sym_BANGfine_BANG] = ACTIONS(293),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(293),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(293),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(293),
    [sym_parts_line] = ACTIONS(293),
    [sym_instruction] = ACTIONS(293),
    [sym_key] = ACTIONS(293),
    [sym_macros] = ACTIONS(293),
    [sym_meter] = ACTIONS(293),
    [sym_notes] = ACTIONS(293),
    [anon_sym_X_COLON] = ACTIONS(293),
    [sym_remark] = ACTIONS(293),
    [sym_rhythm_line] = ACTIONS(293),
    [anon_sym_s_COLON] = ACTIONS(293),
    [sym_tempo] = ACTIONS(293),
    [sym_tune_title] = ACTIONS(293),
    [sym_unit_note_length] = ACTIONS(293),
    [anon_sym_U_COLON] = ACTIONS(293),
    [sym_voice] = ACTIONS(293),
    [anon_sym_w_COLON] = ACTIONS(293),
    [sym_words_postbody] = ACTIONS(293),
  },
  [22] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(19),
    [ts_builtin_sym_end] = ACTIONS(303),
    [sym__NL] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(284),
    [sym_COMMENT] = ACTIONS(305),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(303),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(305),
    [aux_sym__music_content_token1] = ACTIONS(305),
    [sym_slur_open] = ACTIONS(305),
    [sym_slur_close] = ACTIONS(303),
    [anon_sym_LBRACK] = ACTIONS(305),
    [sym_alteration] = ACTIONS(303),
    [sym_note_letter] = ACTIONS(303),
    [sym_rest] = ACTIONS(303),
    [anon_sym_Z] = ACTIONS(303),
    [anon_sym_X] = ACTIONS(305),
    [aux_sym_grace_note_token1] = ACTIONS(303),
    [aux_sym_chord_symbol_token1] = ACTIONS(305),
    [sym_annotation] = ACTIONS(303),
    [sym_tuplet_marker] = ACTIONS(303),
    [sym_decoration_shorthand] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(284),
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
    [anon_sym_X_COLON] = ACTIONS(303),
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
  [23] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym__NL] = ACTIONS(295),
    [sym_COMMENT] = ACTIONS(295),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(293),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(295),
    [aux_sym__music_content_token1] = ACTIONS(295),
    [sym_slur_open] = ACTIONS(295),
    [sym_slur_close] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(295),
    [sym_alteration] = ACTIONS(293),
    [sym_note_letter] = ACTIONS(293),
    [sym_rest] = ACTIONS(293),
    [anon_sym_Z] = ACTIONS(293),
    [anon_sym_X] = ACTIONS(295),
    [aux_sym_grace_note_token1] = ACTIONS(293),
    [aux_sym_chord_symbol_token1] = ACTIONS(295),
    [sym_annotation] = ACTIONS(293),
    [sym_tuplet_marker] = ACTIONS(293),
    [sym_decoration_shorthand] = ACTIONS(295),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(297),
    [sym_bar_line] = ACTIONS(295),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(293),
    [sym_thin_double_bar_line] = ACTIONS(293),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(293),
    [sym_start_of_repeated_section] = ACTIONS(293),
    [sym_end_of_repeated_section] = ACTIONS(293),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(293),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(307),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(309),
    [anon_sym_BANGtrill_BANG] = ACTIONS(293),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(293),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(293),
    [anon_sym_BANGmordent_BANG] = ACTIONS(293),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(293),
    [anon_sym_BANGroll_BANG] = ACTIONS(293),
    [anon_sym_BANGturn_BANG] = ACTIONS(293),
    [anon_sym_BANGturnx_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(293),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_BANG] = ACTIONS(293),
    [anon_sym_BANGaccent_BANG] = ACTIONS(293),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(293),
    [anon_sym_BANGfermata_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(293),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(293),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(293),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(293),
    [anon_sym_BANGplus_BANG] = ACTIONS(293),
    [anon_sym_BANGsnap_BANG] = ACTIONS(293),
    [anon_sym_BANGslide_BANG] = ACTIONS(293),
    [anon_sym_BANGwedge_BANG] = ACTIONS(293),
    [anon_sym_BANGupbow_BANG] = ACTIONS(293),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(293),
    [anon_sym_BANGopen_BANG] = ACTIONS(293),
    [anon_sym_BANGthumb_BANG] = ACTIONS(293),
    [anon_sym_BANGbreath_BANG] = ACTIONS(293),
    [anon_sym_BANGpppp_BANG] = ACTIONS(293),
    [anon_sym_BANGppp_BANG] = ACTIONS(293),
    [anon_sym_BANGpp_BANG] = ACTIONS(293),
    [anon_sym_BANGp_BANG] = ACTIONS(293),
    [anon_sym_BANGmp_BANG] = ACTIONS(293),
    [anon_sym_BANGmf_BANG] = ACTIONS(293),
    [anon_sym_BANGf_BANG] = ACTIONS(293),
    [anon_sym_BANGff_BANG] = ACTIONS(293),
    [anon_sym_BANGfff_BANG] = ACTIONS(293),
    [anon_sym_BANGffff_BANG] = ACTIONS(293),
    [anon_sym_BANGsfz_BANG] = ACTIONS(293),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGsegno_BANG] = ACTIONS(293),
    [anon_sym_BANGcoda_BANG] = ACTIONS(293),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(293),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(293),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(293),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(293),
    [anon_sym_BANGfine_BANG] = ACTIONS(293),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(293),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(293),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(293),
    [sym_parts_line] = ACTIONS(293),
    [sym_instruction] = ACTIONS(293),
    [sym_key] = ACTIONS(293),
    [sym_macros] = ACTIONS(293),
    [sym_meter] = ACTIONS(293),
    [sym_notes] = ACTIONS(293),
    [anon_sym_X_COLON] = ACTIONS(293),
    [sym_remark] = ACTIONS(293),
    [sym_rhythm_line] = ACTIONS(293),
    [anon_sym_s_COLON] = ACTIONS(293),
    [sym_tempo] = ACTIONS(293),
    [sym_tune_title] = ACTIONS(293),
    [sym_unit_note_length] = ACTIONS(293),
    [anon_sym_U_COLON] = ACTIONS(293),
    [sym_voice] = ACTIONS(293),
    [anon_sym_w_COLON] = ACTIONS(293),
    [sym_words_postbody] = ACTIONS(293),
  },
  [24] = {
    [ts_builtin_sym_end] = ACTIONS(311),
    [sym__NL] = ACTIONS(313),
    [sym_BEAM_SEPARATOR] = ACTIONS(311),
    [sym_COMMENT] = ACTIONS(313),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(311),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(313),
    [aux_sym__music_content_token1] = ACTIONS(313),
    [sym_slur_open] = ACTIONS(313),
    [sym_slur_close] = ACTIONS(311),
    [aux_sym_note_construct_token1] = ACTIONS(311),
    [anon_sym_LBRACK] = ACTIONS(313),
    [sym_alteration] = ACTIONS(311),
    [sym_note_letter] = ACTIONS(311),
    [sym_rest] = ACTIONS(311),
    [anon_sym_Z] = ACTIONS(311),
    [anon_sym_X] = ACTIONS(313),
    [sym_rhythm] = ACTIONS(315),
    [aux_sym_grace_note_token1] = ACTIONS(311),
    [aux_sym_chord_symbol_token1] = ACTIONS(313),
    [sym_annotation] = ACTIONS(311),
    [sym_tuplet_marker] = ACTIONS(311),
    [sym_decoration_shorthand] = ACTIONS(313),
    [sym_bar_line] = ACTIONS(313),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(311),
    [sym_thin_double_bar_line] = ACTIONS(311),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(311),
    [sym_start_of_repeated_section] = ACTIONS(311),
    [sym_end_of_repeated_section] = ACTIONS(311),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(311),
    [anon_sym_BANGtrill_BANG] = ACTIONS(311),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(311),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(311),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(311),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(311),
    [anon_sym_BANGmordent_BANG] = ACTIONS(311),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(311),
    [anon_sym_BANGroll_BANG] = ACTIONS(311),
    [anon_sym_BANGturn_BANG] = ACTIONS(311),
    [anon_sym_BANGturnx_BANG] = ACTIONS(311),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(311),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(311),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(311),
    [anon_sym_BANG_GT_BANG] = ACTIONS(311),
    [anon_sym_BANGaccent_BANG] = ACTIONS(311),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(311),
    [anon_sym_BANGfermata_BANG] = ACTIONS(311),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(311),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(311),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(311),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(311),
    [anon_sym_BANGplus_BANG] = ACTIONS(311),
    [anon_sym_BANGsnap_BANG] = ACTIONS(311),
    [anon_sym_BANGslide_BANG] = ACTIONS(311),
    [anon_sym_BANGwedge_BANG] = ACTIONS(311),
    [anon_sym_BANGupbow_BANG] = ACTIONS(311),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(311),
    [anon_sym_BANGopen_BANG] = ACTIONS(311),
    [anon_sym_BANGthumb_BANG] = ACTIONS(311),
    [anon_sym_BANGbreath_BANG] = ACTIONS(311),
    [anon_sym_BANGpppp_BANG] = ACTIONS(311),
    [anon_sym_BANGppp_BANG] = ACTIONS(311),
    [anon_sym_BANGpp_BANG] = ACTIONS(311),
    [anon_sym_BANGp_BANG] = ACTIONS(311),
    [anon_sym_BANGmp_BANG] = ACTIONS(311),
    [anon_sym_BANGmf_BANG] = ACTIONS(311),
    [anon_sym_BANGf_BANG] = ACTIONS(311),
    [anon_sym_BANGff_BANG] = ACTIONS(311),
    [anon_sym_BANGfff_BANG] = ACTIONS(311),
    [anon_sym_BANGffff_BANG] = ACTIONS(311),
    [anon_sym_BANGsfz_BANG] = ACTIONS(311),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(311),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(311),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(311),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(311),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(311),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(311),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(311),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(311),
    [anon_sym_BANGsegno_BANG] = ACTIONS(311),
    [anon_sym_BANGcoda_BANG] = ACTIONS(311),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(311),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(311),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(311),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(311),
    [anon_sym_BANGfine_BANG] = ACTIONS(311),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(311),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(311),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(311),
    [sym_parts_line] = ACTIONS(311),
    [sym_instruction] = ACTIONS(311),
    [sym_key] = ACTIONS(311),
    [sym_macros] = ACTIONS(311),
    [sym_meter] = ACTIONS(311),
    [sym_notes] = ACTIONS(311),
    [anon_sym_X_COLON] = ACTIONS(311),
    [sym_remark] = ACTIONS(311),
    [sym_rhythm_line] = ACTIONS(311),
    [anon_sym_s_COLON] = ACTIONS(311),
    [sym_tempo] = ACTIONS(311),
    [sym_tune_title] = ACTIONS(311),
    [sym_unit_note_length] = ACTIONS(311),
    [anon_sym_U_COLON] = ACTIONS(311),
    [sym_voice] = ACTIONS(311),
    [anon_sym_w_COLON] = ACTIONS(311),
    [sym_words_postbody] = ACTIONS(311),
  },
  [25] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym__NL] = ACTIONS(319),
    [sym_BEAM_SEPARATOR] = ACTIONS(317),
    [sym_COMMENT] = ACTIONS(319),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(317),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(319),
    [aux_sym__music_content_token1] = ACTIONS(319),
    [sym_slur_open] = ACTIONS(319),
    [sym_slur_close] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_alteration] = ACTIONS(317),
    [sym_note_letter] = ACTIONS(317),
    [sym_rest] = ACTIONS(317),
    [anon_sym_Z] = ACTIONS(317),
    [anon_sym_X] = ACTIONS(319),
    [sym_rhythm] = ACTIONS(321),
    [aux_sym_grace_note_token1] = ACTIONS(317),
    [aux_sym_chord_symbol_token1] = ACTIONS(319),
    [sym_annotation] = ACTIONS(317),
    [sym_tuplet_marker] = ACTIONS(317),
    [sym_decoration_shorthand] = ACTIONS(319),
    [sym_bar_line] = ACTIONS(319),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(317),
    [sym_thin_double_bar_line] = ACTIONS(317),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(317),
    [sym_start_of_repeated_section] = ACTIONS(317),
    [sym_end_of_repeated_section] = ACTIONS(317),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(317),
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
    [sym_parts_line] = ACTIONS(317),
    [sym_instruction] = ACTIONS(317),
    [sym_key] = ACTIONS(317),
    [sym_macros] = ACTIONS(317),
    [sym_meter] = ACTIONS(317),
    [sym_notes] = ACTIONS(317),
    [anon_sym_X_COLON] = ACTIONS(317),
    [sym_remark] = ACTIONS(317),
    [sym_rhythm_line] = ACTIONS(317),
    [anon_sym_s_COLON] = ACTIONS(317),
    [sym_tempo] = ACTIONS(317),
    [sym_tune_title] = ACTIONS(317),
    [sym_unit_note_length] = ACTIONS(317),
    [anon_sym_U_COLON] = ACTIONS(317),
    [sym_voice] = ACTIONS(317),
    [anon_sym_w_COLON] = ACTIONS(317),
    [sym_words_postbody] = ACTIONS(317),
  },
  [26] = {
    [ts_builtin_sym_end] = ACTIONS(286),
    [sym__NL] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(286),
    [sym_COMMENT] = ACTIONS(288),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(286),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(288),
    [aux_sym__music_content_token1] = ACTIONS(288),
    [sym_slur_open] = ACTIONS(288),
    [sym_slur_close] = ACTIONS(286),
    [anon_sym_LBRACK] = ACTIONS(288),
    [sym_alteration] = ACTIONS(286),
    [sym_note_letter] = ACTIONS(286),
    [sym_rest] = ACTIONS(286),
    [anon_sym_Z] = ACTIONS(286),
    [anon_sym_X] = ACTIONS(288),
    [aux_sym_grace_note_token1] = ACTIONS(286),
    [aux_sym_chord_symbol_token1] = ACTIONS(288),
    [sym_annotation] = ACTIONS(286),
    [sym_tuplet_marker] = ACTIONS(286),
    [sym_decoration_shorthand] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(286),
    [sym_bar_line] = ACTIONS(288),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(286),
    [sym_thin_double_bar_line] = ACTIONS(286),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(286),
    [sym_start_of_repeated_section] = ACTIONS(286),
    [sym_end_of_repeated_section] = ACTIONS(286),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(286),
    [anon_sym_BANGtrill_BANG] = ACTIONS(286),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(286),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(286),
    [anon_sym_BANGmordent_BANG] = ACTIONS(286),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(286),
    [anon_sym_BANGroll_BANG] = ACTIONS(286),
    [anon_sym_BANGturn_BANG] = ACTIONS(286),
    [anon_sym_BANGturnx_BANG] = ACTIONS(286),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(286),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(286),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(286),
    [anon_sym_BANG_GT_BANG] = ACTIONS(286),
    [anon_sym_BANGaccent_BANG] = ACTIONS(286),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(286),
    [anon_sym_BANGfermata_BANG] = ACTIONS(286),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(286),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(286),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(286),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(286),
    [anon_sym_BANGplus_BANG] = ACTIONS(286),
    [anon_sym_BANGsnap_BANG] = ACTIONS(286),
    [anon_sym_BANGslide_BANG] = ACTIONS(286),
    [anon_sym_BANGwedge_BANG] = ACTIONS(286),
    [anon_sym_BANGupbow_BANG] = ACTIONS(286),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(286),
    [anon_sym_BANGopen_BANG] = ACTIONS(286),
    [anon_sym_BANGthumb_BANG] = ACTIONS(286),
    [anon_sym_BANGbreath_BANG] = ACTIONS(286),
    [anon_sym_BANGpppp_BANG] = ACTIONS(286),
    [anon_sym_BANGppp_BANG] = ACTIONS(286),
    [anon_sym_BANGpp_BANG] = ACTIONS(286),
    [anon_sym_BANGp_BANG] = ACTIONS(286),
    [anon_sym_BANGmp_BANG] = ACTIONS(286),
    [anon_sym_BANGmf_BANG] = ACTIONS(286),
    [anon_sym_BANGf_BANG] = ACTIONS(286),
    [anon_sym_BANGff_BANG] = ACTIONS(286),
    [anon_sym_BANGfff_BANG] = ACTIONS(286),
    [anon_sym_BANGffff_BANG] = ACTIONS(286),
    [anon_sym_BANGsfz_BANG] = ACTIONS(286),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(286),
    [anon_sym_BANGsegno_BANG] = ACTIONS(286),
    [anon_sym_BANGcoda_BANG] = ACTIONS(286),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(286),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(286),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(286),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(286),
    [anon_sym_BANGfine_BANG] = ACTIONS(286),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(286),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(286),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(286),
    [sym_parts_line] = ACTIONS(286),
    [sym_instruction] = ACTIONS(286),
    [sym_key] = ACTIONS(286),
    [sym_macros] = ACTIONS(286),
    [sym_meter] = ACTIONS(286),
    [sym_notes] = ACTIONS(286),
    [anon_sym_X_COLON] = ACTIONS(286),
    [sym_remark] = ACTIONS(286),
    [sym_rhythm_line] = ACTIONS(286),
    [anon_sym_s_COLON] = ACTIONS(286),
    [sym_tempo] = ACTIONS(286),
    [sym_tune_title] = ACTIONS(286),
    [sym_unit_note_length] = ACTIONS(286),
    [anon_sym_U_COLON] = ACTIONS(286),
    [sym_voice] = ACTIONS(286),
    [anon_sym_w_COLON] = ACTIONS(286),
    [sym_words_postbody] = ACTIONS(286),
  },
  [27] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [sym__NL] = ACTIONS(325),
    [sym_BEAM_SEPARATOR] = ACTIONS(323),
    [sym_COMMENT] = ACTIONS(325),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(323),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(325),
    [aux_sym__music_content_token1] = ACTIONS(325),
    [sym_slur_open] = ACTIONS(325),
    [sym_slur_close] = ACTIONS(323),
    [aux_sym_note_construct_token1] = ACTIONS(327),
    [anon_sym_LBRACK] = ACTIONS(325),
    [sym_alteration] = ACTIONS(323),
    [sym_note_letter] = ACTIONS(323),
    [sym_rest] = ACTIONS(323),
    [anon_sym_Z] = ACTIONS(323),
    [anon_sym_X] = ACTIONS(325),
    [aux_sym_grace_note_token1] = ACTIONS(323),
    [aux_sym_chord_symbol_token1] = ACTIONS(325),
    [sym_annotation] = ACTIONS(323),
    [sym_tuplet_marker] = ACTIONS(323),
    [sym_decoration_shorthand] = ACTIONS(325),
    [sym_bar_line] = ACTIONS(325),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(323),
    [sym_thin_double_bar_line] = ACTIONS(323),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(323),
    [sym_start_of_repeated_section] = ACTIONS(323),
    [sym_end_of_repeated_section] = ACTIONS(323),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(323),
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
    [sym_parts_line] = ACTIONS(323),
    [sym_instruction] = ACTIONS(323),
    [sym_key] = ACTIONS(323),
    [sym_macros] = ACTIONS(323),
    [sym_meter] = ACTIONS(323),
    [sym_notes] = ACTIONS(323),
    [anon_sym_X_COLON] = ACTIONS(323),
    [sym_remark] = ACTIONS(323),
    [sym_rhythm_line] = ACTIONS(323),
    [anon_sym_s_COLON] = ACTIONS(323),
    [sym_tempo] = ACTIONS(323),
    [sym_tune_title] = ACTIONS(323),
    [sym_unit_note_length] = ACTIONS(323),
    [anon_sym_U_COLON] = ACTIONS(323),
    [sym_voice] = ACTIONS(323),
    [anon_sym_w_COLON] = ACTIONS(323),
    [sym_words_postbody] = ACTIONS(323),
  },
  [28] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [sym__NL] = ACTIONS(331),
    [sym_BEAM_SEPARATOR] = ACTIONS(329),
    [sym_COMMENT] = ACTIONS(331),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(329),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(331),
    [aux_sym__music_content_token1] = ACTIONS(331),
    [sym_slur_open] = ACTIONS(331),
    [sym_slur_close] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(331),
    [sym_alteration] = ACTIONS(329),
    [sym_note_letter] = ACTIONS(329),
    [sym_rest] = ACTIONS(329),
    [anon_sym_Z] = ACTIONS(329),
    [anon_sym_X] = ACTIONS(331),
    [sym_rhythm] = ACTIONS(333),
    [aux_sym_grace_note_token1] = ACTIONS(329),
    [aux_sym_chord_symbol_token1] = ACTIONS(331),
    [sym_annotation] = ACTIONS(329),
    [sym_tuplet_marker] = ACTIONS(329),
    [sym_decoration_shorthand] = ACTIONS(331),
    [sym_bar_line] = ACTIONS(331),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(329),
    [sym_thin_double_bar_line] = ACTIONS(329),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(329),
    [sym_start_of_repeated_section] = ACTIONS(329),
    [sym_end_of_repeated_section] = ACTIONS(329),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(329),
    [anon_sym_BANGtrill_BANG] = ACTIONS(329),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(329),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(329),
    [anon_sym_BANGmordent_BANG] = ACTIONS(329),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(329),
    [anon_sym_BANGroll_BANG] = ACTIONS(329),
    [anon_sym_BANGturn_BANG] = ACTIONS(329),
    [anon_sym_BANGturnx_BANG] = ACTIONS(329),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(329),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(329),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(329),
    [anon_sym_BANG_GT_BANG] = ACTIONS(329),
    [anon_sym_BANGaccent_BANG] = ACTIONS(329),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(329),
    [anon_sym_BANGfermata_BANG] = ACTIONS(329),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(329),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(329),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(329),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(329),
    [anon_sym_BANGplus_BANG] = ACTIONS(329),
    [anon_sym_BANGsnap_BANG] = ACTIONS(329),
    [anon_sym_BANGslide_BANG] = ACTIONS(329),
    [anon_sym_BANGwedge_BANG] = ACTIONS(329),
    [anon_sym_BANGupbow_BANG] = ACTIONS(329),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(329),
    [anon_sym_BANGopen_BANG] = ACTIONS(329),
    [anon_sym_BANGthumb_BANG] = ACTIONS(329),
    [anon_sym_BANGbreath_BANG] = ACTIONS(329),
    [anon_sym_BANGpppp_BANG] = ACTIONS(329),
    [anon_sym_BANGppp_BANG] = ACTIONS(329),
    [anon_sym_BANGpp_BANG] = ACTIONS(329),
    [anon_sym_BANGp_BANG] = ACTIONS(329),
    [anon_sym_BANGmp_BANG] = ACTIONS(329),
    [anon_sym_BANGmf_BANG] = ACTIONS(329),
    [anon_sym_BANGf_BANG] = ACTIONS(329),
    [anon_sym_BANGff_BANG] = ACTIONS(329),
    [anon_sym_BANGfff_BANG] = ACTIONS(329),
    [anon_sym_BANGffff_BANG] = ACTIONS(329),
    [anon_sym_BANGsfz_BANG] = ACTIONS(329),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGsegno_BANG] = ACTIONS(329),
    [anon_sym_BANGcoda_BANG] = ACTIONS(329),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(329),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(329),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(329),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(329),
    [anon_sym_BANGfine_BANG] = ACTIONS(329),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(329),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(329),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(329),
    [sym_parts_line] = ACTIONS(329),
    [sym_instruction] = ACTIONS(329),
    [sym_key] = ACTIONS(329),
    [sym_macros] = ACTIONS(329),
    [sym_meter] = ACTIONS(329),
    [sym_notes] = ACTIONS(329),
    [anon_sym_X_COLON] = ACTIONS(329),
    [sym_remark] = ACTIONS(329),
    [sym_rhythm_line] = ACTIONS(329),
    [anon_sym_s_COLON] = ACTIONS(329),
    [sym_tempo] = ACTIONS(329),
    [sym_tune_title] = ACTIONS(329),
    [sym_unit_note_length] = ACTIONS(329),
    [anon_sym_U_COLON] = ACTIONS(329),
    [sym_voice] = ACTIONS(329),
    [anon_sym_w_COLON] = ACTIONS(329),
    [sym_words_postbody] = ACTIONS(329),
  },
  [29] = {
    [ts_builtin_sym_end] = ACTIONS(335),
    [sym__NL] = ACTIONS(337),
    [sym_BEAM_SEPARATOR] = ACTIONS(335),
    [sym_COMMENT] = ACTIONS(337),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(335),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(337),
    [aux_sym__music_content_token1] = ACTIONS(337),
    [sym_slur_open] = ACTIONS(337),
    [sym_slur_close] = ACTIONS(335),
    [anon_sym_LBRACK] = ACTIONS(337),
    [sym_alteration] = ACTIONS(335),
    [sym_note_letter] = ACTIONS(335),
    [sym_rest] = ACTIONS(335),
    [anon_sym_Z] = ACTIONS(335),
    [anon_sym_X] = ACTIONS(337),
    [sym_rhythm] = ACTIONS(339),
    [aux_sym_grace_note_token1] = ACTIONS(335),
    [aux_sym_chord_symbol_token1] = ACTIONS(337),
    [sym_annotation] = ACTIONS(335),
    [sym_tuplet_marker] = ACTIONS(335),
    [sym_decoration_shorthand] = ACTIONS(337),
    [sym_bar_line] = ACTIONS(337),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(335),
    [sym_thin_double_bar_line] = ACTIONS(335),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(335),
    [sym_start_of_repeated_section] = ACTIONS(335),
    [sym_end_of_repeated_section] = ACTIONS(335),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(335),
    [anon_sym_BANGtrill_BANG] = ACTIONS(335),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(335),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(335),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(335),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(335),
    [anon_sym_BANGmordent_BANG] = ACTIONS(335),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(335),
    [anon_sym_BANGroll_BANG] = ACTIONS(335),
    [anon_sym_BANGturn_BANG] = ACTIONS(335),
    [anon_sym_BANGturnx_BANG] = ACTIONS(335),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(335),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(335),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(335),
    [anon_sym_BANG_GT_BANG] = ACTIONS(335),
    [anon_sym_BANGaccent_BANG] = ACTIONS(335),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(335),
    [anon_sym_BANGfermata_BANG] = ACTIONS(335),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(335),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(335),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(335),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(335),
    [anon_sym_BANGplus_BANG] = ACTIONS(335),
    [anon_sym_BANGsnap_BANG] = ACTIONS(335),
    [anon_sym_BANGslide_BANG] = ACTIONS(335),
    [anon_sym_BANGwedge_BANG] = ACTIONS(335),
    [anon_sym_BANGupbow_BANG] = ACTIONS(335),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(335),
    [anon_sym_BANGopen_BANG] = ACTIONS(335),
    [anon_sym_BANGthumb_BANG] = ACTIONS(335),
    [anon_sym_BANGbreath_BANG] = ACTIONS(335),
    [anon_sym_BANGpppp_BANG] = ACTIONS(335),
    [anon_sym_BANGppp_BANG] = ACTIONS(335),
    [anon_sym_BANGpp_BANG] = ACTIONS(335),
    [anon_sym_BANGp_BANG] = ACTIONS(335),
    [anon_sym_BANGmp_BANG] = ACTIONS(335),
    [anon_sym_BANGmf_BANG] = ACTIONS(335),
    [anon_sym_BANGf_BANG] = ACTIONS(335),
    [anon_sym_BANGff_BANG] = ACTIONS(335),
    [anon_sym_BANGfff_BANG] = ACTIONS(335),
    [anon_sym_BANGffff_BANG] = ACTIONS(335),
    [anon_sym_BANGsfz_BANG] = ACTIONS(335),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(335),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(335),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(335),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(335),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(335),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(335),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(335),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(335),
    [anon_sym_BANGsegno_BANG] = ACTIONS(335),
    [anon_sym_BANGcoda_BANG] = ACTIONS(335),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(335),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(335),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(335),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(335),
    [anon_sym_BANGfine_BANG] = ACTIONS(335),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(335),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(335),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(335),
    [sym_parts_line] = ACTIONS(335),
    [sym_instruction] = ACTIONS(335),
    [sym_key] = ACTIONS(335),
    [sym_macros] = ACTIONS(335),
    [sym_meter] = ACTIONS(335),
    [sym_notes] = ACTIONS(335),
    [anon_sym_X_COLON] = ACTIONS(335),
    [sym_remark] = ACTIONS(335),
    [sym_rhythm_line] = ACTIONS(335),
    [anon_sym_s_COLON] = ACTIONS(335),
    [sym_tempo] = ACTIONS(335),
    [sym_tune_title] = ACTIONS(335),
    [sym_unit_note_length] = ACTIONS(335),
    [anon_sym_U_COLON] = ACTIONS(335),
    [sym_voice] = ACTIONS(335),
    [anon_sym_w_COLON] = ACTIONS(335),
    [sym_words_postbody] = ACTIONS(335),
  },
  [30] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [sym__NL] = ACTIONS(343),
    [sym_BEAM_SEPARATOR] = ACTIONS(341),
    [sym_COMMENT] = ACTIONS(343),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(341),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(343),
    [aux_sym__music_content_token1] = ACTIONS(343),
    [sym_slur_open] = ACTIONS(343),
    [sym_slur_close] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [sym_alteration] = ACTIONS(341),
    [sym_note_letter] = ACTIONS(341),
    [sym_rest] = ACTIONS(341),
    [anon_sym_Z] = ACTIONS(341),
    [anon_sym_X] = ACTIONS(343),
    [sym_rhythm] = ACTIONS(345),
    [aux_sym_grace_note_token1] = ACTIONS(341),
    [aux_sym_chord_symbol_token1] = ACTIONS(343),
    [sym_annotation] = ACTIONS(341),
    [sym_tuplet_marker] = ACTIONS(341),
    [sym_decoration_shorthand] = ACTIONS(343),
    [sym_bar_line] = ACTIONS(343),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(341),
    [sym_thin_double_bar_line] = ACTIONS(341),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(341),
    [sym_start_of_repeated_section] = ACTIONS(341),
    [sym_end_of_repeated_section] = ACTIONS(341),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(341),
    [anon_sym_BANGtrill_BANG] = ACTIONS(341),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(341),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(341),
    [anon_sym_BANGmordent_BANG] = ACTIONS(341),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(341),
    [anon_sym_BANGroll_BANG] = ACTIONS(341),
    [anon_sym_BANGturn_BANG] = ACTIONS(341),
    [anon_sym_BANGturnx_BANG] = ACTIONS(341),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(341),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(341),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(341),
    [anon_sym_BANG_GT_BANG] = ACTIONS(341),
    [anon_sym_BANGaccent_BANG] = ACTIONS(341),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(341),
    [anon_sym_BANGfermata_BANG] = ACTIONS(341),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(341),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(341),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(341),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(341),
    [anon_sym_BANGplus_BANG] = ACTIONS(341),
    [anon_sym_BANGsnap_BANG] = ACTIONS(341),
    [anon_sym_BANGslide_BANG] = ACTIONS(341),
    [anon_sym_BANGwedge_BANG] = ACTIONS(341),
    [anon_sym_BANGupbow_BANG] = ACTIONS(341),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(341),
    [anon_sym_BANGopen_BANG] = ACTIONS(341),
    [anon_sym_BANGthumb_BANG] = ACTIONS(341),
    [anon_sym_BANGbreath_BANG] = ACTIONS(341),
    [anon_sym_BANGpppp_BANG] = ACTIONS(341),
    [anon_sym_BANGppp_BANG] = ACTIONS(341),
    [anon_sym_BANGpp_BANG] = ACTIONS(341),
    [anon_sym_BANGp_BANG] = ACTIONS(341),
    [anon_sym_BANGmp_BANG] = ACTIONS(341),
    [anon_sym_BANGmf_BANG] = ACTIONS(341),
    [anon_sym_BANGf_BANG] = ACTIONS(341),
    [anon_sym_BANGff_BANG] = ACTIONS(341),
    [anon_sym_BANGfff_BANG] = ACTIONS(341),
    [anon_sym_BANGffff_BANG] = ACTIONS(341),
    [anon_sym_BANGsfz_BANG] = ACTIONS(341),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGsegno_BANG] = ACTIONS(341),
    [anon_sym_BANGcoda_BANG] = ACTIONS(341),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(341),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(341),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(341),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(341),
    [anon_sym_BANGfine_BANG] = ACTIONS(341),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(341),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(341),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(341),
    [sym_parts_line] = ACTIONS(341),
    [sym_instruction] = ACTIONS(341),
    [sym_key] = ACTIONS(341),
    [sym_macros] = ACTIONS(341),
    [sym_meter] = ACTIONS(341),
    [sym_notes] = ACTIONS(341),
    [anon_sym_X_COLON] = ACTIONS(341),
    [sym_remark] = ACTIONS(341),
    [sym_rhythm_line] = ACTIONS(341),
    [anon_sym_s_COLON] = ACTIONS(341),
    [sym_tempo] = ACTIONS(341),
    [sym_tune_title] = ACTIONS(341),
    [sym_unit_note_length] = ACTIONS(341),
    [anon_sym_U_COLON] = ACTIONS(341),
    [sym_voice] = ACTIONS(341),
    [anon_sym_w_COLON] = ACTIONS(341),
    [sym_words_postbody] = ACTIONS(341),
  },
  [31] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [sym__NL] = ACTIONS(349),
    [sym_BEAM_SEPARATOR] = ACTIONS(347),
    [sym_COMMENT] = ACTIONS(349),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(347),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(349),
    [aux_sym__music_content_token1] = ACTIONS(349),
    [sym_slur_open] = ACTIONS(349),
    [sym_slur_close] = ACTIONS(347),
    [aux_sym_note_construct_token1] = ACTIONS(351),
    [anon_sym_LBRACK] = ACTIONS(349),
    [sym_alteration] = ACTIONS(347),
    [sym_note_letter] = ACTIONS(347),
    [sym_rest] = ACTIONS(347),
    [anon_sym_Z] = ACTIONS(347),
    [anon_sym_X] = ACTIONS(349),
    [aux_sym_grace_note_token1] = ACTIONS(347),
    [aux_sym_chord_symbol_token1] = ACTIONS(349),
    [sym_annotation] = ACTIONS(347),
    [sym_tuplet_marker] = ACTIONS(347),
    [sym_decoration_shorthand] = ACTIONS(349),
    [sym_bar_line] = ACTIONS(349),
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
    [sym_parts_line] = ACTIONS(347),
    [sym_instruction] = ACTIONS(347),
    [sym_key] = ACTIONS(347),
    [sym_macros] = ACTIONS(347),
    [sym_meter] = ACTIONS(347),
    [sym_notes] = ACTIONS(347),
    [anon_sym_X_COLON] = ACTIONS(347),
    [sym_remark] = ACTIONS(347),
    [sym_rhythm_line] = ACTIONS(347),
    [anon_sym_s_COLON] = ACTIONS(347),
    [sym_tempo] = ACTIONS(347),
    [sym_tune_title] = ACTIONS(347),
    [sym_unit_note_length] = ACTIONS(347),
    [anon_sym_U_COLON] = ACTIONS(347),
    [sym_voice] = ACTIONS(347),
    [anon_sym_w_COLON] = ACTIONS(347),
    [sym_words_postbody] = ACTIONS(347),
  },
  [32] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym__NL] = ACTIONS(355),
    [sym_BEAM_SEPARATOR] = ACTIONS(353),
    [sym_COMMENT] = ACTIONS(355),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(353),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(355),
    [aux_sym__music_content_token1] = ACTIONS(355),
    [sym_slur_open] = ACTIONS(355),
    [sym_slur_close] = ACTIONS(353),
    [aux_sym_note_construct_token1] = ACTIONS(357),
    [anon_sym_LBRACK] = ACTIONS(355),
    [sym_alteration] = ACTIONS(353),
    [sym_note_letter] = ACTIONS(353),
    [sym_rest] = ACTIONS(353),
    [anon_sym_Z] = ACTIONS(353),
    [anon_sym_X] = ACTIONS(355),
    [aux_sym_grace_note_token1] = ACTIONS(353),
    [aux_sym_chord_symbol_token1] = ACTIONS(355),
    [sym_annotation] = ACTIONS(353),
    [sym_tuplet_marker] = ACTIONS(353),
    [sym_decoration_shorthand] = ACTIONS(355),
    [sym_bar_line] = ACTIONS(355),
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
    [sym_parts_line] = ACTIONS(353),
    [sym_instruction] = ACTIONS(353),
    [sym_key] = ACTIONS(353),
    [sym_macros] = ACTIONS(353),
    [sym_meter] = ACTIONS(353),
    [sym_notes] = ACTIONS(353),
    [anon_sym_X_COLON] = ACTIONS(353),
    [sym_remark] = ACTIONS(353),
    [sym_rhythm_line] = ACTIONS(353),
    [anon_sym_s_COLON] = ACTIONS(353),
    [sym_tempo] = ACTIONS(353),
    [sym_tune_title] = ACTIONS(353),
    [sym_unit_note_length] = ACTIONS(353),
    [anon_sym_U_COLON] = ACTIONS(353),
    [sym_voice] = ACTIONS(353),
    [anon_sym_w_COLON] = ACTIONS(353),
    [sym_words_postbody] = ACTIONS(353),
  },
  [33] = {
    [ts_builtin_sym_end] = ACTIONS(359),
    [sym__NL] = ACTIONS(361),
    [sym_BEAM_SEPARATOR] = ACTIONS(359),
    [sym_COMMENT] = ACTIONS(361),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(359),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(361),
    [aux_sym__music_content_token1] = ACTIONS(361),
    [sym_slur_open] = ACTIONS(361),
    [sym_slur_close] = ACTIONS(359),
    [aux_sym_note_construct_token1] = ACTIONS(359),
    [anon_sym_LBRACK] = ACTIONS(361),
    [sym_alteration] = ACTIONS(359),
    [sym_note_letter] = ACTIONS(359),
    [sym_rest] = ACTIONS(359),
    [anon_sym_Z] = ACTIONS(359),
    [anon_sym_X] = ACTIONS(361),
    [aux_sym_grace_note_token1] = ACTIONS(359),
    [aux_sym_chord_symbol_token1] = ACTIONS(361),
    [sym_annotation] = ACTIONS(359),
    [sym_tuplet_marker] = ACTIONS(359),
    [sym_decoration_shorthand] = ACTIONS(361),
    [sym_bar_line] = ACTIONS(361),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(359),
    [sym_thin_double_bar_line] = ACTIONS(359),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(359),
    [sym_start_of_repeated_section] = ACTIONS(359),
    [sym_end_of_repeated_section] = ACTIONS(359),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(359),
    [anon_sym_BANGtrill_BANG] = ACTIONS(359),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(359),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(359),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(359),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(359),
    [anon_sym_BANGmordent_BANG] = ACTIONS(359),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(359),
    [anon_sym_BANGroll_BANG] = ACTIONS(359),
    [anon_sym_BANGturn_BANG] = ACTIONS(359),
    [anon_sym_BANGturnx_BANG] = ACTIONS(359),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(359),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(359),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(359),
    [anon_sym_BANG_GT_BANG] = ACTIONS(359),
    [anon_sym_BANGaccent_BANG] = ACTIONS(359),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(359),
    [anon_sym_BANGfermata_BANG] = ACTIONS(359),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(359),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(359),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(359),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(359),
    [anon_sym_BANGplus_BANG] = ACTIONS(359),
    [anon_sym_BANGsnap_BANG] = ACTIONS(359),
    [anon_sym_BANGslide_BANG] = ACTIONS(359),
    [anon_sym_BANGwedge_BANG] = ACTIONS(359),
    [anon_sym_BANGupbow_BANG] = ACTIONS(359),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(359),
    [anon_sym_BANGopen_BANG] = ACTIONS(359),
    [anon_sym_BANGthumb_BANG] = ACTIONS(359),
    [anon_sym_BANGbreath_BANG] = ACTIONS(359),
    [anon_sym_BANGpppp_BANG] = ACTIONS(359),
    [anon_sym_BANGppp_BANG] = ACTIONS(359),
    [anon_sym_BANGpp_BANG] = ACTIONS(359),
    [anon_sym_BANGp_BANG] = ACTIONS(359),
    [anon_sym_BANGmp_BANG] = ACTIONS(359),
    [anon_sym_BANGmf_BANG] = ACTIONS(359),
    [anon_sym_BANGf_BANG] = ACTIONS(359),
    [anon_sym_BANGff_BANG] = ACTIONS(359),
    [anon_sym_BANGfff_BANG] = ACTIONS(359),
    [anon_sym_BANGffff_BANG] = ACTIONS(359),
    [anon_sym_BANGsfz_BANG] = ACTIONS(359),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(359),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(359),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(359),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(359),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(359),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(359),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(359),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(359),
    [anon_sym_BANGsegno_BANG] = ACTIONS(359),
    [anon_sym_BANGcoda_BANG] = ACTIONS(359),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(359),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(359),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(359),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(359),
    [anon_sym_BANGfine_BANG] = ACTIONS(359),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(359),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(359),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(359),
    [sym_parts_line] = ACTIONS(359),
    [sym_instruction] = ACTIONS(359),
    [sym_key] = ACTIONS(359),
    [sym_macros] = ACTIONS(359),
    [sym_meter] = ACTIONS(359),
    [sym_notes] = ACTIONS(359),
    [anon_sym_X_COLON] = ACTIONS(359),
    [sym_remark] = ACTIONS(359),
    [sym_rhythm_line] = ACTIONS(359),
    [anon_sym_s_COLON] = ACTIONS(359),
    [sym_tempo] = ACTIONS(359),
    [sym_tune_title] = ACTIONS(359),
    [sym_unit_note_length] = ACTIONS(359),
    [anon_sym_U_COLON] = ACTIONS(359),
    [sym_voice] = ACTIONS(359),
    [anon_sym_w_COLON] = ACTIONS(359),
    [sym_words_postbody] = ACTIONS(359),
  },
  [34] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [sym__NL] = ACTIONS(365),
    [sym_BEAM_SEPARATOR] = ACTIONS(363),
    [sym_COMMENT] = ACTIONS(365),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(363),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(365),
    [aux_sym__music_content_token1] = ACTIONS(365),
    [sym_slur_open] = ACTIONS(365),
    [sym_slur_close] = ACTIONS(363),
    [aux_sym_note_construct_token1] = ACTIONS(367),
    [anon_sym_LBRACK] = ACTIONS(365),
    [sym_alteration] = ACTIONS(363),
    [sym_note_letter] = ACTIONS(363),
    [sym_rest] = ACTIONS(363),
    [anon_sym_Z] = ACTIONS(363),
    [anon_sym_X] = ACTIONS(365),
    [aux_sym_grace_note_token1] = ACTIONS(363),
    [aux_sym_chord_symbol_token1] = ACTIONS(365),
    [sym_annotation] = ACTIONS(363),
    [sym_tuplet_marker] = ACTIONS(363),
    [sym_decoration_shorthand] = ACTIONS(365),
    [sym_bar_line] = ACTIONS(365),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(363),
    [sym_thin_double_bar_line] = ACTIONS(363),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(363),
    [sym_start_of_repeated_section] = ACTIONS(363),
    [sym_end_of_repeated_section] = ACTIONS(363),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(363),
    [anon_sym_BANGtrill_BANG] = ACTIONS(363),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(363),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(363),
    [anon_sym_BANGmordent_BANG] = ACTIONS(363),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(363),
    [anon_sym_BANGroll_BANG] = ACTIONS(363),
    [anon_sym_BANGturn_BANG] = ACTIONS(363),
    [anon_sym_BANGturnx_BANG] = ACTIONS(363),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(363),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(363),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(363),
    [anon_sym_BANG_GT_BANG] = ACTIONS(363),
    [anon_sym_BANGaccent_BANG] = ACTIONS(363),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(363),
    [anon_sym_BANGfermata_BANG] = ACTIONS(363),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(363),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(363),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(363),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(363),
    [anon_sym_BANGplus_BANG] = ACTIONS(363),
    [anon_sym_BANGsnap_BANG] = ACTIONS(363),
    [anon_sym_BANGslide_BANG] = ACTIONS(363),
    [anon_sym_BANGwedge_BANG] = ACTIONS(363),
    [anon_sym_BANGupbow_BANG] = ACTIONS(363),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(363),
    [anon_sym_BANGopen_BANG] = ACTIONS(363),
    [anon_sym_BANGthumb_BANG] = ACTIONS(363),
    [anon_sym_BANGbreath_BANG] = ACTIONS(363),
    [anon_sym_BANGpppp_BANG] = ACTIONS(363),
    [anon_sym_BANGppp_BANG] = ACTIONS(363),
    [anon_sym_BANGpp_BANG] = ACTIONS(363),
    [anon_sym_BANGp_BANG] = ACTIONS(363),
    [anon_sym_BANGmp_BANG] = ACTIONS(363),
    [anon_sym_BANGmf_BANG] = ACTIONS(363),
    [anon_sym_BANGf_BANG] = ACTIONS(363),
    [anon_sym_BANGff_BANG] = ACTIONS(363),
    [anon_sym_BANGfff_BANG] = ACTIONS(363),
    [anon_sym_BANGffff_BANG] = ACTIONS(363),
    [anon_sym_BANGsfz_BANG] = ACTIONS(363),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGsegno_BANG] = ACTIONS(363),
    [anon_sym_BANGcoda_BANG] = ACTIONS(363),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(363),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(363),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(363),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(363),
    [anon_sym_BANGfine_BANG] = ACTIONS(363),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(363),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(363),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(363),
    [sym_parts_line] = ACTIONS(363),
    [sym_instruction] = ACTIONS(363),
    [sym_key] = ACTIONS(363),
    [sym_macros] = ACTIONS(363),
    [sym_meter] = ACTIONS(363),
    [sym_notes] = ACTIONS(363),
    [anon_sym_X_COLON] = ACTIONS(363),
    [sym_remark] = ACTIONS(363),
    [sym_rhythm_line] = ACTIONS(363),
    [anon_sym_s_COLON] = ACTIONS(363),
    [sym_tempo] = ACTIONS(363),
    [sym_tune_title] = ACTIONS(363),
    [sym_unit_note_length] = ACTIONS(363),
    [anon_sym_U_COLON] = ACTIONS(363),
    [sym_voice] = ACTIONS(363),
    [anon_sym_w_COLON] = ACTIONS(363),
    [sym_words_postbody] = ACTIONS(363),
  },
  [35] = {
    [ts_builtin_sym_end] = ACTIONS(369),
    [sym__NL] = ACTIONS(371),
    [sym_BEAM_SEPARATOR] = ACTIONS(369),
    [sym_COMMENT] = ACTIONS(371),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(369),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(371),
    [aux_sym__music_content_token1] = ACTIONS(371),
    [sym_slur_open] = ACTIONS(371),
    [sym_slur_close] = ACTIONS(369),
    [aux_sym_note_construct_token1] = ACTIONS(373),
    [anon_sym_LBRACK] = ACTIONS(371),
    [sym_alteration] = ACTIONS(369),
    [sym_note_letter] = ACTIONS(369),
    [sym_rest] = ACTIONS(369),
    [anon_sym_Z] = ACTIONS(369),
    [anon_sym_X] = ACTIONS(371),
    [aux_sym_grace_note_token1] = ACTIONS(369),
    [aux_sym_chord_symbol_token1] = ACTIONS(371),
    [sym_annotation] = ACTIONS(369),
    [sym_tuplet_marker] = ACTIONS(369),
    [sym_decoration_shorthand] = ACTIONS(371),
    [sym_bar_line] = ACTIONS(371),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(369),
    [sym_thin_double_bar_line] = ACTIONS(369),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(369),
    [sym_start_of_repeated_section] = ACTIONS(369),
    [sym_end_of_repeated_section] = ACTIONS(369),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(369),
    [anon_sym_BANGtrill_BANG] = ACTIONS(369),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(369),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(369),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(369),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(369),
    [anon_sym_BANGmordent_BANG] = ACTIONS(369),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(369),
    [anon_sym_BANGroll_BANG] = ACTIONS(369),
    [anon_sym_BANGturn_BANG] = ACTIONS(369),
    [anon_sym_BANGturnx_BANG] = ACTIONS(369),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(369),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(369),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(369),
    [anon_sym_BANG_GT_BANG] = ACTIONS(369),
    [anon_sym_BANGaccent_BANG] = ACTIONS(369),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(369),
    [anon_sym_BANGfermata_BANG] = ACTIONS(369),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(369),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(369),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(369),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(369),
    [anon_sym_BANGplus_BANG] = ACTIONS(369),
    [anon_sym_BANGsnap_BANG] = ACTIONS(369),
    [anon_sym_BANGslide_BANG] = ACTIONS(369),
    [anon_sym_BANGwedge_BANG] = ACTIONS(369),
    [anon_sym_BANGupbow_BANG] = ACTIONS(369),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(369),
    [anon_sym_BANGopen_BANG] = ACTIONS(369),
    [anon_sym_BANGthumb_BANG] = ACTIONS(369),
    [anon_sym_BANGbreath_BANG] = ACTIONS(369),
    [anon_sym_BANGpppp_BANG] = ACTIONS(369),
    [anon_sym_BANGppp_BANG] = ACTIONS(369),
    [anon_sym_BANGpp_BANG] = ACTIONS(369),
    [anon_sym_BANGp_BANG] = ACTIONS(369),
    [anon_sym_BANGmp_BANG] = ACTIONS(369),
    [anon_sym_BANGmf_BANG] = ACTIONS(369),
    [anon_sym_BANGf_BANG] = ACTIONS(369),
    [anon_sym_BANGff_BANG] = ACTIONS(369),
    [anon_sym_BANGfff_BANG] = ACTIONS(369),
    [anon_sym_BANGffff_BANG] = ACTIONS(369),
    [anon_sym_BANGsfz_BANG] = ACTIONS(369),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(369),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(369),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(369),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(369),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(369),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(369),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(369),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(369),
    [anon_sym_BANGsegno_BANG] = ACTIONS(369),
    [anon_sym_BANGcoda_BANG] = ACTIONS(369),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(369),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(369),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(369),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(369),
    [anon_sym_BANGfine_BANG] = ACTIONS(369),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(369),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(369),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(369),
    [sym_parts_line] = ACTIONS(369),
    [sym_instruction] = ACTIONS(369),
    [sym_key] = ACTIONS(369),
    [sym_macros] = ACTIONS(369),
    [sym_meter] = ACTIONS(369),
    [sym_notes] = ACTIONS(369),
    [anon_sym_X_COLON] = ACTIONS(369),
    [sym_remark] = ACTIONS(369),
    [sym_rhythm_line] = ACTIONS(369),
    [anon_sym_s_COLON] = ACTIONS(369),
    [sym_tempo] = ACTIONS(369),
    [sym_tune_title] = ACTIONS(369),
    [sym_unit_note_length] = ACTIONS(369),
    [anon_sym_U_COLON] = ACTIONS(369),
    [sym_voice] = ACTIONS(369),
    [anon_sym_w_COLON] = ACTIONS(369),
    [sym_words_postbody] = ACTIONS(369),
  },
  [36] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [sym__NL] = ACTIONS(377),
    [sym_BEAM_SEPARATOR] = ACTIONS(375),
    [sym_COMMENT] = ACTIONS(377),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(375),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(377),
    [aux_sym__music_content_token1] = ACTIONS(377),
    [sym_slur_open] = ACTIONS(377),
    [sym_slur_close] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(377),
    [sym_alteration] = ACTIONS(375),
    [sym_note_letter] = ACTIONS(375),
    [sym_rest] = ACTIONS(375),
    [anon_sym_Z] = ACTIONS(375),
    [anon_sym_X] = ACTIONS(377),
    [sym_rhythm] = ACTIONS(379),
    [aux_sym_grace_note_token1] = ACTIONS(375),
    [aux_sym_chord_symbol_token1] = ACTIONS(377),
    [sym_annotation] = ACTIONS(375),
    [sym_tuplet_marker] = ACTIONS(375),
    [sym_decoration_shorthand] = ACTIONS(377),
    [sym_bar_line] = ACTIONS(377),
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
    [sym_parts_line] = ACTIONS(375),
    [sym_instruction] = ACTIONS(375),
    [sym_key] = ACTIONS(375),
    [sym_macros] = ACTIONS(375),
    [sym_meter] = ACTIONS(375),
    [sym_notes] = ACTIONS(375),
    [anon_sym_X_COLON] = ACTIONS(375),
    [sym_remark] = ACTIONS(375),
    [sym_rhythm_line] = ACTIONS(375),
    [anon_sym_s_COLON] = ACTIONS(375),
    [sym_tempo] = ACTIONS(375),
    [sym_tune_title] = ACTIONS(375),
    [sym_unit_note_length] = ACTIONS(375),
    [anon_sym_U_COLON] = ACTIONS(375),
    [sym_voice] = ACTIONS(375),
    [anon_sym_w_COLON] = ACTIONS(375),
    [sym_words_postbody] = ACTIONS(375),
  },
  [37] = {
    [ts_builtin_sym_end] = ACTIONS(363),
    [sym__NL] = ACTIONS(365),
    [sym_BEAM_SEPARATOR] = ACTIONS(363),
    [sym_COMMENT] = ACTIONS(365),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(363),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(365),
    [aux_sym__music_content_token1] = ACTIONS(365),
    [sym_slur_open] = ACTIONS(365),
    [sym_slur_close] = ACTIONS(363),
    [anon_sym_LBRACK] = ACTIONS(365),
    [sym_alteration] = ACTIONS(363),
    [sym_note_letter] = ACTIONS(363),
    [sym_rest] = ACTIONS(363),
    [anon_sym_Z] = ACTIONS(363),
    [anon_sym_X] = ACTIONS(365),
    [aux_sym_grace_note_token1] = ACTIONS(363),
    [aux_sym_chord_symbol_token1] = ACTIONS(365),
    [sym_annotation] = ACTIONS(363),
    [sym_tuplet_marker] = ACTIONS(363),
    [sym_decoration_shorthand] = ACTIONS(365),
    [sym_bar_line] = ACTIONS(365),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(363),
    [sym_thin_double_bar_line] = ACTIONS(363),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(363),
    [sym_start_of_repeated_section] = ACTIONS(363),
    [sym_end_of_repeated_section] = ACTIONS(363),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(363),
    [anon_sym_BANGtrill_BANG] = ACTIONS(363),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(363),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(363),
    [anon_sym_BANGmordent_BANG] = ACTIONS(363),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(363),
    [anon_sym_BANGroll_BANG] = ACTIONS(363),
    [anon_sym_BANGturn_BANG] = ACTIONS(363),
    [anon_sym_BANGturnx_BANG] = ACTIONS(363),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(363),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(363),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(363),
    [anon_sym_BANG_GT_BANG] = ACTIONS(363),
    [anon_sym_BANGaccent_BANG] = ACTIONS(363),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(363),
    [anon_sym_BANGfermata_BANG] = ACTIONS(363),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(363),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(363),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(363),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(363),
    [anon_sym_BANGplus_BANG] = ACTIONS(363),
    [anon_sym_BANGsnap_BANG] = ACTIONS(363),
    [anon_sym_BANGslide_BANG] = ACTIONS(363),
    [anon_sym_BANGwedge_BANG] = ACTIONS(363),
    [anon_sym_BANGupbow_BANG] = ACTIONS(363),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(363),
    [anon_sym_BANGopen_BANG] = ACTIONS(363),
    [anon_sym_BANGthumb_BANG] = ACTIONS(363),
    [anon_sym_BANGbreath_BANG] = ACTIONS(363),
    [anon_sym_BANGpppp_BANG] = ACTIONS(363),
    [anon_sym_BANGppp_BANG] = ACTIONS(363),
    [anon_sym_BANGpp_BANG] = ACTIONS(363),
    [anon_sym_BANGp_BANG] = ACTIONS(363),
    [anon_sym_BANGmp_BANG] = ACTIONS(363),
    [anon_sym_BANGmf_BANG] = ACTIONS(363),
    [anon_sym_BANGf_BANG] = ACTIONS(363),
    [anon_sym_BANGff_BANG] = ACTIONS(363),
    [anon_sym_BANGfff_BANG] = ACTIONS(363),
    [anon_sym_BANGffff_BANG] = ACTIONS(363),
    [anon_sym_BANGsfz_BANG] = ACTIONS(363),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(363),
    [anon_sym_BANGsegno_BANG] = ACTIONS(363),
    [anon_sym_BANGcoda_BANG] = ACTIONS(363),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(363),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(363),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(363),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(363),
    [anon_sym_BANGfine_BANG] = ACTIONS(363),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(363),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(363),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(363),
    [sym_parts_line] = ACTIONS(363),
    [sym_instruction] = ACTIONS(363),
    [sym_key] = ACTIONS(363),
    [sym_macros] = ACTIONS(363),
    [sym_meter] = ACTIONS(363),
    [sym_notes] = ACTIONS(363),
    [anon_sym_X_COLON] = ACTIONS(363),
    [sym_remark] = ACTIONS(363),
    [sym_rhythm_line] = ACTIONS(363),
    [anon_sym_s_COLON] = ACTIONS(363),
    [sym_tempo] = ACTIONS(363),
    [sym_tune_title] = ACTIONS(363),
    [sym_unit_note_length] = ACTIONS(363),
    [anon_sym_U_COLON] = ACTIONS(363),
    [sym_voice] = ACTIONS(363),
    [anon_sym_w_COLON] = ACTIONS(363),
    [sym_words_postbody] = ACTIONS(363),
  },
  [38] = {
    [ts_builtin_sym_end] = ACTIONS(317),
    [sym__NL] = ACTIONS(319),
    [sym_BEAM_SEPARATOR] = ACTIONS(317),
    [sym_COMMENT] = ACTIONS(319),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(317),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(319),
    [aux_sym__music_content_token1] = ACTIONS(319),
    [sym_slur_open] = ACTIONS(319),
    [sym_slur_close] = ACTIONS(317),
    [anon_sym_LBRACK] = ACTIONS(319),
    [sym_alteration] = ACTIONS(317),
    [sym_note_letter] = ACTIONS(317),
    [sym_rest] = ACTIONS(317),
    [anon_sym_Z] = ACTIONS(317),
    [anon_sym_X] = ACTIONS(319),
    [aux_sym_grace_note_token1] = ACTIONS(317),
    [aux_sym_chord_symbol_token1] = ACTIONS(319),
    [sym_annotation] = ACTIONS(317),
    [sym_tuplet_marker] = ACTIONS(317),
    [sym_decoration_shorthand] = ACTIONS(319),
    [sym_bar_line] = ACTIONS(319),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(317),
    [sym_thin_double_bar_line] = ACTIONS(317),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(317),
    [sym_start_of_repeated_section] = ACTIONS(317),
    [sym_end_of_repeated_section] = ACTIONS(317),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(317),
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
    [sym_parts_line] = ACTIONS(317),
    [sym_instruction] = ACTIONS(317),
    [sym_key] = ACTIONS(317),
    [sym_macros] = ACTIONS(317),
    [sym_meter] = ACTIONS(317),
    [sym_notes] = ACTIONS(317),
    [anon_sym_X_COLON] = ACTIONS(317),
    [sym_remark] = ACTIONS(317),
    [sym_rhythm_line] = ACTIONS(317),
    [anon_sym_s_COLON] = ACTIONS(317),
    [sym_tempo] = ACTIONS(317),
    [sym_tune_title] = ACTIONS(317),
    [sym_unit_note_length] = ACTIONS(317),
    [anon_sym_U_COLON] = ACTIONS(317),
    [sym_voice] = ACTIONS(317),
    [anon_sym_w_COLON] = ACTIONS(317),
    [sym_words_postbody] = ACTIONS(317),
  },
  [39] = {
    [ts_builtin_sym_end] = ACTIONS(375),
    [sym__NL] = ACTIONS(377),
    [sym_BEAM_SEPARATOR] = ACTIONS(375),
    [sym_COMMENT] = ACTIONS(377),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(375),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(377),
    [aux_sym__music_content_token1] = ACTIONS(377),
    [sym_slur_open] = ACTIONS(377),
    [sym_slur_close] = ACTIONS(375),
    [anon_sym_LBRACK] = ACTIONS(377),
    [sym_alteration] = ACTIONS(375),
    [sym_note_letter] = ACTIONS(375),
    [sym_rest] = ACTIONS(375),
    [anon_sym_Z] = ACTIONS(375),
    [anon_sym_X] = ACTIONS(377),
    [aux_sym_grace_note_token1] = ACTIONS(375),
    [aux_sym_chord_symbol_token1] = ACTIONS(377),
    [sym_annotation] = ACTIONS(375),
    [sym_tuplet_marker] = ACTIONS(375),
    [sym_decoration_shorthand] = ACTIONS(377),
    [sym_bar_line] = ACTIONS(377),
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
    [sym_parts_line] = ACTIONS(375),
    [sym_instruction] = ACTIONS(375),
    [sym_key] = ACTIONS(375),
    [sym_macros] = ACTIONS(375),
    [sym_meter] = ACTIONS(375),
    [sym_notes] = ACTIONS(375),
    [anon_sym_X_COLON] = ACTIONS(375),
    [sym_remark] = ACTIONS(375),
    [sym_rhythm_line] = ACTIONS(375),
    [anon_sym_s_COLON] = ACTIONS(375),
    [sym_tempo] = ACTIONS(375),
    [sym_tune_title] = ACTIONS(375),
    [sym_unit_note_length] = ACTIONS(375),
    [anon_sym_U_COLON] = ACTIONS(375),
    [sym_voice] = ACTIONS(375),
    [anon_sym_w_COLON] = ACTIONS(375),
    [sym_words_postbody] = ACTIONS(375),
  },
  [40] = {
    [ts_builtin_sym_end] = ACTIONS(381),
    [sym__NL] = ACTIONS(383),
    [sym_BEAM_SEPARATOR] = ACTIONS(381),
    [sym_COMMENT] = ACTIONS(383),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(381),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(383),
    [aux_sym__music_content_token1] = ACTIONS(383),
    [sym_slur_open] = ACTIONS(383),
    [sym_slur_close] = ACTIONS(381),
    [anon_sym_LBRACK] = ACTIONS(383),
    [sym_alteration] = ACTIONS(381),
    [sym_note_letter] = ACTIONS(381),
    [sym_rest] = ACTIONS(381),
    [anon_sym_Z] = ACTIONS(381),
    [anon_sym_X] = ACTIONS(383),
    [aux_sym_grace_note_token1] = ACTIONS(381),
    [aux_sym_chord_symbol_token1] = ACTIONS(383),
    [sym_annotation] = ACTIONS(381),
    [sym_tuplet_marker] = ACTIONS(381),
    [sym_decoration_shorthand] = ACTIONS(383),
    [sym_bar_line] = ACTIONS(383),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(381),
    [sym_thin_double_bar_line] = ACTIONS(381),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(381),
    [sym_start_of_repeated_section] = ACTIONS(381),
    [sym_end_of_repeated_section] = ACTIONS(381),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(381),
    [anon_sym_BANGtrill_BANG] = ACTIONS(381),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(381),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(381),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(381),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(381),
    [anon_sym_BANGmordent_BANG] = ACTIONS(381),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(381),
    [anon_sym_BANGroll_BANG] = ACTIONS(381),
    [anon_sym_BANGturn_BANG] = ACTIONS(381),
    [anon_sym_BANGturnx_BANG] = ACTIONS(381),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(381),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(381),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(381),
    [anon_sym_BANG_GT_BANG] = ACTIONS(381),
    [anon_sym_BANGaccent_BANG] = ACTIONS(381),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(381),
    [anon_sym_BANGfermata_BANG] = ACTIONS(381),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(381),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(381),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(381),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(381),
    [anon_sym_BANGplus_BANG] = ACTIONS(381),
    [anon_sym_BANGsnap_BANG] = ACTIONS(381),
    [anon_sym_BANGslide_BANG] = ACTIONS(381),
    [anon_sym_BANGwedge_BANG] = ACTIONS(381),
    [anon_sym_BANGupbow_BANG] = ACTIONS(381),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(381),
    [anon_sym_BANGopen_BANG] = ACTIONS(381),
    [anon_sym_BANGthumb_BANG] = ACTIONS(381),
    [anon_sym_BANGbreath_BANG] = ACTIONS(381),
    [anon_sym_BANGpppp_BANG] = ACTIONS(381),
    [anon_sym_BANGppp_BANG] = ACTIONS(381),
    [anon_sym_BANGpp_BANG] = ACTIONS(381),
    [anon_sym_BANGp_BANG] = ACTIONS(381),
    [anon_sym_BANGmp_BANG] = ACTIONS(381),
    [anon_sym_BANGmf_BANG] = ACTIONS(381),
    [anon_sym_BANGf_BANG] = ACTIONS(381),
    [anon_sym_BANGff_BANG] = ACTIONS(381),
    [anon_sym_BANGfff_BANG] = ACTIONS(381),
    [anon_sym_BANGffff_BANG] = ACTIONS(381),
    [anon_sym_BANGsfz_BANG] = ACTIONS(381),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(381),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(381),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(381),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(381),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(381),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(381),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(381),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(381),
    [anon_sym_BANGsegno_BANG] = ACTIONS(381),
    [anon_sym_BANGcoda_BANG] = ACTIONS(381),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(381),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(381),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(381),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(381),
    [anon_sym_BANGfine_BANG] = ACTIONS(381),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(381),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(381),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(381),
    [sym_parts_line] = ACTIONS(381),
    [sym_instruction] = ACTIONS(381),
    [sym_key] = ACTIONS(381),
    [sym_macros] = ACTIONS(381),
    [sym_meter] = ACTIONS(381),
    [sym_notes] = ACTIONS(381),
    [anon_sym_X_COLON] = ACTIONS(381),
    [sym_remark] = ACTIONS(381),
    [sym_rhythm_line] = ACTIONS(381),
    [anon_sym_s_COLON] = ACTIONS(381),
    [sym_tempo] = ACTIONS(381),
    [sym_tune_title] = ACTIONS(381),
    [sym_unit_note_length] = ACTIONS(381),
    [anon_sym_U_COLON] = ACTIONS(381),
    [sym_voice] = ACTIONS(381),
    [anon_sym_w_COLON] = ACTIONS(381),
    [sym_words_postbody] = ACTIONS(381),
  },
  [41] = {
    [ts_builtin_sym_end] = ACTIONS(385),
    [sym__NL] = ACTIONS(387),
    [sym_BEAM_SEPARATOR] = ACTIONS(385),
    [sym_COMMENT] = ACTIONS(387),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(385),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(387),
    [aux_sym__music_content_token1] = ACTIONS(387),
    [sym_slur_open] = ACTIONS(387),
    [sym_slur_close] = ACTIONS(385),
    [anon_sym_LBRACK] = ACTIONS(387),
    [sym_alteration] = ACTIONS(385),
    [sym_note_letter] = ACTIONS(385),
    [sym_rest] = ACTIONS(385),
    [anon_sym_Z] = ACTIONS(385),
    [anon_sym_X] = ACTIONS(387),
    [aux_sym_grace_note_token1] = ACTIONS(385),
    [aux_sym_chord_symbol_token1] = ACTIONS(387),
    [sym_annotation] = ACTIONS(385),
    [sym_tuplet_marker] = ACTIONS(385),
    [sym_decoration_shorthand] = ACTIONS(387),
    [sym_bar_line] = ACTIONS(387),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(385),
    [sym_thin_double_bar_line] = ACTIONS(385),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(385),
    [sym_start_of_repeated_section] = ACTIONS(385),
    [sym_end_of_repeated_section] = ACTIONS(385),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(385),
    [anon_sym_BANGtrill_BANG] = ACTIONS(385),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(385),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(385),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(385),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(385),
    [anon_sym_BANGmordent_BANG] = ACTIONS(385),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(385),
    [anon_sym_BANGroll_BANG] = ACTIONS(385),
    [anon_sym_BANGturn_BANG] = ACTIONS(385),
    [anon_sym_BANGturnx_BANG] = ACTIONS(385),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(385),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(385),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(385),
    [anon_sym_BANG_GT_BANG] = ACTIONS(385),
    [anon_sym_BANGaccent_BANG] = ACTIONS(385),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(385),
    [anon_sym_BANGfermata_BANG] = ACTIONS(385),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(385),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(385),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(385),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(385),
    [anon_sym_BANGplus_BANG] = ACTIONS(385),
    [anon_sym_BANGsnap_BANG] = ACTIONS(385),
    [anon_sym_BANGslide_BANG] = ACTIONS(385),
    [anon_sym_BANGwedge_BANG] = ACTIONS(385),
    [anon_sym_BANGupbow_BANG] = ACTIONS(385),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(385),
    [anon_sym_BANGopen_BANG] = ACTIONS(385),
    [anon_sym_BANGthumb_BANG] = ACTIONS(385),
    [anon_sym_BANGbreath_BANG] = ACTIONS(385),
    [anon_sym_BANGpppp_BANG] = ACTIONS(385),
    [anon_sym_BANGppp_BANG] = ACTIONS(385),
    [anon_sym_BANGpp_BANG] = ACTIONS(385),
    [anon_sym_BANGp_BANG] = ACTIONS(385),
    [anon_sym_BANGmp_BANG] = ACTIONS(385),
    [anon_sym_BANGmf_BANG] = ACTIONS(385),
    [anon_sym_BANGf_BANG] = ACTIONS(385),
    [anon_sym_BANGff_BANG] = ACTIONS(385),
    [anon_sym_BANGfff_BANG] = ACTIONS(385),
    [anon_sym_BANGffff_BANG] = ACTIONS(385),
    [anon_sym_BANGsfz_BANG] = ACTIONS(385),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(385),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(385),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(385),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(385),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(385),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(385),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(385),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(385),
    [anon_sym_BANGsegno_BANG] = ACTIONS(385),
    [anon_sym_BANGcoda_BANG] = ACTIONS(385),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(385),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(385),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(385),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(385),
    [anon_sym_BANGfine_BANG] = ACTIONS(385),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(385),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(385),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(385),
    [sym_parts_line] = ACTIONS(385),
    [sym_instruction] = ACTIONS(385),
    [sym_key] = ACTIONS(385),
    [sym_macros] = ACTIONS(385),
    [sym_meter] = ACTIONS(385),
    [sym_notes] = ACTIONS(385),
    [anon_sym_X_COLON] = ACTIONS(385),
    [sym_remark] = ACTIONS(385),
    [sym_rhythm_line] = ACTIONS(385),
    [anon_sym_s_COLON] = ACTIONS(385),
    [sym_tempo] = ACTIONS(385),
    [sym_tune_title] = ACTIONS(385),
    [sym_unit_note_length] = ACTIONS(385),
    [anon_sym_U_COLON] = ACTIONS(385),
    [sym_voice] = ACTIONS(385),
    [anon_sym_w_COLON] = ACTIONS(385),
    [sym_words_postbody] = ACTIONS(385),
  },
  [42] = {
    [ts_builtin_sym_end] = ACTIONS(341),
    [sym__NL] = ACTIONS(343),
    [sym_BEAM_SEPARATOR] = ACTIONS(341),
    [sym_COMMENT] = ACTIONS(343),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(341),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(343),
    [aux_sym__music_content_token1] = ACTIONS(343),
    [sym_slur_open] = ACTIONS(343),
    [sym_slur_close] = ACTIONS(341),
    [anon_sym_LBRACK] = ACTIONS(343),
    [sym_alteration] = ACTIONS(341),
    [sym_note_letter] = ACTIONS(341),
    [sym_rest] = ACTIONS(341),
    [anon_sym_Z] = ACTIONS(341),
    [anon_sym_X] = ACTIONS(343),
    [aux_sym_grace_note_token1] = ACTIONS(341),
    [aux_sym_chord_symbol_token1] = ACTIONS(343),
    [sym_annotation] = ACTIONS(341),
    [sym_tuplet_marker] = ACTIONS(341),
    [sym_decoration_shorthand] = ACTIONS(343),
    [sym_bar_line] = ACTIONS(343),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(341),
    [sym_thin_double_bar_line] = ACTIONS(341),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(341),
    [sym_start_of_repeated_section] = ACTIONS(341),
    [sym_end_of_repeated_section] = ACTIONS(341),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(341),
    [anon_sym_BANGtrill_BANG] = ACTIONS(341),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(341),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(341),
    [anon_sym_BANGmordent_BANG] = ACTIONS(341),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(341),
    [anon_sym_BANGroll_BANG] = ACTIONS(341),
    [anon_sym_BANGturn_BANG] = ACTIONS(341),
    [anon_sym_BANGturnx_BANG] = ACTIONS(341),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(341),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(341),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(341),
    [anon_sym_BANG_GT_BANG] = ACTIONS(341),
    [anon_sym_BANGaccent_BANG] = ACTIONS(341),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(341),
    [anon_sym_BANGfermata_BANG] = ACTIONS(341),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(341),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(341),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(341),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(341),
    [anon_sym_BANGplus_BANG] = ACTIONS(341),
    [anon_sym_BANGsnap_BANG] = ACTIONS(341),
    [anon_sym_BANGslide_BANG] = ACTIONS(341),
    [anon_sym_BANGwedge_BANG] = ACTIONS(341),
    [anon_sym_BANGupbow_BANG] = ACTIONS(341),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(341),
    [anon_sym_BANGopen_BANG] = ACTIONS(341),
    [anon_sym_BANGthumb_BANG] = ACTIONS(341),
    [anon_sym_BANGbreath_BANG] = ACTIONS(341),
    [anon_sym_BANGpppp_BANG] = ACTIONS(341),
    [anon_sym_BANGppp_BANG] = ACTIONS(341),
    [anon_sym_BANGpp_BANG] = ACTIONS(341),
    [anon_sym_BANGp_BANG] = ACTIONS(341),
    [anon_sym_BANGmp_BANG] = ACTIONS(341),
    [anon_sym_BANGmf_BANG] = ACTIONS(341),
    [anon_sym_BANGf_BANG] = ACTIONS(341),
    [anon_sym_BANGff_BANG] = ACTIONS(341),
    [anon_sym_BANGfff_BANG] = ACTIONS(341),
    [anon_sym_BANGffff_BANG] = ACTIONS(341),
    [anon_sym_BANGsfz_BANG] = ACTIONS(341),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(341),
    [anon_sym_BANGsegno_BANG] = ACTIONS(341),
    [anon_sym_BANGcoda_BANG] = ACTIONS(341),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(341),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(341),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(341),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(341),
    [anon_sym_BANGfine_BANG] = ACTIONS(341),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(341),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(341),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(341),
    [sym_parts_line] = ACTIONS(341),
    [sym_instruction] = ACTIONS(341),
    [sym_key] = ACTIONS(341),
    [sym_macros] = ACTIONS(341),
    [sym_meter] = ACTIONS(341),
    [sym_notes] = ACTIONS(341),
    [anon_sym_X_COLON] = ACTIONS(341),
    [sym_remark] = ACTIONS(341),
    [sym_rhythm_line] = ACTIONS(341),
    [anon_sym_s_COLON] = ACTIONS(341),
    [sym_tempo] = ACTIONS(341),
    [sym_tune_title] = ACTIONS(341),
    [sym_unit_note_length] = ACTIONS(341),
    [anon_sym_U_COLON] = ACTIONS(341),
    [sym_voice] = ACTIONS(341),
    [anon_sym_w_COLON] = ACTIONS(341),
    [sym_words_postbody] = ACTIONS(341),
  },
  [43] = {
    [ts_builtin_sym_end] = ACTIONS(347),
    [sym__NL] = ACTIONS(349),
    [sym_BEAM_SEPARATOR] = ACTIONS(347),
    [sym_COMMENT] = ACTIONS(349),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(347),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(349),
    [aux_sym__music_content_token1] = ACTIONS(349),
    [sym_slur_open] = ACTIONS(349),
    [sym_slur_close] = ACTIONS(347),
    [anon_sym_LBRACK] = ACTIONS(349),
    [sym_alteration] = ACTIONS(347),
    [sym_note_letter] = ACTIONS(347),
    [sym_rest] = ACTIONS(347),
    [anon_sym_Z] = ACTIONS(347),
    [anon_sym_X] = ACTIONS(349),
    [aux_sym_grace_note_token1] = ACTIONS(347),
    [aux_sym_chord_symbol_token1] = ACTIONS(349),
    [sym_annotation] = ACTIONS(347),
    [sym_tuplet_marker] = ACTIONS(347),
    [sym_decoration_shorthand] = ACTIONS(349),
    [sym_bar_line] = ACTIONS(349),
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
    [sym_parts_line] = ACTIONS(347),
    [sym_instruction] = ACTIONS(347),
    [sym_key] = ACTIONS(347),
    [sym_macros] = ACTIONS(347),
    [sym_meter] = ACTIONS(347),
    [sym_notes] = ACTIONS(347),
    [anon_sym_X_COLON] = ACTIONS(347),
    [sym_remark] = ACTIONS(347),
    [sym_rhythm_line] = ACTIONS(347),
    [anon_sym_s_COLON] = ACTIONS(347),
    [sym_tempo] = ACTIONS(347),
    [sym_tune_title] = ACTIONS(347),
    [sym_unit_note_length] = ACTIONS(347),
    [anon_sym_U_COLON] = ACTIONS(347),
    [sym_voice] = ACTIONS(347),
    [anon_sym_w_COLON] = ACTIONS(347),
    [sym_words_postbody] = ACTIONS(347),
  },
  [44] = {
    [ts_builtin_sym_end] = ACTIONS(208),
    [sym__NL] = ACTIONS(210),
    [sym_BEAM_SEPARATOR] = ACTIONS(208),
    [sym_COMMENT] = ACTIONS(210),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(208),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(210),
    [aux_sym__music_content_token1] = ACTIONS(210),
    [sym_slur_open] = ACTIONS(210),
    [sym_slur_close] = ACTIONS(208),
    [anon_sym_LBRACK] = ACTIONS(210),
    [sym_alteration] = ACTIONS(208),
    [sym_note_letter] = ACTIONS(208),
    [sym_rest] = ACTIONS(208),
    [anon_sym_Z] = ACTIONS(208),
    [anon_sym_X] = ACTIONS(210),
    [aux_sym_grace_note_token1] = ACTIONS(208),
    [aux_sym_chord_symbol_token1] = ACTIONS(210),
    [sym_annotation] = ACTIONS(208),
    [sym_tuplet_marker] = ACTIONS(208),
    [sym_decoration_shorthand] = ACTIONS(210),
    [sym_bar_line] = ACTIONS(210),
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
    [anon_sym_X_COLON] = ACTIONS(208),
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
  [45] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym__NL] = ACTIONS(295),
    [sym_COMMENT] = ACTIONS(295),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(293),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(295),
    [aux_sym__music_content_token1] = ACTIONS(295),
    [sym_slur_open] = ACTIONS(295),
    [sym_slur_close] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(295),
    [sym_alteration] = ACTIONS(293),
    [sym_note_letter] = ACTIONS(293),
    [sym_rest] = ACTIONS(293),
    [anon_sym_Z] = ACTIONS(293),
    [anon_sym_X] = ACTIONS(295),
    [aux_sym_grace_note_token1] = ACTIONS(293),
    [aux_sym_chord_symbol_token1] = ACTIONS(295),
    [sym_annotation] = ACTIONS(293),
    [sym_tuplet_marker] = ACTIONS(293),
    [sym_decoration_shorthand] = ACTIONS(295),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(297),
    [sym_bar_line] = ACTIONS(295),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(293),
    [sym_thin_double_bar_line] = ACTIONS(293),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(293),
    [sym_start_of_repeated_section] = ACTIONS(293),
    [sym_end_of_repeated_section] = ACTIONS(293),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(293),
    [anon_sym_BANGtrill_BANG] = ACTIONS(293),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(293),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(293),
    [anon_sym_BANGmordent_BANG] = ACTIONS(293),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(293),
    [anon_sym_BANGroll_BANG] = ACTIONS(293),
    [anon_sym_BANGturn_BANG] = ACTIONS(293),
    [anon_sym_BANGturnx_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(293),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_BANG] = ACTIONS(293),
    [anon_sym_BANGaccent_BANG] = ACTIONS(293),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(293),
    [anon_sym_BANGfermata_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(293),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(293),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(293),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(293),
    [anon_sym_BANGplus_BANG] = ACTIONS(293),
    [anon_sym_BANGsnap_BANG] = ACTIONS(293),
    [anon_sym_BANGslide_BANG] = ACTIONS(293),
    [anon_sym_BANGwedge_BANG] = ACTIONS(293),
    [anon_sym_BANGupbow_BANG] = ACTIONS(293),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(293),
    [anon_sym_BANGopen_BANG] = ACTIONS(293),
    [anon_sym_BANGthumb_BANG] = ACTIONS(293),
    [anon_sym_BANGbreath_BANG] = ACTIONS(293),
    [anon_sym_BANGpppp_BANG] = ACTIONS(293),
    [anon_sym_BANGppp_BANG] = ACTIONS(293),
    [anon_sym_BANGpp_BANG] = ACTIONS(293),
    [anon_sym_BANGp_BANG] = ACTIONS(293),
    [anon_sym_BANGmp_BANG] = ACTIONS(293),
    [anon_sym_BANGmf_BANG] = ACTIONS(293),
    [anon_sym_BANGf_BANG] = ACTIONS(293),
    [anon_sym_BANGff_BANG] = ACTIONS(293),
    [anon_sym_BANGfff_BANG] = ACTIONS(293),
    [anon_sym_BANGffff_BANG] = ACTIONS(293),
    [anon_sym_BANGsfz_BANG] = ACTIONS(293),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGsegno_BANG] = ACTIONS(293),
    [anon_sym_BANGcoda_BANG] = ACTIONS(293),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(293),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(293),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(293),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(293),
    [anon_sym_BANGfine_BANG] = ACTIONS(293),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(293),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(293),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(293),
    [sym_parts_line] = ACTIONS(293),
    [sym_instruction] = ACTIONS(293),
    [sym_key] = ACTIONS(293),
    [sym_macros] = ACTIONS(293),
    [sym_meter] = ACTIONS(293),
    [sym_notes] = ACTIONS(293),
    [anon_sym_X_COLON] = ACTIONS(293),
    [sym_remark] = ACTIONS(293),
    [sym_rhythm_line] = ACTIONS(293),
    [anon_sym_s_COLON] = ACTIONS(293),
    [sym_tempo] = ACTIONS(293),
    [sym_tune_title] = ACTIONS(293),
    [sym_unit_note_length] = ACTIONS(293),
    [anon_sym_U_COLON] = ACTIONS(293),
    [sym_voice] = ACTIONS(293),
    [anon_sym_w_COLON] = ACTIONS(293),
    [sym_words_postbody] = ACTIONS(293),
  },
  [46] = {
    [ts_builtin_sym_end] = ACTIONS(329),
    [sym__NL] = ACTIONS(331),
    [sym_BEAM_SEPARATOR] = ACTIONS(329),
    [sym_COMMENT] = ACTIONS(331),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(329),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(331),
    [aux_sym__music_content_token1] = ACTIONS(331),
    [sym_slur_open] = ACTIONS(331),
    [sym_slur_close] = ACTIONS(329),
    [anon_sym_LBRACK] = ACTIONS(331),
    [sym_alteration] = ACTIONS(329),
    [sym_note_letter] = ACTIONS(329),
    [sym_rest] = ACTIONS(329),
    [anon_sym_Z] = ACTIONS(329),
    [anon_sym_X] = ACTIONS(331),
    [aux_sym_grace_note_token1] = ACTIONS(329),
    [aux_sym_chord_symbol_token1] = ACTIONS(331),
    [sym_annotation] = ACTIONS(329),
    [sym_tuplet_marker] = ACTIONS(329),
    [sym_decoration_shorthand] = ACTIONS(331),
    [sym_bar_line] = ACTIONS(331),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(329),
    [sym_thin_double_bar_line] = ACTIONS(329),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(329),
    [sym_start_of_repeated_section] = ACTIONS(329),
    [sym_end_of_repeated_section] = ACTIONS(329),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(329),
    [anon_sym_BANGtrill_BANG] = ACTIONS(329),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(329),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(329),
    [anon_sym_BANGmordent_BANG] = ACTIONS(329),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(329),
    [anon_sym_BANGroll_BANG] = ACTIONS(329),
    [anon_sym_BANGturn_BANG] = ACTIONS(329),
    [anon_sym_BANGturnx_BANG] = ACTIONS(329),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(329),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(329),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(329),
    [anon_sym_BANG_GT_BANG] = ACTIONS(329),
    [anon_sym_BANGaccent_BANG] = ACTIONS(329),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(329),
    [anon_sym_BANGfermata_BANG] = ACTIONS(329),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(329),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(329),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(329),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(329),
    [anon_sym_BANGplus_BANG] = ACTIONS(329),
    [anon_sym_BANGsnap_BANG] = ACTIONS(329),
    [anon_sym_BANGslide_BANG] = ACTIONS(329),
    [anon_sym_BANGwedge_BANG] = ACTIONS(329),
    [anon_sym_BANGupbow_BANG] = ACTIONS(329),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(329),
    [anon_sym_BANGopen_BANG] = ACTIONS(329),
    [anon_sym_BANGthumb_BANG] = ACTIONS(329),
    [anon_sym_BANGbreath_BANG] = ACTIONS(329),
    [anon_sym_BANGpppp_BANG] = ACTIONS(329),
    [anon_sym_BANGppp_BANG] = ACTIONS(329),
    [anon_sym_BANGpp_BANG] = ACTIONS(329),
    [anon_sym_BANGp_BANG] = ACTIONS(329),
    [anon_sym_BANGmp_BANG] = ACTIONS(329),
    [anon_sym_BANGmf_BANG] = ACTIONS(329),
    [anon_sym_BANGf_BANG] = ACTIONS(329),
    [anon_sym_BANGff_BANG] = ACTIONS(329),
    [anon_sym_BANGfff_BANG] = ACTIONS(329),
    [anon_sym_BANGffff_BANG] = ACTIONS(329),
    [anon_sym_BANGsfz_BANG] = ACTIONS(329),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(329),
    [anon_sym_BANGsegno_BANG] = ACTIONS(329),
    [anon_sym_BANGcoda_BANG] = ACTIONS(329),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(329),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(329),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(329),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(329),
    [anon_sym_BANGfine_BANG] = ACTIONS(329),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(329),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(329),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(329),
    [sym_parts_line] = ACTIONS(329),
    [sym_instruction] = ACTIONS(329),
    [sym_key] = ACTIONS(329),
    [sym_macros] = ACTIONS(329),
    [sym_meter] = ACTIONS(329),
    [sym_notes] = ACTIONS(329),
    [anon_sym_X_COLON] = ACTIONS(329),
    [sym_remark] = ACTIONS(329),
    [sym_rhythm_line] = ACTIONS(329),
    [anon_sym_s_COLON] = ACTIONS(329),
    [sym_tempo] = ACTIONS(329),
    [sym_tune_title] = ACTIONS(329),
    [sym_unit_note_length] = ACTIONS(329),
    [anon_sym_U_COLON] = ACTIONS(329),
    [sym_voice] = ACTIONS(329),
    [anon_sym_w_COLON] = ACTIONS(329),
    [sym_words_postbody] = ACTIONS(329),
  },
  [47] = {
    [ts_builtin_sym_end] = ACTIONS(353),
    [sym__NL] = ACTIONS(355),
    [sym_BEAM_SEPARATOR] = ACTIONS(353),
    [sym_COMMENT] = ACTIONS(355),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(353),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(355),
    [aux_sym__music_content_token1] = ACTIONS(355),
    [sym_slur_open] = ACTIONS(355),
    [sym_slur_close] = ACTIONS(353),
    [anon_sym_LBRACK] = ACTIONS(355),
    [sym_alteration] = ACTIONS(353),
    [sym_note_letter] = ACTIONS(353),
    [sym_rest] = ACTIONS(353),
    [anon_sym_Z] = ACTIONS(353),
    [anon_sym_X] = ACTIONS(355),
    [aux_sym_grace_note_token1] = ACTIONS(353),
    [aux_sym_chord_symbol_token1] = ACTIONS(355),
    [sym_annotation] = ACTIONS(353),
    [sym_tuplet_marker] = ACTIONS(353),
    [sym_decoration_shorthand] = ACTIONS(355),
    [sym_bar_line] = ACTIONS(355),
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
    [sym_parts_line] = ACTIONS(353),
    [sym_instruction] = ACTIONS(353),
    [sym_key] = ACTIONS(353),
    [sym_macros] = ACTIONS(353),
    [sym_meter] = ACTIONS(353),
    [sym_notes] = ACTIONS(353),
    [anon_sym_X_COLON] = ACTIONS(353),
    [sym_remark] = ACTIONS(353),
    [sym_rhythm_line] = ACTIONS(353),
    [anon_sym_s_COLON] = ACTIONS(353),
    [sym_tempo] = ACTIONS(353),
    [sym_tune_title] = ACTIONS(353),
    [sym_unit_note_length] = ACTIONS(353),
    [anon_sym_U_COLON] = ACTIONS(353),
    [sym_voice] = ACTIONS(353),
    [anon_sym_w_COLON] = ACTIONS(353),
    [sym_words_postbody] = ACTIONS(353),
  },
  [48] = {
    [ts_builtin_sym_end] = ACTIONS(323),
    [sym__NL] = ACTIONS(325),
    [sym_BEAM_SEPARATOR] = ACTIONS(323),
    [sym_COMMENT] = ACTIONS(325),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(323),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(325),
    [aux_sym__music_content_token1] = ACTIONS(325),
    [sym_slur_open] = ACTIONS(325),
    [sym_slur_close] = ACTIONS(323),
    [anon_sym_LBRACK] = ACTIONS(325),
    [sym_alteration] = ACTIONS(323),
    [sym_note_letter] = ACTIONS(323),
    [sym_rest] = ACTIONS(323),
    [anon_sym_Z] = ACTIONS(323),
    [anon_sym_X] = ACTIONS(325),
    [aux_sym_grace_note_token1] = ACTIONS(323),
    [aux_sym_chord_symbol_token1] = ACTIONS(325),
    [sym_annotation] = ACTIONS(323),
    [sym_tuplet_marker] = ACTIONS(323),
    [sym_decoration_shorthand] = ACTIONS(325),
    [sym_bar_line] = ACTIONS(325),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(323),
    [sym_thin_double_bar_line] = ACTIONS(323),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(323),
    [sym_start_of_repeated_section] = ACTIONS(323),
    [sym_end_of_repeated_section] = ACTIONS(323),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(323),
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
    [sym_parts_line] = ACTIONS(323),
    [sym_instruction] = ACTIONS(323),
    [sym_key] = ACTIONS(323),
    [sym_macros] = ACTIONS(323),
    [sym_meter] = ACTIONS(323),
    [sym_notes] = ACTIONS(323),
    [anon_sym_X_COLON] = ACTIONS(323),
    [sym_remark] = ACTIONS(323),
    [sym_rhythm_line] = ACTIONS(323),
    [anon_sym_s_COLON] = ACTIONS(323),
    [sym_tempo] = ACTIONS(323),
    [sym_tune_title] = ACTIONS(323),
    [sym_unit_note_length] = ACTIONS(323),
    [anon_sym_U_COLON] = ACTIONS(323),
    [sym_voice] = ACTIONS(323),
    [anon_sym_w_COLON] = ACTIONS(323),
    [sym_words_postbody] = ACTIONS(323),
  },
  [49] = {
    [ts_builtin_sym_end] = ACTIONS(389),
    [sym__NL] = ACTIONS(391),
    [sym_COMMENT] = ACTIONS(391),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(389),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(391),
    [aux_sym__music_content_token1] = ACTIONS(391),
    [sym_slur_open] = ACTIONS(391),
    [sym_slur_close] = ACTIONS(389),
    [anon_sym_LBRACK] = ACTIONS(391),
    [sym_alteration] = ACTIONS(389),
    [sym_note_letter] = ACTIONS(389),
    [sym_rest] = ACTIONS(389),
    [anon_sym_Z] = ACTIONS(389),
    [anon_sym_X] = ACTIONS(391),
    [aux_sym_grace_note_token1] = ACTIONS(389),
    [aux_sym_chord_symbol_token1] = ACTIONS(391),
    [sym_annotation] = ACTIONS(389),
    [sym_tuplet_marker] = ACTIONS(389),
    [sym_decoration_shorthand] = ACTIONS(391),
    [sym_bar_line] = ACTIONS(391),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(389),
    [sym_thin_double_bar_line] = ACTIONS(389),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(389),
    [sym_start_of_repeated_section] = ACTIONS(389),
    [sym_end_of_repeated_section] = ACTIONS(389),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(389),
    [anon_sym_BANGtrill_BANG] = ACTIONS(389),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(389),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(389),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(389),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(389),
    [anon_sym_BANGmordent_BANG] = ACTIONS(389),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(389),
    [anon_sym_BANGroll_BANG] = ACTIONS(389),
    [anon_sym_BANGturn_BANG] = ACTIONS(389),
    [anon_sym_BANGturnx_BANG] = ACTIONS(389),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(389),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(389),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(389),
    [anon_sym_BANG_GT_BANG] = ACTIONS(389),
    [anon_sym_BANGaccent_BANG] = ACTIONS(389),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(389),
    [anon_sym_BANGfermata_BANG] = ACTIONS(389),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(389),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(389),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(389),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(389),
    [anon_sym_BANGplus_BANG] = ACTIONS(389),
    [anon_sym_BANGsnap_BANG] = ACTIONS(389),
    [anon_sym_BANGslide_BANG] = ACTIONS(389),
    [anon_sym_BANGwedge_BANG] = ACTIONS(389),
    [anon_sym_BANGupbow_BANG] = ACTIONS(389),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(389),
    [anon_sym_BANGopen_BANG] = ACTIONS(389),
    [anon_sym_BANGthumb_BANG] = ACTIONS(389),
    [anon_sym_BANGbreath_BANG] = ACTIONS(389),
    [anon_sym_BANGpppp_BANG] = ACTIONS(389),
    [anon_sym_BANGppp_BANG] = ACTIONS(389),
    [anon_sym_BANGpp_BANG] = ACTIONS(389),
    [anon_sym_BANGp_BANG] = ACTIONS(389),
    [anon_sym_BANGmp_BANG] = ACTIONS(389),
    [anon_sym_BANGmf_BANG] = ACTIONS(389),
    [anon_sym_BANGf_BANG] = ACTIONS(389),
    [anon_sym_BANGff_BANG] = ACTIONS(389),
    [anon_sym_BANGfff_BANG] = ACTIONS(389),
    [anon_sym_BANGffff_BANG] = ACTIONS(389),
    [anon_sym_BANGsfz_BANG] = ACTIONS(389),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(389),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(389),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(389),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(389),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(389),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(389),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(389),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(389),
    [anon_sym_BANGsegno_BANG] = ACTIONS(389),
    [anon_sym_BANGcoda_BANG] = ACTIONS(389),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(389),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(389),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(389),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(389),
    [anon_sym_BANGfine_BANG] = ACTIONS(389),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(389),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(389),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(389),
    [sym_parts_line] = ACTIONS(389),
    [sym_instruction] = ACTIONS(389),
    [sym_key] = ACTIONS(389),
    [sym_macros] = ACTIONS(389),
    [sym_meter] = ACTIONS(389),
    [sym_notes] = ACTIONS(389),
    [anon_sym_X_COLON] = ACTIONS(389),
    [sym_remark] = ACTIONS(389),
    [sym_rhythm_line] = ACTIONS(389),
    [anon_sym_s_COLON] = ACTIONS(389),
    [sym_tempo] = ACTIONS(389),
    [sym_tune_title] = ACTIONS(389),
    [sym_unit_note_length] = ACTIONS(389),
    [anon_sym_U_COLON] = ACTIONS(389),
    [sym_voice] = ACTIONS(389),
    [anon_sym_w_COLON] = ACTIONS(389),
    [sym_words_postbody] = ACTIONS(389),
  },
  [50] = {
    [ts_builtin_sym_end] = ACTIONS(393),
    [sym__NL] = ACTIONS(395),
    [sym_COMMENT] = ACTIONS(395),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(393),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(395),
    [aux_sym__music_content_token1] = ACTIONS(395),
    [sym_slur_open] = ACTIONS(395),
    [sym_slur_close] = ACTIONS(393),
    [anon_sym_LBRACK] = ACTIONS(395),
    [sym_alteration] = ACTIONS(393),
    [sym_note_letter] = ACTIONS(393),
    [sym_rest] = ACTIONS(393),
    [anon_sym_Z] = ACTIONS(393),
    [anon_sym_X] = ACTIONS(395),
    [aux_sym_grace_note_token1] = ACTIONS(393),
    [aux_sym_chord_symbol_token1] = ACTIONS(395),
    [sym_annotation] = ACTIONS(393),
    [sym_tuplet_marker] = ACTIONS(393),
    [sym_decoration_shorthand] = ACTIONS(395),
    [sym_bar_line] = ACTIONS(395),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(393),
    [sym_thin_double_bar_line] = ACTIONS(393),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(393),
    [sym_start_of_repeated_section] = ACTIONS(393),
    [sym_end_of_repeated_section] = ACTIONS(393),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(393),
    [anon_sym_BANGtrill_BANG] = ACTIONS(393),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(393),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(393),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(393),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(393),
    [anon_sym_BANGmordent_BANG] = ACTIONS(393),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(393),
    [anon_sym_BANGroll_BANG] = ACTIONS(393),
    [anon_sym_BANGturn_BANG] = ACTIONS(393),
    [anon_sym_BANGturnx_BANG] = ACTIONS(393),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(393),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(393),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(393),
    [anon_sym_BANG_GT_BANG] = ACTIONS(393),
    [anon_sym_BANGaccent_BANG] = ACTIONS(393),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(393),
    [anon_sym_BANGfermata_BANG] = ACTIONS(393),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(393),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(393),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(393),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(393),
    [anon_sym_BANGplus_BANG] = ACTIONS(393),
    [anon_sym_BANGsnap_BANG] = ACTIONS(393),
    [anon_sym_BANGslide_BANG] = ACTIONS(393),
    [anon_sym_BANGwedge_BANG] = ACTIONS(393),
    [anon_sym_BANGupbow_BANG] = ACTIONS(393),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(393),
    [anon_sym_BANGopen_BANG] = ACTIONS(393),
    [anon_sym_BANGthumb_BANG] = ACTIONS(393),
    [anon_sym_BANGbreath_BANG] = ACTIONS(393),
    [anon_sym_BANGpppp_BANG] = ACTIONS(393),
    [anon_sym_BANGppp_BANG] = ACTIONS(393),
    [anon_sym_BANGpp_BANG] = ACTIONS(393),
    [anon_sym_BANGp_BANG] = ACTIONS(393),
    [anon_sym_BANGmp_BANG] = ACTIONS(393),
    [anon_sym_BANGmf_BANG] = ACTIONS(393),
    [anon_sym_BANGf_BANG] = ACTIONS(393),
    [anon_sym_BANGff_BANG] = ACTIONS(393),
    [anon_sym_BANGfff_BANG] = ACTIONS(393),
    [anon_sym_BANGffff_BANG] = ACTIONS(393),
    [anon_sym_BANGsfz_BANG] = ACTIONS(393),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(393),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(393),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(393),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(393),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(393),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(393),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(393),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(393),
    [anon_sym_BANGsegno_BANG] = ACTIONS(393),
    [anon_sym_BANGcoda_BANG] = ACTIONS(393),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(393),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(393),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(393),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(393),
    [anon_sym_BANGfine_BANG] = ACTIONS(393),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(393),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(393),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(393),
    [sym_parts_line] = ACTIONS(393),
    [sym_instruction] = ACTIONS(393),
    [sym_key] = ACTIONS(393),
    [sym_macros] = ACTIONS(393),
    [sym_meter] = ACTIONS(393),
    [sym_notes] = ACTIONS(393),
    [anon_sym_X_COLON] = ACTIONS(393),
    [sym_remark] = ACTIONS(393),
    [sym_rhythm_line] = ACTIONS(393),
    [anon_sym_s_COLON] = ACTIONS(393),
    [sym_tempo] = ACTIONS(393),
    [sym_tune_title] = ACTIONS(393),
    [sym_unit_note_length] = ACTIONS(393),
    [anon_sym_U_COLON] = ACTIONS(393),
    [sym_voice] = ACTIONS(393),
    [anon_sym_w_COLON] = ACTIONS(393),
    [sym_words_postbody] = ACTIONS(393),
  },
  [51] = {
    [ts_builtin_sym_end] = ACTIONS(397),
    [sym__NL] = ACTIONS(399),
    [sym_COMMENT] = ACTIONS(399),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(397),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(399),
    [aux_sym__music_content_token1] = ACTIONS(399),
    [sym_slur_open] = ACTIONS(399),
    [sym_slur_close] = ACTIONS(397),
    [anon_sym_LBRACK] = ACTIONS(399),
    [sym_alteration] = ACTIONS(397),
    [sym_note_letter] = ACTIONS(397),
    [sym_rest] = ACTIONS(397),
    [anon_sym_Z] = ACTIONS(397),
    [anon_sym_X] = ACTIONS(399),
    [aux_sym_grace_note_token1] = ACTIONS(397),
    [aux_sym_chord_symbol_token1] = ACTIONS(399),
    [sym_annotation] = ACTIONS(397),
    [sym_tuplet_marker] = ACTIONS(397),
    [sym_decoration_shorthand] = ACTIONS(399),
    [sym_bar_line] = ACTIONS(399),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(397),
    [sym_thin_double_bar_line] = ACTIONS(397),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(397),
    [sym_start_of_repeated_section] = ACTIONS(397),
    [sym_end_of_repeated_section] = ACTIONS(397),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(397),
    [anon_sym_BANGtrill_BANG] = ACTIONS(397),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(397),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(397),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(397),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(397),
    [anon_sym_BANGmordent_BANG] = ACTIONS(397),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(397),
    [anon_sym_BANGroll_BANG] = ACTIONS(397),
    [anon_sym_BANGturn_BANG] = ACTIONS(397),
    [anon_sym_BANGturnx_BANG] = ACTIONS(397),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(397),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(397),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(397),
    [anon_sym_BANG_GT_BANG] = ACTIONS(397),
    [anon_sym_BANGaccent_BANG] = ACTIONS(397),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(397),
    [anon_sym_BANGfermata_BANG] = ACTIONS(397),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(397),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(397),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(397),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(397),
    [anon_sym_BANGplus_BANG] = ACTIONS(397),
    [anon_sym_BANGsnap_BANG] = ACTIONS(397),
    [anon_sym_BANGslide_BANG] = ACTIONS(397),
    [anon_sym_BANGwedge_BANG] = ACTIONS(397),
    [anon_sym_BANGupbow_BANG] = ACTIONS(397),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(397),
    [anon_sym_BANGopen_BANG] = ACTIONS(397),
    [anon_sym_BANGthumb_BANG] = ACTIONS(397),
    [anon_sym_BANGbreath_BANG] = ACTIONS(397),
    [anon_sym_BANGpppp_BANG] = ACTIONS(397),
    [anon_sym_BANGppp_BANG] = ACTIONS(397),
    [anon_sym_BANGpp_BANG] = ACTIONS(397),
    [anon_sym_BANGp_BANG] = ACTIONS(397),
    [anon_sym_BANGmp_BANG] = ACTIONS(397),
    [anon_sym_BANGmf_BANG] = ACTIONS(397),
    [anon_sym_BANGf_BANG] = ACTIONS(397),
    [anon_sym_BANGff_BANG] = ACTIONS(397),
    [anon_sym_BANGfff_BANG] = ACTIONS(397),
    [anon_sym_BANGffff_BANG] = ACTIONS(397),
    [anon_sym_BANGsfz_BANG] = ACTIONS(397),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(397),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(397),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(397),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(397),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(397),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(397),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(397),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(397),
    [anon_sym_BANGsegno_BANG] = ACTIONS(397),
    [anon_sym_BANGcoda_BANG] = ACTIONS(397),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(397),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(397),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(397),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(397),
    [anon_sym_BANGfine_BANG] = ACTIONS(397),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(397),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(397),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(397),
    [sym_parts_line] = ACTIONS(397),
    [sym_instruction] = ACTIONS(397),
    [sym_key] = ACTIONS(397),
    [sym_macros] = ACTIONS(397),
    [sym_meter] = ACTIONS(397),
    [sym_notes] = ACTIONS(397),
    [anon_sym_X_COLON] = ACTIONS(397),
    [sym_remark] = ACTIONS(397),
    [sym_rhythm_line] = ACTIONS(397),
    [anon_sym_s_COLON] = ACTIONS(397),
    [sym_tempo] = ACTIONS(397),
    [sym_tune_title] = ACTIONS(397),
    [sym_unit_note_length] = ACTIONS(397),
    [anon_sym_U_COLON] = ACTIONS(397),
    [sym_voice] = ACTIONS(397),
    [anon_sym_w_COLON] = ACTIONS(397),
    [sym_words_postbody] = ACTIONS(397),
  },
  [52] = {
    [ts_builtin_sym_end] = ACTIONS(401),
    [sym__NL] = ACTIONS(403),
    [sym_COMMENT] = ACTIONS(403),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(401),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(403),
    [aux_sym__music_content_token1] = ACTIONS(403),
    [sym_slur_open] = ACTIONS(403),
    [sym_slur_close] = ACTIONS(401),
    [anon_sym_LBRACK] = ACTIONS(403),
    [sym_alteration] = ACTIONS(401),
    [sym_note_letter] = ACTIONS(401),
    [sym_rest] = ACTIONS(401),
    [anon_sym_Z] = ACTIONS(401),
    [anon_sym_X] = ACTIONS(403),
    [aux_sym_grace_note_token1] = ACTIONS(401),
    [aux_sym_chord_symbol_token1] = ACTIONS(403),
    [sym_annotation] = ACTIONS(401),
    [sym_tuplet_marker] = ACTIONS(401),
    [sym_decoration_shorthand] = ACTIONS(403),
    [sym_bar_line] = ACTIONS(403),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(401),
    [sym_thin_double_bar_line] = ACTIONS(401),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(401),
    [sym_start_of_repeated_section] = ACTIONS(401),
    [sym_end_of_repeated_section] = ACTIONS(401),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(401),
    [anon_sym_BANGtrill_BANG] = ACTIONS(401),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(401),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(401),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(401),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(401),
    [anon_sym_BANGmordent_BANG] = ACTIONS(401),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(401),
    [anon_sym_BANGroll_BANG] = ACTIONS(401),
    [anon_sym_BANGturn_BANG] = ACTIONS(401),
    [anon_sym_BANGturnx_BANG] = ACTIONS(401),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(401),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(401),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(401),
    [anon_sym_BANG_GT_BANG] = ACTIONS(401),
    [anon_sym_BANGaccent_BANG] = ACTIONS(401),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(401),
    [anon_sym_BANGfermata_BANG] = ACTIONS(401),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(401),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(401),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(401),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(401),
    [anon_sym_BANGplus_BANG] = ACTIONS(401),
    [anon_sym_BANGsnap_BANG] = ACTIONS(401),
    [anon_sym_BANGslide_BANG] = ACTIONS(401),
    [anon_sym_BANGwedge_BANG] = ACTIONS(401),
    [anon_sym_BANGupbow_BANG] = ACTIONS(401),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(401),
    [anon_sym_BANGopen_BANG] = ACTIONS(401),
    [anon_sym_BANGthumb_BANG] = ACTIONS(401),
    [anon_sym_BANGbreath_BANG] = ACTIONS(401),
    [anon_sym_BANGpppp_BANG] = ACTIONS(401),
    [anon_sym_BANGppp_BANG] = ACTIONS(401),
    [anon_sym_BANGpp_BANG] = ACTIONS(401),
    [anon_sym_BANGp_BANG] = ACTIONS(401),
    [anon_sym_BANGmp_BANG] = ACTIONS(401),
    [anon_sym_BANGmf_BANG] = ACTIONS(401),
    [anon_sym_BANGf_BANG] = ACTIONS(401),
    [anon_sym_BANGff_BANG] = ACTIONS(401),
    [anon_sym_BANGfff_BANG] = ACTIONS(401),
    [anon_sym_BANGffff_BANG] = ACTIONS(401),
    [anon_sym_BANGsfz_BANG] = ACTIONS(401),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(401),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(401),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(401),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(401),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(401),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(401),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(401),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(401),
    [anon_sym_BANGsegno_BANG] = ACTIONS(401),
    [anon_sym_BANGcoda_BANG] = ACTIONS(401),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(401),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(401),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(401),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(401),
    [anon_sym_BANGfine_BANG] = ACTIONS(401),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(401),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(401),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(401),
    [sym_parts_line] = ACTIONS(401),
    [sym_instruction] = ACTIONS(401),
    [sym_key] = ACTIONS(401),
    [sym_macros] = ACTIONS(401),
    [sym_meter] = ACTIONS(401),
    [sym_notes] = ACTIONS(401),
    [anon_sym_X_COLON] = ACTIONS(401),
    [sym_remark] = ACTIONS(401),
    [sym_rhythm_line] = ACTIONS(401),
    [anon_sym_s_COLON] = ACTIONS(401),
    [sym_tempo] = ACTIONS(401),
    [sym_tune_title] = ACTIONS(401),
    [sym_unit_note_length] = ACTIONS(401),
    [anon_sym_U_COLON] = ACTIONS(401),
    [sym_voice] = ACTIONS(401),
    [anon_sym_w_COLON] = ACTIONS(401),
    [sym_words_postbody] = ACTIONS(401),
  },
  [53] = {
    [ts_builtin_sym_end] = ACTIONS(405),
    [sym__NL] = ACTIONS(407),
    [sym_COMMENT] = ACTIONS(407),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(405),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(407),
    [aux_sym__music_content_token1] = ACTIONS(407),
    [sym_slur_open] = ACTIONS(407),
    [sym_slur_close] = ACTIONS(405),
    [anon_sym_LBRACK] = ACTIONS(407),
    [sym_alteration] = ACTIONS(405),
    [sym_note_letter] = ACTIONS(405),
    [sym_rest] = ACTIONS(405),
    [anon_sym_Z] = ACTIONS(405),
    [anon_sym_X] = ACTIONS(407),
    [aux_sym_grace_note_token1] = ACTIONS(405),
    [aux_sym_chord_symbol_token1] = ACTIONS(407),
    [sym_annotation] = ACTIONS(405),
    [sym_tuplet_marker] = ACTIONS(405),
    [sym_decoration_shorthand] = ACTIONS(407),
    [sym_bar_line] = ACTIONS(407),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(405),
    [sym_thin_double_bar_line] = ACTIONS(405),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(405),
    [sym_start_of_repeated_section] = ACTIONS(405),
    [sym_end_of_repeated_section] = ACTIONS(405),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(405),
    [anon_sym_BANGtrill_BANG] = ACTIONS(405),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(405),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(405),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(405),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(405),
    [anon_sym_BANGmordent_BANG] = ACTIONS(405),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(405),
    [anon_sym_BANGroll_BANG] = ACTIONS(405),
    [anon_sym_BANGturn_BANG] = ACTIONS(405),
    [anon_sym_BANGturnx_BANG] = ACTIONS(405),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(405),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(405),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(405),
    [anon_sym_BANG_GT_BANG] = ACTIONS(405),
    [anon_sym_BANGaccent_BANG] = ACTIONS(405),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(405),
    [anon_sym_BANGfermata_BANG] = ACTIONS(405),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(405),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(405),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(405),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(405),
    [anon_sym_BANGplus_BANG] = ACTIONS(405),
    [anon_sym_BANGsnap_BANG] = ACTIONS(405),
    [anon_sym_BANGslide_BANG] = ACTIONS(405),
    [anon_sym_BANGwedge_BANG] = ACTIONS(405),
    [anon_sym_BANGupbow_BANG] = ACTIONS(405),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(405),
    [anon_sym_BANGopen_BANG] = ACTIONS(405),
    [anon_sym_BANGthumb_BANG] = ACTIONS(405),
    [anon_sym_BANGbreath_BANG] = ACTIONS(405),
    [anon_sym_BANGpppp_BANG] = ACTIONS(405),
    [anon_sym_BANGppp_BANG] = ACTIONS(405),
    [anon_sym_BANGpp_BANG] = ACTIONS(405),
    [anon_sym_BANGp_BANG] = ACTIONS(405),
    [anon_sym_BANGmp_BANG] = ACTIONS(405),
    [anon_sym_BANGmf_BANG] = ACTIONS(405),
    [anon_sym_BANGf_BANG] = ACTIONS(405),
    [anon_sym_BANGff_BANG] = ACTIONS(405),
    [anon_sym_BANGfff_BANG] = ACTIONS(405),
    [anon_sym_BANGffff_BANG] = ACTIONS(405),
    [anon_sym_BANGsfz_BANG] = ACTIONS(405),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(405),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(405),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(405),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(405),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(405),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(405),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(405),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(405),
    [anon_sym_BANGsegno_BANG] = ACTIONS(405),
    [anon_sym_BANGcoda_BANG] = ACTIONS(405),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(405),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(405),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(405),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(405),
    [anon_sym_BANGfine_BANG] = ACTIONS(405),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(405),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(405),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(405),
    [sym_parts_line] = ACTIONS(405),
    [sym_instruction] = ACTIONS(405),
    [sym_key] = ACTIONS(405),
    [sym_macros] = ACTIONS(405),
    [sym_meter] = ACTIONS(405),
    [sym_notes] = ACTIONS(405),
    [anon_sym_X_COLON] = ACTIONS(405),
    [sym_remark] = ACTIONS(405),
    [sym_rhythm_line] = ACTIONS(405),
    [anon_sym_s_COLON] = ACTIONS(405),
    [sym_tempo] = ACTIONS(405),
    [sym_tune_title] = ACTIONS(405),
    [sym_unit_note_length] = ACTIONS(405),
    [anon_sym_U_COLON] = ACTIONS(405),
    [sym_voice] = ACTIONS(405),
    [anon_sym_w_COLON] = ACTIONS(405),
    [sym_words_postbody] = ACTIONS(405),
  },
  [54] = {
    [ts_builtin_sym_end] = ACTIONS(409),
    [sym__NL] = ACTIONS(411),
    [sym_COMMENT] = ACTIONS(411),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(409),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(411),
    [aux_sym__music_content_token1] = ACTIONS(411),
    [sym_slur_open] = ACTIONS(411),
    [sym_slur_close] = ACTIONS(409),
    [anon_sym_LBRACK] = ACTIONS(411),
    [sym_alteration] = ACTIONS(409),
    [sym_note_letter] = ACTIONS(409),
    [sym_rest] = ACTIONS(409),
    [anon_sym_Z] = ACTIONS(409),
    [anon_sym_X] = ACTIONS(411),
    [aux_sym_grace_note_token1] = ACTIONS(409),
    [aux_sym_chord_symbol_token1] = ACTIONS(411),
    [sym_annotation] = ACTIONS(409),
    [sym_tuplet_marker] = ACTIONS(409),
    [sym_decoration_shorthand] = ACTIONS(411),
    [sym_bar_line] = ACTIONS(411),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(409),
    [sym_thin_double_bar_line] = ACTIONS(409),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(409),
    [sym_start_of_repeated_section] = ACTIONS(409),
    [sym_end_of_repeated_section] = ACTIONS(409),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(409),
    [anon_sym_BANGtrill_BANG] = ACTIONS(409),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(409),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(409),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(409),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(409),
    [anon_sym_BANGmordent_BANG] = ACTIONS(409),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(409),
    [anon_sym_BANGroll_BANG] = ACTIONS(409),
    [anon_sym_BANGturn_BANG] = ACTIONS(409),
    [anon_sym_BANGturnx_BANG] = ACTIONS(409),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(409),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(409),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(409),
    [anon_sym_BANG_GT_BANG] = ACTIONS(409),
    [anon_sym_BANGaccent_BANG] = ACTIONS(409),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(409),
    [anon_sym_BANGfermata_BANG] = ACTIONS(409),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(409),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(409),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(409),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(409),
    [anon_sym_BANGplus_BANG] = ACTIONS(409),
    [anon_sym_BANGsnap_BANG] = ACTIONS(409),
    [anon_sym_BANGslide_BANG] = ACTIONS(409),
    [anon_sym_BANGwedge_BANG] = ACTIONS(409),
    [anon_sym_BANGupbow_BANG] = ACTIONS(409),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(409),
    [anon_sym_BANGopen_BANG] = ACTIONS(409),
    [anon_sym_BANGthumb_BANG] = ACTIONS(409),
    [anon_sym_BANGbreath_BANG] = ACTIONS(409),
    [anon_sym_BANGpppp_BANG] = ACTIONS(409),
    [anon_sym_BANGppp_BANG] = ACTIONS(409),
    [anon_sym_BANGpp_BANG] = ACTIONS(409),
    [anon_sym_BANGp_BANG] = ACTIONS(409),
    [anon_sym_BANGmp_BANG] = ACTIONS(409),
    [anon_sym_BANGmf_BANG] = ACTIONS(409),
    [anon_sym_BANGf_BANG] = ACTIONS(409),
    [anon_sym_BANGff_BANG] = ACTIONS(409),
    [anon_sym_BANGfff_BANG] = ACTIONS(409),
    [anon_sym_BANGffff_BANG] = ACTIONS(409),
    [anon_sym_BANGsfz_BANG] = ACTIONS(409),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(409),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(409),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(409),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(409),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(409),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(409),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(409),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(409),
    [anon_sym_BANGsegno_BANG] = ACTIONS(409),
    [anon_sym_BANGcoda_BANG] = ACTIONS(409),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(409),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(409),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(409),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(409),
    [anon_sym_BANGfine_BANG] = ACTIONS(409),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(409),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(409),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(409),
    [sym_parts_line] = ACTIONS(409),
    [sym_instruction] = ACTIONS(409),
    [sym_key] = ACTIONS(409),
    [sym_macros] = ACTIONS(409),
    [sym_meter] = ACTIONS(409),
    [sym_notes] = ACTIONS(409),
    [anon_sym_X_COLON] = ACTIONS(409),
    [sym_remark] = ACTIONS(409),
    [sym_rhythm_line] = ACTIONS(409),
    [anon_sym_s_COLON] = ACTIONS(409),
    [sym_tempo] = ACTIONS(409),
    [sym_tune_title] = ACTIONS(409),
    [sym_unit_note_length] = ACTIONS(409),
    [anon_sym_U_COLON] = ACTIONS(409),
    [sym_voice] = ACTIONS(409),
    [anon_sym_w_COLON] = ACTIONS(409),
    [sym_words_postbody] = ACTIONS(409),
  },
  [55] = {
    [ts_builtin_sym_end] = ACTIONS(413),
    [sym__NL] = ACTIONS(415),
    [sym_COMMENT] = ACTIONS(415),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(413),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(417),
    [aux_sym__music_content_token1] = ACTIONS(415),
    [sym_slur_open] = ACTIONS(415),
    [sym_slur_close] = ACTIONS(413),
    [anon_sym_LBRACK] = ACTIONS(415),
    [sym_alteration] = ACTIONS(413),
    [sym_note_letter] = ACTIONS(413),
    [sym_rest] = ACTIONS(413),
    [anon_sym_Z] = ACTIONS(413),
    [anon_sym_X] = ACTIONS(415),
    [aux_sym_grace_note_token1] = ACTIONS(413),
    [aux_sym_chord_symbol_token1] = ACTIONS(415),
    [sym_annotation] = ACTIONS(413),
    [sym_tuplet_marker] = ACTIONS(413),
    [sym_decoration_shorthand] = ACTIONS(415),
    [sym_bar_line] = ACTIONS(415),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(413),
    [sym_thin_double_bar_line] = ACTIONS(413),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(413),
    [sym_start_of_repeated_section] = ACTIONS(413),
    [sym_end_of_repeated_section] = ACTIONS(413),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(413),
    [anon_sym_BANGtrill_BANG] = ACTIONS(413),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(413),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(413),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(413),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(413),
    [anon_sym_BANGmordent_BANG] = ACTIONS(413),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(413),
    [anon_sym_BANGroll_BANG] = ACTIONS(413),
    [anon_sym_BANGturn_BANG] = ACTIONS(413),
    [anon_sym_BANGturnx_BANG] = ACTIONS(413),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(413),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(413),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(413),
    [anon_sym_BANG_GT_BANG] = ACTIONS(413),
    [anon_sym_BANGaccent_BANG] = ACTIONS(413),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(413),
    [anon_sym_BANGfermata_BANG] = ACTIONS(413),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(413),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(413),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(413),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(413),
    [anon_sym_BANGplus_BANG] = ACTIONS(413),
    [anon_sym_BANGsnap_BANG] = ACTIONS(413),
    [anon_sym_BANGslide_BANG] = ACTIONS(413),
    [anon_sym_BANGwedge_BANG] = ACTIONS(413),
    [anon_sym_BANGupbow_BANG] = ACTIONS(413),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(413),
    [anon_sym_BANGopen_BANG] = ACTIONS(413),
    [anon_sym_BANGthumb_BANG] = ACTIONS(413),
    [anon_sym_BANGbreath_BANG] = ACTIONS(413),
    [anon_sym_BANGpppp_BANG] = ACTIONS(413),
    [anon_sym_BANGppp_BANG] = ACTIONS(413),
    [anon_sym_BANGpp_BANG] = ACTIONS(413),
    [anon_sym_BANGp_BANG] = ACTIONS(413),
    [anon_sym_BANGmp_BANG] = ACTIONS(413),
    [anon_sym_BANGmf_BANG] = ACTIONS(413),
    [anon_sym_BANGf_BANG] = ACTIONS(413),
    [anon_sym_BANGff_BANG] = ACTIONS(413),
    [anon_sym_BANGfff_BANG] = ACTIONS(413),
    [anon_sym_BANGffff_BANG] = ACTIONS(413),
    [anon_sym_BANGsfz_BANG] = ACTIONS(413),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(413),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(413),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(413),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(413),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(413),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(413),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(413),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(413),
    [anon_sym_BANGsegno_BANG] = ACTIONS(413),
    [anon_sym_BANGcoda_BANG] = ACTIONS(413),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(413),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(413),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(413),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(413),
    [anon_sym_BANGfine_BANG] = ACTIONS(413),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(413),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(413),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(413),
    [sym_parts_line] = ACTIONS(413),
    [sym_instruction] = ACTIONS(413),
    [sym_key] = ACTIONS(413),
    [sym_macros] = ACTIONS(413),
    [sym_meter] = ACTIONS(413),
    [sym_notes] = ACTIONS(413),
    [anon_sym_X_COLON] = ACTIONS(413),
    [sym_remark] = ACTIONS(413),
    [sym_rhythm_line] = ACTIONS(413),
    [anon_sym_s_COLON] = ACTIONS(413),
    [sym_tempo] = ACTIONS(413),
    [sym_tune_title] = ACTIONS(413),
    [sym_unit_note_length] = ACTIONS(413),
    [anon_sym_U_COLON] = ACTIONS(413),
    [sym_voice] = ACTIONS(413),
    [anon_sym_w_COLON] = ACTIONS(413),
    [sym_words_postbody] = ACTIONS(413),
  },
  [56] = {
    [ts_builtin_sym_end] = ACTIONS(419),
    [sym__NL] = ACTIONS(421),
    [sym_COMMENT] = ACTIONS(421),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(419),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(421),
    [aux_sym__music_content_token1] = ACTIONS(421),
    [sym_slur_open] = ACTIONS(421),
    [sym_slur_close] = ACTIONS(419),
    [anon_sym_LBRACK] = ACTIONS(421),
    [sym_alteration] = ACTIONS(419),
    [sym_note_letter] = ACTIONS(419),
    [sym_rest] = ACTIONS(419),
    [anon_sym_Z] = ACTIONS(419),
    [anon_sym_X] = ACTIONS(421),
    [aux_sym_grace_note_token1] = ACTIONS(419),
    [aux_sym_chord_symbol_token1] = ACTIONS(421),
    [sym_annotation] = ACTIONS(419),
    [sym_tuplet_marker] = ACTIONS(419),
    [sym_decoration_shorthand] = ACTIONS(421),
    [sym_bar_line] = ACTIONS(421),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(419),
    [sym_thin_double_bar_line] = ACTIONS(419),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(419),
    [sym_start_of_repeated_section] = ACTIONS(419),
    [sym_end_of_repeated_section] = ACTIONS(419),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(419),
    [anon_sym_BANGtrill_BANG] = ACTIONS(419),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(419),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(419),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(419),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(419),
    [anon_sym_BANGmordent_BANG] = ACTIONS(419),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(419),
    [anon_sym_BANGroll_BANG] = ACTIONS(419),
    [anon_sym_BANGturn_BANG] = ACTIONS(419),
    [anon_sym_BANGturnx_BANG] = ACTIONS(419),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(419),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(419),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(419),
    [anon_sym_BANG_GT_BANG] = ACTIONS(419),
    [anon_sym_BANGaccent_BANG] = ACTIONS(419),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(419),
    [anon_sym_BANGfermata_BANG] = ACTIONS(419),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(419),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(419),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(419),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(419),
    [anon_sym_BANGplus_BANG] = ACTIONS(419),
    [anon_sym_BANGsnap_BANG] = ACTIONS(419),
    [anon_sym_BANGslide_BANG] = ACTIONS(419),
    [anon_sym_BANGwedge_BANG] = ACTIONS(419),
    [anon_sym_BANGupbow_BANG] = ACTIONS(419),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(419),
    [anon_sym_BANGopen_BANG] = ACTIONS(419),
    [anon_sym_BANGthumb_BANG] = ACTIONS(419),
    [anon_sym_BANGbreath_BANG] = ACTIONS(419),
    [anon_sym_BANGpppp_BANG] = ACTIONS(419),
    [anon_sym_BANGppp_BANG] = ACTIONS(419),
    [anon_sym_BANGpp_BANG] = ACTIONS(419),
    [anon_sym_BANGp_BANG] = ACTIONS(419),
    [anon_sym_BANGmp_BANG] = ACTIONS(419),
    [anon_sym_BANGmf_BANG] = ACTIONS(419),
    [anon_sym_BANGf_BANG] = ACTIONS(419),
    [anon_sym_BANGff_BANG] = ACTIONS(419),
    [anon_sym_BANGfff_BANG] = ACTIONS(419),
    [anon_sym_BANGffff_BANG] = ACTIONS(419),
    [anon_sym_BANGsfz_BANG] = ACTIONS(419),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(419),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(419),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(419),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(419),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(419),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(419),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(419),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(419),
    [anon_sym_BANGsegno_BANG] = ACTIONS(419),
    [anon_sym_BANGcoda_BANG] = ACTIONS(419),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(419),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(419),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(419),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(419),
    [anon_sym_BANGfine_BANG] = ACTIONS(419),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(419),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(419),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(419),
    [sym_parts_line] = ACTIONS(419),
    [sym_instruction] = ACTIONS(419),
    [sym_key] = ACTIONS(419),
    [sym_macros] = ACTIONS(419),
    [sym_meter] = ACTIONS(419),
    [sym_notes] = ACTIONS(419),
    [anon_sym_X_COLON] = ACTIONS(419),
    [sym_remark] = ACTIONS(419),
    [sym_rhythm_line] = ACTIONS(419),
    [anon_sym_s_COLON] = ACTIONS(419),
    [sym_tempo] = ACTIONS(419),
    [sym_tune_title] = ACTIONS(419),
    [sym_unit_note_length] = ACTIONS(419),
    [anon_sym_U_COLON] = ACTIONS(419),
    [sym_voice] = ACTIONS(419),
    [anon_sym_w_COLON] = ACTIONS(419),
    [sym_words_postbody] = ACTIONS(419),
  },
  [57] = {
    [ts_builtin_sym_end] = ACTIONS(293),
    [sym__NL] = ACTIONS(295),
    [sym_COMMENT] = ACTIONS(295),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(293),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(295),
    [aux_sym__music_content_token1] = ACTIONS(295),
    [sym_slur_open] = ACTIONS(295),
    [sym_slur_close] = ACTIONS(293),
    [anon_sym_LBRACK] = ACTIONS(295),
    [sym_alteration] = ACTIONS(293),
    [sym_note_letter] = ACTIONS(293),
    [sym_rest] = ACTIONS(293),
    [anon_sym_Z] = ACTIONS(293),
    [anon_sym_X] = ACTIONS(295),
    [aux_sym_grace_note_token1] = ACTIONS(293),
    [aux_sym_chord_symbol_token1] = ACTIONS(295),
    [sym_annotation] = ACTIONS(293),
    [sym_tuplet_marker] = ACTIONS(293),
    [sym_decoration_shorthand] = ACTIONS(295),
    [sym_bar_line] = ACTIONS(295),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(293),
    [sym_thin_double_bar_line] = ACTIONS(293),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(293),
    [sym_start_of_repeated_section] = ACTIONS(293),
    [sym_end_of_repeated_section] = ACTIONS(293),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(293),
    [anon_sym_BANGtrill_BANG] = ACTIONS(293),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(293),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(293),
    [anon_sym_BANGmordent_BANG] = ACTIONS(293),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(293),
    [anon_sym_BANGroll_BANG] = ACTIONS(293),
    [anon_sym_BANGturn_BANG] = ACTIONS(293),
    [anon_sym_BANGturnx_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(293),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_BANG] = ACTIONS(293),
    [anon_sym_BANGaccent_BANG] = ACTIONS(293),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(293),
    [anon_sym_BANGfermata_BANG] = ACTIONS(293),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(293),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(293),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(293),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(293),
    [anon_sym_BANGplus_BANG] = ACTIONS(293),
    [anon_sym_BANGsnap_BANG] = ACTIONS(293),
    [anon_sym_BANGslide_BANG] = ACTIONS(293),
    [anon_sym_BANGwedge_BANG] = ACTIONS(293),
    [anon_sym_BANGupbow_BANG] = ACTIONS(293),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(293),
    [anon_sym_BANGopen_BANG] = ACTIONS(293),
    [anon_sym_BANGthumb_BANG] = ACTIONS(293),
    [anon_sym_BANGbreath_BANG] = ACTIONS(293),
    [anon_sym_BANGpppp_BANG] = ACTIONS(293),
    [anon_sym_BANGppp_BANG] = ACTIONS(293),
    [anon_sym_BANGpp_BANG] = ACTIONS(293),
    [anon_sym_BANGp_BANG] = ACTIONS(293),
    [anon_sym_BANGmp_BANG] = ACTIONS(293),
    [anon_sym_BANGmf_BANG] = ACTIONS(293),
    [anon_sym_BANGf_BANG] = ACTIONS(293),
    [anon_sym_BANGff_BANG] = ACTIONS(293),
    [anon_sym_BANGfff_BANG] = ACTIONS(293),
    [anon_sym_BANGffff_BANG] = ACTIONS(293),
    [anon_sym_BANGsfz_BANG] = ACTIONS(293),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(293),
    [anon_sym_BANGsegno_BANG] = ACTIONS(293),
    [anon_sym_BANGcoda_BANG] = ACTIONS(293),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(293),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(293),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(293),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(293),
    [anon_sym_BANGfine_BANG] = ACTIONS(293),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(293),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(293),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(293),
    [sym_parts_line] = ACTIONS(293),
    [sym_instruction] = ACTIONS(293),
    [sym_key] = ACTIONS(293),
    [sym_macros] = ACTIONS(293),
    [sym_meter] = ACTIONS(293),
    [sym_notes] = ACTIONS(293),
    [anon_sym_X_COLON] = ACTIONS(293),
    [sym_remark] = ACTIONS(293),
    [sym_rhythm_line] = ACTIONS(293),
    [anon_sym_s_COLON] = ACTIONS(293),
    [sym_tempo] = ACTIONS(293),
    [sym_tune_title] = ACTIONS(293),
    [sym_unit_note_length] = ACTIONS(293),
    [anon_sym_U_COLON] = ACTIONS(293),
    [sym_voice] = ACTIONS(293),
    [anon_sym_w_COLON] = ACTIONS(293),
    [sym_words_postbody] = ACTIONS(293),
  },
  [58] = {
    [ts_builtin_sym_end] = ACTIONS(423),
    [sym__NL] = ACTIONS(425),
    [sym_COMMENT] = ACTIONS(425),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(423),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(425),
    [aux_sym__music_content_token1] = ACTIONS(425),
    [sym_slur_open] = ACTIONS(425),
    [sym_slur_close] = ACTIONS(423),
    [anon_sym_LBRACK] = ACTIONS(425),
    [sym_alteration] = ACTIONS(423),
    [sym_note_letter] = ACTIONS(423),
    [sym_rest] = ACTIONS(423),
    [anon_sym_Z] = ACTIONS(423),
    [anon_sym_X] = ACTIONS(425),
    [aux_sym_grace_note_token1] = ACTIONS(423),
    [aux_sym_chord_symbol_token1] = ACTIONS(425),
    [sym_annotation] = ACTIONS(423),
    [sym_tuplet_marker] = ACTIONS(423),
    [sym_decoration_shorthand] = ACTIONS(425),
    [sym_bar_line] = ACTIONS(425),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(423),
    [sym_thin_double_bar_line] = ACTIONS(423),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(423),
    [sym_start_of_repeated_section] = ACTIONS(423),
    [sym_end_of_repeated_section] = ACTIONS(423),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(423),
    [anon_sym_BANGtrill_BANG] = ACTIONS(423),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(423),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(423),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(423),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(423),
    [anon_sym_BANGmordent_BANG] = ACTIONS(423),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(423),
    [anon_sym_BANGroll_BANG] = ACTIONS(423),
    [anon_sym_BANGturn_BANG] = ACTIONS(423),
    [anon_sym_BANGturnx_BANG] = ACTIONS(423),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(423),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(423),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(423),
    [anon_sym_BANG_GT_BANG] = ACTIONS(423),
    [anon_sym_BANGaccent_BANG] = ACTIONS(423),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(423),
    [anon_sym_BANGfermata_BANG] = ACTIONS(423),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(423),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(423),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(423),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(423),
    [anon_sym_BANGplus_BANG] = ACTIONS(423),
    [anon_sym_BANGsnap_BANG] = ACTIONS(423),
    [anon_sym_BANGslide_BANG] = ACTIONS(423),
    [anon_sym_BANGwedge_BANG] = ACTIONS(423),
    [anon_sym_BANGupbow_BANG] = ACTIONS(423),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(423),
    [anon_sym_BANGopen_BANG] = ACTIONS(423),
    [anon_sym_BANGthumb_BANG] = ACTIONS(423),
    [anon_sym_BANGbreath_BANG] = ACTIONS(423),
    [anon_sym_BANGpppp_BANG] = ACTIONS(423),
    [anon_sym_BANGppp_BANG] = ACTIONS(423),
    [anon_sym_BANGpp_BANG] = ACTIONS(423),
    [anon_sym_BANGp_BANG] = ACTIONS(423),
    [anon_sym_BANGmp_BANG] = ACTIONS(423),
    [anon_sym_BANGmf_BANG] = ACTIONS(423),
    [anon_sym_BANGf_BANG] = ACTIONS(423),
    [anon_sym_BANGff_BANG] = ACTIONS(423),
    [anon_sym_BANGfff_BANG] = ACTIONS(423),
    [anon_sym_BANGffff_BANG] = ACTIONS(423),
    [anon_sym_BANGsfz_BANG] = ACTIONS(423),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(423),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(423),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(423),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(423),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(423),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(423),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(423),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(423),
    [anon_sym_BANGsegno_BANG] = ACTIONS(423),
    [anon_sym_BANGcoda_BANG] = ACTIONS(423),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(423),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(423),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(423),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(423),
    [anon_sym_BANGfine_BANG] = ACTIONS(423),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(423),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(423),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(423),
    [sym_parts_line] = ACTIONS(423),
    [sym_instruction] = ACTIONS(423),
    [sym_key] = ACTIONS(423),
    [sym_macros] = ACTIONS(423),
    [sym_meter] = ACTIONS(423),
    [sym_notes] = ACTIONS(423),
    [anon_sym_X_COLON] = ACTIONS(423),
    [sym_remark] = ACTIONS(423),
    [sym_rhythm_line] = ACTIONS(423),
    [anon_sym_s_COLON] = ACTIONS(423),
    [sym_tempo] = ACTIONS(423),
    [sym_tune_title] = ACTIONS(423),
    [sym_unit_note_length] = ACTIONS(423),
    [anon_sym_U_COLON] = ACTIONS(423),
    [sym_voice] = ACTIONS(423),
    [anon_sym_w_COLON] = ACTIONS(423),
    [sym_words_postbody] = ACTIONS(423),
  },
  [59] = {
    [ts_builtin_sym_end] = ACTIONS(427),
    [sym__NL] = ACTIONS(429),
    [sym_COMMENT] = ACTIONS(429),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(427),
    [aux_sym__MUSIC_CODE_token1] = ACTIONS(429),
    [aux_sym__music_content_token1] = ACTIONS(429),
    [sym_slur_open] = ACTIONS(429),
    [sym_slur_close] = ACTIONS(427),
    [anon_sym_LBRACK] = ACTIONS(429),
    [sym_alteration] = ACTIONS(427),
    [sym_note_letter] = ACTIONS(427),
    [sym_rest] = ACTIONS(427),
    [anon_sym_Z] = ACTIONS(427),
    [anon_sym_X] = ACTIONS(429),
    [aux_sym_grace_note_token1] = ACTIONS(427),
    [aux_sym_chord_symbol_token1] = ACTIONS(429),
    [sym_annotation] = ACTIONS(427),
    [sym_tuplet_marker] = ACTIONS(427),
    [sym_decoration_shorthand] = ACTIONS(429),
    [sym_bar_line] = ACTIONS(429),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(427),
    [sym_thin_double_bar_line] = ACTIONS(427),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(427),
    [sym_start_of_repeated_section] = ACTIONS(427),
    [sym_end_of_repeated_section] = ACTIONS(427),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(427),
    [anon_sym_BANGtrill_BANG] = ACTIONS(427),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(427),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(427),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(427),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(427),
    [anon_sym_BANGmordent_BANG] = ACTIONS(427),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(427),
    [anon_sym_BANGroll_BANG] = ACTIONS(427),
    [anon_sym_BANGturn_BANG] = ACTIONS(427),
    [anon_sym_BANGturnx_BANG] = ACTIONS(427),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(427),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(427),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(427),
    [anon_sym_BANG_GT_BANG] = ACTIONS(427),
    [anon_sym_BANGaccent_BANG] = ACTIONS(427),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(427),
    [anon_sym_BANGfermata_BANG] = ACTIONS(427),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(427),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(427),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(427),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(427),
    [anon_sym_BANGplus_BANG] = ACTIONS(427),
    [anon_sym_BANGsnap_BANG] = ACTIONS(427),
    [anon_sym_BANGslide_BANG] = ACTIONS(427),
    [anon_sym_BANGwedge_BANG] = ACTIONS(427),
    [anon_sym_BANGupbow_BANG] = ACTIONS(427),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(427),
    [anon_sym_BANGopen_BANG] = ACTIONS(427),
    [anon_sym_BANGthumb_BANG] = ACTIONS(427),
    [anon_sym_BANGbreath_BANG] = ACTIONS(427),
    [anon_sym_BANGpppp_BANG] = ACTIONS(427),
    [anon_sym_BANGppp_BANG] = ACTIONS(427),
    [anon_sym_BANGpp_BANG] = ACTIONS(427),
    [anon_sym_BANGp_BANG] = ACTIONS(427),
    [anon_sym_BANGmp_BANG] = ACTIONS(427),
    [anon_sym_BANGmf_BANG] = ACTIONS(427),
    [anon_sym_BANGf_BANG] = ACTIONS(427),
    [anon_sym_BANGff_BANG] = ACTIONS(427),
    [anon_sym_BANGfff_BANG] = ACTIONS(427),
    [anon_sym_BANGffff_BANG] = ACTIONS(427),
    [anon_sym_BANGsfz_BANG] = ACTIONS(427),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(427),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(427),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(427),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(427),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(427),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(427),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(427),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(427),
    [anon_sym_BANGsegno_BANG] = ACTIONS(427),
    [anon_sym_BANGcoda_BANG] = ACTIONS(427),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(427),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(427),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(427),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(427),
    [anon_sym_BANGfine_BANG] = ACTIONS(427),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(427),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(427),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(427),
    [sym_parts_line] = ACTIONS(427),
    [sym_instruction] = ACTIONS(427),
    [sym_key] = ACTIONS(427),
    [sym_macros] = ACTIONS(427),
    [sym_meter] = ACTIONS(427),
    [sym_notes] = ACTIONS(427),
    [anon_sym_X_COLON] = ACTIONS(427),
    [sym_remark] = ACTIONS(427),
    [sym_rhythm_line] = ACTIONS(427),
    [anon_sym_s_COLON] = ACTIONS(427),
    [sym_tempo] = ACTIONS(427),
    [sym_tune_title] = ACTIONS(427),
    [sym_unit_note_length] = ACTIONS(427),
    [anon_sym_U_COLON] = ACTIONS(427),
    [sym_voice] = ACTIONS(427),
    [anon_sym_w_COLON] = ACTIONS(427),
    [sym_words_postbody] = ACTIONS(427),
  },
  [60] = {
    [ts_builtin_sym_end] = ACTIONS(431),
    [sym__NL] = ACTIONS(433),
    [sym_COMMENT] = ACTIONS(433),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(431),
    [aux_sym__music_content_token1] = ACTIONS(433),
    [sym_slur_open] = ACTIONS(433),
    [sym_slur_close] = ACTIONS(431),
    [anon_sym_LBRACK] = ACTIONS(433),
    [sym_alteration] = ACTIONS(431),
    [sym_note_letter] = ACTIONS(431),
    [sym_rest] = ACTIONS(431),
    [anon_sym_Z] = ACTIONS(431),
    [anon_sym_X] = ACTIONS(433),
    [aux_sym_grace_note_token1] = ACTIONS(431),
    [aux_sym_chord_symbol_token1] = ACTIONS(433),
    [sym_annotation] = ACTIONS(431),
    [sym_tuplet_marker] = ACTIONS(431),
    [sym_decoration_shorthand] = ACTIONS(433),
    [sym_bar_line] = ACTIONS(433),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(431),
    [sym_thin_double_bar_line] = ACTIONS(431),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(431),
    [sym_start_of_repeated_section] = ACTIONS(431),
    [sym_end_of_repeated_section] = ACTIONS(431),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(431),
    [anon_sym_BANGtrill_BANG] = ACTIONS(431),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(431),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(431),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(431),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(431),
    [anon_sym_BANGmordent_BANG] = ACTIONS(431),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(431),
    [anon_sym_BANGroll_BANG] = ACTIONS(431),
    [anon_sym_BANGturn_BANG] = ACTIONS(431),
    [anon_sym_BANGturnx_BANG] = ACTIONS(431),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(431),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(431),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(431),
    [anon_sym_BANG_GT_BANG] = ACTIONS(431),
    [anon_sym_BANGaccent_BANG] = ACTIONS(431),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(431),
    [anon_sym_BANGfermata_BANG] = ACTIONS(431),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(431),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(431),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(431),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(431),
    [anon_sym_BANGplus_BANG] = ACTIONS(431),
    [anon_sym_BANGsnap_BANG] = ACTIONS(431),
    [anon_sym_BANGslide_BANG] = ACTIONS(431),
    [anon_sym_BANGwedge_BANG] = ACTIONS(431),
    [anon_sym_BANGupbow_BANG] = ACTIONS(431),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(431),
    [anon_sym_BANGopen_BANG] = ACTIONS(431),
    [anon_sym_BANGthumb_BANG] = ACTIONS(431),
    [anon_sym_BANGbreath_BANG] = ACTIONS(431),
    [anon_sym_BANGpppp_BANG] = ACTIONS(431),
    [anon_sym_BANGppp_BANG] = ACTIONS(431),
    [anon_sym_BANGpp_BANG] = ACTIONS(431),
    [anon_sym_BANGp_BANG] = ACTIONS(431),
    [anon_sym_BANGmp_BANG] = ACTIONS(431),
    [anon_sym_BANGmf_BANG] = ACTIONS(431),
    [anon_sym_BANGf_BANG] = ACTIONS(431),
    [anon_sym_BANGff_BANG] = ACTIONS(431),
    [anon_sym_BANGfff_BANG] = ACTIONS(431),
    [anon_sym_BANGffff_BANG] = ACTIONS(431),
    [anon_sym_BANGsfz_BANG] = ACTIONS(431),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(431),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(431),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(431),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(431),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(431),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(431),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(431),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(431),
    [anon_sym_BANGsegno_BANG] = ACTIONS(431),
    [anon_sym_BANGcoda_BANG] = ACTIONS(431),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(431),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(431),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(431),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(431),
    [anon_sym_BANGfine_BANG] = ACTIONS(431),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(431),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(431),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(431),
    [sym_parts_line] = ACTIONS(431),
    [sym_instruction] = ACTIONS(431),
    [sym_key] = ACTIONS(431),
    [sym_macros] = ACTIONS(431),
    [sym_meter] = ACTIONS(431),
    [sym_notes] = ACTIONS(431),
    [anon_sym_X_COLON] = ACTIONS(431),
    [sym_remark] = ACTIONS(431),
    [sym_rhythm_line] = ACTIONS(431),
    [anon_sym_s_COLON] = ACTIONS(431),
    [sym_tempo] = ACTIONS(431),
    [sym_tune_title] = ACTIONS(431),
    [sym_unit_note_length] = ACTIONS(431),
    [anon_sym_U_COLON] = ACTIONS(431),
    [sym_voice] = ACTIONS(431),
    [anon_sym_w_COLON] = ACTIONS(431),
    [sym_words_postbody] = ACTIONS(431),
  },
  [61] = {
    [ts_builtin_sym_end] = ACTIONS(435),
    [sym__NL] = ACTIONS(437),
    [sym_COMMENT] = ACTIONS(437),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(435),
    [aux_sym__music_content_token1] = ACTIONS(437),
    [sym_slur_open] = ACTIONS(437),
    [sym_slur_close] = ACTIONS(435),
    [anon_sym_LBRACK] = ACTIONS(437),
    [sym_alteration] = ACTIONS(435),
    [sym_note_letter] = ACTIONS(435),
    [sym_rest] = ACTIONS(435),
    [anon_sym_Z] = ACTIONS(435),
    [anon_sym_X] = ACTIONS(437),
    [aux_sym_grace_note_token1] = ACTIONS(435),
    [aux_sym_chord_symbol_token1] = ACTIONS(437),
    [sym_annotation] = ACTIONS(435),
    [sym_tuplet_marker] = ACTIONS(435),
    [sym_decoration_shorthand] = ACTIONS(437),
    [sym_bar_line] = ACTIONS(437),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(435),
    [sym_thin_double_bar_line] = ACTIONS(435),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(435),
    [sym_start_of_repeated_section] = ACTIONS(435),
    [sym_end_of_repeated_section] = ACTIONS(435),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(435),
    [anon_sym_BANGtrill_BANG] = ACTIONS(435),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(435),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(435),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(435),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(435),
    [anon_sym_BANGmordent_BANG] = ACTIONS(435),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(435),
    [anon_sym_BANGroll_BANG] = ACTIONS(435),
    [anon_sym_BANGturn_BANG] = ACTIONS(435),
    [anon_sym_BANGturnx_BANG] = ACTIONS(435),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(435),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(435),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(435),
    [anon_sym_BANG_GT_BANG] = ACTIONS(435),
    [anon_sym_BANGaccent_BANG] = ACTIONS(435),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(435),
    [anon_sym_BANGfermata_BANG] = ACTIONS(435),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(435),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(435),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(435),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(435),
    [anon_sym_BANGplus_BANG] = ACTIONS(435),
    [anon_sym_BANGsnap_BANG] = ACTIONS(435),
    [anon_sym_BANGslide_BANG] = ACTIONS(435),
    [anon_sym_BANGwedge_BANG] = ACTIONS(435),
    [anon_sym_BANGupbow_BANG] = ACTIONS(435),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(435),
    [anon_sym_BANGopen_BANG] = ACTIONS(435),
    [anon_sym_BANGthumb_BANG] = ACTIONS(435),
    [anon_sym_BANGbreath_BANG] = ACTIONS(435),
    [anon_sym_BANGpppp_BANG] = ACTIONS(435),
    [anon_sym_BANGppp_BANG] = ACTIONS(435),
    [anon_sym_BANGpp_BANG] = ACTIONS(435),
    [anon_sym_BANGp_BANG] = ACTIONS(435),
    [anon_sym_BANGmp_BANG] = ACTIONS(435),
    [anon_sym_BANGmf_BANG] = ACTIONS(435),
    [anon_sym_BANGf_BANG] = ACTIONS(435),
    [anon_sym_BANGff_BANG] = ACTIONS(435),
    [anon_sym_BANGfff_BANG] = ACTIONS(435),
    [anon_sym_BANGffff_BANG] = ACTIONS(435),
    [anon_sym_BANGsfz_BANG] = ACTIONS(435),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(435),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(435),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(435),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(435),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(435),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(435),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(435),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(435),
    [anon_sym_BANGsegno_BANG] = ACTIONS(435),
    [anon_sym_BANGcoda_BANG] = ACTIONS(435),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(435),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(435),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(435),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(435),
    [anon_sym_BANGfine_BANG] = ACTIONS(435),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(435),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(435),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(435),
    [sym_parts_line] = ACTIONS(435),
    [sym_instruction] = ACTIONS(435),
    [sym_key] = ACTIONS(435),
    [sym_macros] = ACTIONS(435),
    [sym_meter] = ACTIONS(435),
    [sym_notes] = ACTIONS(435),
    [anon_sym_X_COLON] = ACTIONS(435),
    [sym_remark] = ACTIONS(435),
    [sym_rhythm_line] = ACTIONS(435),
    [anon_sym_s_COLON] = ACTIONS(435),
    [sym_tempo] = ACTIONS(435),
    [sym_tune_title] = ACTIONS(435),
    [sym_unit_note_length] = ACTIONS(435),
    [anon_sym_U_COLON] = ACTIONS(435),
    [sym_voice] = ACTIONS(435),
    [anon_sym_w_COLON] = ACTIONS(435),
    [sym_words_postbody] = ACTIONS(435),
  },
  [62] = {
    [ts_builtin_sym_end] = ACTIONS(439),
    [sym__NL] = ACTIONS(441),
    [sym_COMMENT] = ACTIONS(441),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(439),
    [aux_sym__music_content_token1] = ACTIONS(441),
    [sym_slur_open] = ACTIONS(441),
    [sym_slur_close] = ACTIONS(439),
    [anon_sym_LBRACK] = ACTIONS(441),
    [sym_alteration] = ACTIONS(439),
    [sym_note_letter] = ACTIONS(439),
    [sym_rest] = ACTIONS(439),
    [anon_sym_Z] = ACTIONS(439),
    [anon_sym_X] = ACTIONS(441),
    [aux_sym_grace_note_token1] = ACTIONS(439),
    [aux_sym_chord_symbol_token1] = ACTIONS(441),
    [sym_annotation] = ACTIONS(439),
    [sym_tuplet_marker] = ACTIONS(439),
    [sym_decoration_shorthand] = ACTIONS(441),
    [sym_bar_line] = ACTIONS(441),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(439),
    [sym_thin_double_bar_line] = ACTIONS(439),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(439),
    [sym_start_of_repeated_section] = ACTIONS(439),
    [sym_end_of_repeated_section] = ACTIONS(439),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(439),
    [anon_sym_BANGtrill_BANG] = ACTIONS(439),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(439),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(439),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(439),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(439),
    [anon_sym_BANGmordent_BANG] = ACTIONS(439),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(439),
    [anon_sym_BANGroll_BANG] = ACTIONS(439),
    [anon_sym_BANGturn_BANG] = ACTIONS(439),
    [anon_sym_BANGturnx_BANG] = ACTIONS(439),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(439),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(439),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(439),
    [anon_sym_BANG_GT_BANG] = ACTIONS(439),
    [anon_sym_BANGaccent_BANG] = ACTIONS(439),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(439),
    [anon_sym_BANGfermata_BANG] = ACTIONS(439),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(439),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(439),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(439),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(439),
    [anon_sym_BANGplus_BANG] = ACTIONS(439),
    [anon_sym_BANGsnap_BANG] = ACTIONS(439),
    [anon_sym_BANGslide_BANG] = ACTIONS(439),
    [anon_sym_BANGwedge_BANG] = ACTIONS(439),
    [anon_sym_BANGupbow_BANG] = ACTIONS(439),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(439),
    [anon_sym_BANGopen_BANG] = ACTIONS(439),
    [anon_sym_BANGthumb_BANG] = ACTIONS(439),
    [anon_sym_BANGbreath_BANG] = ACTIONS(439),
    [anon_sym_BANGpppp_BANG] = ACTIONS(439),
    [anon_sym_BANGppp_BANG] = ACTIONS(439),
    [anon_sym_BANGpp_BANG] = ACTIONS(439),
    [anon_sym_BANGp_BANG] = ACTIONS(439),
    [anon_sym_BANGmp_BANG] = ACTIONS(439),
    [anon_sym_BANGmf_BANG] = ACTIONS(439),
    [anon_sym_BANGf_BANG] = ACTIONS(439),
    [anon_sym_BANGff_BANG] = ACTIONS(439),
    [anon_sym_BANGfff_BANG] = ACTIONS(439),
    [anon_sym_BANGffff_BANG] = ACTIONS(439),
    [anon_sym_BANGsfz_BANG] = ACTIONS(439),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(439),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(439),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(439),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(439),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(439),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(439),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(439),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(439),
    [anon_sym_BANGsegno_BANG] = ACTIONS(439),
    [anon_sym_BANGcoda_BANG] = ACTIONS(439),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(439),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(439),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(439),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(439),
    [anon_sym_BANGfine_BANG] = ACTIONS(439),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(439),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(439),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(439),
    [sym_parts_line] = ACTIONS(439),
    [sym_instruction] = ACTIONS(439),
    [sym_key] = ACTIONS(439),
    [sym_macros] = ACTIONS(439),
    [sym_meter] = ACTIONS(439),
    [sym_notes] = ACTIONS(439),
    [anon_sym_X_COLON] = ACTIONS(439),
    [sym_remark] = ACTIONS(439),
    [sym_rhythm_line] = ACTIONS(439),
    [anon_sym_s_COLON] = ACTIONS(439),
    [sym_tempo] = ACTIONS(439),
    [sym_tune_title] = ACTIONS(439),
    [sym_unit_note_length] = ACTIONS(439),
    [anon_sym_U_COLON] = ACTIONS(439),
    [sym_voice] = ACTIONS(439),
    [anon_sym_w_COLON] = ACTIONS(439),
    [sym_words_postbody] = ACTIONS(439),
  },
  [63] = {
    [sym_chord_symbol] = STATE(63),
    [sym_nth_ending_barline] = STATE(78),
    [sym_generic_bar_line] = STATE(63),
    [sym_first_repeat_bar] = STATE(78),
    [sym_second_repeat_bar] = STATE(78),
    [sym_symbol] = STATE(63),
    [aux_sym_symbol_line_repeat1] = STATE(63),
    [sym_noCommentText] = ACTIONS(443),
    [sym_note_skip] = ACTIONS(445),
    [aux_sym_chord_symbol_token1] = ACTIONS(448),
    [sym_annotation] = ACTIONS(445),
    [sym_bar_line] = ACTIONS(451),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(454),
    [sym_thin_double_bar_line] = ACTIONS(454),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(454),
    [sym_start_of_repeated_section] = ACTIONS(457),
    [sym_end_of_repeated_section] = ACTIONS(460),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(457),
    [anon_sym_BANGtrill_BANG] = ACTIONS(463),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(463),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(463),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(463),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(463),
    [anon_sym_BANGmordent_BANG] = ACTIONS(463),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(463),
    [anon_sym_BANGroll_BANG] = ACTIONS(463),
    [anon_sym_BANGturn_BANG] = ACTIONS(463),
    [anon_sym_BANGturnx_BANG] = ACTIONS(463),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(463),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(463),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(463),
    [anon_sym_BANG_GT_BANG] = ACTIONS(463),
    [anon_sym_BANGaccent_BANG] = ACTIONS(463),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(463),
    [anon_sym_BANGfermata_BANG] = ACTIONS(463),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(463),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(463),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(463),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(463),
    [anon_sym_BANGplus_BANG] = ACTIONS(463),
    [anon_sym_BANGsnap_BANG] = ACTIONS(463),
    [anon_sym_BANGslide_BANG] = ACTIONS(463),
    [anon_sym_BANGwedge_BANG] = ACTIONS(463),
    [anon_sym_BANGupbow_BANG] = ACTIONS(463),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(463),
    [anon_sym_BANGopen_BANG] = ACTIONS(463),
    [anon_sym_BANGthumb_BANG] = ACTIONS(463),
    [anon_sym_BANGbreath_BANG] = ACTIONS(463),
    [anon_sym_BANGpppp_BANG] = ACTIONS(463),
    [anon_sym_BANGppp_BANG] = ACTIONS(463),
    [anon_sym_BANGpp_BANG] = ACTIONS(463),
    [anon_sym_BANGp_BANG] = ACTIONS(463),
    [anon_sym_BANGmp_BANG] = ACTIONS(463),
    [anon_sym_BANGmf_BANG] = ACTIONS(463),
    [anon_sym_BANGf_BANG] = ACTIONS(463),
    [anon_sym_BANGff_BANG] = ACTIONS(463),
    [anon_sym_BANGfff_BANG] = ACTIONS(463),
    [anon_sym_BANGffff_BANG] = ACTIONS(463),
    [anon_sym_BANGsfz_BANG] = ACTIONS(463),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(463),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(463),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(463),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(463),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(463),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(463),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(463),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(463),
    [anon_sym_BANGsegno_BANG] = ACTIONS(463),
    [anon_sym_BANGcoda_BANG] = ACTIONS(463),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(463),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(463),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(463),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(463),
    [anon_sym_BANGfine_BANG] = ACTIONS(463),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(463),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(463),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(463),
  },
  [64] = {
    [sym_chord_symbol] = STATE(63),
    [sym_nth_ending_barline] = STATE(78),
    [sym_generic_bar_line] = STATE(63),
    [sym_first_repeat_bar] = STATE(78),
    [sym_second_repeat_bar] = STATE(78),
    [sym_symbol] = STATE(63),
    [aux_sym_symbol_line_repeat1] = STATE(63),
    [sym_noCommentText] = ACTIONS(466),
    [sym_note_skip] = ACTIONS(468),
    [aux_sym_chord_symbol_token1] = ACTIONS(470),
    [sym_annotation] = ACTIONS(468),
    [sym_bar_line] = ACTIONS(472),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(474),
    [sym_thin_double_bar_line] = ACTIONS(474),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(474),
    [sym_start_of_repeated_section] = ACTIONS(476),
    [sym_end_of_repeated_section] = ACTIONS(478),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(476),
    [anon_sym_BANGtrill_BANG] = ACTIONS(480),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(480),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(480),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(480),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(480),
    [anon_sym_BANGmordent_BANG] = ACTIONS(480),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(480),
    [anon_sym_BANGroll_BANG] = ACTIONS(480),
    [anon_sym_BANGturn_BANG] = ACTIONS(480),
    [anon_sym_BANGturnx_BANG] = ACTIONS(480),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(480),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(480),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(480),
    [anon_sym_BANG_GT_BANG] = ACTIONS(480),
    [anon_sym_BANGaccent_BANG] = ACTIONS(480),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(480),
    [anon_sym_BANGfermata_BANG] = ACTIONS(480),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(480),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(480),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(480),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(480),
    [anon_sym_BANGplus_BANG] = ACTIONS(480),
    [anon_sym_BANGsnap_BANG] = ACTIONS(480),
    [anon_sym_BANGslide_BANG] = ACTIONS(480),
    [anon_sym_BANGwedge_BANG] = ACTIONS(480),
    [anon_sym_BANGupbow_BANG] = ACTIONS(480),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(480),
    [anon_sym_BANGopen_BANG] = ACTIONS(480),
    [anon_sym_BANGthumb_BANG] = ACTIONS(480),
    [anon_sym_BANGbreath_BANG] = ACTIONS(480),
    [anon_sym_BANGpppp_BANG] = ACTIONS(480),
    [anon_sym_BANGppp_BANG] = ACTIONS(480),
    [anon_sym_BANGpp_BANG] = ACTIONS(480),
    [anon_sym_BANGp_BANG] = ACTIONS(480),
    [anon_sym_BANGmp_BANG] = ACTIONS(480),
    [anon_sym_BANGmf_BANG] = ACTIONS(480),
    [anon_sym_BANGf_BANG] = ACTIONS(480),
    [anon_sym_BANGff_BANG] = ACTIONS(480),
    [anon_sym_BANGfff_BANG] = ACTIONS(480),
    [anon_sym_BANGffff_BANG] = ACTIONS(480),
    [anon_sym_BANGsfz_BANG] = ACTIONS(480),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(480),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(480),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(480),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(480),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(480),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(480),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(480),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(480),
    [anon_sym_BANGsegno_BANG] = ACTIONS(480),
    [anon_sym_BANGcoda_BANG] = ACTIONS(480),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(480),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(480),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(480),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(480),
    [anon_sym_BANGfine_BANG] = ACTIONS(480),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(480),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(480),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(480),
  },
  [65] = {
    [sym_chord_symbol] = STATE(64),
    [sym_nth_ending_barline] = STATE(78),
    [sym_generic_bar_line] = STATE(64),
    [sym_first_repeat_bar] = STATE(78),
    [sym_second_repeat_bar] = STATE(78),
    [sym_symbol] = STATE(64),
    [aux_sym_symbol_line_repeat1] = STATE(64),
    [sym_note_skip] = ACTIONS(482),
    [aux_sym_chord_symbol_token1] = ACTIONS(470),
    [sym_annotation] = ACTIONS(482),
    [sym_bar_line] = ACTIONS(472),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(484),
    [sym_thin_double_bar_line] = ACTIONS(484),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(484),
    [sym_start_of_repeated_section] = ACTIONS(486),
    [sym_end_of_repeated_section] = ACTIONS(488),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(486),
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
  [66] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(67),
    [sym_noCommentText] = ACTIONS(282),
    [sym_note_skip] = ACTIONS(282),
    [anon_sym_DASH] = ACTIONS(492),
    [aux_sym_chord_symbol_token1] = ACTIONS(282),
    [sym_annotation] = ACTIONS(282),
    [anon_sym_COMMA] = ACTIONS(492),
    [sym_bar_line] = ACTIONS(282),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(282),
    [sym_thin_double_bar_line] = ACTIONS(282),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(282),
    [sym_start_of_repeated_section] = ACTIONS(282),
    [sym_end_of_repeated_section] = ACTIONS(282),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(282),
    [anon_sym_BANGtrill_BANG] = ACTIONS(282),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(282),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(282),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(282),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(282),
    [anon_sym_BANGmordent_BANG] = ACTIONS(282),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(282),
    [anon_sym_BANGroll_BANG] = ACTIONS(282),
    [anon_sym_BANGturn_BANG] = ACTIONS(282),
    [anon_sym_BANGturnx_BANG] = ACTIONS(282),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(282),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(282),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(282),
    [anon_sym_BANG_GT_BANG] = ACTIONS(282),
    [anon_sym_BANGaccent_BANG] = ACTIONS(282),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(282),
    [anon_sym_BANGfermata_BANG] = ACTIONS(282),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(282),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(282),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(282),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(282),
    [anon_sym_BANGplus_BANG] = ACTIONS(282),
    [anon_sym_BANGsnap_BANG] = ACTIONS(282),
    [anon_sym_BANGslide_BANG] = ACTIONS(282),
    [anon_sym_BANGwedge_BANG] = ACTIONS(282),
    [anon_sym_BANGupbow_BANG] = ACTIONS(282),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(282),
    [anon_sym_BANGopen_BANG] = ACTIONS(282),
    [anon_sym_BANGthumb_BANG] = ACTIONS(282),
    [anon_sym_BANGbreath_BANG] = ACTIONS(282),
    [anon_sym_BANGpppp_BANG] = ACTIONS(282),
    [anon_sym_BANGppp_BANG] = ACTIONS(282),
    [anon_sym_BANGpp_BANG] = ACTIONS(282),
    [anon_sym_BANGp_BANG] = ACTIONS(282),
    [anon_sym_BANGmp_BANG] = ACTIONS(282),
    [anon_sym_BANGmf_BANG] = ACTIONS(282),
    [anon_sym_BANGf_BANG] = ACTIONS(282),
    [anon_sym_BANGff_BANG] = ACTIONS(282),
    [anon_sym_BANGfff_BANG] = ACTIONS(282),
    [anon_sym_BANGffff_BANG] = ACTIONS(282),
    [anon_sym_BANGsfz_BANG] = ACTIONS(282),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(282),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(282),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(282),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(282),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(282),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(282),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(282),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(282),
    [anon_sym_BANGsegno_BANG] = ACTIONS(282),
    [anon_sym_BANGcoda_BANG] = ACTIONS(282),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(282),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(282),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(282),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(282),
    [anon_sym_BANGfine_BANG] = ACTIONS(282),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(282),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(282),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(282),
  },
  [67] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(67),
    [sym_noCommentText] = ACTIONS(288),
    [sym_note_skip] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(494),
    [aux_sym_chord_symbol_token1] = ACTIONS(288),
    [sym_annotation] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(494),
    [sym_bar_line] = ACTIONS(288),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(288),
    [sym_thin_double_bar_line] = ACTIONS(288),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(288),
    [sym_start_of_repeated_section] = ACTIONS(288),
    [sym_end_of_repeated_section] = ACTIONS(288),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(288),
    [anon_sym_BANGtrill_BANG] = ACTIONS(288),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(288),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(288),
    [anon_sym_BANGmordent_BANG] = ACTIONS(288),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(288),
    [anon_sym_BANGroll_BANG] = ACTIONS(288),
    [anon_sym_BANGturn_BANG] = ACTIONS(288),
    [anon_sym_BANGturnx_BANG] = ACTIONS(288),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(288),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(288),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(288),
    [anon_sym_BANG_GT_BANG] = ACTIONS(288),
    [anon_sym_BANGaccent_BANG] = ACTIONS(288),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(288),
    [anon_sym_BANGfermata_BANG] = ACTIONS(288),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(288),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(288),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(288),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(288),
    [anon_sym_BANGplus_BANG] = ACTIONS(288),
    [anon_sym_BANGsnap_BANG] = ACTIONS(288),
    [anon_sym_BANGslide_BANG] = ACTIONS(288),
    [anon_sym_BANGwedge_BANG] = ACTIONS(288),
    [anon_sym_BANGupbow_BANG] = ACTIONS(288),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(288),
    [anon_sym_BANGopen_BANG] = ACTIONS(288),
    [anon_sym_BANGthumb_BANG] = ACTIONS(288),
    [anon_sym_BANGbreath_BANG] = ACTIONS(288),
    [anon_sym_BANGpppp_BANG] = ACTIONS(288),
    [anon_sym_BANGppp_BANG] = ACTIONS(288),
    [anon_sym_BANGpp_BANG] = ACTIONS(288),
    [anon_sym_BANGp_BANG] = ACTIONS(288),
    [anon_sym_BANGmp_BANG] = ACTIONS(288),
    [anon_sym_BANGmf_BANG] = ACTIONS(288),
    [anon_sym_BANGf_BANG] = ACTIONS(288),
    [anon_sym_BANGff_BANG] = ACTIONS(288),
    [anon_sym_BANGfff_BANG] = ACTIONS(288),
    [anon_sym_BANGffff_BANG] = ACTIONS(288),
    [anon_sym_BANGsfz_BANG] = ACTIONS(288),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGsegno_BANG] = ACTIONS(288),
    [anon_sym_BANGcoda_BANG] = ACTIONS(288),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(288),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(288),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(288),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(288),
    [anon_sym_BANGfine_BANG] = ACTIONS(288),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(288),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(288),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(288),
  },
  [68] = {
    [sym_noCommentText] = ACTIONS(295),
    [sym_note_skip] = ACTIONS(295),
    [aux_sym_chord_symbol_token1] = ACTIONS(295),
    [sym_annotation] = ACTIONS(295),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(497),
    [sym_bar_line] = ACTIONS(295),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(295),
    [sym_thin_double_bar_line] = ACTIONS(295),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(295),
    [sym_start_of_repeated_section] = ACTIONS(295),
    [sym_end_of_repeated_section] = ACTIONS(295),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(295),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(499),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(501),
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
  },
  [69] = {
    [aux_sym_nth_ending_number_repeat1] = STATE(66),
    [sym_noCommentText] = ACTIONS(305),
    [sym_note_skip] = ACTIONS(305),
    [anon_sym_DASH] = ACTIONS(492),
    [aux_sym_chord_symbol_token1] = ACTIONS(305),
    [sym_annotation] = ACTIONS(305),
    [anon_sym_COMMA] = ACTIONS(492),
    [sym_bar_line] = ACTIONS(305),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(305),
    [sym_thin_double_bar_line] = ACTIONS(305),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(305),
    [sym_start_of_repeated_section] = ACTIONS(305),
    [sym_end_of_repeated_section] = ACTIONS(305),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(305),
    [anon_sym_BANGtrill_BANG] = ACTIONS(305),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(305),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(305),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(305),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(305),
    [anon_sym_BANGmordent_BANG] = ACTIONS(305),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(305),
    [anon_sym_BANGroll_BANG] = ACTIONS(305),
    [anon_sym_BANGturn_BANG] = ACTIONS(305),
    [anon_sym_BANGturnx_BANG] = ACTIONS(305),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(305),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(305),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(305),
    [anon_sym_BANG_GT_BANG] = ACTIONS(305),
    [anon_sym_BANGaccent_BANG] = ACTIONS(305),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(305),
    [anon_sym_BANGfermata_BANG] = ACTIONS(305),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(305),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(305),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(305),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(305),
    [anon_sym_BANGplus_BANG] = ACTIONS(305),
    [anon_sym_BANGsnap_BANG] = ACTIONS(305),
    [anon_sym_BANGslide_BANG] = ACTIONS(305),
    [anon_sym_BANGwedge_BANG] = ACTIONS(305),
    [anon_sym_BANGupbow_BANG] = ACTIONS(305),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(305),
    [anon_sym_BANGopen_BANG] = ACTIONS(305),
    [anon_sym_BANGthumb_BANG] = ACTIONS(305),
    [anon_sym_BANGbreath_BANG] = ACTIONS(305),
    [anon_sym_BANGpppp_BANG] = ACTIONS(305),
    [anon_sym_BANGppp_BANG] = ACTIONS(305),
    [anon_sym_BANGpp_BANG] = ACTIONS(305),
    [anon_sym_BANGp_BANG] = ACTIONS(305),
    [anon_sym_BANGmp_BANG] = ACTIONS(305),
    [anon_sym_BANGmf_BANG] = ACTIONS(305),
    [anon_sym_BANGf_BANG] = ACTIONS(305),
    [anon_sym_BANGff_BANG] = ACTIONS(305),
    [anon_sym_BANGfff_BANG] = ACTIONS(305),
    [anon_sym_BANGffff_BANG] = ACTIONS(305),
    [anon_sym_BANGsfz_BANG] = ACTIONS(305),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(305),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(305),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(305),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(305),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(305),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(305),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(305),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(305),
    [anon_sym_BANGsegno_BANG] = ACTIONS(305),
    [anon_sym_BANGcoda_BANG] = ACTIONS(305),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(305),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(305),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(305),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(305),
    [anon_sym_BANGfine_BANG] = ACTIONS(305),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(305),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(305),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(305),
  },
  [70] = {
    [sym_noCommentText] = ACTIONS(295),
    [sym_note_skip] = ACTIONS(295),
    [aux_sym_chord_symbol_token1] = ACTIONS(295),
    [sym_annotation] = ACTIONS(295),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(497),
    [sym_bar_line] = ACTIONS(295),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(295),
    [sym_thin_double_bar_line] = ACTIONS(295),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(295),
    [sym_start_of_repeated_section] = ACTIONS(295),
    [sym_end_of_repeated_section] = ACTIONS(295),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(295),
    [aux_sym_first_repeat_bar_token1] = ACTIONS(503),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(505),
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
  },
  [71] = {
    [sym_noCommentText] = ACTIONS(288),
    [sym_note_skip] = ACTIONS(288),
    [anon_sym_DASH] = ACTIONS(288),
    [aux_sym_chord_symbol_token1] = ACTIONS(288),
    [sym_annotation] = ACTIONS(288),
    [anon_sym_COMMA] = ACTIONS(288),
    [sym_bar_line] = ACTIONS(288),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(288),
    [sym_thin_double_bar_line] = ACTIONS(288),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(288),
    [sym_start_of_repeated_section] = ACTIONS(288),
    [sym_end_of_repeated_section] = ACTIONS(288),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(288),
    [anon_sym_BANGtrill_BANG] = ACTIONS(288),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(288),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(288),
    [anon_sym_BANGmordent_BANG] = ACTIONS(288),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(288),
    [anon_sym_BANGroll_BANG] = ACTIONS(288),
    [anon_sym_BANGturn_BANG] = ACTIONS(288),
    [anon_sym_BANGturnx_BANG] = ACTIONS(288),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(288),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(288),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(288),
    [anon_sym_BANG_GT_BANG] = ACTIONS(288),
    [anon_sym_BANGaccent_BANG] = ACTIONS(288),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(288),
    [anon_sym_BANGfermata_BANG] = ACTIONS(288),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(288),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(288),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(288),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(288),
    [anon_sym_BANGplus_BANG] = ACTIONS(288),
    [anon_sym_BANGsnap_BANG] = ACTIONS(288),
    [anon_sym_BANGslide_BANG] = ACTIONS(288),
    [anon_sym_BANGwedge_BANG] = ACTIONS(288),
    [anon_sym_BANGupbow_BANG] = ACTIONS(288),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(288),
    [anon_sym_BANGopen_BANG] = ACTIONS(288),
    [anon_sym_BANGthumb_BANG] = ACTIONS(288),
    [anon_sym_BANGbreath_BANG] = ACTIONS(288),
    [anon_sym_BANGpppp_BANG] = ACTIONS(288),
    [anon_sym_BANGppp_BANG] = ACTIONS(288),
    [anon_sym_BANGpp_BANG] = ACTIONS(288),
    [anon_sym_BANGp_BANG] = ACTIONS(288),
    [anon_sym_BANGmp_BANG] = ACTIONS(288),
    [anon_sym_BANGmf_BANG] = ACTIONS(288),
    [anon_sym_BANGf_BANG] = ACTIONS(288),
    [anon_sym_BANGff_BANG] = ACTIONS(288),
    [anon_sym_BANGfff_BANG] = ACTIONS(288),
    [anon_sym_BANGffff_BANG] = ACTIONS(288),
    [anon_sym_BANGsfz_BANG] = ACTIONS(288),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(288),
    [anon_sym_BANGsegno_BANG] = ACTIONS(288),
    [anon_sym_BANGcoda_BANG] = ACTIONS(288),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(288),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(288),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(288),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(288),
    [anon_sym_BANGfine_BANG] = ACTIONS(288),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(288),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(288),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(288),
  },
  [72] = {
    [sym_noCommentText] = ACTIONS(295),
    [sym_note_skip] = ACTIONS(295),
    [aux_sym_chord_symbol_token1] = ACTIONS(295),
    [sym_annotation] = ACTIONS(295),
    [aux_sym_nth_ending_barline_token1] = ACTIONS(497),
    [sym_bar_line] = ACTIONS(295),
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
  },
  [73] = {
    [sym_noCommentText] = ACTIONS(429),
    [sym_note_skip] = ACTIONS(429),
    [aux_sym_chord_symbol_token1] = ACTIONS(429),
    [sym_annotation] = ACTIONS(429),
    [sym_bar_line] = ACTIONS(429),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(429),
    [sym_thin_double_bar_line] = ACTIONS(429),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(429),
    [sym_start_of_repeated_section] = ACTIONS(429),
    [sym_end_of_repeated_section] = ACTIONS(429),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(429),
    [anon_sym_BANGtrill_BANG] = ACTIONS(429),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(429),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(429),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(429),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(429),
    [anon_sym_BANGmordent_BANG] = ACTIONS(429),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(429),
    [anon_sym_BANGroll_BANG] = ACTIONS(429),
    [anon_sym_BANGturn_BANG] = ACTIONS(429),
    [anon_sym_BANGturnx_BANG] = ACTIONS(429),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(429),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(429),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(429),
    [anon_sym_BANG_GT_BANG] = ACTIONS(429),
    [anon_sym_BANGaccent_BANG] = ACTIONS(429),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(429),
    [anon_sym_BANGfermata_BANG] = ACTIONS(429),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(429),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(429),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(429),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(429),
    [anon_sym_BANGplus_BANG] = ACTIONS(429),
    [anon_sym_BANGsnap_BANG] = ACTIONS(429),
    [anon_sym_BANGslide_BANG] = ACTIONS(429),
    [anon_sym_BANGwedge_BANG] = ACTIONS(429),
    [anon_sym_BANGupbow_BANG] = ACTIONS(429),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(429),
    [anon_sym_BANGopen_BANG] = ACTIONS(429),
    [anon_sym_BANGthumb_BANG] = ACTIONS(429),
    [anon_sym_BANGbreath_BANG] = ACTIONS(429),
    [anon_sym_BANGpppp_BANG] = ACTIONS(429),
    [anon_sym_BANGppp_BANG] = ACTIONS(429),
    [anon_sym_BANGpp_BANG] = ACTIONS(429),
    [anon_sym_BANGp_BANG] = ACTIONS(429),
    [anon_sym_BANGmp_BANG] = ACTIONS(429),
    [anon_sym_BANGmf_BANG] = ACTIONS(429),
    [anon_sym_BANGf_BANG] = ACTIONS(429),
    [anon_sym_BANGff_BANG] = ACTIONS(429),
    [anon_sym_BANGfff_BANG] = ACTIONS(429),
    [anon_sym_BANGffff_BANG] = ACTIONS(429),
    [anon_sym_BANGsfz_BANG] = ACTIONS(429),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(429),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(429),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(429),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(429),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(429),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(429),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(429),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(429),
    [anon_sym_BANGsegno_BANG] = ACTIONS(429),
    [anon_sym_BANGcoda_BANG] = ACTIONS(429),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(429),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(429),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(429),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(429),
    [anon_sym_BANGfine_BANG] = ACTIONS(429),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(429),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(429),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(429),
  },
  [74] = {
    [sym_noCommentText] = ACTIONS(421),
    [sym_note_skip] = ACTIONS(421),
    [aux_sym_chord_symbol_token1] = ACTIONS(421),
    [sym_annotation] = ACTIONS(421),
    [sym_bar_line] = ACTIONS(421),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(421),
    [sym_thin_double_bar_line] = ACTIONS(421),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(421),
    [sym_start_of_repeated_section] = ACTIONS(421),
    [sym_end_of_repeated_section] = ACTIONS(421),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(421),
    [anon_sym_BANGtrill_BANG] = ACTIONS(421),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(421),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(421),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(421),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(421),
    [anon_sym_BANGmordent_BANG] = ACTIONS(421),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(421),
    [anon_sym_BANGroll_BANG] = ACTIONS(421),
    [anon_sym_BANGturn_BANG] = ACTIONS(421),
    [anon_sym_BANGturnx_BANG] = ACTIONS(421),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(421),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(421),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(421),
    [anon_sym_BANG_GT_BANG] = ACTIONS(421),
    [anon_sym_BANGaccent_BANG] = ACTIONS(421),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(421),
    [anon_sym_BANGfermata_BANG] = ACTIONS(421),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(421),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(421),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(421),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(421),
    [anon_sym_BANGplus_BANG] = ACTIONS(421),
    [anon_sym_BANGsnap_BANG] = ACTIONS(421),
    [anon_sym_BANGslide_BANG] = ACTIONS(421),
    [anon_sym_BANGwedge_BANG] = ACTIONS(421),
    [anon_sym_BANGupbow_BANG] = ACTIONS(421),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(421),
    [anon_sym_BANGopen_BANG] = ACTIONS(421),
    [anon_sym_BANGthumb_BANG] = ACTIONS(421),
    [anon_sym_BANGbreath_BANG] = ACTIONS(421),
    [anon_sym_BANGpppp_BANG] = ACTIONS(421),
    [anon_sym_BANGppp_BANG] = ACTIONS(421),
    [anon_sym_BANGpp_BANG] = ACTIONS(421),
    [anon_sym_BANGp_BANG] = ACTIONS(421),
    [anon_sym_BANGmp_BANG] = ACTIONS(421),
    [anon_sym_BANGmf_BANG] = ACTIONS(421),
    [anon_sym_BANGf_BANG] = ACTIONS(421),
    [anon_sym_BANGff_BANG] = ACTIONS(421),
    [anon_sym_BANGfff_BANG] = ACTIONS(421),
    [anon_sym_BANGffff_BANG] = ACTIONS(421),
    [anon_sym_BANGsfz_BANG] = ACTIONS(421),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(421),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(421),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(421),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(421),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(421),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(421),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(421),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(421),
    [anon_sym_BANGsegno_BANG] = ACTIONS(421),
    [anon_sym_BANGcoda_BANG] = ACTIONS(421),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(421),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(421),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(421),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(421),
    [anon_sym_BANGfine_BANG] = ACTIONS(421),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(421),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(421),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(421),
  },
  [75] = {
    [sym_noCommentText] = ACTIONS(425),
    [sym_note_skip] = ACTIONS(425),
    [aux_sym_chord_symbol_token1] = ACTIONS(425),
    [sym_annotation] = ACTIONS(425),
    [sym_bar_line] = ACTIONS(425),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(425),
    [sym_thin_double_bar_line] = ACTIONS(425),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(425),
    [sym_start_of_repeated_section] = ACTIONS(425),
    [sym_end_of_repeated_section] = ACTIONS(425),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(425),
    [anon_sym_BANGtrill_BANG] = ACTIONS(425),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(425),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(425),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(425),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(425),
    [anon_sym_BANGmordent_BANG] = ACTIONS(425),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(425),
    [anon_sym_BANGroll_BANG] = ACTIONS(425),
    [anon_sym_BANGturn_BANG] = ACTIONS(425),
    [anon_sym_BANGturnx_BANG] = ACTIONS(425),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(425),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(425),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(425),
    [anon_sym_BANG_GT_BANG] = ACTIONS(425),
    [anon_sym_BANGaccent_BANG] = ACTIONS(425),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(425),
    [anon_sym_BANGfermata_BANG] = ACTIONS(425),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(425),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(425),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(425),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(425),
    [anon_sym_BANGplus_BANG] = ACTIONS(425),
    [anon_sym_BANGsnap_BANG] = ACTIONS(425),
    [anon_sym_BANGslide_BANG] = ACTIONS(425),
    [anon_sym_BANGwedge_BANG] = ACTIONS(425),
    [anon_sym_BANGupbow_BANG] = ACTIONS(425),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(425),
    [anon_sym_BANGopen_BANG] = ACTIONS(425),
    [anon_sym_BANGthumb_BANG] = ACTIONS(425),
    [anon_sym_BANGbreath_BANG] = ACTIONS(425),
    [anon_sym_BANGpppp_BANG] = ACTIONS(425),
    [anon_sym_BANGppp_BANG] = ACTIONS(425),
    [anon_sym_BANGpp_BANG] = ACTIONS(425),
    [anon_sym_BANGp_BANG] = ACTIONS(425),
    [anon_sym_BANGmp_BANG] = ACTIONS(425),
    [anon_sym_BANGmf_BANG] = ACTIONS(425),
    [anon_sym_BANGf_BANG] = ACTIONS(425),
    [anon_sym_BANGff_BANG] = ACTIONS(425),
    [anon_sym_BANGfff_BANG] = ACTIONS(425),
    [anon_sym_BANGffff_BANG] = ACTIONS(425),
    [anon_sym_BANGsfz_BANG] = ACTIONS(425),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(425),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(425),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(425),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(425),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(425),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(425),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(425),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(425),
    [anon_sym_BANGsegno_BANG] = ACTIONS(425),
    [anon_sym_BANGcoda_BANG] = ACTIONS(425),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(425),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(425),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(425),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(425),
    [anon_sym_BANGfine_BANG] = ACTIONS(425),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(425),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(425),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(425),
  },
  [76] = {
    [sym_noCommentText] = ACTIONS(507),
    [sym_note_skip] = ACTIONS(507),
    [aux_sym_chord_symbol_token1] = ACTIONS(507),
    [sym_annotation] = ACTIONS(507),
    [sym_bar_line] = ACTIONS(507),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(507),
    [sym_thin_double_bar_line] = ACTIONS(507),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(507),
    [sym_start_of_repeated_section] = ACTIONS(507),
    [sym_end_of_repeated_section] = ACTIONS(507),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(507),
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
  },
  [77] = {
    [sym_noCommentText] = ACTIONS(509),
    [sym_note_skip] = ACTIONS(509),
    [aux_sym_chord_symbol_token1] = ACTIONS(509),
    [sym_annotation] = ACTIONS(509),
    [sym_bar_line] = ACTIONS(509),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(509),
    [sym_thin_double_bar_line] = ACTIONS(509),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(509),
    [sym_start_of_repeated_section] = ACTIONS(509),
    [sym_end_of_repeated_section] = ACTIONS(509),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(509),
    [anon_sym_BANGtrill_BANG] = ACTIONS(509),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(509),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(509),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(509),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(509),
    [anon_sym_BANGmordent_BANG] = ACTIONS(509),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(509),
    [anon_sym_BANGroll_BANG] = ACTIONS(509),
    [anon_sym_BANGturn_BANG] = ACTIONS(509),
    [anon_sym_BANGturnx_BANG] = ACTIONS(509),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(509),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(509),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(509),
    [anon_sym_BANG_GT_BANG] = ACTIONS(509),
    [anon_sym_BANGaccent_BANG] = ACTIONS(509),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(509),
    [anon_sym_BANGfermata_BANG] = ACTIONS(509),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(509),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(509),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(509),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(509),
    [anon_sym_BANGplus_BANG] = ACTIONS(509),
    [anon_sym_BANGsnap_BANG] = ACTIONS(509),
    [anon_sym_BANGslide_BANG] = ACTIONS(509),
    [anon_sym_BANGwedge_BANG] = ACTIONS(509),
    [anon_sym_BANGupbow_BANG] = ACTIONS(509),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(509),
    [anon_sym_BANGopen_BANG] = ACTIONS(509),
    [anon_sym_BANGthumb_BANG] = ACTIONS(509),
    [anon_sym_BANGbreath_BANG] = ACTIONS(509),
    [anon_sym_BANGpppp_BANG] = ACTIONS(509),
    [anon_sym_BANGppp_BANG] = ACTIONS(509),
    [anon_sym_BANGpp_BANG] = ACTIONS(509),
    [anon_sym_BANGp_BANG] = ACTIONS(509),
    [anon_sym_BANGmp_BANG] = ACTIONS(509),
    [anon_sym_BANGmf_BANG] = ACTIONS(509),
    [anon_sym_BANGf_BANG] = ACTIONS(509),
    [anon_sym_BANGff_BANG] = ACTIONS(509),
    [anon_sym_BANGfff_BANG] = ACTIONS(509),
    [anon_sym_BANGffff_BANG] = ACTIONS(509),
    [anon_sym_BANGsfz_BANG] = ACTIONS(509),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(509),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(509),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(509),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(509),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(509),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(509),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(509),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(509),
    [anon_sym_BANGsegno_BANG] = ACTIONS(509),
    [anon_sym_BANGcoda_BANG] = ACTIONS(509),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(509),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(509),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(509),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(509),
    [anon_sym_BANGfine_BANG] = ACTIONS(509),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(509),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(509),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(509),
  },
  [78] = {
    [sym_noCommentText] = ACTIONS(295),
    [sym_note_skip] = ACTIONS(295),
    [aux_sym_chord_symbol_token1] = ACTIONS(295),
    [sym_annotation] = ACTIONS(295),
    [sym_bar_line] = ACTIONS(295),
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
  },
  [79] = {
    [sym_noCommentText] = ACTIONS(511),
    [sym_note_skip] = ACTIONS(511),
    [aux_sym_chord_symbol_token1] = ACTIONS(511),
    [sym_annotation] = ACTIONS(511),
    [sym_bar_line] = ACTIONS(511),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(511),
    [sym_thin_double_bar_line] = ACTIONS(511),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(511),
    [sym_start_of_repeated_section] = ACTIONS(511),
    [sym_end_of_repeated_section] = ACTIONS(511),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(511),
    [anon_sym_BANGtrill_BANG] = ACTIONS(511),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(511),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(511),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(511),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(511),
    [anon_sym_BANGmordent_BANG] = ACTIONS(511),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(511),
    [anon_sym_BANGroll_BANG] = ACTIONS(511),
    [anon_sym_BANGturn_BANG] = ACTIONS(511),
    [anon_sym_BANGturnx_BANG] = ACTIONS(511),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(511),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(511),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(511),
    [anon_sym_BANG_GT_BANG] = ACTIONS(511),
    [anon_sym_BANGaccent_BANG] = ACTIONS(511),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(511),
    [anon_sym_BANGfermata_BANG] = ACTIONS(511),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(511),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(511),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(511),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(511),
    [anon_sym_BANGplus_BANG] = ACTIONS(511),
    [anon_sym_BANGsnap_BANG] = ACTIONS(511),
    [anon_sym_BANGslide_BANG] = ACTIONS(511),
    [anon_sym_BANGwedge_BANG] = ACTIONS(511),
    [anon_sym_BANGupbow_BANG] = ACTIONS(511),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(511),
    [anon_sym_BANGopen_BANG] = ACTIONS(511),
    [anon_sym_BANGthumb_BANG] = ACTIONS(511),
    [anon_sym_BANGbreath_BANG] = ACTIONS(511),
    [anon_sym_BANGpppp_BANG] = ACTIONS(511),
    [anon_sym_BANGppp_BANG] = ACTIONS(511),
    [anon_sym_BANGpp_BANG] = ACTIONS(511),
    [anon_sym_BANGp_BANG] = ACTIONS(511),
    [anon_sym_BANGmp_BANG] = ACTIONS(511),
    [anon_sym_BANGmf_BANG] = ACTIONS(511),
    [anon_sym_BANGf_BANG] = ACTIONS(511),
    [anon_sym_BANGff_BANG] = ACTIONS(511),
    [anon_sym_BANGfff_BANG] = ACTIONS(511),
    [anon_sym_BANGffff_BANG] = ACTIONS(511),
    [anon_sym_BANGsfz_BANG] = ACTIONS(511),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(511),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(511),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(511),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(511),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(511),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(511),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(511),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(511),
    [anon_sym_BANGsegno_BANG] = ACTIONS(511),
    [anon_sym_BANGcoda_BANG] = ACTIONS(511),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(511),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(511),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(511),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(511),
    [anon_sym_BANGfine_BANG] = ACTIONS(511),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(511),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(511),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(511),
  },
  [80] = {
    [sym_noCommentText] = ACTIONS(403),
    [sym_note_skip] = ACTIONS(403),
    [aux_sym_chord_symbol_token1] = ACTIONS(403),
    [sym_annotation] = ACTIONS(403),
    [sym_bar_line] = ACTIONS(403),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(403),
    [sym_thin_double_bar_line] = ACTIONS(403),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(403),
    [sym_start_of_repeated_section] = ACTIONS(403),
    [sym_end_of_repeated_section] = ACTIONS(403),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(403),
    [anon_sym_BANGtrill_BANG] = ACTIONS(403),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(403),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(403),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(403),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(403),
    [anon_sym_BANGmordent_BANG] = ACTIONS(403),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(403),
    [anon_sym_BANGroll_BANG] = ACTIONS(403),
    [anon_sym_BANGturn_BANG] = ACTIONS(403),
    [anon_sym_BANGturnx_BANG] = ACTIONS(403),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(403),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(403),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(403),
    [anon_sym_BANG_GT_BANG] = ACTIONS(403),
    [anon_sym_BANGaccent_BANG] = ACTIONS(403),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(403),
    [anon_sym_BANGfermata_BANG] = ACTIONS(403),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(403),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(403),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(403),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(403),
    [anon_sym_BANGplus_BANG] = ACTIONS(403),
    [anon_sym_BANGsnap_BANG] = ACTIONS(403),
    [anon_sym_BANGslide_BANG] = ACTIONS(403),
    [anon_sym_BANGwedge_BANG] = ACTIONS(403),
    [anon_sym_BANGupbow_BANG] = ACTIONS(403),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(403),
    [anon_sym_BANGopen_BANG] = ACTIONS(403),
    [anon_sym_BANGthumb_BANG] = ACTIONS(403),
    [anon_sym_BANGbreath_BANG] = ACTIONS(403),
    [anon_sym_BANGpppp_BANG] = ACTIONS(403),
    [anon_sym_BANGppp_BANG] = ACTIONS(403),
    [anon_sym_BANGpp_BANG] = ACTIONS(403),
    [anon_sym_BANGp_BANG] = ACTIONS(403),
    [anon_sym_BANGmp_BANG] = ACTIONS(403),
    [anon_sym_BANGmf_BANG] = ACTIONS(403),
    [anon_sym_BANGf_BANG] = ACTIONS(403),
    [anon_sym_BANGff_BANG] = ACTIONS(403),
    [anon_sym_BANGfff_BANG] = ACTIONS(403),
    [anon_sym_BANGffff_BANG] = ACTIONS(403),
    [anon_sym_BANGsfz_BANG] = ACTIONS(403),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(403),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(403),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(403),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(403),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(403),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(403),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(403),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(403),
    [anon_sym_BANGsegno_BANG] = ACTIONS(403),
    [anon_sym_BANGcoda_BANG] = ACTIONS(403),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(403),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(403),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(403),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(403),
    [anon_sym_BANGfine_BANG] = ACTIONS(403),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(403),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(403),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(403),
  },
  [81] = {
    [sym_noCommentText] = ACTIONS(395),
    [sym_note_skip] = ACTIONS(395),
    [aux_sym_chord_symbol_token1] = ACTIONS(395),
    [sym_annotation] = ACTIONS(395),
    [sym_bar_line] = ACTIONS(395),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(395),
    [sym_thin_double_bar_line] = ACTIONS(395),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(395),
    [sym_start_of_repeated_section] = ACTIONS(395),
    [sym_end_of_repeated_section] = ACTIONS(395),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(395),
    [anon_sym_BANGtrill_BANG] = ACTIONS(395),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(395),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(395),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(395),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(395),
    [anon_sym_BANGmordent_BANG] = ACTIONS(395),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(395),
    [anon_sym_BANGroll_BANG] = ACTIONS(395),
    [anon_sym_BANGturn_BANG] = ACTIONS(395),
    [anon_sym_BANGturnx_BANG] = ACTIONS(395),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(395),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(395),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(395),
    [anon_sym_BANG_GT_BANG] = ACTIONS(395),
    [anon_sym_BANGaccent_BANG] = ACTIONS(395),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(395),
    [anon_sym_BANGfermata_BANG] = ACTIONS(395),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(395),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(395),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(395),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(395),
    [anon_sym_BANGplus_BANG] = ACTIONS(395),
    [anon_sym_BANGsnap_BANG] = ACTIONS(395),
    [anon_sym_BANGslide_BANG] = ACTIONS(395),
    [anon_sym_BANGwedge_BANG] = ACTIONS(395),
    [anon_sym_BANGupbow_BANG] = ACTIONS(395),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(395),
    [anon_sym_BANGopen_BANG] = ACTIONS(395),
    [anon_sym_BANGthumb_BANG] = ACTIONS(395),
    [anon_sym_BANGbreath_BANG] = ACTIONS(395),
    [anon_sym_BANGpppp_BANG] = ACTIONS(395),
    [anon_sym_BANGppp_BANG] = ACTIONS(395),
    [anon_sym_BANGpp_BANG] = ACTIONS(395),
    [anon_sym_BANGp_BANG] = ACTIONS(395),
    [anon_sym_BANGmp_BANG] = ACTIONS(395),
    [anon_sym_BANGmf_BANG] = ACTIONS(395),
    [anon_sym_BANGf_BANG] = ACTIONS(395),
    [anon_sym_BANGff_BANG] = ACTIONS(395),
    [anon_sym_BANGfff_BANG] = ACTIONS(395),
    [anon_sym_BANGffff_BANG] = ACTIONS(395),
    [anon_sym_BANGsfz_BANG] = ACTIONS(395),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(395),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(395),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(395),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(395),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(395),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(395),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(395),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(395),
    [anon_sym_BANGsegno_BANG] = ACTIONS(395),
    [anon_sym_BANGcoda_BANG] = ACTIONS(395),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(395),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(395),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(395),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(395),
    [anon_sym_BANGfine_BANG] = ACTIONS(395),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(395),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(395),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(395),
  },
  [82] = {
    [sym_noCommentText] = ACTIONS(399),
    [sym_note_skip] = ACTIONS(399),
    [aux_sym_chord_symbol_token1] = ACTIONS(399),
    [sym_annotation] = ACTIONS(399),
    [sym_bar_line] = ACTIONS(399),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(399),
    [sym_thin_double_bar_line] = ACTIONS(399),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(399),
    [sym_start_of_repeated_section] = ACTIONS(399),
    [sym_end_of_repeated_section] = ACTIONS(399),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(399),
    [anon_sym_BANGtrill_BANG] = ACTIONS(399),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(399),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(399),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(399),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(399),
    [anon_sym_BANGmordent_BANG] = ACTIONS(399),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(399),
    [anon_sym_BANGroll_BANG] = ACTIONS(399),
    [anon_sym_BANGturn_BANG] = ACTIONS(399),
    [anon_sym_BANGturnx_BANG] = ACTIONS(399),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(399),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(399),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(399),
    [anon_sym_BANG_GT_BANG] = ACTIONS(399),
    [anon_sym_BANGaccent_BANG] = ACTIONS(399),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(399),
    [anon_sym_BANGfermata_BANG] = ACTIONS(399),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(399),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(399),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(399),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(399),
    [anon_sym_BANGplus_BANG] = ACTIONS(399),
    [anon_sym_BANGsnap_BANG] = ACTIONS(399),
    [anon_sym_BANGslide_BANG] = ACTIONS(399),
    [anon_sym_BANGwedge_BANG] = ACTIONS(399),
    [anon_sym_BANGupbow_BANG] = ACTIONS(399),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(399),
    [anon_sym_BANGopen_BANG] = ACTIONS(399),
    [anon_sym_BANGthumb_BANG] = ACTIONS(399),
    [anon_sym_BANGbreath_BANG] = ACTIONS(399),
    [anon_sym_BANGpppp_BANG] = ACTIONS(399),
    [anon_sym_BANGppp_BANG] = ACTIONS(399),
    [anon_sym_BANGpp_BANG] = ACTIONS(399),
    [anon_sym_BANGp_BANG] = ACTIONS(399),
    [anon_sym_BANGmp_BANG] = ACTIONS(399),
    [anon_sym_BANGmf_BANG] = ACTIONS(399),
    [anon_sym_BANGf_BANG] = ACTIONS(399),
    [anon_sym_BANGff_BANG] = ACTIONS(399),
    [anon_sym_BANGfff_BANG] = ACTIONS(399),
    [anon_sym_BANGffff_BANG] = ACTIONS(399),
    [anon_sym_BANGsfz_BANG] = ACTIONS(399),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(399),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(399),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(399),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(399),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(399),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(399),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(399),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(399),
    [anon_sym_BANGsegno_BANG] = ACTIONS(399),
    [anon_sym_BANGcoda_BANG] = ACTIONS(399),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(399),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(399),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(399),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(399),
    [anon_sym_BANGfine_BANG] = ACTIONS(399),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(399),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(399),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(399),
  },
  [83] = {
    [sym_noCommentText] = ACTIONS(513),
    [sym_note_skip] = ACTIONS(513),
    [aux_sym_chord_symbol_token1] = ACTIONS(513),
    [sym_annotation] = ACTIONS(513),
    [sym_bar_line] = ACTIONS(513),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(513),
    [sym_thin_double_bar_line] = ACTIONS(513),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(513),
    [sym_start_of_repeated_section] = ACTIONS(513),
    [sym_end_of_repeated_section] = ACTIONS(513),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(513),
    [anon_sym_BANGtrill_BANG] = ACTIONS(513),
    [anon_sym_BANGtrill_LPAREN_BANG] = ACTIONS(513),
    [anon_sym_BANGtrill_RPAREN_BANG] = ACTIONS(513),
    [anon_sym_BANGlowermordent_BANG] = ACTIONS(513),
    [anon_sym_BANGuppermordent_BANG] = ACTIONS(513),
    [anon_sym_BANGmordent_BANG] = ACTIONS(513),
    [anon_sym_BANGpralltriller_BANG] = ACTIONS(513),
    [anon_sym_BANGroll_BANG] = ACTIONS(513),
    [anon_sym_BANGturn_BANG] = ACTIONS(513),
    [anon_sym_BANGturnx_BANG] = ACTIONS(513),
    [anon_sym_BANGinvertedturn_BANG] = ACTIONS(513),
    [anon_sym_BANGinvertedturnx_BANG] = ACTIONS(513),
    [anon_sym_BANGarpeggio_BANG] = ACTIONS(513),
    [anon_sym_BANG_GT_BANG] = ACTIONS(513),
    [anon_sym_BANGaccent_BANG] = ACTIONS(513),
    [anon_sym_BANGemphasis_BANG] = ACTIONS(513),
    [anon_sym_BANGfermata_BANG] = ACTIONS(513),
    [anon_sym_BANGinvertedfermata_BANG] = ACTIONS(513),
    [anon_sym_BANGtenuto_BANG] = ACTIONS(513),
    [anon_sym_BANG0_BANG_DASH_BANG5_BANG] = ACTIONS(513),
    [anon_sym_BANG_PLUS_BANG] = ACTIONS(513),
    [anon_sym_BANGplus_BANG] = ACTIONS(513),
    [anon_sym_BANGsnap_BANG] = ACTIONS(513),
    [anon_sym_BANGslide_BANG] = ACTIONS(513),
    [anon_sym_BANGwedge_BANG] = ACTIONS(513),
    [anon_sym_BANGupbow_BANG] = ACTIONS(513),
    [anon_sym_BANGdownbow_BANG] = ACTIONS(513),
    [anon_sym_BANGopen_BANG] = ACTIONS(513),
    [anon_sym_BANGthumb_BANG] = ACTIONS(513),
    [anon_sym_BANGbreath_BANG] = ACTIONS(513),
    [anon_sym_BANGpppp_BANG] = ACTIONS(513),
    [anon_sym_BANGppp_BANG] = ACTIONS(513),
    [anon_sym_BANGpp_BANG] = ACTIONS(513),
    [anon_sym_BANGp_BANG] = ACTIONS(513),
    [anon_sym_BANGmp_BANG] = ACTIONS(513),
    [anon_sym_BANGmf_BANG] = ACTIONS(513),
    [anon_sym_BANGf_BANG] = ACTIONS(513),
    [anon_sym_BANGff_BANG] = ACTIONS(513),
    [anon_sym_BANGfff_BANG] = ACTIONS(513),
    [anon_sym_BANGffff_BANG] = ACTIONS(513),
    [anon_sym_BANGsfz_BANG] = ACTIONS(513),
    [anon_sym_BANGcrescendo_LPAREN_BANG] = ACTIONS(513),
    [anon_sym_BANG_LT_LPAREN_BANG] = ACTIONS(513),
    [anon_sym_BANGcrescendo_RPAREN_BANG] = ACTIONS(513),
    [anon_sym_BANG_LT_RPAREN_BANG] = ACTIONS(513),
    [anon_sym_BANGdiminuendo_LPAREN_BANG] = ACTIONS(513),
    [anon_sym_BANG_GT_LPAREN_BANG] = ACTIONS(513),
    [anon_sym_BANGdiminuendo_RPAREN_BANG] = ACTIONS(513),
    [anon_sym_BANG_GT_RPAREN_BANG] = ACTIONS(513),
    [anon_sym_BANGsegno_BANG] = ACTIONS(513),
    [anon_sym_BANGcoda_BANG] = ACTIONS(513),
    [anon_sym_BANGD_DOTS_DOT_BANG] = ACTIONS(513),
    [anon_sym_BANGD_DOTC_DOT_BANG] = ACTIONS(513),
    [anon_sym_BANGdacoda_BANG] = ACTIONS(513),
    [anon_sym_BANGdacapo_BANG] = ACTIONS(513),
    [anon_sym_BANGfine_BANG] = ACTIONS(513),
    [anon_sym_BANGshortphrase_BANG] = ACTIONS(513),
    [anon_sym_BANGmediumphrase_BANG] = ACTIONS(513),
    [anon_sym_BANGlongphrase_BANG] = ACTIONS(513),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    STATE(259), 1,
      sym_symbol,
    ACTIONS(515), 59,
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
    ACTIONS(517), 1,
      anon_sym_X_COLON,
    STATE(86), 1,
      aux_sym_file_header_repeat1,
    STATE(229), 2,
      sym_stylesheet_directives,
      sym_file_header_info_line,
    STATE(231), 2,
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
    ACTIONS(519), 1,
      sym_COMMENT,
    ACTIONS(522), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(525), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(531), 1,
      anon_sym_X_COLON,
    ACTIONS(533), 1,
      anon_sym_U_COLON,
    STATE(86), 1,
      aux_sym_file_header_repeat1,
    STATE(229), 2,
      sym_stylesheet_directives,
      sym_file_header_info_line,
    STATE(231), 2,
      sym_abc_version,
      sym_user_defined,
    ACTIONS(528), 17,
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
    ACTIONS(538), 1,
      sym__NL,
    STATE(87), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(541), 2,
      sym_COMMENT,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(536), 22,
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
    ACTIONS(543), 1,
      sym__NL,
    STATE(87), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(545), 2,
      sym_COMMENT,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(531), 20,
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
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(182), 1,
      sym_BEAM_SEPARATOR,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(547), 1,
      aux_sym__MUSIC_CODE_token1,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(557), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(559), 1,
      sym_tuplet_marker,
    STATE(24), 1,
      sym__pitch,
    STATE(35), 1,
      sym_note,
    STATE(154), 1,
      sym_chord_symbol,
    STATE(189), 1,
      sym_decoration,
    STATE(99), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(8), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [278] = 14,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(121), 1,
      sym_tuplet_marker,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(557), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(561), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(129), 1,
      sym_note,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(185), 1,
      sym_decoration,
    STATE(97), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(253), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [324] = 14,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(549), 1,
      anon_sym_LBRACK,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(557), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(559), 1,
      sym_tuplet_marker,
    STATE(24), 1,
      sym__pitch,
    STATE(35), 1,
      sym_note,
    STATE(154), 1,
      sym_chord_symbol,
    STATE(189), 1,
      sym_decoration,
    STATE(99), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(44), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [370] = 3,
    ACTIONS(563), 1,
      sym_octave,
    STATE(94), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(253), 14,
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
  [393] = 3,
    ACTIONS(565), 1,
      sym_octave,
    STATE(93), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(265), 14,
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
  [416] = 3,
    ACTIONS(568), 1,
      sym_octave,
    STATE(93), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(261), 14,
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
  [439] = 3,
    ACTIONS(568), 1,
      sym_octave,
    STATE(93), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(253), 14,
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
  [462] = 3,
    ACTIONS(570), 1,
      sym_octave,
    STATE(95), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(247), 14,
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
  [485] = 13,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(557), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(572), 1,
      anon_sym_LBRACK,
    ACTIONS(574), 1,
      sym_tuplet_marker,
    STATE(107), 1,
      sym__pitch,
    STATE(135), 1,
      sym_note,
    STATE(152), 1,
      sym_chord_symbol,
    STATE(184), 1,
      sym_decoration,
    STATE(145), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [526] = 7,
    ACTIONS(581), 1,
      anon_sym_DASH,
    ACTIONS(584), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(587), 1,
      aux_sym_verse_number_token1,
    ACTIONS(576), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(98), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(156), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(578), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [555] = 13,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(557), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      sym_tuplet_marker,
    STATE(24), 1,
      sym__pitch,
    STATE(32), 1,
      sym_note,
    STATE(155), 1,
      sym_chord_symbol,
    STATE(186), 1,
      sym_decoration,
    STATE(145), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [596] = 7,
    ACTIONS(598), 1,
      anon_sym_DASH,
    ACTIONS(600), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(602), 1,
      aux_sym_verse_number_token1,
    ACTIONS(594), 2,
      sym_noCommentText,
      aux_sym_words_line_token1,
    STATE(98), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(156), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(596), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [625] = 11,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(604), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [661] = 8,
    ACTIONS(606), 1,
      sym__NL,
    ACTIONS(611), 1,
      anon_sym_DASH,
    ACTIONS(614), 1,
      sym_UNDERSCORE,
    ACTIONS(617), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(620), 1,
      aux_sym_verse_number_token1,
    STATE(102), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(608), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(160), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [691] = 11,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(623), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [727] = 11,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(625), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [763] = 11,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(627), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [799] = 11,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(629), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [835] = 2,
    ACTIONS(631), 1,
      sym_rhythm,
    ACTIONS(311), 12,
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
  [853] = 11,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(633), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [889] = 8,
    ACTIONS(635), 1,
      sym__NL,
    ACTIONS(639), 1,
      anon_sym_DASH,
    ACTIONS(641), 1,
      sym_UNDERSCORE,
    ACTIONS(643), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(645), 1,
      aux_sym_verse_number_token1,
    STATE(102), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(637), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(160), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [919] = 11,
    ACTIONS(647), 1,
      anon_sym_RBRACK,
    ACTIONS(649), 1,
      sym_alteration,
    ACTIONS(652), 1,
      sym_note_letter,
    ACTIONS(655), 1,
      sym_rest,
    ACTIONS(658), 1,
      aux_sym_grace_note_token1,
    ACTIONS(661), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [955] = 11,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(664), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [991] = 11,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(666), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1027] = 11,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(668), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1063] = 11,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(670), 1,
      anon_sym_RBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1099] = 10,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(103), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1132] = 10,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(114), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1165] = 10,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(104), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1198] = 10,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(105), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1231] = 7,
    ACTIONS(639), 1,
      anon_sym_DASH,
    ACTIONS(641), 1,
      sym_UNDERSCORE,
    ACTIONS(643), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(645), 1,
      aux_sym_verse_number_token1,
    STATE(109), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(637), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(160), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1258] = 10,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(106), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1291] = 10,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(113), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1324] = 10,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(111), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1357] = 10,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(112), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1390] = 10,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(101), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1423] = 7,
    ACTIONS(596), 1,
      sym_UNDERSCORE,
    ACTIONS(600), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(602), 1,
      aux_sym_verse_number_token1,
    ACTIONS(674), 1,
      anon_sym_DASH,
    STATE(100), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(672), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(156), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [1450] = 10,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(182), 1,
      sym_note,
    STATE(193), 1,
      sym_decoration,
    STATE(108), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(147), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1483] = 1,
    ACTIONS(359), 12,
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
  [1498] = 2,
    ACTIONS(676), 1,
      sym_rhythm,
    ACTIONS(341), 10,
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
  [1514] = 2,
    ACTIONS(678), 1,
      aux_sym_note_construct_token1,
    ACTIONS(369), 10,
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
  [1530] = 2,
    ACTIONS(680), 1,
      sym_rhythm,
    ACTIONS(335), 10,
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
  [1546] = 2,
    ACTIONS(682), 1,
      sym_rhythm,
    ACTIONS(329), 10,
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
  [1562] = 2,
    ACTIONS(684), 1,
      aux_sym_note_construct_token1,
    ACTIONS(347), 10,
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
  [1578] = 2,
    ACTIONS(686), 1,
      aux_sym_note_construct_token1,
    ACTIONS(363), 10,
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
  [1594] = 2,
    ACTIONS(688), 1,
      sym_rhythm,
    ACTIONS(317), 10,
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
  [1610] = 2,
    ACTIONS(690), 1,
      aux_sym_note_construct_token1,
    ACTIONS(353), 10,
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
  [1626] = 2,
    ACTIONS(692), 1,
      aux_sym_note_construct_token1,
    ACTIONS(323), 10,
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
  [1642] = 2,
    ACTIONS(694), 1,
      sym_rhythm,
    ACTIONS(375), 10,
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
  [1658] = 1,
    ACTIONS(363), 10,
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
  [1671] = 1,
    ACTIONS(353), 10,
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
  [1684] = 1,
    ACTIONS(381), 10,
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
  [1697] = 1,
    ACTIONS(375), 10,
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
  [1710] = 1,
    ACTIONS(385), 10,
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
  [1723] = 1,
    ACTIONS(317), 10,
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
  [1736] = 1,
    ACTIONS(323), 10,
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
  [1749] = 3,
    ACTIONS(698), 1,
      aux_sym_grace_note_token1,
    STATE(145), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(696), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [1766] = 1,
    ACTIONS(341), 10,
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
  [1779] = 9,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(117), 1,
      aux_sym_grace_note_token1,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    STATE(107), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
    STATE(192), 1,
      sym_decoration,
    STATE(145), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1808] = 1,
    ACTIONS(347), 10,
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
  [1821] = 1,
    ACTIONS(329), 10,
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
  [1834] = 9,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(572), 1,
      anon_sym_LBRACK,
    ACTIONS(574), 1,
      sym_tuplet_marker,
    STATE(107), 1,
      sym__pitch,
    STATE(135), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
  [1862] = 1,
    ACTIONS(701), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1874] = 9,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(703), 1,
      anon_sym_LBRACK,
    ACTIONS(705), 1,
      sym_tuplet_marker,
    STATE(107), 1,
      sym__pitch,
    STATE(136), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
  [1902] = 1,
    ACTIONS(707), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1914] = 9,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    ACTIONS(592), 1,
      sym_tuplet_marker,
    STATE(24), 1,
      sym__pitch,
    STATE(32), 1,
      sym_note,
    STATE(186), 1,
      sym_decoration,
  [1942] = 9,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(709), 1,
      anon_sym_LBRACK,
    ACTIONS(711), 1,
      sym_tuplet_marker,
    STATE(24), 1,
      sym__pitch,
    STATE(27), 1,
      sym_note,
    STATE(178), 1,
      sym_decoration,
  [1970] = 1,
    ACTIONS(713), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1982] = 1,
    ACTIONS(715), 9,
      sym_noCommentText,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [1994] = 5,
    ACTIONS(278), 1,
      sym_words_postbody,
    STATE(166), 1,
      aux_sym_file_structure_repeat1,
    STATE(209), 1,
      sym_lyric_section,
    STATE(175), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(717), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2013] = 8,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(719), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym__pitch,
    STATE(34), 1,
      sym_note,
    STATE(171), 1,
      sym_decoration,
  [2038] = 2,
    ACTIONS(713), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(721), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2051] = 2,
    ACTIONS(715), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(723), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2064] = 2,
    ACTIONS(701), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(725), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2077] = 8,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(709), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym__pitch,
    STATE(27), 1,
      sym_note,
    STATE(178), 1,
      sym_decoration,
  [2102] = 8,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(572), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(135), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
  [2127] = 1,
    ACTIONS(727), 8,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2138] = 5,
    ACTIONS(278), 1,
      sym_words_postbody,
    STATE(87), 1,
      aux_sym_file_structure_repeat1,
    STATE(205), 1,
      sym_lyric_section,
    STATE(175), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(729), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2157] = 8,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(703), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(136), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
  [2182] = 8,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(731), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(133), 1,
      sym_note,
    STATE(183), 1,
      sym_decoration,
  [2207] = 8,
    ACTIONS(276), 1,
      sym_decoration_shorthand,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym__pitch,
    STATE(32), 1,
      sym_note,
    STATE(186), 1,
      sym_decoration,
  [2232] = 2,
    ACTIONS(707), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(733), 5,
      sym__NL,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [2245] = 6,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(735), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym__pitch,
    STATE(31), 1,
      sym_note,
  [2264] = 1,
    ACTIONS(737), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2273] = 1,
    ACTIONS(739), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2282] = 1,
    ACTIONS(741), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2291] = 3,
    ACTIONS(278), 1,
      sym_words_postbody,
    STATE(176), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(743), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2304] = 3,
    ACTIONS(747), 1,
      sym_words_postbody,
    STATE(176), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(745), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2317] = 6,
    ACTIONS(750), 1,
      ts_builtin_sym_end,
    ACTIONS(752), 1,
      anon_sym_X_COLON,
    STATE(6), 1,
      sym_reference_number_line,
    STATE(18), 1,
      sym_tune_header,
    STATE(177), 1,
      aux_sym_file_structure_repeat2,
    STATE(198), 1,
      sym_tune,
  [2336] = 6,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(719), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym__pitch,
    STATE(34), 1,
      sym_note,
  [2355] = 6,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    ACTIONS(755), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_reference_number_line,
    STATE(18), 1,
      sym_tune_header,
    STATE(177), 1,
      aux_sym_file_structure_repeat2,
    STATE(198), 1,
      sym_tune,
  [2374] = 1,
    ACTIONS(757), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [2383] = 1,
    ACTIONS(759), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2392] = 1,
    ACTIONS(761), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2401] = 6,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(763), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(132), 1,
      sym_note,
  [2420] = 6,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(703), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(136), 1,
      sym_note,
  [2439] = 6,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(572), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(135), 1,
      sym_note,
  [2458] = 6,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(709), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym__pitch,
    STATE(27), 1,
      sym_note,
  [2477] = 6,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    ACTIONS(765), 1,
      ts_builtin_sym_end,
    STATE(6), 1,
      sym_reference_number_line,
    STATE(18), 1,
      sym_tune_header,
    STATE(177), 1,
      aux_sym_file_structure_repeat2,
    STATE(198), 1,
      sym_tune,
  [2496] = 1,
    ACTIONS(767), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [2505] = 6,
    ACTIONS(551), 1,
      sym_alteration,
    ACTIONS(553), 1,
      sym_note_letter,
    ACTIONS(555), 1,
      sym_rest,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    STATE(24), 1,
      sym__pitch,
    STATE(32), 1,
      sym_note,
  [2524] = 6,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    ACTIONS(731), 1,
      anon_sym_LBRACK,
    STATE(107), 1,
      sym__pitch,
    STATE(133), 1,
      sym_note,
  [2543] = 5,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    STATE(6), 1,
      sym_reference_number_line,
    STATE(18), 1,
      sym_tune_header,
    STATE(187), 1,
      aux_sym_file_structure_repeat2,
    STATE(198), 1,
      sym_tune,
  [2559] = 5,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    STATE(107), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
  [2575] = 5,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(111), 1,
      sym_rest,
    STATE(107), 1,
      sym__pitch,
    STATE(188), 1,
      sym_note,
  [2591] = 4,
    ACTIONS(769), 1,
      sym_alteration,
    ACTIONS(772), 1,
      sym_note_letter,
    ACTIONS(775), 1,
      aux_sym_grace_note_token2,
    STATE(194), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [2605] = 4,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    ACTIONS(777), 1,
      aux_sym_grace_note_token2,
    STATE(194), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [2619] = 1,
    ACTIONS(779), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [2626] = 3,
    ACTIONS(107), 1,
      sym_alteration,
    ACTIONS(109), 1,
      sym_note_letter,
    STATE(195), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [2637] = 3,
    ACTIONS(783), 1,
      sym__NL,
    STATE(200), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(781), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [2648] = 2,
    ACTIONS(785), 1,
      sym_alteration,
    ACTIONS(787), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [2657] = 3,
    ACTIONS(543), 1,
      sym__NL,
    STATE(87), 1,
      aux_sym_file_structure_repeat1,
    ACTIONS(750), 2,
      ts_builtin_sym_end,
      anon_sym_X_COLON,
  [2668] = 1,
    ACTIONS(789), 4,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
      sym_words_postbody,
  [2675] = 3,
    ACTIONS(791), 1,
      sym_noCommentText,
    ACTIONS(793), 1,
      anon_sym_DOT,
    STATE(202), 1,
      aux_sym_abc_version_repeat1,
  [2685] = 3,
    ACTIONS(796), 1,
      sym_noCommentText,
    ACTIONS(798), 1,
      aux_sym_words_line_token1,
    STATE(210), 1,
      aux_sym_words_line_repeat2,
  [2695] = 1,
    ACTIONS(717), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2701] = 1,
    ACTIONS(800), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2707] = 3,
    ACTIONS(802), 1,
      sym_noCommentText,
    ACTIONS(804), 1,
      anon_sym_DOT,
    STATE(208), 1,
      aux_sym_abc_version_repeat1,
  [2717] = 3,
    ACTIONS(806), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(808), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(810), 1,
      sym_chord_type,
  [2727] = 3,
    ACTIONS(804), 1,
      anon_sym_DOT,
    ACTIONS(812), 1,
      sym_noCommentText,
    STATE(202), 1,
      aux_sym_abc_version_repeat1,
  [2737] = 1,
    ACTIONS(729), 3,
      ts_builtin_sym_end,
      sym__NL,
      anon_sym_X_COLON,
  [2743] = 3,
    ACTIONS(798), 1,
      aux_sym_words_line_token1,
    ACTIONS(814), 1,
      sym_noCommentText,
    STATE(213), 1,
      aux_sym_words_line_repeat2,
  [2753] = 1,
    ACTIONS(816), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [2759] = 3,
    ACTIONS(818), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(820), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(822), 1,
      sym_chord_type,
  [2769] = 3,
    ACTIONS(824), 1,
      sym_noCommentText,
    ACTIONS(826), 1,
      aux_sym_words_line_token1,
    STATE(213), 1,
      aux_sym_words_line_repeat2,
  [2779] = 2,
    ACTIONS(829), 1,
      sym__NL,
    ACTIONS(831), 1,
      sym_COMMENT,
  [2786] = 2,
    ACTIONS(833), 1,
      sym_note_letter,
    STATE(207), 1,
      sym_chord_symbol_note,
  [2793] = 2,
    ACTIONS(787), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(835), 1,
      sym_alteration,
  [2800] = 2,
    ACTIONS(837), 1,
      anon_sym_LBRACK,
    STATE(58), 1,
      sym_nth_ending_number,
  [2807] = 2,
    ACTIONS(839), 1,
      sym_note_letter,
    STATE(251), 1,
      sym_chord_symbol_note,
  [2814] = 2,
    ACTIONS(841), 1,
      sym__NL,
    ACTIONS(843), 1,
      sym_COMMENT,
  [2821] = 2,
    ACTIONS(839), 1,
      sym_note_letter,
    STATE(260), 1,
      sym_chord_symbol_note,
  [2828] = 2,
    ACTIONS(839), 1,
      sym_note_letter,
    STATE(258), 1,
      sym_chord_symbol_note,
  [2835] = 2,
    ACTIONS(833), 1,
      sym_note_letter,
    STATE(212), 1,
      sym_chord_symbol_note,
  [2842] = 2,
    ACTIONS(845), 1,
      sym__NL,
    ACTIONS(847), 1,
      sym_COMMENT,
  [2849] = 1,
    ACTIONS(791), 2,
      sym_noCommentText,
      anon_sym_DOT,
  [2854] = 2,
    ACTIONS(839), 1,
      sym_note_letter,
    STATE(233), 1,
      sym_chord_symbol_note,
  [2861] = 2,
    ACTIONS(849), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(851), 1,
      aux_sym_chord_symbol_token2,
  [2868] = 2,
    ACTIONS(853), 1,
      anon_sym_LBRACK,
    STATE(75), 1,
      sym_nth_ending_number,
  [2875] = 2,
    ACTIONS(855), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(857), 1,
      aux_sym_chord_symbol_token2,
  [2882] = 2,
    ACTIONS(859), 1,
      sym__NL,
    STATE(88), 1,
      aux_sym_file_structure_repeat1,
  [2889] = 1,
    ACTIONS(861), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [2894] = 1,
    ACTIONS(863), 1,
      sym_noCommentText,
  [2898] = 1,
    ACTIONS(865), 1,
      aux_sym_nth_ending_number_token1,
  [2902] = 1,
    ACTIONS(867), 1,
      aux_sym_chord_symbol_token1,
  [2906] = 1,
    ACTIONS(869), 1,
      aux_sym_nth_ending_number_token1,
  [2910] = 1,
    ACTIONS(871), 1,
      sym__NL,
  [2914] = 1,
    ACTIONS(431), 1,
      sym__NL,
  [2918] = 1,
    ACTIONS(873), 1,
      sym__NL,
  [2922] = 1,
    ACTIONS(875), 1,
      anon_sym_DOT,
  [2926] = 1,
    ACTIONS(877), 1,
      aux_sym_first_repeat_bar_token2,
  [2930] = 1,
    ACTIONS(879), 1,
      aux_sym_first_repeat_bar_token2,
  [2934] = 1,
    ACTIONS(881), 1,
      ts_builtin_sym_end,
  [2938] = 1,
    ACTIONS(883), 1,
      ts_builtin_sym_end,
  [2942] = 1,
    ACTIONS(885), 1,
      aux_sym_nth_ending_number_token1,
  [2946] = 1,
    ACTIONS(887), 1,
      aux_sym_nth_ending_number_token1,
  [2950] = 1,
    ACTIONS(889), 1,
      sym_noCommentText,
  [2954] = 1,
    ACTIONS(419), 1,
      sym_noCommentText,
  [2958] = 1,
    ACTIONS(891), 1,
      sym_noCommentText,
  [2962] = 1,
    ACTIONS(893), 1,
      sym_note_letter,
  [2966] = 1,
    ACTIONS(895), 1,
      aux_sym_nth_ending_number_token1,
  [2970] = 1,
    ACTIONS(897), 1,
      aux_sym_lyric_line_token1,
  [2974] = 1,
    ACTIONS(899), 1,
      aux_sym_chord_symbol_token1,
  [2978] = 1,
    ACTIONS(901), 1,
      sym_noCommentText,
  [2982] = 1,
    ACTIONS(903), 1,
      aux_sym__MUSIC_CODE_token1,
  [2986] = 1,
    ACTIONS(905), 1,
      aux_sym_nth_ending_number_token1,
  [2990] = 1,
    ACTIONS(907), 1,
      aux_sym_first_repeat_bar_token2,
  [2994] = 1,
    ACTIONS(909), 1,
      aux_sym_first_repeat_bar_token2,
  [2998] = 1,
    ACTIONS(911), 1,
      anon_sym_DOT,
  [3002] = 1,
    ACTIONS(913), 1,
      aux_sym_chord_symbol_token1,
  [3006] = 1,
    ACTIONS(915), 1,
      sym_noCommentText,
  [3010] = 1,
    ACTIONS(917), 1,
      aux_sym_chord_symbol_token1,
  [3014] = 1,
    ACTIONS(919), 1,
      aux_sym_nth_ending_number_token1,
  [3018] = 1,
    ACTIONS(921), 1,
      sym__NL,
  [3022] = 1,
    ACTIONS(923), 1,
      aux_sym_lyric_line_token1,
  [3026] = 1,
    ACTIONS(925), 1,
      anon_sym_EQ,
  [3030] = 1,
    ACTIONS(927), 1,
      sym__NL,
  [3034] = 1,
    ACTIONS(929), 1,
      sym_noCommentText,
  [3038] = 1,
    ACTIONS(931), 1,
      anon_sym_LBRACK,
  [3042] = 1,
    ACTIONS(933), 1,
      anon_sym_LBRACK,
  [3046] = 1,
    ACTIONS(935), 1,
      sym_note_letter,
  [3050] = 1,
    ACTIONS(937), 1,
      sym__NL,
  [3054] = 1,
    ACTIONS(939), 1,
      aux_sym_multimeasure_rest_token1,
  [3058] = 1,
    ACTIONS(941), 1,
      anon_sym_LBRACK,
  [3062] = 1,
    ACTIONS(943), 1,
      anon_sym_LBRACK,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(84)] = 0,
  [SMALL_STATE(85)] = 65,
  [SMALL_STATE(86)] = 111,
  [SMALL_STATE(87)] = 157,
  [SMALL_STATE(88)] = 192,
  [SMALL_STATE(89)] = 225,
  [SMALL_STATE(90)] = 278,
  [SMALL_STATE(91)] = 324,
  [SMALL_STATE(92)] = 370,
  [SMALL_STATE(93)] = 393,
  [SMALL_STATE(94)] = 416,
  [SMALL_STATE(95)] = 439,
  [SMALL_STATE(96)] = 462,
  [SMALL_STATE(97)] = 485,
  [SMALL_STATE(98)] = 526,
  [SMALL_STATE(99)] = 555,
  [SMALL_STATE(100)] = 596,
  [SMALL_STATE(101)] = 625,
  [SMALL_STATE(102)] = 661,
  [SMALL_STATE(103)] = 691,
  [SMALL_STATE(104)] = 727,
  [SMALL_STATE(105)] = 763,
  [SMALL_STATE(106)] = 799,
  [SMALL_STATE(107)] = 835,
  [SMALL_STATE(108)] = 853,
  [SMALL_STATE(109)] = 889,
  [SMALL_STATE(110)] = 919,
  [SMALL_STATE(111)] = 955,
  [SMALL_STATE(112)] = 991,
  [SMALL_STATE(113)] = 1027,
  [SMALL_STATE(114)] = 1063,
  [SMALL_STATE(115)] = 1099,
  [SMALL_STATE(116)] = 1132,
  [SMALL_STATE(117)] = 1165,
  [SMALL_STATE(118)] = 1198,
  [SMALL_STATE(119)] = 1231,
  [SMALL_STATE(120)] = 1258,
  [SMALL_STATE(121)] = 1291,
  [SMALL_STATE(122)] = 1324,
  [SMALL_STATE(123)] = 1357,
  [SMALL_STATE(124)] = 1390,
  [SMALL_STATE(125)] = 1423,
  [SMALL_STATE(126)] = 1450,
  [SMALL_STATE(127)] = 1483,
  [SMALL_STATE(128)] = 1498,
  [SMALL_STATE(129)] = 1514,
  [SMALL_STATE(130)] = 1530,
  [SMALL_STATE(131)] = 1546,
  [SMALL_STATE(132)] = 1562,
  [SMALL_STATE(133)] = 1578,
  [SMALL_STATE(134)] = 1594,
  [SMALL_STATE(135)] = 1610,
  [SMALL_STATE(136)] = 1626,
  [SMALL_STATE(137)] = 1642,
  [SMALL_STATE(138)] = 1658,
  [SMALL_STATE(139)] = 1671,
  [SMALL_STATE(140)] = 1684,
  [SMALL_STATE(141)] = 1697,
  [SMALL_STATE(142)] = 1710,
  [SMALL_STATE(143)] = 1723,
  [SMALL_STATE(144)] = 1736,
  [SMALL_STATE(145)] = 1749,
  [SMALL_STATE(146)] = 1766,
  [SMALL_STATE(147)] = 1779,
  [SMALL_STATE(148)] = 1808,
  [SMALL_STATE(149)] = 1821,
  [SMALL_STATE(150)] = 1834,
  [SMALL_STATE(151)] = 1862,
  [SMALL_STATE(152)] = 1874,
  [SMALL_STATE(153)] = 1902,
  [SMALL_STATE(154)] = 1914,
  [SMALL_STATE(155)] = 1942,
  [SMALL_STATE(156)] = 1970,
  [SMALL_STATE(157)] = 1982,
  [SMALL_STATE(158)] = 1994,
  [SMALL_STATE(159)] = 2013,
  [SMALL_STATE(160)] = 2038,
  [SMALL_STATE(161)] = 2051,
  [SMALL_STATE(162)] = 2064,
  [SMALL_STATE(163)] = 2077,
  [SMALL_STATE(164)] = 2102,
  [SMALL_STATE(165)] = 2127,
  [SMALL_STATE(166)] = 2138,
  [SMALL_STATE(167)] = 2157,
  [SMALL_STATE(168)] = 2182,
  [SMALL_STATE(169)] = 2207,
  [SMALL_STATE(170)] = 2232,
  [SMALL_STATE(171)] = 2245,
  [SMALL_STATE(172)] = 2264,
  [SMALL_STATE(173)] = 2273,
  [SMALL_STATE(174)] = 2282,
  [SMALL_STATE(175)] = 2291,
  [SMALL_STATE(176)] = 2304,
  [SMALL_STATE(177)] = 2317,
  [SMALL_STATE(178)] = 2336,
  [SMALL_STATE(179)] = 2355,
  [SMALL_STATE(180)] = 2374,
  [SMALL_STATE(181)] = 2383,
  [SMALL_STATE(182)] = 2392,
  [SMALL_STATE(183)] = 2401,
  [SMALL_STATE(184)] = 2420,
  [SMALL_STATE(185)] = 2439,
  [SMALL_STATE(186)] = 2458,
  [SMALL_STATE(187)] = 2477,
  [SMALL_STATE(188)] = 2496,
  [SMALL_STATE(189)] = 2505,
  [SMALL_STATE(190)] = 2524,
  [SMALL_STATE(191)] = 2543,
  [SMALL_STATE(192)] = 2559,
  [SMALL_STATE(193)] = 2575,
  [SMALL_STATE(194)] = 2591,
  [SMALL_STATE(195)] = 2605,
  [SMALL_STATE(196)] = 2619,
  [SMALL_STATE(197)] = 2626,
  [SMALL_STATE(198)] = 2637,
  [SMALL_STATE(199)] = 2648,
  [SMALL_STATE(200)] = 2657,
  [SMALL_STATE(201)] = 2668,
  [SMALL_STATE(202)] = 2675,
  [SMALL_STATE(203)] = 2685,
  [SMALL_STATE(204)] = 2695,
  [SMALL_STATE(205)] = 2701,
  [SMALL_STATE(206)] = 2707,
  [SMALL_STATE(207)] = 2717,
  [SMALL_STATE(208)] = 2727,
  [SMALL_STATE(209)] = 2737,
  [SMALL_STATE(210)] = 2743,
  [SMALL_STATE(211)] = 2753,
  [SMALL_STATE(212)] = 2759,
  [SMALL_STATE(213)] = 2769,
  [SMALL_STATE(214)] = 2779,
  [SMALL_STATE(215)] = 2786,
  [SMALL_STATE(216)] = 2793,
  [SMALL_STATE(217)] = 2800,
  [SMALL_STATE(218)] = 2807,
  [SMALL_STATE(219)] = 2814,
  [SMALL_STATE(220)] = 2821,
  [SMALL_STATE(221)] = 2828,
  [SMALL_STATE(222)] = 2835,
  [SMALL_STATE(223)] = 2842,
  [SMALL_STATE(224)] = 2849,
  [SMALL_STATE(225)] = 2854,
  [SMALL_STATE(226)] = 2861,
  [SMALL_STATE(227)] = 2868,
  [SMALL_STATE(228)] = 2875,
  [SMALL_STATE(229)] = 2882,
  [SMALL_STATE(230)] = 2889,
  [SMALL_STATE(231)] = 2894,
  [SMALL_STATE(232)] = 2898,
  [SMALL_STATE(233)] = 2902,
  [SMALL_STATE(234)] = 2906,
  [SMALL_STATE(235)] = 2910,
  [SMALL_STATE(236)] = 2914,
  [SMALL_STATE(237)] = 2918,
  [SMALL_STATE(238)] = 2922,
  [SMALL_STATE(239)] = 2926,
  [SMALL_STATE(240)] = 2930,
  [SMALL_STATE(241)] = 2934,
  [SMALL_STATE(242)] = 2938,
  [SMALL_STATE(243)] = 2942,
  [SMALL_STATE(244)] = 2946,
  [SMALL_STATE(245)] = 2950,
  [SMALL_STATE(246)] = 2954,
  [SMALL_STATE(247)] = 2958,
  [SMALL_STATE(248)] = 2962,
  [SMALL_STATE(249)] = 2966,
  [SMALL_STATE(250)] = 2970,
  [SMALL_STATE(251)] = 2974,
  [SMALL_STATE(252)] = 2978,
  [SMALL_STATE(253)] = 2982,
  [SMALL_STATE(254)] = 2986,
  [SMALL_STATE(255)] = 2990,
  [SMALL_STATE(256)] = 2994,
  [SMALL_STATE(257)] = 2998,
  [SMALL_STATE(258)] = 3002,
  [SMALL_STATE(259)] = 3006,
  [SMALL_STATE(260)] = 3010,
  [SMALL_STATE(261)] = 3014,
  [SMALL_STATE(262)] = 3018,
  [SMALL_STATE(263)] = 3022,
  [SMALL_STATE(264)] = 3026,
  [SMALL_STATE(265)] = 3030,
  [SMALL_STATE(266)] = 3034,
  [SMALL_STATE(267)] = 3038,
  [SMALL_STATE(268)] = 3042,
  [SMALL_STATE(269)] = 3046,
  [SMALL_STATE(270)] = 3050,
  [SMALL_STATE(271)] = 3054,
  [SMALL_STATE(272)] = 3058,
  [SMALL_STATE(273)] = 3062,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(229),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [7] = {.entry = {.count = 1, .reusable = false}}, SHIFT(244),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [15] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [17] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [19] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(2),
  [22] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(247),
  [25] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(90),
  [28] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(55),
  [31] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(55),
  [34] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(126),
  [37] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(269),
  [40] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(96),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(107),
  [46] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(271),
  [49] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(271),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(197),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(215),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(164),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(196),
  [64] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(23),
  [67] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(45),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(57),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(21),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(56),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(266),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(65),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(230),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(119),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 1),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 1),
  [95] = {.entry = {.count = 1, .reusable = false}}, SHIFT(4),
  [97] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [99] = {.entry = {.count = 1, .reusable = false}}, SHIFT(90),
  [101] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [103] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [105] = {.entry = {.count = 1, .reusable = false}}, SHIFT(126),
  [107] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [109] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [111] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [113] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(271),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(215),
  [121] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [123] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [125] = {.entry = {.count = 1, .reusable = false}}, SHIFT(23),
  [127] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [129] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [131] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [133] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [135] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [137] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 2),
  [145] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 2),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 2),
  [151] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [155] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 1),
  [157] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 1),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(265),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(252),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(244),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(65),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(230),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 2),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 2),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_beam, 2), SHIFT(123),
  [187] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_beam, 2), SHIFT(248),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_beam, 2), SHIFT(13),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_beam, 2), SHIFT(24),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_beam, 2), SHIFT(197),
  [199] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_beam, 2), SHIFT(215),
  [202] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_beam, 2), SHIFT(169),
  [205] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_beam, 2), SHIFT(196),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [210] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2),
  [212] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(91),
  [215] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(123),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(248),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(13),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(24),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(197),
  [230] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(215),
  [233] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(169),
  [236] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(196),
  [239] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 4),
  [241] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 4),
  [243] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number_line, 5),
  [245] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number_line, 5),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [253] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 2),
  [255] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 2),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [261] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 3),
  [263] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 3),
  [265] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(17),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 1),
  [274] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune, 1),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [280] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 3),
  [282] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 3),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [286] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [288] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [290] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(232),
  [293] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_bar_line, 1),
  [295] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_bar_line, 1),
  [297] = {.entry = {.count = 1, .reusable = false}}, SHIFT(217),
  [299] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [303] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 2),
  [305] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [309] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [311] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [313] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [315] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [317] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 4),
  [319] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 4),
  [321] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [323] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [325] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 3),
  [327] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [329] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 5),
  [331] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 5),
  [333] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [335] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 3),
  [337] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 3),
  [339] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [341] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 6),
  [343] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 6),
  [345] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [347] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [349] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 5),
  [351] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [353] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [355] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 2),
  [357] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [365] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 4),
  [367] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [369] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [371] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 1),
  [373] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [375] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 7),
  [377] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 7),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 8),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 8),
  [385] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 6),
  [387] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 6),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 4),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 4),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 4),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 4),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 3),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 3),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1),
  [417] = {.entry = {.count = 1, .reusable = false}}, SHIFT(61),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 1),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 1),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_barline, 3),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_barline, 3),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 2),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet_directives, 2),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stylesheet_directives, 2),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 2),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 2),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_info_line, 2, .production_id = 1),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_info_line, 2, .production_id = 1),
  [443] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2),
  [445] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(63),
  [448] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(222),
  [451] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(70),
  [454] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(72),
  [457] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(78),
  [460] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(68),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(74),
  [466] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_line, 2),
  [468] = {.entry = {.count = 1, .reusable = false}}, SHIFT(63),
  [470] = {.entry = {.count = 1, .reusable = false}}, SHIFT(222),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(70),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(72),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(78),
  [478] = {.entry = {.count = 1, .reusable = false}}, SHIFT(68),
  [480] = {.entry = {.count = 1, .reusable = false}}, SHIFT(74),
  [482] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [484] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [486] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [488] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [490] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [492] = {.entry = {.count = 1, .reusable = false}}, SHIFT(261),
  [494] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(261),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [499] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [501] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [503] = {.entry = {.count = 1, .reusable = false}}, SHIFT(267),
  [505] = {.entry = {.count = 1, .reusable = false}}, SHIFT(73),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 3),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 5),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 6),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 4),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [517] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header, 1),
  [519] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(229),
  [522] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(245),
  [525] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(244),
  [528] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(231),
  [531] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(230),
  [536] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2),
  [538] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2), SHIFT_REPEAT(87),
  [541] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_structure_repeat1, 2),
  [543] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [545] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [547] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [551] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [555] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [561] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [565] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(93),
  [568] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [570] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [572] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [574] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(156),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(157),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(151),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(257),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [594] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [596] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [598] = {.entry = {.count = 1, .reusable = false}}, SHIFT(157),
  [600] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [602] = {.entry = {.count = 1, .reusable = false}}, SHIFT(257),
  [604] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [606] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [608] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(160),
  [611] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(161),
  [614] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(160),
  [617] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(162),
  [620] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(238),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [629] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [637] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [639] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [641] = {.entry = {.count = 1, .reusable = false}}, SHIFT(160),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(162),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(238),
  [647] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2),
  [649] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(269),
  [652] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(96),
  [655] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(107),
  [658] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(197),
  [661] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(196),
  [664] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [666] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [668] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [670] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [672] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [674] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [676] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [678] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [680] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [682] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(197),
  [701] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_syllable, 1),
  [703] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [705] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [707] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse_number, 2),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(159),
  [713] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_text, 1),
  [715] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HYPHEN, 1),
  [717] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 2),
  [719] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [721] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_text, 1),
  [723] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HYPHEN, 1),
  [725] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_syllable, 1),
  [727] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [729] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 3),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse_number, 2),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [737] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [739] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [741] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_section, 1),
  [745] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2),
  [747] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2), SHIFT_REPEAT(250),
  [750] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 2),
  [752] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 2), SHIFT_REPEAT(243),
  [755] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 1),
  [757] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [759] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [761] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [763] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [765] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 2),
  [767] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [769] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(269),
  [772] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(96),
  [775] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [777] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat2, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [785] = {.entry = {.count = 1, .reusable = false}}, SHIFT(211),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_line, 3),
  [791] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2),
  [793] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(234),
  [796] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 3),
  [798] = {.entry = {.count = 1, .reusable = false}}, SHIFT(125),
  [800] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 4),
  [802] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 2),
  [804] = {.entry = {.count = 1, .reusable = false}}, SHIFT(234),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [812] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 3),
  [814] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_words_line, 4),
  [816] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [820] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [824] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [826] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2), SHIFT_REPEAT(125),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 2, .production_id = 1),
  [831] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [833] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [835] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [837] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [839] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [841] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [845] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 2, .production_id = 1),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [849] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [851] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [853] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [855] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [857] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [859] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [861] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [863] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [865] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [867] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [869] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [871] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [873] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 3, .production_id = 1),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [877] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [879] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [881] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [883] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [885] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [887] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [889] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [891] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [893] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [895] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [897] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [899] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [901] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [903] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [905] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [907] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [909] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [911] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [913] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [915] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined, 4),
  [917] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [919] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [921] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [923] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [925] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [927] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [929] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [931] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [933] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [935] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [937] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [939] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [941] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [943] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
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
