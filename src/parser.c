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
#define STATE_COUNT 361
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 200
#define ALIAS_COUNT 0
#define TOKEN_COUNT 143
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
  anon_sym_BQUOTE = 13,
  sym_slur_open = 14,
  sym_slur_close = 15,
  aux_sym_note_construct_token1 = 16,
  anon_sym_LBRACK = 17,
  anon_sym_RBRACK = 18,
  sym_alteration = 19,
  sym_note_letter = 20,
  sym_octave = 21,
  sym_rest = 22,
  anon_sym_Z = 23,
  anon_sym_X = 24,
  aux_sym_multimeasure_rest_token1 = 25,
  sym_rhythm = 26,
  aux_sym_grace_note_token1 = 27,
  aux_sym_grace_note_token2 = 28,
  aux_sym_chord_symbol_token1 = 29,
  aux_sym_chord_symbol_token2 = 30,
  sym_annotation = 31,
  sym_tuplet_marker = 32,
  sym_chord_type = 33,
  sym_decoration_shorthand = 34,
  aux_sym_nth_ending_number_token1 = 35,
  anon_sym_COMMA = 36,
  sym_bar_line = 37,
  sym_close_thin_thick_double_bar_line = 38,
  sym_thin_double_bar_line = 39,
  sym_open_thick_thin_double_bar_line = 40,
  sym_start_of_repeated_section = 41,
  sym_end_of_repeated_section = 42,
  sym_start_end_of_two_repeated_sections = 43,
  aux_sym_first_repeat_bar_token1 = 44,
  aux_sym_first_repeat_bar_token2 = 45,
  aux_sym_lyric_syllable_token1 = 46,
  aux_sym_verse_number_token1 = 47,
  anon_sym_DOT = 48,
  anon_sym_BANGtrill_BANG = 49,
  anon_sym_BANGtrill_LPAREN_BANG = 50,
  anon_sym_BANGtrill_RPAREN_BANG = 51,
  anon_sym_BANGlowermordent_BANG = 52,
  anon_sym_BANGuppermordent_BANG = 53,
  anon_sym_BANGmordent_BANG = 54,
  anon_sym_BANGpralltriller_BANG = 55,
  anon_sym_BANGroll_BANG = 56,
  anon_sym_BANGturn_BANG = 57,
  anon_sym_BANGturnx_BANG = 58,
  anon_sym_BANGinvertedturn_BANG = 59,
  anon_sym_BANGinvertedturnx_BANG = 60,
  anon_sym_BANGarpeggio_BANG = 61,
  anon_sym_BANG_GT_BANG = 62,
  anon_sym_BANGaccent_BANG = 63,
  anon_sym_BANGemphasis_BANG = 64,
  anon_sym_BANGfermata_BANG = 65,
  anon_sym_BANGinvertedfermata_BANG = 66,
  anon_sym_BANGtenuto_BANG = 67,
  anon_sym_BANG0_BANG_DASH_BANG5_BANG = 68,
  anon_sym_BANG_PLUS_BANG = 69,
  anon_sym_BANGplus_BANG = 70,
  anon_sym_BANGsnap_BANG = 71,
  anon_sym_BANGslide_BANG = 72,
  anon_sym_BANGwedge_BANG = 73,
  anon_sym_BANGupbow_BANG = 74,
  anon_sym_BANGdownbow_BANG = 75,
  anon_sym_BANGopen_BANG = 76,
  anon_sym_BANGthumb_BANG = 77,
  anon_sym_BANGbreath_BANG = 78,
  anon_sym_BANGpppp_BANG = 79,
  anon_sym_BANGppp_BANG = 80,
  anon_sym_BANGpp_BANG = 81,
  anon_sym_BANGp_BANG = 82,
  anon_sym_BANGmp_BANG = 83,
  anon_sym_BANGmf_BANG = 84,
  anon_sym_BANGf_BANG = 85,
  anon_sym_BANGff_BANG = 86,
  anon_sym_BANGfff_BANG = 87,
  anon_sym_BANGffff_BANG = 88,
  anon_sym_BANGsfz_BANG = 89,
  anon_sym_BANGcrescendo_LPAREN_BANG = 90,
  anon_sym_BANG_LT_LPAREN_BANG = 91,
  anon_sym_BANGcrescendo_RPAREN_BANG = 92,
  anon_sym_BANG_LT_RPAREN_BANG = 93,
  anon_sym_BANGdiminuendo_LPAREN_BANG = 94,
  anon_sym_BANG_GT_LPAREN_BANG = 95,
  anon_sym_BANGdiminuendo_RPAREN_BANG = 96,
  anon_sym_BANG_GT_RPAREN_BANG = 97,
  anon_sym_BANGsegno_BANG = 98,
  anon_sym_BANGcoda_BANG = 99,
  anon_sym_BANGD_DOTS_DOT_BANG = 100,
  anon_sym_BANGD_DOTC_DOT_BANG = 101,
  anon_sym_BANGdacoda_BANG = 102,
  anon_sym_BANGdacapo_BANG = 103,
  anon_sym_BANGfine_BANG = 104,
  anon_sym_BANGshortphrase_BANG = 105,
  anon_sym_BANGmediumphrase_BANG = 106,
  anon_sym_BANGlongphrase_BANG = 107,
  sym_parts_line = 108,
  aux_sym_body_inline_info_token1 = 109,
  anon_sym_PERCENTabc_DASH = 110,
  sym_area = 111,
  sym_book = 112,
  sym_composer = 113,
  sym_discography = 114,
  sym_file = 115,
  sym_group = 116,
  sym_history = 117,
  sym_instruction = 118,
  sym_key = 119,
  sym_macros = 120,
  sym_meter = 121,
  sym_notes = 122,
  sym_origin = 123,
  anon_sym_X_COLON = 124,
  sym_remark = 125,
  sym_rhythm_line = 126,
  sym_source = 127,
  anon_sym_s_COLON = 128,
  sym_tempo = 129,
  sym_transcription = 130,
  sym_tune_title = 131,
  sym_unit_note_length = 132,
  anon_sym_U_COLON = 133,
  aux_sym_user_defined_token1 = 134,
  aux_sym_user_defined_token2 = 135,
  anon_sym_EQ = 136,
  sym_voice = 137,
  anon_sym_w_COLON = 138,
  aux_sym_words_line_token1 = 139,
  sym_words_postbody = 140,
  aux_sym_body_info_line_token1 = 141,
  anon_sym_LF = 142,
  sym_source_file = 143,
  sym_TEXTLINE = 144,
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
  sym_bar = 164,
  sym_Nth_ending = 165,
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
  sym_TEXT = 176,
  sym_abc_version = 177,
  sym_reference_number = 178,
  sym_symbol_line = 179,
  sym_user_defined = 180,
  sym_words_line = 181,
  sym_body_info_line = 182,
  sym_tune_header_info_line = 183,
  aux_sym__MUSIC_CODE_repeat1 = 184,
  aux_sym_tune_header_repeat1 = 185,
  aux_sym_tune_body_repeat1 = 186,
  aux_sym_beam_repeat1 = 187,
  aux_sym_beam_repeat2 = 188,
  aux_sym_note_construct_repeat1 = 189,
  aux_sym__chord_cstrct_repeat1 = 190,
  aux_sym__pitch_repeat1 = 191,
  aux_sym_grace_note_repeat1 = 192,
  aux_sym_bar_repeat1 = 193,
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
  [anon_sym_BQUOTE] = "`",
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
  [sym_source_file] = "source_file",
  [sym_TEXTLINE] = "TEXTLINE",
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
  [sym_body_info_line] = "body_info_line",
  [sym_tune_header_info_line] = "tune_header_info_line",
  [aux_sym__MUSIC_CODE_repeat1] = "_MUSIC_CODE_repeat1",
  [aux_sym_tune_header_repeat1] = "tune_header_repeat1",
  [aux_sym_tune_body_repeat1] = "tune_body_repeat1",
  [aux_sym_beam_repeat1] = "beam_repeat1",
  [aux_sym_beam_repeat2] = "beam_repeat2",
  [aux_sym_note_construct_repeat1] = "note_construct_repeat1",
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
  [anon_sym_BQUOTE] = anon_sym_BQUOTE,
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
  [sym_source_file] = sym_source_file,
  [sym_TEXTLINE] = sym_TEXTLINE,
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
  [sym_body_info_line] = sym_body_info_line,
  [sym_tune_header_info_line] = sym_tune_header_info_line,
  [aux_sym__MUSIC_CODE_repeat1] = aux_sym__MUSIC_CODE_repeat1,
  [aux_sym_tune_header_repeat1] = aux_sym_tune_header_repeat1,
  [aux_sym_tune_body_repeat1] = aux_sym_tune_body_repeat1,
  [aux_sym_beam_repeat1] = aux_sym_beam_repeat1,
  [aux_sym_beam_repeat2] = aux_sym_beam_repeat2,
  [aux_sym_note_construct_repeat1] = aux_sym_note_construct_repeat1,
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
  [sym_body_info_line] = {
    .visible = true,
    .named = true,
  },
  [sym_tune_header_info_line] = {
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
  [44] = 28,
  [45] = 45,
  [46] = 46,
  [47] = 47,
  [48] = 31,
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
  [61] = 60,
  [62] = 62,
  [63] = 63,
  [64] = 63,
  [65] = 11,
  [66] = 12,
  [67] = 13,
  [68] = 68,
  [69] = 69,
  [70] = 15,
  [71] = 16,
  [72] = 18,
  [73] = 14,
  [74] = 19,
  [75] = 75,
  [76] = 76,
  [77] = 76,
  [78] = 78,
  [79] = 79,
  [80] = 80,
  [81] = 81,
  [82] = 21,
  [83] = 28,
  [84] = 27,
  [85] = 31,
  [86] = 29,
  [87] = 24,
  [88] = 22,
  [89] = 26,
  [90] = 90,
  [91] = 25,
  [92] = 33,
  [93] = 34,
  [94] = 94,
  [95] = 30,
  [96] = 37,
  [97] = 36,
  [98] = 35,
  [99] = 99,
  [100] = 100,
  [101] = 101,
  [102] = 43,
  [103] = 103,
  [104] = 42,
  [105] = 105,
  [106] = 99,
  [107] = 107,
  [108] = 40,
  [109] = 39,
  [110] = 101,
  [111] = 111,
  [112] = 107,
  [113] = 111,
  [114] = 105,
  [115] = 100,
  [116] = 38,
  [117] = 46,
  [118] = 49,
  [119] = 119,
  [120] = 120,
  [121] = 47,
  [122] = 122,
  [123] = 123,
  [124] = 119,
  [125] = 125,
  [126] = 126,
  [127] = 53,
  [128] = 128,
  [129] = 122,
  [130] = 130,
  [131] = 131,
  [132] = 123,
  [133] = 50,
  [134] = 90,
  [135] = 135,
  [136] = 136,
  [137] = 137,
  [138] = 130,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 142,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 146,
  [147] = 146,
  [148] = 145,
  [149] = 142,
  [150] = 143,
  [151] = 141,
  [152] = 32,
  [153] = 153,
  [154] = 23,
  [155] = 144,
  [156] = 156,
  [157] = 157,
  [158] = 158,
  [159] = 158,
  [160] = 160,
  [161] = 161,
  [162] = 156,
  [163] = 157,
  [164] = 164,
  [165] = 41,
  [166] = 166,
  [167] = 167,
  [168] = 54,
  [169] = 169,
  [170] = 128,
  [171] = 120,
  [172] = 172,
  [173] = 172,
  [174] = 136,
  [175] = 175,
  [176] = 176,
  [177] = 52,
  [178] = 137,
  [179] = 179,
  [180] = 180,
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
  [193] = 190,
  [194] = 194,
  [195] = 195,
  [196] = 196,
  [197] = 181,
  [198] = 196,
  [199] = 199,
  [200] = 200,
  [201] = 201,
  [202] = 202,
  [203] = 195,
  [204] = 204,
  [205] = 194,
  [206] = 200,
  [207] = 207,
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
  [223] = 223,
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
  [263] = 263,
  [264] = 264,
  [265] = 265,
  [266] = 266,
  [267] = 252,
  [268] = 268,
  [269] = 269,
  [270] = 270,
  [271] = 271,
  [272] = 126,
  [273] = 273,
  [274] = 274,
  [275] = 275,
  [276] = 276,
  [277] = 255,
  [278] = 276,
  [279] = 279,
  [280] = 275,
  [281] = 281,
  [282] = 251,
  [283] = 283,
  [284] = 284,
  [285] = 257,
  [286] = 256,
  [287] = 249,
  [288] = 288,
  [289] = 248,
  [290] = 290,
  [291] = 245,
  [292] = 292,
  [293] = 220,
  [294] = 294,
  [295] = 295,
  [296] = 296,
  [297] = 269,
  [298] = 268,
  [299] = 299,
  [300] = 300,
  [301] = 301,
  [302] = 302,
  [303] = 303,
  [304] = 219,
  [305] = 218,
  [306] = 217,
  [307] = 216,
  [308] = 215,
  [309] = 214,
  [310] = 213,
  [311] = 212,
  [312] = 211,
  [313] = 210,
  [314] = 209,
  [315] = 284,
  [316] = 259,
  [317] = 260,
  [318] = 261,
  [319] = 264,
  [320] = 265,
  [321] = 266,
  [322] = 270,
  [323] = 271,
  [324] = 273,
  [325] = 279,
  [326] = 283,
  [327] = 208,
  [328] = 290,
  [329] = 294,
  [330] = 299,
  [331] = 300,
  [332] = 302,
  [333] = 258,
  [334] = 229,
  [335] = 228,
  [336] = 227,
  [337] = 226,
  [338] = 225,
  [339] = 224,
  [340] = 223,
  [341] = 222,
  [342] = 221,
  [343] = 231,
  [344] = 232,
  [345] = 233,
  [346] = 234,
  [347] = 235,
  [348] = 236,
  [349] = 237,
  [350] = 238,
  [351] = 239,
  [352] = 240,
  [353] = 241,
  [354] = 242,
  [355] = 243,
  [356] = 244,
  [357] = 230,
  [358] = 358,
  [359] = 359,
  [360] = 360,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(289);
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(314);
      if (lookahead == '%') ADVANCE(307);
      if (lookahead == '\'') ADVANCE(331);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '+') ADVANCE(296);
      if (lookahead == ',') ADVANCE(394);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == '0') ADVANCE(338);
      if (lookahead == ':') ADVANCE(297);
      if (lookahead == '=') ADVANCE(514);
      if (lookahead == 'A') ADVANCE(325);
      if (lookahead == 'B') ADVANCE(326);
      if (lookahead == 'C') ADVANCE(327);
      if (lookahead == 'D') ADVANCE(328);
      if (lookahead == 'F') ADVANCE(329);
      if (lookahead == 'G') ADVANCE(330);
      if (lookahead == 'H') ADVANCE(385);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'M') ADVANCE(388);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(389);
      if (lookahead == 'P') ADVANCE(390);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(392);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(336);
      if (lookahead == 'Z') ADVANCE(334);
      if (lookahead == '[') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead == ']') ADVANCE(320);
      if (lookahead == '^') ADVANCE(322);
      if (lookahead == '_') ADVANCE(302);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead == 'm') ADVANCE(509);
      if (lookahead == 'r') ADVANCE(510);
      if (lookahead == 's') ADVANCE(511);
      if (lookahead == 'w') ADVANCE(512);
      if (lookahead == '{') ADVANCE(345);
      if (lookahead == '|') ADVANCE(396);
      if (lookahead == '}') ADVANCE(346);
      if (lookahead == '~') ADVANCE(305);
      if ((9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(321);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(412);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(342);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(332);
      if (lookahead == 'u' ||
          lookahead == 'v') ADVANCE(384);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(324);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(337);
      if (('h' <= lookahead && lookahead <= 't')) ADVANCE(508);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(537);
      if (lookahead == ' ') ADVANCE(290);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '%') ADVANCE(312);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == ':') ADVANCE(282);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(321);
      if (lookahead == '[') ADVANCE(319);
      if (lookahead == '^') ADVANCE(322);
      if (lookahead == '_') ADVANCE(323);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead == '{') ADVANCE(345);
      if (lookahead == '|') ADVANCE(398);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(331);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(342);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(332);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(341);
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
          lookahead == '~') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(324);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(383);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(321);
      if (lookahead == '^') ADVANCE(322);
      if (lookahead == '_') ADVANCE(356);
      if (lookahead == 'a') ADVANCE(381);
      if (lookahead == 'd') ADVANCE(365);
      if (lookahead == 'm') ADVANCE(357);
      if (lookahead == 's') ADVANCE(382);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(347);
      if (lookahead == '/') ADVANCE(350);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(321);
      if (lookahead == '^') ADVANCE(322);
      if (lookahead == '_') ADVANCE(323);
      if (lookahead == '{') ADVANCE(345);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
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
          lookahead == '~') ADVANCE(384);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(324);
      END_STATE();
    case 5:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == '.') ADVANCE(418);
      if (lookahead == '=') ADVANCE(514);
      if (lookahead == '_') ADVANCE(304);
      if (lookahead == '|') ADVANCE(395);
      if (lookahead == '~') ADVANCE(305);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(417);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 6:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == 'H') ADVANCE(75);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      if (('h' <= lookahead && lookahead <= 'w')) ADVANCE(508);
      END_STATE();
    case 7:
      if (lookahead == ' ') ADVANCE(77);
      END_STATE();
    case 8:
      if (lookahead == ' ') ADVANCE(36);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(441);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(7);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(434);
      if (lookahead == '(') ADVANCE(16);
      if (lookahead == ')') ADVANCE(17);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(457);
      if (lookahead == 'e') ADVANCE(238);
      if (lookahead == 'f') ADVANCE(18);
      if (lookahead == 'i') ADVANCE(206);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(454);
      if (lookahead == 'l') ADVANCE(271);
      if (lookahead == 'p') ADVANCE(21);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(463);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(465);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(467);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(469);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(458);
      if (lookahead == 'f') ADVANCE(22);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(456);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(455);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(453);
      if (lookahead == 'p') ADVANCE(23);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(459);
      if (lookahead == 'f') ADVANCE(28);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(452);
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(461);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(473);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(472);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(471);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(460);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(476);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(448);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(442);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(451);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(428);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(443);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(429);
      if (lookahead == 'x') ADVANCE(41);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(81);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(470);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(444);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(449);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(420);
      if (lookahead == '(') ADVANCE(49);
      if (lookahead == ')') ADVANCE(50);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(430);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(446);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(445);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(435);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(450);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(475);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(474);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(439);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(422);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(423);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(440);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(447);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(437);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(426);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(433);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(436);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(462);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(464);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(479);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(466);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(468);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(477);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(431);
      if (lookahead == 'x') ADVANCE(68);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(424);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(478);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(427);
      END_STATE();
    case 67:
      if (lookahead == '!') ADVANCE(425);
      END_STATE();
    case 68:
      if (lookahead == '!') ADVANCE(432);
      END_STATE();
    case 69:
      if (lookahead == '!') ADVANCE(438);
      END_STATE();
    case 70:
      if (lookahead == '"') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 71:
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
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
      if (lookahead == '+') ADVANCE(9);
      if (lookahead == '0') ADVANCE(10);
      if (lookahead == '<') ADVANCE(71);
      if (lookahead == '>') ADVANCE(11);
      if (lookahead == 'D') ADVANCE(78);
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'b') ADVANCE(236);
      if (lookahead == 'c') ADVANCE(213);
      if (lookahead == 'd') ADVANCE(102);
      if (lookahead == 'e') ADVANCE(190);
      if (lookahead == 'f') ADVANCE(12);
      if (lookahead == 'i') ADVANCE(197);
      if (lookahead == 'l') ADVANCE(214);
      if (lookahead == 'm') ADVANCE(139);
      if (lookahead == 'o') ADVANCE(230);
      if (lookahead == 'p') ADVANCE(13);
      if (lookahead == 'r') ADVANCE(215);
      if (lookahead == 's') ADVANCE(137);
      if (lookahead == 't') ADVANCE(140);
      if (lookahead == 'u') ADVANCE(227);
      if (lookahead == 'w') ADVANCE(141);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(483);
      END_STATE();
    case 77:
      if (lookahead == '-') ADVANCE(8);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(99);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(25);
      END_STATE();
    case 80:
      if (lookahead == '.') ADVANCE(26);
      END_STATE();
    case 81:
      if (lookahead == '5') ADVANCE(51);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(410);
      if (lookahead == '|') ADVANCE(408);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(492);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(493);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(496);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(503);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(500);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(507);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(515);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(519);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(494);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(499);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(502);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(516);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(285);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(285);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(95);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(79);
      if (lookahead == 'S') ADVANCE(80);
      END_STATE();
    case 100:
      if (lookahead == 'W') ADVANCE(513);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(122);
      if (lookahead == 'i') ADVANCE(191);
      if (lookahead == 'o') ADVANCE(278);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(253);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(117);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(233);
      if (lookahead == 'o') ADVANCE(131);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(267);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(27);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(47);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(53);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(69);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(257);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(269);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(258);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(123);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(216);
      if (lookahead == 'p') ADVANCE(162);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(39);
      END_STATE();
    case 120:
      if (lookahead == 'b') ADVANCE(223);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(124);
      if (lookahead == 'r') ADVANCE(231);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(76);
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
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(174);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(222);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(110);
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
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(259);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(129);
      if (lookahead == 'f') ADVANCE(19);
      if (lookahead == 'o') ADVANCE(239);
      if (lookahead == 'p') ADVANCE(20);
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
      if (lookahead == 'e') ADVANCE(101);
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
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(38);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(43);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(59);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(62);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(65);
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
      if (lookahead == 'h') ADVANCE(103);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(243);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(45);
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
      if (lookahead == 'l') ADVANCE(40);
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
      if (lookahead == 'l') ADVANCE(33);
      END_STATE();
    case 189:
      if (lookahead == 'm') ADVANCE(119);
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
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(115);
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
      if (lookahead == 'n') ADVANCE(120);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(35);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(167);
      if (lookahead == 'w') ADVANCE(156);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(63);
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
      if (lookahead == 'n') ADVANCE(30);
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
      if (lookahead == 'o') ADVANCE(37);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(48);
      END_STATE();
    case 221:
      if (lookahead == 'o') ADVANCE(55);
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
      if (lookahead == 'p') ADVANCE(118);
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
      if (lookahead == 'p') ADVANCE(34);
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
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(66);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(179);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(135);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(116);
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
      if (lookahead == 's') ADVANCE(31);
      END_STATE();
    case 255:
      if (lookahead == 's') ADVANCE(56);
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
      if (lookahead == 't') ADVANCE(146);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(220);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(112);
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
      if (lookahead == 'w') ADVANCE(42);
      END_STATE();
    case 280:
      if (lookahead == 'w') ADVANCE(52);
      END_STATE();
    case 281:
      if (lookahead == 'z') ADVANCE(24);
      END_STATE();
    case 282:
      if (lookahead == '|') ADVANCE(408);
      END_STATE();
    case 283:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 284:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(97);
      END_STATE();
    case 285:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 286:
      if (eof) ADVANCE(289);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '!') ADVANCE(74);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '%') ADVANCE(104);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '*') ADVANCE(298);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(321);
      if (lookahead == 'A') ADVANCE(325);
      if (lookahead == 'B') ADVANCE(326);
      if (lookahead == 'C') ADVANCE(327);
      if (lookahead == 'D') ADVANCE(328);
      if (lookahead == 'F') ADVANCE(329);
      if (lookahead == 'G') ADVANCE(330);
      if (lookahead == 'H') ADVANCE(386);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'M') ADVANCE(388);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'O') ADVANCE(389);
      if (lookahead == 'P') ADVANCE(390);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'S') ADVANCE(391);
      if (lookahead == 'T') ADVANCE(392);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(336);
      if (lookahead == 'Z') ADVANCE(334);
      if (lookahead == '[') ADVANCE(319);
      if (lookahead == '^') ADVANCE(322);
      if (lookahead == '_') ADVANCE(323);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == '{') ADVANCE(345);
      if (lookahead == '|') ADVANCE(396);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(332);
      if (lookahead == '.' ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(384);
      if (lookahead == 'E' ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(393);
      END_STATE();
    case 287:
      if (eof) ADVANCE(289);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(314);
      if (lookahead == '%') ADVANCE(308);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == ',') ADVANCE(394);
      if (lookahead == '-') ADVANCE(300);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(321);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'M') ADVANCE(388);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(390);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(392);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(335);
      if (lookahead == 'Z') ADVANCE(333);
      if (lookahead == '[') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead == '^') ADVANCE(322);
      if (lookahead == '_') ADVANCE(323);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '{') ADVANCE(345);
      if (lookahead == '|') ADVANCE(396);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(412);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(332);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(384);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(324);
      END_STATE();
    case 288:
      if (eof) ADVANCE(289);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(290);
      if (lookahead == '"') ADVANCE(348);
      if (lookahead == '$') ADVANCE(314);
      if (lookahead == '%') ADVANCE(308);
      if (lookahead == '(') ADVANCE(316);
      if (lookahead == ')') ADVANCE(317);
      if (lookahead == '-') ADVANCE(318);
      if (lookahead == '/') ADVANCE(340);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(321);
      if (lookahead == 'I') ADVANCE(83);
      if (lookahead == 'K') ADVANCE(84);
      if (lookahead == 'L') ADVANCE(387);
      if (lookahead == 'M') ADVANCE(388);
      if (lookahead == 'N') ADVANCE(85);
      if (lookahead == 'P') ADVANCE(390);
      if (lookahead == 'Q') ADVANCE(86);
      if (lookahead == 'R') ADVANCE(87);
      if (lookahead == 'T') ADVANCE(392);
      if (lookahead == 'U') ADVANCE(88);
      if (lookahead == 'V') ADVANCE(89);
      if (lookahead == 'W') ADVANCE(90);
      if (lookahead == 'X') ADVANCE(335);
      if (lookahead == 'Z') ADVANCE(333);
      if (lookahead == '[') ADVANCE(319);
      if (lookahead == '\\') ADVANCE(295);
      if (lookahead == ']') ADVANCE(320);
      if (lookahead == '^') ADVANCE(322);
      if (lookahead == '_') ADVANCE(323);
      if (lookahead == '`') ADVANCE(315);
      if (lookahead == 'm') ADVANCE(91);
      if (lookahead == 'r') ADVANCE(92);
      if (lookahead == 's') ADVANCE(93);
      if (lookahead == 'w') ADVANCE(94);
      if (lookahead == '{') ADVANCE(345);
      if (lookahead == '|') ADVANCE(396);
      if (lookahead == '}') ADVANCE(346);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(331);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(342);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(332);
      if (lookahead == '.' ||
          lookahead == 'H' ||
          ('O' <= lookahead && lookahead <= 'S') ||
          lookahead == 'u' ||
          lookahead == 'v' ||
          lookahead == '~') ADVANCE(384);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(341);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(324);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(482);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym__NEWLINE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym__NEWLINE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(482);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == ':') ADVANCE(517);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(410);
      if (lookahead == '|') ADVANCE(408);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_note_skip);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_note_skip);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(anon_sym_DASH);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (lookahead == '_') ADVANCE(321);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(sym_UNDERSCORE);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_TILDE);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_TILDE);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead == 'a') ADVANCE(310);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '%') ADVANCE(313);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(312);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == '-') ADVANCE(484);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(312);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == 'b') ADVANCE(311);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(312);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead == 'c') ADVANCE(309);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(312);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_COMMENTLINE);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(anon_sym_PERCENT_PERCENT);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(404);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(321);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(321);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(485);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(486);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(487);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(488);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(489);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_note_letter);
      if (lookahead == ':') ADVANCE(490);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(anon_sym_Z);
      if (lookahead == ':') ADVANCE(504);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(anon_sym_X);
      if (lookahead == ':') ADVANCE(498);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(283);
      if (lookahead == '0') ADVANCE(338);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(337);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(338);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(339);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(283);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(341);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(342);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(343);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(344);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(351);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(70);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(527);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_annotation);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(284);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(354);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(354);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(355);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(368);
      if (lookahead == 'i') ADVANCE(371);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(358);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(372);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(373);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(369);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(370);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(374);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(379);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(361);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(366);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(375);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(380);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(359);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(377);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(362);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(383);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(376);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(364);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(360);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(378);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(383);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == '-') ADVANCE(100);
      if (lookahead == ':') ADVANCE(491);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(491);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(506);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(495);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(497);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(480);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(501);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      if (lookahead == ':') ADVANCE(505);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(aux_sym_nth_ending_number_token1);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(sym_bar_line);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(406);
      if (lookahead == ']') ADVANCE(400);
      if (lookahead == '|') ADVANCE(402);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(407);
      if (lookahead == ']') ADVANCE(401);
      if (lookahead == '|') ADVANCE(403);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ']') ADVANCE(400);
      if (lookahead == '|') ADVANCE(402);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token1);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(414);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(417);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 452:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 453:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 454:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 455:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 456:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 457:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 458:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 459:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 460:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 461:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 462:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 463:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 464:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 465:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 466:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 467:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 468:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 469:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 470:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 471:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 472:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 473:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 474:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 475:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 476:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 477:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 478:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 479:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 480:
      ACCEPT_TOKEN(sym_parts_line);
      END_STATE();
    case 481:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(482);
      END_STATE();
    case 482:
      ACCEPT_TOKEN(aux_sym_body_inline_info_token1);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(482);
      END_STATE();
    case 483:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      END_STATE();
    case 484:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '%') ADVANCE(312);
      END_STATE();
    case 485:
      ACCEPT_TOKEN(sym_area);
      END_STATE();
    case 486:
      ACCEPT_TOKEN(sym_book);
      END_STATE();
    case 487:
      ACCEPT_TOKEN(sym_composer);
      END_STATE();
    case 488:
      ACCEPT_TOKEN(sym_discography);
      END_STATE();
    case 489:
      ACCEPT_TOKEN(sym_file);
      END_STATE();
    case 490:
      ACCEPT_TOKEN(sym_group);
      END_STATE();
    case 491:
      ACCEPT_TOKEN(sym_history);
      END_STATE();
    case 492:
      ACCEPT_TOKEN(sym_instruction);
      END_STATE();
    case 493:
      ACCEPT_TOKEN(sym_key);
      END_STATE();
    case 494:
      ACCEPT_TOKEN(sym_macros);
      END_STATE();
    case 495:
      ACCEPT_TOKEN(sym_meter);
      END_STATE();
    case 496:
      ACCEPT_TOKEN(sym_notes);
      END_STATE();
    case 497:
      ACCEPT_TOKEN(sym_origin);
      END_STATE();
    case 498:
      ACCEPT_TOKEN(anon_sym_X_COLON);
      END_STATE();
    case 499:
      ACCEPT_TOKEN(sym_remark);
      END_STATE();
    case 500:
      ACCEPT_TOKEN(sym_rhythm_line);
      END_STATE();
    case 501:
      ACCEPT_TOKEN(sym_source);
      END_STATE();
    case 502:
      ACCEPT_TOKEN(anon_sym_s_COLON);
      END_STATE();
    case 503:
      ACCEPT_TOKEN(sym_tempo);
      END_STATE();
    case 504:
      ACCEPT_TOKEN(sym_transcription);
      END_STATE();
    case 505:
      ACCEPT_TOKEN(sym_tune_title);
      END_STATE();
    case 506:
      ACCEPT_TOKEN(sym_unit_note_length);
      END_STATE();
    case 507:
      ACCEPT_TOKEN(anon_sym_U_COLON);
      END_STATE();
    case 508:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      END_STATE();
    case 509:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(494);
      END_STATE();
    case 510:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(499);
      END_STATE();
    case 511:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(502);
      END_STATE();
    case 512:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      if (lookahead == ':') ADVANCE(516);
      END_STATE();
    case 513:
      ACCEPT_TOKEN(aux_sym_user_defined_token2);
      END_STATE();
    case 514:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 515:
      ACCEPT_TOKEN(sym_voice);
      END_STATE();
    case 516:
      ACCEPT_TOKEN(anon_sym_w_COLON);
      END_STATE();
    case 517:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    case 518:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 519:
      ACCEPT_TOKEN(sym_words_postbody);
      END_STATE();
    case 520:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '!') ADVANCE(534);
      if (lookahead == '"') ADVANCE(349);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == ':') ADVANCE(528);
      if (lookahead == '[') ADVANCE(535);
      if (lookahead == '|') ADVANCE(397);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(413);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(415);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 521:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '!') ADVANCE(534);
      if (lookahead == '"') ADVANCE(349);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == ':') ADVANCE(528);
      if (lookahead == '[') ADVANCE(535);
      if (lookahead == '|') ADVANCE(397);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 522:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '*') ADVANCE(299);
      if (lookahead == '+') ADVANCE(529);
      if (lookahead == '-') ADVANCE(301);
      if (lookahead == '_') ADVANCE(303);
      if (lookahead == '|') ADVANCE(399);
      if (lookahead == '~') ADVANCE(306);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(416);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(416);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 523:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '+') ADVANCE(529);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 524:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '.') ADVANCE(419);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 525:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead != 0) ADVANCE(536);
      END_STATE();
    case 526:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '!') ADVANCE(421);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 527:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '"') ADVANCE(352);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(527);
      END_STATE();
    case 528:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == ':') ADVANCE(411);
      if (lookahead == '|') ADVANCE(409);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 529:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == ':') ADVANCE(518);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 530:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'i') ADVANCE(532);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 531:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(526);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 532:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'l') ADVANCE(531);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 533:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 'r') ADVANCE(530);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 534:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == 't') ADVANCE(533);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 535:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead == '|') ADVANCE(405);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 536:
      ACCEPT_TOKEN(aux_sym_body_info_line_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(536);
      END_STATE();
    case 537:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 286},
  [2] = {.lex_state = 288},
  [3] = {.lex_state = 288},
  [4] = {.lex_state = 288},
  [5] = {.lex_state = 288},
  [6] = {.lex_state = 288},
  [7] = {.lex_state = 288},
  [8] = {.lex_state = 288},
  [9] = {.lex_state = 286},
  [10] = {.lex_state = 286},
  [11] = {.lex_state = 288},
  [12] = {.lex_state = 288},
  [13] = {.lex_state = 288},
  [14] = {.lex_state = 288},
  [15] = {.lex_state = 288},
  [16] = {.lex_state = 288},
  [17] = {.lex_state = 286},
  [18] = {.lex_state = 288},
  [19] = {.lex_state = 288},
  [20] = {.lex_state = 288},
  [21] = {.lex_state = 288},
  [22] = {.lex_state = 288},
  [23] = {.lex_state = 288},
  [24] = {.lex_state = 288},
  [25] = {.lex_state = 288},
  [26] = {.lex_state = 288},
  [27] = {.lex_state = 288},
  [28] = {.lex_state = 287},
  [29] = {.lex_state = 288},
  [30] = {.lex_state = 288},
  [31] = {.lex_state = 287},
  [32] = {.lex_state = 288},
  [33] = {.lex_state = 288},
  [34] = {.lex_state = 288},
  [35] = {.lex_state = 288},
  [36] = {.lex_state = 288},
  [37] = {.lex_state = 288},
  [38] = {.lex_state = 288},
  [39] = {.lex_state = 288},
  [40] = {.lex_state = 288},
  [41] = {.lex_state = 288},
  [42] = {.lex_state = 288},
  [43] = {.lex_state = 288},
  [44] = {.lex_state = 287},
  [45] = {.lex_state = 288},
  [46] = {.lex_state = 288},
  [47] = {.lex_state = 288},
  [48] = {.lex_state = 287},
  [49] = {.lex_state = 288},
  [50] = {.lex_state = 288},
  [51] = {.lex_state = 288},
  [52] = {.lex_state = 288},
  [53] = {.lex_state = 288},
  [54] = {.lex_state = 288},
  [55] = {.lex_state = 288},
  [56] = {.lex_state = 288},
  [57] = {.lex_state = 288},
  [58] = {.lex_state = 288},
  [59] = {.lex_state = 288},
  [60] = {.lex_state = 288},
  [61] = {.lex_state = 288},
  [62] = {.lex_state = 288},
  [63] = {.lex_state = 288},
  [64] = {.lex_state = 288},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 2},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 521},
  [69] = {.lex_state = 521},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 2},
  [75] = {.lex_state = 286},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 2},
  [78] = {.lex_state = 287},
  [79] = {.lex_state = 287},
  [80] = {.lex_state = 287},
  [81] = {.lex_state = 287},
  [82] = {.lex_state = 2},
  [83] = {.lex_state = 520},
  [84] = {.lex_state = 2},
  [85] = {.lex_state = 520},
  [86] = {.lex_state = 2},
  [87] = {.lex_state = 2},
  [88] = {.lex_state = 2},
  [89] = {.lex_state = 2},
  [90] = {.lex_state = 522},
  [91] = {.lex_state = 2},
  [92] = {.lex_state = 2},
  [93] = {.lex_state = 2},
  [94] = {.lex_state = 522},
  [95] = {.lex_state = 2},
  [96] = {.lex_state = 2},
  [97] = {.lex_state = 2},
  [98] = {.lex_state = 2},
  [99] = {.lex_state = 288},
  [100] = {.lex_state = 4},
  [101] = {.lex_state = 288},
  [102] = {.lex_state = 2},
  [103] = {.lex_state = 288},
  [104] = {.lex_state = 2},
  [105] = {.lex_state = 288},
  [106] = {.lex_state = 288},
  [107] = {.lex_state = 288},
  [108] = {.lex_state = 2},
  [109] = {.lex_state = 2},
  [110] = {.lex_state = 288},
  [111] = {.lex_state = 2},
  [112] = {.lex_state = 288},
  [113] = {.lex_state = 2},
  [114] = {.lex_state = 288},
  [115] = {.lex_state = 4},
  [116] = {.lex_state = 2},
  [117] = {.lex_state = 521},
  [118] = {.lex_state = 521},
  [119] = {.lex_state = 288},
  [120] = {.lex_state = 521},
  [121] = {.lex_state = 521},
  [122] = {.lex_state = 288},
  [123] = {.lex_state = 288},
  [124] = {.lex_state = 288},
  [125] = {.lex_state = 5},
  [126] = {.lex_state = 521},
  [127] = {.lex_state = 521},
  [128] = {.lex_state = 521},
  [129] = {.lex_state = 288},
  [130] = {.lex_state = 288},
  [131] = {.lex_state = 5},
  [132] = {.lex_state = 288},
  [133] = {.lex_state = 521},
  [134] = {.lex_state = 5},
  [135] = {.lex_state = 5},
  [136] = {.lex_state = 521},
  [137] = {.lex_state = 521},
  [138] = {.lex_state = 288},
  [139] = {.lex_state = 288},
  [140] = {.lex_state = 2},
  [141] = {.lex_state = 522},
  [142] = {.lex_state = 522},
  [143] = {.lex_state = 522},
  [144] = {.lex_state = 522},
  [145] = {.lex_state = 288},
  [146] = {.lex_state = 288},
  [147] = {.lex_state = 288},
  [148] = {.lex_state = 288},
  [149] = {.lex_state = 5},
  [150] = {.lex_state = 5},
  [151] = {.lex_state = 5},
  [152] = {.lex_state = 2},
  [153] = {.lex_state = 2},
  [154] = {.lex_state = 2},
  [155] = {.lex_state = 5},
  [156] = {.lex_state = 288},
  [157] = {.lex_state = 288},
  [158] = {.lex_state = 288},
  [159] = {.lex_state = 288},
  [160] = {.lex_state = 288},
  [161] = {.lex_state = 288},
  [162] = {.lex_state = 288},
  [163] = {.lex_state = 288},
  [164] = {.lex_state = 288},
  [165] = {.lex_state = 2},
  [166] = {.lex_state = 288},
  [167] = {.lex_state = 286},
  [168] = {.lex_state = 2},
  [169] = {.lex_state = 288},
  [170] = {.lex_state = 288},
  [171] = {.lex_state = 288},
  [172] = {.lex_state = 2},
  [173] = {.lex_state = 2},
  [174] = {.lex_state = 288},
  [175] = {.lex_state = 288},
  [176] = {.lex_state = 288},
  [177] = {.lex_state = 2},
  [178] = {.lex_state = 288},
  [179] = {.lex_state = 288},
  [180] = {.lex_state = 288},
  [181] = {.lex_state = 3},
  [182] = {.lex_state = 286},
  [183] = {.lex_state = 286},
  [184] = {.lex_state = 524},
  [185] = {.lex_state = 524},
  [186] = {.lex_state = 523},
  [187] = {.lex_state = 523},
  [188] = {.lex_state = 3},
  [189] = {.lex_state = 481},
  [190] = {.lex_state = 3},
  [191] = {.lex_state = 524},
  [192] = {.lex_state = 523},
  [193] = {.lex_state = 3},
  [194] = {.lex_state = 288},
  [195] = {.lex_state = 4},
  [196] = {.lex_state = 288},
  [197] = {.lex_state = 2},
  [198] = {.lex_state = 288},
  [199] = {.lex_state = 6},
  [200] = {.lex_state = 288},
  [201] = {.lex_state = 286},
  [202] = {.lex_state = 286},
  [203] = {.lex_state = 4},
  [204] = {.lex_state = 524},
  [205] = {.lex_state = 288},
  [206] = {.lex_state = 288},
  [207] = {.lex_state = 286},
  [208] = {.lex_state = 286},
  [209] = {.lex_state = 286},
  [210] = {.lex_state = 286},
  [211] = {.lex_state = 286},
  [212] = {.lex_state = 286},
  [213] = {.lex_state = 286},
  [214] = {.lex_state = 286},
  [215] = {.lex_state = 286},
  [216] = {.lex_state = 286},
  [217] = {.lex_state = 286},
  [218] = {.lex_state = 286},
  [219] = {.lex_state = 286},
  [220] = {.lex_state = 286},
  [221] = {.lex_state = 286},
  [222] = {.lex_state = 286},
  [223] = {.lex_state = 286},
  [224] = {.lex_state = 286},
  [225] = {.lex_state = 286},
  [226] = {.lex_state = 286},
  [227] = {.lex_state = 286},
  [228] = {.lex_state = 286},
  [229] = {.lex_state = 286},
  [230] = {.lex_state = 286},
  [231] = {.lex_state = 286},
  [232] = {.lex_state = 286},
  [233] = {.lex_state = 286},
  [234] = {.lex_state = 286},
  [235] = {.lex_state = 286},
  [236] = {.lex_state = 286},
  [237] = {.lex_state = 286},
  [238] = {.lex_state = 286},
  [239] = {.lex_state = 286},
  [240] = {.lex_state = 286},
  [241] = {.lex_state = 286},
  [242] = {.lex_state = 286},
  [243] = {.lex_state = 286},
  [244] = {.lex_state = 286},
  [245] = {.lex_state = 2},
  [246] = {.lex_state = 2},
  [247] = {.lex_state = 525},
  [248] = {.lex_state = 2},
  [249] = {.lex_state = 5},
  [250] = {.lex_state = 1},
  [251] = {.lex_state = 286},
  [252] = {.lex_state = 286},
  [253] = {.lex_state = 286},
  [254] = {.lex_state = 525},
  [255] = {.lex_state = 286},
  [256] = {.lex_state = 287},
  [257] = {.lex_state = 287},
  [258] = {.lex_state = 286},
  [259] = {.lex_state = 286},
  [260] = {.lex_state = 286},
  [261] = {.lex_state = 286},
  [262] = {.lex_state = 286},
  [263] = {.lex_state = 525},
  [264] = {.lex_state = 286},
  [265] = {.lex_state = 286},
  [266] = {.lex_state = 286},
  [267] = {.lex_state = 286},
  [268] = {.lex_state = 286},
  [269] = {.lex_state = 286},
  [270] = {.lex_state = 286},
  [271] = {.lex_state = 286},
  [272] = {.lex_state = 525},
  [273] = {.lex_state = 286},
  [274] = {.lex_state = 286},
  [275] = {.lex_state = 288},
  [276] = {.lex_state = 6},
  [277] = {.lex_state = 286},
  [278] = {.lex_state = 6},
  [279] = {.lex_state = 286},
  [280] = {.lex_state = 288},
  [281] = {.lex_state = 5},
  [282] = {.lex_state = 286},
  [283] = {.lex_state = 286},
  [284] = {.lex_state = 286},
  [285] = {.lex_state = 287},
  [286] = {.lex_state = 287},
  [287] = {.lex_state = 5},
  [288] = {.lex_state = 525},
  [289] = {.lex_state = 2},
  [290] = {.lex_state = 286},
  [291] = {.lex_state = 2},
  [292] = {.lex_state = 2},
  [293] = {.lex_state = 286},
  [294] = {.lex_state = 286},
  [295] = {.lex_state = 286},
  [296] = {.lex_state = 286},
  [297] = {.lex_state = 286},
  [298] = {.lex_state = 286},
  [299] = {.lex_state = 286},
  [300] = {.lex_state = 286},
  [301] = {.lex_state = 286},
  [302] = {.lex_state = 286},
  [303] = {.lex_state = 286},
  [304] = {.lex_state = 286},
  [305] = {.lex_state = 286},
  [306] = {.lex_state = 286},
  [307] = {.lex_state = 286},
  [308] = {.lex_state = 286},
  [309] = {.lex_state = 286},
  [310] = {.lex_state = 286},
  [311] = {.lex_state = 286},
  [312] = {.lex_state = 286},
  [313] = {.lex_state = 286},
  [314] = {.lex_state = 286},
  [315] = {.lex_state = 286},
  [316] = {.lex_state = 286},
  [317] = {.lex_state = 286},
  [318] = {.lex_state = 286},
  [319] = {.lex_state = 286},
  [320] = {.lex_state = 286},
  [321] = {.lex_state = 286},
  [322] = {.lex_state = 286},
  [323] = {.lex_state = 286},
  [324] = {.lex_state = 286},
  [325] = {.lex_state = 286},
  [326] = {.lex_state = 286},
  [327] = {.lex_state = 286},
  [328] = {.lex_state = 286},
  [329] = {.lex_state = 286},
  [330] = {.lex_state = 286},
  [331] = {.lex_state = 286},
  [332] = {.lex_state = 286},
  [333] = {.lex_state = 286},
  [334] = {.lex_state = 286},
  [335] = {.lex_state = 286},
  [336] = {.lex_state = 286},
  [337] = {.lex_state = 286},
  [338] = {.lex_state = 286},
  [339] = {.lex_state = 286},
  [340] = {.lex_state = 286},
  [341] = {.lex_state = 286},
  [342] = {.lex_state = 286},
  [343] = {.lex_state = 286},
  [344] = {.lex_state = 286},
  [345] = {.lex_state = 286},
  [346] = {.lex_state = 286},
  [347] = {.lex_state = 286},
  [348] = {.lex_state = 286},
  [349] = {.lex_state = 286},
  [350] = {.lex_state = 286},
  [351] = {.lex_state = 286},
  [352] = {.lex_state = 286},
  [353] = {.lex_state = 286},
  [354] = {.lex_state = 286},
  [355] = {.lex_state = 286},
  [356] = {.lex_state = 286},
  [357] = {.lex_state = 286},
  [358] = {.lex_state = 286},
  [359] = {.lex_state = 286},
  [360] = {.lex_state = 286},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym__NEWLINE] = ACTIONS(5),
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
    [anon_sym_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(296),
    [sym_tune] = STATE(295),
    [sym_tune_header] = STATE(20),
    [sym_abc_version] = STATE(247),
    [sym_reference_number] = STATE(247),
    [sym_symbol_line] = STATE(247),
    [sym_user_defined] = STATE(247),
    [sym_tune_header_info_line] = STATE(10),
    [aux_sym_tune_header_repeat1] = STATE(10),
    [sym__space] = ACTIONS(3),
    [sym__NEWLINE] = ACTIONS(3),
    [sym_parts_line] = ACTIONS(7),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(9),
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
    [anon_sym_X_COLON] = ACTIONS(11),
    [sym_remark] = ACTIONS(7),
    [sym_rhythm_line] = ACTIONS(7),
    [sym_source] = ACTIONS(7),
    [anon_sym_s_COLON] = ACTIONS(13),
    [sym_tempo] = ACTIONS(7),
    [sym_transcription] = ACTIONS(7),
    [sym_tune_title] = ACTIONS(7),
    [sym_unit_note_length] = ACTIONS(7),
    [anon_sym_U_COLON] = ACTIONS(15),
    [sym_voice] = ACTIONS(7),
    [sym_words_postbody] = ACTIONS(7),
  },
  [2] = {
    [sym_stylesheet_directives] = STATE(3),
    [sym__MUSIC_CODE] = STATE(3),
    [sym__music_content] = STATE(55),
    [sym__nte_or_chrd] = STATE(11),
    [sym_beam] = STATE(55),
    [sym_note_construct] = STATE(11),
    [sym__chord_cstrct] = STATE(11),
    [sym_note] = STATE(33),
    [sym__pitch] = STATE(21),
    [sym_multimeasure_rest] = STATE(55),
    [sym_grace_note] = STATE(113),
    [sym_chord_symbol] = STATE(148),
    [sym_decoration] = STATE(163),
    [sym_bar] = STATE(5),
    [sym_Nth_ending] = STATE(55),
    [sym_nth_ending_number] = STATE(63),
    [sym_generic_bar_line] = STATE(51),
    [sym_first_repeat_bar] = STATE(47),
    [sym_second_repeat_bar] = STATE(47),
    [sym_symbol_line] = STATE(263),
    [sym_user_defined] = STATE(263),
    [sym_words_line] = STATE(263),
    [sym_body_info_line] = STATE(3),
    [aux_sym__MUSIC_CODE_repeat1] = STATE(5),
    [aux_sym_tune_body_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(113),
    [aux_sym_bar_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(17),
    [sym__space] = ACTIONS(3),
    [sym__NEWLINE] = ACTIONS(3),
    [sym_COMMENTLINE] = ACTIONS(19),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(21),
    [sym_slur_open] = ACTIONS(23),
    [sym_slur_close] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_alteration] = ACTIONS(29),
    [sym_note_letter] = ACTIONS(31),
    [sym_rest] = ACTIONS(33),
    [anon_sym_Z] = ACTIONS(35),
    [anon_sym_X] = ACTIONS(35),
    [aux_sym_grace_note_token1] = ACTIONS(37),
    [aux_sym_chord_symbol_token1] = ACTIONS(39),
    [sym_annotation] = ACTIONS(25),
    [sym_tuplet_marker] = ACTIONS(25),
    [sym_decoration_shorthand] = ACTIONS(41),
    [sym_bar_line] = ACTIONS(43),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(45),
    [sym_thin_double_bar_line] = ACTIONS(45),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(45),
    [sym_start_of_repeated_section] = ACTIONS(45),
    [sym_end_of_repeated_section] = ACTIONS(47),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(45),
    [sym_parts_line] = ACTIONS(49),
    [sym_instruction] = ACTIONS(49),
    [sym_key] = ACTIONS(49),
    [sym_macros] = ACTIONS(49),
    [sym_meter] = ACTIONS(49),
    [sym_notes] = ACTIONS(49),
    [sym_remark] = ACTIONS(49),
    [sym_rhythm_line] = ACTIONS(49),
    [anon_sym_s_COLON] = ACTIONS(13),
    [sym_tempo] = ACTIONS(49),
    [sym_tune_title] = ACTIONS(49),
    [sym_unit_note_length] = ACTIONS(49),
    [anon_sym_U_COLON] = ACTIONS(15),
    [sym_voice] = ACTIONS(49),
    [anon_sym_w_COLON] = ACTIONS(51),
    [sym_words_postbody] = ACTIONS(17),
  },
  [3] = {
    [sym_stylesheet_directives] = STATE(3),
    [sym__MUSIC_CODE] = STATE(3),
    [sym__music_content] = STATE(55),
    [sym__nte_or_chrd] = STATE(11),
    [sym_beam] = STATE(55),
    [sym_note_construct] = STATE(11),
    [sym__chord_cstrct] = STATE(11),
    [sym_note] = STATE(33),
    [sym__pitch] = STATE(21),
    [sym_multimeasure_rest] = STATE(55),
    [sym_grace_note] = STATE(113),
    [sym_chord_symbol] = STATE(148),
    [sym_decoration] = STATE(163),
    [sym_bar] = STATE(5),
    [sym_Nth_ending] = STATE(55),
    [sym_nth_ending_number] = STATE(63),
    [sym_generic_bar_line] = STATE(51),
    [sym_first_repeat_bar] = STATE(47),
    [sym_second_repeat_bar] = STATE(47),
    [sym_symbol_line] = STATE(263),
    [sym_user_defined] = STATE(263),
    [sym_words_line] = STATE(263),
    [sym_body_info_line] = STATE(3),
    [aux_sym__MUSIC_CODE_repeat1] = STATE(5),
    [aux_sym_tune_body_repeat1] = STATE(3),
    [aux_sym_note_construct_repeat1] = STATE(113),
    [aux_sym_bar_repeat1] = STATE(60),
    [ts_builtin_sym_end] = ACTIONS(53),
    [sym__space] = ACTIONS(3),
    [sym__NEWLINE] = ACTIONS(3),
    [sym_COMMENTLINE] = ACTIONS(55),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(58),
    [sym_slur_open] = ACTIONS(61),
    [sym_slur_close] = ACTIONS(64),
    [anon_sym_LBRACK] = ACTIONS(67),
    [sym_alteration] = ACTIONS(70),
    [sym_note_letter] = ACTIONS(73),
    [sym_rest] = ACTIONS(76),
    [anon_sym_Z] = ACTIONS(79),
    [anon_sym_X] = ACTIONS(79),
    [aux_sym_grace_note_token1] = ACTIONS(82),
    [aux_sym_chord_symbol_token1] = ACTIONS(85),
    [sym_annotation] = ACTIONS(64),
    [sym_tuplet_marker] = ACTIONS(64),
    [sym_decoration_shorthand] = ACTIONS(88),
    [sym_bar_line] = ACTIONS(91),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(94),
    [sym_thin_double_bar_line] = ACTIONS(94),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(94),
    [sym_start_of_repeated_section] = ACTIONS(94),
    [sym_end_of_repeated_section] = ACTIONS(97),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(94),
    [sym_parts_line] = ACTIONS(100),
    [sym_instruction] = ACTIONS(100),
    [sym_key] = ACTIONS(100),
    [sym_macros] = ACTIONS(100),
    [sym_meter] = ACTIONS(100),
    [sym_notes] = ACTIONS(100),
    [sym_remark] = ACTIONS(100),
    [sym_rhythm_line] = ACTIONS(100),
    [anon_sym_s_COLON] = ACTIONS(103),
    [sym_tempo] = ACTIONS(100),
    [sym_tune_title] = ACTIONS(100),
    [sym_unit_note_length] = ACTIONS(100),
    [anon_sym_U_COLON] = ACTIONS(106),
    [sym_voice] = ACTIONS(100),
    [anon_sym_w_COLON] = ACTIONS(109),
    [sym_words_postbody] = ACTIONS(53),
  },
  [4] = {
    [sym_stylesheet_directives] = STATE(2),
    [sym__MUSIC_CODE] = STATE(2),
    [sym__music_content] = STATE(55),
    [sym__nte_or_chrd] = STATE(11),
    [sym_beam] = STATE(55),
    [sym_note_construct] = STATE(11),
    [sym__chord_cstrct] = STATE(11),
    [sym_note] = STATE(33),
    [sym__pitch] = STATE(21),
    [sym_multimeasure_rest] = STATE(55),
    [sym_grace_note] = STATE(113),
    [sym_chord_symbol] = STATE(148),
    [sym_decoration] = STATE(163),
    [sym_bar] = STATE(5),
    [sym_Nth_ending] = STATE(55),
    [sym_nth_ending_number] = STATE(63),
    [sym_generic_bar_line] = STATE(51),
    [sym_first_repeat_bar] = STATE(47),
    [sym_second_repeat_bar] = STATE(47),
    [sym_symbol_line] = STATE(263),
    [sym_user_defined] = STATE(263),
    [sym_words_line] = STATE(263),
    [sym_body_info_line] = STATE(2),
    [aux_sym__MUSIC_CODE_repeat1] = STATE(5),
    [aux_sym_tune_body_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(113),
    [aux_sym_bar_repeat1] = STATE(60),
    [sym__space] = ACTIONS(3),
    [sym__NEWLINE] = ACTIONS(3),
    [sym_COMMENTLINE] = ACTIONS(112),
    [anon_sym_PERCENT_PERCENT] = ACTIONS(21),
    [sym_slur_open] = ACTIONS(23),
    [sym_slur_close] = ACTIONS(25),
    [anon_sym_LBRACK] = ACTIONS(27),
    [sym_alteration] = ACTIONS(29),
    [sym_note_letter] = ACTIONS(31),
    [sym_rest] = ACTIONS(33),
    [anon_sym_Z] = ACTIONS(35),
    [anon_sym_X] = ACTIONS(35),
    [aux_sym_grace_note_token1] = ACTIONS(37),
    [aux_sym_chord_symbol_token1] = ACTIONS(39),
    [sym_annotation] = ACTIONS(25),
    [sym_tuplet_marker] = ACTIONS(25),
    [sym_decoration_shorthand] = ACTIONS(41),
    [sym_bar_line] = ACTIONS(43),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(45),
    [sym_thin_double_bar_line] = ACTIONS(45),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(45),
    [sym_start_of_repeated_section] = ACTIONS(45),
    [sym_end_of_repeated_section] = ACTIONS(47),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(45),
    [sym_parts_line] = ACTIONS(49),
    [sym_instruction] = ACTIONS(49),
    [sym_key] = ACTIONS(49),
    [sym_macros] = ACTIONS(49),
    [sym_meter] = ACTIONS(49),
    [sym_notes] = ACTIONS(49),
    [sym_remark] = ACTIONS(49),
    [sym_rhythm_line] = ACTIONS(49),
    [anon_sym_s_COLON] = ACTIONS(13),
    [sym_tempo] = ACTIONS(49),
    [sym_tune_title] = ACTIONS(49),
    [sym_unit_note_length] = ACTIONS(49),
    [anon_sym_U_COLON] = ACTIONS(15),
    [sym_voice] = ACTIONS(49),
    [anon_sym_w_COLON] = ACTIONS(51),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 29,
    ACTIONS(118), 1,
      sym_COMMENTLINE,
    ACTIONS(120), 1,
      sym_slur_open,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      sym_alteration,
    ACTIONS(132), 1,
      sym_note_letter,
    ACTIONS(135), 1,
      sym_rest,
    ACTIONS(141), 1,
      aux_sym_grace_note_token1,
    ACTIONS(144), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(147), 1,
      sym_decoration_shorthand,
    ACTIONS(150), 1,
      sym_bar_line,
    ACTIONS(156), 1,
      sym_end_of_repeated_section,
    STATE(21), 1,
      sym__pitch,
    STATE(33), 1,
      sym_note,
    STATE(51), 1,
      sym_generic_bar_line,
    STATE(60), 1,
      aux_sym_bar_repeat1,
    STATE(63), 1,
      sym_nth_ending_number,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(116), 2,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
    ACTIONS(138), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(6), 2,
      sym_bar,
      aux_sym__MUSIC_CODE_repeat1,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(123), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(11), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(55), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(153), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(114), 18,
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
  [122] = 28,
    ACTIONS(161), 1,
      sym_COMMENTLINE,
    ACTIONS(163), 1,
      sym_slur_open,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      sym_alteration,
    ACTIONS(175), 1,
      sym_note_letter,
    ACTIONS(178), 1,
      sym_rest,
    ACTIONS(184), 1,
      aux_sym_grace_note_token1,
    ACTIONS(187), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(193), 1,
      sym_bar_line,
    ACTIONS(199), 1,
      sym_end_of_repeated_section,
    STATE(21), 1,
      sym__pitch,
    STATE(33), 1,
      sym_note,
    STATE(51), 1,
      sym_generic_bar_line,
    STATE(60), 1,
      aux_sym_bar_repeat1,
    STATE(63), 1,
      sym_nth_ending_number,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(181), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(6), 2,
      sym_bar,
      aux_sym__MUSIC_CODE_repeat1,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(166), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(11), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(55), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(196), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(159), 20,
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
  [242] = 28,
    ACTIONS(161), 1,
      sym_COMMENTLINE,
    ACTIONS(163), 1,
      sym_slur_open,
    ACTIONS(169), 1,
      anon_sym_LBRACK,
    ACTIONS(172), 1,
      sym_alteration,
    ACTIONS(175), 1,
      sym_note_letter,
    ACTIONS(178), 1,
      sym_rest,
    ACTIONS(184), 1,
      aux_sym_grace_note_token1,
    ACTIONS(187), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(190), 1,
      sym_decoration_shorthand,
    ACTIONS(202), 1,
      sym_bar_line,
    ACTIONS(205), 1,
      sym_end_of_repeated_section,
    STATE(21), 1,
      sym__pitch,
    STATE(33), 1,
      sym_note,
    STATE(51), 1,
      sym_generic_bar_line,
    STATE(61), 1,
      aux_sym_bar_repeat1,
    STATE(63), 1,
      sym_nth_ending_number,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(181), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(7), 2,
      sym_bar,
      aux_sym__MUSIC_CODE_repeat1,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(166), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(11), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(55), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(196), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(159), 18,
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
  [360] = 29,
    ACTIONS(118), 1,
      sym_COMMENTLINE,
    ACTIONS(120), 1,
      sym_slur_open,
    ACTIONS(126), 1,
      anon_sym_LBRACK,
    ACTIONS(129), 1,
      sym_alteration,
    ACTIONS(132), 1,
      sym_note_letter,
    ACTIONS(135), 1,
      sym_rest,
    ACTIONS(141), 1,
      aux_sym_grace_note_token1,
    ACTIONS(144), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(147), 1,
      sym_decoration_shorthand,
    ACTIONS(208), 1,
      sym_bar_line,
    ACTIONS(211), 1,
      sym_end_of_repeated_section,
    STATE(21), 1,
      sym__pitch,
    STATE(33), 1,
      sym_note,
    STATE(51), 1,
      sym_generic_bar_line,
    STATE(61), 1,
      aux_sym_bar_repeat1,
    STATE(63), 1,
      sym_nth_ending_number,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(116), 2,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
    ACTIONS(138), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(7), 2,
      sym_bar,
      aux_sym__MUSIC_CODE_repeat1,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(123), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(11), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(55), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(153), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    ACTIONS(114), 16,
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
  [480] = 10,
    ACTIONS(221), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(224), 1,
      anon_sym_X_COLON,
    ACTIONS(227), 1,
      anon_sym_s_COLON,
    ACTIONS(230), 1,
      anon_sym_U_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(9), 2,
      sym_tune_header_info_line,
      aux_sym_tune_header_repeat1,
    STATE(247), 4,
      sym_abc_version,
      sym_reference_number,
      sym_symbol_line,
      sym_user_defined,
    ACTIONS(216), 8,
      sym_slur_open,
      anon_sym_LBRACK,
      sym_note_letter,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(214), 13,
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
    ACTIONS(218), 23,
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
  [557] = 11,
    ACTIONS(9), 1,
      anon_sym_PERCENTabc_DASH,
    ACTIONS(11), 1,
      anon_sym_X_COLON,
    ACTIONS(13), 1,
      anon_sym_s_COLON,
    ACTIONS(15), 1,
      anon_sym_U_COLON,
    ACTIONS(237), 1,
      sym_words_postbody,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(9), 2,
      sym_tune_header_info_line,
      aux_sym_tune_header_repeat1,
    STATE(247), 4,
      sym_abc_version,
      sym_reference_number,
      sym_symbol_line,
      sym_user_defined,
    ACTIONS(235), 8,
      sym_slur_open,
      anon_sym_LBRACK,
      sym_note_letter,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(233), 13,
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
  [636] = 18,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(39), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(41), 1,
      sym_decoration_shorthand,
    ACTIONS(244), 1,
      anon_sym_BQUOTE,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(32), 1,
      aux_sym_beam_repeat2,
    STATE(33), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(242), 3,
      sym_COMMENTLINE,
      sym_slur_open,
      sym_bar_line,
    STATE(13), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
    ACTIONS(240), 31,
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
  [728] = 16,
    ACTIONS(252), 1,
      anon_sym_LBRACK,
    ACTIONS(255), 1,
      sym_alteration,
    ACTIONS(258), 1,
      sym_note_letter,
    ACTIONS(261), 1,
      sym_rest,
    ACTIONS(264), 1,
      aux_sym_grace_note_token1,
    ACTIONS(267), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(270), 1,
      sym_decoration_shorthand,
    STATE(21), 1,
      sym__pitch,
    STATE(33), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(250), 3,
      sym_COMMENTLINE,
      sym_slur_open,
      sym_bar_line,
    STATE(12), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
    ACTIONS(248), 31,
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
  [814] = 9,
    STATE(21), 1,
      sym__pitch,
    STATE(33), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(12), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
    ACTIONS(275), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(273), 35,
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
  [886] = 5,
    ACTIONS(281), 1,
      sym_octave,
    STATE(18), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(279), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(277), 40,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
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
  [947] = 5,
    ACTIONS(287), 1,
      sym_octave,
    STATE(16), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(285), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(283), 40,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
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
  [1008] = 5,
    ACTIONS(293), 1,
      sym_octave,
    STATE(16), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(291), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(289), 40,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
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
  [1069] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(298), 8,
      sym_slur_open,
      anon_sym_LBRACK,
      sym_note_letter,
      anon_sym_Z,
      anon_sym_X,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(296), 40,
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
  [1126] = 5,
    ACTIONS(287), 1,
      sym_octave,
    STATE(16), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(302), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(300), 40,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
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
  [1187] = 5,
    ACTIONS(304), 1,
      sym_octave,
    STATE(15), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(302), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(300), 40,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
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
  [1248] = 32,
    ACTIONS(23), 1,
      sym_slur_open,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(39), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(306), 1,
      ts_builtin_sym_end,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(310), 1,
      sym_bar_line,
    ACTIONS(312), 1,
      sym_end_of_repeated_section,
    ACTIONS(314), 1,
      sym_words_postbody,
    STATE(4), 1,
      sym__MUSIC_CODE,
    STATE(21), 1,
      sym__pitch,
    STATE(33), 1,
      sym_note,
    STATE(51), 1,
      sym_generic_bar_line,
    STATE(61), 1,
      aux_sym_bar_repeat1,
    STATE(63), 1,
      sym_nth_ending_number,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    STATE(167), 1,
      sym_tune_body,
    STATE(274), 1,
      sym_lyric_section,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(35), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(8), 2,
      sym_bar,
      aux_sym__MUSIC_CODE_repeat1,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(183), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
    ACTIONS(25), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(11), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(55), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(45), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [1362] = 4,
    ACTIONS(320), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(318), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(316), 38,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
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
  [1418] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(324), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(322), 38,
      ts_builtin_sym_end,
      anon_sym_BSLASH,
      anon_sym_PERCENT_PERCENT,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
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
  [1471] = 5,
    ACTIONS(330), 1,
      anon_sym_BQUOTE,
    STATE(23), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(328), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(326), 35,
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
  [1527] = 4,
    ACTIONS(337), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(335), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(333), 36,
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
  [1581] = 4,
    ACTIONS(343), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(341), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(339), 36,
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
  [1635] = 4,
    ACTIONS(349), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(347), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(345), 36,
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
  [1689] = 4,
    ACTIONS(355), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(353), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(351), 36,
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
  [1743] = 5,
    ACTIONS(361), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(363), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(359), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(357), 35,
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
  [1799] = 4,
    ACTIONS(369), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(367), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(365), 36,
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
  [1853] = 4,
    ACTIONS(375), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(373), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(371), 36,
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
  [1907] = 5,
    ACTIONS(377), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(379), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(359), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(357), 35,
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
  [1963] = 5,
    ACTIONS(244), 1,
      anon_sym_BQUOTE,
    STATE(23), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(275), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(273), 35,
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
  [2019] = 4,
    ACTIONS(385), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(383), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(381), 36,
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
  [2073] = 4,
    ACTIONS(391), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(389), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(387), 36,
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
  [2127] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(347), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(345), 36,
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
  [2178] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(335), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(333), 36,
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
  [2229] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(395), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(393), 36,
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
  [2280] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(367), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(365), 36,
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
  [2331] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(389), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(387), 36,
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
  [2382] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(373), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(371), 36,
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
  [2433] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(328), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(326), 36,
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
  [2484] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(353), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(351), 36,
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
  [2535] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(399), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(397), 36,
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
  [2586] = 5,
    ACTIONS(361), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(363), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(359), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(357), 33,
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
  [2640] = 3,
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
    ACTIONS(401), 35,
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
  [2690] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(407), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(405), 35,
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
  [2740] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(359), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(357), 35,
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
  [2790] = 5,
    ACTIONS(377), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(379), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(359), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(357), 33,
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
  [2844] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(411), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(409), 35,
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
  [2894] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(415), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(413), 35,
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
  [2944] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(419), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(417), 35,
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
  [2994] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(423), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(421), 35,
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
  [3044] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(427), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(425), 35,
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
  [3094] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(431), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(429), 35,
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
  [3144] = 5,
    ACTIONS(435), 1,
      sym_COMMENTLINE,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(437), 5,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(440), 15,
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
    ACTIONS(433), 20,
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
  [3198] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(445), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(443), 33,
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
  [3246] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(449), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(447), 33,
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
  [3294] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(453), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(451), 33,
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
  [3342] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(457), 6,
      sym_COMMENTLINE,
      sym_slur_open,
      anon_sym_LBRACK,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_bar_line,
    ACTIONS(455), 33,
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
  [3390] = 24,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(39), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(43), 1,
      sym_bar_line,
    ACTIONS(47), 1,
      sym_end_of_repeated_section,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(459), 1,
      sym_slur_open,
    STATE(21), 1,
      sym__pitch,
    STATE(33), 1,
      sym_note,
    STATE(45), 1,
      sym_generic_bar_line,
    STATE(63), 1,
      sym_nth_ending_number,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(35), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(461), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(11), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    ACTIONS(45), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    STATE(62), 5,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
      aux_sym_bar_repeat1,
  [3479] = 24,
    ACTIONS(27), 1,
      anon_sym_LBRACK,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(39), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(310), 1,
      sym_bar_line,
    ACTIONS(312), 1,
      sym_end_of_repeated_section,
    ACTIONS(459), 1,
      sym_slur_open,
    STATE(21), 1,
      sym__pitch,
    STATE(33), 1,
      sym_note,
    STATE(45), 1,
      sym_generic_bar_line,
    STATE(63), 1,
      sym_nth_ending_number,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(35), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(47), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(461), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(11), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    ACTIONS(45), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
    STATE(62), 5,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
      aux_sym_bar_repeat1,
  [3568] = 21,
    ACTIONS(463), 1,
      sym_slur_open,
    ACTIONS(469), 1,
      anon_sym_LBRACK,
    ACTIONS(472), 1,
      sym_alteration,
    ACTIONS(475), 1,
      sym_note_letter,
    ACTIONS(478), 1,
      sym_rest,
    ACTIONS(484), 1,
      aux_sym_grace_note_token1,
    ACTIONS(487), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(490), 1,
      sym_decoration_shorthand,
    ACTIONS(493), 1,
      sym_bar_line,
    STATE(21), 1,
      sym__pitch,
    STATE(33), 1,
      sym_note,
    STATE(63), 1,
      sym_nth_ending_number,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(481), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(466), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(11), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(62), 5,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
      aux_sym_bar_repeat1,
    ACTIONS(495), 6,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [3648] = 19,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(39), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(497), 1,
      sym_slur_open,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    ACTIONS(503), 1,
      sym_alteration,
    ACTIONS(505), 1,
      sym_note_letter,
    ACTIONS(507), 1,
      sym_rest,
    STATE(64), 1,
      sym_nth_ending_number,
    STATE(82), 1,
      sym__pitch,
    STATE(92), 1,
      sym_note,
    STATE(145), 1,
      sym_chord_symbol,
    STATE(157), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(509), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(111), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(499), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(65), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(172), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
  [3716] = 19,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(39), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(501), 1,
      anon_sym_LBRACK,
    ACTIONS(503), 1,
      sym_alteration,
    ACTIONS(505), 1,
      sym_note_letter,
    ACTIONS(507), 1,
      sym_rest,
    ACTIONS(511), 1,
      sym_slur_open,
    STATE(64), 1,
      sym_nth_ending_number,
    STATE(82), 1,
      sym__pitch,
    STATE(92), 1,
      sym_note,
    STATE(145), 1,
      sym_chord_symbol,
    STATE(157), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(509), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(111), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(513), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(65), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
    STATE(173), 4,
      sym__music_content,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
  [3784] = 18,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(242), 1,
      sym_bar_line,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(503), 1,
      sym_alteration,
    ACTIONS(505), 1,
      sym_note_letter,
    ACTIONS(507), 1,
      sym_rest,
    ACTIONS(515), 1,
      anon_sym_BQUOTE,
    ACTIONS(517), 1,
      anon_sym_LBRACK,
    ACTIONS(519), 1,
      aux_sym_chord_symbol_token1,
    STATE(82), 1,
      sym__pitch,
    STATE(92), 1,
      sym_note,
    STATE(145), 1,
      sym_chord_symbol,
    STATE(152), 1,
      aux_sym_beam_repeat2,
    STATE(157), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(111), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(240), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
    STATE(67), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [3847] = 16,
    ACTIONS(250), 1,
      sym_bar_line,
    ACTIONS(264), 1,
      aux_sym_grace_note_token1,
    ACTIONS(521), 1,
      anon_sym_LBRACK,
    ACTIONS(524), 1,
      sym_alteration,
    ACTIONS(527), 1,
      sym_note_letter,
    ACTIONS(530), 1,
      sym_rest,
    ACTIONS(533), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(536), 1,
      sym_decoration_shorthand,
    STATE(82), 1,
      sym__pitch,
    STATE(92), 1,
      sym_note,
    STATE(145), 1,
      sym_chord_symbol,
    STATE(157), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(111), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(248), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
    STATE(66), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [3904] = 16,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(275), 1,
      sym_bar_line,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(503), 1,
      sym_alteration,
    ACTIONS(505), 1,
      sym_note_letter,
    ACTIONS(507), 1,
      sym_rest,
    ACTIONS(517), 1,
      anon_sym_LBRACK,
    ACTIONS(519), 1,
      aux_sym_chord_symbol_token1,
    STATE(82), 1,
      sym__pitch,
    STATE(92), 1,
      sym_note,
    STATE(145), 1,
      sym_chord_symbol,
    STATE(157), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(111), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(273), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
    STATE(66), 4,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
      aux_sym_beam_repeat1,
  [3961] = 11,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(541), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(543), 1,
      sym_bar_line,
    ACTIONS(547), 1,
      sym_end_of_repeated_section,
    ACTIONS(549), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(551), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(539), 2,
      sym_note_skip,
      sym_annotation,
    STATE(121), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(69), 4,
      sym_chord_symbol,
      sym_generic_bar_line,
      sym_symbol,
      aux_sym_symbol_line_repeat1,
    ACTIONS(545), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [4004] = 11,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(556), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(559), 1,
      sym_bar_line,
    ACTIONS(565), 1,
      sym_end_of_repeated_section,
    ACTIONS(568), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(571), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(553), 2,
      sym_note_skip,
      sym_annotation,
    STATE(121), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(69), 4,
      sym_chord_symbol,
      sym_generic_bar_line,
      sym_symbol,
      aux_sym_symbol_line_repeat1,
    ACTIONS(562), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [4047] = 5,
    ACTIONS(573), 1,
      sym_octave,
    STATE(71), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(285), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(283), 13,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
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
  [4077] = 5,
    ACTIONS(575), 1,
      sym_octave,
    STATE(71), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(291), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(289), 13,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
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
  [4107] = 5,
    ACTIONS(573), 1,
      sym_octave,
    STATE(71), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(302), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(300), 13,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
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
  [4137] = 5,
    ACTIONS(578), 1,
      sym_octave,
    STATE(72), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(279), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(277), 13,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
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
  [4167] = 5,
    ACTIONS(580), 1,
      sym_octave,
    STATE(70), 1,
      aux_sym__pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(302), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(300), 13,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
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
  [4197] = 9,
    ACTIONS(541), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(543), 1,
      sym_bar_line,
    ACTIONS(586), 1,
      sym_end_of_repeated_section,
    ACTIONS(588), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(582), 2,
      sym_note_skip,
      sym_annotation,
    STATE(121), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(68), 4,
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
  [4235] = 14,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(503), 1,
      sym_alteration,
    ACTIONS(505), 1,
      sym_note_letter,
    ACTIONS(507), 1,
      sym_rest,
    ACTIONS(519), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(590), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(92), 1,
      sym_note,
    STATE(145), 1,
      sym_chord_symbol,
    STATE(157), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(111), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(165), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [4282] = 14,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(519), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(592), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(33), 1,
      sym_note,
    STATE(148), 1,
      sym_chord_symbol,
    STATE(163), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(113), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    STATE(41), 3,
      sym__nte_or_chrd,
      sym_note_construct,
      sym__chord_cstrct,
  [4329] = 5,
    STATE(78), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(594), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(597), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(599), 11,
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
  [4358] = 5,
    STATE(80), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(601), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(603), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(605), 11,
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
  [4387] = 5,
    STATE(78), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(601), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(607), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(609), 11,
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
  [4416] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(597), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(599), 13,
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
  [4440] = 4,
    ACTIONS(611), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(318), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(316), 12,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
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
  [4466] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(613), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(615), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(359), 12,
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
  [4493] = 4,
    ACTIONS(617), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(353), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(351), 11,
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
  [4518] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(619), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(621), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(359), 12,
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
  [4545] = 4,
    ACTIONS(623), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(367), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(365), 11,
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
  [4570] = 4,
    ACTIONS(625), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(335), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(333), 11,
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
  [4595] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(324), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(322), 12,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
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
  [4618] = 4,
    ACTIONS(627), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(347), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(345), 11,
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
  [4643] = 9,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(632), 1,
      anon_sym_DASH,
    ACTIONS(635), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(638), 1,
      aux_sym_verse_number_token1,
    ACTIONS(641), 2,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
    STATE(90), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(143), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(629), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [4678] = 4,
    ACTIONS(643), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(341), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(339), 11,
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
  [4703] = 4,
    ACTIONS(645), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(383), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(381), 11,
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
  [4728] = 4,
    ACTIONS(647), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(389), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(387), 11,
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
  [4753] = 9,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(651), 1,
      anon_sym_DASH,
    ACTIONS(653), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(655), 1,
      aux_sym_verse_number_token1,
    ACTIONS(657), 2,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
    STATE(90), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    STATE(143), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
    ACTIONS(649), 4,
      sym_note_skip,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
  [4788] = 4,
    ACTIONS(659), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(373), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(371), 11,
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
  [4813] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(395), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(393), 11,
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
  [4835] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(335), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(333), 11,
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
  [4857] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(347), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(345), 11,
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
  [4879] = 12,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(661), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [4919] = 12,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(663), 1,
      aux_sym_nth_ending_number_token1,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(114), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [4959] = 12,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(665), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [4999] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(399), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(397), 11,
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
  [5021] = 12,
    ACTIONS(667), 1,
      anon_sym_RBRACK,
    ACTIONS(669), 1,
      sym_alteration,
    ACTIONS(672), 1,
      sym_note_letter,
    ACTIONS(675), 1,
      sym_rest,
    ACTIONS(678), 1,
      aux_sym_grace_note_token1,
    ACTIONS(681), 1,
      sym_decoration_shorthand,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5061] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(353), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(351), 11,
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
  [5083] = 12,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(684), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5123] = 12,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(686), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5163] = 12,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(688), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5203] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(373), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(371), 11,
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
  [5225] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(389), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(387), 11,
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
  [5247] = 12,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(690), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5287] = 13,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(503), 1,
      sym_alteration,
    ACTIONS(505), 1,
      sym_note_letter,
    ACTIONS(507), 1,
      sym_rest,
    ACTIONS(519), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(692), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(86), 1,
      sym_note,
    STATE(146), 1,
      sym_chord_symbol,
    STATE(156), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(140), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5329] = 12,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(694), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5369] = 13,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(519), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(696), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(29), 1,
      sym_note,
    STATE(147), 1,
      sym_chord_symbol,
    STATE(162), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(140), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5411] = 12,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(698), 1,
      anon_sym_RBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(103), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5451] = 12,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(663), 1,
      aux_sym_nth_ending_number_token1,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(105), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5491] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(367), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(365), 11,
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
  [5513] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(407), 12,
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
  [5534] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(411), 12,
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
  [5555] = 11,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(114), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5592] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(700), 12,
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
  [5613] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(359), 12,
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
  [5634] = 11,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(112), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5671] = 11,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(99), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5708] = 11,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(105), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5745] = 8,
    ACTIONS(704), 1,
      anon_sym_DASH,
    ACTIONS(706), 1,
      sym_UNDERSCORE,
    ACTIONS(708), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(710), 1,
      aux_sym_verse_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(131), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(702), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(150), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [5776] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(712), 12,
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
  [5797] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(427), 12,
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
  [5818] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(714), 12,
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
  [5839] = 11,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(107), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5876] = 11,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(110), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5913] = 9,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(704), 1,
      anon_sym_DASH,
    ACTIONS(706), 1,
      sym_UNDERSCORE,
    ACTIONS(708), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(710), 1,
      aux_sym_verse_number_token1,
    ACTIONS(716), 1,
      sym__NEWLINE,
    STATE(134), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(702), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(150), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [5946] = 11,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(106), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [5983] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(415), 12,
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
  [6004] = 9,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(718), 1,
      sym__NEWLINE,
    ACTIONS(723), 1,
      anon_sym_DASH,
    ACTIONS(726), 1,
      sym_UNDERSCORE,
    ACTIONS(729), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(732), 1,
      aux_sym_verse_number_token1,
    STATE(134), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(720), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(150), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [6037] = 8,
    ACTIONS(649), 1,
      sym_UNDERSCORE,
    ACTIONS(653), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(655), 1,
      aux_sym_verse_number_token1,
    ACTIONS(737), 1,
      anon_sym_DASH,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(94), 2,
      sym_lyric_text,
      aux_sym_words_line_repeat1,
    ACTIONS(735), 3,
      sym_note_skip,
      sym_TILDE,
      sym_bar_line,
    STATE(143), 3,
      sym_HYPHEN,
      sym_lyric_syllable,
      sym_verse_number,
  [6068] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(739), 12,
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
  [6089] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(741), 12,
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
  [6110] = 11,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    STATE(21), 1,
      sym__pitch,
    STATE(164), 1,
      sym_note,
    STATE(169), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(101), 2,
      sym_chord_note,
      aux_sym__chord_cstrct_repeat1,
    STATE(139), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [6147] = 10,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(37), 1,
      aux_sym_grace_note_token1,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    STATE(21), 1,
      sym__pitch,
    STATE(160), 1,
      sym_note,
    STATE(176), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(140), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [6180] = 4,
    ACTIONS(745), 1,
      aux_sym_grace_note_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(140), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(743), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
  [6200] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(748), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [6218] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(750), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [6236] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(752), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [6254] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(754), 9,
      sym_note_skip,
      anon_sym_DASH,
      sym_UNDERSCORE,
      sym_TILDE,
      sym_bar_line,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
      aux_sym_words_line_token1,
      aux_sym_body_info_line_token1,
  [6272] = 9,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(503), 1,
      sym_alteration,
    ACTIONS(505), 1,
      sym_note_letter,
    ACTIONS(507), 1,
      sym_rest,
    ACTIONS(692), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(86), 1,
      sym_note,
    STATE(156), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6301] = 9,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(503), 1,
      sym_alteration,
    ACTIONS(505), 1,
      sym_note_letter,
    ACTIONS(507), 1,
      sym_rest,
    ACTIONS(756), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(95), 1,
      sym_note,
    STATE(159), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6330] = 9,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(758), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(30), 1,
      sym_note,
    STATE(158), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6359] = 9,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(308), 1,
      sym_decoration_shorthand,
    ACTIONS(696), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(29), 1,
      sym_note,
    STATE(162), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6388] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(750), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(760), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [6404] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(752), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(762), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [6420] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(748), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(764), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [6436] = 5,
    ACTIONS(275), 1,
      sym_bar_line,
    ACTIONS(515), 1,
      anon_sym_BQUOTE,
    STATE(154), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(273), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6456] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(766), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
  [6470] = 5,
    ACTIONS(328), 1,
      sym_bar_line,
    ACTIONS(768), 1,
      anon_sym_BQUOTE,
    STATE(154), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(326), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6490] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(754), 3,
      sym_UNDERSCORE,
      aux_sym_lyric_syllable_token1,
      aux_sym_verse_number_token1,
    ACTIONS(771), 5,
      sym__NEWLINE,
      sym_note_skip,
      anon_sym_DASH,
      sym_TILDE,
      sym_bar_line,
  [6506] = 7,
    ACTIONS(503), 1,
      sym_alteration,
    ACTIONS(505), 1,
      sym_note_letter,
    ACTIONS(507), 1,
      sym_rest,
    ACTIONS(756), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(95), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6529] = 7,
    ACTIONS(503), 1,
      sym_alteration,
    ACTIONS(505), 1,
      sym_note_letter,
    ACTIONS(507), 1,
      sym_rest,
    ACTIONS(692), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(86), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6552] = 7,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(773), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(24), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6575] = 7,
    ACTIONS(503), 1,
      sym_alteration,
    ACTIONS(505), 1,
      sym_note_letter,
    ACTIONS(507), 1,
      sym_rest,
    ACTIONS(775), 1,
      anon_sym_LBRACK,
    STATE(82), 1,
      sym__pitch,
    STATE(87), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6598] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(777), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [6611] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(779), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [6624] = 7,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(758), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(30), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6647] = 7,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    ACTIONS(696), 1,
      anon_sym_LBRACK,
    STATE(21), 1,
      sym__pitch,
    STATE(29), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6670] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(781), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [6683] = 3,
    ACTIONS(328), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(326), 5,
      anon_sym_BQUOTE,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6698] = 5,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(783), 1,
      aux_sym_grace_note_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(175), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [6716] = 5,
    ACTIONS(314), 1,
      sym_words_postbody,
    ACTIONS(785), 1,
      ts_builtin_sym_end,
    STATE(262), 1,
      sym_lyric_section,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(183), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [6734] = 3,
    ACTIONS(431), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(429), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6748] = 6,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    STATE(21), 1,
      sym__pitch,
    STATE(160), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6768] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(787), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [6780] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(789), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [6792] = 3,
    ACTIONS(791), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(793), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6806] = 3,
    ACTIONS(795), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(797), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6820] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(799), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [6832] = 5,
    ACTIONS(801), 1,
      sym_alteration,
    ACTIONS(804), 1,
      sym_note_letter,
    ACTIONS(807), 1,
      aux_sym_grace_note_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(175), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [6850] = 6,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(33), 1,
      sym_rest,
    STATE(21), 1,
      sym__pitch,
    STATE(161), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [6870] = 3,
    ACTIONS(423), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(421), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [6884] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(809), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [6896] = 4,
    ACTIONS(29), 1,
      sym_alteration,
    ACTIONS(31), 1,
      sym_note_letter,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(166), 2,
      sym__pitch,
      aux_sym_grace_note_repeat1,
  [6911] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(811), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [6922] = 3,
    ACTIONS(813), 1,
      sym_alteration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(815), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [6935] = 4,
    ACTIONS(817), 1,
      ts_builtin_sym_end,
    ACTIONS(819), 1,
      sym_words_postbody,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(182), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [6950] = 4,
    ACTIONS(314), 1,
      sym_words_postbody,
    ACTIONS(822), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    STATE(182), 2,
      sym_lyric_line,
      aux_sym_lyric_section_repeat1,
  [6965] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(824), 1,
      anon_sym_DOT,
    ACTIONS(827), 1,
      aux_sym_body_info_line_token1,
    STATE(184), 1,
      aux_sym_abc_version_repeat1,
  [6981] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(829), 1,
      anon_sym_DOT,
    ACTIONS(831), 1,
      aux_sym_body_info_line_token1,
    STATE(191), 1,
      aux_sym_abc_version_repeat1,
  [6997] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(833), 1,
      aux_sym_words_line_token1,
    ACTIONS(835), 1,
      aux_sym_body_info_line_token1,
    STATE(192), 1,
      aux_sym_words_line_repeat2,
  [7013] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(833), 1,
      aux_sym_words_line_token1,
    ACTIONS(837), 1,
      aux_sym_body_info_line_token1,
    STATE(186), 1,
      aux_sym_words_line_repeat2,
  [7029] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(839), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [7039] = 4,
    ACTIONS(841), 1,
      aux_sym_body_inline_info_token1,
    STATE(58), 1,
      sym_TEXTLINE,
    STATE(360), 1,
      sym_TEXT,
    ACTIONS(5), 2,
      sym__space,
      sym__NEWLINE,
  [7053] = 4,
    ACTIONS(843), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(845), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(847), 1,
      sym_chord_type,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7067] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(829), 1,
      anon_sym_DOT,
    ACTIONS(849), 1,
      aux_sym_body_info_line_token1,
    STATE(184), 1,
      aux_sym_abc_version_repeat1,
  [7083] = 5,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(657), 1,
      aux_sym_body_info_line_token1,
    ACTIONS(851), 1,
      aux_sym_words_line_token1,
    STATE(192), 1,
      aux_sym_words_line_repeat2,
  [7099] = 4,
    ACTIONS(854), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(856), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(858), 1,
      sym_chord_type,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7113] = 3,
    ACTIONS(860), 1,
      sym_note_letter,
    STATE(291), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7124] = 3,
    ACTIONS(862), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(864), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7135] = 3,
    ACTIONS(866), 1,
      sym_note_letter,
    STATE(190), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7146] = 3,
    ACTIONS(815), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(868), 1,
      sym_alteration,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7157] = 3,
    ACTIONS(866), 1,
      sym_note_letter,
    STATE(193), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7168] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(870), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [7177] = 3,
    ACTIONS(860), 1,
      sym_note_letter,
    STATE(289), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7188] = 3,
    ACTIONS(872), 1,
      anon_sym_BANGtrill_BANG,
    STATE(254), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7199] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
    ACTIONS(874), 2,
      ts_builtin_sym_end,
      sym_words_postbody,
  [7208] = 3,
    ACTIONS(876), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(878), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7219] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(827), 2,
      anon_sym_DOT,
      aux_sym_body_info_line_token1,
  [7230] = 3,
    ACTIONS(860), 1,
      sym_note_letter,
    STATE(245), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7241] = 3,
    ACTIONS(860), 1,
      sym_note_letter,
    STATE(248), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7252] = 2,
    ACTIONS(880), 1,
      aux_sym_nth_ending_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7260] = 2,
    ACTIONS(882), 1,
      anon_sym_BANGmp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7268] = 2,
    ACTIONS(884), 1,
      anon_sym_BANGdiminuendo_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7276] = 2,
    ACTIONS(886), 1,
      anon_sym_BANG_GT_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7284] = 2,
    ACTIONS(888), 1,
      anon_sym_BANGsegno_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7292] = 2,
    ACTIONS(890), 1,
      anon_sym_BANGcoda_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7300] = 2,
    ACTIONS(892), 1,
      anon_sym_BANGD_DOTS_DOT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7308] = 2,
    ACTIONS(894), 1,
      anon_sym_BANGD_DOTC_DOT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7316] = 2,
    ACTIONS(896), 1,
      anon_sym_BANGdacoda_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7324] = 2,
    ACTIONS(898), 1,
      anon_sym_BANGdacapo_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7332] = 2,
    ACTIONS(900), 1,
      anon_sym_BANGfine_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7340] = 2,
    ACTIONS(902), 1,
      anon_sym_BANGshortphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7348] = 2,
    ACTIONS(904), 1,
      anon_sym_BANGmediumphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7356] = 2,
    ACTIONS(906), 1,
      anon_sym_BANGlongphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7364] = 2,
    ACTIONS(908), 1,
      anon_sym_BANG0_BANG_DASH_BANG5_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7372] = 2,
    ACTIONS(910), 1,
      anon_sym_BANG_PLUS_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7380] = 2,
    ACTIONS(912), 1,
      anon_sym_BANGplus_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7388] = 2,
    ACTIONS(914), 1,
      anon_sym_BANGsnap_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7396] = 2,
    ACTIONS(916), 1,
      anon_sym_BANGslide_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7404] = 2,
    ACTIONS(918), 1,
      anon_sym_BANGwedge_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7412] = 2,
    ACTIONS(920), 1,
      anon_sym_BANGupbow_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7420] = 2,
    ACTIONS(922), 1,
      anon_sym_BANGdownbow_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7428] = 2,
    ACTIONS(924), 1,
      anon_sym_BANGopen_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7436] = 2,
    ACTIONS(926), 1,
      anon_sym_BANGuppermordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7444] = 2,
    ACTIONS(928), 1,
      anon_sym_BANGtenuto_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7452] = 2,
    ACTIONS(930), 1,
      anon_sym_BANGinvertedfermata_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7460] = 2,
    ACTIONS(932), 1,
      anon_sym_BANGfermata_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7468] = 2,
    ACTIONS(934), 1,
      anon_sym_BANGemphasis_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7476] = 2,
    ACTIONS(936), 1,
      anon_sym_BANGaccent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7484] = 2,
    ACTIONS(938), 1,
      anon_sym_BANG_GT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7492] = 2,
    ACTIONS(940), 1,
      anon_sym_BANGarpeggio_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7500] = 2,
    ACTIONS(942), 1,
      anon_sym_BANGinvertedturnx_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7508] = 2,
    ACTIONS(944), 1,
      anon_sym_BANGinvertedturn_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7516] = 2,
    ACTIONS(946), 1,
      anon_sym_BANGturnx_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7524] = 2,
    ACTIONS(948), 1,
      anon_sym_BANGturn_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7532] = 2,
    ACTIONS(950), 1,
      anon_sym_BANGroll_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7540] = 2,
    ACTIONS(952), 1,
      anon_sym_BANGpralltriller_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7548] = 2,
    ACTIONS(954), 1,
      anon_sym_BANGmordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7556] = 2,
    ACTIONS(956), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7564] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(958), 2,
      sym__NEWLINE,
      sym_COMMENTLINE,
  [7572] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(960), 1,
      aux_sym_body_info_line_token1,
  [7582] = 2,
    ACTIONS(962), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7590] = 2,
    ACTIONS(964), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7598] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(5), 1,
      sym__NEWLINE,
    ACTIONS(966), 1,
      anon_sym_LF,
  [7608] = 2,
    ACTIONS(968), 1,
      anon_sym_BANGtrill_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7616] = 2,
    ACTIONS(970), 1,
      anon_sym_BANGtrill_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7624] = 2,
    ACTIONS(972), 1,
      aux_sym_nth_ending_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7632] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(974), 1,
      aux_sym_body_info_line_token1,
  [7642] = 2,
    ACTIONS(976), 1,
      anon_sym_BANGlowermordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7650] = 2,
    ACTIONS(978), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7658] = 2,
    ACTIONS(980), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7666] = 2,
    ACTIONS(982), 1,
      anon_sym_BANGthumb_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7674] = 2,
    ACTIONS(984), 1,
      anon_sym_BANGdiminuendo_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7682] = 2,
    ACTIONS(986), 1,
      anon_sym_BANG_LT_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7690] = 2,
    ACTIONS(988), 1,
      anon_sym_BANGcrescendo_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7698] = 2,
    ACTIONS(990), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7706] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(992), 1,
      aux_sym_body_info_line_token1,
  [7716] = 2,
    ACTIONS(994), 1,
      anon_sym_BANG_LT_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7724] = 2,
    ACTIONS(996), 1,
      anon_sym_BANGcrescendo_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7732] = 2,
    ACTIONS(998), 1,
      anon_sym_BANGsfz_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7740] = 2,
    ACTIONS(1000), 1,
      anon_sym_BANGtrill_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7748] = 2,
    ACTIONS(1002), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7756] = 2,
    ACTIONS(1004), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7764] = 2,
    ACTIONS(1006), 1,
      anon_sym_BANGffff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7772] = 2,
    ACTIONS(1008), 1,
      anon_sym_BANGfff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7780] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(712), 1,
      aux_sym_body_info_line_token1,
  [7790] = 2,
    ACTIONS(1010), 1,
      anon_sym_BANGff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7798] = 2,
    ACTIONS(785), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7806] = 2,
    ACTIONS(1012), 1,
      sym_note_letter,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7814] = 2,
    ACTIONS(1014), 1,
      aux_sym_multimeasure_rest_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7822] = 2,
    ACTIONS(1016), 1,
      anon_sym_BANGlowermordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7830] = 2,
    ACTIONS(1018), 1,
      aux_sym_multimeasure_rest_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7838] = 2,
    ACTIONS(1020), 1,
      anon_sym_BANGf_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7846] = 2,
    ACTIONS(1022), 1,
      sym_note_letter,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7854] = 2,
    ACTIONS(1024), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7862] = 2,
    ACTIONS(1026), 1,
      anon_sym_BANGtrill_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7870] = 2,
    ACTIONS(1028), 1,
      anon_sym_BANGmf_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7878] = 2,
    ACTIONS(1030), 1,
      anon_sym_BANG_GT_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7886] = 2,
    ACTIONS(1032), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7894] = 2,
    ACTIONS(1034), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7902] = 2,
    ACTIONS(1036), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7910] = 3,
    ACTIONS(3), 1,
      sym__NEWLINE,
    ACTIONS(5), 1,
      sym__space,
    ACTIONS(1038), 1,
      aux_sym_body_info_line_token1,
  [7920] = 2,
    ACTIONS(1040), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7928] = 2,
    ACTIONS(1042), 1,
      anon_sym_BANGp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7936] = 2,
    ACTIONS(1044), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7944] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(1046), 2,
      sym__NEWLINE,
      sym_COMMENTLINE,
  [7952] = 2,
    ACTIONS(1048), 1,
      anon_sym_BANGlongphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7960] = 2,
    ACTIONS(1050), 1,
      anon_sym_BANGpp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7968] = 2,
    ACTIONS(1052), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7976] = 2,
    ACTIONS(1054), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7984] = 2,
    ACTIONS(1056), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [7992] = 2,
    ACTIONS(1058), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8000] = 2,
    ACTIONS(1060), 1,
      anon_sym_BANGppp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8008] = 2,
    ACTIONS(1062), 1,
      anon_sym_BANGpppp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8016] = 2,
    ACTIONS(1064), 1,
      aux_sym_nth_ending_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8024] = 2,
    ACTIONS(1066), 1,
      anon_sym_BANGbreath_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8032] = 2,
    ACTIONS(1068), 1,
      aux_sym_nth_ending_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8040] = 2,
    ACTIONS(1070), 1,
      anon_sym_BANGmediumphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8048] = 2,
    ACTIONS(1072), 1,
      anon_sym_BANGshortphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8056] = 2,
    ACTIONS(1074), 1,
      anon_sym_BANGfine_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8064] = 2,
    ACTIONS(1076), 1,
      anon_sym_BANGdacapo_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8072] = 2,
    ACTIONS(1078), 1,
      anon_sym_BANGdacoda_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8080] = 2,
    ACTIONS(1080), 1,
      anon_sym_BANGD_DOTC_DOT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8088] = 2,
    ACTIONS(1082), 1,
      anon_sym_BANGD_DOTS_DOT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8096] = 2,
    ACTIONS(1084), 1,
      anon_sym_BANGcoda_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8104] = 2,
    ACTIONS(1086), 1,
      anon_sym_BANGsegno_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8112] = 2,
    ACTIONS(1088), 1,
      anon_sym_BANG_GT_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8120] = 2,
    ACTIONS(1090), 1,
      anon_sym_BANGdiminuendo_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8128] = 2,
    ACTIONS(1092), 1,
      anon_sym_BANG_GT_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8136] = 2,
    ACTIONS(1094), 1,
      anon_sym_BANGdiminuendo_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8144] = 2,
    ACTIONS(1096), 1,
      anon_sym_BANG_LT_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8152] = 2,
    ACTIONS(1098), 1,
      anon_sym_BANGcrescendo_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8160] = 2,
    ACTIONS(1100), 1,
      anon_sym_BANG_LT_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8168] = 2,
    ACTIONS(1102), 1,
      anon_sym_BANGcrescendo_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8176] = 2,
    ACTIONS(1104), 1,
      anon_sym_BANGsfz_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8184] = 2,
    ACTIONS(1106), 1,
      anon_sym_BANGffff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8192] = 2,
    ACTIONS(1108), 1,
      anon_sym_BANGfff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8200] = 2,
    ACTIONS(1110), 1,
      anon_sym_BANGff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8208] = 2,
    ACTIONS(1112), 1,
      anon_sym_BANGf_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8216] = 2,
    ACTIONS(1114), 1,
      anon_sym_BANGmf_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8224] = 2,
    ACTIONS(1116), 1,
      anon_sym_BANGmp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8232] = 2,
    ACTIONS(1118), 1,
      anon_sym_BANGp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8240] = 2,
    ACTIONS(1120), 1,
      anon_sym_BANGpp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8248] = 2,
    ACTIONS(1122), 1,
      anon_sym_BANGppp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8256] = 2,
    ACTIONS(1124), 1,
      anon_sym_BANGpppp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8264] = 2,
    ACTIONS(1126), 1,
      anon_sym_BANGbreath_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8272] = 2,
    ACTIONS(1128), 1,
      anon_sym_BANGthumb_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8280] = 2,
    ACTIONS(1130), 1,
      anon_sym_BANGopen_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8288] = 2,
    ACTIONS(1132), 1,
      anon_sym_BANGdownbow_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8296] = 2,
    ACTIONS(1134), 1,
      anon_sym_BANGupbow_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8304] = 2,
    ACTIONS(1136), 1,
      anon_sym_BANGwedge_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8312] = 2,
    ACTIONS(1138), 1,
      anon_sym_BANGslide_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8320] = 2,
    ACTIONS(1140), 1,
      anon_sym_BANGsnap_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8328] = 2,
    ACTIONS(1142), 1,
      anon_sym_BANGplus_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8336] = 2,
    ACTIONS(1144), 1,
      anon_sym_BANG_PLUS_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8344] = 2,
    ACTIONS(1146), 1,
      anon_sym_BANG0_BANG_DASH_BANG5_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8352] = 2,
    ACTIONS(1148), 1,
      anon_sym_BANGtenuto_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8360] = 2,
    ACTIONS(1150), 1,
      anon_sym_BANGinvertedfermata_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8368] = 2,
    ACTIONS(1152), 1,
      anon_sym_BANGfermata_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8376] = 2,
    ACTIONS(1154), 1,
      anon_sym_BANGemphasis_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8384] = 2,
    ACTIONS(1156), 1,
      anon_sym_BANGaccent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8392] = 2,
    ACTIONS(1158), 1,
      anon_sym_BANG_GT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8400] = 2,
    ACTIONS(1160), 1,
      anon_sym_BANGarpeggio_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8408] = 2,
    ACTIONS(1162), 1,
      anon_sym_BANGinvertedturnx_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8416] = 2,
    ACTIONS(1164), 1,
      anon_sym_BANGinvertedturn_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8424] = 2,
    ACTIONS(1166), 1,
      anon_sym_BANGturnx_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8432] = 2,
    ACTIONS(1168), 1,
      anon_sym_BANGturn_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8440] = 2,
    ACTIONS(1170), 1,
      anon_sym_BANGroll_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8448] = 2,
    ACTIONS(1172), 1,
      anon_sym_BANGpralltriller_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8456] = 2,
    ACTIONS(1174), 1,
      anon_sym_BANGmordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8464] = 2,
    ACTIONS(1176), 1,
      anon_sym_BANGuppermordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym__NEWLINE,
  [8472] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(1178), 1,
      sym__NEWLINE,
  [8479] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(1180), 1,
      sym__NEWLINE,
  [8486] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(1182), 1,
      sym__NEWLINE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 122,
  [SMALL_STATE(7)] = 242,
  [SMALL_STATE(8)] = 360,
  [SMALL_STATE(9)] = 480,
  [SMALL_STATE(10)] = 557,
  [SMALL_STATE(11)] = 636,
  [SMALL_STATE(12)] = 728,
  [SMALL_STATE(13)] = 814,
  [SMALL_STATE(14)] = 886,
  [SMALL_STATE(15)] = 947,
  [SMALL_STATE(16)] = 1008,
  [SMALL_STATE(17)] = 1069,
  [SMALL_STATE(18)] = 1126,
  [SMALL_STATE(19)] = 1187,
  [SMALL_STATE(20)] = 1248,
  [SMALL_STATE(21)] = 1362,
  [SMALL_STATE(22)] = 1418,
  [SMALL_STATE(23)] = 1471,
  [SMALL_STATE(24)] = 1527,
  [SMALL_STATE(25)] = 1581,
  [SMALL_STATE(26)] = 1635,
  [SMALL_STATE(27)] = 1689,
  [SMALL_STATE(28)] = 1743,
  [SMALL_STATE(29)] = 1799,
  [SMALL_STATE(30)] = 1853,
  [SMALL_STATE(31)] = 1907,
  [SMALL_STATE(32)] = 1963,
  [SMALL_STATE(33)] = 2019,
  [SMALL_STATE(34)] = 2073,
  [SMALL_STATE(35)] = 2127,
  [SMALL_STATE(36)] = 2178,
  [SMALL_STATE(37)] = 2229,
  [SMALL_STATE(38)] = 2280,
  [SMALL_STATE(39)] = 2331,
  [SMALL_STATE(40)] = 2382,
  [SMALL_STATE(41)] = 2433,
  [SMALL_STATE(42)] = 2484,
  [SMALL_STATE(43)] = 2535,
  [SMALL_STATE(44)] = 2586,
  [SMALL_STATE(45)] = 2640,
  [SMALL_STATE(46)] = 2690,
  [SMALL_STATE(47)] = 2740,
  [SMALL_STATE(48)] = 2790,
  [SMALL_STATE(49)] = 2844,
  [SMALL_STATE(50)] = 2894,
  [SMALL_STATE(51)] = 2944,
  [SMALL_STATE(52)] = 2994,
  [SMALL_STATE(53)] = 3044,
  [SMALL_STATE(54)] = 3094,
  [SMALL_STATE(55)] = 3144,
  [SMALL_STATE(56)] = 3198,
  [SMALL_STATE(57)] = 3246,
  [SMALL_STATE(58)] = 3294,
  [SMALL_STATE(59)] = 3342,
  [SMALL_STATE(60)] = 3390,
  [SMALL_STATE(61)] = 3479,
  [SMALL_STATE(62)] = 3568,
  [SMALL_STATE(63)] = 3648,
  [SMALL_STATE(64)] = 3716,
  [SMALL_STATE(65)] = 3784,
  [SMALL_STATE(66)] = 3847,
  [SMALL_STATE(67)] = 3904,
  [SMALL_STATE(68)] = 3961,
  [SMALL_STATE(69)] = 4004,
  [SMALL_STATE(70)] = 4047,
  [SMALL_STATE(71)] = 4077,
  [SMALL_STATE(72)] = 4107,
  [SMALL_STATE(73)] = 4137,
  [SMALL_STATE(74)] = 4167,
  [SMALL_STATE(75)] = 4197,
  [SMALL_STATE(76)] = 4235,
  [SMALL_STATE(77)] = 4282,
  [SMALL_STATE(78)] = 4329,
  [SMALL_STATE(79)] = 4358,
  [SMALL_STATE(80)] = 4387,
  [SMALL_STATE(81)] = 4416,
  [SMALL_STATE(82)] = 4440,
  [SMALL_STATE(83)] = 4466,
  [SMALL_STATE(84)] = 4493,
  [SMALL_STATE(85)] = 4518,
  [SMALL_STATE(86)] = 4545,
  [SMALL_STATE(87)] = 4570,
  [SMALL_STATE(88)] = 4595,
  [SMALL_STATE(89)] = 4618,
  [SMALL_STATE(90)] = 4643,
  [SMALL_STATE(91)] = 4678,
  [SMALL_STATE(92)] = 4703,
  [SMALL_STATE(93)] = 4728,
  [SMALL_STATE(94)] = 4753,
  [SMALL_STATE(95)] = 4788,
  [SMALL_STATE(96)] = 4813,
  [SMALL_STATE(97)] = 4835,
  [SMALL_STATE(98)] = 4857,
  [SMALL_STATE(99)] = 4879,
  [SMALL_STATE(100)] = 4919,
  [SMALL_STATE(101)] = 4959,
  [SMALL_STATE(102)] = 4999,
  [SMALL_STATE(103)] = 5021,
  [SMALL_STATE(104)] = 5061,
  [SMALL_STATE(105)] = 5083,
  [SMALL_STATE(106)] = 5123,
  [SMALL_STATE(107)] = 5163,
  [SMALL_STATE(108)] = 5203,
  [SMALL_STATE(109)] = 5225,
  [SMALL_STATE(110)] = 5247,
  [SMALL_STATE(111)] = 5287,
  [SMALL_STATE(112)] = 5329,
  [SMALL_STATE(113)] = 5369,
  [SMALL_STATE(114)] = 5411,
  [SMALL_STATE(115)] = 5451,
  [SMALL_STATE(116)] = 5491,
  [SMALL_STATE(117)] = 5513,
  [SMALL_STATE(118)] = 5534,
  [SMALL_STATE(119)] = 5555,
  [SMALL_STATE(120)] = 5592,
  [SMALL_STATE(121)] = 5613,
  [SMALL_STATE(122)] = 5634,
  [SMALL_STATE(123)] = 5671,
  [SMALL_STATE(124)] = 5708,
  [SMALL_STATE(125)] = 5745,
  [SMALL_STATE(126)] = 5776,
  [SMALL_STATE(127)] = 5797,
  [SMALL_STATE(128)] = 5818,
  [SMALL_STATE(129)] = 5839,
  [SMALL_STATE(130)] = 5876,
  [SMALL_STATE(131)] = 5913,
  [SMALL_STATE(132)] = 5946,
  [SMALL_STATE(133)] = 5983,
  [SMALL_STATE(134)] = 6004,
  [SMALL_STATE(135)] = 6037,
  [SMALL_STATE(136)] = 6068,
  [SMALL_STATE(137)] = 6089,
  [SMALL_STATE(138)] = 6110,
  [SMALL_STATE(139)] = 6147,
  [SMALL_STATE(140)] = 6180,
  [SMALL_STATE(141)] = 6200,
  [SMALL_STATE(142)] = 6218,
  [SMALL_STATE(143)] = 6236,
  [SMALL_STATE(144)] = 6254,
  [SMALL_STATE(145)] = 6272,
  [SMALL_STATE(146)] = 6301,
  [SMALL_STATE(147)] = 6330,
  [SMALL_STATE(148)] = 6359,
  [SMALL_STATE(149)] = 6388,
  [SMALL_STATE(150)] = 6404,
  [SMALL_STATE(151)] = 6420,
  [SMALL_STATE(152)] = 6436,
  [SMALL_STATE(153)] = 6456,
  [SMALL_STATE(154)] = 6470,
  [SMALL_STATE(155)] = 6490,
  [SMALL_STATE(156)] = 6506,
  [SMALL_STATE(157)] = 6529,
  [SMALL_STATE(158)] = 6552,
  [SMALL_STATE(159)] = 6575,
  [SMALL_STATE(160)] = 6598,
  [SMALL_STATE(161)] = 6611,
  [SMALL_STATE(162)] = 6624,
  [SMALL_STATE(163)] = 6647,
  [SMALL_STATE(164)] = 6670,
  [SMALL_STATE(165)] = 6683,
  [SMALL_STATE(166)] = 6698,
  [SMALL_STATE(167)] = 6716,
  [SMALL_STATE(168)] = 6734,
  [SMALL_STATE(169)] = 6748,
  [SMALL_STATE(170)] = 6768,
  [SMALL_STATE(171)] = 6780,
  [SMALL_STATE(172)] = 6792,
  [SMALL_STATE(173)] = 6806,
  [SMALL_STATE(174)] = 6820,
  [SMALL_STATE(175)] = 6832,
  [SMALL_STATE(176)] = 6850,
  [SMALL_STATE(177)] = 6870,
  [SMALL_STATE(178)] = 6884,
  [SMALL_STATE(179)] = 6896,
  [SMALL_STATE(180)] = 6911,
  [SMALL_STATE(181)] = 6922,
  [SMALL_STATE(182)] = 6935,
  [SMALL_STATE(183)] = 6950,
  [SMALL_STATE(184)] = 6965,
  [SMALL_STATE(185)] = 6981,
  [SMALL_STATE(186)] = 6997,
  [SMALL_STATE(187)] = 7013,
  [SMALL_STATE(188)] = 7029,
  [SMALL_STATE(189)] = 7039,
  [SMALL_STATE(190)] = 7053,
  [SMALL_STATE(191)] = 7067,
  [SMALL_STATE(192)] = 7083,
  [SMALL_STATE(193)] = 7099,
  [SMALL_STATE(194)] = 7113,
  [SMALL_STATE(195)] = 7124,
  [SMALL_STATE(196)] = 7135,
  [SMALL_STATE(197)] = 7146,
  [SMALL_STATE(198)] = 7157,
  [SMALL_STATE(199)] = 7168,
  [SMALL_STATE(200)] = 7177,
  [SMALL_STATE(201)] = 7188,
  [SMALL_STATE(202)] = 7199,
  [SMALL_STATE(203)] = 7208,
  [SMALL_STATE(204)] = 7219,
  [SMALL_STATE(205)] = 7230,
  [SMALL_STATE(206)] = 7241,
  [SMALL_STATE(207)] = 7252,
  [SMALL_STATE(208)] = 7260,
  [SMALL_STATE(209)] = 7268,
  [SMALL_STATE(210)] = 7276,
  [SMALL_STATE(211)] = 7284,
  [SMALL_STATE(212)] = 7292,
  [SMALL_STATE(213)] = 7300,
  [SMALL_STATE(214)] = 7308,
  [SMALL_STATE(215)] = 7316,
  [SMALL_STATE(216)] = 7324,
  [SMALL_STATE(217)] = 7332,
  [SMALL_STATE(218)] = 7340,
  [SMALL_STATE(219)] = 7348,
  [SMALL_STATE(220)] = 7356,
  [SMALL_STATE(221)] = 7364,
  [SMALL_STATE(222)] = 7372,
  [SMALL_STATE(223)] = 7380,
  [SMALL_STATE(224)] = 7388,
  [SMALL_STATE(225)] = 7396,
  [SMALL_STATE(226)] = 7404,
  [SMALL_STATE(227)] = 7412,
  [SMALL_STATE(228)] = 7420,
  [SMALL_STATE(229)] = 7428,
  [SMALL_STATE(230)] = 7436,
  [SMALL_STATE(231)] = 7444,
  [SMALL_STATE(232)] = 7452,
  [SMALL_STATE(233)] = 7460,
  [SMALL_STATE(234)] = 7468,
  [SMALL_STATE(235)] = 7476,
  [SMALL_STATE(236)] = 7484,
  [SMALL_STATE(237)] = 7492,
  [SMALL_STATE(238)] = 7500,
  [SMALL_STATE(239)] = 7508,
  [SMALL_STATE(240)] = 7516,
  [SMALL_STATE(241)] = 7524,
  [SMALL_STATE(242)] = 7532,
  [SMALL_STATE(243)] = 7540,
  [SMALL_STATE(244)] = 7548,
  [SMALL_STATE(245)] = 7556,
  [SMALL_STATE(246)] = 7564,
  [SMALL_STATE(247)] = 7572,
  [SMALL_STATE(248)] = 7582,
  [SMALL_STATE(249)] = 7590,
  [SMALL_STATE(250)] = 7598,
  [SMALL_STATE(251)] = 7608,
  [SMALL_STATE(252)] = 7616,
  [SMALL_STATE(253)] = 7624,
  [SMALL_STATE(254)] = 7632,
  [SMALL_STATE(255)] = 7642,
  [SMALL_STATE(256)] = 7650,
  [SMALL_STATE(257)] = 7658,
  [SMALL_STATE(258)] = 7666,
  [SMALL_STATE(259)] = 7674,
  [SMALL_STATE(260)] = 7682,
  [SMALL_STATE(261)] = 7690,
  [SMALL_STATE(262)] = 7698,
  [SMALL_STATE(263)] = 7706,
  [SMALL_STATE(264)] = 7716,
  [SMALL_STATE(265)] = 7724,
  [SMALL_STATE(266)] = 7732,
  [SMALL_STATE(267)] = 7740,
  [SMALL_STATE(268)] = 7748,
  [SMALL_STATE(269)] = 7756,
  [SMALL_STATE(270)] = 7764,
  [SMALL_STATE(271)] = 7772,
  [SMALL_STATE(272)] = 7780,
  [SMALL_STATE(273)] = 7790,
  [SMALL_STATE(274)] = 7798,
  [SMALL_STATE(275)] = 7806,
  [SMALL_STATE(276)] = 7814,
  [SMALL_STATE(277)] = 7822,
  [SMALL_STATE(278)] = 7830,
  [SMALL_STATE(279)] = 7838,
  [SMALL_STATE(280)] = 7846,
  [SMALL_STATE(281)] = 7854,
  [SMALL_STATE(282)] = 7862,
  [SMALL_STATE(283)] = 7870,
  [SMALL_STATE(284)] = 7878,
  [SMALL_STATE(285)] = 7886,
  [SMALL_STATE(286)] = 7894,
  [SMALL_STATE(287)] = 7902,
  [SMALL_STATE(288)] = 7910,
  [SMALL_STATE(289)] = 7920,
  [SMALL_STATE(290)] = 7928,
  [SMALL_STATE(291)] = 7936,
  [SMALL_STATE(292)] = 7944,
  [SMALL_STATE(293)] = 7952,
  [SMALL_STATE(294)] = 7960,
  [SMALL_STATE(295)] = 7968,
  [SMALL_STATE(296)] = 7976,
  [SMALL_STATE(297)] = 7984,
  [SMALL_STATE(298)] = 7992,
  [SMALL_STATE(299)] = 8000,
  [SMALL_STATE(300)] = 8008,
  [SMALL_STATE(301)] = 8016,
  [SMALL_STATE(302)] = 8024,
  [SMALL_STATE(303)] = 8032,
  [SMALL_STATE(304)] = 8040,
  [SMALL_STATE(305)] = 8048,
  [SMALL_STATE(306)] = 8056,
  [SMALL_STATE(307)] = 8064,
  [SMALL_STATE(308)] = 8072,
  [SMALL_STATE(309)] = 8080,
  [SMALL_STATE(310)] = 8088,
  [SMALL_STATE(311)] = 8096,
  [SMALL_STATE(312)] = 8104,
  [SMALL_STATE(313)] = 8112,
  [SMALL_STATE(314)] = 8120,
  [SMALL_STATE(315)] = 8128,
  [SMALL_STATE(316)] = 8136,
  [SMALL_STATE(317)] = 8144,
  [SMALL_STATE(318)] = 8152,
  [SMALL_STATE(319)] = 8160,
  [SMALL_STATE(320)] = 8168,
  [SMALL_STATE(321)] = 8176,
  [SMALL_STATE(322)] = 8184,
  [SMALL_STATE(323)] = 8192,
  [SMALL_STATE(324)] = 8200,
  [SMALL_STATE(325)] = 8208,
  [SMALL_STATE(326)] = 8216,
  [SMALL_STATE(327)] = 8224,
  [SMALL_STATE(328)] = 8232,
  [SMALL_STATE(329)] = 8240,
  [SMALL_STATE(330)] = 8248,
  [SMALL_STATE(331)] = 8256,
  [SMALL_STATE(332)] = 8264,
  [SMALL_STATE(333)] = 8272,
  [SMALL_STATE(334)] = 8280,
  [SMALL_STATE(335)] = 8288,
  [SMALL_STATE(336)] = 8296,
  [SMALL_STATE(337)] = 8304,
  [SMALL_STATE(338)] = 8312,
  [SMALL_STATE(339)] = 8320,
  [SMALL_STATE(340)] = 8328,
  [SMALL_STATE(341)] = 8336,
  [SMALL_STATE(342)] = 8344,
  [SMALL_STATE(343)] = 8352,
  [SMALL_STATE(344)] = 8360,
  [SMALL_STATE(345)] = 8368,
  [SMALL_STATE(346)] = 8376,
  [SMALL_STATE(347)] = 8384,
  [SMALL_STATE(348)] = 8392,
  [SMALL_STATE(349)] = 8400,
  [SMALL_STATE(350)] = 8408,
  [SMALL_STATE(351)] = 8416,
  [SMALL_STATE(352)] = 8424,
  [SMALL_STATE(353)] = 8432,
  [SMALL_STATE(354)] = 8440,
  [SMALL_STATE(355)] = 8448,
  [SMALL_STATE(356)] = 8456,
  [SMALL_STATE(357)] = 8464,
  [SMALL_STATE(358)] = 8472,
  [SMALL_STATE(359)] = 8479,
  [SMALL_STATE(360)] = 8486,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(247),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(303),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(301),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(199),
  [17] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_body, 2),
  [19] = {.entry = {.count = 1, .reusable = false}}, SHIFT(3),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(189),
  [23] = {.entry = {.count = 1, .reusable = false}}, SHIFT(55),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [27] = {.entry = {.count = 1, .reusable = false}}, SHIFT(115),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(280),
  [31] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [33] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [35] = {.entry = {.count = 1, .reusable = true}}, SHIFT(278),
  [37] = {.entry = {.count = 1, .reusable = true}}, SHIFT(179),
  [39] = {.entry = {.count = 1, .reusable = false}}, SHIFT(198),
  [41] = {.entry = {.count = 1, .reusable = false}}, SHIFT(180),
  [43] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [45] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [47] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [49] = {.entry = {.count = 1, .reusable = true}}, SHIFT(263),
  [51] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [53] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2),
  [55] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(3),
  [58] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(189),
  [61] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(55),
  [64] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(55),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(115),
  [70] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(280),
  [73] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(14),
  [76] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(21),
  [79] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(278),
  [82] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(179),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(198),
  [88] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(180),
  [91] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(31),
  [94] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(47),
  [97] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(28),
  [100] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(263),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(75),
  [106] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(199),
  [109] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_body_repeat1, 2), SHIFT_REPEAT(125),
  [112] = {.entry = {.count = 1, .reusable = false}}, SHIFT(2),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1),
  [116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(55),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(55),
  [126] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(115),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(280),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(14),
  [135] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(21),
  [138] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(278),
  [141] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(179),
  [144] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(198),
  [147] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(180),
  [150] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(31),
  [153] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(47),
  [156] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(28),
  [159] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2),
  [161] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2),
  [163] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(55),
  [166] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(55),
  [169] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(115),
  [172] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(280),
  [175] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(14),
  [178] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(21),
  [181] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(278),
  [184] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(179),
  [187] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(198),
  [190] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(180),
  [193] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(31),
  [196] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(47),
  [199] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(28),
  [202] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(48),
  [205] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(44),
  [208] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(48),
  [211] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 1), SHIFT(44),
  [214] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [216] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_tune_header_repeat1, 2),
  [218] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(247),
  [221] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(303),
  [224] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(301),
  [227] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(75),
  [230] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_tune_header_repeat1, 2), SHIFT_REPEAT(199),
  [233] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header, 1),
  [235] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header, 1),
  [237] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_tune_header, 1), SHIFT(247),
  [240] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__music_content, 1),
  [242] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__music_content, 1),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [246] = {.entry = {.count = 1, .reusable = false}}, SHIFT(124),
  [248] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2),
  [252] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(124),
  [255] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(280),
  [258] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(14),
  [261] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(21),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(179),
  [267] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(198),
  [270] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(180),
  [273] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 2),
  [275] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 2),
  [277] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 1),
  [279] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 1),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [283] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 3),
  [285] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 3),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [289] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [291] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__pitch_repeat1, 2),
  [293] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(16),
  [296] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [298] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_tune_header_info_line, 3, .production_id = 1),
  [300] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__pitch, 2),
  [302] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__pitch, 2),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [306] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 1),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(180),
  [310] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(358),
  [316] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [318] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [322] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [324] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [326] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2),
  [328] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat2, 2),
  [330] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2), SHIFT_REPEAT(77),
  [333] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [335] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 4),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [339] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 3),
  [341] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 3),
  [343] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [345] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 5),
  [347] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 5),
  [349] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [351] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 4),
  [353] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 4),
  [355] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [357] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_bar_line, 1),
  [359] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_bar_line, 1),
  [361] = {.entry = {.count = 1, .reusable = false}}, SHIFT(298),
  [363] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [365] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [367] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 2),
  [369] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [371] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [373] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 3),
  [375] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [377] = {.entry = {.count = 1, .reusable = false}}, SHIFT(297),
  [379] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [381] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [383] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 1),
  [385] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [387] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 6),
  [389] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 6),
  [391] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [393] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__chord_cstrct, 7),
  [395] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__chord_cstrct, 7),
  [397] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [399] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 5),
  [401] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 2),
  [403] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bar, 2),
  [405] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 4),
  [407] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 4),
  [409] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 2),
  [411] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 2),
  [413] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 2),
  [415] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 2),
  [417] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_bar, 1),
  [419] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_bar, 1),
  [421] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Nth_ending, 3),
  [423] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Nth_ending, 3),
  [425] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 4),
  [427] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 4),
  [429] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [431] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [433] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 1),
  [435] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 1),
  [437] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 1), REDUCE(aux_sym_bar_repeat1, 1),
  [440] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__MUSIC_CODE_repeat1, 1), REDUCE(aux_sym_bar_repeat1, 1),
  [443] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TEXTLINE, 2),
  [445] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_TEXTLINE, 2),
  [447] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__MUSIC_CODE, 2),
  [449] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym__MUSIC_CODE, 2),
  [451] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_stylesheet_directives, 2),
  [453] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_stylesheet_directives, 2),
  [455] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_info_line, 4, .production_id = 1),
  [457] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_body_info_line, 4, .production_id = 1),
  [459] = {.entry = {.count = 1, .reusable = false}}, SHIFT(62),
  [461] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [463] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(62),
  [466] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(62),
  [469] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(115),
  [472] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(280),
  [475] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(14),
  [478] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(21),
  [481] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(278),
  [484] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(179),
  [487] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(198),
  [490] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2), SHIFT_REPEAT(180),
  [493] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_bar_repeat1, 2),
  [495] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_bar_repeat1, 2),
  [497] = {.entry = {.count = 1, .reusable = false}}, SHIFT(172),
  [499] = {.entry = {.count = 1, .reusable = true}}, SHIFT(172),
  [501] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [503] = {.entry = {.count = 1, .reusable = true}}, SHIFT(275),
  [505] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [507] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [509] = {.entry = {.count = 1, .reusable = true}}, SHIFT(276),
  [511] = {.entry = {.count = 1, .reusable = false}}, SHIFT(173),
  [513] = {.entry = {.count = 1, .reusable = true}}, SHIFT(173),
  [515] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [517] = {.entry = {.count = 1, .reusable = false}}, SHIFT(119),
  [519] = {.entry = {.count = 1, .reusable = true}}, SHIFT(198),
  [521] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(119),
  [524] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(275),
  [527] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(73),
  [530] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(82),
  [533] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(198),
  [536] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(180),
  [539] = {.entry = {.count = 1, .reusable = false}}, SHIFT(69),
  [541] = {.entry = {.count = 1, .reusable = false}}, SHIFT(196),
  [543] = {.entry = {.count = 1, .reusable = false}}, SHIFT(85),
  [545] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [547] = {.entry = {.count = 1, .reusable = false}}, SHIFT(83),
  [549] = {.entry = {.count = 1, .reusable = false}}, SHIFT(282),
  [551] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol_line, 2),
  [553] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(69),
  [556] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(196),
  [559] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(85),
  [562] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(121),
  [565] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(83),
  [568] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(282),
  [571] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2),
  [573] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [575] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__pitch_repeat1, 2), SHIFT_REPEAT(71),
  [578] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [580] = {.entry = {.count = 1, .reusable = true}}, SHIFT(70),
  [582] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [584] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [586] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [588] = {.entry = {.count = 1, .reusable = true}}, SHIFT(282),
  [590] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [592] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [594] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(253),
  [597] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [599] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [601] = {.entry = {.count = 1, .reusable = true}}, SHIFT(253),
  [603] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 2),
  [605] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 2),
  [607] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 3),
  [609] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 3),
  [611] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [613] = {.entry = {.count = 1, .reusable = false}}, SHIFT(268),
  [615] = {.entry = {.count = 1, .reusable = false}}, SHIFT(133),
  [617] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [619] = {.entry = {.count = 1, .reusable = false}}, SHIFT(269),
  [621] = {.entry = {.count = 1, .reusable = false}}, SHIFT(118),
  [623] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [625] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [627] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [629] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(143),
  [632] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(142),
  [635] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(144),
  [638] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(287),
  [641] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [643] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [645] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [647] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [649] = {.entry = {.count = 1, .reusable = false}}, SHIFT(143),
  [651] = {.entry = {.count = 1, .reusable = false}}, SHIFT(142),
  [653] = {.entry = {.count = 1, .reusable = false}}, SHIFT(144),
  [655] = {.entry = {.count = 1, .reusable = false}}, SHIFT(287),
  [657] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2),
  [659] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [661] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [663] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [665] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [667] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2),
  [669] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(280),
  [672] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(14),
  [675] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(21),
  [678] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(179),
  [681] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym__chord_cstrct_repeat1, 2), SHIFT_REPEAT(180),
  [684] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [686] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [688] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [690] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [692] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [694] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [696] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [698] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [700] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 6),
  [702] = {.entry = {.count = 1, .reusable = true}}, SHIFT(150),
  [704] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [706] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [708] = {.entry = {.count = 1, .reusable = false}}, SHIFT(155),
  [710] = {.entry = {.count = 1, .reusable = false}}, SHIFT(249),
  [712] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 59),
  [714] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 4),
  [716] = {.entry = {.count = 1, .reusable = true}}, SHIFT(187),
  [718] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2),
  [720] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(150),
  [723] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(149),
  [726] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(150),
  [729] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(155),
  [732] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat1, 2), SHIFT_REPEAT(249),
  [735] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
  [737] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [739] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 5),
  [741] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 3),
  [743] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [745] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(179),
  [748] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_verse_number, 2),
  [750] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_HYPHEN, 1),
  [752] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_text, 1),
  [754] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_lyric_syllable, 1),
  [756] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [758] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [760] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_HYPHEN, 1),
  [762] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_text, 1),
  [764] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_verse_number, 2),
  [766] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [768] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2), SHIFT_REPEAT(76),
  [771] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_syllable, 1),
  [773] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [775] = {.entry = {.count = 1, .reusable = true}}, SHIFT(138),
  [777] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [779] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [781] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [783] = {.entry = {.count = 1, .reusable = true}}, SHIFT(153),
  [785] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 2),
  [787] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [789] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [791] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [793] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [795] = {.entry = {.count = 1, .reusable = false}}, SHIFT(177),
  [797] = {.entry = {.count = 1, .reusable = true}}, SHIFT(177),
  [799] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [801] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(280),
  [804] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(14),
  [807] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [809] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [811] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [813] = {.entry = {.count = 1, .reusable = false}}, SHIFT(188),
  [815] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [817] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2),
  [819] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_lyric_section_repeat1, 2), SHIFT_REPEAT(358),
  [822] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_section, 1),
  [824] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2), SHIFT_REPEAT(207),
  [827] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_abc_version_repeat1, 2),
  [829] = {.entry = {.count = 1, .reusable = false}}, SHIFT(207),
  [831] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 2),
  [833] = {.entry = {.count = 1, .reusable = false}}, SHIFT(135),
  [835] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_words_line, 4),
  [837] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_words_line, 3),
  [839] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [841] = {.entry = {.count = 1, .reusable = false}}, SHIFT(359),
  [843] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [845] = {.entry = {.count = 1, .reusable = true}}, SHIFT(206),
  [847] = {.entry = {.count = 1, .reusable = true}}, SHIFT(203),
  [849] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_abc_version, 3),
  [851] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_words_line_repeat2, 2), SHIFT_REPEAT(135),
  [854] = {.entry = {.count = 1, .reusable = true}}, SHIFT(178),
  [856] = {.entry = {.count = 1, .reusable = true}}, SHIFT(200),
  [858] = {.entry = {.count = 1, .reusable = true}}, SHIFT(195),
  [860] = {.entry = {.count = 1, .reusable = true}}, SHIFT(197),
  [862] = {.entry = {.count = 1, .reusable = true}}, SHIFT(170),
  [864] = {.entry = {.count = 1, .reusable = true}}, SHIFT(194),
  [866] = {.entry = {.count = 1, .reusable = true}}, SHIFT(181),
  [868] = {.entry = {.count = 1, .reusable = true}}, SHIFT(188),
  [870] = {.entry = {.count = 1, .reusable = true}}, SHIFT(281),
  [872] = {.entry = {.count = 1, .reusable = true}}, SHIFT(251),
  [874] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_lyric_line, 2),
  [876] = {.entry = {.count = 1, .reusable = true}}, SHIFT(128),
  [878] = {.entry = {.count = 1, .reusable = true}}, SHIFT(205),
  [880] = {.entry = {.count = 1, .reusable = true}}, SHIFT(204),
  [882] = {.entry = {.count = 1, .reusable = true}}, SHIFT(283),
  [884] = {.entry = {.count = 1, .reusable = true}}, SHIFT(210),
  [886] = {.entry = {.count = 1, .reusable = true}}, SHIFT(211),
  [888] = {.entry = {.count = 1, .reusable = true}}, SHIFT(212),
  [890] = {.entry = {.count = 1, .reusable = true}}, SHIFT(213),
  [892] = {.entry = {.count = 1, .reusable = true}}, SHIFT(214),
  [894] = {.entry = {.count = 1, .reusable = true}}, SHIFT(215),
  [896] = {.entry = {.count = 1, .reusable = true}}, SHIFT(216),
  [898] = {.entry = {.count = 1, .reusable = true}}, SHIFT(217),
  [900] = {.entry = {.count = 1, .reusable = true}}, SHIFT(218),
  [902] = {.entry = {.count = 1, .reusable = true}}, SHIFT(219),
  [904] = {.entry = {.count = 1, .reusable = true}}, SHIFT(220),
  [906] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [908] = {.entry = {.count = 1, .reusable = true}}, SHIFT(222),
  [910] = {.entry = {.count = 1, .reusable = true}}, SHIFT(223),
  [912] = {.entry = {.count = 1, .reusable = true}}, SHIFT(224),
  [914] = {.entry = {.count = 1, .reusable = true}}, SHIFT(225),
  [916] = {.entry = {.count = 1, .reusable = true}}, SHIFT(226),
  [918] = {.entry = {.count = 1, .reusable = true}}, SHIFT(227),
  [920] = {.entry = {.count = 1, .reusable = true}}, SHIFT(228),
  [922] = {.entry = {.count = 1, .reusable = true}}, SHIFT(229),
  [924] = {.entry = {.count = 1, .reusable = true}}, SHIFT(258),
  [926] = {.entry = {.count = 1, .reusable = true}}, SHIFT(244),
  [928] = {.entry = {.count = 1, .reusable = true}}, SHIFT(221),
  [930] = {.entry = {.count = 1, .reusable = true}}, SHIFT(231),
  [932] = {.entry = {.count = 1, .reusable = true}}, SHIFT(232),
  [934] = {.entry = {.count = 1, .reusable = true}}, SHIFT(233),
  [936] = {.entry = {.count = 1, .reusable = true}}, SHIFT(234),
  [938] = {.entry = {.count = 1, .reusable = true}}, SHIFT(235),
  [940] = {.entry = {.count = 1, .reusable = true}}, SHIFT(236),
  [942] = {.entry = {.count = 1, .reusable = true}}, SHIFT(237),
  [944] = {.entry = {.count = 1, .reusable = true}}, SHIFT(238),
  [946] = {.entry = {.count = 1, .reusable = true}}, SHIFT(239),
  [948] = {.entry = {.count = 1, .reusable = true}}, SHIFT(240),
  [950] = {.entry = {.count = 1, .reusable = true}}, SHIFT(241),
  [952] = {.entry = {.count = 1, .reusable = true}}, SHIFT(242),
  [954] = {.entry = {.count = 1, .reusable = true}}, SHIFT(243),
  [956] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [958] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [960] = {.entry = {.count = 1, .reusable = false}}, SHIFT(292),
  [962] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [964] = {.entry = {.count = 1, .reusable = true}}, SHIFT(151),
  [966] = {.entry = {.count = 1, .reusable = true}}, SHIFT(246),
  [968] = {.entry = {.count = 1, .reusable = true}}, SHIFT(252),
  [970] = {.entry = {.count = 1, .reusable = true}}, SHIFT(277),
  [972] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [974] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_user_defined, 4),
  [976] = {.entry = {.count = 1, .reusable = true}}, SHIFT(230),
  [978] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [980] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [982] = {.entry = {.count = 1, .reusable = true}}, SHIFT(302),
  [984] = {.entry = {.count = 1, .reusable = true}}, SHIFT(284),
  [986] = {.entry = {.count = 1, .reusable = true}}, SHIFT(259),
  [988] = {.entry = {.count = 1, .reusable = true}}, SHIFT(260),
  [990] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tune, 3),
  [992] = {.entry = {.count = 1, .reusable = false}}, SHIFT(250),
  [994] = {.entry = {.count = 1, .reusable = true}}, SHIFT(261),
  [996] = {.entry = {.count = 1, .reusable = true}}, SHIFT(264),
  [998] = {.entry = {.count = 1, .reusable = true}}, SHIFT(265),
  [1000] = {.entry = {.count = 1, .reusable = true}}, SHIFT(255),
  [1002] = {.entry = {.count = 1, .reusable = true}}, SHIFT(256),
  [1004] = {.entry = {.count = 1, .reusable = true}}, SHIFT(257),
  [1006] = {.entry = {.count = 1, .reusable = true}}, SHIFT(266),
  [1008] = {.entry = {.count = 1, .reusable = true}}, SHIFT(270),
  [1010] = {.entry = {.count = 1, .reusable = true}}, SHIFT(271),
  [1012] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [1014] = {.entry = {.count = 1, .reusable = true}}, SHIFT(168),
  [1016] = {.entry = {.count = 1, .reusable = true}}, SHIFT(357),
  [1018] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [1020] = {.entry = {.count = 1, .reusable = true}}, SHIFT(273),
  [1022] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [1024] = {.entry = {.count = 1, .reusable = true}}, SHIFT(201),
  [1026] = {.entry = {.count = 1, .reusable = true}}, SHIFT(267),
  [1028] = {.entry = {.count = 1, .reusable = true}}, SHIFT(279),
  [1030] = {.entry = {.count = 1, .reusable = true}}, SHIFT(209),
  [1032] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [1034] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [1036] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [1038] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_reference_number, 2),
  [1040] = {.entry = {.count = 1, .reusable = true}}, SHIFT(174),
  [1042] = {.entry = {.count = 1, .reusable = true}}, SHIFT(208),
  [1044] = {.entry = {.count = 1, .reusable = true}}, SHIFT(171),
  [1046] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [1048] = {.entry = {.count = 1, .reusable = true}}, SHIFT(272),
  [1050] = {.entry = {.count = 1, .reusable = true}}, SHIFT(290),
  [1052] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [1054] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [1056] = {.entry = {.count = 1, .reusable = true}}, SHIFT(285),
  [1058] = {.entry = {.count = 1, .reusable = true}}, SHIFT(286),
  [1060] = {.entry = {.count = 1, .reusable = true}}, SHIFT(294),
  [1062] = {.entry = {.count = 1, .reusable = true}}, SHIFT(299),
  [1064] = {.entry = {.count = 1, .reusable = true}}, SHIFT(288),
  [1066] = {.entry = {.count = 1, .reusable = true}}, SHIFT(300),
  [1068] = {.entry = {.count = 1, .reusable = true}}, SHIFT(185),
  [1070] = {.entry = {.count = 1, .reusable = true}}, SHIFT(293),
  [1072] = {.entry = {.count = 1, .reusable = true}}, SHIFT(304),
  [1074] = {.entry = {.count = 1, .reusable = true}}, SHIFT(305),
  [1076] = {.entry = {.count = 1, .reusable = true}}, SHIFT(306),
  [1078] = {.entry = {.count = 1, .reusable = true}}, SHIFT(307),
  [1080] = {.entry = {.count = 1, .reusable = true}}, SHIFT(308),
  [1082] = {.entry = {.count = 1, .reusable = true}}, SHIFT(309),
  [1084] = {.entry = {.count = 1, .reusable = true}}, SHIFT(310),
  [1086] = {.entry = {.count = 1, .reusable = true}}, SHIFT(311),
  [1088] = {.entry = {.count = 1, .reusable = true}}, SHIFT(312),
  [1090] = {.entry = {.count = 1, .reusable = true}}, SHIFT(313),
  [1092] = {.entry = {.count = 1, .reusable = true}}, SHIFT(314),
  [1094] = {.entry = {.count = 1, .reusable = true}}, SHIFT(315),
  [1096] = {.entry = {.count = 1, .reusable = true}}, SHIFT(316),
  [1098] = {.entry = {.count = 1, .reusable = true}}, SHIFT(317),
  [1100] = {.entry = {.count = 1, .reusable = true}}, SHIFT(318),
  [1102] = {.entry = {.count = 1, .reusable = true}}, SHIFT(319),
  [1104] = {.entry = {.count = 1, .reusable = true}}, SHIFT(320),
  [1106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(321),
  [1108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(322),
  [1110] = {.entry = {.count = 1, .reusable = true}}, SHIFT(323),
  [1112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(324),
  [1114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(325),
  [1116] = {.entry = {.count = 1, .reusable = true}}, SHIFT(326),
  [1118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(327),
  [1120] = {.entry = {.count = 1, .reusable = true}}, SHIFT(328),
  [1122] = {.entry = {.count = 1, .reusable = true}}, SHIFT(329),
  [1124] = {.entry = {.count = 1, .reusable = true}}, SHIFT(330),
  [1126] = {.entry = {.count = 1, .reusable = true}}, SHIFT(331),
  [1128] = {.entry = {.count = 1, .reusable = true}}, SHIFT(332),
  [1130] = {.entry = {.count = 1, .reusable = true}}, SHIFT(333),
  [1132] = {.entry = {.count = 1, .reusable = true}}, SHIFT(334),
  [1134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(335),
  [1136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(336),
  [1138] = {.entry = {.count = 1, .reusable = true}}, SHIFT(337),
  [1140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(338),
  [1142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(339),
  [1144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(340),
  [1146] = {.entry = {.count = 1, .reusable = true}}, SHIFT(341),
  [1148] = {.entry = {.count = 1, .reusable = true}}, SHIFT(342),
  [1150] = {.entry = {.count = 1, .reusable = true}}, SHIFT(343),
  [1152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(344),
  [1154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(345),
  [1156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(346),
  [1158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(347),
  [1160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(348),
  [1162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(349),
  [1164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(350),
  [1166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(351),
  [1168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(352),
  [1170] = {.entry = {.count = 1, .reusable = true}}, SHIFT(353),
  [1172] = {.entry = {.count = 1, .reusable = true}}, SHIFT(354),
  [1174] = {.entry = {.count = 1, .reusable = true}}, SHIFT(355),
  [1176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(356),
  [1178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(202),
  [1180] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TEXT, 1),
  [1182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
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
