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
#define STATE_COUNT 362
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 199
#define ALIAS_COUNT 0
#define TOKEN_COUNT 142
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
  anon_sym_DOLLAR = 12,
  aux_sym_body_info_line_token1 = 13,
  anon_sym_BQUOTE = 14,
  sym_slur_open = 15,
  sym_slur_close = 16,
  aux_sym__note_construct_token1 = 17,
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
  aux_sym_lyric_syllable_token1 = 47,
  aux_sym_verse_number_token1 = 48,
  anon_sym_DOT = 49,
  anon_sym_BANGtrill_BANG = 50,
  anon_sym_BANGtrill_LPAREN_BANG = 51,
  anon_sym_BANGtrill_RPAREN_BANG = 52,
  anon_sym_BANGlowermordent_BANG = 53,
  anon_sym_BANGuppermordent_BANG = 54,
  anon_sym_BANGmordent_BANG = 55,
  anon_sym_BANGpralltriller_BANG = 56,
  anon_sym_BANGroll_BANG = 57,
  anon_sym_BANGturn_BANG = 58,
  anon_sym_BANGturnx_BANG = 59,
  anon_sym_BANGinvertedturn_BANG = 60,
  anon_sym_BANGinvertedturnx_BANG = 61,
  anon_sym_BANGarpeggio_BANG = 62,
  anon_sym_BANG_GT_BANG = 63,
  anon_sym_BANGaccent_BANG = 64,
  anon_sym_BANGemphasis_BANG = 65,
  anon_sym_BANGfermata_BANG = 66,
  anon_sym_BANGinvertedfermata_BANG = 67,
  anon_sym_BANGtenuto_BANG = 68,
  anon_sym_BANG0_BANG_DASH_BANG5_BANG = 69,
  anon_sym_BANG_PLUS_BANG = 70,
  anon_sym_BANGplus_BANG = 71,
  anon_sym_BANGsnap_BANG = 72,
  anon_sym_BANGslide_BANG = 73,
  anon_sym_BANGwedge_BANG = 74,
  anon_sym_BANGupbow_BANG = 75,
  anon_sym_BANGdownbow_BANG = 76,
  anon_sym_BANGopen_BANG = 77,
  anon_sym_BANGthumb_BANG = 78,
  anon_sym_BANGbreath_BANG = 79,
  anon_sym_BANGpppp_BANG = 80,
  anon_sym_BANGppp_BANG = 81,
  anon_sym_BANGpp_BANG = 82,
  anon_sym_BANGp_BANG = 83,
  anon_sym_BANGmp_BANG = 84,
  anon_sym_BANGmf_BANG = 85,
  anon_sym_BANGf_BANG = 86,
  anon_sym_BANGff_BANG = 87,
  anon_sym_BANGfff_BANG = 88,
  anon_sym_BANGffff_BANG = 89,
  anon_sym_BANGsfz_BANG = 90,
  anon_sym_BANGcrescendo_LPAREN_BANG = 91,
  anon_sym_BANG_LT_LPAREN_BANG = 92,
  anon_sym_BANGcrescendo_RPAREN_BANG = 93,
  anon_sym_BANG_LT_RPAREN_BANG = 94,
  anon_sym_BANGdiminuendo_LPAREN_BANG = 95,
  anon_sym_BANG_GT_LPAREN_BANG = 96,
  anon_sym_BANGdiminuendo_RPAREN_BANG = 97,
  anon_sym_BANG_GT_RPAREN_BANG = 98,
  anon_sym_BANGsegno_BANG = 99,
  anon_sym_BANGcoda_BANG = 100,
  anon_sym_BANGD_DOTS_DOT_BANG = 101,
  anon_sym_BANGD_DOTC_DOT_BANG = 102,
  anon_sym_BANGdacoda_BANG = 103,
  anon_sym_BANGdacapo_BANG = 104,
  anon_sym_BANGfine_BANG = 105,
  anon_sym_BANGshortphrase_BANG = 106,
  anon_sym_BANGmediumphrase_BANG = 107,
  anon_sym_BANGlongphrase_BANG = 108,
  sym_parts_line = 109,
  aux_sym_body_inline_info_token1 = 110,
  anon_sym_PERCENTabc_DASH = 111,
  sym_area = 112,
  sym_book = 113,
  sym_composer = 114,
  sym_discography = 115,
  sym_file = 116,
  sym_group = 117,
  sym_history = 118,
  sym_instruction = 119,
  sym_key = 120,
  sym_macros = 121,
  sym_meter = 122,
  sym_notes = 123,
  sym_origin = 124,
  anon_sym_X_COLON = 125,
  sym_remark = 126,
  sym_rhythm_line = 127,
  sym_source = 128,
  anon_sym_s_COLON = 129,
  sym_tempo = 130,
  sym_transcription = 131,
  sym_tune_title = 132,
  sym_unit_note_length = 133,
  anon_sym_U_COLON = 134,
  aux_sym_user_defined_token1 = 135,
  aux_sym_user_defined_token2 = 136,
  anon_sym_EQ = 137,
  sym_voice = 138,
  anon_sym_w_COLON = 139,
  aux_sym_words_line_token1 = 140,
  sym_words_postbody = 141,
  sym_source_file = 142,
  sym_TEXTLINE = 143,
  sym_HYPHEN = 144,
  sym_stylesheet_directives = 145,
  sym__MUSIC_CODE = 146,
  sym_tune = 147,
  sym_tune_header = 148,
  sym_tune_body = 149,
  sym__music_content = 150,
  sym_body_info_line = 151,
  sym_tune_header_info_line = 152,
  sym__nte_or_chrd = 153,
  sym_beam = 154,
  sym__note_construct = 155,
  sym__chord_cstrct = 156,
  sym_note = 157,
  sym_chord_note = 158,
  sym__pitch = 159,
  sym_multimeasure_rest = 160,
  sym_grace_note = 161,
  sym_chord_symbol_note = 162,
  sym_chord_symbol = 163,
  sym_decoration = 164,
  sym_bar = 165,
  sym_Nth_ending = 166,
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
  sym_TEXT = 177,
  sym_abc_version = 178,
  sym_reference_number = 179,
  sym_symbol_line = 180,
  sym_user_defined = 181,
  sym_words_line = 182,
  aux_sym__MUSIC_CODE_repeat1 = 183,
  aux_sym_tune_header_repeat1 = 184,
  aux_sym_tune_body_repeat1 = 185,
  aux_sym_beam_repeat1 = 186,
  aux_sym_beam_repeat2 = 187,
  aux_sym__note_construct_repeat1 = 188,
  aux_sym__chord_cstrct_repeat1 = 189,
  aux_sym__pitch_repeat1 = 190,
  aux_sym_grace_note_repeat1 = 191,
  aux_sym_bar_repeat1 = 192,
  aux_sym_nth_ending_number_repeat1 = 193,
  aux_sym_lyric_section_repeat1 = 194,
  aux_sym_abc_version_repeat1 = 195,
  aux_sym_symbol_line_repeat1 = 196,
  aux_sym_words_line_repeat1 = 197,
  aux_sym_words_line_repeat2 = 198,
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
  [anon_sym_DOLLAR] = "$",
  [aux_sym_body_info_line_token1] = "body_info_line_token1",
  [anon_sym_BQUOTE] = "`",
  [sym_slur_open] = "slur_open",
  [sym_slur_close] = "slur_close",
  [aux_sym__note_construct_token1] = "_note_construct_token1",
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
  [sym_source_file] = "source_file",
  [sym_TEXTLINE] = "TEXTLINE",
  [sym_HYPHEN] = "HYPHEN",
  [sym_stylesheet_directives] = "stylesheet_directives",
  [sym__MUSIC_CODE] = "_MUSIC_CODE",
  [sym_tune] = "tune",
  [sym_tune_header] = "tune_header",
  [sym_tune_body] = "tune_body",
  [sym__music_content] = "_music_content",
  [sym_body_info_line] = "body_info_line",
  [sym_tune_header_info_line] = "tune_header_info_line",
  [sym__nte_or_chrd] = "_nte_or_chrd",
  [sym_beam] = "beam",
  [sym__note_construct] = "_note_construct",
  [sym__chord_cstrct] = "_chord_cstrct",
  [sym_note] = "note",
  [sym_chord_note] = "chord_note",
  [sym__pitch] = "_pitch",
  [sym_multimeasure_rest] = "multimeasure_rest",
  [sym_grace_note] = "grace_note",
  [sym_chord_symbol_note] = "chord_symbol_note",
  [sym_chord_symbol] = "chord_symbol",
  [sym_decoration] = "decoration",
  [sym_bar] = "bar",
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
  [aux_sym__MUSIC_CODE_repeat1] = "_MUSIC_CODE_repeat1",
  [aux_sym_tune_header_repeat1] = "tune_header_repeat1",
  [aux_sym_tune_body_repeat1] = "tune_body_repeat1",
  [aux_sym_beam_repeat1] = "beam_repeat1",
  [aux_sym_beam_repeat2] = "beam_repeat2",
  [aux_sym__note_construct_repeat1] = "_note_construct_repeat1",
  [aux_sym__chord_cstrct_repeat1] = "_chord_cstrct_repeat1",
  [aux_sym__pitch_repeat1] = "_pitch_repeat1",
  [aux_sym_grace_note_repeat1] = "grace_note_repeat1",
  [aux_sym_bar_repeat1] = "bar_repeat1",
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
  [anon_sym_DOLLAR] = anon_sym_DOLLAR,
  [aux_sym_body_info_line_token1] = aux_sym_body_info_line_token1,
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
  [sym_slur_open] = sym_slur_open,
  [sym_slur_close] = sym_slur_close,
  [aux_sym__note_construct_token1] = aux_sym__note_construct_token1,
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
  [sym_source_file] = sym_source_file,
  [sym_TEXTLINE] = sym_TEXTLINE,
  [sym_HYPHEN] = sym_HYPHEN,
  [sym_stylesheet_directives] = sym_stylesheet_directives,
  [sym__MUSIC_CODE] = sym__MUSIC_CODE,
  [sym_tune] = sym_tune,
  [sym_tune_header] = sym_tune_header,
  [sym_tune_body] = sym_tune_body,
  [sym__music_content] = sym__music_content,
  [sym_body_info_line] = sym_body_info_line,
  [sym_tune_header_info_line] = sym_tune_header_info_line,
  [sym__nte_or_chrd] = sym__nte_or_chrd,
  [sym_beam] = sym_beam,
  [sym__note_construct] = sym__note_construct,
  [sym__chord_cstrct] = sym__chord_cstrct,
  [sym_note] = sym_note,
  [sym_chord_note] = sym_chord_note,
  [sym__pitch] = sym__pitch,
  [sym_multimeasure_rest] = sym_multimeasure_rest,
  [sym_grace_note] = sym_grace_note,
  [sym_chord_symbol_note] = sym_chord_symbol_note,
  [sym_chord_symbol] = sym_chord_symbol,
  [sym_decoration] = sym_decoration,
  [sym_bar] = sym_bar,
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
  [aux_sym__MUSIC_CODE_repeat1] = aux_sym__MUSIC_CODE_repeat1,
  [aux_sym_tune_header_repeat1] = aux_sym_tune_header_repeat1,
  [aux_sym_tune_body_repeat1] = aux_sym_tune_body_repeat1,
  [aux_sym_beam_repeat1] = aux_sym_beam_repeat1,
  [aux_sym_beam_repeat2] = aux_sym_beam_repeat2,
  [aux_sym__note_construct_repeat1] = aux_sym__note_construct_repeat1,
  [aux_sym__chord_cstrct_repeat1] = aux_sym__chord_cstrct_repeat1,
  [aux_sym__pitch_repeat1] = aux_sym__pitch_repeat1,
  [aux_sym_grace_note_repeat1] = aux_sym_grace_note_repeat1,
  [aux_sym_bar_repeat1] = aux_sym_bar_repeat1,
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
  [anon_sym_DOLLAR] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_body_info_line_token1] = {
    .visible = false,
    .named = false,
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
  [aux_sym__note_construct_token1] = {
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
  [sym_body_info_line] = {
    .visible = true,
    .named = true,
  },
  [sym_tune_header_info_line] = {
    .visible = true,
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
  [sym__note_construct] = {
    .visible = false,
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
  [sym_bar] = {
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
  [aux_sym__MUSIC_CODE_repeat1] = {
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
  [aux_sym_beam_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym__note_construct_repeat1] = {
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
  [aux_sym_bar_repeat1] = {
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
  [7] = 6,
  [8] = 5,
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
  [54] = 26,
  [55] = 55,
  [56] = 36,
  [57] = 57,
  [58] = 58,
  [59] = 59,
  [60] = 60,
  [61] = 61,
  [62] = 62,
  [63] = 62,
  [64] = 64,
  [65] = 65,
  [66] = 65,
  [67] = 12,
  [68] = 13,
  [69] = 14,
  [70] = 70,
  [71] = 71,
  [72] = 17,
  [73] = 73,
  [74] = 20,
  [75] = 19,
  [76] = 18,
  [77] = 21,
  [78] = 78,
  [79] = 79,
  [80] = 79,
  [81] = 81,
  [82] = 82,
  [83] = 83,
  [84] = 23,
  [85] = 32,
  [86] = 33,
  [87] = 87,
  [88] = 24,
  [89] = 31,
  [90] = 35,
  [91] = 26,
  [92] = 25,
  [93] = 28,
  [94] = 29,
  [95] = 95,
  [96] = 36,
  [97] = 27,
  [98] = 43,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 102,
  [103] = 103,
  [104] = 104,
  [105] = 101,
  [106] = 100,
  [107] = 99,
  [108] = 108,
  [109] = 108,
  [110] = 104,
  [111] = 45,
  [112] = 44,
  [113] = 42,
  [114] = 41,
  [115] = 103,
  [116] = 40,
  [117] = 39,
  [118] = 38,
  [119] = 119,
  [120] = 120,
  [121] = 46,
  [122] = 122,
  [123] = 123,
  [124] = 51,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 57,
  [129] = 55,
  [130] = 130,
  [131] = 131,
  [132] = 47,
  [133] = 133,
  [134] = 120,
  [135] = 135,
  [136] = 95,
  [137] = 131,
  [138] = 138,
  [139] = 130,
  [140] = 138,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 147,
  [148] = 148,
  [149] = 147,
  [150] = 148,
  [151] = 143,
  [152] = 146,
  [153] = 34,
  [154] = 154,
  [155] = 30,
  [156] = 145,
  [157] = 144,
  [158] = 158,
  [159] = 159,
  [160] = 160,
  [161] = 37,
  [162] = 162,
  [163] = 158,
  [164] = 164,
  [165] = 160,
  [166] = 159,
  [167] = 167,
  [168] = 168,
  [169] = 52,
  [170] = 127,
  [171] = 122,
  [172] = 172,
  [173] = 173,
  [174] = 50,
  [175] = 175,
  [176] = 176,
  [177] = 125,
  [178] = 168,
  [179] = 179,
  [180] = 126,
  [181] = 181,
  [182] = 182,
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
  [194] = 190,
  [195] = 195,
  [196] = 196,
  [197] = 197,
  [198] = 185,
  [199] = 199,
  [200] = 199,
  [201] = 197,
  [202] = 202,
  [203] = 203,
  [204] = 204,
  [205] = 203,
  [206] = 206,
  [207] = 196,
  [208] = 208,
  [209] = 209,
  [210] = 210,
  [211] = 211,
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
  [223] = 16,
  [224] = 224,
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
  [263] = 227,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 267,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 272,
  [273] = 273,
  [274] = 258,
  [275] = 133,
  [276] = 230,
  [277] = 277,
  [278] = 224,
  [279] = 273,
  [280] = 270,
  [281] = 281,
  [282] = 282,
  [283] = 210,
  [284] = 284,
  [285] = 285,
  [286] = 286,
  [287] = 281,
  [288] = 265,
  [289] = 289,
  [290] = 244,
  [291] = 291,
  [292] = 292,
  [293] = 293,
  [294] = 222,
  [295] = 295,
  [296] = 296,
  [297] = 297,
  [298] = 226,
  [299] = 225,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 292,
  [304] = 304,
  [305] = 221,
  [306] = 220,
  [307] = 219,
  [308] = 218,
  [309] = 217,
  [310] = 216,
  [311] = 215,
  [312] = 214,
  [313] = 213,
  [314] = 212,
  [315] = 211,
  [316] = 286,
  [317] = 231,
  [318] = 232,
  [319] = 233,
  [320] = 234,
  [321] = 209,
  [322] = 235,
  [323] = 236,
  [324] = 238,
  [325] = 239,
  [326] = 241,
  [327] = 242,
  [328] = 243,
  [329] = 246,
  [330] = 247,
  [331] = 248,
  [332] = 249,
  [333] = 250,
  [334] = 251,
  [335] = 252,
  [336] = 253,
  [337] = 254,
  [338] = 255,
  [339] = 256,
  [340] = 257,
  [341] = 259,
  [342] = 261,
  [343] = 262,
  [344] = 264,
  [345] = 266,
  [346] = 267,
  [347] = 268,
  [348] = 269,
  [349] = 271,
  [350] = 282,
  [351] = 284,
  [352] = 285,
  [353] = 289,
  [354] = 291,
  [355] = 293,
  [356] = 295,
  [357] = 300,
  [358] = 302,
  [359] = 359,
  [360] = 360,
  [361] = 361,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(290);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '%') ADVANCE(308);
      if (lookahead == '\'') ADVANCE(351);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '+') ADVANCE(297);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == '-') ADVANCE(301);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == '/') ADVANCE(360);
      if (lookahead == '0') ADVANCE(358);
      if (lookahead == ':') ADVANCE(298);
      if (lookahead == '=') ADVANCE(528);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'B') ADVANCE(346);
      if (lookahead == 'C') ADVANCE(347);
      if (lookahead == 'D') ADVANCE(348);
      if (lookahead == 'F') ADVANCE(349);
      if (lookahead == 'G') ADVANCE(350);
      if (lookahead == 'H') ADVANCE(403);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'K') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(405);
      if (lookahead == 'M') ADVANCE(406);
      if (lookahead == 'N') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(407);
      if (lookahead == 'P') ADVANCE(408);
      if (lookahead == 'Q') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(410);
      if (lookahead == 'U') ADVANCE(87);
      if (lookahead == 'V') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == 'X') ADVANCE(356);
      if (lookahead == 'Z') ADVANCE(354);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(296);
      if (lookahead == ']') ADVANCE(340);
      if (lookahead == '^') ADVANCE(342);
      if (lookahead == '_') ADVANCE(303);
      if (lookahead == '`') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(523);
      if (lookahead == 'r') ADVANCE(524);
      if (lookahead == 's') ADVANCE(525);
      if (lookahead == 'w') ADVANCE(526);
      if (lookahead == '{') ADVANCE(365);
      if (lookahead == '|') ADVANCE(414);
      if (lookahead == '}') ADVANCE(366);
      if (lookahead == '~') ADVANCE(306);
      if ((9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(341);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(430);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(362);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(352);
      if (lookahead == 'u' ||
          lookahead == 'v') ADVANCE(402);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(344);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(357);
      if (('h' <= lookahead && lookahead <= 't')) ADVANCE(522);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '%') ADVANCE(314);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '/') ADVANCE(360);
      if (lookahead == ':') ADVANCE(283);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(341);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == '^') ADVANCE(342);
      if (lookahead == '_') ADVANCE(343);
      if (lookahead == '`') ADVANCE(335);
      if (lookahead == '{') ADVANCE(365);
      if (lookahead == '|') ADVANCE(416);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(351);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(362);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(352);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(361);
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
          lookahead == '~') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(344);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '/') ADVANCE(369);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(401);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(341);
      if (lookahead == '^') ADVANCE(342);
      if (lookahead == '_') ADVANCE(374);
      if (lookahead == 'a') ADVANCE(399);
      if (lookahead == 'd') ADVANCE(383);
      if (lookahead == 'm') ADVANCE(375);
      if (lookahead == 's') ADVANCE(400);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(367);
      if (lookahead == '/') ADVANCE(369);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(341);
      if (lookahead == '^') ADVANCE(342);
      if (lookahead == '_') ADVANCE(343);
      if (lookahead == '{') ADVANCE(365);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(411);
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
          lookahead == '~') ADVANCE(402);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(344);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '-') ADVANCE(301);
      if (lookahead == '.') ADVANCE(433);
      if (lookahead == '=') ADVANCE(528);
      if (lookahead == '_') ADVANCE(305);
      if (lookahead == '|') ADVANCE(413);
      if (lookahead == '~') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(432);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == 'H') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      if (('h' <= lookahead && lookahead <= 'w')) ADVANCE(522);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(35);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(456);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(6);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(449);
      if (lookahead == '(') ADVANCE(15);
      if (lookahead == ')') ADVANCE(16);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(472);
      if (lookahead == 'e') ADVANCE(237);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'i') ADVANCE(205);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(469);
      if (lookahead == 'l') ADVANCE(272);
      if (lookahead == 'p') ADVANCE(20);
      if (lookahead == 'r') ADVANCE(111);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(478);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(480);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(482);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(484);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(473);
      if (lookahead == 'f') ADVANCE(21);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(471);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(470);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(468);
      if (lookahead == 'p') ADVANCE(22);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(474);
      if (lookahead == 'f') ADVANCE(27);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(467);
      if (lookahead == 'p') ADVANCE(31);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(476);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(488);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(487);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(486);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(475);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(491);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(463);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(457);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(466);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(443);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(458);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(444);
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(80);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(485);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(459);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(464);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(435);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(435);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(445);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(461);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(460);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(450);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(465);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(490);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(489);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(454);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(437);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(438);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(455);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(462);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(452);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(441);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(448);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(451);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(477);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(479);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(494);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(481);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(483);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(492);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(446);
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(439);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(493);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(442);
      END_STATE();
    case 67:
      if (lookahead == '!') ADVANCE(440);
      END_STATE();
    case 68:
      if (lookahead == '!') ADVANCE(447);
      END_STATE();
    case 69:
      if (lookahead == '!') ADVANCE(453);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '(') ADVANCE(13);
      if (lookahead == ')') ADVANCE(14);
      END_STATE();
    case 72:
      if (lookahead == '(') ADVANCE(57);
      if (lookahead == ')') ADVANCE(58);
      END_STATE();
    case 73:
      if (lookahead == '(') ADVANCE(60);
      if (lookahead == ')') ADVANCE(61);
      END_STATE();
    case 74:
      if (lookahead == '+') ADVANCE(8);
      if (lookahead == '0') ADVANCE(9);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '>') ADVANCE(10);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(118);
      if (lookahead == 'b') ADVANCE(235);
      if (lookahead == 'c') ADVANCE(212);
      if (lookahead == 'd') ADVANCE(101);
      if (lookahead == 'e') ADVANCE(189);
      if (lookahead == 'f') ADVANCE(11);
      if (lookahead == 'i') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(213);
      if (lookahead == 'm') ADVANCE(135);
      if (lookahead == 'o') ADVANCE(229);
      if (lookahead == 'p') ADVANCE(12);
      if (lookahead == 'r') ADVANCE(214);
      if (lookahead == 's') ADVANCE(133);
      if (lookahead == 't') ADVANCE(136);
      if (lookahead == 'u') ADVANCE(226);
      if (lookahead == 'w') ADVANCE(137);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(99);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(7);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(98);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(25);
      END_STATE();
    case 80:
      if (lookahead == '5') ADVANCE(51);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(428);
      if (lookahead == '|') ADVANCE(426);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(506);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(507);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(510);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(517);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(514);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(521);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(529);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(532);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(508);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(513);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(516);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(530);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(286);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(286);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 99:
      if (lookahead == 'W') ADVANCE(527);
      END_STATE();
    case 100:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(119);
      if (lookahead == 'i') ADVANCE(190);
      if (lookahead == 'o') ADVANCE(279);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(231);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(232);
      if (lookahead == 'o') ADVANCE(127);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(268);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(26);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(180);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(270);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 115:
      if (lookahead == 'b') ADVANCE(215);
      if (lookahead == 'p') ADVANCE(158);
      END_STATE();
    case 116:
      if (lookahead == 'b') ADVANCE(38);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(222);
      END_STATE();
    case 118:
      if (lookahead == 'c') ADVANCE(120);
      if (lookahead == 'r') ADVANCE(230);
      END_STATE();
    case 119:
      if (lookahead == 'c') ADVANCE(105);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(143);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(145);
      END_STATE();
    case 122:
      if (lookahead == 'd') ADVANCE(159);
      END_STATE();
    case 123:
      if (lookahead == 'd') ADVANCE(164);
      END_STATE();
    case 124:
      if (lookahead == 'd') ADVANCE(107);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(170);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(221);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(108);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(154);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(155);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(223);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(162);
      if (lookahead == 'f') ADVANCE(282);
      if (lookahead == 'h') ADVANCE(216);
      if (lookahead == 'l') ADVANCE(171);
      if (lookahead == 'n') ADVANCE(103);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(125);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'o') ADVANCE(238);
      if (lookahead == 'p') ADVANCE(19);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(201);
      if (lookahead == 'h') ADVANCE(274);
      if (lookahead == 'r') ADVANCE(174);
      if (lookahead == 'u') ADVANCE(241);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(123);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(100);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(160);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(207);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(240);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(122);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(202);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(244);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(206);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(28);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(37);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(65);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(239);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(208);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(251);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(252);
      END_STATE();
    case 159:
      if (lookahead == 'f') ADVANCE(157);
      if (lookahead == 't') ADVANCE(276);
      END_STATE();
    case 160:
      if (lookahead == 'g') ADVANCE(161);
      END_STATE();
    case 161:
      if (lookahead == 'g') ADVANCE(176);
      END_STATE();
    case 162:
      if (lookahead == 'g') ADVANCE(203);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(228);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(148);
      END_STATE();
    case 165:
      if (lookahead == 'h') ADVANCE(102);
      END_STATE();
    case 166:
      if (lookahead == 'h') ADVANCE(242);
      END_STATE();
    case 167:
      if (lookahead == 'h') ADVANCE(45);
      END_STATE();
    case 168:
      if (lookahead == 'h') ADVANCE(248);
      END_STATE();
    case 169:
      if (lookahead == 'h') ADVANCE(250);
      END_STATE();
    case 170:
      if (lookahead == 'i') ADVANCE(275);
      END_STATE();
    case 171:
      if (lookahead == 'i') ADVANCE(128);
      END_STATE();
    case 172:
      if (lookahead == 'i') ADVANCE(255);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(204);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(181);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(182);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(220);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(187);
      END_STATE();
    case 178:
      if (lookahead == 'l') ADVANCE(40);
      END_STATE();
    case 179:
      if (lookahead == 'l') ADVANCE(185);
      END_STATE();
    case 180:
      if (lookahead == 'l') ADVANCE(183);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(178);
      END_STATE();
    case 182:
      if (lookahead == 'l') ADVANCE(184);
      END_STATE();
    case 183:
      if (lookahead == 'l') ADVANCE(261);
      END_STATE();
    case 184:
      if (lookahead == 'l') ADVANCE(144);
      END_STATE();
    case 185:
      if (lookahead == 'l') ADVANCE(32);
      END_STATE();
    case 186:
      if (lookahead == 'l') ADVANCE(39);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(186);
      END_STATE();
    case 188:
      if (lookahead == 'm') ADVANCE(116);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 190:
      if (lookahead == 'm') ADVANCE(173);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(224);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(106);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(113);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(225);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(234);
      END_STATE();
    case 196:
      if (lookahead == 'n') ADVANCE(278);
      END_STATE();
    case 197:
      if (lookahead == 'n') ADVANCE(117);
      END_STATE();
    case 198:
      if (lookahead == 'n') ADVANCE(34);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(163);
      if (lookahead == 'w') ADVANCE(152);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(63);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(273);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(262);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(217);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(277);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(146);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(126);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(29);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(263);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(264);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(132);
      END_STATE();
    case 212:
      if (lookahead == 'o') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 213:
      if (lookahead == 'o') ADVANCE(199);
      END_STATE();
    case 214:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(280);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(236);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(36);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(55);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 222:
      if (lookahead == 'o') ADVANCE(281);
      END_STATE();
    case 223:
      if (lookahead == 'o') ADVANCE(73);
      END_STATE();
    case 224:
      if (lookahead == 'o') ADVANCE(247);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(249);
      END_STATE();
    case 226:
      if (lookahead == 'p') ADVANCE(115);
      END_STATE();
    case 227:
      if (lookahead == 'p') ADVANCE(165);
      END_STATE();
    case 228:
      if (lookahead == 'p') ADVANCE(166);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(140);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(139);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(33);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(218);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 235:
      if (lookahead == 'r') ADVANCE(138);
      END_STATE();
    case 236:
      if (lookahead == 'r') ADVANCE(271);
      END_STATE();
    case 237:
      if (lookahead == 'r') ADVANCE(192);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(129);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(191);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(266);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(198);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(104);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(200);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(177);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(175);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(130);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(131);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(193);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 253:
      if (lookahead == 's') ADVANCE(172);
      END_STATE();
    case 254:
      if (lookahead == 's') ADVANCE(30);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(56);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(149);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(150);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(151);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(121);
      END_STATE();
    case 260:
      if (lookahead == 't') ADVANCE(167);
      END_STATE();
    case 261:
      if (lookahead == 't') ADVANCE(246);
      END_STATE();
    case 262:
      if (lookahead == 't') ADVANCE(44);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(54);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(64);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(67);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(142);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(245);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(109);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(219);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(110);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(233);
      END_STATE();
    case 272:
      if (lookahead == 'u') ADVANCE(254);
      END_STATE();
    case 273:
      if (lookahead == 'u') ADVANCE(269);
      END_STATE();
    case 274:
      if (lookahead == 'u') ADVANCE(188);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(195);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(243);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(156);
      END_STATE();
    case 278:
      if (lookahead == 'v') ADVANCE(141);
      END_STATE();
    case 279:
      if (lookahead == 'w') ADVANCE(197);
      END_STATE();
    case 280:
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 281:
      if (lookahead == 'w') ADVANCE(52);
      END_STATE();
    case 282:
      if (lookahead == 'z') ADVANCE(23);
      END_STATE();
    case 283:
      if (lookahead == '|') ADVANCE(426);
      END_STATE();
    case 284:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(96);
      END_STATE();
    case 286:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 287:
      if (eof) ADVANCE(290);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '!') ADVANCE(267);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '%') ADVANCE(309);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '-') ADVANCE(338);
      if (lookahead == '/') ADVANCE(360);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(341);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'K') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(405);
      if (lookahead == 'M') ADVANCE(406);
      if (lookahead == 'N') ADVANCE(84);
      if (lookahead == 'P') ADVANCE(408);
      if (lookahead == 'Q') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(410);
      if (lookahead == 'U') ADVANCE(87);
      if (lookahead == 'V') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == 'X') ADVANCE(355);
      if (lookahead == 'Z') ADVANCE(353);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(296);
      if (lookahead == ']') ADVANCE(340);
      if (lookahead == '^') ADVANCE(342);
      if (lookahead == '_') ADVANCE(343);
      if (lookahead == '`') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(93);
      if (lookahead == '{') ADVANCE(365);
      if (lookahead == '|') ADVANCE(414);
      if (lookahead == '}') ADVANCE(366);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(351);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(362);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(352);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(402);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(361);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(344);
      END_STATE();
    case 288:
      if (eof) ADVANCE(290);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '$') ADVANCE(316);
      if (lookahead == '%') ADVANCE(309);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == ',') ADVANCE(412);
      if (lookahead == '-') ADVANCE(301);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(341);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'K') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(405);
      if (lookahead == 'M') ADVANCE(406);
      if (lookahead == 'N') ADVANCE(84);
      if (lookahead == 'P') ADVANCE(408);
      if (lookahead == 'Q') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'T') ADVANCE(410);
      if (lookahead == 'U') ADVANCE(87);
      if (lookahead == 'V') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == 'X') ADVANCE(355);
      if (lookahead == 'Z') ADVANCE(353);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == '\\') ADVANCE(296);
      if (lookahead == '^') ADVANCE(342);
      if (lookahead == '_') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == 'w') ADVANCE(93);
      if (lookahead == '{') ADVANCE(365);
      if (lookahead == '|') ADVANCE(414);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(430);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(352);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(402);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(344);
      END_STATE();
    case 289:
      if (eof) ADVANCE(290);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(368);
      if (lookahead == '%') ADVANCE(311);
      if (lookahead == '(') ADVANCE(336);
      if (lookahead == ')') ADVANCE(337);
      if (lookahead == ':') ADVANCE(81);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(341);
      if (lookahead == 'A') ADVANCE(345);
      if (lookahead == 'B') ADVANCE(346);
      if (lookahead == 'C') ADVANCE(347);
      if (lookahead == 'D') ADVANCE(348);
      if (lookahead == 'F') ADVANCE(349);
      if (lookahead == 'G') ADVANCE(350);
      if (lookahead == 'H') ADVANCE(404);
      if (lookahead == 'I') ADVANCE(82);
      if (lookahead == 'K') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(405);
      if (lookahead == 'M') ADVANCE(406);
      if (lookahead == 'N') ADVANCE(84);
      if (lookahead == 'O') ADVANCE(407);
      if (lookahead == 'P') ADVANCE(408);
      if (lookahead == 'Q') ADVANCE(85);
      if (lookahead == 'R') ADVANCE(86);
      if (lookahead == 'S') ADVANCE(409);
      if (lookahead == 'T') ADVANCE(410);
      if (lookahead == 'U') ADVANCE(87);
      if (lookahead == 'V') ADVANCE(88);
      if (lookahead == 'W') ADVANCE(89);
      if (lookahead == 'X') ADVANCE(356);
      if (lookahead == 'Z') ADVANCE(354);
      if (lookahead == '[') ADVANCE(339);
      if (lookahead == '^') ADVANCE(342);
      if (lookahead == '_') ADVANCE(343);
      if (lookahead == 'm') ADVANCE(90);
      if (lookahead == 'r') ADVANCE(91);
      if (lookahead == 's') ADVANCE(92);
      if (lookahead == '{') ADVANCE(365);
      if (lookahead == '|') ADVANCE(414);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(352);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(402);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(497);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__NEWLINE);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(sym__NEWLINE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(497);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == ':') ADVANCE(531);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(428);
      if (lookahead == '|') ADVANCE(426);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_note_skip);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_note_skip);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (lookahead == '_') ADVANCE(341);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_TILDE);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '%') ADVANCE(315);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '%') ADVANCE(315);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(314);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '-') ADVANCE(498);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(314);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == 'a') ADVANCE(312);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(314);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == 'b') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(314);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == 'c') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(314);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '!') ADVANCE(330);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '|') ADVANCE(415);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '!') ADVANCE(330);
      if (lookahead == '"') ADVANCE(323);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == ':') ADVANCE(325);
      if (lookahead == '[') ADVANCE(331);
      if (lookahead == '|') ADVANCE(415);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '*') ADVANCE(300);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead == '-') ADVANCE(302);
      if (lookahead == '_') ADVANCE(304);
      if (lookahead == '|') ADVANCE(417);
      if (lookahead == '~') ADVANCE(307);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(333);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '+') ADVANCE(324);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead == '.') ADVANCE(434);
      if (lookahead != 0) ADVANCE(334);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(436);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '"') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == ':') ADVANCE(334);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == ':') ADVANCE(429);
      if (lookahead == '|') ADVANCE(427);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'i') ADVANCE(328);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(327);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(326);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(329);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '|') ADVANCE(423);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(332);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(333);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym__note_construct_token1);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(422);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(341);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(341);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(499);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(500);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(501);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(502);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(503);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(504);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == ':') ADVANCE(518);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == ':') ADVANCE(512);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(284);
      if (lookahead == '0') ADVANCE(358);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(357);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(358);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(359);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(359);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(284);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(361);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(362);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(363);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(364);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(370);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(285);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(371);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(372);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(373);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(386);
      if (lookahead == 'i') ADVANCE(389);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(390);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(391);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(387);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(388);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(392);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(397);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(393);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(398);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(385);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(395);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(401);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(394);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(381);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(396);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(401);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == '-') ADVANCE(99);
      if (lookahead == ':') ADVANCE(505);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(505);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(520);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(509);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(511);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(495);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(515);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(519);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_nth_ending_number_token1);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(sym_bar_line);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(424);
      if (lookahead == ']') ADVANCE(418);
      if (lookahead == '|') ADVANCE(420);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(425);
      if (lookahead == ']') ADVANCE(419);
      if (lookahead == '|') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ']') ADVANCE(418);
      if (lookahead == '|') ADVANCE(420);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token1);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(431);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(432);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(334);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_parts_line);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '\n') ADVANCE(295);
      if (lookahead == ' ') ADVANCE(293);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(497);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(497);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(314);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_area);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_book);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_composer);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(sym_discography);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_file);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_group);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_history);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(sym_macros);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(sym_meter);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(anon_sym_X_COLON);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(sym_remark);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(sym_rhythm_line);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_s_COLON);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(sym_tempo);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(sym_transcription);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_tune_title);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(sym_unit_note_length);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(anon_sym_U_COLON);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(508);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(513);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(516);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(530);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_user_defined_token2);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(sym_voice);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(anon_sym_w_COLON);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(sym_words_postbody);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 287},
  [3] = {.lex_state = 287},
  [4] = {.lex_state = 287},
  [5] = {.lex_state = 287},
  [6] = {.lex_state = 287},
  [7] = {.lex_state = 287},
  [8] = {.lex_state = 287},
  [9] = {.lex_state = 289},
  [10] = {.lex_state = 289},
  [11] = {.lex_state = 289},
  [12] = {.lex_state = 287},
  [13] = {.lex_state = 287},
  [14] = {.lex_state = 287},
  [15] = {.lex_state = 289},
  [16] = {.lex_state = 289},
  [17] = {.lex_state = 287},
  [18] = {.lex_state = 287},
  [19] = {.lex_state = 287},
  [20] = {.lex_state = 287},
  [21] = {.lex_state = 287},
  [22] = {.lex_state = 287},
  [23] = {.lex_state = 287},
  [24] = {.lex_state = 287},
  [25] = {.lex_state = 287},
  [26] = {.lex_state = 288},
  [27] = {.lex_state = 287},
  [28] = {.lex_state = 287},
  [29] = {.lex_state = 287},
  [30] = {.lex_state = 287},
  [31] = {.lex_state = 287},
  [32] = {.lex_state = 287},
  [33] = {.lex_state = 287},
  [34] = {.lex_state = 287},
  [35] = {.lex_state = 287},
  [36] = {.lex_state = 288},
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
  [54] = {.lex_state = 288},
  [55] = {.lex_state = 287},
  [56] = {.lex_state = 288},
  [57] = {.lex_state = 287},
  [58] = {.lex_state = 287},
  [59] = {.lex_state = 287},
  [60] = {.lex_state = 287},
  [61] = {.lex_state = 287},
  [62] = {.lex_state = 287},
  [63] = {.lex_state = 287},
  [64] = {.lex_state = 287},
  [65] = {.lex_state = 287},
  [66] = {.lex_state = 287},
  [67] = {.lex_state = 1},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 318},
  [71] = {.lex_state = 318},
  [72] = {.lex_state = 1},
  [73] = {.lex_state = 287},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 288},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 288},
  [82] = {.lex_state = 288},
  [83] = {.lex_state = 288},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 319},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 317},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 319},
  [96] = {.lex_state = 317},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 287},
  [100] = {.lex_state = 287},
  [101] = {.lex_state = 287},
  [102] = {.lex_state = 287},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 3},
  [105] = {.lex_state = 287},
  [106] = {.lex_state = 287},
  [107] = {.lex_state = 287},
  [108] = {.lex_state = 287},
  [109] = {.lex_state = 287},
  [110] = {.lex_state = 3},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 4},
  [120] = {.lex_state = 287},
  [121] = {.lex_state = 318},
  [122] = {.lex_state = 318},
  [123] = {.lex_state = 4},
  [124] = {.lex_state = 318},
  [125] = {.lex_state = 318},
  [126] = {.lex_state = 318},
  [127] = {.lex_state = 318},
  [128] = {.lex_state = 318},
  [129] = {.lex_state = 318},
  [130] = {.lex_state = 287},
  [131] = {.lex_state = 287},
  [132] = {.lex_state = 318},
  [133] = {.lex_state = 318},
  [134] = {.lex_state = 287},
  [135] = {.lex_state = 4},
  [136] = {.lex_state = 4},
  [137] = {.lex_state = 287},
  [138] = {.lex_state = 287},
  [139] = {.lex_state = 287},
  [140] = {.lex_state = 287},
  [141] = {.lex_state = 287},
  [142] = {.lex_state = 1},
  [143] = {.lex_state = 319},
  [144] = {.lex_state = 319},
  [145] = {.lex_state = 319},
  [146] = {.lex_state = 319},
  [147] = {.lex_state = 287},
  [148] = {.lex_state = 287},
  [149] = {.lex_state = 287},
  [150] = {.lex_state = 287},
  [151] = {.lex_state = 4},
  [152] = {.lex_state = 4},
  [153] = {.lex_state = 1},
  [154] = {.lex_state = 1},
  [155] = {.lex_state = 1},
  [156] = {.lex_state = 4},
  [157] = {.lex_state = 4},
  [158] = {.lex_state = 287},
  [159] = {.lex_state = 287},
  [160] = {.lex_state = 287},
  [161] = {.lex_state = 1},
  [162] = {.lex_state = 287},
  [163] = {.lex_state = 287},
  [164] = {.lex_state = 287},
  [165] = {.lex_state = 287},
  [166] = {.lex_state = 287},
  [167] = {.lex_state = 287},
  [168] = {.lex_state = 1},
  [169] = {.lex_state = 1},
  [170] = {.lex_state = 287},
  [171] = {.lex_state = 287},
  [172] = {.lex_state = 287},
  [173] = {.lex_state = 287},
  [174] = {.lex_state = 1},
  [175] = {.lex_state = 0},
  [176] = {.lex_state = 287},
  [177] = {.lex_state = 287},
  [178] = {.lex_state = 1},
  [179] = {.lex_state = 287},
  [180] = {.lex_state = 287},
  [181] = {.lex_state = 287},
  [182] = {.lex_state = 0},
  [183] = {.lex_state = 287},
  [184] = {.lex_state = 0},
  [185] = {.lex_state = 2},
  [186] = {.lex_state = 320},
  [187] = {.lex_state = 496},
  [188] = {.lex_state = 2},
  [189] = {.lex_state = 320},
  [190] = {.lex_state = 2},
  [191] = {.lex_state = 321},
  [192] = {.lex_state = 321},
  [193] = {.lex_state = 321},
  [194] = {.lex_state = 2},
  [195] = {.lex_state = 320},
  [196] = {.lex_state = 287},
  [197] = {.lex_state = 287},
  [198] = {.lex_state = 1},
  [199] = {.lex_state = 287},
  [200] = {.lex_state = 287},
  [201] = {.lex_state = 287},
  [202] = {.lex_state = 0},
  [203] = {.lex_state = 3},
  [204] = {.lex_state = 5},
  [205] = {.lex_state = 3},
  [206] = {.lex_state = 321},
  [207] = {.lex_state = 287},
  [208] = {.lex_state = 0},
  [209] = {.lex_state = 0},
  [210] = {.lex_state = 289},
  [211] = {.lex_state = 0},
  [212] = {.lex_state = 0},
  [213] = {.lex_state = 0},
  [214] = {.lex_state = 0},
  [215] = {.lex_state = 0},
  [216] = {.lex_state = 0},
  [217] = {.lex_state = 0},
  [218] = {.lex_state = 0},
  [219] = {.lex_state = 0},
  [220] = {.lex_state = 0},
  [221] = {.lex_state = 0},
  [222] = {.lex_state = 0},
  [223] = {.lex_state = 320},
  [224] = {.lex_state = 3},
  [225] = {.lex_state = 0},
  [226] = {.lex_state = 0},
  [227] = {.lex_state = 0},
  [228] = {.lex_state = 4},
  [229] = {.lex_state = 3},
  [230] = {.lex_state = 0},
  [231] = {.lex_state = 0},
  [232] = {.lex_state = 0},
  [233] = {.lex_state = 0},
  [234] = {.lex_state = 0},
  [235] = {.lex_state = 0},
  [236] = {.lex_state = 0},
  [237] = {.lex_state = 3},
  [238] = {.lex_state = 0},
  [239] = {.lex_state = 0},
  [240] = {.lex_state = 320},
  [241] = {.lex_state = 0},
  [242] = {.lex_state = 0},
  [243] = {.lex_state = 0},
  [244] = {.lex_state = 1},
  [245] = {.lex_state = 0},
  [246] = {.lex_state = 0},
  [247] = {.lex_state = 0},
  [248] = {.lex_state = 0},
  [249] = {.lex_state = 0},
  [250] = {.lex_state = 0},
  [251] = {.lex_state = 0},
  [252] = {.lex_state = 0},
  [253] = {.lex_state = 0},
  [254] = {.lex_state = 0},
  [255] = {.lex_state = 0},
  [256] = {.lex_state = 0},
  [257] = {.lex_state = 0},
  [258] = {.lex_state = 0},
  [259] = {.lex_state = 0},
  [260] = {.lex_state = 3},
  [261] = {.lex_state = 0},
  [262] = {.lex_state = 0},
  [263] = {.lex_state = 0},
  [264] = {.lex_state = 0},
  [265] = {.lex_state = 4},
  [266] = {.lex_state = 0},
  [267] = {.lex_state = 0},
  [268] = {.lex_state = 0},
  [269] = {.lex_state = 0},
  [270] = {.lex_state = 5},
  [271] = {.lex_state = 0},
  [272] = {.lex_state = 1},
  [273] = {.lex_state = 287},
  [274] = {.lex_state = 0},
  [275] = {.lex_state = 320},
  [276] = {.lex_state = 0},
  [277] = {.lex_state = 0},
  [278] = {.lex_state = 3},
  [279] = {.lex_state = 287},
  [280] = {.lex_state = 5},
  [281] = {.lex_state = 289},
  [282] = {.lex_state = 0},
  [283] = {.lex_state = 289},
  [284] = {.lex_state = 0},
  [285] = {.lex_state = 0},
  [286] = {.lex_state = 0},
  [287] = {.lex_state = 289},
  [288] = {.lex_state = 4},
  [289] = {.lex_state = 0},
  [290] = {.lex_state = 1},
  [291] = {.lex_state = 0},
  [292] = {.lex_state = 1},
  [293] = {.lex_state = 0},
  [294] = {.lex_state = 0},
  [295] = {.lex_state = 0},
  [296] = {.lex_state = 320},
  [297] = {.lex_state = 0},
  [298] = {.lex_state = 0},
  [299] = {.lex_state = 0},
  [300] = {.lex_state = 0},
  [301] = {.lex_state = 0},
  [302] = {.lex_state = 0},
  [303] = {.lex_state = 1},
  [304] = {.lex_state = 320},
  [305] = {.lex_state = 0},
  [306] = {.lex_state = 0},
  [307] = {.lex_state = 0},
  [308] = {.lex_state = 0},
  [309] = {.lex_state = 0},
  [310] = {.lex_state = 0},
  [311] = {.lex_state = 0},
  [312] = {.lex_state = 0},
  [313] = {.lex_state = 0},
  [314] = {.lex_state = 0},
  [315] = {.lex_state = 0},
  [316] = {.lex_state = 0},
  [317] = {.lex_state = 0},
  [318] = {.lex_state = 0},
  [319] = {.lex_state = 0},
  [320] = {.lex_state = 0},
  [321] = {.lex_state = 0},
  [322] = {.lex_state = 0},
  [323] = {.lex_state = 0},
  [324] = {.lex_state = 0},
  [325] = {.lex_state = 0},
  [326] = {.lex_state = 0},
  [327] = {.lex_state = 0},
  [328] = {.lex_state = 0},
  [329] = {.lex_state = 0},
  [330] = {.lex_state = 0},
  [331] = {.lex_state = 0},
  [332] = {.lex_state = 0},
  [333] = {.lex_state = 0},
  [334] = {.lex_state = 0},
  [335] = {.lex_state = 0},
  [336] = {.lex_state = 0},
  [337] = {.lex_state = 0},
  [338] = {.lex_state = 0},
  [339] = {.lex_state = 0},
  [340] = {.lex_state = 0},
  [341] = {.lex_state = 0},
  [342] = {.lex_state = 0},
  [343] = {.lex_state = 0},
  [344] = {.lex_state = 0},
  [345] = {.lex_state = 0},
  [346] = {.lex_state = 0},
  [347] = {.lex_state = 0},
  [348] = {.lex_state = 0},
  [349] = {.lex_state = 0},
  [350] = {.lex_state = 0},
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
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym__NEWLINE] = ACTIONS(3),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_note_skip] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_UNDERSCORE] = ACTIONS(1),
    [sym_TILDE] = ACTIONS(1),
    [sym_COMMENTLINE] = ACTIONS(1),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_slur_open] = ACTIONS(1),
    [sym_slur_close] = ACTIONS(1),
    [aux_sym__note_construct_token1] = ACTIONS(1),
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
    [sym_source_file] = STATE(297),
    [sym_tune] = STATE(277),
    [sym_tune_header] = STATE(22),
    [sym_reference_number] = STATE(9),
    [sym__space] = ACTIONS(3),
    [sym__NEWLINE] = ACTIONS(3),
    [anon_sym_X_COLON] = ACTIONS(5),
  },
  [2] = {
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(53),
    [sym_body_info_line] = STATE(2),
    [sym__nte_or_chrd] = STATE(12),
    [sym_beam] = STATE(53),
    [sym__note_construct] = STATE(12),
    [sym__chord_cstrct] = STATE(12),
    [sym_note] = STATE(28),
    [sym__pitch] = STATE(23),
    [sym_multimeasure_rest] = STATE(53),
    [sym_grace_note] = STATE(115),
    [sym_chord_symbol] = STATE(150),
    [sym_decoration] = STATE(160),
    [sym_bar] = STATE(6),
    [sym_Nth_ending] = STATE(53),
    [sym_nth_ending_number] = STATE(66),
    [sym_generic_bar_line] = STATE(49),
    [sym_first_repeat_bar] = STATE(47),
    [sym_second_repeat_bar] = STATE(47),
    [sym_symbol_line] = STATE(296),
    [sym_user_defined] = STATE(296),
    [sym_words_line] = STATE(296),
    [aux_sym__MUSIC_CODE_repeat1] = STATE(6),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym__note_construct_repeat1] = STATE(115),
    [aux_sym_bar_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym__space] = ACTIONS(3),
    [sym__NEWLINE] = ACTIONS(3),
    [sym_COMMENTLINE] = ACTIONS(9),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(12),
    [sym_slur_open] = ACTIONS(15),
    [sym_slur_close] = ACTIONS(18),
    [anon_sym_LBRACK] = ACTIONS(21),
    [sym_alteration] = ACTIONS(24),
    [sym_note_letter] = ACTIONS(27),
    [sym_rest] = ACTIONS(30),
    [anon_sym_Z] = ACTIONS(33),
    [anon_sym_X] = ACTIONS(33),
    [aux_sym_grace_note_token1] = ACTIONS(36),
    [aux_sym_chord_symbol_token1] = ACTIONS(39),
    [sym_annotation] = ACTIONS(18),
    [sym_tuplet_marker] = ACTIONS(18),
    [sym_decoration_shorthand] = ACTIONS(42),
    [sym_bar_line] = ACTIONS(45),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(48),
    [sym_thin_double_bar_line] = ACTIONS(48),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(48),
    [sym_start_of_repeated_section] = ACTIONS(48),
    [sym_end_of_repeated_section] = ACTIONS(51),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(48),
    [sym_parts_line] = ACTIONS(54),
    [sym_instruction] = ACTIONS(54),
    [sym_key] = ACTIONS(54),
    [sym_macros] = ACTIONS(54),
    [sym_meter] = ACTIONS(54),
    [sym_notes] = ACTIONS(54),
    [sym_remark] = ACTIONS(54),
    [sym_rhythm_line] = ACTIONS(54),
    [anon_sym_s_COLON] = ACTIONS(57),
    [sym_tempo] = ACTIONS(54),
    [sym_tune_title] = ACTIONS(54),
    [sym_unit_note_length] = ACTIONS(54),
    [anon_sym_U_COLON] = ACTIONS(60),
    [sym_voice] = ACTIONS(54),
    [anon_sym_w_COLON] = ACTIONS(63),
    [sym_words_postbody] = ACTIONS(7),
  },
  [3] = {
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(53),
    [sym_body_info_line] = STATE(2),
    [sym__nte_or_chrd] = STATE(12),
    [sym_beam] = STATE(53),
    [sym__note_construct] = STATE(12),
    [sym__chord_cstrct] = STATE(12),
    [sym_note] = STATE(28),
    [sym__pitch] = STATE(23),
    [sym_multimeasure_rest] = STATE(53),
    [sym_grace_note] = STATE(115),
    [sym_chord_symbol] = STATE(150),
    [sym_decoration] = STATE(160),
    [sym_bar] = STATE(6),
    [sym_Nth_ending] = STATE(53),
    [sym_nth_ending_number] = STATE(66),
    [sym_generic_bar_line] = STATE(49),
    [sym_first_repeat_bar] = STATE(47),
    [sym_second_repeat_bar] = STATE(47),
    [sym_symbol_line] = STATE(296),
    [sym_user_defined] = STATE(296),
    [sym_words_line] = STATE(296),
    [aux_sym__MUSIC_CODE_repeat1] = STATE(6),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym__note_construct_repeat1] = STATE(115),
    [aux_sym_bar_repeat1] = STATE(62),
    [ts_builtin_sym_end] = ACTIONS(66),
    [sym__space] = ACTIONS(3),
    [sym__NEWLINE] = ACTIONS(3),
    [sym_COMMENTLINE] = ACTIONS(68),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(70),
    [sym_slur_open] = ACTIONS(72),
    [sym_slur_close] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(76),
    [sym_alteration] = ACTIONS(78),
    [sym_note_letter] = ACTIONS(80),
    [sym_rest] = ACTIONS(82),
    [anon_sym_Z] = ACTIONS(84),
    [anon_sym_X] = ACTIONS(84),
    [aux_sym_grace_note_token1] = ACTIONS(86),
    [aux_sym_chord_symbol_token1] = ACTIONS(88),
    [sym_annotation] = ACTIONS(74),
    [sym_tuplet_marker] = ACTIONS(74),
    [sym_decoration_shorthand] = ACTIONS(90),
    [sym_bar_line] = ACTIONS(92),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(94),
    [sym_thin_double_bar_line] = ACTIONS(94),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(94),
    [sym_start_of_repeated_section] = ACTIONS(94),
    [sym_end_of_repeated_section] = ACTIONS(96),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(94),
    [sym_parts_line] = ACTIONS(98),
    [sym_instruction] = ACTIONS(98),
    [sym_key] = ACTIONS(98),
    [sym_macros] = ACTIONS(98),
    [sym_meter] = ACTIONS(98),
    [sym_notes] = ACTIONS(98),
    [sym_remark] = ACTIONS(98),
    [sym_rhythm_line] = ACTIONS(98),
    [anon_sym_s_COLON] = ACTIONS(100),
    [sym_tempo] = ACTIONS(98),
    [sym_tune_title] = ACTIONS(98),
    [sym_unit_note_length] = ACTIONS(98),
    [anon_sym_U_COLON] = ACTIONS(102),
    [sym_voice] = ACTIONS(98),
    [anon_sym_w_COLON] = ACTIONS(104),
    [sym_words_postbody] = ACTIONS(66),
  },
  [4] = {
    [sym_stylesheet_directives] = STATE(3),
    [sym__MUSIC_CODE] = STATE(3),
    [sym__music_content] = STATE(53),
    [sym_body_info_line] = STATE(3),
    [sym__nte_or_chrd] = STATE(12),
    [sym_beam] = STATE(53),
    [sym__note_construct] = STATE(12),
    [sym__chord_cstrct] = STATE(12),
    [sym_note] = STATE(28),
    [sym__pitch] = STATE(23),
    [sym_multimeasure_rest] = STATE(53),
    [sym_grace_note] = STATE(115),
    [sym_chord_symbol] = STATE(150),
    [sym_decoration] = STATE(160),
    [sym_bar] = STATE(6),
    [sym_Nth_ending] = STATE(53),
    [sym_nth_ending_number] = STATE(66),
    [sym_generic_bar_line] = STATE(49),
    [sym_first_repeat_bar] = STATE(47),
    [sym_second_repeat_bar] = STATE(47),
    [sym_symbol_line] = STATE(296),
    [sym_user_defined] = STATE(296),
    [sym_words_line] = STATE(296),
    [aux_sym__MUSIC_CODE_repeat1] = STATE(6),
    [aux_sym_tune_body_repeat1] = STATE(3),
    [aux_sym__note_construct_repeat1] = STATE(115),
    [aux_sym_bar_repeat1] = STATE(62),
    [sym__space] = ACTIONS(3),
    [sym__NEWLINE] = ACTIONS(3),
    [sym_COMMENTLINE] = ACTIONS(106),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(70),
    [sym_slur_open] = ACTIONS(72),
    [sym_slur_close] = ACTIONS(74),
    [anon_sym_LBRACK] = ACTIONS(76),
    [sym_alteration] = ACTIONS(78),
    [sym_note_letter] = ACTIONS(80),
    [sym_rest] = ACTIONS(82),
    [anon_sym_Z] = ACTIONS(84),
    [anon_sym_X] = ACTIONS(84),
    [aux_sym_grace_note_token1] = ACTIONS(86),
    [aux_sym_chord_symbol_token1] = ACTIONS(88),
    [sym_annotation] = ACTIONS(74),
    [sym_tuplet_marker] = ACTIONS(74),
    [sym_decoration_shorthand] = ACTIONS(90),
    [sym_bar_line] = ACTIONS(92),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(94),
    [sym_thin_double_bar_line] = ACTIONS(94),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(94),
    [sym_start_of_repeated_section] = ACTIONS(94),
    [sym_end_of_repeated_section] = ACTIONS(96),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(94),
    [sym_parts_line] = ACTIONS(98),
    [sym_instruction] = ACTIONS(98),
    [sym_key] = ACTIONS(98),
    [sym_macros] = ACTIONS(98),
    [sym_meter] = ACTIONS(98),
    [sym_notes] = ACTIONS(98),
    [sym_remark] = ACTIONS(98),
    [sym_rhythm_line] = ACTIONS(98),
    [anon_sym_s_COLON] = ACTIONS(100),
    [sym_tempo] = ACTIONS(98),
    [sym_tune_title] = ACTIONS(98),
    [sym_unit_note_length] = ACTIONS(98),
    [anon_sym_U_COLON] = ACTIONS(102),
    [sym_voice] = ACTIONS(98),
    [anon_sym_w_COLON] = ACTIONS(104),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 28,
    ACTIONS(110), 1,
      sym_COMMENTLINE,
    ACTIONS(112), 1,
      sym_slur_open,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_alteration,
    ACTIONS(124), 1,
      sym_note_letter,
    ACTIONS(127), 1,
      sym_rest,
    ACTIONS(133), 1,
      aux_sym_grace_note_token1,
    ACTIONS(136), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(139), 1,
      sym_decoration_shorthand,
    ACTIONS(142), 1,
      sym_bar_line,
    ACTIONS(148), 1,
      sym_end_of_repeated_section,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(49), 1,
      sym_generic_bar_line,
    STATE(62), 1,
      aux_sym_bar_repeat1,
    STATE(66), 1,
      sym_nth_ending_number,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(130), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(5), 2,
      sym_bar,
      aux_sym__MUSIC_CODE_repeat1,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(115), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(12), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
    STATE(53), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(145), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(108), 20,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
  [120] = 29,
    ACTIONS(155), 1,
      sym_COMMENTLINE,
    ACTIONS(157), 1,
      sym_slur_open,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      sym_alteration,
    ACTIONS(169), 1,
      sym_note_letter,
    ACTIONS(172), 1,
      sym_rest,
    ACTIONS(178), 1,
      aux_sym_grace_note_token1,
    ACTIONS(181), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(184), 1,
      sym_decoration_shorthand,
    ACTIONS(187), 1,
      sym_bar_line,
    ACTIONS(193), 1,
      sym_end_of_repeated_section,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(49), 1,
      sym_generic_bar_line,
    STATE(62), 1,
      aux_sym_bar_repeat1,
    STATE(66), 1,
      sym_nth_ending_number,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(153), 2,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
    ACTIONS(175), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(5), 2,
      sym_bar,
      aux_sym__MUSIC_CODE_repeat1,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(160), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(12), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
    STATE(53), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(190), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(151), 18,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
  [242] = 29,
    ACTIONS(155), 1,
      sym_COMMENTLINE,
    ACTIONS(157), 1,
      sym_slur_open,
    ACTIONS(163), 1,
      anon_sym_LBRACK,
    ACTIONS(166), 1,
      sym_alteration,
    ACTIONS(169), 1,
      sym_note_letter,
    ACTIONS(172), 1,
      sym_rest,
    ACTIONS(178), 1,
      aux_sym_grace_note_token1,
    ACTIONS(181), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(184), 1,
      sym_decoration_shorthand,
    ACTIONS(196), 1,
      sym_bar_line,
    ACTIONS(199), 1,
      sym_end_of_repeated_section,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(49), 1,
      sym_generic_bar_line,
    STATE(63), 1,
      aux_sym_bar_repeat1,
    STATE(66), 1,
      sym_nth_ending_number,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(153), 2,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
    ACTIONS(175), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(8), 2,
      sym_bar,
      aux_sym__MUSIC_CODE_repeat1,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(160), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(12), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
    STATE(53), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(190), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(151), 16,
      anon_sym_PERCENT_PERCENT,
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
  [362] = 28,
    ACTIONS(110), 1,
      sym_COMMENTLINE,
    ACTIONS(112), 1,
      sym_slur_open,
    ACTIONS(118), 1,
      anon_sym_LBRACK,
    ACTIONS(121), 1,
      sym_alteration,
    ACTIONS(124), 1,
      sym_note_letter,
    ACTIONS(127), 1,
      sym_rest,
    ACTIONS(133), 1,
      aux_sym_grace_note_token1,
    ACTIONS(136), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(139), 1,
      sym_decoration_shorthand,
    ACTIONS(202), 1,
      sym_bar_line,
    ACTIONS(205), 1,
      sym_end_of_repeated_section,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(49), 1,
      sym_generic_bar_line,
    STATE(63), 1,
      aux_sym_bar_repeat1,
    STATE(66), 1,
      sym_nth_ending_number,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(130), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(8), 2,
      sym_bar,
      aux_sym__MUSIC_CODE_repeat1,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(115), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(12), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
    STATE(53), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(145), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(108), 18,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
  [480] = 12,
    ACTIONS(100), 1,
      anon_sym_s_COLON,
    ACTIONS(102), 1,
      anon_sym_U_COLON,
    ACTIONS(210), 1,
      sym_COMMENTLINE,
    ACTIONS(216), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(218), 1,
      anon_sym_X_COLON,
    ACTIONS(220), 1,
      sym_words_postbody,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(11), 2,
      sym_tune_header_info_line,
      aux_sym_tune_header_repeat1,
    STATE(240), 4,
      sym_abc_version,
      sym_reference_number,
      sym_symbol_line,
      sym_user_defined,
    ACTIONS(212), 8,
      sym_slur_open,
      anon_sym_LBRACK,
      sym_note_letter,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(208), 13,
      ts_builtin_sym_end,
      sym_slur_close,
      sym_alteration,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(214), 22,
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
  [562] = 11,
    ACTIONS(225), 1,
      sym_COMMENTLINE,
    ACTIONS(233), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(236), 1,
      anon_sym_X_COLON,
    ACTIONS(239), 1,
      anon_sym_s_COLON,
    ACTIONS(242), 1,
      anon_sym_U_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(10), 2,
      sym_tune_header_info_line,
      aux_sym_tune_header_repeat1,
    STATE(240), 4,
      sym_abc_version,
      sym_reference_number,
      sym_symbol_line,
      sym_user_defined,
    ACTIONS(228), 8,
      sym_slur_open,
      anon_sym_LBRACK,
      sym_note_letter,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(223), 13,
      ts_builtin_sym_end,
      sym_slur_close,
      sym_alteration,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(230), 23,
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
  [642] = 12,
    ACTIONS(100), 1,
      anon_sym_s_COLON,
    ACTIONS(102), 1,
      anon_sym_U_COLON,
    ACTIONS(216), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(218), 1,
      anon_sym_X_COLON,
    ACTIONS(247), 1,
      sym_COMMENTLINE,
    ACTIONS(251), 1,
      sym_words_postbody,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(10), 2,
      sym_tune_header_info_line,
      aux_sym_tune_header_repeat1,
    STATE(240), 4,
      sym_abc_version,
      sym_reference_number,
      sym_symbol_line,
      sym_user_defined,
    ACTIONS(249), 8,
      sym_slur_open,
      anon_sym_LBRACK,
      sym_note_letter,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(245), 13,
      ts_builtin_sym_end,
      sym_slur_close,
      sym_alteration,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(214), 22,
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
  [724] = 18,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(88), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(90), 1,
      sym_decoration_shorthand,
    ACTIONS(258), 1,
      anon_sym_BQUOTE,
    ACTIONS(260), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(34), 1,
      aux_sym_beam_repeat2,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(256), 3,
      sym_COMMENTLINE,
      sym_slur_open,
      sym_bar_line,
    STATE(14), 4,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
    ACTIONS(254), 31,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      sym_slur_close,
      anon_sym_Z,
      anon_sym_X,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [816] = 16,
    ACTIONS(266), 1,
      anon_sym_LBRACK,
    ACTIONS(269), 1,
      sym_alteration,
    ACTIONS(272), 1,
      sym_note_letter,
    ACTIONS(275), 1,
      sym_rest,
    ACTIONS(278), 1,
      aux_sym_grace_note_token1,
    ACTIONS(281), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(284), 1,
      sym_decoration_shorthand,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(264), 3,
      sym_COMMENTLINE,
      sym_slur_open,
      sym_bar_line,
    STATE(13), 4,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
    ACTIONS(262), 31,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      sym_slur_close,
      anon_sym_Z,
      anon_sym_X,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [902] = 9,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    STATE(13), 4,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
    ACTIONS(289), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(287), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [974] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(293), 10,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      sym_note_letter,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(291), 39,
      ts_builtin_sym_end,
      sym_slur_close,
      sym_alteration,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1032] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(297), 10,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      sym_note_letter,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(295), 39,
      ts_builtin_sym_end,
      sym_slur_close,
      sym_alteration,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1090] = 5,
    ACTIONS(303), 1,
      sym_octave,
    STATE(20), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(301), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(299), 40,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym__note_construct_token1,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1151] = 5,
    ACTIONS(309), 1,
      sym_octave,
    STATE(18), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(307), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(305), 40,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym__note_construct_token1,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1212] = 5,
    ACTIONS(316), 1,
      sym_octave,
    STATE(21), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(314), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(312), 40,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym__note_construct_token1,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1273] = 5,
    ACTIONS(318), 1,
      sym_octave,
    STATE(18), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(314), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(312), 40,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym__note_construct_token1,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1334] = 5,
    ACTIONS(318), 1,
      sym_octave,
    STATE(18), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(322), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(320), 40,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym__note_construct_token1,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      sym_annotation,
      sym_tuplet_marker,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1395] = 32,
    ACTIONS(72), 1,
      sym_slur_open,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(88), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(324), 1,
      ts_builtin_sym_end,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(328), 1,
      sym_bar_line,
    ACTIONS(330), 1,
      sym_end_of_repeated_section,
    ACTIONS(332), 1,
      sym_words_postbody,
    STATE(4), 1,
      sym__MUSIC_CODE,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(49), 1,
      sym_generic_bar_line,
    STATE(63), 1,
      aux_sym_bar_repeat1,
    STATE(66), 1,
      sym_nth_ending_number,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    STATE(175), 1,
      sym_tune_body,
    STATE(245), 1,
      sym_lyric_section,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(84), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(7), 2,
      sym_bar,
      aux_sym__MUSIC_CODE_repeat1,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    STATE(184), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(74), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(12), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
    STATE(53), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(94), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [1509] = 4,
    ACTIONS(338), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(336), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(334), 38,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym__note_construct_token1,
      anon_sym_RBRACK,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1565] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(342), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(340), 38,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym__note_construct_token1,
      anon_sym_RBRACK,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1618] = 4,
    ACTIONS(348), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(346), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(344), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1672] = 5,
    ACTIONS(354), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(356), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(352), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(350), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1728] = 4,
    ACTIONS(362), 1,
      aux_sym__note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(360), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(358), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1782] = 4,
    ACTIONS(368), 1,
      aux_sym__note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(366), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(364), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1836] = 4,
    ACTIONS(374), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(372), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(370), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1890] = 5,
    ACTIONS(380), 1,
      anon_sym_BQUOTE,
    STATE(30), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(378), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(376), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [1946] = 4,
    ACTIONS(387), 1,
      aux_sym__note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(385), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(383), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2000] = 4,
    ACTIONS(393), 1,
      aux_sym__note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(391), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(389), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2054] = 4,
    ACTIONS(399), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(397), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(395), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2108] = 5,
    ACTIONS(258), 1,
      anon_sym_BQUOTE,
    STATE(30), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(289), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(287), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2164] = 4,
    ACTIONS(405), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(403), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(401), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2218] = 5,
    ACTIONS(407), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(409), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(352), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(350), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2274] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(378), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(376), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2325] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(346), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(344), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2376] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(360), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(358), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2427] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(385), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(383), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2478] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(397), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(395), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2529] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(391), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(389), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2580] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(413), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(411), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2631] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(403), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(401), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2682] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(417), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(415), 36,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2733] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(421), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(419), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2783] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(352), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(350), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2833] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(425), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(423), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2883] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(429), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(427), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2933] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(433), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(431), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [2983] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(437), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(435), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [3033] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(441), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(439), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [3083] = 5,
    ACTIONS(445), 1,
      sym_COMMENTLINE,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(447), 5,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(450), 15,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(443), 20,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
  [3137] = 5,
    ACTIONS(354), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(356), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(352), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(350), 33,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [3191] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(455), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(453), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [3241] = 5,
    ACTIONS(407), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(409), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(352), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(350), 33,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [3295] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(459), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(457), 35,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [3345] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(463), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(461), 33,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [3393] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(467), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(465), 33,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [3441] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(471), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(469), 33,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [3489] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(475), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(473), 33,
      ts_builtin_sym_end,
      anon_sym_PERCENT_PERCENT,
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
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
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
  [3537] = 24,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(88), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(92), 1,
      sym_bar_line,
    ACTIONS(96), 1,
      sym_end_of_repeated_section,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(477), 1,
      sym_slur_open,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(48), 1,
      sym_generic_bar_line,
    STATE(66), 1,
      sym_nth_ending_number,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(84), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(479), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(12), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
    ACTIONS(94), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    STATE(64), 5,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
      aux_sym_bar_repeat1,
  [3626] = 24,
    ACTIONS(76), 1,
      anon_sym_LBRACK,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(88), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(328), 1,
      sym_bar_line,
    ACTIONS(330), 1,
      sym_end_of_repeated_section,
    ACTIONS(477), 1,
      sym_slur_open,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(48), 1,
      sym_generic_bar_line,
    STATE(66), 1,
      sym_nth_ending_number,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(84), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(479), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(12), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
    ACTIONS(94), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    STATE(64), 5,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
      aux_sym_bar_repeat1,
  [3715] = 21,
    ACTIONS(481), 1,
      sym_slur_open,
    ACTIONS(487), 1,
      anon_sym_LBRACK,
    ACTIONS(490), 1,
      sym_alteration,
    ACTIONS(493), 1,
      sym_note_letter,
    ACTIONS(496), 1,
      sym_rest,
    ACTIONS(502), 1,
      aux_sym_grace_note_token1,
    ACTIONS(505), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(508), 1,
      sym_decoration_shorthand,
    ACTIONS(511), 1,
      sym_bar_line,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(66), 1,
      sym_nth_ending_number,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(499), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(484), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(12), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
    STATE(64), 5,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
      aux_sym_bar_repeat1,
    ACTIONS(513), 6,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [3795] = 19,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(88), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(515), 1,
      sym_slur_open,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    ACTIONS(521), 1,
      sym_alteration,
    ACTIONS(523), 1,
      sym_note_letter,
    ACTIONS(525), 1,
      sym_rest,
    STATE(65), 1,
      sym_nth_ending_number,
    STATE(84), 1,
      sym__pitch,
    STATE(93), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(165), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(527), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(103), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(517), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(67), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
    STATE(168), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
  [3863] = 19,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(88), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(519), 1,
      anon_sym_LBRACK,
    ACTIONS(521), 1,
      sym_alteration,
    ACTIONS(523), 1,
      sym_note_letter,
    ACTIONS(525), 1,
      sym_rest,
    ACTIONS(529), 1,
      sym_slur_open,
    STATE(65), 1,
      sym_nth_ending_number,
    STATE(84), 1,
      sym__pitch,
    STATE(93), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(165), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(527), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(103), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(531), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(67), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
    STATE(178), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
  [3931] = 18,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(256), 1,
      sym_bar_line,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(521), 1,
      sym_alteration,
    ACTIONS(523), 1,
      sym_note_letter,
    ACTIONS(525), 1,
      sym_rest,
    ACTIONS(533), 1,
      anon_sym_BQUOTE,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    ACTIONS(537), 1,
      aux_sym_chord_symbol_token1,
    STATE(84), 1,
      sym__pitch,
    STATE(93), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(153), 1,
      aux_sym_beam_repeat2,
    STATE(165), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(254), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
    STATE(69), 4,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [3994] = 16,
    ACTIONS(264), 1,
      sym_bar_line,
    ACTIONS(278), 1,
      aux_sym_grace_note_token1,
    ACTIONS(539), 1,
      anon_sym_LBRACK,
    ACTIONS(542), 1,
      sym_alteration,
    ACTIONS(545), 1,
      sym_note_letter,
    ACTIONS(548), 1,
      sym_rest,
    ACTIONS(551), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(554), 1,
      sym_decoration_shorthand,
    STATE(84), 1,
      sym__pitch,
    STATE(93), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(165), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(262), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
    STATE(68), 4,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [4051] = 16,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(289), 1,
      sym_bar_line,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(521), 1,
      sym_alteration,
    ACTIONS(523), 1,
      sym_note_letter,
    ACTIONS(525), 1,
      sym_rest,
    ACTIONS(535), 1,
      anon_sym_LBRACK,
    ACTIONS(537), 1,
      aux_sym_chord_symbol_token1,
    STATE(84), 1,
      sym__pitch,
    STATE(93), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(165), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(287), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
    STATE(68), 4,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [4108] = 11,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(561), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(563), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(565), 1,
      sym_bar_line,
    ACTIONS(569), 1,
      sym_end_of_repeated_section,
    ACTIONS(571), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(559), 2,
      sym_note_skip,
      sym_annotation,
    STATE(132), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(71), 4,
      sym_chord_symbol,
      sym_generic_bar_line,
      sym_symbol,
      aux_sym_symbol_line_repeat1,
    ACTIONS(567), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [4151] = 11,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(576), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(578), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(581), 1,
      sym_bar_line,
    ACTIONS(587), 1,
      sym_end_of_repeated_section,
    ACTIONS(590), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(573), 2,
      sym_note_skip,
      sym_annotation,
    STATE(132), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(71), 4,
      sym_chord_symbol,
      sym_generic_bar_line,
      sym_symbol,
      aux_sym_symbol_line_repeat1,
    ACTIONS(584), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [4194] = 5,
    ACTIONS(593), 1,
      sym_octave,
    STATE(74), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(301), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(299), 13,
      anon_sym_BQUOTE,
      aux_sym__note_construct_token1,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4224] = 9,
    ACTIONS(563), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(565), 1,
      sym_bar_line,
    ACTIONS(599), 1,
      sym_end_of_repeated_section,
    ACTIONS(601), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(595), 2,
      sym_note_skip,
      sym_annotation,
    STATE(132), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(70), 4,
      sym_chord_symbol,
      sym_generic_bar_line,
      sym_symbol,
      aux_sym_symbol_line_repeat1,
    ACTIONS(597), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [4262] = 5,
    ACTIONS(603), 1,
      sym_octave,
    STATE(76), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(314), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(312), 13,
      anon_sym_BQUOTE,
      aux_sym__note_construct_token1,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4292] = 5,
    ACTIONS(605), 1,
      sym_octave,
    STATE(77), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(314), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(312), 13,
      anon_sym_BQUOTE,
      aux_sym__note_construct_token1,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4322] = 5,
    ACTIONS(607), 1,
      sym_octave,
    STATE(76), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(307), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(305), 13,
      anon_sym_BQUOTE,
      aux_sym__note_construct_token1,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4352] = 5,
    ACTIONS(603), 1,
      sym_octave,
    STATE(76), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(322), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(320), 13,
      anon_sym_BQUOTE,
      aux_sym__note_construct_token1,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4382] = 5,
    STATE(78), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(610), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(613), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(615), 11,
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
  [4411] = 14,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(521), 1,
      sym_alteration,
    ACTIONS(523), 1,
      sym_note_letter,
    ACTIONS(525), 1,
      sym_rest,
    ACTIONS(537), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(617), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym__pitch,
    STATE(93), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(165), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    STATE(161), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
  [4458] = 14,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(537), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(619), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(28), 1,
      sym_note,
    STATE(150), 1,
      sym_chord_symbol,
    STATE(160), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(115), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    STATE(37), 3,
      sym__nte_or_chrd,
      sym__note_construct,
      sym__chord_cstrct,
  [4505] = 5,
    STATE(78), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(621), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(623), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(625), 11,
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
  [4534] = 5,
    STATE(81), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(621), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(627), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(629), 11,
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
  [4563] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(613), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(615), 13,
      anon_sym_DASH,
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
  [4587] = 4,
    ACTIONS(631), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(336), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(334), 12,
      anon_sym_BQUOTE,
      aux_sym__note_construct_token1,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4613] = 4,
    ACTIONS(633), 1,
      aux_sym__note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(391), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(389), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4638] = 4,
    ACTIONS(635), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(397), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(395), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4663] = 9,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(639), 1,
      anon_sym_DASH,
    ACTIONS(643), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(645), 1,
      aux_sym_verse_number_token1,
    ACTIONS(641), 2,
      aux_sym_body_info_line_token1,
      aux_sym_words_line_token1,
    STATE(95), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(143), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(637), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [4698] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(342), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(340), 12,
      anon_sym_BQUOTE,
      aux_sym__note_construct_token1,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4721] = 4,
    ACTIONS(647), 1,
      aux_sym__note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(385), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(383), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4746] = 4,
    ACTIONS(649), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(403), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(401), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4771] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(651), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(653), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(352), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [4798] = 4,
    ACTIONS(655), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(346), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(344), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4823] = 4,
    ACTIONS(657), 1,
      aux_sym__note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(366), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(364), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4848] = 4,
    ACTIONS(659), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(372), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(370), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4873] = 9,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(664), 1,
      anon_sym_DASH,
    ACTIONS(669), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(672), 1,
      aux_sym_verse_number_token1,
    ACTIONS(667), 2,
      aux_sym_body_info_line_token1,
      aux_sym_words_line_token1,
    STATE(95), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(143), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(661), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [4908] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(675), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(677), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(352), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [4935] = 4,
    ACTIONS(679), 1,
      aux_sym__note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(360), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(358), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4960] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(413), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(411), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [4982] = 12,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(681), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(102), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5022] = 12,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(683), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(102), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5062] = 12,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(685), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(102), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5102] = 12,
    ACTIONS(687), 1,
      anon_sym_RBRACK,
    ACTIONS(689), 1,
      sym_alteration,
    ACTIONS(692), 1,
      sym_note_letter,
    ACTIONS(695), 1,
      sym_rest,
    ACTIONS(698), 1,
      aux_sym_grace_note_token1,
    ACTIONS(701), 1,
      sym_decoration_shorthand,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(102), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5142] = 13,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(521), 1,
      sym_alteration,
    ACTIONS(523), 1,
      sym_note_letter,
    ACTIONS(525), 1,
      sym_rest,
    ACTIONS(537), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(704), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym__pitch,
    STATE(85), 1,
      sym_note,
    STATE(149), 1,
      sym_chord_symbol,
    STATE(158), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(142), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5184] = 12,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(706), 1,
      aux_sym_nth_ending_number_token1,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(109), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5224] = 12,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(708), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(102), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5264] = 12,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(710), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(102), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5304] = 12,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(712), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(102), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5344] = 12,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(714), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(102), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5384] = 12,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(716), 1,
      anon_sym_RBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(102), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5424] = 12,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(706), 1,
      aux_sym_nth_ending_number_token1,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(108), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5464] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(417), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(415), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [5486] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(403), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(401), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [5508] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(391), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(389), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [5530] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(397), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(395), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [5552] = 13,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(537), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(718), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(32), 1,
      sym_note,
    STATE(147), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(142), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5594] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(385), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(383), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [5616] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(360), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(358), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [5638] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(346), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(344), 11,
      anon_sym_BQUOTE,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [5660] = 8,
    ACTIONS(722), 1,
      anon_sym_DASH,
    ACTIONS(724), 1,
      sym_UNDERSCORE,
    ACTIONS(726), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(728), 1,
      aux_sym_verse_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(123), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(720), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(151), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [5691] = 11,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(100), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5728] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(421), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [5749] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(730), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [5770] = 9,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(722), 1,
      anon_sym_DASH,
    ACTIONS(724), 1,
      sym_UNDERSCORE,
    ACTIONS(726), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(728), 1,
      aux_sym_verse_number_token1,
    ACTIONS(732), 1,
      sym__NEWLINE,
    STATE(136), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(720), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(151), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [5803] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(437), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [5824] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(734), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [5845] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(736), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [5866] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(738), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [5887] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(459), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [5908] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(455), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [5929] = 11,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(109), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [5966] = 11,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(107), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [6003] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(352), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [6024] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(740), 12,
      sym_note_skip,
      aux_sym_body_info_line_token1,
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
  [6045] = 11,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(106), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [6082] = 8,
    ACTIONS(637), 1,
      sym_UNDERSCORE,
    ACTIONS(643), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(645), 1,
      aux_sym_verse_number_token1,
    ACTIONS(744), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(87), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(742), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(143), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [6113] = 9,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(746), 1,
      sym__NEWLINE,
    ACTIONS(751), 1,
      anon_sym_DASH,
    ACTIONS(754), 1,
      sym_UNDERSCORE,
    ACTIONS(757), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(760), 1,
      aux_sym_verse_number_token1,
    STATE(136), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(748), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(151), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [6146] = 11,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(99), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [6183] = 11,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(105), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [6220] = 11,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(108), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [6257] = 11,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    STATE(23), 1,
      sym__pitch,
    STATE(167), 1,
      sym_note,
    STATE(172), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(101), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(141), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [6294] = 10,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(86), 1,
      aux_sym_grace_note_token1,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    STATE(23), 1,
      sym__pitch,
    STATE(162), 1,
      sym_note,
    STATE(176), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(142), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
  [6327] = 4,
    ACTIONS(765), 1,
      aux_sym_grace_note_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(142), 2,
      sym_grace_note,
      aux_sym__note_construct_repeat1,
    ACTIONS(763), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
  [6347] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(768), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      aux_sym_body_info_line_token1,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [6365] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(770), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      aux_sym_body_info_line_token1,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [6383] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(772), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      aux_sym_body_info_line_token1,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [6401] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(774), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      aux_sym_body_info_line_token1,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
  [6419] = 9,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(776), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(27), 1,
      sym_note,
    STATE(166), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6448] = 9,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(521), 1,
      sym_alteration,
    ACTIONS(523), 1,
      sym_note_letter,
    ACTIONS(525), 1,
      sym_rest,
    ACTIONS(704), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym__pitch,
    STATE(85), 1,
      sym_note,
    STATE(158), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6477] = 9,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(521), 1,
      sym_alteration,
    ACTIONS(523), 1,
      sym_note_letter,
    ACTIONS(525), 1,
      sym_rest,
    ACTIONS(778), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym__pitch,
    STATE(97), 1,
      sym_note,
    STATE(159), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6506] = 9,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(326), 1,
      sym_decoration_shorthand,
    ACTIONS(718), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(32), 1,
      sym_note,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6535] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(768), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(780), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [6551] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(774), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(782), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [6567] = 5,
    ACTIONS(289), 1,
      sym_bar_line,
    ACTIONS(533), 1,
      anon_sym_BQUOTE,
    STATE(155), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(287), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6587] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(784), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
  [6601] = 5,
    ACTIONS(378), 1,
      sym_bar_line,
    ACTIONS(786), 1,
      anon_sym_BQUOTE,
    STATE(155), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(376), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6621] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(772), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(789), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [6637] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(770), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(791), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [6653] = 7,
    ACTIONS(521), 1,
      sym_alteration,
    ACTIONS(523), 1,
      sym_note_letter,
    ACTIONS(525), 1,
      sym_rest,
    ACTIONS(778), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym__pitch,
    STATE(97), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6676] = 7,
    ACTIONS(521), 1,
      sym_alteration,
    ACTIONS(523), 1,
      sym_note_letter,
    ACTIONS(525), 1,
      sym_rest,
    ACTIONS(793), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym__pitch,
    STATE(89), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6699] = 7,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(718), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(32), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6722] = 3,
    ACTIONS(378), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(376), 5,
      anon_sym_BQUOTE,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6737] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(795), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [6750] = 7,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(776), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(27), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6773] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(797), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [6786] = 7,
    ACTIONS(521), 1,
      sym_alteration,
    ACTIONS(523), 1,
      sym_note_letter,
    ACTIONS(525), 1,
      sym_rest,
    ACTIONS(704), 1,
      anon_sym_LBRACK,
    STATE(84), 1,
      sym__pitch,
    STATE(85), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6809] = 7,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    ACTIONS(799), 1,
      anon_sym_LBRACK,
    STATE(23), 1,
      sym__pitch,
    STATE(31), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6832] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(801), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [6845] = 3,
    ACTIONS(803), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(805), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6859] = 3,
    ACTIONS(441), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(439), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6873] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(807), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [6885] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(809), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [6897] = 6,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    STATE(23), 1,
      sym__pitch,
    STATE(162), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6917] = 5,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(811), 1,
      aux_sym_grace_note_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(179), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [6935] = 3,
    ACTIONS(433), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(431), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6949] = 5,
    ACTIONS(332), 1,
      sym_words_postbody,
    ACTIONS(813), 1,
      ts_builtin_sym_end,
    STATE(301), 1,
      sym_lyric_section,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(184), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [6967] = 6,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(82), 1,
      sym_rest,
    STATE(23), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6987] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(815), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [6999] = 3,
    ACTIONS(817), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(819), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [7013] = 5,
    ACTIONS(821), 1,
      sym_alteration,
    ACTIONS(824), 1,
      sym_note_letter,
    ACTIONS(827), 1,
      aux_sym_grace_note_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(179), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [7031] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(829), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [7043] = 4,
    ACTIONS(78), 1,
      sym_alteration,
    ACTIONS(80), 1,
      sym_note_letter,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(173), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [7058] = 4,
    ACTIONS(831), 1,
      ts_builtin_sym_end,
    ACTIONS(833), 1,
      sym_words_postbody,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(182), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [7073] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(836), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [7084] = 4,
    ACTIONS(332), 1,
      sym_words_postbody,
    ACTIONS(838), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(182), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [7099] = 3,
    ACTIONS(840), 1,
      sym_alteration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(842), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [7112] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(844), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(846), 1,
      aux_sym_words_line_token1,
    STATE(189), 1,
      aux_sym_words_line_repeat2,
  [7128] = 4,
    ACTIONS(848), 1,
      aux_sym_body_inline_info_token1,
    STATE(59), 1,
      sym_TEXTLINE,
    STATE(360), 1,
      sym_TEXT,
    ACTIONS(557), 2,
      sym__space,
      sym__NEWLINE,
  [7142] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(850), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [7152] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(846), 1,
      aux_sym_words_line_token1,
    ACTIONS(852), 1,
      aux_sym_body_info_line_token1,
    STATE(195), 1,
      aux_sym_words_line_repeat2,
  [7168] = 4,
    ACTIONS(854), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(856), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(858), 1,
      sym_chord_type,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7182] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(860), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(862), 1,
      anon_sym_DOT,
    STATE(191), 1,
      aux_sym_abc_version_repeat1,
  [7198] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(865), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(867), 1,
      anon_sym_DOT,
    STATE(191), 1,
      aux_sym_abc_version_repeat1,
  [7214] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(867), 1,
      anon_sym_DOT,
    ACTIONS(869), 1,
      aux_sym_body_info_line_token1,
    STATE(192), 1,
      aux_sym_abc_version_repeat1,
  [7230] = 4,
    ACTIONS(871), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(873), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(875), 1,
      sym_chord_type,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7244] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(641), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(877), 1,
      aux_sym_words_line_token1,
    STATE(195), 1,
      aux_sym_words_line_repeat2,
  [7260] = 3,
    ACTIONS(880), 1,
      sym_note_letter,
    STATE(290), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7271] = 3,
    ACTIONS(880), 1,
      sym_note_letter,
    STATE(292), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7282] = 3,
    ACTIONS(842), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(882), 1,
      sym_alteration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7293] = 3,
    ACTIONS(884), 1,
      sym_note_letter,
    STATE(190), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7304] = 3,
    ACTIONS(884), 1,
      sym_note_letter,
    STATE(194), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7315] = 3,
    ACTIONS(880), 1,
      sym_note_letter,
    STATE(303), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7326] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(886), 2,
      ts_builtin_sym_end,
      sym_words_postbody,
  [7335] = 3,
    ACTIONS(888), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(890), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7346] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(892), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [7355] = 3,
    ACTIONS(894), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(896), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7366] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(860), 2,
      aux_sym_body_info_line_token1,
      anon_sym_DOT,
  [7377] = 3,
    ACTIONS(880), 1,
      sym_note_letter,
    STATE(244), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7388] = 3,
    ACTIONS(898), 1,
      anon_sym_BANGtrill_BANG,
    STATE(304), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7399] = 2,
    ACTIONS(900), 1,
      anon_sym_BANGcrescendo_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7407] = 2,
    ACTIONS(902), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7415] = 2,
    ACTIONS(904), 1,
      anon_sym_BANGdiminuendo_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7423] = 2,
    ACTIONS(906), 1,
      anon_sym_BANG_GT_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7431] = 2,
    ACTIONS(908), 1,
      anon_sym_BANGsegno_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7439] = 2,
    ACTIONS(910), 1,
      anon_sym_BANGcoda_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7447] = 2,
    ACTIONS(912), 1,
      anon_sym_BANGD_DOTS_DOT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7455] = 2,
    ACTIONS(914), 1,
      anon_sym_BANGD_DOTC_DOT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7463] = 2,
    ACTIONS(916), 1,
      anon_sym_BANGdacoda_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7471] = 2,
    ACTIONS(918), 1,
      anon_sym_BANGdacapo_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7479] = 2,
    ACTIONS(920), 1,
      anon_sym_BANGfine_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7487] = 2,
    ACTIONS(922), 1,
      anon_sym_BANGshortphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7495] = 2,
    ACTIONS(924), 1,
      anon_sym_BANGmediumphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7503] = 2,
    ACTIONS(926), 1,
      anon_sym_BANGlongphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7511] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(297), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(557), 1,
      sym__space,
  [7521] = 2,
    ACTIONS(928), 1,
      aux_sym_nth_ending_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7529] = 2,
    ACTIONS(930), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7537] = 2,
    ACTIONS(932), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7545] = 2,
    ACTIONS(934), 1,
      anon_sym_BANGtrill_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7553] = 2,
    ACTIONS(936), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7561] = 2,
    ACTIONS(938), 1,
      aux_sym_nth_ending_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7569] = 2,
    ACTIONS(940), 1,
      anon_sym_BANGlowermordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7577] = 2,
    ACTIONS(942), 1,
      anon_sym_BANGdiminuendo_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7585] = 2,
    ACTIONS(944), 1,
      anon_sym_BANG_LT_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7593] = 2,
    ACTIONS(946), 1,
      anon_sym_BANGcrescendo_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7601] = 2,
    ACTIONS(948), 1,
      anon_sym_BANG_LT_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7609] = 2,
    ACTIONS(950), 1,
      anon_sym_BANGsfz_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7617] = 2,
    ACTIONS(952), 1,
      anon_sym_BANGffff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7625] = 2,
    ACTIONS(954), 1,
      aux_sym_nth_ending_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7633] = 2,
    ACTIONS(956), 1,
      anon_sym_BANGfff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7641] = 2,
    ACTIONS(958), 1,
      anon_sym_BANGff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7649] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(960), 1,
      aux_sym_body_info_line_token1,
  [7659] = 2,
    ACTIONS(962), 1,
      anon_sym_BANGf_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7667] = 2,
    ACTIONS(964), 1,
      anon_sym_BANGmf_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7675] = 2,
    ACTIONS(966), 1,
      anon_sym_BANGmp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7683] = 2,
    ACTIONS(968), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7691] = 2,
    ACTIONS(813), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7699] = 2,
    ACTIONS(970), 1,
      anon_sym_BANGp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7707] = 2,
    ACTIONS(972), 1,
      anon_sym_BANGpp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7715] = 2,
    ACTIONS(974), 1,
      anon_sym_BANGppp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7723] = 2,
    ACTIONS(976), 1,
      anon_sym_BANGpppp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7731] = 2,
    ACTIONS(978), 1,
      anon_sym_BANGbreath_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7739] = 2,
    ACTIONS(980), 1,
      anon_sym_BANGthumb_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7747] = 2,
    ACTIONS(982), 1,
      anon_sym_BANGopen_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7755] = 2,
    ACTIONS(984), 1,
      anon_sym_BANGdownbow_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7763] = 2,
    ACTIONS(986), 1,
      anon_sym_BANGupbow_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7771] = 2,
    ACTIONS(988), 1,
      anon_sym_BANGwedge_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7779] = 2,
    ACTIONS(990), 1,
      anon_sym_BANGslide_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7787] = 2,
    ACTIONS(992), 1,
      anon_sym_BANGsnap_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7795] = 2,
    ACTIONS(994), 1,
      anon_sym_BANGtrill_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7803] = 2,
    ACTIONS(996), 1,
      anon_sym_BANGplus_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7811] = 2,
    ACTIONS(998), 1,
      aux_sym_nth_ending_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7819] = 2,
    ACTIONS(1000), 1,
      anon_sym_BANG_PLUS_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7827] = 2,
    ACTIONS(1002), 1,
      anon_sym_BANG0_BANG_DASH_BANG5_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7835] = 2,
    ACTIONS(1004), 1,
      anon_sym_BANGtrill_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7843] = 2,
    ACTIONS(1006), 1,
      anon_sym_BANGtenuto_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7851] = 2,
    ACTIONS(1008), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7859] = 2,
    ACTIONS(1010), 1,
      anon_sym_BANGinvertedfermata_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7867] = 2,
    ACTIONS(1012), 1,
      anon_sym_BANGfermata_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7875] = 2,
    ACTIONS(1014), 1,
      anon_sym_BANGemphasis_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7883] = 2,
    ACTIONS(1016), 1,
      anon_sym_BANGaccent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7891] = 2,
    ACTIONS(1018), 1,
      aux_sym_multimeasure_rest_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7899] = 2,
    ACTIONS(1020), 1,
      anon_sym_BANG_GT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7907] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(1022), 2,
      sym__NEWLINE,
      sym_COMMENTLINE,
  [7915] = 2,
    ACTIONS(1024), 1,
      sym_note_letter,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7923] = 2,
    ACTIONS(1026), 1,
      anon_sym_BANGtrill_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7931] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(740), 1,
      aux_sym_body_info_line_token1,
  [7941] = 2,
    ACTIONS(1028), 1,
      anon_sym_BANGlowermordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7949] = 2,
    ACTIONS(1030), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7957] = 2,
    ACTIONS(1032), 1,
      aux_sym_nth_ending_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7965] = 2,
    ACTIONS(1034), 1,
      sym_note_letter,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7973] = 2,
    ACTIONS(1036), 1,
      aux_sym_multimeasure_rest_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7981] = 2,
    ACTIONS(1038), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7989] = 2,
    ACTIONS(1040), 1,
      anon_sym_BANGarpeggio_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7997] = 2,
    ACTIONS(1042), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8005] = 2,
    ACTIONS(1044), 1,
      anon_sym_BANGinvertedturnx_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8013] = 2,
    ACTIONS(1046), 1,
      anon_sym_BANGinvertedturn_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8021] = 2,
    ACTIONS(1048), 1,
      anon_sym_BANG_GT_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8029] = 2,
    ACTIONS(1050), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8037] = 2,
    ACTIONS(1052), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8045] = 2,
    ACTIONS(1054), 1,
      anon_sym_BANGturnx_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8053] = 2,
    ACTIONS(1056), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8061] = 2,
    ACTIONS(1058), 1,
      anon_sym_BANGturn_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8069] = 2,
    ACTIONS(1060), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8077] = 2,
    ACTIONS(1062), 1,
      anon_sym_BANGroll_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8085] = 2,
    ACTIONS(1064), 1,
      anon_sym_BANGlongphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8093] = 2,
    ACTIONS(1066), 1,
      anon_sym_BANGpralltriller_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8101] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(1068), 1,
      aux_sym_body_info_line_token1,
  [8111] = 2,
    ACTIONS(1070), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8119] = 2,
    ACTIONS(1072), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8127] = 2,
    ACTIONS(1074), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8135] = 2,
    ACTIONS(1076), 1,
      anon_sym_BANGmordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8143] = 2,
    ACTIONS(1078), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8151] = 2,
    ACTIONS(1080), 1,
      anon_sym_BANGuppermordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8159] = 2,
    ACTIONS(1082), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8167] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(557), 1,
      sym__space,
    ACTIONS(1084), 1,
      aux_sym_body_info_line_token1,
  [8177] = 2,
    ACTIONS(1086), 1,
      anon_sym_BANGmediumphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8185] = 2,
    ACTIONS(1088), 1,
      anon_sym_BANGshortphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8193] = 2,
    ACTIONS(1090), 1,
      anon_sym_BANGfine_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8201] = 2,
    ACTIONS(1092), 1,
      anon_sym_BANGdacapo_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8209] = 2,
    ACTIONS(1094), 1,
      anon_sym_BANGdacoda_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8217] = 2,
    ACTIONS(1096), 1,
      anon_sym_BANGD_DOTC_DOT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8225] = 2,
    ACTIONS(1098), 1,
      anon_sym_BANGD_DOTS_DOT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8233] = 2,
    ACTIONS(1100), 1,
      anon_sym_BANGcoda_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8241] = 2,
    ACTIONS(1102), 1,
      anon_sym_BANGsegno_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8249] = 2,
    ACTIONS(1104), 1,
      anon_sym_BANG_GT_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8257] = 2,
    ACTIONS(1106), 1,
      anon_sym_BANGdiminuendo_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8265] = 2,
    ACTIONS(1108), 1,
      anon_sym_BANG_GT_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8273] = 2,
    ACTIONS(1110), 1,
      anon_sym_BANGdiminuendo_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8281] = 2,
    ACTIONS(1112), 1,
      anon_sym_BANG_LT_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8289] = 2,
    ACTIONS(1114), 1,
      anon_sym_BANGcrescendo_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8297] = 2,
    ACTIONS(1116), 1,
      anon_sym_BANG_LT_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8305] = 2,
    ACTIONS(1118), 1,
      anon_sym_BANGcrescendo_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8313] = 2,
    ACTIONS(1120), 1,
      anon_sym_BANGsfz_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8321] = 2,
    ACTIONS(1122), 1,
      anon_sym_BANGffff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8329] = 2,
    ACTIONS(1124), 1,
      anon_sym_BANGfff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8337] = 2,
    ACTIONS(1126), 1,
      anon_sym_BANGff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8345] = 2,
    ACTIONS(1128), 1,
      anon_sym_BANGf_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8353] = 2,
    ACTIONS(1130), 1,
      anon_sym_BANGmf_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8361] = 2,
    ACTIONS(1132), 1,
      anon_sym_BANGmp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8369] = 2,
    ACTIONS(1134), 1,
      anon_sym_BANGp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8377] = 2,
    ACTIONS(1136), 1,
      anon_sym_BANGpp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8385] = 2,
    ACTIONS(1138), 1,
      anon_sym_BANGppp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8393] = 2,
    ACTIONS(1140), 1,
      anon_sym_BANGpppp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8401] = 2,
    ACTIONS(1142), 1,
      anon_sym_BANGbreath_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8409] = 2,
    ACTIONS(1144), 1,
      anon_sym_BANGthumb_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8417] = 2,
    ACTIONS(1146), 1,
      anon_sym_BANGopen_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8425] = 2,
    ACTIONS(1148), 1,
      anon_sym_BANGdownbow_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8433] = 2,
    ACTIONS(1150), 1,
      anon_sym_BANGupbow_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8441] = 2,
    ACTIONS(1152), 1,
      anon_sym_BANGwedge_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8449] = 2,
    ACTIONS(1154), 1,
      anon_sym_BANGslide_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8457] = 2,
    ACTIONS(1156), 1,
      anon_sym_BANGsnap_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8465] = 2,
    ACTIONS(1158), 1,
      anon_sym_BANGplus_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8473] = 2,
    ACTIONS(1160), 1,
      anon_sym_BANG_PLUS_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8481] = 2,
    ACTIONS(1162), 1,
      anon_sym_BANG0_BANG_DASH_BANG5_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8489] = 2,
    ACTIONS(1164), 1,
      anon_sym_BANGtenuto_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8497] = 2,
    ACTIONS(1166), 1,
      anon_sym_BANGinvertedfermata_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8505] = 2,
    ACTIONS(1168), 1,
      anon_sym_BANGfermata_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8513] = 2,
    ACTIONS(1170), 1,
      anon_sym_BANGemphasis_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8521] = 2,
    ACTIONS(1172), 1,
      anon_sym_BANGaccent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8529] = 2,
    ACTIONS(1174), 1,
      anon_sym_BANG_GT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8537] = 2,
    ACTIONS(1176), 1,
      anon_sym_BANGarpeggio_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8545] = 2,
    ACTIONS(1178), 1,
      anon_sym_BANGinvertedturnx_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8553] = 2,
    ACTIONS(1180), 1,
      anon_sym_BANGinvertedturn_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8561] = 2,
    ACTIONS(1182), 1,
      anon_sym_BANGturnx_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8569] = 2,
    ACTIONS(1184), 1,
      anon_sym_BANGturn_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8577] = 2,
    ACTIONS(1186), 1,
      anon_sym_BANGroll_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8585] = 2,
    ACTIONS(1188), 1,
      anon_sym_BANGpralltriller_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8593] = 2,
    ACTIONS(1190), 1,
      anon_sym_BANGmordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8601] = 2,
    ACTIONS(1192), 1,
      anon_sym_BANGuppermordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8609] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(1194), 1,
      sym__NEWLINE,
  [8616] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(1196), 1,
      sym__NEWLINE,
  [8623] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(1198), 1,
      sym__NEWLINE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 120,
  [SMALL_STATE(7)] = 242,
  [SMALL_STATE(8)] = 362,
  [SMALL_STATE(9)] = 480,
  [SMALL_STATE(10)] = 562,
  [SMALL_STATE(11)] = 642,
  [SMALL_STATE(12)] = 724,
  [SMALL_STATE(13)] = 816,
  [SMALL_STATE(14)] = 902,
  [SMALL_STATE(15)] = 974,
  [SMALL_STATE(16)] = 1032,
  [SMALL_STATE(17)] = 1090,
  [SMALL_STATE(18)] = 1151,
  [SMALL_STATE(19)] = 1212,
  [SMALL_STATE(20)] = 1273,
  [SMALL_STATE(21)] = 1334,
  [SMALL_STATE(22)] = 1395,
  [SMALL_STATE(23)] = 1509,
  [SMALL_STATE(24)] = 1565,
  [SMALL_STATE(25)] = 1618,
  [SMALL_STATE(26)] = 1672,
  [SMALL_STATE(27)] = 1728,
  [SMALL_STATE(28)] = 1782,
  [SMALL_STATE(29)] = 1836,
  [SMALL_STATE(30)] = 1890,
  [SMALL_STATE(31)] = 1946,
  [SMALL_STATE(32)] = 2000,
  [SMALL_STATE(33)] = 2054,
  [SMALL_STATE(34)] = 2108,
  [SMALL_STATE(35)] = 2164,
  [SMALL_STATE(36)] = 2218,
  [SMALL_STATE(37)] = 2274,
  [SMALL_STATE(38)] = 2325,
  [SMALL_STATE(39)] = 2376,
  [SMALL_STATE(40)] = 2427,
  [SMALL_STATE(41)] = 2478,
  [SMALL_STATE(42)] = 2529,
  [SMALL_STATE(43)] = 2580,
  [SMALL_STATE(44)] = 2631,
  [SMALL_STATE(45)] = 2682,
  [SMALL_STATE(46)] = 2733,
  [SMALL_STATE(47)] = 2783,
  [SMALL_STATE(48)] = 2833,
  [SMALL_STATE(49)] = 2883,
  [SMALL_STATE(50)] = 2933,
  [SMALL_STATE(51)] = 2983,
  [SMALL_STATE(52)] = 3033,
  [SMALL_STATE(53)] = 3083,
  [SMALL_STATE(54)] = 3137,
  [SMALL_STATE(55)] = 3191,
  [SMALL_STATE(56)] = 3241,
  [SMALL_STATE(57)] = 3295,
  [SMALL_STATE(58)] = 3345,
  [SMALL_STATE(59)] = 3393,
  [SMALL_STATE(60)] = 3441,
  [SMALL_STATE(61)] = 3489,
  [SMALL_STATE(62)] = 3537,
  [SMALL_STATE(63)] = 3626,
  [SMALL_STATE(64)] = 3715,
  [SMALL_STATE(65)] = 3795,
  [SMALL_STATE(66)] = 3863,
  [SMALL_STATE(67)] = 3931,
  [SMALL_STATE(68)] = 3994,
  [SMALL_STATE(69)] = 4051,
  [SMALL_STATE(70)] = 4108,
  [SMALL_STATE(71)] = 4151,
  [SMALL_STATE(72)] = 4194,
  [SMALL_STATE(73)] = 4224,
  [SMALL_STATE(74)] = 4262,
  [SMALL_STATE(75)] = 4292,
  [SMALL_STATE(76)] = 4322,
  [SMALL_STATE(77)] = 4352,
  [SMALL_STATE(78)] = 4382,
  [SMALL_STATE(79)] = 4411,
  [SMALL_STATE(80)] = 4458,
  [SMALL_STATE(81)] = 4505,
  [SMALL_STATE(82)] = 4534,
  [SMALL_STATE(83)] = 4563,
  [SMALL_STATE(84)] = 4587,
  [SMALL_STATE(85)] = 4613,
  [SMALL_STATE(86)] = 4638,
  [SMALL_STATE(87)] = 4663,
  [SMALL_STATE(88)] = 4698,
  [SMALL_STATE(89)] = 4721,
  [SMALL_STATE(90)] = 4746,
  [SMALL_STATE(91)] = 4771,
  [SMALL_STATE(92)] = 4798,
  [SMALL_STATE(93)] = 4823,
  [SMALL_STATE(94)] = 4848,
  [SMALL_STATE(95)] = 4873,
  [SMALL_STATE(96)] = 4908,
  [SMALL_STATE(97)] = 4935,
  [SMALL_STATE(98)] = 4960,
  [SMALL_STATE(99)] = 4982,
  [SMALL_STATE(100)] = 5022,
  [SMALL_STATE(101)] = 5062,
  [SMALL_STATE(102)] = 5102,
  [SMALL_STATE(103)] = 5142,
  [SMALL_STATE(104)] = 5184,
  [SMALL_STATE(105)] = 5224,
  [SMALL_STATE(106)] = 5264,
  [SMALL_STATE(107)] = 5304,
  [SMALL_STATE(108)] = 5344,
  [SMALL_STATE(109)] = 5384,
  [SMALL_STATE(110)] = 5424,
  [SMALL_STATE(111)] = 5464,
  [SMALL_STATE(112)] = 5486,
  [SMALL_STATE(113)] = 5508,
  [SMALL_STATE(114)] = 5530,
  [SMALL_STATE(115)] = 5552,
  [SMALL_STATE(116)] = 5594,
  [SMALL_STATE(117)] = 5616,
  [SMALL_STATE(118)] = 5638,
  [SMALL_STATE(119)] = 5660,
  [SMALL_STATE(120)] = 5691,
  [SMALL_STATE(121)] = 5728,
  [SMALL_STATE(122)] = 5749,
  [SMALL_STATE(123)] = 5770,
  [SMALL_STATE(124)] = 5803,
  [SMALL_STATE(125)] = 5824,
  [SMALL_STATE(126)] = 5845,
  [SMALL_STATE(127)] = 5866,
  [SMALL_STATE(128)] = 5887,
  [SMALL_STATE(129)] = 5908,
  [SMALL_STATE(130)] = 5929,
  [SMALL_STATE(131)] = 5966,
  [SMALL_STATE(132)] = 6003,
  [SMALL_STATE(133)] = 6024,
  [SMALL_STATE(134)] = 6045,
  [SMALL_STATE(135)] = 6082,
  [SMALL_STATE(136)] = 6113,
  [SMALL_STATE(137)] = 6146,
  [SMALL_STATE(138)] = 6183,
  [SMALL_STATE(139)] = 6220,
  [SMALL_STATE(140)] = 6257,
  [SMALL_STATE(141)] = 6294,
  [SMALL_STATE(142)] = 6327,
  [SMALL_STATE(143)] = 6347,
  [SMALL_STATE(144)] = 6365,
  [SMALL_STATE(145)] = 6383,
  [SMALL_STATE(146)] = 6401,
  [SMALL_STATE(147)] = 6419,
  [SMALL_STATE(148)] = 6448,
  [SMALL_STATE(149)] = 6477,
  [SMALL_STATE(150)] = 6506,
  [SMALL_STATE(151)] = 6535,
  [SMALL_STATE(152)] = 6551,
  [SMALL_STATE(153)] = 6567,
  [SMALL_STATE(154)] = 6587,
  [SMALL_STATE(155)] = 6601,
  [SMALL_STATE(156)] = 6621,
  [SMALL_STATE(157)] = 6637,
  [SMALL_STATE(158)] = 6653,
  [SMALL_STATE(159)] = 6676,
  [SMALL_STATE(160)] = 6699,
  [SMALL_STATE(161)] = 6722,
  [SMALL_STATE(162)] = 6737,
  [SMALL_STATE(163)] = 6750,
  [SMALL_STATE(164)] = 6773,
  [SMALL_STATE(165)] = 6786,
  [SMALL_STATE(166)] = 6809,
  [SMALL_STATE(167)] = 6832,
  [SMALL_STATE(168)] = 6845,
  [SMALL_STATE(169)] = 6859,
  [SMALL_STATE(170)] = 6873,
  [SMALL_STATE(171)] = 6885,
  [SMALL_STATE(172)] = 6897,
  [SMALL_STATE(173)] = 6917,
  [SMALL_STATE(174)] = 6935,
  [SMALL_STATE(175)] = 6949,
  [SMALL_STATE(176)] = 6967,
  [SMALL_STATE(177)] = 6987,
  [SMALL_STATE(178)] = 6999,
  [SMALL_STATE(179)] = 7013,
  [SMALL_STATE(180)] = 7031,
  [SMALL_STATE(181)] = 7043,
  [SMALL_STATE(182)] = 7058,
  [SMALL_STATE(183)] = 7073,
  [SMALL_STATE(184)] = 7084,
  [SMALL_STATE(185)] = 7099,
  [SMALL_STATE(186)] = 7112,
  [SMALL_STATE(187)] = 7128,
  [SMALL_STATE(188)] = 7142,
  [SMALL_STATE(189)] = 7152,
  [SMALL_STATE(190)] = 7168,
  [SMALL_STATE(191)] = 7182,
  [SMALL_STATE(192)] = 7198,
  [SMALL_STATE(193)] = 7214,
  [SMALL_STATE(194)] = 7230,
  [SMALL_STATE(195)] = 7244,
  [SMALL_STATE(196)] = 7260,
  [SMALL_STATE(197)] = 7271,
  [SMALL_STATE(198)] = 7282,
  [SMALL_STATE(199)] = 7293,
  [SMALL_STATE(200)] = 7304,
  [SMALL_STATE(201)] = 7315,
  [SMALL_STATE(202)] = 7326,
  [SMALL_STATE(203)] = 7335,
  [SMALL_STATE(204)] = 7346,
  [SMALL_STATE(205)] = 7355,
  [SMALL_STATE(206)] = 7366,
  [SMALL_STATE(207)] = 7377,
  [SMALL_STATE(208)] = 7388,
  [SMALL_STATE(209)] = 7399,
  [SMALL_STATE(210)] = 7407,
  [SMALL_STATE(211)] = 7415,
  [SMALL_STATE(212)] = 7423,
  [SMALL_STATE(213)] = 7431,
  [SMALL_STATE(214)] = 7439,
  [SMALL_STATE(215)] = 7447,
  [SMALL_STATE(216)] = 7455,
  [SMALL_STATE(217)] = 7463,
  [SMALL_STATE(218)] = 7471,
  [SMALL_STATE(219)] = 7479,
  [SMALL_STATE(220)] = 7487,
  [SMALL_STATE(221)] = 7495,
  [SMALL_STATE(222)] = 7503,
  [SMALL_STATE(223)] = 7511,
  [SMALL_STATE(224)] = 7521,
  [SMALL_STATE(225)] = 7529,
  [SMALL_STATE(226)] = 7537,
  [SMALL_STATE(227)] = 7545,
  [SMALL_STATE(228)] = 7553,
  [SMALL_STATE(229)] = 7561,
  [SMALL_STATE(230)] = 7569,
  [SMALL_STATE(231)] = 7577,
  [SMALL_STATE(232)] = 7585,
  [SMALL_STATE(233)] = 7593,
  [SMALL_STATE(234)] = 7601,
  [SMALL_STATE(235)] = 7609,
  [SMALL_STATE(236)] = 7617,
  [SMALL_STATE(237)] = 7625,
  [SMALL_STATE(238)] = 7633,
  [SMALL_STATE(239)] = 7641,
  [SMALL_STATE(240)] = 7649,
  [SMALL_STATE(241)] = 7659,
  [SMALL_STATE(242)] = 7667,
  [SMALL_STATE(243)] = 7675,
  [SMALL_STATE(244)] = 7683,
  [SMALL_STATE(245)] = 7691,
  [SMALL_STATE(246)] = 7699,
  [SMALL_STATE(247)] = 7707,
  [SMALL_STATE(248)] = 7715,
  [SMALL_STATE(249)] = 7723,
  [SMALL_STATE(250)] = 7731,
  [SMALL_STATE(251)] = 7739,
  [SMALL_STATE(252)] = 7747,
  [SMALL_STATE(253)] = 7755,
  [SMALL_STATE(254)] = 7763,
  [SMALL_STATE(255)] = 7771,
  [SMALL_STATE(256)] = 7779,
  [SMALL_STATE(257)] = 7787,
  [SMALL_STATE(258)] = 7795,
  [SMALL_STATE(259)] = 7803,
  [SMALL_STATE(260)] = 7811,
  [SMALL_STATE(261)] = 7819,
  [SMALL_STATE(262)] = 7827,
  [SMALL_STATE(263)] = 7835,
  [SMALL_STATE(264)] = 7843,
  [SMALL_STATE(265)] = 7851,
  [SMALL_STATE(266)] = 7859,
  [SMALL_STATE(267)] = 7867,
  [SMALL_STATE(268)] = 7875,
  [SMALL_STATE(269)] = 7883,
  [SMALL_STATE(270)] = 7891,
  [SMALL_STATE(271)] = 7899,
  [SMALL_STATE(272)] = 7907,
  [SMALL_STATE(273)] = 7915,
  [SMALL_STATE(274)] = 7923,
  [SMALL_STATE(275)] = 7931,
  [SMALL_STATE(276)] = 7941,
  [SMALL_STATE(277)] = 7949,
  [SMALL_STATE(278)] = 7957,
  [SMALL_STATE(279)] = 7965,
  [SMALL_STATE(280)] = 7973,
  [SMALL_STATE(281)] = 7981,
  [SMALL_STATE(282)] = 7989,
  [SMALL_STATE(283)] = 7997,
  [SMALL_STATE(284)] = 8005,
  [SMALL_STATE(285)] = 8013,
  [SMALL_STATE(286)] = 8021,
  [SMALL_STATE(287)] = 8029,
  [SMALL_STATE(288)] = 8037,
  [SMALL_STATE(289)] = 8045,
  [SMALL_STATE(290)] = 8053,
  [SMALL_STATE(291)] = 8061,
  [SMALL_STATE(292)] = 8069,
  [SMALL_STATE(293)] = 8077,
  [SMALL_STATE(294)] = 8085,
  [SMALL_STATE(295)] = 8093,
  [SMALL_STATE(296)] = 8101,
  [SMALL_STATE(297)] = 8111,
  [SMALL_STATE(298)] = 8119,
  [SMALL_STATE(299)] = 8127,
  [SMALL_STATE(300)] = 8135,
  [SMALL_STATE(301)] = 8143,
  [SMALL_STATE(302)] = 8151,
  [SMALL_STATE(303)] = 8159,
  [SMALL_STATE(304)] = 8167,
  [SMALL_STATE(305)] = 8177,
  [SMALL_STATE(306)] = 8185,
  [SMALL_STATE(307)] = 8193,
  [SMALL_STATE(308)] = 8201,
  [SMALL_STATE(309)] = 8209,
  [SMALL_STATE(310)] = 8217,
  [SMALL_STATE(311)] = 8225,
  [SMALL_STATE(312)] = 8233,
  [SMALL_STATE(313)] = 8241,
  [SMALL_STATE(314)] = 8249,
  [SMALL_STATE(315)] = 8257,
  [SMALL_STATE(316)] = 8265,
  [SMALL_STATE(317)] = 8273,
  [SMALL_STATE(318)] = 8281,
  [SMALL_STATE(319)] = 8289,
  [SMALL_STATE(320)] = 8297,
  [SMALL_STATE(321)] = 8305,
  [SMALL_STATE(322)] = 8313,
  [SMALL_STATE(323)] = 8321,
  [SMALL_STATE(324)] = 8329,
  [SMALL_STATE(325)] = 8337,
  [SMALL_STATE(326)] = 8345,
  [SMALL_STATE(327)] = 8353,
  [SMALL_STATE(328)] = 8361,
  [SMALL_STATE(329)] = 8369,
  [SMALL_STATE(330)] = 8377,
  [SMALL_STATE(331)] = 8385,
  [SMALL_STATE(332)] = 8393,
  [SMALL_STATE(333)] = 8401,
  [SMALL_STATE(334)] = 8409,
  [SMALL_STATE(335)] = 8417,
  [SMALL_STATE(336)] = 8425,
  [SMALL_STATE(337)] = 8433,
  [SMALL_STATE(338)] = 8441,
  [SMALL_STATE(339)] = 8449,
  [SMALL_STATE(340)] = 8457,
  [SMALL_STATE(341)] = 8465,
  [SMALL_STATE(342)] = 8473,
  [SMALL_STATE(343)] = 8481,
  [SMALL_STATE(344)] = 8489,
  [SMALL_STATE(345)] = 8497,
  [SMALL_STATE(346)] = 8505,
  [SMALL_STATE(347)] = 8513,
  [SMALL_STATE(348)] = 8521,
  [SMALL_STATE(349)] = 8529,
  [SMALL_STATE(350)] = 8537,
  [SMALL_STATE(351)] = 8545,
  [SMALL_STATE(352)] = 8553,
  [SMALL_STATE(353)] = 8561,
  [SMALL_STATE(354)] = 8569,
  [SMALL_STATE(355)] = 8577,
  [SMALL_STATE(356)] = 8585,
  [SMALL_STATE(357)] = 8593,
  [SMALL_STATE(358)] = 8601,
  [SMALL_STATE(359)] = 8609,
  [SMALL_STATE(360)] = 8616,
  [SMALL_STATE(361)] = 8623,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [9] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(2),
  [12] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(187),
  [15] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(53),
  [18] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(53),
  [21] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(110),
  [24] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(273),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(17),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(23),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(270),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(181),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(199),
  [42] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(183),
  [45] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(26),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(47),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(36),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(296),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(73),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(204),
  [63] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(119),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 2),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT(53),
  [74] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [76] = {.entry = {.count = 1, .reusable = false}}, SHIFT(110),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [82] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [84] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [86] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [88] = {.entry = {.count = 1, .reusable = false}}, SHIFT(199),
  [90] = {.entry = {.count = 1, .reusable = false}}, SHIFT(183),
  [92] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [96] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [98] = {.entry = {.count = 1, .reusable = true}}, SHIFT(296),
  [100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [106] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [108] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2),
  [110] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2),
  [112] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(53),
  [115] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(53),
  [118] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(110),
  [121] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(273),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(17),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(23),
  [130] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(270),
  [133] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(181),
  [136] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(199),
  [139] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(183),
  [142] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(26),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(47),
  [148] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(36),
  [151] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [155] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1),
  [157] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(53),
  [160] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(53),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(110),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(273),
  [169] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(17),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(23),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(270),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(181),
  [181] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(199),
  [184] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(183),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(26),
  [190] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(47),
  [193] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(36),
  [196] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(54),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(56),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(54),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(56),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 1),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(11),
  [212] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 1),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [216] = {.entry = {.count = 1, .reusable = false}}, SHIFT(237),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [220] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_tune_header, 1), SHIFT(240),
  [223] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [225] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(10),
  [228] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(240),
  [233] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(237),
  [236] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(278),
  [239] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(73),
  [242] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(204),
  [245] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 2),
  [247] = {.entry = {.count = 1, .reusable = false}}, SHIFT(10),
  [249] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 2),
  [251] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_tune_header, 2), SHIFT(240),
  [254] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 1),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 1),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(80),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(139),
  [262] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [264] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2),
  [266] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(139),
  [269] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(273),
  [272] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(17),
  [275] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(23),
  [278] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(181),
  [281] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(199),
  [284] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(183),
  [287] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 2),
  [289] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 2),
  [291] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 2, .production_id = 1),
  [293] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header_info_line, 2, .production_id = 1),
  [295] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_reference_number, 2),
  [297] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number, 2),
  [299] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 1),
  [301] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 1),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [307] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [309] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(18),
  [312] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 2),
  [314] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 2),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [320] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 3),
  [322] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 3),
  [324] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 1),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(183),
  [328] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(361),
  [334] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [336] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [340] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [342] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 4),
  [346] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 4),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_bar_line, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_bar_line, 1),
  [354] = {.entry = {.count = 1, .reusable = false}}, SHIFT(226),
  [356] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [358] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_construct, 3),
  [360] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_construct, 3),
  [362] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [364] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_construct, 1),
  [366] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_construct, 1),
  [368] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [370] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 3),
  [372] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 3),
  [374] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2),
  [378] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat2, 2),
  [380] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2), SHIFT_REPEAT(80),
  [383] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_construct, 4),
  [385] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_construct, 4),
  [387] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [389] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_construct, 2),
  [391] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_construct, 2),
  [393] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [395] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 5),
  [397] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 5),
  [399] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 6),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 6),
  [405] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [407] = {.entry = {.count = 1, .reusable = false}}, SHIFT(225),
  [409] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [411] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__note_construct, 5),
  [413] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__note_construct, 5),
  [415] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 7),
  [417] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 7),
  [419] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 4),
  [421] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 4),
  [423] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 2),
  [425] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bar, 2),
  [427] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 1),
  [429] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bar, 1),
  [431] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Nth_ending, 3),
  [433] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Nth_ending, 3),
  [435] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 4),
  [437] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 4),
  [439] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [441] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 1),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 1),
  [447] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 1), REDUCE(aux_sym_bar_repeat1, 1),
  [450] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 1), REDUCE(aux_sym_bar_repeat1, 1),
  [453] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 2),
  [455] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 2),
  [457] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 2),
  [459] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 2),
  [461] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TEXTLINE, 2),
  [463] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TEXTLINE, 2),
  [465] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet_directives, 2),
  [467] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stylesheet_directives, 2),
  [469] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_info_line, 3, .production_id = 1),
  [471] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_info_line, 3, .production_id = 1),
  [473] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 2),
  [475] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 2),
  [477] = {.entry = {.count = 1, .reusable = false}}, SHIFT(64),
  [479] = {.entry = {.count = 1, .reusable = true}}, SHIFT(64),
  [481] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(64),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(64),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(110),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(273),
  [493] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(17),
  [496] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(23),
  [499] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(270),
  [502] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(181),
  [505] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(199),
  [508] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(183),
  [511] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bar_repeat1, 2),
  [513] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2),
  [515] = {.entry = {.count = 1, .reusable = false}}, SHIFT(168),
  [517] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [521] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [523] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [525] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [527] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [529] = {.entry = {.count = 1, .reusable = false}}, SHIFT(178),
  [531] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [533] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [535] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [537] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [539] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(130),
  [542] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(279),
  [545] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(72),
  [548] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(84),
  [551] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(199),
  [554] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(183),
  [557] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [559] = {.entry = {.count = 1, .reusable = false}}, SHIFT(71),
  [561] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_line, 2),
  [563] = {.entry = {.count = 1, .reusable = false}}, SHIFT(200),
  [565] = {.entry = {.count = 1, .reusable = false}}, SHIFT(91),
  [567] = {.entry = {.count = 1, .reusable = false}}, SHIFT(132),
  [569] = {.entry = {.count = 1, .reusable = false}}, SHIFT(96),
  [571] = {.entry = {.count = 1, .reusable = false}}, SHIFT(227),
  [573] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(71),
  [576] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2),
  [578] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(200),
  [581] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(91),
  [584] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(132),
  [587] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(96),
  [590] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(227),
  [593] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [595] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [597] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [599] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [603] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [605] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [607] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(76),
  [610] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(229),
  [613] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [615] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [619] = {.entry = {.count = 1, .reusable = true}}, SHIFT(139),
  [621] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [623] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 3),
  [625] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 3),
  [627] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 2),
  [629] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 2),
  [631] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [633] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [635] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [637] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [639] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [643] = {.entry = {.count = 1, .reusable = false}}, SHIFT(145),
  [645] = {.entry = {.count = 1, .reusable = false}}, SHIFT(288),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [649] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [655] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [657] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [661] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(143),
  [664] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(144),
  [667] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [669] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(145),
  [672] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(288),
  [675] = {.entry = {.count = 1, .reusable = false}}, SHIFT(299),
  [677] = {.entry = {.count = 1, .reusable = false}}, SHIFT(128),
  [679] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [681] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [683] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [685] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [687] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2),
  [689] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(273),
  [692] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(17),
  [695] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(23),
  [698] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(181),
  [701] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(183),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [706] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [708] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [710] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [712] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [714] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [718] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [720] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [722] = {.entry = {.count = 1, .reusable = true}}, SHIFT(157),
  [724] = {.entry = {.count = 1, .reusable = false}}, SHIFT(151),
  [726] = {.entry = {.count = 1, .reusable = false}}, SHIFT(156),
  [728] = {.entry = {.count = 1, .reusable = false}}, SHIFT(265),
  [730] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 4),
  [732] = {.entry = {.count = 1, .reusable = true}}, SHIFT(186),
  [734] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 3),
  [736] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 5),
  [738] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 6),
  [740] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 59),
  [742] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [744] = {.entry = {.count = 1, .reusable = true}}, SHIFT(144),
  [746] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [748] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(151),
  [751] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(157),
  [754] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(151),
  [757] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(156),
  [760] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(265),
  [763] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__note_construct_repeat1, 2),
  [765] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__note_construct_repeat1, 2), SHIFT_REPEAT(181),
  [768] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_text, 1),
  [770] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HYPHEN, 1),
  [772] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_syllable, 1),
  [774] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse_number, 2),
  [776] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [778] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [780] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_text, 1),
  [782] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse_number, 2),
  [784] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [786] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2), SHIFT_REPEAT(79),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_syllable, 1),
  [791] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HYPHEN, 1),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [795] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [797] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [799] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [801] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [803] = {.entry = {.count = 1, .reusable = false}}, SHIFT(174),
  [805] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [811] = {.entry = {.count = 1, .reusable = true}}, SHIFT(154),
  [813] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 2),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [817] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [819] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [821] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(273),
  [824] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(17),
  [827] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [829] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [831] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2),
  [833] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2), SHIFT_REPEAT(361),
  [836] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [838] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_section, 1),
  [840] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [842] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [844] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_words_line, 3),
  [846] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [848] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [850] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [852] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_words_line, 4),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(207),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [860] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2),
  [862] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(260),
  [865] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 3),
  [867] = {.entry = {.count = 1, .reusable = false}}, SHIFT(260),
  [869] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 2),
  [871] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [873] = {.entry = {.count = 1, .reusable = true}}, SHIFT(196),
  [875] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [877] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2), SHIFT_REPEAT(135),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [886] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_line, 2),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(193),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [974] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(248),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(249),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(250),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(254),
  [990] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [992] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(274),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(262),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(152),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(268),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(269),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [1030] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(169),
  [1038] = {.entry = {.count = 1, .reusable = true}}, SHIFT(51),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [1052] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [1054] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(289),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(291),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1068] = {.entry = {.count = 1, .reusable = false}}, SHIFT(272),
  [1070] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(287),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(295),
  [1078] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 3),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [1084] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined, 4),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1184] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TEXT, 1),
  [1196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [1198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
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
