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
#define STATE_COUNT 520
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 204
#define ALIAS_COUNT 0
#define TOKEN_COUNT 146
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 59
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
  sym_COMMENTLINE = 10,
  anon_sym_PERCENT_PERCENT = 11,
  aux_sym__MUSIC_CODE_token1 = 12,
  aux_sym__music_content_token1 = 13,
  anon_sym_BQUOTE = 14,
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
  aux_sym_body_info_line_token1 = 143,
  anon_sym_LF = 144,
  aux_sym_file_header_info_line_token1 = 145,
  sym_source_file = 146,
  sym_TEXTLINE = 147,
  sym_HYPHEN = 148,
  sym_stylesheet_directives = 149,
  sym__MUSIC_CODE = 150,
  sym_file_structure = 151,
  sym_file_header = 152,
  sym_tune = 153,
  sym_tune_header = 154,
  sym_tune_body = 155,
  sym__music_content = 156,
  sym__nte_or_chrd = 157,
  sym_beam = 158,
  sym_note_construct = 159,
  sym__chord_cstrct = 160,
  sym_note = 161,
  sym_chord_note = 162,
  sym__pitch = 163,
  sym_multimeasure_rest = 164,
  sym_grace_note = 165,
  sym_chord_symbol_note = 166,
  sym_chord_symbol = 167,
  sym_decoration = 168,
  sym_Nth_ending = 169,
  sym_nth_ending_number = 170,
  sym_generic_bar_line = 171,
  sym_first_repeat_bar = 172,
  sym_second_repeat_bar = 173,
  sym_lyric_line = 174,
  sym_lyric_section = 175,
  sym_lyric_syllable = 176,
  sym_verse_number = 177,
  sym_lyric_text = 178,
  sym_symbol = 179,
  sym_TEXT = 180,
  sym_abc_version = 181,
  sym_reference_number = 182,
  sym_symbol_line = 183,
  sym_user_defined = 184,
  sym_words_line = 185,
  sym_body_info_line = 186,
  sym_tune_header_info_line = 187,
  sym_file_header_info_line = 188,
  aux_sym_file_structure_repeat1 = 189,
  aux_sym_file_header_repeat1 = 190,
  aux_sym_tune_header_repeat1 = 191,
  aux_sym_tune_body_repeat1 = 192,
  aux_sym_beam_repeat1 = 193,
  aux_sym_note_construct_repeat1 = 194,
  aux_sym__chord_cstrct_repeat1 = 195,
  aux_sym__pitch_repeat1 = 196,
  aux_sym_grace_note_repeat1 = 197,
  aux_sym_nth_ending_number_repeat1 = 198,
  aux_sym_lyric_section_repeat1 = 199,
  aux_sym_abc_version_repeat1 = 200,
  aux_sym_symbol_line_repeat1 = 201,
  aux_sym_words_line_repeat1 = 202,
  aux_sym_words_line_repeat2 = 203,
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
  [sym_COMMENTLINE] = "COMMENTLINE",
  [anon_sym_PERCENT_PERCENT] = "%%",
  [aux_sym__MUSIC_CODE_token1] = "_MUSIC_CODE_token1",
  [aux_sym__music_content_token1] = "_music_content_token1",
  [anon_sym_BQUOTE] = "`",
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
  [sym_Nth_ending] = "Nth_ending",
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
  [sym_COMMENTLINE] = sym_COMMENTLINE,
  [anon_sym_PERCENT_PERCENT] = anon_sym_PERCENT_PERCENT,
  [aux_sym__MUSIC_CODE_token1] = aux_sym__MUSIC_CODE_token1,
  [aux_sym__music_content_token1] = aux_sym__music_content_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
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
  [sym_Nth_ending] = sym_Nth_ending,
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
  [anon_sym_BQUOTE] = {
    .visible = true,
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
  [sym_Nth_ending] = {
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
  [14] = 9,
  [15] = 10,
  [16] = 16,
  [17] = 8,
  [18] = 11,
  [19] = 12,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 21,
  [27] = 24,
  [28] = 28,
  [29] = 28,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 23,
  [34] = 34,
  [35] = 25,
  [36] = 36,
  [37] = 37,
  [38] = 38,
  [39] = 36,
  [40] = 37,
  [41] = 41,
  [42] = 42,
  [43] = 43,
  [44] = 44,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 48,
  [49] = 47,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 53,
  [54] = 54,
  [55] = 55,
  [56] = 56,
  [57] = 54,
  [58] = 58,
  [59] = 53,
  [60] = 60,
  [61] = 61,
  [62] = 56,
  [63] = 52,
  [64] = 55,
  [65] = 51,
  [66] = 66,
  [67] = 67,
  [68] = 67,
  [69] = 69,
  [70] = 70,
  [71] = 71,
  [72] = 72,
  [73] = 73,
  [74] = 74,
  [75] = 74,
  [76] = 76,
  [77] = 77,
  [78] = 71,
  [79] = 61,
  [80] = 77,
  [81] = 72,
  [82] = 82,
  [83] = 83,
  [84] = 84,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 89,
  [90] = 82,
  [91] = 91,
  [92] = 92,
  [93] = 87,
  [94] = 94,
  [95] = 95,
  [96] = 91,
  [97] = 89,
  [98] = 83,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 73,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 106,
  [109] = 109,
  [110] = 110,
  [111] = 111,
  [112] = 112,
  [113] = 113,
  [114] = 107,
  [115] = 115,
  [116] = 115,
  [117] = 117,
  [118] = 118,
  [119] = 110,
  [120] = 111,
  [121] = 118,
  [122] = 113,
  [123] = 84,
  [124] = 109,
  [125] = 112,
  [126] = 117,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 136,
  [137] = 132,
  [138] = 129,
  [139] = 139,
  [140] = 127,
  [141] = 130,
  [142] = 135,
  [143] = 143,
  [144] = 128,
  [145] = 143,
  [146] = 146,
  [147] = 134,
  [148] = 131,
  [149] = 136,
  [150] = 150,
  [151] = 151,
  [152] = 152,
  [153] = 150,
  [154] = 154,
  [155] = 154,
  [156] = 156,
  [157] = 157,
  [158] = 156,
  [159] = 152,
  [160] = 160,
  [161] = 160,
  [162] = 162,
  [163] = 163,
  [164] = 164,
  [165] = 164,
  [166] = 151,
  [167] = 157,
  [168] = 162,
  [169] = 95,
  [170] = 102,
  [171] = 171,
  [172] = 172,
  [173] = 172,
  [174] = 174,
  [175] = 174,
  [176] = 176,
  [177] = 177,
  [178] = 171,
  [179] = 179,
  [180] = 88,
  [181] = 181,
  [182] = 105,
  [183] = 183,
  [184] = 183,
  [185] = 185,
  [186] = 186,
  [187] = 187,
  [188] = 188,
  [189] = 189,
  [190] = 190,
  [191] = 191,
  [192] = 187,
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
  [204] = 194,
  [205] = 194,
  [206] = 195,
  [207] = 207,
  [208] = 196,
  [209] = 209,
  [210] = 209,
  [211] = 211,
  [212] = 195,
  [213] = 213,
  [214] = 214,
  [215] = 215,
  [216] = 196,
  [217] = 211,
  [218] = 218,
  [219] = 219,
  [220] = 220,
  [221] = 221,
  [222] = 222,
  [223] = 223,
  [224] = 201,
  [225] = 225,
  [226] = 226,
  [227] = 227,
  [228] = 228,
  [229] = 229,
  [230] = 230,
  [231] = 231,
  [232] = 227,
  [233] = 225,
  [234] = 228,
  [235] = 193,
  [236] = 236,
  [237] = 237,
  [238] = 238,
  [239] = 201,
  [240] = 94,
  [241] = 229,
  [242] = 236,
  [243] = 231,
  [244] = 228,
  [245] = 225,
  [246] = 246,
  [247] = 247,
  [248] = 248,
  [249] = 249,
  [250] = 250,
  [251] = 251,
  [252] = 252,
  [253] = 253,
  [254] = 254,
  [255] = 255,
  [256] = 256,
  [257] = 257,
  [258] = 258,
  [259] = 259,
  [260] = 260,
  [261] = 261,
  [262] = 262,
  [263] = 247,
  [264] = 264,
  [265] = 265,
  [266] = 223,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 277,
  [278] = 278,
  [279] = 279,
  [280] = 280,
  [281] = 281,
  [282] = 282,
  [283] = 283,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 287,
  [288] = 288,
  [289] = 289,
  [290] = 290,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 298,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 304,
  [305] = 223,
  [306] = 94,
  [307] = 94,
  [308] = 308,
  [309] = 309,
  [310] = 310,
  [311] = 294,
  [312] = 292,
  [313] = 313,
  [314] = 278,
  [315] = 315,
  [316] = 316,
  [317] = 262,
  [318] = 318,
  [319] = 319,
  [320] = 320,
  [321] = 321,
  [322] = 322,
  [323] = 323,
  [324] = 324,
  [325] = 310,
  [326] = 326,
  [327] = 327,
  [328] = 328,
  [329] = 253,
  [330] = 309,
  [331] = 278,
  [332] = 332,
  [333] = 253,
  [334] = 253,
  [335] = 335,
  [336] = 297,
  [337] = 337,
  [338] = 323,
  [339] = 339,
  [340] = 340,
  [341] = 341,
  [342] = 324,
  [343] = 343,
  [344] = 309,
  [345] = 345,
  [346] = 252,
  [347] = 297,
  [348] = 252,
  [349] = 252,
  [350] = 326,
  [351] = 251,
  [352] = 352,
  [353] = 251,
  [354] = 251,
  [355] = 250,
  [356] = 250,
  [357] = 250,
  [358] = 249,
  [359] = 249,
  [360] = 249,
  [361] = 248,
  [362] = 248,
  [363] = 248,
  [364] = 364,
  [365] = 364,
  [366] = 364,
  [367] = 257,
  [368] = 257,
  [369] = 257,
  [370] = 258,
  [371] = 258,
  [372] = 258,
  [373] = 259,
  [374] = 259,
  [375] = 259,
  [376] = 260,
  [377] = 260,
  [378] = 260,
  [379] = 261,
  [380] = 261,
  [381] = 261,
  [382] = 247,
  [383] = 364,
  [384] = 247,
  [385] = 264,
  [386] = 264,
  [387] = 264,
  [388] = 265,
  [389] = 265,
  [390] = 265,
  [391] = 267,
  [392] = 267,
  [393] = 267,
  [394] = 268,
  [395] = 268,
  [396] = 268,
  [397] = 269,
  [398] = 269,
  [399] = 269,
  [400] = 270,
  [401] = 270,
  [402] = 270,
  [403] = 274,
  [404] = 274,
  [405] = 274,
  [406] = 275,
  [407] = 275,
  [408] = 275,
  [409] = 276,
  [410] = 276,
  [411] = 276,
  [412] = 277,
  [413] = 277,
  [414] = 277,
  [415] = 279,
  [416] = 279,
  [417] = 279,
  [418] = 280,
  [419] = 280,
  [420] = 280,
  [421] = 282,
  [422] = 282,
  [423] = 282,
  [424] = 283,
  [425] = 283,
  [426] = 283,
  [427] = 284,
  [428] = 284,
  [429] = 284,
  [430] = 285,
  [431] = 285,
  [432] = 285,
  [433] = 287,
  [434] = 287,
  [435] = 287,
  [436] = 288,
  [437] = 288,
  [438] = 288,
  [439] = 289,
  [440] = 289,
  [441] = 289,
  [442] = 290,
  [443] = 290,
  [444] = 290,
  [445] = 291,
  [446] = 291,
  [447] = 291,
  [448] = 293,
  [449] = 293,
  [450] = 293,
  [451] = 295,
  [452] = 295,
  [453] = 295,
  [454] = 296,
  [455] = 296,
  [456] = 296,
  [457] = 299,
  [458] = 299,
  [459] = 299,
  [460] = 300,
  [461] = 300,
  [462] = 300,
  [463] = 301,
  [464] = 301,
  [465] = 301,
  [466] = 302,
  [467] = 302,
  [468] = 302,
  [469] = 303,
  [470] = 303,
  [471] = 303,
  [472] = 304,
  [473] = 304,
  [474] = 304,
  [475] = 308,
  [476] = 308,
  [477] = 308,
  [478] = 315,
  [479] = 315,
  [480] = 315,
  [481] = 316,
  [482] = 316,
  [483] = 316,
  [484] = 318,
  [485] = 318,
  [486] = 318,
  [487] = 319,
  [488] = 319,
  [489] = 319,
  [490] = 320,
  [491] = 320,
  [492] = 320,
  [493] = 321,
  [494] = 321,
  [495] = 321,
  [496] = 328,
  [497] = 328,
  [498] = 328,
  [499] = 335,
  [500] = 335,
  [501] = 335,
  [502] = 341,
  [503] = 341,
  [504] = 341,
  [505] = 343,
  [506] = 343,
  [507] = 343,
  [508] = 352,
  [509] = 352,
  [510] = 352,
  [511] = 322,
  [512] = 322,
  [513] = 322,
  [514] = 271,
  [515] = 271,
  [516] = 271,
  [517] = 298,
  [518] = 298,
  [519] = 298,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(313);
      if (lookahead == ' ') ADVANCE(314);
      if (lookahead == '!') ADVANCE(76);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '%') ADVANCE(330);
      if (lookahead == '\'') ADVANCE(357);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == '*') ADVANCE(321);
      if (lookahead == '+') ADVANCE(319);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == '/') ADVANCE(366);
      if (lookahead == '0') ADVANCE(364);
      if (lookahead == ':') ADVANCE(320);
      if (lookahead == '=') ADVANCE(541);
      if (lookahead == 'A') ADVANCE(351);
      if (lookahead == 'B') ADVANCE(352);
      if (lookahead == 'C') ADVANCE(353);
      if (lookahead == 'D') ADVANCE(354);
      if (lookahead == 'F') ADVANCE(355);
      if (lookahead == 'G') ADVANCE(356);
      if (lookahead == 'H') ADVANCE(411);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'K') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead == 'M') ADVANCE(414);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'Q') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(417);
      if (lookahead == 'T') ADVANCE(418);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'V') ADVANCE(102);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == 'X') ADVANCE(362);
      if (lookahead == 'Z') ADVANCE(360);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '\\') ADVANCE(318);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '^') ADVANCE(348);
      if (lookahead == '_') ADVANCE(325);
      if (lookahead == '`') ADVANCE(339);
      if (lookahead == 'm') ADVANCE(536);
      if (lookahead == 'r') ADVANCE(537);
      if (lookahead == 's') ADVANCE(538);
      if (lookahead == 'w') ADVANCE(539);
      if (lookahead == '{') ADVANCE(371);
      if (lookahead == '|') ADVANCE(422);
      if (lookahead == '}') ADVANCE(372);
      if (lookahead == '~') ADVANCE(328);
      if ((9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(347);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(368);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(358);
      if (lookahead == 'u' ||
          lookahead == 'v') ADVANCE(410);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r') ADVANCE(438);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(350);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(363);
      if (('h' <= lookahead && lookahead <= 't')) ADVANCE(535);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '%') ADVANCE(335);
      if (lookahead == '*') ADVANCE(321);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead == '_') ADVANCE(327);
      if (lookahead == '|') ADVANCE(421);
      if (lookahead == '~') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(443);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(565);
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '/') ADVANCE(376);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(409);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(347);
      if (lookahead == '[') ADVANCE(303);
      if (lookahead == '^') ADVANCE(348);
      if (lookahead == '_') ADVANCE(382);
      if (lookahead == 'a') ADVANCE(407);
      if (lookahead == 'd') ADVANCE(391);
      if (lookahead == 'm') ADVANCE(383);
      if (lookahead == 's') ADVANCE(408);
      if (lookahead == '|') ADVANCE(424);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 3:
      if (lookahead == ' ') ADVANCE(79);
      END_STATE();
    case 4:
      if (lookahead == ' ') ADVANCE(32);
      END_STATE();
    case 5:
      if (lookahead == '!') ADVANCE(469);
      END_STATE();
    case 6:
      if (lookahead == '!') ADVANCE(3);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(462);
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(485);
      if (lookahead == 'e') ADVANCE(256);
      if (lookahead == 'f') ADVANCE(14);
      if (lookahead == 'i') ADVANCE(224);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(482);
      if (lookahead == 'l') ADVANCE(291);
      if (lookahead == 'p') ADVANCE(17);
      if (lookahead == 'r') ADVANCE(128);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(491);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(493);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(495);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(497);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(486);
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(484);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(483);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(481);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(487);
      if (lookahead == 'f') ADVANCE(24);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(480);
      if (lookahead == 'p') ADVANCE(28);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(489);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(501);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(500);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(499);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(488);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(504);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(476);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(470);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(479);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(456);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(471);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(457);
      if (lookahead == 'x') ADVANCE(38);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(83);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(498);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(472);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(477);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(448);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(448);
      if (lookahead == '(') ADVANCE(46);
      if (lookahead == ')') ADVANCE(47);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(458);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(474);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(473);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(463);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(478);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(503);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(502);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(467);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(450);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(451);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(468);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(475);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(465);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(454);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(461);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(464);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(490);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(492);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(507);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(494);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(496);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(505);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(459);
      if (lookahead == 'x') ADVANCE(65);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(452);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(506);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(455);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(453);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(460);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(466);
      END_STATE();
    case 67:
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ',') ADVANCE(420);
      if (lookahead == '-') ADVANCE(323);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(347);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'K') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead == 'M') ADVANCE(414);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'Q') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(418);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'V') ADVANCE(102);
      if (lookahead == 'X') ADVANCE(361);
      if (lookahead == 'Z') ADVANCE(359);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == '^') ADVANCE(348);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == '{') ADVANCE(371);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(350);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == ':') ADVANCE(302);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(347);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'K') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead == 'M') ADVANCE(414);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'Q') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(418);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'V') ADVANCE(102);
      if (lookahead == 'X') ADVANCE(361);
      if (lookahead == 'Z') ADVANCE(359);
      if (lookahead == '[') ADVANCE(345);
      if (lookahead == '^') ADVANCE(348);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == '{') ADVANCE(371);
      if (lookahead == '|') ADVANCE(424);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(350);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(347);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'K') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead == 'M') ADVANCE(414);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'Q') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(418);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'V') ADVANCE(102);
      if (lookahead == 'X') ADVANCE(361);
      if (lookahead == 'Z') ADVANCE(359);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == '^') ADVANCE(348);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == '{') ADVANCE(371);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(350);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '(') ADVANCE(305);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead == '/') ADVANCE(366);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(347);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '^') ADVANCE(348);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == '`') ADVANCE(339);
      if (lookahead == '{') ADVANCE(371);
      if (lookahead == '}') ADVANCE(372);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(357);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(368);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(367);
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
          lookahead == '~') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(350);
      END_STATE();
    case 72:
      if (lookahead == '"') ADVANCE(373);
      if (lookahead == '(') ADVANCE(305);
      if (lookahead == '-') ADVANCE(343);
      if (lookahead == '/') ADVANCE(366);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(347);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == '^') ADVANCE(348);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == '`') ADVANCE(339);
      if (lookahead == '{') ADVANCE(371);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(357);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(368);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(340);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(367);
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
          lookahead == '~') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(350);
      END_STATE();
    case 73:
      if (lookahead == '(') ADVANCE(10);
      if (lookahead == ')') ADVANCE(11);
      END_STATE();
    case 74:
      if (lookahead == '(') ADVANCE(54);
      if (lookahead == ')') ADVANCE(55);
      END_STATE();
    case 75:
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      END_STATE();
    case 76:
      if (lookahead == '+') ADVANCE(5);
      if (lookahead == '0') ADVANCE(6);
      if (lookahead == '<') ADVANCE(73);
      if (lookahead == '>') ADVANCE(7);
      if (lookahead == 'D') ADVANCE(80);
      if (lookahead == 'a') ADVANCE(136);
      if (lookahead == 'b') ADVANCE(254);
      if (lookahead == 'c') ADVANCE(231);
      if (lookahead == 'd') ADVANCE(117);
      if (lookahead == 'e') ADVANCE(208);
      if (lookahead == 'f') ADVANCE(8);
      if (lookahead == 'i') ADVANCE(215);
      if (lookahead == 'l') ADVANCE(232);
      if (lookahead == 'm') ADVANCE(154);
      if (lookahead == 'o') ADVANCE(248);
      if (lookahead == 'p') ADVANCE(9);
      if (lookahead == 'r') ADVANCE(233);
      if (lookahead == 's') ADVANCE(152);
      if (lookahead == 't') ADVANCE(155);
      if (lookahead == 'u') ADVANCE(245);
      if (lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(115);
      END_STATE();
    case 78:
      if (lookahead == '-') ADVANCE(510);
      END_STATE();
    case 79:
      if (lookahead == '-') ADVANCE(4);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(113);
      END_STATE();
    case 81:
      if (lookahead == '.') ADVANCE(21);
      END_STATE();
    case 82:
      if (lookahead == '.') ADVANCE(22);
      END_STATE();
    case 83:
      if (lookahead == '5') ADVANCE(48);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(436);
      if (lookahead == '|') ADVANCE(434);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(512);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(513);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(514);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(515);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(516);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(517);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(518);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(519);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(520);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(533);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(522);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(523);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(524);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(530);
      END_STATE();
    case 99:
      if (lookahead == ':') ADVANCE(527);
      END_STATE();
    case 100:
      if (lookahead == ':') ADVANCE(528);
      END_STATE();
    case 101:
      if (lookahead == ':') ADVANCE(534);
      END_STATE();
    case 102:
      if (lookahead == ':') ADVANCE(542);
      END_STATE();
    case 103:
      if (lookahead == ':') ADVANCE(546);
      END_STATE();
    case 104:
      if (lookahead == ':') ADVANCE(531);
      END_STATE();
    case 105:
      if (lookahead == ':') ADVANCE(521);
      END_STATE();
    case 106:
      if (lookahead == ':') ADVANCE(526);
      END_STATE();
    case 107:
      if (lookahead == ':') ADVANCE(529);
      END_STATE();
    case 108:
      if (lookahead == ':') ADVANCE(543);
      END_STATE();
    case 109:
      if (lookahead == ':') ADVANCE(307);
      END_STATE();
    case 110:
      if (lookahead == ':') ADVANCE(307);
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
      if (lookahead == 'C') ADVANCE(81);
      if (lookahead == 'S') ADVANCE(82);
      END_STATE();
    case 114:
      if (lookahead == 'H') ADVANCE(77);
      if (('h' <= lookahead && lookahead <= 'w')) ADVANCE(535);
      END_STATE();
    case 115:
      if (lookahead == 'W') ADVANCE(540);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(279);
      END_STATE();
    case 117:
      if (lookahead == 'a') ADVANCE(137);
      if (lookahead == 'i') ADVANCE(209);
      if (lookahead == 'o') ADVANCE(298);
      END_STATE();
    case 118:
      if (lookahead == 'a') ADVANCE(272);
      END_STATE();
    case 119:
      if (lookahead == 'a') ADVANCE(132);
      END_STATE();
    case 120:
      if (lookahead == 'a') ADVANCE(250);
      END_STATE();
    case 121:
      if (lookahead == 'a') ADVANCE(275);
      END_STATE();
    case 122:
      if (lookahead == 'a') ADVANCE(251);
      if (lookahead == 'o') ADVANCE(146);
      END_STATE();
    case 123:
      if (lookahead == 'a') ADVANCE(287);
      END_STATE();
    case 124:
      if (lookahead == 'a') ADVANCE(23);
      END_STATE();
    case 125:
      if (lookahead == 'a') ADVANCE(44);
      END_STATE();
    case 126:
      if (lookahead == 'a') ADVANCE(50);
      END_STATE();
    case 127:
      if (lookahead == 'a') ADVANCE(66);
      END_STATE();
    case 128:
      if (lookahead == 'a') ADVANCE(199);
      END_STATE();
    case 129:
      if (lookahead == 'a') ADVANCE(276);
      END_STATE();
    case 130:
      if (lookahead == 'a') ADVANCE(289);
      END_STATE();
    case 131:
      if (lookahead == 'a') ADVANCE(277);
      END_STATE();
    case 132:
      if (lookahead == 'b') ADVANCE(138);
      END_STATE();
    case 133:
      if (lookahead == 'b') ADVANCE(234);
      if (lookahead == 'p') ADVANCE(177);
      END_STATE();
    case 134:
      if (lookahead == 'b') ADVANCE(35);
      END_STATE();
    case 135:
      if (lookahead == 'b') ADVANCE(241);
      END_STATE();
    case 136:
      if (lookahead == 'c') ADVANCE(139);
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 137:
      if (lookahead == 'c') ADVANCE(122);
      END_STATE();
    case 138:
      if (lookahead == 'c') ADVANCE(78);
      END_STATE();
    case 139:
      if (lookahead == 'c') ADVANCE(162);
      END_STATE();
    case 140:
      if (lookahead == 'c') ADVANCE(164);
      END_STATE();
    case 141:
      if (lookahead == 'd') ADVANCE(178);
      END_STATE();
    case 142:
      if (lookahead == 'd') ADVANCE(183);
      END_STATE();
    case 143:
      if (lookahead == 'd') ADVANCE(124);
      END_STATE();
    case 144:
      if (lookahead == 'd') ADVANCE(189);
      END_STATE();
    case 145:
      if (lookahead == 'd') ADVANCE(240);
      END_STATE();
    case 146:
      if (lookahead == 'd') ADVANCE(125);
      END_STATE();
    case 147:
      if (lookahead == 'd') ADVANCE(166);
      END_STATE();
    case 148:
      if (lookahead == 'd') ADVANCE(172);
      END_STATE();
    case 149:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 150:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 151:
      if (lookahead == 'd') ADVANCE(242);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'f') ADVANCE(301);
      if (lookahead == 'h') ADVANCE(235);
      if (lookahead == 'l') ADVANCE(190);
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(278);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(144);
      if (lookahead == 'f') ADVANCE(15);
      if (lookahead == 'o') ADVANCE(257);
      if (lookahead == 'p') ADVANCE(16);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(220);
      if (lookahead == 'h') ADVANCE(293);
      if (lookahead == 'r') ADVANCE(193);
      if (lookahead == 'u') ADVANCE(260);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(142);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(116);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(179);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(226);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(141);
      END_STATE();
    case 162:
      if (lookahead == 'e') ADVANCE(221);
      END_STATE();
    case 163:
      if (lookahead == 'e') ADVANCE(263);
      END_STATE();
    case 164:
      if (lookahead == 'e') ADVANCE(225);
      END_STATE();
    case 165:
      if (lookahead == 'e') ADVANCE(25);
      END_STATE();
    case 166:
      if (lookahead == 'e') ADVANCE(34);
      END_STATE();
    case 167:
      if (lookahead == 'e') ADVANCE(40);
      END_STATE();
    case 168:
      if (lookahead == 'e') ADVANCE(56);
      END_STATE();
    case 169:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 170:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 171:
      if (lookahead == 'e') ADVANCE(258);
      END_STATE();
    case 172:
      if (lookahead == 'e') ADVANCE(227);
      END_STATE();
    case 173:
      if (lookahead == 'e') ADVANCE(228);
      END_STATE();
    case 174:
      if (lookahead == 'e') ADVANCE(229);
      END_STATE();
    case 175:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 176:
      if (lookahead == 'e') ADVANCE(270);
      END_STATE();
    case 177:
      if (lookahead == 'e') ADVANCE(271);
      END_STATE();
    case 178:
      if (lookahead == 'f') ADVANCE(176);
      if (lookahead == 't') ADVANCE(295);
      END_STATE();
    case 179:
      if (lookahead == 'g') ADVANCE(180);
      END_STATE();
    case 180:
      if (lookahead == 'g') ADVANCE(195);
      END_STATE();
    case 181:
      if (lookahead == 'g') ADVANCE(222);
      END_STATE();
    case 182:
      if (lookahead == 'g') ADVANCE(247);
      END_STATE();
    case 183:
      if (lookahead == 'g') ADVANCE(167);
      END_STATE();
    case 184:
      if (lookahead == 'h') ADVANCE(118);
      END_STATE();
    case 185:
      if (lookahead == 'h') ADVANCE(261);
      END_STATE();
    case 186:
      if (lookahead == 'h') ADVANCE(42);
      END_STATE();
    case 187:
      if (lookahead == 'h') ADVANCE(267);
      END_STATE();
    case 188:
      if (lookahead == 'h') ADVANCE(269);
      END_STATE();
    case 189:
      if (lookahead == 'i') ADVANCE(294);
      END_STATE();
    case 190:
      if (lookahead == 'i') ADVANCE(147);
      END_STATE();
    case 191:
      if (lookahead == 'i') ADVANCE(274);
      END_STATE();
    case 192:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 193:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 194:
      if (lookahead == 'i') ADVANCE(201);
      END_STATE();
    case 195:
      if (lookahead == 'i') ADVANCE(239);
      END_STATE();
    case 196:
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 197:
      if (lookahead == 'l') ADVANCE(37);
      END_STATE();
    case 198:
      if (lookahead == 'l') ADVANCE(204);
      END_STATE();
    case 199:
      if (lookahead == 'l') ADVANCE(202);
      END_STATE();
    case 200:
      if (lookahead == 'l') ADVANCE(197);
      END_STATE();
    case 201:
      if (lookahead == 'l') ADVANCE(203);
      END_STATE();
    case 202:
      if (lookahead == 'l') ADVANCE(280);
      END_STATE();
    case 203:
      if (lookahead == 'l') ADVANCE(163);
      END_STATE();
    case 204:
      if (lookahead == 'l') ADVANCE(29);
      END_STATE();
    case 205:
      if (lookahead == 'l') ADVANCE(36);
      END_STATE();
    case 206:
      if (lookahead == 'l') ADVANCE(205);
      END_STATE();
    case 207:
      if (lookahead == 'm') ADVANCE(134);
      END_STATE();
    case 208:
      if (lookahead == 'm') ADVANCE(246);
      END_STATE();
    case 209:
      if (lookahead == 'm') ADVANCE(192);
      END_STATE();
    case 210:
      if (lookahead == 'm') ADVANCE(243);
      END_STATE();
    case 211:
      if (lookahead == 'm') ADVANCE(123);
      END_STATE();
    case 212:
      if (lookahead == 'm') ADVANCE(130);
      END_STATE();
    case 213:
      if (lookahead == 'm') ADVANCE(244);
      END_STATE();
    case 214:
      if (lookahead == 'm') ADVANCE(253);
      END_STATE();
    case 215:
      if (lookahead == 'n') ADVANCE(297);
      END_STATE();
    case 216:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 217:
      if (lookahead == 'n') ADVANCE(31);
      END_STATE();
    case 218:
      if (lookahead == 'n') ADVANCE(182);
      if (lookahead == 'w') ADVANCE(171);
      END_STATE();
    case 219:
      if (lookahead == 'n') ADVANCE(60);
      END_STATE();
    case 220:
      if (lookahead == 'n') ADVANCE(292);
      END_STATE();
    case 221:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 222:
      if (lookahead == 'n') ADVANCE(236);
      END_STATE();
    case 223:
      if (lookahead == 'n') ADVANCE(296);
      END_STATE();
    case 224:
      if (lookahead == 'n') ADVANCE(165);
      END_STATE();
    case 225:
      if (lookahead == 'n') ADVANCE(145);
      END_STATE();
    case 226:
      if (lookahead == 'n') ADVANCE(26);
      END_STATE();
    case 227:
      if (lookahead == 'n') ADVANCE(282);
      END_STATE();
    case 228:
      if (lookahead == 'n') ADVANCE(283);
      END_STATE();
    case 229:
      if (lookahead == 'n') ADVANCE(284);
      END_STATE();
    case 230:
      if (lookahead == 'n') ADVANCE(151);
      END_STATE();
    case 231:
      if (lookahead == 'o') ADVANCE(143);
      if (lookahead == 'r') ADVANCE(153);
      END_STATE();
    case 232:
      if (lookahead == 'o') ADVANCE(218);
      END_STATE();
    case 233:
      if (lookahead == 'o') ADVANCE(198);
      END_STATE();
    case 234:
      if (lookahead == 'o') ADVANCE(299);
      END_STATE();
    case 235:
      if (lookahead == 'o') ADVANCE(255);
      END_STATE();
    case 236:
      if (lookahead == 'o') ADVANCE(33);
      END_STATE();
    case 237:
      if (lookahead == 'o') ADVANCE(43);
      END_STATE();
    case 238:
      if (lookahead == 'o') ADVANCE(45);
      END_STATE();
    case 239:
      if (lookahead == 'o') ADVANCE(52);
      END_STATE();
    case 240:
      if (lookahead == 'o') ADVANCE(74);
      END_STATE();
    case 241:
      if (lookahead == 'o') ADVANCE(300);
      END_STATE();
    case 242:
      if (lookahead == 'o') ADVANCE(75);
      END_STATE();
    case 243:
      if (lookahead == 'o') ADVANCE(266);
      END_STATE();
    case 244:
      if (lookahead == 'o') ADVANCE(268);
      END_STATE();
    case 245:
      if (lookahead == 'p') ADVANCE(133);
      END_STATE();
    case 246:
      if (lookahead == 'p') ADVANCE(184);
      END_STATE();
    case 247:
      if (lookahead == 'p') ADVANCE(185);
      END_STATE();
    case 248:
      if (lookahead == 'p') ADVANCE(159);
      END_STATE();
    case 249:
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 250:
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 251:
      if (lookahead == 'p') ADVANCE(237);
      END_STATE();
    case 252:
      if (lookahead == 'p') ADVANCE(187);
      END_STATE();
    case 253:
      if (lookahead == 'p') ADVANCE(188);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(157);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(290);
      END_STATE();
    case 256:
      if (lookahead == 'r') ADVANCE(211);
      END_STATE();
    case 257:
      if (lookahead == 'r') ADVANCE(148);
      END_STATE();
    case 258:
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 259:
      if (lookahead == 'r') ADVANCE(285);
      END_STATE();
    case 260:
      if (lookahead == 'r') ADVANCE(217);
      END_STATE();
    case 261:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 262:
      if (lookahead == 'r') ADVANCE(219);
      END_STATE();
    case 263:
      if (lookahead == 'r') ADVANCE(63);
      END_STATE();
    case 264:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 265:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 266:
      if (lookahead == 'r') ADVANCE(149);
      END_STATE();
    case 267:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 268:
      if (lookahead == 'r') ADVANCE(150);
      END_STATE();
    case 269:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 270:
      if (lookahead == 'r') ADVANCE(212);
      END_STATE();
    case 271:
      if (lookahead == 'r') ADVANCE(213);
      END_STATE();
    case 272:
      if (lookahead == 's') ADVANCE(191);
      END_STATE();
    case 273:
      if (lookahead == 's') ADVANCE(27);
      END_STATE();
    case 274:
      if (lookahead == 's') ADVANCE(53);
      END_STATE();
    case 275:
      if (lookahead == 's') ADVANCE(168);
      END_STATE();
    case 276:
      if (lookahead == 's') ADVANCE(169);
      END_STATE();
    case 277:
      if (lookahead == 's') ADVANCE(170);
      END_STATE();
    case 278:
      if (lookahead == 's') ADVANCE(140);
      END_STATE();
    case 279:
      if (lookahead == 't') ADVANCE(186);
      END_STATE();
    case 280:
      if (lookahead == 't') ADVANCE(265);
      END_STATE();
    case 281:
      if (lookahead == 't') ADVANCE(41);
      END_STATE();
    case 282:
      if (lookahead == 't') ADVANCE(51);
      END_STATE();
    case 283:
      if (lookahead == 't') ADVANCE(61);
      END_STATE();
    case 284:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 285:
      if (lookahead == 't') ADVANCE(161);
      END_STATE();
    case 286:
      if (lookahead == 't') ADVANCE(264);
      END_STATE();
    case 287:
      if (lookahead == 't') ADVANCE(126);
      END_STATE();
    case 288:
      if (lookahead == 't') ADVANCE(238);
      END_STATE();
    case 289:
      if (lookahead == 't') ADVANCE(127);
      END_STATE();
    case 290:
      if (lookahead == 't') ADVANCE(252);
      END_STATE();
    case 291:
      if (lookahead == 'u') ADVANCE(273);
      END_STATE();
    case 292:
      if (lookahead == 'u') ADVANCE(288);
      END_STATE();
    case 293:
      if (lookahead == 'u') ADVANCE(207);
      END_STATE();
    case 294:
      if (lookahead == 'u') ADVANCE(214);
      END_STATE();
    case 295:
      if (lookahead == 'u') ADVANCE(262);
      END_STATE();
    case 296:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 297:
      if (lookahead == 'v') ADVANCE(160);
      END_STATE();
    case 298:
      if (lookahead == 'w') ADVANCE(216);
      END_STATE();
    case 299:
      if (lookahead == 'w') ADVANCE(39);
      END_STATE();
    case 300:
      if (lookahead == 'w') ADVANCE(49);
      END_STATE();
    case 301:
      if (lookahead == 'z') ADVANCE(20);
      END_STATE();
    case 302:
      if (lookahead == '|') ADVANCE(434);
      END_STATE();
    case 303:
      if (lookahead == '|') ADVANCE(430);
      END_STATE();
    case 304:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 305:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 306:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(111);
      END_STATE();
    case 307:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 308:
      if (eof) ADVANCE(313);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '%') ADVANCE(330);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(347);
      if (lookahead == 'A') ADVANCE(351);
      if (lookahead == 'B') ADVANCE(352);
      if (lookahead == 'C') ADVANCE(353);
      if (lookahead == 'D') ADVANCE(354);
      if (lookahead == 'F') ADVANCE(355);
      if (lookahead == 'G') ADVANCE(356);
      if (lookahead == 'H') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'K') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead == 'M') ADVANCE(414);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'Q') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(417);
      if (lookahead == 'T') ADVANCE(418);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'V') ADVANCE(102);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == 'X') ADVANCE(362);
      if (lookahead == 'Z') ADVANCE(360);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == ']') ADVANCE(346);
      if (lookahead == '^') ADVANCE(348);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == '{') ADVANCE(371);
      if (lookahead == '}') ADVANCE(372);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(410);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(419);
      END_STATE();
    case 309:
      if (eof) ADVANCE(313);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(347);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'K') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead == 'M') ADVANCE(414);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'Q') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(418);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'V') ADVANCE(102);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == 'X') ADVANCE(361);
      if (lookahead == 'Z') ADVANCE(359);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == '^') ADVANCE(348);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == '{') ADVANCE(371);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(410);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(350);
      END_STATE();
    case 310:
      if (eof) ADVANCE(313);
      if (lookahead == '\n') ADVANCE(316);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '%') ADVANCE(119);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(347);
      if (lookahead == 'A') ADVANCE(351);
      if (lookahead == 'B') ADVANCE(352);
      if (lookahead == 'C') ADVANCE(353);
      if (lookahead == 'D') ADVANCE(354);
      if (lookahead == 'F') ADVANCE(355);
      if (lookahead == 'G') ADVANCE(356);
      if (lookahead == 'H') ADVANCE(412);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'K') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead == 'M') ADVANCE(414);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(415);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'Q') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(417);
      if (lookahead == 'T') ADVANCE(418);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'V') ADVANCE(102);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == 'X') ADVANCE(362);
      if (lookahead == 'Z') ADVANCE(360);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == '^') ADVANCE(348);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == '{') ADVANCE(371);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(410);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(350);
      END_STATE();
    case 311:
      if (eof) ADVANCE(313);
      if (lookahead == '\n') ADVANCE(315);
      if (lookahead == '!') ADVANCE(286);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '%') ADVANCE(330);
      if (lookahead == '*') ADVANCE(321);
      if (lookahead == '.') ADVANCE(444);
      if (lookahead == ':') ADVANCE(84);
      if (lookahead == '=') ADVANCE(541);
      if (lookahead == 'A') ADVANCE(85);
      if (lookahead == 'B') ADVANCE(86);
      if (lookahead == 'C') ADVANCE(87);
      if (lookahead == 'D') ADVANCE(88);
      if (lookahead == 'F') ADVANCE(89);
      if (lookahead == 'G') ADVANCE(90);
      if (lookahead == 'H') ADVANCE(91);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'L') ADVANCE(94);
      if (lookahead == 'M') ADVANCE(95);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'O') ADVANCE(97);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'S') ADVANCE(100);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == 'Z') ADVANCE(104);
      if (lookahead == '[') ADVANCE(303);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == '|') ADVANCE(422);
      END_STATE();
    case 312:
      if (eof) ADVANCE(313);
      if (lookahead == '\n') ADVANCE(317);
      if (lookahead == '"') ADVANCE(374);
      if (lookahead == '%') ADVANCE(331);
      if (lookahead == '(') ADVANCE(341);
      if (lookahead == ')') ADVANCE(342);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(347);
      if (lookahead == 'I') ADVANCE(92);
      if (lookahead == 'K') ADVANCE(93);
      if (lookahead == 'L') ADVANCE(413);
      if (lookahead == 'M') ADVANCE(414);
      if (lookahead == 'N') ADVANCE(96);
      if (lookahead == 'P') ADVANCE(416);
      if (lookahead == 'Q') ADVANCE(98);
      if (lookahead == 'R') ADVANCE(99);
      if (lookahead == 'T') ADVANCE(418);
      if (lookahead == 'U') ADVANCE(101);
      if (lookahead == 'V') ADVANCE(102);
      if (lookahead == 'W') ADVANCE(103);
      if (lookahead == 'X') ADVANCE(361);
      if (lookahead == 'Z') ADVANCE(359);
      if (lookahead == '[') ADVANCE(344);
      if (lookahead == '^') ADVANCE(348);
      if (lookahead == '_') ADVANCE(349);
      if (lookahead == 'm') ADVANCE(105);
      if (lookahead == 'r') ADVANCE(106);
      if (lookahead == 's') ADVANCE(107);
      if (lookahead == 'w') ADVANCE(108);
      if (lookahead == '{') ADVANCE(371);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(358);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(410);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(350);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym__NEWLINE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym__NEWLINE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym__NEWLINE);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == ':') ADVANCE(544);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(436);
      if (lookahead == '|') ADVANCE(434);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_note_skip);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_note_skip);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_TILDE);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead == 'a') ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '%') ADVANCE(336);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(335);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '-') ADVANCE(511);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(335);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == 'b') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(335);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == 'c') ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(335);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(335);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym__MUSIC_CODE_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__music_content_token1);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(aux_sym_beam_token1);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(430);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(347);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(347);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(512);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(513);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(514);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(515);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(516);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(517);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == ':') ADVANCE(531);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == ':') ADVANCE(525);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(304);
      if (lookahead == '0') ADVANCE(364);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(365);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(365);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(304);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(367);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(368);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(369);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(370);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(377);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(552);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(306);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(379);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(381);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(394);
      if (lookahead == 'i') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(399);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(405);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(406);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(403);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(409);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(386);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(404);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == '-') ADVANCE(115);
      if (lookahead == ':') ADVANCE(518);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(518);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(533);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(522);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(524);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(508);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(528);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(532);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(aux_sym_nth_ending_number_token1);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_bar_line);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(432);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead == '|') ADVANCE(428);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(433);
      if (lookahead == ']') ADVANCE(427);
      if (lookahead == '|') ADVANCE(429);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ']') ADVANCE(426);
      if (lookahead == '|') ADVANCE(428);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token1);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(440);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(443);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == '%') ADVANCE(564);
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_parts_line);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(509);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(335);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(sym_area);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_book);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_composer);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_discography);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(sym_file);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_group);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_history);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(sym_macros);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(sym_meter);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(anon_sym_X_COLON);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(sym_remark);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(sym_rhythm_line);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(anon_sym_s_COLON);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(sym_tempo);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(sym_transcription);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_tune_title);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(sym_unit_note_length);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(anon_sym_U_COLON);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(521);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(526);
      END_STATE();
    case 538:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(529);
      END_STATE();
    case 539:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(543);
      END_STATE();
    case 540:
      ACCEPT_TOKEN(aux_sym_user_defined_token2);
      END_STATE();
    case 541:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 542:
      ACCEPT_TOKEN(sym_voice);
      END_STATE();
    case 543:
      ACCEPT_TOKEN(anon_sym_w_COLON);
      END_STATE();
    case 544:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    case 545:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 546:
      ACCEPT_TOKEN(sym_words_postbody);
      END_STATE();
    case 547:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(438);
      if (lookahead == '!') ADVANCE(562);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '|') ADVANCE(423);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(439);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(441);
      if (lookahead != 0) ADVANCE(564);
      END_STATE();
    case 548:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == '%') ADVANCE(564);
      if (lookahead == '.') ADVANCE(445);
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 549:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(567);
      if (lookahead == '%') ADVANCE(564);
      if (lookahead != 0) ADVANCE(549);
      END_STATE();
    case 550:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(562);
      if (lookahead == '"') ADVANCE(375);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead == ':') ADVANCE(556);
      if (lookahead == '[') ADVANCE(563);
      if (lookahead == '|') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 551:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(449);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 552:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '"') ADVANCE(378);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(552);
      END_STATE();
    case 553:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '*') ADVANCE(322);
      if (lookahead == '+') ADVANCE(557);
      if (lookahead == '-') ADVANCE(324);
      if (lookahead == '_') ADVANCE(326);
      if (lookahead == '|') ADVANCE(425);
      if (lookahead == '~') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(442);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(442);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 554:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '+') ADVANCE(557);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 555:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '.') ADVANCE(446);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 556:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == ':') ADVANCE(437);
      if (lookahead == '|') ADVANCE(435);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 557:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == ':') ADVANCE(545);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 558:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'i') ADVANCE(560);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 559:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(551);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 560:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(559);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 561:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(558);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 562:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(561);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 563:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '|') ADVANCE(431);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 564:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(564);
      END_STATE();
    case 565:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 566:
      ACCEPT_TOKEN(aux_sym_file_header_info_line_token1);
      if (lookahead == '.') ADVANCE(447);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    case 567:
      ACCEPT_TOKEN(aux_sym_file_header_info_line_token1);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(567);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 308},
  [2] = {.lex_state = 309},
  [3] = {.lex_state = 309},
  [4] = {.lex_state = 67},
  [5] = {.lex_state = 310},
  [6] = {.lex_state = 310},
  [7] = {.lex_state = 310},
  [8] = {.lex_state = 68},
  [9] = {.lex_state = 68},
  [10] = {.lex_state = 68},
  [11] = {.lex_state = 68},
  [12] = {.lex_state = 68},
  [13] = {.lex_state = 308},
  [14] = {.lex_state = 312},
  [15] = {.lex_state = 312},
  [16] = {.lex_state = 310},
  [17] = {.lex_state = 312},
  [18] = {.lex_state = 312},
  [19] = {.lex_state = 312},
  [20] = {.lex_state = 310},
  [21] = {.lex_state = 312},
  [22] = {.lex_state = 309},
  [23] = {.lex_state = 309},
  [24] = {.lex_state = 309},
  [25] = {.lex_state = 309},
  [26] = {.lex_state = 69},
  [27] = {.lex_state = 67},
  [28] = {.lex_state = 67},
  [29] = {.lex_state = 67},
  [30] = {.lex_state = 310},
  [31] = {.lex_state = 311},
  [32] = {.lex_state = 311},
  [33] = {.lex_state = 311},
  [34] = {.lex_state = 311},
  [35] = {.lex_state = 311},
  [36] = {.lex_state = 71},
  [37] = {.lex_state = 72},
  [38] = {.lex_state = 72},
  [39] = {.lex_state = 71},
  [40] = {.lex_state = 72},
  [41] = {.lex_state = 550},
  [42] = {.lex_state = 550},
  [43] = {.lex_state = 311},
  [44] = {.lex_state = 67},
  [45] = {.lex_state = 71},
  [46] = {.lex_state = 67},
  [47] = {.lex_state = 71},
  [48] = {.lex_state = 67},
  [49] = {.lex_state = 71},
  [50] = {.lex_state = 67},
  [51] = {.lex_state = 71},
  [52] = {.lex_state = 71},
  [53] = {.lex_state = 71},
  [54] = {.lex_state = 71},
  [55] = {.lex_state = 71},
  [56] = {.lex_state = 71},
  [57] = {.lex_state = 72},
  [58] = {.lex_state = 547},
  [59] = {.lex_state = 72},
  [60] = {.lex_state = 547},
  [61] = {.lex_state = 553},
  [62] = {.lex_state = 71},
  [63] = {.lex_state = 72},
  [64] = {.lex_state = 72},
  [65] = {.lex_state = 72},
  [66] = {.lex_state = 553},
  [67] = {.lex_state = 308},
  [68] = {.lex_state = 308},
  [69] = {.lex_state = 308},
  [70] = {.lex_state = 308},
  [71] = {.lex_state = 308},
  [72] = {.lex_state = 308},
  [73] = {.lex_state = 71},
  [74] = {.lex_state = 308},
  [75] = {.lex_state = 308},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 308},
  [78] = {.lex_state = 308},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 308},
  [81] = {.lex_state = 308},
  [82] = {.lex_state = 308},
  [83] = {.lex_state = 308},
  [84] = {.lex_state = 71},
  [85] = {.lex_state = 550},
  [86] = {.lex_state = 550},
  [87] = {.lex_state = 308},
  [88] = {.lex_state = 550},
  [89] = {.lex_state = 308},
  [90] = {.lex_state = 308},
  [91] = {.lex_state = 308},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 308},
  [94] = {.lex_state = 550},
  [95] = {.lex_state = 550},
  [96] = {.lex_state = 308},
  [97] = {.lex_state = 308},
  [98] = {.lex_state = 308},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 550},
  [101] = {.lex_state = 550},
  [102] = {.lex_state = 550},
  [103] = {.lex_state = 550},
  [104] = {.lex_state = 72},
  [105] = {.lex_state = 550},
  [106] = {.lex_state = 71},
  [107] = {.lex_state = 72},
  [108] = {.lex_state = 72},
  [109] = {.lex_state = 71},
  [110] = {.lex_state = 72},
  [111] = {.lex_state = 72},
  [112] = {.lex_state = 71},
  [113] = {.lex_state = 71},
  [114] = {.lex_state = 71},
  [115] = {.lex_state = 71},
  [116] = {.lex_state = 72},
  [117] = {.lex_state = 72},
  [118] = {.lex_state = 72},
  [119] = {.lex_state = 71},
  [120] = {.lex_state = 71},
  [121] = {.lex_state = 71},
  [122] = {.lex_state = 72},
  [123] = {.lex_state = 72},
  [124] = {.lex_state = 72},
  [125] = {.lex_state = 72},
  [126] = {.lex_state = 71},
  [127] = {.lex_state = 71},
  [128] = {.lex_state = 71},
  [129] = {.lex_state = 71},
  [130] = {.lex_state = 71},
  [131] = {.lex_state = 72},
  [132] = {.lex_state = 71},
  [133] = {.lex_state = 72},
  [134] = {.lex_state = 72},
  [135] = {.lex_state = 71},
  [136] = {.lex_state = 72},
  [137] = {.lex_state = 72},
  [138] = {.lex_state = 72},
  [139] = {.lex_state = 71},
  [140] = {.lex_state = 72},
  [141] = {.lex_state = 72},
  [142] = {.lex_state = 72},
  [143] = {.lex_state = 72},
  [144] = {.lex_state = 72},
  [145] = {.lex_state = 71},
  [146] = {.lex_state = 308},
  [147] = {.lex_state = 71},
  [148] = {.lex_state = 71},
  [149] = {.lex_state = 71},
  [150] = {.lex_state = 308},
  [151] = {.lex_state = 553},
  [152] = {.lex_state = 553},
  [153] = {.lex_state = 308},
  [154] = {.lex_state = 308},
  [155] = {.lex_state = 308},
  [156] = {.lex_state = 553},
  [157] = {.lex_state = 553},
  [158] = {.lex_state = 1},
  [159] = {.lex_state = 1},
  [160] = {.lex_state = 308},
  [161] = {.lex_state = 308},
  [162] = {.lex_state = 308},
  [163] = {.lex_state = 71},
  [164] = {.lex_state = 308},
  [165] = {.lex_state = 308},
  [166] = {.lex_state = 1},
  [167] = {.lex_state = 1},
  [168] = {.lex_state = 308},
  [169] = {.lex_state = 308},
  [170] = {.lex_state = 308},
  [171] = {.lex_state = 308},
  [172] = {.lex_state = 308},
  [173] = {.lex_state = 308},
  [174] = {.lex_state = 308},
  [175] = {.lex_state = 308},
  [176] = {.lex_state = 311},
  [177] = {.lex_state = 308},
  [178] = {.lex_state = 308},
  [179] = {.lex_state = 308},
  [180] = {.lex_state = 308},
  [181] = {.lex_state = 308},
  [182] = {.lex_state = 308},
  [183] = {.lex_state = 308},
  [184] = {.lex_state = 308},
  [185] = {.lex_state = 311},
  [186] = {.lex_state = 308},
  [187] = {.lex_state = 2},
  [188] = {.lex_state = 311},
  [189] = {.lex_state = 308},
  [190] = {.lex_state = 308},
  [191] = {.lex_state = 308},
  [192] = {.lex_state = 2},
  [193] = {.lex_state = 2},
  [194] = {.lex_state = 548},
  [195] = {.lex_state = 548},
  [196] = {.lex_state = 548},
  [197] = {.lex_state = 308},
  [198] = {.lex_state = 308},
  [199] = {.lex_state = 311},
  [200] = {.lex_state = 311},
  [201] = {.lex_state = 548},
  [202] = {.lex_state = 311},
  [203] = {.lex_state = 2},
  [204] = {.lex_state = 555},
  [205] = {.lex_state = 566},
  [206] = {.lex_state = 566},
  [207] = {.lex_state = 311},
  [208] = {.lex_state = 566},
  [209] = {.lex_state = 509},
  [210] = {.lex_state = 509},
  [211] = {.lex_state = 2},
  [212] = {.lex_state = 555},
  [213] = {.lex_state = 554},
  [214] = {.lex_state = 554},
  [215] = {.lex_state = 554},
  [216] = {.lex_state = 555},
  [217] = {.lex_state = 2},
  [218] = {.lex_state = 311},
  [219] = {.lex_state = 311},
  [220] = {.lex_state = 1},
  [221] = {.lex_state = 549},
  [222] = {.lex_state = 311},
  [223] = {.lex_state = 549},
  [224] = {.lex_state = 555},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 1},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 114},
  [229] = {.lex_state = 1},
  [230] = {.lex_state = 1},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 114},
  [235] = {.lex_state = 71},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 311},
  [238] = {.lex_state = 311},
  [239] = {.lex_state = 566},
  [240] = {.lex_state = 549},
  [241] = {.lex_state = 1},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 114},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 309},
  [255] = {.lex_state = 564},
  [256] = {.lex_state = 2},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 0},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 68},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 0},
  [266] = {.lex_state = 564},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 0},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 308},
  [273] = {.lex_state = 308},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 0},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 308},
  [279] = {.lex_state = 0},
  [280] = {.lex_state = 0},
  [281] = {.lex_state = 567},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 0},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 311},
  [287] = {.lex_state = 0},
  [288] = {.lex_state = 0},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 0},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 67},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 0},
  [297] = {.lex_state = 311},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 0},
  [304] = {.lex_state = 0},
  [305] = {.lex_state = 567},
  [306] = {.lex_state = 564},
  [307] = {.lex_state = 567},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 308},
  [310] = {.lex_state = 311},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 67},
  [313] = {.lex_state = 564},
  [314] = {.lex_state = 308},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 68},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 311},
  [324] = {.lex_state = 71},
  [325] = {.lex_state = 311},
  [326] = {.lex_state = 71},
  [327] = {.lex_state = 311},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 308},
  [331] = {.lex_state = 308},
  [332] = {.lex_state = 308},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 311},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 311},
  [339] = {.lex_state = 309},
  [340] = {.lex_state = 308},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 71},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 308},
  [345] = {.lex_state = 564},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 311},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 71},
  [351] = {.lex_state = 0},
  [352] = {.lex_state = 0},
  [353] = {.lex_state = 0},
  [354] = {.lex_state = 0},
  [355] = {.lex_state = 0},
  [356] = {.lex_state = 0},
  [357] = {.lex_state = 0},
  [358] = {.lex_state = 0},
  [359] = {.lex_state = 0},
  [360] = {.lex_state = 0},
  [361] = {.lex_state = 0},
  [362] = {.lex_state = 0},
  [363] = {.lex_state = 0},
  [364] = {.lex_state = 0},
  [365] = {.lex_state = 0},
  [366] = {.lex_state = 0},
  [367] = {.lex_state = 0},
  [368] = {.lex_state = 0},
  [369] = {.lex_state = 0},
  [370] = {.lex_state = 0},
  [371] = {.lex_state = 0},
  [372] = {.lex_state = 0},
  [373] = {.lex_state = 0},
  [374] = {.lex_state = 0},
  [375] = {.lex_state = 0},
  [376] = {.lex_state = 0},
  [377] = {.lex_state = 0},
  [378] = {.lex_state = 0},
  [379] = {.lex_state = 0},
  [380] = {.lex_state = 0},
  [381] = {.lex_state = 0},
  [382] = {.lex_state = 0},
  [383] = {.lex_state = 0},
  [384] = {.lex_state = 0},
  [385] = {.lex_state = 0},
  [386] = {.lex_state = 0},
  [387] = {.lex_state = 0},
  [388] = {.lex_state = 0},
  [389] = {.lex_state = 0},
  [390] = {.lex_state = 0},
  [391] = {.lex_state = 0},
  [392] = {.lex_state = 0},
  [393] = {.lex_state = 0},
  [394] = {.lex_state = 0},
  [395] = {.lex_state = 0},
  [396] = {.lex_state = 0},
  [397] = {.lex_state = 0},
  [398] = {.lex_state = 0},
  [399] = {.lex_state = 0},
  [400] = {.lex_state = 0},
  [401] = {.lex_state = 0},
  [402] = {.lex_state = 0},
  [403] = {.lex_state = 0},
  [404] = {.lex_state = 0},
  [405] = {.lex_state = 0},
  [406] = {.lex_state = 0},
  [407] = {.lex_state = 0},
  [408] = {.lex_state = 0},
  [409] = {.lex_state = 0},
  [410] = {.lex_state = 0},
  [411] = {.lex_state = 0},
  [412] = {.lex_state = 0},
  [413] = {.lex_state = 0},
  [414] = {.lex_state = 0},
  [415] = {.lex_state = 0},
  [416] = {.lex_state = 0},
  [417] = {.lex_state = 0},
  [418] = {.lex_state = 0},
  [419] = {.lex_state = 0},
  [420] = {.lex_state = 0},
  [421] = {.lex_state = 0},
  [422] = {.lex_state = 0},
  [423] = {.lex_state = 0},
  [424] = {.lex_state = 0},
  [425] = {.lex_state = 0},
  [426] = {.lex_state = 0},
  [427] = {.lex_state = 0},
  [428] = {.lex_state = 0},
  [429] = {.lex_state = 0},
  [430] = {.lex_state = 0},
  [431] = {.lex_state = 0},
  [432] = {.lex_state = 0},
  [433] = {.lex_state = 0},
  [434] = {.lex_state = 0},
  [435] = {.lex_state = 0},
  [436] = {.lex_state = 0},
  [437] = {.lex_state = 0},
  [438] = {.lex_state = 0},
  [439] = {.lex_state = 0},
  [440] = {.lex_state = 0},
  [441] = {.lex_state = 0},
  [442] = {.lex_state = 0},
  [443] = {.lex_state = 0},
  [444] = {.lex_state = 0},
  [445] = {.lex_state = 0},
  [446] = {.lex_state = 0},
  [447] = {.lex_state = 0},
  [448] = {.lex_state = 0},
  [449] = {.lex_state = 0},
  [450] = {.lex_state = 0},
  [451] = {.lex_state = 0},
  [452] = {.lex_state = 0},
  [453] = {.lex_state = 0},
  [454] = {.lex_state = 0},
  [455] = {.lex_state = 0},
  [456] = {.lex_state = 0},
  [457] = {.lex_state = 0},
  [458] = {.lex_state = 0},
  [459] = {.lex_state = 0},
  [460] = {.lex_state = 0},
  [461] = {.lex_state = 0},
  [462] = {.lex_state = 0},
  [463] = {.lex_state = 0},
  [464] = {.lex_state = 0},
  [465] = {.lex_state = 0},
  [466] = {.lex_state = 0},
  [467] = {.lex_state = 0},
  [468] = {.lex_state = 0},
  [469] = {.lex_state = 0},
  [470] = {.lex_state = 0},
  [471] = {.lex_state = 0},
  [472] = {.lex_state = 0},
  [473] = {.lex_state = 0},
  [474] = {.lex_state = 0},
  [475] = {.lex_state = 0},
  [476] = {.lex_state = 0},
  [477] = {.lex_state = 0},
  [478] = {.lex_state = 0},
  [479] = {.lex_state = 0},
  [480] = {.lex_state = 0},
  [481] = {.lex_state = 0},
  [482] = {.lex_state = 0},
  [483] = {.lex_state = 0},
  [484] = {.lex_state = 0},
  [485] = {.lex_state = 0},
  [486] = {.lex_state = 0},
  [487] = {.lex_state = 0},
  [488] = {.lex_state = 0},
  [489] = {.lex_state = 0},
  [490] = {.lex_state = 0},
  [491] = {.lex_state = 0},
  [492] = {.lex_state = 0},
  [493] = {.lex_state = 0},
  [494] = {.lex_state = 0},
  [495] = {.lex_state = 0},
  [496] = {.lex_state = 0},
  [497] = {.lex_state = 0},
  [498] = {.lex_state = 0},
  [499] = {.lex_state = 0},
  [500] = {.lex_state = 0},
  [501] = {.lex_state = 0},
  [502] = {.lex_state = 0},
  [503] = {.lex_state = 0},
  [504] = {.lex_state = 0},
  [505] = {.lex_state = 0},
  [506] = {.lex_state = 0},
  [507] = {.lex_state = 0},
  [508] = {.lex_state = 0},
  [509] = {.lex_state = 0},
  [510] = {.lex_state = 0},
  [511] = {.lex_state = 0},
  [512] = {.lex_state = 0},
  [513] = {.lex_state = 0},
  [514] = {.lex_state = 0},
  [515] = {.lex_state = 0},
  [516] = {.lex_state = 0},
  [517] = {.lex_state = 0},
  [518] = {.lex_state = 0},
  [519] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__space] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_note_skip] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_UNDERSCORE] = ACTIONS(1),
    [sym_TILDE] = ACTIONS(1),
    [sym_COMMENTLINE] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
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
    [sym_source_file] = STATE(246),
    [sym_stylesheet_directives] = STATE(31),
    [sym_file_structure] = STATE(337),
    [sym_file_header] = STATE(16),
    [sym_tune] = STATE(200),
    [sym_tune_header] = STATE(13),
    [sym_abc_version] = STATE(221),
    [sym_reference_number] = STATE(345),
    [sym_symbol_line] = STATE(345),
    [sym_user_defined] = STATE(221),
    [sym_tune_header_info_line] = STATE(6),
    [sym_file_header_info_line] = STATE(31),
    [aux_sym_file_header_repeat1] = STATE(31),
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
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 30,
    ACTIONS(15), 1,
      anon_sym_s_COLON,
    ACTIONS(21), 1,
      sym__NEWLINE,
    ACTIONS(23), 1,
      sym_COMMENTLINE,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(27), 1,
      aux_sym__music_content_token1,
    ACTIONS(29), 1,
      sym_slur_open,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(45), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(47), 1,
      sym_tuplet_marker,
    ACTIONS(49), 1,
      sym_decoration_shorthand,
    ACTIONS(53), 1,
      anon_sym_U_COLON,
    ACTIONS(55), 1,
      anon_sym_w_COLON,
    STATE(29), 1,
      sym_nth_ending_number,
    STATE(73), 1,
      sym__pitch,
    STATE(106), 1,
      sym_note,
    STATE(155), 1,
      sym_chord_symbol,
    STATE(178), 1,
      sym_decoration,
    ACTIONS(19), 2,
      ts_builtin_sym_end,
      sym_words_postbody,
    ACTIONS(31), 2,
      sym_slur_close,
      sym_annotation,
    ACTIONS(41), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(62), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(36), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(255), 3,
      sym_symbol_line,
      sym_user_defined,
      sym_words_line,
    STATE(3), 4,
      sym_stylesheet_directives,
      sym__MUSIC_CODE,
      sym_body_info_line,
      aux_sym_tune_body_repeat1,
    STATE(21), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(51), 12,
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      sym_voice,
  [116] = 30,
    ACTIONS(59), 1,
      sym__NEWLINE,
    ACTIONS(61), 1,
      sym_COMMENTLINE,
    ACTIONS(64), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(67), 1,
      aux_sym__music_content_token1,
    ACTIONS(70), 1,
      sym_slur_open,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(79), 1,
      sym_alteration,
    ACTIONS(82), 1,
      sym_note_letter,
    ACTIONS(85), 1,
      sym_rest,
    ACTIONS(91), 1,
      aux_sym_grace_note_token1,
    ACTIONS(94), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(97), 1,
      sym_tuplet_marker,
    ACTIONS(100), 1,
      sym_decoration_shorthand,
    ACTIONS(106), 1,
      anon_sym_s_COLON,
    ACTIONS(109), 1,
      anon_sym_U_COLON,
    ACTIONS(112), 1,
      anon_sym_w_COLON,
    STATE(29), 1,
      sym_nth_ending_number,
    STATE(73), 1,
      sym__pitch,
    STATE(106), 1,
      sym_note,
    STATE(155), 1,
      sym_chord_symbol,
    STATE(178), 1,
      sym_decoration,
    ACTIONS(57), 2,
      ts_builtin_sym_end,
      sym_words_postbody,
    ACTIONS(73), 2,
      sym_slur_close,
      sym_annotation,
    ACTIONS(88), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(62), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(36), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(255), 3,
      sym_symbol_line,
      sym_user_defined,
      sym_words_line,
    STATE(3), 4,
      sym_stylesheet_directives,
      sym__MUSIC_CODE,
      sym_body_info_line,
      aux_sym_tune_body_repeat1,
    STATE(21), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(103), 12,
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      sym_voice,
  [232] = 28,
    ACTIONS(15), 1,
      anon_sym_s_COLON,
    ACTIONS(25), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(29), 1,
      sym_slur_open,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(45), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(47), 1,
      sym_tuplet_marker,
    ACTIONS(49), 1,
      sym_decoration_shorthand,
    ACTIONS(53), 1,
      anon_sym_U_COLON,
    ACTIONS(55), 1,
      anon_sym_w_COLON,
    ACTIONS(115), 1,
      sym_COMMENTLINE,
    ACTIONS(117), 1,
      aux_sym__music_content_token1,
    STATE(29), 1,
      sym_nth_ending_number,
    STATE(73), 1,
      sym__pitch,
    STATE(106), 1,
      sym_note,
    STATE(155), 1,
      sym_chord_symbol,
    STATE(178), 1,
      sym_decoration,
    ACTIONS(31), 2,
      sym_slur_close,
      sym_annotation,
    ACTIONS(41), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(62), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(36), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(255), 3,
      sym_symbol_line,
      sym_user_defined,
      sym_words_line,
    STATE(2), 4,
      sym_stylesheet_directives,
      sym__MUSIC_CODE,
      sym_body_info_line,
      aux_sym_tune_body_repeat1,
    STATE(21), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(51), 12,
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      sym_voice,
  [341] = 9,
    ACTIONS(126), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(129), 1,
      anon_sym_X_COLON,
    ACTIONS(132), 1,
      anon_sym_s_COLON,
    ACTIONS(135), 1,
      anon_sym_U_COLON,
    STATE(5), 2,
      sym_tune_header_info_line,
      aux_sym_tune_header_repeat1,
    STATE(345), 4,
      sym_abc_version,
      sym_reference_number,
      sym_symbol_line,
      sym_user_defined,
    ACTIONS(119), 8,
      ts_builtin_sym_end,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
    ACTIONS(121), 8,
      sym__NEWLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      sym_note_letter,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(123), 23,
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
  [409] = 9,
    ACTIONS(13), 1,
      anon_sym_X_COLON,
    ACTIONS(15), 1,
      anon_sym_s_COLON,
    ACTIONS(53), 1,
      anon_sym_U_COLON,
    ACTIONS(142), 1,
      anon_sym_PERCENTabc_DASH,
    STATE(5), 2,
      sym_tune_header_info_line,
      aux_sym_tune_header_repeat1,
    STATE(345), 4,
      sym_abc_version,
      sym_reference_number,
      sym_symbol_line,
      sym_user_defined,
    ACTIONS(140), 8,
      sym__NEWLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      sym_note_letter,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(138), 9,
      ts_builtin_sym_end,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_words_postbody,
    ACTIONS(7), 22,
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
  [477] = 2,
    ACTIONS(146), 8,
      sym__NEWLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      sym_note_letter,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(144), 35,
      ts_builtin_sym_end,
      sym_slur_close,
      anon_sym_LBRACK,
      sym_alteration,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
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
  [525] = 2,
    ACTIONS(148), 7,
      sym_COMMENTLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(150), 30,
      anon_sym_PERCENT_PERCENT,
      aux_sym__MUSIC_CODE_token1,
      sym_slur_close,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
  [567] = 2,
    ACTIONS(152), 7,
      sym_COMMENTLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(154), 30,
      anon_sym_PERCENT_PERCENT,
      aux_sym__MUSIC_CODE_token1,
      sym_slur_close,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
  [609] = 2,
    ACTIONS(156), 7,
      sym_COMMENTLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(158), 30,
      anon_sym_PERCENT_PERCENT,
      aux_sym__MUSIC_CODE_token1,
      sym_slur_close,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
  [651] = 2,
    ACTIONS(160), 7,
      sym_COMMENTLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(162), 30,
      anon_sym_PERCENT_PERCENT,
      aux_sym__MUSIC_CODE_token1,
      sym_slur_close,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
  [693] = 2,
    ACTIONS(164), 7,
      sym_COMMENTLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(166), 30,
      anon_sym_PERCENT_PERCENT,
      aux_sym__MUSIC_CODE_token1,
      sym_slur_close,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
  [735] = 27,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(45), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(47), 1,
      sym_tuplet_marker,
    ACTIONS(168), 1,
      ts_builtin_sym_end,
    ACTIONS(170), 1,
      sym__NEWLINE,
    ACTIONS(172), 1,
      aux_sym__music_content_token1,
    ACTIONS(174), 1,
      sym_slur_open,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(182), 1,
      sym_words_postbody,
    STATE(4), 1,
      sym__MUSIC_CODE,
    STATE(28), 1,
      sym_nth_ending_number,
    STATE(73), 1,
      sym__pitch,
    STATE(106), 1,
      sym_note,
    STATE(155), 1,
      sym_chord_symbol,
    STATE(176), 1,
      sym_tune_body,
    STATE(178), 1,
      sym_decoration,
    STATE(238), 1,
      sym_lyric_section,
    ACTIONS(176), 2,
      sym_slur_close,
      sym_annotation,
    ACTIONS(178), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(62), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(188), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    STATE(39), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(26), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
  [826] = 2,
    ACTIONS(152), 7,
      sym__NEWLINE,
      sym_COMMENTLINE,
      aux_sym__MUSIC_CODE_token1,
      aux_sym__music_content_token1,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(154), 28,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
      sym_words_postbody,
  [866] = 2,
    ACTIONS(156), 7,
      sym__NEWLINE,
      sym_COMMENTLINE,
      aux_sym__MUSIC_CODE_token1,
      aux_sym__music_content_token1,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(158), 28,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
      sym_words_postbody,
  [906] = 9,
    ACTIONS(13), 1,
      anon_sym_X_COLON,
    ACTIONS(15), 1,
      anon_sym_s_COLON,
    ACTIONS(53), 1,
      anon_sym_U_COLON,
    ACTIONS(142), 1,
      anon_sym_PERCENTabc_DASH,
    STATE(13), 1,
      sym_tune_header,
    STATE(199), 1,
      sym_tune,
    STATE(6), 2,
      sym_tune_header_info_line,
      aux_sym_tune_header_repeat1,
    STATE(345), 4,
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
  [960] = 2,
    ACTIONS(148), 7,
      sym__NEWLINE,
      sym_COMMENTLINE,
      aux_sym__MUSIC_CODE_token1,
      aux_sym__music_content_token1,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(150), 28,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
      sym_words_postbody,
  [1000] = 2,
    ACTIONS(160), 7,
      sym__NEWLINE,
      sym_COMMENTLINE,
      aux_sym__MUSIC_CODE_token1,
      aux_sym__music_content_token1,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(162), 28,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
      sym_words_postbody,
  [1040] = 2,
    ACTIONS(164), 7,
      sym__NEWLINE,
      sym_COMMENTLINE,
      aux_sym__MUSIC_CODE_token1,
      aux_sym__music_content_token1,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(166), 28,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
      sym_words_postbody,
  [1080] = 9,
    ACTIONS(13), 1,
      anon_sym_X_COLON,
    ACTIONS(15), 1,
      anon_sym_s_COLON,
    ACTIONS(53), 1,
      anon_sym_U_COLON,
    ACTIONS(142), 1,
      anon_sym_PERCENTabc_DASH,
    STATE(13), 1,
      sym_tune_header,
    STATE(222), 1,
      sym_tune,
    STATE(6), 2,
      sym_tune_header_info_line,
      aux_sym_tune_header_repeat1,
    STATE(345), 4,
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
  [1134] = 3,
    ACTIONS(188), 1,
      aux_sym__MUSIC_CODE_token1,
    ACTIONS(186), 6,
      sym__NEWLINE,
      sym_COMMENTLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(184), 28,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
      sym_words_postbody,
  [1176] = 2,
    ACTIONS(192), 6,
      sym__NEWLINE,
      sym_COMMENTLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(190), 28,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
      sym_words_postbody,
  [1215] = 2,
    ACTIONS(196), 6,
      sym__NEWLINE,
      sym_COMMENTLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(194), 28,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
      sym_words_postbody,
  [1254] = 2,
    ACTIONS(200), 6,
      sym__NEWLINE,
      sym_COMMENTLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(198), 28,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
      sym_words_postbody,
  [1293] = 2,
    ACTIONS(204), 6,
      sym__NEWLINE,
      sym_COMMENTLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(202), 28,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
      sym_words_postbody,
  [1332] = 3,
    ACTIONS(206), 1,
      aux_sym__MUSIC_CODE_token1,
    ACTIONS(186), 5,
      sym_COMMENTLINE,
      aux_sym__music_content_token1,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(184), 26,
      anon_sym_PERCENT_PERCENT,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
  [1371] = 2,
    ACTIONS(200), 4,
      sym_COMMENTLINE,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
    ACTIONS(198), 27,
      anon_sym_PERCENT_PERCENT,
      aux_sym__music_content_token1,
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
      sym_parts_line,
      sym_instruction,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      anon_sym_s_COLON,
      sym_tempo,
      sym_tune_title,
      sym_unit_note_length,
      anon_sym_U_COLON,
      sym_voice,
      anon_sym_w_COLON,
  [1407] = 20,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(45), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(47), 1,
      sym_tuplet_marker,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(208), 1,
      aux_sym__music_content_token1,
    ACTIONS(210), 1,
      sym_slur_open,
    STATE(28), 1,
      sym_nth_ending_number,
    STATE(73), 1,
      sym__pitch,
    STATE(106), 1,
      sym_note,
    STATE(155), 1,
      sym_chord_symbol,
    STATE(178), 1,
      sym_decoration,
    ACTIONS(178), 2,
      anon_sym_Z,
      anon_sym_X,
    ACTIONS(212), 2,
      sym_slur_close,
      sym_annotation,
    STATE(62), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(39), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(192), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
  [1476] = 20,
    ACTIONS(33), 1,
      anon_sym_LBRACK,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(45), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(47), 1,
      sym_tuplet_marker,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(208), 1,
      aux_sym__music_content_token1,
    ACTIONS(214), 1,
      sym_slur_open,
    STATE(28), 1,
      sym_nth_ending_number,
    STATE(73), 1,
      sym__pitch,
    STATE(106), 1,
      sym_note,
    STATE(155), 1,
      sym_chord_symbol,
    STATE(178), 1,
      sym_decoration,
    ACTIONS(178), 2,
      anon_sym_Z,
      anon_sym_X,
    ACTIONS(216), 2,
      sym_slur_close,
      sym_annotation,
    STATE(62), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(39), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(187), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
  [1545] = 1,
    ACTIONS(218), 27,
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
  [1575] = 8,
    ACTIONS(5), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(220), 1,
      sym__NEWLINE,
    ACTIONS(222), 1,
      sym_COMMENTLINE,
    ACTIONS(224), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(228), 1,
      anon_sym_U_COLON,
    STATE(281), 2,
      sym_abc_version,
      sym_user_defined,
    STATE(32), 3,
      sym_stylesheet_directives,
      sym_file_header_info_line,
      aux_sym_file_header_repeat1,
    ACTIONS(226), 17,
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
  [1619] = 8,
    ACTIONS(230), 1,
      sym__NEWLINE,
    ACTIONS(232), 1,
      sym_COMMENTLINE,
    ACTIONS(235), 1,
      anon_sym_PERCENT_PERCENT,
    ACTIONS(238), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(244), 1,
      anon_sym_U_COLON,
    STATE(281), 2,
      sym_abc_version,
      sym_user_defined,
    STATE(32), 3,
      sym_stylesheet_directives,
      sym_file_header_info_line,
      aux_sym_file_header_repeat1,
    ACTIONS(241), 17,
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
  [1663] = 2,
    ACTIONS(196), 2,
      sym_COMMENTLINE,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(194), 20,
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
  [1690] = 2,
    ACTIONS(249), 2,
      sym_COMMENTLINE,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(247), 20,
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
  [1717] = 2,
    ACTIONS(204), 2,
      sym_COMMENTLINE,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(202), 20,
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
  [1744] = 16,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(251), 1,
      aux_sym__MUSIC_CODE_token1,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(263), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(265), 1,
      sym_tuplet_marker,
    STATE(104), 1,
      sym__pitch,
    STATE(108), 1,
      sym_note,
    STATE(154), 1,
      sym_chord_symbol,
    STATE(171), 1,
      sym_decoration,
    STATE(56), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(40), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [1797] = 16,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(263), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(265), 1,
      sym_tuplet_marker,
    ACTIONS(267), 1,
      aux_sym_beam_token1,
    STATE(104), 1,
      sym__pitch,
    STATE(108), 1,
      sym_note,
    STATE(154), 1,
      sym_chord_symbol,
    STATE(171), 1,
      sym_decoration,
    STATE(56), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(38), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [1850] = 16,
    ACTIONS(269), 1,
      anon_sym_BQUOTE,
    ACTIONS(272), 1,
      aux_sym_beam_token1,
    ACTIONS(274), 1,
      anon_sym_LBRACK,
    ACTIONS(277), 1,
      sym_alteration,
    ACTIONS(280), 1,
      sym_note_letter,
    ACTIONS(283), 1,
      sym_rest,
    ACTIONS(286), 1,
      aux_sym_grace_note_token1,
    ACTIONS(289), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(292), 1,
      sym_tuplet_marker,
    ACTIONS(295), 1,
      sym_decoration_shorthand,
    STATE(104), 1,
      sym__pitch,
    STATE(108), 1,
      sym_note,
    STATE(154), 1,
      sym_chord_symbol,
    STATE(171), 1,
      sym_decoration,
    STATE(56), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(38), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [1903] = 16,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(263), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(265), 1,
      sym_tuplet_marker,
    ACTIONS(298), 1,
      aux_sym__MUSIC_CODE_token1,
    STATE(104), 1,
      sym__pitch,
    STATE(108), 1,
      sym_note,
    STATE(154), 1,
      sym_chord_symbol,
    STATE(171), 1,
      sym_decoration,
    STATE(56), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(37), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [1956] = 16,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(253), 1,
      anon_sym_BQUOTE,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(263), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(265), 1,
      sym_tuplet_marker,
    ACTIONS(300), 1,
      aux_sym_beam_token1,
    STATE(104), 1,
      sym__pitch,
    STATE(108), 1,
      sym_note,
    STATE(154), 1,
      sym_chord_symbol,
    STATE(171), 1,
      sym_decoration,
    STATE(56), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(38), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [2009] = 9,
    ACTIONS(304), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(306), 1,
      sym_bar_line,
    ACTIONS(310), 1,
      sym_end_of_repeated_section,
    ACTIONS(312), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(314), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(302), 2,
      sym_note_skip,
      sym_annotation,
    STATE(103), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(42), 4,
      sym_chord_symbol,
      sym_generic_bar_line,
      sym_symbol,
      aux_sym_symbol_line_repeat1,
    ACTIONS(308), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [2046] = 9,
    ACTIONS(319), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(322), 1,
      sym_bar_line,
    ACTIONS(328), 1,
      sym_end_of_repeated_section,
    ACTIONS(331), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(334), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(316), 2,
      sym_note_skip,
      sym_annotation,
    STATE(103), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(42), 4,
      sym_chord_symbol,
      sym_generic_bar_line,
      sym_symbol,
      aux_sym_symbol_line_repeat1,
    ACTIONS(325), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [2083] = 8,
    ACTIONS(304), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(306), 1,
      sym_bar_line,
    ACTIONS(340), 1,
      sym_end_of_repeated_section,
    ACTIONS(342), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(336), 2,
      sym_note_skip,
      sym_annotation,
    STATE(103), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(41), 4,
      sym_chord_symbol,
      sym_generic_bar_line,
      sym_symbol,
      aux_sym_symbol_line_repeat1,
    ACTIONS(338), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [2117] = 4,
    STATE(46), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(344), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(348), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(346), 12,
      aux_sym__music_content_token1,
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
  [2143] = 14,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(255), 1,
      anon_sym_LBRACK,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(263), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(265), 1,
      sym_tuplet_marker,
    STATE(104), 1,
      sym__pitch,
    STATE(108), 1,
      sym_note,
    STATE(154), 1,
      sym_chord_symbol,
    STATE(171), 1,
      sym_decoration,
    STATE(56), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(133), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [2189] = 4,
    STATE(48), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(344), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(352), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(350), 12,
      aux_sym__music_content_token1,
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
  [2215] = 14,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(47), 1,
      sym_tuplet_marker,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(263), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(106), 1,
      sym_note,
    STATE(155), 1,
      sym_chord_symbol,
    STATE(178), 1,
      sym_decoration,
    STATE(62), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(262), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [2261] = 4,
    STATE(48), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(356), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(361), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(359), 12,
      aux_sym__music_content_token1,
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
  [2287] = 14,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(47), 1,
      sym_tuplet_marker,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(263), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(354), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(106), 1,
      sym_note,
    STATE(155), 1,
      sym_chord_symbol,
    STATE(178), 1,
      sym_decoration,
    STATE(62), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(317), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [2333] = 2,
    ACTIONS(361), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(359), 14,
      anon_sym_DASH,
      aux_sym__music_content_token1,
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
      anon_sym_COMMA,
  [2354] = 3,
    ACTIONS(365), 1,
      sym_octave,
    STATE(51), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(363), 14,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
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
  [2377] = 3,
    ACTIONS(370), 1,
      sym_octave,
    STATE(51), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(368), 14,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
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
  [2400] = 3,
    ACTIONS(370), 1,
      sym_octave,
    STATE(51), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(372), 14,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
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
  [2423] = 3,
    ACTIONS(376), 1,
      sym_octave,
    STATE(53), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(374), 14,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
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
  [2446] = 3,
    ACTIONS(378), 1,
      sym_octave,
    STATE(52), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(372), 14,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
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
  [2469] = 13,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(263), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      sym_tuplet_marker,
    STATE(104), 1,
      sym__pitch,
    STATE(118), 1,
      sym_note,
    STATE(153), 1,
      sym_chord_symbol,
    STATE(173), 1,
      sym_decoration,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2510] = 3,
    ACTIONS(384), 1,
      sym_octave,
    STATE(59), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(374), 12,
      anon_sym_BQUOTE,
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
  [2531] = 3,
    ACTIONS(388), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(390), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(386), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [2552] = 3,
    ACTIONS(392), 1,
      sym_octave,
    STATE(65), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(372), 12,
      anon_sym_BQUOTE,
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
  [2573] = 3,
    ACTIONS(394), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(396), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(386), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [2594] = 7,
    ACTIONS(401), 1,
      anon_sym_DASH,
    ACTIONS(404), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(407), 1,
      aux_sym_verse_number_token1,
    ACTIONS(410), 2,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
    STATE(61), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(156), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(398), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [2623] = 13,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(263), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      sym_tuplet_marker,
    STATE(73), 1,
      sym__pitch,
    STATE(121), 1,
      sym_note,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(172), 1,
      sym_decoration,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2664] = 3,
    ACTIONS(392), 1,
      sym_octave,
    STATE(65), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(368), 12,
      anon_sym_BQUOTE,
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
  [2685] = 3,
    ACTIONS(416), 1,
      sym_octave,
    STATE(63), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(372), 12,
      anon_sym_BQUOTE,
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
  [2706] = 3,
    ACTIONS(418), 1,
      sym_octave,
    STATE(65), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(363), 12,
      anon_sym_BQUOTE,
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
  [2727] = 7,
    ACTIONS(423), 1,
      anon_sym_DASH,
    ACTIONS(425), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(427), 1,
      aux_sym_verse_number_token1,
    ACTIONS(429), 2,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
    STATE(61), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(156), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(421), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [2756] = 11,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(431), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(70), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2792] = 11,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(433), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(70), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2828] = 11,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(435), 1,
      aux_sym_nth_ending_number_token1,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(81), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2864] = 11,
    ACTIONS(437), 1,
      anon_sym_RBRACK,
    ACTIONS(439), 1,
      sym_alteration,
    ACTIONS(442), 1,
      sym_note_letter,
    ACTIONS(445), 1,
      sym_rest,
    ACTIONS(448), 1,
      aux_sym_grace_note_token1,
    ACTIONS(451), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(70), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2900] = 11,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(454), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(70), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2936] = 11,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(456), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(70), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2972] = 2,
    ACTIONS(460), 1,
      sym_rhythm,
    ACTIONS(458), 12,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
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
  [2990] = 11,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(462), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(70), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3026] = 11,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(464), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(70), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3062] = 8,
    ACTIONS(466), 1,
      sym__NEWLINE,
    ACTIONS(470), 1,
      anon_sym_DASH,
    ACTIONS(472), 1,
      sym_UNDERSCORE,
    ACTIONS(474), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(476), 1,
      aux_sym_verse_number_token1,
    STATE(79), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(468), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(158), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [3092] = 11,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(478), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(70), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3128] = 11,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(480), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(70), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3164] = 8,
    ACTIONS(482), 1,
      sym__NEWLINE,
    ACTIONS(487), 1,
      anon_sym_DASH,
    ACTIONS(490), 1,
      sym_UNDERSCORE,
    ACTIONS(493), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(496), 1,
      aux_sym_verse_number_token1,
    STATE(79), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(484), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(158), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [3194] = 11,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(499), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(70), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3230] = 11,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(501), 1,
      anon_sym_RBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(70), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3266] = 10,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(68), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3299] = 10,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(71), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3332] = 1,
    ACTIONS(503), 12,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
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
  [3347] = 1,
    ACTIONS(505), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [3362] = 1,
    ACTIONS(507), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [3377] = 10,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(74), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3410] = 1,
    ACTIONS(509), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [3425] = 10,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(72), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3458] = 10,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(67), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3491] = 10,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(77), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3524] = 7,
    ACTIONS(470), 1,
      anon_sym_DASH,
    ACTIONS(472), 1,
      sym_UNDERSCORE,
    ACTIONS(474), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(476), 1,
      aux_sym_verse_number_token1,
    STATE(76), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(468), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(158), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [3551] = 10,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(75), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3584] = 1,
    ACTIONS(511), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [3599] = 1,
    ACTIONS(513), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [3614] = 10,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(80), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3647] = 10,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(81), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3680] = 10,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(177), 1,
      sym_note,
    STATE(190), 1,
      sym_decoration,
    STATE(78), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(146), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3713] = 7,
    ACTIONS(421), 1,
      sym_UNDERSCORE,
    ACTIONS(425), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(427), 1,
      aux_sym_verse_number_token1,
    ACTIONS(517), 1,
      anon_sym_DASH,
    STATE(66), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(515), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(156), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [3740] = 1,
    ACTIONS(519), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [3755] = 1,
    ACTIONS(521), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [3770] = 1,
    ACTIONS(523), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [3785] = 1,
    ACTIONS(386), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [3800] = 2,
    ACTIONS(525), 1,
      sym_rhythm,
    ACTIONS(458), 11,
      anon_sym_BQUOTE,
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
  [3817] = 1,
    ACTIONS(527), 12,
      sym_note_skip,
      aux_sym_chord_symbol_token1,
      sym_annotation,
      sym_bar_line,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      anon_sym_BANGtrill_BANG,
      aux_sym_body_info_line_token1,
  [3832] = 2,
    ACTIONS(531), 1,
      aux_sym_note_construct_token1,
    ACTIONS(529), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3848] = 2,
    ACTIONS(535), 1,
      aux_sym_note_construct_token1,
    ACTIONS(533), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3864] = 2,
    ACTIONS(537), 1,
      aux_sym_note_construct_token1,
    ACTIONS(529), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3880] = 2,
    ACTIONS(541), 1,
      aux_sym_note_construct_token1,
    ACTIONS(539), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3896] = 2,
    ACTIONS(545), 1,
      sym_rhythm,
    ACTIONS(543), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3912] = 2,
    ACTIONS(549), 1,
      sym_rhythm,
    ACTIONS(547), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3928] = 2,
    ACTIONS(553), 1,
      sym_rhythm,
    ACTIONS(551), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3944] = 2,
    ACTIONS(557), 1,
      sym_rhythm,
    ACTIONS(555), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3960] = 2,
    ACTIONS(559), 1,
      aux_sym_note_construct_token1,
    ACTIONS(533), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3976] = 2,
    ACTIONS(563), 1,
      sym_rhythm,
    ACTIONS(561), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [3992] = 2,
    ACTIONS(565), 1,
      sym_rhythm,
    ACTIONS(561), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4008] = 2,
    ACTIONS(569), 1,
      aux_sym_note_construct_token1,
    ACTIONS(567), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4024] = 2,
    ACTIONS(573), 1,
      aux_sym_note_construct_token1,
    ACTIONS(571), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4040] = 2,
    ACTIONS(575), 1,
      sym_rhythm,
    ACTIONS(543), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4056] = 2,
    ACTIONS(577), 1,
      sym_rhythm,
    ACTIONS(547), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4072] = 2,
    ACTIONS(579), 1,
      aux_sym_note_construct_token1,
    ACTIONS(571), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4088] = 2,
    ACTIONS(581), 1,
      sym_rhythm,
    ACTIONS(555), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4104] = 1,
    ACTIONS(503), 11,
      anon_sym_BQUOTE,
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
  [4118] = 2,
    ACTIONS(583), 1,
      aux_sym_note_construct_token1,
    ACTIONS(539), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4134] = 2,
    ACTIONS(585), 1,
      sym_rhythm,
    ACTIONS(551), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4150] = 2,
    ACTIONS(587), 1,
      aux_sym_note_construct_token1,
    ACTIONS(567), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4166] = 1,
    ACTIONS(555), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4179] = 1,
    ACTIONS(561), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4192] = 1,
    ACTIONS(571), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4205] = 1,
    ACTIONS(543), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4218] = 1,
    ACTIONS(551), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4231] = 1,
    ACTIONS(589), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4244] = 1,
    ACTIONS(272), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4257] = 1,
    ACTIONS(567), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4270] = 1,
    ACTIONS(539), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4283] = 1,
    ACTIONS(591), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4296] = 1,
    ACTIONS(589), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4309] = 1,
    ACTIONS(571), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4322] = 3,
    ACTIONS(595), 1,
      aux_sym_grace_note_token1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(593), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4339] = 1,
    ACTIONS(555), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4352] = 1,
    ACTIONS(543), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4365] = 1,
    ACTIONS(539), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4378] = 1,
    ACTIONS(533), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4391] = 1,
    ACTIONS(561), 10,
      anon_sym_BQUOTE,
      aux_sym_beam_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4404] = 1,
    ACTIONS(533), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4417] = 9,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(43), 1,
      aux_sym_grace_note_token1,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    STATE(73), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
    STATE(186), 1,
      sym_decoration,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [4446] = 1,
    ACTIONS(567), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4459] = 1,
    ACTIONS(551), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4472] = 1,
    ACTIONS(591), 10,
      aux_sym__MUSIC_CODE_token1,
      anon_sym_BQUOTE,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4485] = 9,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(598), 1,
      anon_sym_LBRACK,
    ACTIONS(600), 1,
      sym_tuplet_marker,
    STATE(73), 1,
      sym__pitch,
    STATE(126), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
  [4513] = 1,
    ACTIONS(602), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [4525] = 1,
    ACTIONS(604), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [4537] = 9,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(606), 1,
      anon_sym_LBRACK,
    ACTIONS(608), 1,
      sym_tuplet_marker,
    STATE(104), 1,
      sym__pitch,
    STATE(117), 1,
      sym_note,
    STATE(183), 1,
      sym_decoration,
  [4565] = 9,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    ACTIONS(382), 1,
      sym_tuplet_marker,
    STATE(104), 1,
      sym__pitch,
    STATE(118), 1,
      sym_note,
    STATE(173), 1,
      sym_decoration,
  [4593] = 9,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    ACTIONS(414), 1,
      sym_tuplet_marker,
    STATE(73), 1,
      sym__pitch,
    STATE(121), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
  [4621] = 1,
    ACTIONS(610), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [4633] = 1,
    ACTIONS(612), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [4645] = 2,
    ACTIONS(610), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(614), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [4658] = 2,
    ACTIONS(604), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(616), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [4671] = 8,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(121), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
  [4696] = 8,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym__pitch,
    STATE(118), 1,
      sym_note,
    STATE(173), 1,
      sym_decoration,
  [4721] = 8,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(618), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym__pitch,
    STATE(107), 1,
      sym_note,
    STATE(175), 1,
      sym_decoration,
  [4746] = 1,
    ACTIONS(620), 8,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4757] = 8,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(598), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(126), 1,
      sym_note,
    STATE(184), 1,
      sym_decoration,
  [4782] = 8,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(606), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym__pitch,
    STATE(117), 1,
      sym_note,
    STATE(183), 1,
      sym_decoration,
  [4807] = 2,
    ACTIONS(602), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(622), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [4820] = 2,
    ACTIONS(612), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(624), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [4833] = 8,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(180), 1,
      sym_decoration_shorthand,
    ACTIONS(626), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(114), 1,
      sym_note,
    STATE(174), 1,
      sym_decoration,
  [4858] = 1,
    ACTIONS(628), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4867] = 1,
    ACTIONS(630), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [4876] = 6,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(380), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym__pitch,
    STATE(118), 1,
      sym_note,
  [4895] = 6,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(598), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(126), 1,
      sym_note,
  [4914] = 6,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(606), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym__pitch,
    STATE(117), 1,
      sym_note,
  [4933] = 6,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(632), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(109), 1,
      sym_note,
  [4952] = 6,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(634), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym__pitch,
    STATE(124), 1,
      sym_note,
  [4971] = 4,
    ACTIONS(182), 1,
      sym_words_postbody,
    STATE(237), 1,
      sym_lyric_section,
    ACTIONS(636), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
    STATE(188), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [4986] = 1,
    ACTIONS(638), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [4995] = 6,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(412), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(121), 1,
      sym_note,
  [5014] = 1,
    ACTIONS(640), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [5023] = 1,
    ACTIONS(642), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [5032] = 1,
    ACTIONS(644), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [5041] = 1,
    ACTIONS(646), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [5050] = 6,
    ACTIONS(257), 1,
      sym_alteration,
    ACTIONS(259), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(618), 1,
      anon_sym_LBRACK,
    STATE(104), 1,
      sym__pitch,
    STATE(107), 1,
      sym_note,
  [5069] = 6,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    ACTIONS(626), 1,
      anon_sym_LBRACK,
    STATE(73), 1,
      sym__pitch,
    STATE(114), 1,
      sym_note,
  [5088] = 3,
    ACTIONS(650), 1,
      sym_words_postbody,
    ACTIONS(648), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
    STATE(185), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [5100] = 5,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    STATE(73), 1,
      sym__pitch,
    STATE(179), 1,
      sym_note,
  [5116] = 2,
    ACTIONS(653), 1,
      sym_bar_line,
    ACTIONS(655), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [5126] = 3,
    ACTIONS(182), 1,
      sym_words_postbody,
    ACTIONS(657), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
    STATE(185), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [5138] = 4,
    ACTIONS(659), 1,
      sym_alteration,
    ACTIONS(662), 1,
      sym_note_letter,
    ACTIONS(665), 1,
      aux_sym_grace_note_token2,
    STATE(189), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [5152] = 5,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(39), 1,
      sym_rest,
    STATE(73), 1,
      sym__pitch,
    STATE(181), 1,
      sym_note,
  [5168] = 4,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    ACTIONS(667), 1,
      aux_sym_grace_note_token2,
    STATE(189), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [5182] = 2,
    ACTIONS(669), 1,
      sym_bar_line,
    ACTIONS(671), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [5192] = 2,
    ACTIONS(673), 1,
      sym_alteration,
    ACTIONS(675), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [5201] = 3,
    ACTIONS(677), 1,
      anon_sym_DOT,
    STATE(195), 1,
      aux_sym_abc_version_repeat1,
    ACTIONS(679), 2,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [5212] = 3,
    ACTIONS(677), 1,
      anon_sym_DOT,
    STATE(196), 1,
      aux_sym_abc_version_repeat1,
    ACTIONS(681), 2,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [5223] = 3,
    ACTIONS(683), 1,
      anon_sym_DOT,
    STATE(196), 1,
      aux_sym_abc_version_repeat1,
    ACTIONS(686), 2,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [5234] = 1,
    ACTIONS(688), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [5241] = 3,
    ACTIONS(35), 1,
      sym_alteration,
    ACTIONS(37), 1,
      sym_note_letter,
    STATE(191), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [5252] = 3,
    ACTIONS(690), 1,
      ts_builtin_sym_end,
    ACTIONS(692), 1,
      sym__NEWLINE,
    STATE(219), 1,
      aux_sym_file_structure_repeat1,
  [5262] = 3,
    ACTIONS(692), 1,
      sym__NEWLINE,
    ACTIONS(694), 1,
      ts_builtin_sym_end,
    STATE(202), 1,
      aux_sym_file_structure_repeat1,
  [5272] = 1,
    ACTIONS(686), 3,
      anon_sym_DOT,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [5278] = 3,
    ACTIONS(690), 1,
      ts_builtin_sym_end,
    ACTIONS(692), 1,
      sym__NEWLINE,
    STATE(218), 1,
      aux_sym_file_structure_repeat1,
  [5288] = 1,
    ACTIONS(696), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [5294] = 3,
    ACTIONS(679), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(212), 1,
      aux_sym_abc_version_repeat1,
  [5304] = 3,
    ACTIONS(679), 1,
      aux_sym_file_header_info_line_token1,
    ACTIONS(700), 1,
      anon_sym_DOT,
    STATE(206), 1,
      aux_sym_abc_version_repeat1,
  [5314] = 3,
    ACTIONS(681), 1,
      aux_sym_file_header_info_line_token1,
    ACTIONS(700), 1,
      anon_sym_DOT,
    STATE(208), 1,
      aux_sym_abc_version_repeat1,
  [5324] = 1,
    ACTIONS(702), 3,
      ts_builtin_sym_end,
      sym__NEWLINE,
      sym_words_postbody,
  [5330] = 3,
    ACTIONS(686), 1,
      aux_sym_file_header_info_line_token1,
    ACTIONS(704), 1,
      anon_sym_DOT,
    STATE(208), 1,
      aux_sym_abc_version_repeat1,
  [5340] = 3,
    ACTIONS(707), 1,
      aux_sym_body_inline_info_token1,
    STATE(25), 1,
      sym_TEXTLINE,
    STATE(310), 1,
      sym_TEXT,
  [5350] = 3,
    ACTIONS(707), 1,
      aux_sym_body_inline_info_token1,
    STATE(35), 1,
      sym_TEXTLINE,
    STATE(325), 1,
      sym_TEXT,
  [5360] = 3,
    ACTIONS(709), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(711), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(713), 1,
      sym_chord_type,
  [5370] = 3,
    ACTIONS(681), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(698), 1,
      anon_sym_DOT,
    STATE(216), 1,
      aux_sym_abc_version_repeat1,
  [5380] = 3,
    ACTIONS(715), 1,
      aux_sym_words_line_token1,
    ACTIONS(717), 1,
      aux_sym_body_info_line_token1,
    STATE(215), 1,
      aux_sym_words_line_repeat2,
  [5390] = 3,
    ACTIONS(715), 1,
      aux_sym_words_line_token1,
    ACTIONS(719), 1,
      aux_sym_body_info_line_token1,
    STATE(213), 1,
      aux_sym_words_line_repeat2,
  [5400] = 3,
    ACTIONS(429), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(721), 1,
      aux_sym_words_line_token1,
    STATE(215), 1,
      aux_sym_words_line_repeat2,
  [5410] = 3,
    ACTIONS(686), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(724), 1,
      anon_sym_DOT,
    STATE(216), 1,
      aux_sym_abc_version_repeat1,
  [5420] = 3,
    ACTIONS(727), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(729), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(731), 1,
      sym_chord_type,
  [5430] = 3,
    ACTIONS(733), 1,
      ts_builtin_sym_end,
    ACTIONS(735), 1,
      sym__NEWLINE,
    STATE(218), 1,
      aux_sym_file_structure_repeat1,
  [5440] = 3,
    ACTIONS(692), 1,
      sym__NEWLINE,
    ACTIONS(738), 1,
      ts_builtin_sym_end,
    STATE(218), 1,
      aux_sym_file_structure_repeat1,
  [5450] = 1,
    ACTIONS(740), 2,
      sym__NEWLINE,
      sym_COMMENTLINE,
  [5455] = 2,
    ACTIONS(742), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(744), 1,
      aux_sym_file_header_info_line_token1,
  [5462] = 1,
    ACTIONS(733), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
  [5467] = 1,
    ACTIONS(746), 2,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [5472] = 1,
    ACTIONS(686), 2,
      anon_sym_DOT,
      aux_sym_body_info_line_token1,
  [5477] = 2,
    ACTIONS(748), 1,
      anon_sym_BANGtrill_BANG,
    STATE(305), 1,
      sym_symbol,
  [5484] = 1,
    ACTIONS(750), 2,
      sym__NEWLINE,
      sym_COMMENTLINE,
  [5489] = 2,
    ACTIONS(752), 1,
      sym_note_letter,
    STATE(211), 1,
      sym_chord_symbol_note,
  [5496] = 1,
    ACTIONS(754), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [5501] = 2,
    ACTIONS(756), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(758), 1,
      aux_sym_chord_symbol_token2,
  [5508] = 1,
    ACTIONS(760), 2,
      sym__NEWLINE,
      sym_COMMENTLINE,
  [5513] = 2,
    ACTIONS(762), 1,
      sym_note_letter,
    STATE(350), 1,
      sym_chord_symbol_note,
  [5520] = 2,
    ACTIONS(752), 1,
      sym_note_letter,
    STATE(217), 1,
      sym_chord_symbol_note,
  [5527] = 2,
    ACTIONS(764), 1,
      anon_sym_BANGtrill_BANG,
    STATE(223), 1,
      sym_symbol,
  [5534] = 1,
    ACTIONS(766), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [5539] = 2,
    ACTIONS(675), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(768), 1,
      sym_alteration,
  [5546] = 2,
    ACTIONS(762), 1,
      sym_note_letter,
    STATE(324), 1,
      sym_chord_symbol_note,
  [5553] = 1,
    ACTIONS(770), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
  [5558] = 1,
    ACTIONS(636), 2,
      ts_builtin_sym_end,
      sym__NEWLINE,
  [5563] = 1,
    ACTIONS(686), 2,
      anon_sym_DOT,
      aux_sym_file_header_info_line_token1,
  [5568] = 1,
    ACTIONS(511), 2,
      aux_sym_body_info_line_token1,
      aux_sym_file_header_info_line_token1,
  [5573] = 2,
    ACTIONS(772), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(774), 1,
      aux_sym_chord_symbol_token2,
  [5580] = 2,
    ACTIONS(762), 1,
      sym_note_letter,
    STATE(342), 1,
      sym_chord_symbol_note,
  [5587] = 2,
    ACTIONS(762), 1,
      sym_note_letter,
    STATE(326), 1,
      sym_chord_symbol_note,
  [5594] = 1,
    ACTIONS(776), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [5599] = 2,
    ACTIONS(778), 1,
      anon_sym_BANGtrill_BANG,
    STATE(266), 1,
      sym_symbol,
  [5606] = 1,
    ACTIONS(780), 1,
      ts_builtin_sym_end,
  [5610] = 1,
    ACTIONS(782), 1,
      anon_sym_BANG_GT_LPAREN_BANG,
  [5614] = 1,
    ACTIONS(784), 1,
      anon_sym_BANGdacoda_BANG,
  [5618] = 1,
    ACTIONS(786), 1,
      anon_sym_BANGdacapo_BANG,
  [5622] = 1,
    ACTIONS(788), 1,
      anon_sym_BANGfine_BANG,
  [5626] = 1,
    ACTIONS(790), 1,
      anon_sym_BANGshortphrase_BANG,
  [5630] = 1,
    ACTIONS(792), 1,
      anon_sym_BANGmediumphrase_BANG,
  [5634] = 1,
    ACTIONS(794), 1,
      anon_sym_BANGlongphrase_BANG,
  [5638] = 1,
    ACTIONS(796), 1,
      aux_sym_first_repeat_bar_token2,
  [5642] = 1,
    ACTIONS(798), 1,
      aux_sym_body_info_line_token1,
  [5646] = 1,
    ACTIONS(800), 1,
      anon_sym_LF,
  [5650] = 1,
    ACTIONS(802), 1,
      anon_sym_BANGD_DOTS_DOT_BANG,
  [5654] = 1,
    ACTIONS(804), 1,
      anon_sym_BANGcoda_BANG,
  [5658] = 1,
    ACTIONS(806), 1,
      anon_sym_BANGsegno_BANG,
  [5662] = 1,
    ACTIONS(808), 1,
      anon_sym_BANG_GT_RPAREN_BANG,
  [5666] = 1,
    ACTIONS(810), 1,
      anon_sym_BANGdiminuendo_RPAREN_BANG,
  [5670] = 1,
    ACTIONS(812), 1,
      aux_sym__MUSIC_CODE_token1,
  [5674] = 1,
    ACTIONS(814), 1,
      anon_sym_BANG_GT_LPAREN_BANG,
  [5678] = 1,
    ACTIONS(816), 1,
      anon_sym_BANGdiminuendo_LPAREN_BANG,
  [5682] = 1,
    ACTIONS(818), 1,
      anon_sym_BANG_LT_RPAREN_BANG,
  [5686] = 1,
    ACTIONS(820), 1,
      aux_sym_body_info_line_token1,
  [5690] = 1,
    ACTIONS(822), 1,
      anon_sym_BANGcrescendo_RPAREN_BANG,
  [5694] = 1,
    ACTIONS(824), 1,
      anon_sym_BANG_LT_LPAREN_BANG,
  [5698] = 1,
    ACTIONS(826), 1,
      anon_sym_BANGcrescendo_LPAREN_BANG,
  [5702] = 1,
    ACTIONS(828), 1,
      anon_sym_BANGsfz_BANG,
  [5706] = 1,
    ACTIONS(830), 1,
      anon_sym_BANGtrill_RPAREN_BANG,
  [5710] = 1,
    ACTIONS(832), 1,
      anon_sym_LBRACK,
  [5714] = 1,
    ACTIONS(834), 1,
      anon_sym_LBRACK,
  [5718] = 1,
    ACTIONS(836), 1,
      anon_sym_BANGffff_BANG,
  [5722] = 1,
    ACTIONS(838), 1,
      anon_sym_BANGfff_BANG,
  [5726] = 1,
    ACTIONS(840), 1,
      anon_sym_BANGff_BANG,
  [5730] = 1,
    ACTIONS(842), 1,
      anon_sym_BANGf_BANG,
  [5734] = 1,
    ACTIONS(844), 1,
      aux_sym_nth_ending_number_token1,
  [5738] = 1,
    ACTIONS(846), 1,
      anon_sym_BANGmf_BANG,
  [5742] = 1,
    ACTIONS(848), 1,
      anon_sym_BANGmp_BANG,
  [5746] = 1,
    ACTIONS(850), 1,
      aux_sym_file_header_info_line_token1,
  [5750] = 1,
    ACTIONS(852), 1,
      anon_sym_BANGp_BANG,
  [5754] = 1,
    ACTIONS(854), 1,
      anon_sym_BANGpp_BANG,
  [5758] = 1,
    ACTIONS(856), 1,
      anon_sym_BANGppp_BANG,
  [5762] = 1,
    ACTIONS(858), 1,
      anon_sym_BANGpppp_BANG,
  [5766] = 1,
    ACTIONS(860), 1,
      sym__NEWLINE,
  [5770] = 1,
    ACTIONS(862), 1,
      anon_sym_BANGbreath_BANG,
  [5774] = 1,
    ACTIONS(864), 1,
      anon_sym_BANGthumb_BANG,
  [5778] = 1,
    ACTIONS(866), 1,
      anon_sym_BANGopen_BANG,
  [5782] = 1,
    ACTIONS(868), 1,
      anon_sym_BANGdownbow_BANG,
  [5786] = 1,
    ACTIONS(870), 1,
      anon_sym_BANGupbow_BANG,
  [5790] = 1,
    ACTIONS(872), 1,
      aux_sym_multimeasure_rest_token1,
  [5794] = 1,
    ACTIONS(874), 1,
      anon_sym_BANGwedge_BANG,
  [5798] = 1,
    ACTIONS(876), 1,
      sym_note_letter,
  [5802] = 1,
    ACTIONS(878), 1,
      anon_sym_BANGslide_BANG,
  [5806] = 1,
    ACTIONS(880), 1,
      anon_sym_BANGsnap_BANG,
  [5810] = 1,
    ACTIONS(882), 1,
      anon_sym_EQ,
  [5814] = 1,
    ACTIONS(884), 1,
      anon_sym_BANGtrill_LPAREN_BANG,
  [5818] = 1,
    ACTIONS(886), 1,
      anon_sym_BANGplus_BANG,
  [5822] = 1,
    ACTIONS(888), 1,
      anon_sym_BANG_PLUS_BANG,
  [5826] = 1,
    ACTIONS(890), 1,
      anon_sym_BANG0_BANG_DASH_BANG5_BANG,
  [5830] = 1,
    ACTIONS(892), 1,
      anon_sym_BANGtenuto_BANG,
  [5834] = 1,
    ACTIONS(894), 1,
      anon_sym_BANGinvertedfermata_BANG,
  [5838] = 1,
    ACTIONS(896), 1,
      anon_sym_BANGfermata_BANG,
  [5842] = 1,
    ACTIONS(820), 1,
      aux_sym_file_header_info_line_token1,
  [5846] = 1,
    ACTIONS(898), 1,
      aux_sym_body_info_line_token1,
  [5850] = 1,
    ACTIONS(898), 1,
      aux_sym_file_header_info_line_token1,
  [5854] = 1,
    ACTIONS(900), 1,
      anon_sym_BANGemphasis_BANG,
  [5858] = 1,
    ACTIONS(902), 1,
      aux_sym_nth_ending_number_token1,
  [5862] = 1,
    ACTIONS(904), 1,
      sym__NEWLINE,
  [5866] = 1,
    ACTIONS(906), 1,
      sym_note_letter,
  [5870] = 1,
    ACTIONS(908), 1,
      aux_sym_multimeasure_rest_token1,
  [5874] = 1,
    ACTIONS(910), 1,
      aux_sym_body_info_line_token1,
  [5878] = 1,
    ACTIONS(912), 1,
      aux_sym_nth_ending_number_token1,
  [5882] = 1,
    ACTIONS(914), 1,
      anon_sym_BANGaccent_BANG,
  [5886] = 1,
    ACTIONS(916), 1,
      anon_sym_BANG_GT_BANG,
  [5890] = 1,
    ACTIONS(918), 1,
      aux_sym__MUSIC_CODE_token1,
  [5894] = 1,
    ACTIONS(920), 1,
      anon_sym_BANGarpeggio_BANG,
  [5898] = 1,
    ACTIONS(922), 1,
      anon_sym_BANGinvertedturnx_BANG,
  [5902] = 1,
    ACTIONS(924), 1,
      anon_sym_BANGinvertedturn_BANG,
  [5906] = 1,
    ACTIONS(926), 1,
      anon_sym_BANGturnx_BANG,
  [5910] = 1,
    ACTIONS(928), 1,
      anon_sym_BANGlowermordent_BANG,
  [5914] = 1,
    ACTIONS(930), 1,
      anon_sym_DOT,
  [5918] = 1,
    ACTIONS(932), 1,
      aux_sym_chord_symbol_token1,
  [5922] = 1,
    ACTIONS(934), 1,
      sym__NEWLINE,
  [5926] = 1,
    ACTIONS(936), 1,
      aux_sym_chord_symbol_token1,
  [5930] = 1,
    ACTIONS(938), 1,
      sym__NEWLINE,
  [5934] = 1,
    ACTIONS(940), 1,
      anon_sym_BANGturn_BANG,
  [5938] = 1,
    ACTIONS(942), 1,
      anon_sym_BANGlongphrase_BANG,
  [5942] = 1,
    ACTIONS(944), 1,
      aux_sym_nth_ending_number_token1,
  [5946] = 1,
    ACTIONS(946), 1,
      aux_sym_nth_ending_number_token1,
  [5950] = 1,
    ACTIONS(948), 1,
      aux_sym_nth_ending_number_token1,
  [5954] = 1,
    ACTIONS(950), 1,
      anon_sym_BANGlongphrase_BANG,
  [5958] = 1,
    ACTIONS(952), 1,
      anon_sym_BANGlongphrase_BANG,
  [5962] = 1,
    ACTIONS(954), 1,
      anon_sym_BANGroll_BANG,
  [5966] = 1,
    ACTIONS(956), 1,
      anon_sym_EQ,
  [5970] = 1,
    ACTIONS(958), 1,
      ts_builtin_sym_end,
  [5974] = 1,
    ACTIONS(960), 1,
      anon_sym_DOT,
  [5978] = 1,
    ACTIONS(962), 1,
      aux_sym_first_repeat_bar_token2,
  [5982] = 1,
    ACTIONS(964), 1,
      aux_sym_nth_ending_number_token1,
  [5986] = 1,
    ACTIONS(966), 1,
      anon_sym_BANGpralltriller_BANG,
  [5990] = 1,
    ACTIONS(968), 1,
      aux_sym_chord_symbol_token1,
  [5994] = 1,
    ACTIONS(970), 1,
      anon_sym_BANGmordent_BANG,
  [5998] = 1,
    ACTIONS(972), 1,
      aux_sym_nth_ending_number_token1,
  [6002] = 1,
    ACTIONS(974), 1,
      aux_sym_body_info_line_token1,
  [6006] = 1,
    ACTIONS(976), 1,
      anon_sym_BANGmediumphrase_BANG,
  [6010] = 1,
    ACTIONS(978), 1,
      anon_sym_EQ,
  [6014] = 1,
    ACTIONS(980), 1,
      anon_sym_BANGmediumphrase_BANG,
  [6018] = 1,
    ACTIONS(982), 1,
      anon_sym_BANGmediumphrase_BANG,
  [6022] = 1,
    ACTIONS(984), 1,
      aux_sym_chord_symbol_token1,
  [6026] = 1,
    ACTIONS(986), 1,
      anon_sym_BANGshortphrase_BANG,
  [6030] = 1,
    ACTIONS(988), 1,
      anon_sym_BANGuppermordent_BANG,
  [6034] = 1,
    ACTIONS(990), 1,
      anon_sym_BANGshortphrase_BANG,
  [6038] = 1,
    ACTIONS(992), 1,
      anon_sym_BANGshortphrase_BANG,
  [6042] = 1,
    ACTIONS(994), 1,
      anon_sym_BANGfine_BANG,
  [6046] = 1,
    ACTIONS(996), 1,
      anon_sym_BANGfine_BANG,
  [6050] = 1,
    ACTIONS(998), 1,
      anon_sym_BANGfine_BANG,
  [6054] = 1,
    ACTIONS(1000), 1,
      anon_sym_BANGdacapo_BANG,
  [6058] = 1,
    ACTIONS(1002), 1,
      anon_sym_BANGdacapo_BANG,
  [6062] = 1,
    ACTIONS(1004), 1,
      anon_sym_BANGdacapo_BANG,
  [6066] = 1,
    ACTIONS(1006), 1,
      anon_sym_BANGdacoda_BANG,
  [6070] = 1,
    ACTIONS(1008), 1,
      anon_sym_BANGdacoda_BANG,
  [6074] = 1,
    ACTIONS(1010), 1,
      anon_sym_BANGdacoda_BANG,
  [6078] = 1,
    ACTIONS(1012), 1,
      anon_sym_BANGD_DOTC_DOT_BANG,
  [6082] = 1,
    ACTIONS(1014), 1,
      anon_sym_BANGD_DOTC_DOT_BANG,
  [6086] = 1,
    ACTIONS(1016), 1,
      anon_sym_BANGD_DOTC_DOT_BANG,
  [6090] = 1,
    ACTIONS(1018), 1,
      anon_sym_BANGD_DOTS_DOT_BANG,
  [6094] = 1,
    ACTIONS(1020), 1,
      anon_sym_BANGD_DOTS_DOT_BANG,
  [6098] = 1,
    ACTIONS(1022), 1,
      anon_sym_BANGD_DOTS_DOT_BANG,
  [6102] = 1,
    ACTIONS(1024), 1,
      anon_sym_BANGcoda_BANG,
  [6106] = 1,
    ACTIONS(1026), 1,
      anon_sym_BANGcoda_BANG,
  [6110] = 1,
    ACTIONS(1028), 1,
      anon_sym_BANGcoda_BANG,
  [6114] = 1,
    ACTIONS(1030), 1,
      anon_sym_BANGsegno_BANG,
  [6118] = 1,
    ACTIONS(1032), 1,
      anon_sym_BANGsegno_BANG,
  [6122] = 1,
    ACTIONS(1034), 1,
      anon_sym_BANGsegno_BANG,
  [6126] = 1,
    ACTIONS(1036), 1,
      anon_sym_BANG_GT_RPAREN_BANG,
  [6130] = 1,
    ACTIONS(1038), 1,
      anon_sym_BANG_GT_RPAREN_BANG,
  [6134] = 1,
    ACTIONS(1040), 1,
      anon_sym_BANG_GT_RPAREN_BANG,
  [6138] = 1,
    ACTIONS(1042), 1,
      anon_sym_BANGdiminuendo_RPAREN_BANG,
  [6142] = 1,
    ACTIONS(1044), 1,
      anon_sym_BANGdiminuendo_RPAREN_BANG,
  [6146] = 1,
    ACTIONS(1046), 1,
      anon_sym_BANGdiminuendo_RPAREN_BANG,
  [6150] = 1,
    ACTIONS(1048), 1,
      anon_sym_BANG_GT_LPAREN_BANG,
  [6154] = 1,
    ACTIONS(1050), 1,
      anon_sym_BANGD_DOTC_DOT_BANG,
  [6158] = 1,
    ACTIONS(1052), 1,
      anon_sym_BANG_GT_LPAREN_BANG,
  [6162] = 1,
    ACTIONS(1054), 1,
      anon_sym_BANGdiminuendo_LPAREN_BANG,
  [6166] = 1,
    ACTIONS(1056), 1,
      anon_sym_BANGdiminuendo_LPAREN_BANG,
  [6170] = 1,
    ACTIONS(1058), 1,
      anon_sym_BANGdiminuendo_LPAREN_BANG,
  [6174] = 1,
    ACTIONS(1060), 1,
      anon_sym_BANG_LT_RPAREN_BANG,
  [6178] = 1,
    ACTIONS(1062), 1,
      anon_sym_BANG_LT_RPAREN_BANG,
  [6182] = 1,
    ACTIONS(1064), 1,
      anon_sym_BANG_LT_RPAREN_BANG,
  [6186] = 1,
    ACTIONS(1066), 1,
      anon_sym_BANGcrescendo_RPAREN_BANG,
  [6190] = 1,
    ACTIONS(1068), 1,
      anon_sym_BANGcrescendo_RPAREN_BANG,
  [6194] = 1,
    ACTIONS(1070), 1,
      anon_sym_BANGcrescendo_RPAREN_BANG,
  [6198] = 1,
    ACTIONS(1072), 1,
      anon_sym_BANG_LT_LPAREN_BANG,
  [6202] = 1,
    ACTIONS(1074), 1,
      anon_sym_BANG_LT_LPAREN_BANG,
  [6206] = 1,
    ACTIONS(1076), 1,
      anon_sym_BANG_LT_LPAREN_BANG,
  [6210] = 1,
    ACTIONS(1078), 1,
      anon_sym_BANGcrescendo_LPAREN_BANG,
  [6214] = 1,
    ACTIONS(1080), 1,
      anon_sym_BANGcrescendo_LPAREN_BANG,
  [6218] = 1,
    ACTIONS(1082), 1,
      anon_sym_BANGcrescendo_LPAREN_BANG,
  [6222] = 1,
    ACTIONS(1084), 1,
      anon_sym_BANGsfz_BANG,
  [6226] = 1,
    ACTIONS(1086), 1,
      anon_sym_BANGsfz_BANG,
  [6230] = 1,
    ACTIONS(1088), 1,
      anon_sym_BANGsfz_BANG,
  [6234] = 1,
    ACTIONS(1090), 1,
      anon_sym_BANGffff_BANG,
  [6238] = 1,
    ACTIONS(1092), 1,
      anon_sym_BANGffff_BANG,
  [6242] = 1,
    ACTIONS(1094), 1,
      anon_sym_BANGffff_BANG,
  [6246] = 1,
    ACTIONS(1096), 1,
      anon_sym_BANGfff_BANG,
  [6250] = 1,
    ACTIONS(1098), 1,
      anon_sym_BANGfff_BANG,
  [6254] = 1,
    ACTIONS(1100), 1,
      anon_sym_BANGfff_BANG,
  [6258] = 1,
    ACTIONS(1102), 1,
      anon_sym_BANGff_BANG,
  [6262] = 1,
    ACTIONS(1104), 1,
      anon_sym_BANGff_BANG,
  [6266] = 1,
    ACTIONS(1106), 1,
      anon_sym_BANGff_BANG,
  [6270] = 1,
    ACTIONS(1108), 1,
      anon_sym_BANGf_BANG,
  [6274] = 1,
    ACTIONS(1110), 1,
      anon_sym_BANGf_BANG,
  [6278] = 1,
    ACTIONS(1112), 1,
      anon_sym_BANGf_BANG,
  [6282] = 1,
    ACTIONS(1114), 1,
      anon_sym_BANGmf_BANG,
  [6286] = 1,
    ACTIONS(1116), 1,
      anon_sym_BANGmf_BANG,
  [6290] = 1,
    ACTIONS(1118), 1,
      anon_sym_BANGmf_BANG,
  [6294] = 1,
    ACTIONS(1120), 1,
      anon_sym_BANGmp_BANG,
  [6298] = 1,
    ACTIONS(1122), 1,
      anon_sym_BANGmp_BANG,
  [6302] = 1,
    ACTIONS(1124), 1,
      anon_sym_BANGmp_BANG,
  [6306] = 1,
    ACTIONS(1126), 1,
      anon_sym_BANGp_BANG,
  [6310] = 1,
    ACTIONS(1128), 1,
      anon_sym_BANGp_BANG,
  [6314] = 1,
    ACTIONS(1130), 1,
      anon_sym_BANGp_BANG,
  [6318] = 1,
    ACTIONS(1132), 1,
      anon_sym_BANGpp_BANG,
  [6322] = 1,
    ACTIONS(1134), 1,
      anon_sym_BANGpp_BANG,
  [6326] = 1,
    ACTIONS(1136), 1,
      anon_sym_BANGpp_BANG,
  [6330] = 1,
    ACTIONS(1138), 1,
      anon_sym_BANGppp_BANG,
  [6334] = 1,
    ACTIONS(1140), 1,
      anon_sym_BANGppp_BANG,
  [6338] = 1,
    ACTIONS(1142), 1,
      anon_sym_BANGppp_BANG,
  [6342] = 1,
    ACTIONS(1144), 1,
      anon_sym_BANGpppp_BANG,
  [6346] = 1,
    ACTIONS(1146), 1,
      anon_sym_BANGpppp_BANG,
  [6350] = 1,
    ACTIONS(1148), 1,
      anon_sym_BANGpppp_BANG,
  [6354] = 1,
    ACTIONS(1150), 1,
      anon_sym_BANGbreath_BANG,
  [6358] = 1,
    ACTIONS(1152), 1,
      anon_sym_BANGbreath_BANG,
  [6362] = 1,
    ACTIONS(1154), 1,
      anon_sym_BANGbreath_BANG,
  [6366] = 1,
    ACTIONS(1156), 1,
      anon_sym_BANGthumb_BANG,
  [6370] = 1,
    ACTIONS(1158), 1,
      anon_sym_BANGthumb_BANG,
  [6374] = 1,
    ACTIONS(1160), 1,
      anon_sym_BANGthumb_BANG,
  [6378] = 1,
    ACTIONS(1162), 1,
      anon_sym_BANGopen_BANG,
  [6382] = 1,
    ACTIONS(1164), 1,
      anon_sym_BANGopen_BANG,
  [6386] = 1,
    ACTIONS(1166), 1,
      anon_sym_BANGopen_BANG,
  [6390] = 1,
    ACTIONS(1168), 1,
      anon_sym_BANGdownbow_BANG,
  [6394] = 1,
    ACTIONS(1170), 1,
      anon_sym_BANGdownbow_BANG,
  [6398] = 1,
    ACTIONS(1172), 1,
      anon_sym_BANGdownbow_BANG,
  [6402] = 1,
    ACTIONS(1174), 1,
      anon_sym_BANGupbow_BANG,
  [6406] = 1,
    ACTIONS(1176), 1,
      anon_sym_BANGupbow_BANG,
  [6410] = 1,
    ACTIONS(1178), 1,
      anon_sym_BANGupbow_BANG,
  [6414] = 1,
    ACTIONS(1180), 1,
      anon_sym_BANGwedge_BANG,
  [6418] = 1,
    ACTIONS(1182), 1,
      anon_sym_BANGwedge_BANG,
  [6422] = 1,
    ACTIONS(1184), 1,
      anon_sym_BANGwedge_BANG,
  [6426] = 1,
    ACTIONS(1186), 1,
      anon_sym_BANGslide_BANG,
  [6430] = 1,
    ACTIONS(1188), 1,
      anon_sym_BANGslide_BANG,
  [6434] = 1,
    ACTIONS(1190), 1,
      anon_sym_BANGslide_BANG,
  [6438] = 1,
    ACTIONS(1192), 1,
      anon_sym_BANGsnap_BANG,
  [6442] = 1,
    ACTIONS(1194), 1,
      anon_sym_BANGsnap_BANG,
  [6446] = 1,
    ACTIONS(1196), 1,
      anon_sym_BANGsnap_BANG,
  [6450] = 1,
    ACTIONS(1198), 1,
      anon_sym_BANGplus_BANG,
  [6454] = 1,
    ACTIONS(1200), 1,
      anon_sym_BANGplus_BANG,
  [6458] = 1,
    ACTIONS(1202), 1,
      anon_sym_BANGplus_BANG,
  [6462] = 1,
    ACTIONS(1204), 1,
      anon_sym_BANG_PLUS_BANG,
  [6466] = 1,
    ACTIONS(1206), 1,
      anon_sym_BANG_PLUS_BANG,
  [6470] = 1,
    ACTIONS(1208), 1,
      anon_sym_BANG_PLUS_BANG,
  [6474] = 1,
    ACTIONS(1210), 1,
      anon_sym_BANG0_BANG_DASH_BANG5_BANG,
  [6478] = 1,
    ACTIONS(1212), 1,
      anon_sym_BANG0_BANG_DASH_BANG5_BANG,
  [6482] = 1,
    ACTIONS(1214), 1,
      anon_sym_BANG0_BANG_DASH_BANG5_BANG,
  [6486] = 1,
    ACTIONS(1216), 1,
      anon_sym_BANGtenuto_BANG,
  [6490] = 1,
    ACTIONS(1218), 1,
      anon_sym_BANGtenuto_BANG,
  [6494] = 1,
    ACTIONS(1220), 1,
      anon_sym_BANGtenuto_BANG,
  [6498] = 1,
    ACTIONS(1222), 1,
      anon_sym_BANGinvertedfermata_BANG,
  [6502] = 1,
    ACTIONS(1224), 1,
      anon_sym_BANGinvertedfermata_BANG,
  [6506] = 1,
    ACTIONS(1226), 1,
      anon_sym_BANGinvertedfermata_BANG,
  [6510] = 1,
    ACTIONS(1228), 1,
      anon_sym_BANGfermata_BANG,
  [6514] = 1,
    ACTIONS(1230), 1,
      anon_sym_BANGfermata_BANG,
  [6518] = 1,
    ACTIONS(1232), 1,
      anon_sym_BANGfermata_BANG,
  [6522] = 1,
    ACTIONS(1234), 1,
      anon_sym_BANGemphasis_BANG,
  [6526] = 1,
    ACTIONS(1236), 1,
      anon_sym_BANGemphasis_BANG,
  [6530] = 1,
    ACTIONS(1238), 1,
      anon_sym_BANGemphasis_BANG,
  [6534] = 1,
    ACTIONS(1240), 1,
      anon_sym_BANGaccent_BANG,
  [6538] = 1,
    ACTIONS(1242), 1,
      anon_sym_BANGaccent_BANG,
  [6542] = 1,
    ACTIONS(1244), 1,
      anon_sym_BANGaccent_BANG,
  [6546] = 1,
    ACTIONS(1246), 1,
      anon_sym_BANG_GT_BANG,
  [6550] = 1,
    ACTIONS(1248), 1,
      anon_sym_BANG_GT_BANG,
  [6554] = 1,
    ACTIONS(1250), 1,
      anon_sym_BANG_GT_BANG,
  [6558] = 1,
    ACTIONS(1252), 1,
      anon_sym_BANGarpeggio_BANG,
  [6562] = 1,
    ACTIONS(1254), 1,
      anon_sym_BANGarpeggio_BANG,
  [6566] = 1,
    ACTIONS(1256), 1,
      anon_sym_BANGarpeggio_BANG,
  [6570] = 1,
    ACTIONS(1258), 1,
      anon_sym_BANGinvertedturnx_BANG,
  [6574] = 1,
    ACTIONS(1260), 1,
      anon_sym_BANGinvertedturnx_BANG,
  [6578] = 1,
    ACTIONS(1262), 1,
      anon_sym_BANGinvertedturnx_BANG,
  [6582] = 1,
    ACTIONS(1264), 1,
      anon_sym_BANGinvertedturn_BANG,
  [6586] = 1,
    ACTIONS(1266), 1,
      anon_sym_BANGinvertedturn_BANG,
  [6590] = 1,
    ACTIONS(1268), 1,
      anon_sym_BANGinvertedturn_BANG,
  [6594] = 1,
    ACTIONS(1270), 1,
      anon_sym_BANGturnx_BANG,
  [6598] = 1,
    ACTIONS(1272), 1,
      anon_sym_BANGturnx_BANG,
  [6602] = 1,
    ACTIONS(1274), 1,
      anon_sym_BANGturnx_BANG,
  [6606] = 1,
    ACTIONS(1276), 1,
      anon_sym_BANGturn_BANG,
  [6610] = 1,
    ACTIONS(1278), 1,
      anon_sym_BANGturn_BANG,
  [6614] = 1,
    ACTIONS(1280), 1,
      anon_sym_BANGturn_BANG,
  [6618] = 1,
    ACTIONS(1282), 1,
      anon_sym_BANGroll_BANG,
  [6622] = 1,
    ACTIONS(1284), 1,
      anon_sym_BANGroll_BANG,
  [6626] = 1,
    ACTIONS(1286), 1,
      anon_sym_BANGroll_BANG,
  [6630] = 1,
    ACTIONS(1288), 1,
      anon_sym_BANGpralltriller_BANG,
  [6634] = 1,
    ACTIONS(1290), 1,
      anon_sym_BANGpralltriller_BANG,
  [6638] = 1,
    ACTIONS(1292), 1,
      anon_sym_BANGpralltriller_BANG,
  [6642] = 1,
    ACTIONS(1294), 1,
      anon_sym_BANGmordent_BANG,
  [6646] = 1,
    ACTIONS(1296), 1,
      anon_sym_BANGmordent_BANG,
  [6650] = 1,
    ACTIONS(1298), 1,
      anon_sym_BANGmordent_BANG,
  [6654] = 1,
    ACTIONS(1300), 1,
      anon_sym_BANGuppermordent_BANG,
  [6658] = 1,
    ACTIONS(1302), 1,
      anon_sym_BANGuppermordent_BANG,
  [6662] = 1,
    ACTIONS(1304), 1,
      anon_sym_BANGuppermordent_BANG,
  [6666] = 1,
    ACTIONS(1306), 1,
      anon_sym_BANGlowermordent_BANG,
  [6670] = 1,
    ACTIONS(1308), 1,
      anon_sym_BANGlowermordent_BANG,
  [6674] = 1,
    ACTIONS(1310), 1,
      anon_sym_BANGlowermordent_BANG,
  [6678] = 1,
    ACTIONS(1312), 1,
      anon_sym_BANGtrill_RPAREN_BANG,
  [6682] = 1,
    ACTIONS(1314), 1,
      anon_sym_BANGtrill_RPAREN_BANG,
  [6686] = 1,
    ACTIONS(1316), 1,
      anon_sym_BANGtrill_RPAREN_BANG,
  [6690] = 1,
    ACTIONS(1318), 1,
      anon_sym_BANGtrill_LPAREN_BANG,
  [6694] = 1,
    ACTIONS(1320), 1,
      anon_sym_BANGtrill_LPAREN_BANG,
  [6698] = 1,
    ACTIONS(1322), 1,
      anon_sym_BANGtrill_LPAREN_BANG,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 116,
  [SMALL_STATE(4)] = 232,
  [SMALL_STATE(5)] = 341,
  [SMALL_STATE(6)] = 409,
  [SMALL_STATE(7)] = 477,
  [SMALL_STATE(8)] = 525,
  [SMALL_STATE(9)] = 567,
  [SMALL_STATE(10)] = 609,
  [SMALL_STATE(11)] = 651,
  [SMALL_STATE(12)] = 693,
  [SMALL_STATE(13)] = 735,
  [SMALL_STATE(14)] = 826,
  [SMALL_STATE(15)] = 866,
  [SMALL_STATE(16)] = 906,
  [SMALL_STATE(17)] = 960,
  [SMALL_STATE(18)] = 1000,
  [SMALL_STATE(19)] = 1040,
  [SMALL_STATE(20)] = 1080,
  [SMALL_STATE(21)] = 1134,
  [SMALL_STATE(22)] = 1176,
  [SMALL_STATE(23)] = 1215,
  [SMALL_STATE(24)] = 1254,
  [SMALL_STATE(25)] = 1293,
  [SMALL_STATE(26)] = 1332,
  [SMALL_STATE(27)] = 1371,
  [SMALL_STATE(28)] = 1407,
  [SMALL_STATE(29)] = 1476,
  [SMALL_STATE(30)] = 1545,
  [SMALL_STATE(31)] = 1575,
  [SMALL_STATE(32)] = 1619,
  [SMALL_STATE(33)] = 1663,
  [SMALL_STATE(34)] = 1690,
  [SMALL_STATE(35)] = 1717,
  [SMALL_STATE(36)] = 1744,
  [SMALL_STATE(37)] = 1797,
  [SMALL_STATE(38)] = 1850,
  [SMALL_STATE(39)] = 1903,
  [SMALL_STATE(40)] = 1956,
  [SMALL_STATE(41)] = 2009,
  [SMALL_STATE(42)] = 2046,
  [SMALL_STATE(43)] = 2083,
  [SMALL_STATE(44)] = 2117,
  [SMALL_STATE(45)] = 2143,
  [SMALL_STATE(46)] = 2189,
  [SMALL_STATE(47)] = 2215,
  [SMALL_STATE(48)] = 2261,
  [SMALL_STATE(49)] = 2287,
  [SMALL_STATE(50)] = 2333,
  [SMALL_STATE(51)] = 2354,
  [SMALL_STATE(52)] = 2377,
  [SMALL_STATE(53)] = 2400,
  [SMALL_STATE(54)] = 2423,
  [SMALL_STATE(55)] = 2446,
  [SMALL_STATE(56)] = 2469,
  [SMALL_STATE(57)] = 2510,
  [SMALL_STATE(58)] = 2531,
  [SMALL_STATE(59)] = 2552,
  [SMALL_STATE(60)] = 2573,
  [SMALL_STATE(61)] = 2594,
  [SMALL_STATE(62)] = 2623,
  [SMALL_STATE(63)] = 2664,
  [SMALL_STATE(64)] = 2685,
  [SMALL_STATE(65)] = 2706,
  [SMALL_STATE(66)] = 2727,
  [SMALL_STATE(67)] = 2756,
  [SMALL_STATE(68)] = 2792,
  [SMALL_STATE(69)] = 2828,
  [SMALL_STATE(70)] = 2864,
  [SMALL_STATE(71)] = 2900,
  [SMALL_STATE(72)] = 2936,
  [SMALL_STATE(73)] = 2972,
  [SMALL_STATE(74)] = 2990,
  [SMALL_STATE(75)] = 3026,
  [SMALL_STATE(76)] = 3062,
  [SMALL_STATE(77)] = 3092,
  [SMALL_STATE(78)] = 3128,
  [SMALL_STATE(79)] = 3164,
  [SMALL_STATE(80)] = 3194,
  [SMALL_STATE(81)] = 3230,
  [SMALL_STATE(82)] = 3266,
  [SMALL_STATE(83)] = 3299,
  [SMALL_STATE(84)] = 3332,
  [SMALL_STATE(85)] = 3347,
  [SMALL_STATE(86)] = 3362,
  [SMALL_STATE(87)] = 3377,
  [SMALL_STATE(88)] = 3410,
  [SMALL_STATE(89)] = 3425,
  [SMALL_STATE(90)] = 3458,
  [SMALL_STATE(91)] = 3491,
  [SMALL_STATE(92)] = 3524,
  [SMALL_STATE(93)] = 3551,
  [SMALL_STATE(94)] = 3584,
  [SMALL_STATE(95)] = 3599,
  [SMALL_STATE(96)] = 3614,
  [SMALL_STATE(97)] = 3647,
  [SMALL_STATE(98)] = 3680,
  [SMALL_STATE(99)] = 3713,
  [SMALL_STATE(100)] = 3740,
  [SMALL_STATE(101)] = 3755,
  [SMALL_STATE(102)] = 3770,
  [SMALL_STATE(103)] = 3785,
  [SMALL_STATE(104)] = 3800,
  [SMALL_STATE(105)] = 3817,
  [SMALL_STATE(106)] = 3832,
  [SMALL_STATE(107)] = 3848,
  [SMALL_STATE(108)] = 3864,
  [SMALL_STATE(109)] = 3880,
  [SMALL_STATE(110)] = 3896,
  [SMALL_STATE(111)] = 3912,
  [SMALL_STATE(112)] = 3928,
  [SMALL_STATE(113)] = 3944,
  [SMALL_STATE(114)] = 3960,
  [SMALL_STATE(115)] = 3976,
  [SMALL_STATE(116)] = 3992,
  [SMALL_STATE(117)] = 4008,
  [SMALL_STATE(118)] = 4024,
  [SMALL_STATE(119)] = 4040,
  [SMALL_STATE(120)] = 4056,
  [SMALL_STATE(121)] = 4072,
  [SMALL_STATE(122)] = 4088,
  [SMALL_STATE(123)] = 4104,
  [SMALL_STATE(124)] = 4118,
  [SMALL_STATE(125)] = 4134,
  [SMALL_STATE(126)] = 4150,
  [SMALL_STATE(127)] = 4166,
  [SMALL_STATE(128)] = 4179,
  [SMALL_STATE(129)] = 4192,
  [SMALL_STATE(130)] = 4205,
  [SMALL_STATE(131)] = 4218,
  [SMALL_STATE(132)] = 4231,
  [SMALL_STATE(133)] = 4244,
  [SMALL_STATE(134)] = 4257,
  [SMALL_STATE(135)] = 4270,
  [SMALL_STATE(136)] = 4283,
  [SMALL_STATE(137)] = 4296,
  [SMALL_STATE(138)] = 4309,
  [SMALL_STATE(139)] = 4322,
  [SMALL_STATE(140)] = 4339,
  [SMALL_STATE(141)] = 4352,
  [SMALL_STATE(142)] = 4365,
  [SMALL_STATE(143)] = 4378,
  [SMALL_STATE(144)] = 4391,
  [SMALL_STATE(145)] = 4404,
  [SMALL_STATE(146)] = 4417,
  [SMALL_STATE(147)] = 4446,
  [SMALL_STATE(148)] = 4459,
  [SMALL_STATE(149)] = 4472,
  [SMALL_STATE(150)] = 4485,
  [SMALL_STATE(151)] = 4513,
  [SMALL_STATE(152)] = 4525,
  [SMALL_STATE(153)] = 4537,
  [SMALL_STATE(154)] = 4565,
  [SMALL_STATE(155)] = 4593,
  [SMALL_STATE(156)] = 4621,
  [SMALL_STATE(157)] = 4633,
  [SMALL_STATE(158)] = 4645,
  [SMALL_STATE(159)] = 4658,
  [SMALL_STATE(160)] = 4671,
  [SMALL_STATE(161)] = 4696,
  [SMALL_STATE(162)] = 4721,
  [SMALL_STATE(163)] = 4746,
  [SMALL_STATE(164)] = 4757,
  [SMALL_STATE(165)] = 4782,
  [SMALL_STATE(166)] = 4807,
  [SMALL_STATE(167)] = 4820,
  [SMALL_STATE(168)] = 4833,
  [SMALL_STATE(169)] = 4858,
  [SMALL_STATE(170)] = 4867,
  [SMALL_STATE(171)] = 4876,
  [SMALL_STATE(172)] = 4895,
  [SMALL_STATE(173)] = 4914,
  [SMALL_STATE(174)] = 4933,
  [SMALL_STATE(175)] = 4952,
  [SMALL_STATE(176)] = 4971,
  [SMALL_STATE(177)] = 4986,
  [SMALL_STATE(178)] = 4995,
  [SMALL_STATE(179)] = 5014,
  [SMALL_STATE(180)] = 5023,
  [SMALL_STATE(181)] = 5032,
  [SMALL_STATE(182)] = 5041,
  [SMALL_STATE(183)] = 5050,
  [SMALL_STATE(184)] = 5069,
  [SMALL_STATE(185)] = 5088,
  [SMALL_STATE(186)] = 5100,
  [SMALL_STATE(187)] = 5116,
  [SMALL_STATE(188)] = 5126,
  [SMALL_STATE(189)] = 5138,
  [SMALL_STATE(190)] = 5152,
  [SMALL_STATE(191)] = 5168,
  [SMALL_STATE(192)] = 5182,
  [SMALL_STATE(193)] = 5192,
  [SMALL_STATE(194)] = 5201,
  [SMALL_STATE(195)] = 5212,
  [SMALL_STATE(196)] = 5223,
  [SMALL_STATE(197)] = 5234,
  [SMALL_STATE(198)] = 5241,
  [SMALL_STATE(199)] = 5252,
  [SMALL_STATE(200)] = 5262,
  [SMALL_STATE(201)] = 5272,
  [SMALL_STATE(202)] = 5278,
  [SMALL_STATE(203)] = 5288,
  [SMALL_STATE(204)] = 5294,
  [SMALL_STATE(205)] = 5304,
  [SMALL_STATE(206)] = 5314,
  [SMALL_STATE(207)] = 5324,
  [SMALL_STATE(208)] = 5330,
  [SMALL_STATE(209)] = 5340,
  [SMALL_STATE(210)] = 5350,
  [SMALL_STATE(211)] = 5360,
  [SMALL_STATE(212)] = 5370,
  [SMALL_STATE(213)] = 5380,
  [SMALL_STATE(214)] = 5390,
  [SMALL_STATE(215)] = 5400,
  [SMALL_STATE(216)] = 5410,
  [SMALL_STATE(217)] = 5420,
  [SMALL_STATE(218)] = 5430,
  [SMALL_STATE(219)] = 5440,
  [SMALL_STATE(220)] = 5450,
  [SMALL_STATE(221)] = 5455,
  [SMALL_STATE(222)] = 5462,
  [SMALL_STATE(223)] = 5467,
  [SMALL_STATE(224)] = 5472,
  [SMALL_STATE(225)] = 5477,
  [SMALL_STATE(226)] = 5484,
  [SMALL_STATE(227)] = 5489,
  [SMALL_STATE(228)] = 5496,
  [SMALL_STATE(229)] = 5501,
  [SMALL_STATE(230)] = 5508,
  [SMALL_STATE(231)] = 5513,
  [SMALL_STATE(232)] = 5520,
  [SMALL_STATE(233)] = 5527,
  [SMALL_STATE(234)] = 5534,
  [SMALL_STATE(235)] = 5539,
  [SMALL_STATE(236)] = 5546,
  [SMALL_STATE(237)] = 5553,
  [SMALL_STATE(238)] = 5558,
  [SMALL_STATE(239)] = 5563,
  [SMALL_STATE(240)] = 5568,
  [SMALL_STATE(241)] = 5573,
  [SMALL_STATE(242)] = 5580,
  [SMALL_STATE(243)] = 5587,
  [SMALL_STATE(244)] = 5594,
  [SMALL_STATE(245)] = 5599,
  [SMALL_STATE(246)] = 5606,
  [SMALL_STATE(247)] = 5610,
  [SMALL_STATE(248)] = 5614,
  [SMALL_STATE(249)] = 5618,
  [SMALL_STATE(250)] = 5622,
  [SMALL_STATE(251)] = 5626,
  [SMALL_STATE(252)] = 5630,
  [SMALL_STATE(253)] = 5634,
  [SMALL_STATE(254)] = 5638,
  [SMALL_STATE(255)] = 5642,
  [SMALL_STATE(256)] = 5646,
  [SMALL_STATE(257)] = 5650,
  [SMALL_STATE(258)] = 5654,
  [SMALL_STATE(259)] = 5658,
  [SMALL_STATE(260)] = 5662,
  [SMALL_STATE(261)] = 5666,
  [SMALL_STATE(262)] = 5670,
  [SMALL_STATE(263)] = 5674,
  [SMALL_STATE(264)] = 5678,
  [SMALL_STATE(265)] = 5682,
  [SMALL_STATE(266)] = 5686,
  [SMALL_STATE(267)] = 5690,
  [SMALL_STATE(268)] = 5694,
  [SMALL_STATE(269)] = 5698,
  [SMALL_STATE(270)] = 5702,
  [SMALL_STATE(271)] = 5706,
  [SMALL_STATE(272)] = 5710,
  [SMALL_STATE(273)] = 5714,
  [SMALL_STATE(274)] = 5718,
  [SMALL_STATE(275)] = 5722,
  [SMALL_STATE(276)] = 5726,
  [SMALL_STATE(277)] = 5730,
  [SMALL_STATE(278)] = 5734,
  [SMALL_STATE(279)] = 5738,
  [SMALL_STATE(280)] = 5742,
  [SMALL_STATE(281)] = 5746,
  [SMALL_STATE(282)] = 5750,
  [SMALL_STATE(283)] = 5754,
  [SMALL_STATE(284)] = 5758,
  [SMALL_STATE(285)] = 5762,
  [SMALL_STATE(286)] = 5766,
  [SMALL_STATE(287)] = 5770,
  [SMALL_STATE(288)] = 5774,
  [SMALL_STATE(289)] = 5778,
  [SMALL_STATE(290)] = 5782,
  [SMALL_STATE(291)] = 5786,
  [SMALL_STATE(292)] = 5790,
  [SMALL_STATE(293)] = 5794,
  [SMALL_STATE(294)] = 5798,
  [SMALL_STATE(295)] = 5802,
  [SMALL_STATE(296)] = 5806,
  [SMALL_STATE(297)] = 5810,
  [SMALL_STATE(298)] = 5814,
  [SMALL_STATE(299)] = 5818,
  [SMALL_STATE(300)] = 5822,
  [SMALL_STATE(301)] = 5826,
  [SMALL_STATE(302)] = 5830,
  [SMALL_STATE(303)] = 5834,
  [SMALL_STATE(304)] = 5838,
  [SMALL_STATE(305)] = 5842,
  [SMALL_STATE(306)] = 5846,
  [SMALL_STATE(307)] = 5850,
  [SMALL_STATE(308)] = 5854,
  [SMALL_STATE(309)] = 5858,
  [SMALL_STATE(310)] = 5862,
  [SMALL_STATE(311)] = 5866,
  [SMALL_STATE(312)] = 5870,
  [SMALL_STATE(313)] = 5874,
  [SMALL_STATE(314)] = 5878,
  [SMALL_STATE(315)] = 5882,
  [SMALL_STATE(316)] = 5886,
  [SMALL_STATE(317)] = 5890,
  [SMALL_STATE(318)] = 5894,
  [SMALL_STATE(319)] = 5898,
  [SMALL_STATE(320)] = 5902,
  [SMALL_STATE(321)] = 5906,
  [SMALL_STATE(322)] = 5910,
  [SMALL_STATE(323)] = 5914,
  [SMALL_STATE(324)] = 5918,
  [SMALL_STATE(325)] = 5922,
  [SMALL_STATE(326)] = 5926,
  [SMALL_STATE(327)] = 5930,
  [SMALL_STATE(328)] = 5934,
  [SMALL_STATE(329)] = 5938,
  [SMALL_STATE(330)] = 5942,
  [SMALL_STATE(331)] = 5946,
  [SMALL_STATE(332)] = 5950,
  [SMALL_STATE(333)] = 5954,
  [SMALL_STATE(334)] = 5958,
  [SMALL_STATE(335)] = 5962,
  [SMALL_STATE(336)] = 5966,
  [SMALL_STATE(337)] = 5970,
  [SMALL_STATE(338)] = 5974,
  [SMALL_STATE(339)] = 5978,
  [SMALL_STATE(340)] = 5982,
  [SMALL_STATE(341)] = 5986,
  [SMALL_STATE(342)] = 5990,
  [SMALL_STATE(343)] = 5994,
  [SMALL_STATE(344)] = 5998,
  [SMALL_STATE(345)] = 6002,
  [SMALL_STATE(346)] = 6006,
  [SMALL_STATE(347)] = 6010,
  [SMALL_STATE(348)] = 6014,
  [SMALL_STATE(349)] = 6018,
  [SMALL_STATE(350)] = 6022,
  [SMALL_STATE(351)] = 6026,
  [SMALL_STATE(352)] = 6030,
  [SMALL_STATE(353)] = 6034,
  [SMALL_STATE(354)] = 6038,
  [SMALL_STATE(355)] = 6042,
  [SMALL_STATE(356)] = 6046,
  [SMALL_STATE(357)] = 6050,
  [SMALL_STATE(358)] = 6054,
  [SMALL_STATE(359)] = 6058,
  [SMALL_STATE(360)] = 6062,
  [SMALL_STATE(361)] = 6066,
  [SMALL_STATE(362)] = 6070,
  [SMALL_STATE(363)] = 6074,
  [SMALL_STATE(364)] = 6078,
  [SMALL_STATE(365)] = 6082,
  [SMALL_STATE(366)] = 6086,
  [SMALL_STATE(367)] = 6090,
  [SMALL_STATE(368)] = 6094,
  [SMALL_STATE(369)] = 6098,
  [SMALL_STATE(370)] = 6102,
  [SMALL_STATE(371)] = 6106,
  [SMALL_STATE(372)] = 6110,
  [SMALL_STATE(373)] = 6114,
  [SMALL_STATE(374)] = 6118,
  [SMALL_STATE(375)] = 6122,
  [SMALL_STATE(376)] = 6126,
  [SMALL_STATE(377)] = 6130,
  [SMALL_STATE(378)] = 6134,
  [SMALL_STATE(379)] = 6138,
  [SMALL_STATE(380)] = 6142,
  [SMALL_STATE(381)] = 6146,
  [SMALL_STATE(382)] = 6150,
  [SMALL_STATE(383)] = 6154,
  [SMALL_STATE(384)] = 6158,
  [SMALL_STATE(385)] = 6162,
  [SMALL_STATE(386)] = 6166,
  [SMALL_STATE(387)] = 6170,
  [SMALL_STATE(388)] = 6174,
  [SMALL_STATE(389)] = 6178,
  [SMALL_STATE(390)] = 6182,
  [SMALL_STATE(391)] = 6186,
  [SMALL_STATE(392)] = 6190,
  [SMALL_STATE(393)] = 6194,
  [SMALL_STATE(394)] = 6198,
  [SMALL_STATE(395)] = 6202,
  [SMALL_STATE(396)] = 6206,
  [SMALL_STATE(397)] = 6210,
  [SMALL_STATE(398)] = 6214,
  [SMALL_STATE(399)] = 6218,
  [SMALL_STATE(400)] = 6222,
  [SMALL_STATE(401)] = 6226,
  [SMALL_STATE(402)] = 6230,
  [SMALL_STATE(403)] = 6234,
  [SMALL_STATE(404)] = 6238,
  [SMALL_STATE(405)] = 6242,
  [SMALL_STATE(406)] = 6246,
  [SMALL_STATE(407)] = 6250,
  [SMALL_STATE(408)] = 6254,
  [SMALL_STATE(409)] = 6258,
  [SMALL_STATE(410)] = 6262,
  [SMALL_STATE(411)] = 6266,
  [SMALL_STATE(412)] = 6270,
  [SMALL_STATE(413)] = 6274,
  [SMALL_STATE(414)] = 6278,
  [SMALL_STATE(415)] = 6282,
  [SMALL_STATE(416)] = 6286,
  [SMALL_STATE(417)] = 6290,
  [SMALL_STATE(418)] = 6294,
  [SMALL_STATE(419)] = 6298,
  [SMALL_STATE(420)] = 6302,
  [SMALL_STATE(421)] = 6306,
  [SMALL_STATE(422)] = 6310,
  [SMALL_STATE(423)] = 6314,
  [SMALL_STATE(424)] = 6318,
  [SMALL_STATE(425)] = 6322,
  [SMALL_STATE(426)] = 6326,
  [SMALL_STATE(427)] = 6330,
  [SMALL_STATE(428)] = 6334,
  [SMALL_STATE(429)] = 6338,
  [SMALL_STATE(430)] = 6342,
  [SMALL_STATE(431)] = 6346,
  [SMALL_STATE(432)] = 6350,
  [SMALL_STATE(433)] = 6354,
  [SMALL_STATE(434)] = 6358,
  [SMALL_STATE(435)] = 6362,
  [SMALL_STATE(436)] = 6366,
  [SMALL_STATE(437)] = 6370,
  [SMALL_STATE(438)] = 6374,
  [SMALL_STATE(439)] = 6378,
  [SMALL_STATE(440)] = 6382,
  [SMALL_STATE(441)] = 6386,
  [SMALL_STATE(442)] = 6390,
  [SMALL_STATE(443)] = 6394,
  [SMALL_STATE(444)] = 6398,
  [SMALL_STATE(445)] = 6402,
  [SMALL_STATE(446)] = 6406,
  [SMALL_STATE(447)] = 6410,
  [SMALL_STATE(448)] = 6414,
  [SMALL_STATE(449)] = 6418,
  [SMALL_STATE(450)] = 6422,
  [SMALL_STATE(451)] = 6426,
  [SMALL_STATE(452)] = 6430,
  [SMALL_STATE(453)] = 6434,
  [SMALL_STATE(454)] = 6438,
  [SMALL_STATE(455)] = 6442,
  [SMALL_STATE(456)] = 6446,
  [SMALL_STATE(457)] = 6450,
  [SMALL_STATE(458)] = 6454,
  [SMALL_STATE(459)] = 6458,
  [SMALL_STATE(460)] = 6462,
  [SMALL_STATE(461)] = 6466,
  [SMALL_STATE(462)] = 6470,
  [SMALL_STATE(463)] = 6474,
  [SMALL_STATE(464)] = 6478,
  [SMALL_STATE(465)] = 6482,
  [SMALL_STATE(466)] = 6486,
  [SMALL_STATE(467)] = 6490,
  [SMALL_STATE(468)] = 6494,
  [SMALL_STATE(469)] = 6498,
  [SMALL_STATE(470)] = 6502,
  [SMALL_STATE(471)] = 6506,
  [SMALL_STATE(472)] = 6510,
  [SMALL_STATE(473)] = 6514,
  [SMALL_STATE(474)] = 6518,
  [SMALL_STATE(475)] = 6522,
  [SMALL_STATE(476)] = 6526,
  [SMALL_STATE(477)] = 6530,
  [SMALL_STATE(478)] = 6534,
  [SMALL_STATE(479)] = 6538,
  [SMALL_STATE(480)] = 6542,
  [SMALL_STATE(481)] = 6546,
  [SMALL_STATE(482)] = 6550,
  [SMALL_STATE(483)] = 6554,
  [SMALL_STATE(484)] = 6558,
  [SMALL_STATE(485)] = 6562,
  [SMALL_STATE(486)] = 6566,
  [SMALL_STATE(487)] = 6570,
  [SMALL_STATE(488)] = 6574,
  [SMALL_STATE(489)] = 6578,
  [SMALL_STATE(490)] = 6582,
  [SMALL_STATE(491)] = 6586,
  [SMALL_STATE(492)] = 6590,
  [SMALL_STATE(493)] = 6594,
  [SMALL_STATE(494)] = 6598,
  [SMALL_STATE(495)] = 6602,
  [SMALL_STATE(496)] = 6606,
  [SMALL_STATE(497)] = 6610,
  [SMALL_STATE(498)] = 6614,
  [SMALL_STATE(499)] = 6618,
  [SMALL_STATE(500)] = 6622,
  [SMALL_STATE(501)] = 6626,
  [SMALL_STATE(502)] = 6630,
  [SMALL_STATE(503)] = 6634,
  [SMALL_STATE(504)] = 6638,
  [SMALL_STATE(505)] = 6642,
  [SMALL_STATE(506)] = 6646,
  [SMALL_STATE(507)] = 6650,
  [SMALL_STATE(508)] = 6654,
  [SMALL_STATE(509)] = 6658,
  [SMALL_STATE(510)] = 6662,
  [SMALL_STATE(511)] = 6666,
  [SMALL_STATE(512)] = 6670,
  [SMALL_STATE(513)] = 6674,
  [SMALL_STATE(514)] = 6678,
  [SMALL_STATE(515)] = 6682,
  [SMALL_STATE(516)] = 6686,
  [SMALL_STATE(517)] = 6690,
  [SMALL_STATE(518)] = 6694,
  [SMALL_STATE(519)] = 6698,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(344),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 2),
  [21] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_body, 2),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
  [29] = {.entry = {.count = 1, .reusable = false}}, SHIFT(21),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [39] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [41] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [43] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [45] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(160),
  [49] = {.entry = {.count = 1, .reusable = false}}, SHIFT(197),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [53] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [57] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [59] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(3),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(209),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(49),
  [70] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(21),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(21),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(69),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(294),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(54),
  [85] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(73),
  [88] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(312),
  [91] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(198),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(227),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(160),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(197),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(255),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(43),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(234),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(92),
  [115] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [119] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [121] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(345),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(309),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(340),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(43),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(234),
  [138] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 1),
  [140] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 1),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [144] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [146] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 3),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 3),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Nth_ending, 3),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Nth_ending, 3),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 2),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 2),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 3),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 3),
  [168] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 1),
  [170] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune, 1),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(292),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1),
  [186] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(24),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_info_line, 4, .production_id = 1),
  [192] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_info_line, 4, .production_id = 1),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TEXTLINE, 2),
  [196] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TEXTLINE, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 2),
  [200] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet_directives, 2),
  [204] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stylesheet_directives, 2),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(192),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(192),
  [214] = {.entry = {.count = 1, .reusable = false}}, SHIFT(187),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [218] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header, 2),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(330),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [230] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2),
  [232] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(32),
  [235] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(210),
  [238] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(330),
  [241] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(281),
  [244] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_header_repeat1, 2), SHIFT_REPEAT(244),
  [247] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_header_info_line, 3, .production_id = 1),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_file_header_info_line, 3, .production_id = 1),
  [251] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [253] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [255] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [257] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [259] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [261] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [263] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [265] = {.entry = {.count = 1, .reusable = true}}, SHIFT(161),
  [267] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(45),
  [272] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [274] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(89),
  [277] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(311),
  [280] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(57),
  [283] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(104),
  [286] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(198),
  [289] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(227),
  [292] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(161),
  [295] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(197),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [302] = {.entry = {.count = 1, .reusable = false}}, SHIFT(42),
  [304] = {.entry = {.count = 1, .reusable = false}}, SHIFT(232),
  [306] = {.entry = {.count = 1, .reusable = false}}, SHIFT(60),
  [308] = {.entry = {.count = 1, .reusable = false}}, SHIFT(103),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [312] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_line, 2),
  [316] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(42),
  [319] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(232),
  [322] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(60),
  [325] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(103),
  [328] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(58),
  [331] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(298),
  [334] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(298),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [346] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 2),
  [348] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 2),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 3),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 3),
  [354] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [356] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(332),
  [359] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [361] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [363] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [365] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(51),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 3),
  [370] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [372] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 2),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 1),
  [376] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [380] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [382] = {.entry = {.count = 1, .reusable = true}}, SHIFT(165),
  [384] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [386] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_bar_line, 1),
  [388] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [390] = {.entry = {.count = 1, .reusable = false}}, SHIFT(100),
  [392] = {.entry = {.count = 1, .reusable = true}}, SHIFT(65),
  [394] = {.entry = {.count = 1, .reusable = false}}, SHIFT(273),
  [396] = {.entry = {.count = 1, .reusable = false}}, SHIFT(101),
  [398] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(156),
  [401] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(151),
  [404] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(152),
  [407] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(323),
  [410] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [412] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [414] = {.entry = {.count = 1, .reusable = true}}, SHIFT(164),
  [416] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [418] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(65),
  [421] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [423] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [425] = {.entry = {.count = 1, .reusable = false}}, SHIFT(152),
  [427] = {.entry = {.count = 1, .reusable = false}}, SHIFT(323),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [431] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [433] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [435] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [437] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2),
  [439] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(294),
  [442] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(54),
  [445] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(73),
  [448] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(198),
  [451] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(197),
  [454] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [456] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [458] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [460] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [462] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [464] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [466] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [468] = {.entry = {.count = 1, .reusable = true}}, SHIFT(158),
  [470] = {.entry = {.count = 1, .reusable = true}}, SHIFT(166),
  [472] = {.entry = {.count = 1, .reusable = false}}, SHIFT(158),
  [474] = {.entry = {.count = 1, .reusable = false}}, SHIFT(159),
  [476] = {.entry = {.count = 1, .reusable = false}}, SHIFT(338),
  [478] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [480] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [482] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(158),
  [487] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(166),
  [490] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(158),
  [493] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(159),
  [496] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(338),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [503] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [505] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 4),
  [507] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 4),
  [509] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 4),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 59),
  [513] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 5),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(156),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [519] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 2),
  [521] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 2),
  [523] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 6),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [527] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 3),
  [529] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [533] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [535] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [539] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [541] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [543] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 6),
  [545] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [547] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 3),
  [549] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [551] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 5),
  [553] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [555] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 7),
  [557] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [559] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [561] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 4),
  [563] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [565] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [567] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [569] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [571] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [575] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [577] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [579] = {.entry = {.count = 1, .reusable = true}}, SHIFT(147),
  [581] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [583] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [585] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [587] = {.entry = {.count = 1, .reusable = true}}, SHIFT(145),
  [589] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 6),
  [591] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 8),
  [593] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [595] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(198),
  [598] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [600] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [602] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HYPHEN, 1),
  [604] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_syllable, 1),
  [606] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [608] = {.entry = {.count = 1, .reusable = true}}, SHIFT(162),
  [610] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_text, 1),
  [612] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse_number, 2),
  [614] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_text, 1),
  [616] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_syllable, 1),
  [618] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [620] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [622] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HYPHEN, 1),
  [624] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse_number, 2),
  [626] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [628] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [630] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [632] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [634] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [636] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 2),
  [638] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [640] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [642] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [644] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [646] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [648] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2),
  [650] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2), SHIFT_REPEAT(286),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [657] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_section, 1),
  [659] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(294),
  [662] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(54),
  [665] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [667] = {.entry = {.count = 1, .reusable = true}}, SHIFT(163),
  [669] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [671] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [673] = {.entry = {.count = 1, .reusable = false}}, SHIFT(203),
  [675] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(278),
  [679] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 2),
  [681] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 3),
  [683] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(278),
  [686] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2),
  [688] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [690] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 2),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [694] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 1),
  [696] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [698] = {.entry = {.count = 1, .reusable = false}}, SHIFT(314),
  [700] = {.entry = {.count = 1, .reusable = false}}, SHIFT(331),
  [702] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_line, 2),
  [704] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(331),
  [707] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [709] = {.entry = {.count = 1, .reusable = true}}, SHIFT(182),
  [711] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [713] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [715] = {.entry = {.count = 1, .reusable = false}}, SHIFT(99),
  [717] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_words_line, 4),
  [719] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_words_line, 3),
  [721] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2), SHIFT_REPEAT(99),
  [724] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(314),
  [727] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [729] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [731] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [733] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2),
  [735] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_file_structure_repeat1, 2), SHIFT_REPEAT(20),
  [738] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_file_structure, 3),
  [740] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [742] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [744] = {.entry = {.count = 1, .reusable = false}}, SHIFT(220),
  [746] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined, 4),
  [748] = {.entry = {.count = 1, .reusable = true}}, SHIFT(519),
  [750] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [752] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [754] = {.entry = {.count = 1, .reusable = true}}, SHIFT(297),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [760] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [762] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [764] = {.entry = {.count = 1, .reusable = true}}, SHIFT(517),
  [766] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [768] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [770] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 3),
  [772] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [774] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(518),
  [780] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [782] = {.entry = {.count = 1, .reusable = true}}, SHIFT(380),
  [784] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [786] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [788] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [790] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [792] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [794] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [796] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [798] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [800] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [802] = {.entry = {.count = 1, .reusable = true}}, SHIFT(383),
  [804] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [806] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [808] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [810] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [812] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [814] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [816] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [818] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [820] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined, 4),
  [822] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [824] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [826] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [828] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [830] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [832] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [834] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [836] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [838] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [840] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [842] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [844] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [846] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [848] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [850] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [852] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [874] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [898] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 59),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [910] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number, 2),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [938] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TEXT, 1),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(245),
  [958] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [960] = {.entry = {.count = 1, .reusable = true}}, SHIFT(167),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(359),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(360),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(362),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(363),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(364),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(365),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(366),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(367),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(368),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(369),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(370),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(371),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(372),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(373),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(374),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(375),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(376),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(377),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(378),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(379),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(381),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(382),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(384),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(385),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(386),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(387),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(388),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(389),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(390),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(391),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(392),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(393),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(394),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(395),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(396),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(397),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(398),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(399),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(400),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(401),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(402),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(403),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(404),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(405),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(406),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(407),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(408),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(409),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(410),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(411),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(412),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(413),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(414),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(415),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(416),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(417),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(418),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(419),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(420),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(421),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(422),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(423),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(424),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(425),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(426),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(427),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(428),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(429),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(430),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(431),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(432),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(433),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(434),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(435),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(436),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(437),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(438),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(439),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(440),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(441),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(442),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(443),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(444),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(445),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(446),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(447),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(448),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(449),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(450),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(451),
  [1194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(452),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(453),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(454),
  [1200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(455),
  [1202] = {.entry = {.count = 1, .reusable = true}}, SHIFT(456),
  [1204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(457),
  [1206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(458),
  [1208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(459),
  [1210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(460),
  [1212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(461),
  [1214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(462),
  [1216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(463),
  [1218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(464),
  [1220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(465),
  [1222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(466),
  [1224] = {.entry = {.count = 1, .reusable = true}}, SHIFT(467),
  [1226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(468),
  [1228] = {.entry = {.count = 1, .reusable = true}}, SHIFT(469),
  [1230] = {.entry = {.count = 1, .reusable = true}}, SHIFT(470),
  [1232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(471),
  [1234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(472),
  [1236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(473),
  [1238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(474),
  [1240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(475),
  [1242] = {.entry = {.count = 1, .reusable = true}}, SHIFT(476),
  [1244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(477),
  [1246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(478),
  [1248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(479),
  [1250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(480),
  [1252] = {.entry = {.count = 1, .reusable = true}}, SHIFT(481),
  [1254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(482),
  [1256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(483),
  [1258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(484),
  [1260] = {.entry = {.count = 1, .reusable = true}}, SHIFT(485),
  [1262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(486),
  [1264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(487),
  [1266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(488),
  [1268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(489),
  [1270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(490),
  [1272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(491),
  [1274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(492),
  [1276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(493),
  [1278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(494),
  [1280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(495),
  [1282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(496),
  [1284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(497),
  [1286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(498),
  [1288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(499),
  [1290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(500),
  [1292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(501),
  [1294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(502),
  [1296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(503),
  [1298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(504),
  [1300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(505),
  [1302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(506),
  [1304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(507),
  [1306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(508),
  [1308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(509),
  [1310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(510),
  [1312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(511),
  [1314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(512),
  [1316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(513),
  [1318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(514),
  [1320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(515),
  [1322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(516),
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
