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
#define STATE_COUNT 128
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 145
#define ALIAS_COUNT 0
#define TOKEN_COUNT 119
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 59
#define PRODUCTION_ID_COUNT 1

enum {
  sym__space = 1,
  sym_NEWLINE = 2,
  aux_sym_COMMENTLINE_token1 = 3,
  anon_sym_BSLASH = 4,
  anon_sym_DOLLAR = 5,
  anon_sym_BQUOTE = 6,
  sym_slur_open = 7,
  sym_slur_close = 8,
  aux_sym_note_construct_token1 = 9,
  anon_sym_LBRACK = 10,
  anon_sym_RBRACK = 11,
  sym_alteration = 12,
  sym_note_letter = 13,
  sym_octave = 14,
  aux_sym_multimeasure_rest_token1 = 15,
  sym_rhythm = 16,
  aux_sym_grace_note_token1 = 17,
  aux_sym_grace_note_token2 = 18,
  aux_sym_chord_symbol_token1 = 19,
  aux_sym_chord_symbol_token2 = 20,
  sym_annotation = 21,
  sym_tuplet_marker = 22,
  sym_chord_type = 23,
  aux_sym_nth_ending_number_token1 = 24,
  anon_sym_COMMA = 25,
  anon_sym_DASH = 26,
  sym_bar_line = 27,
  sym_close_thin_thick_double_bar_line = 28,
  sym_thin_double_bar_line = 29,
  sym_open_thick_thin_double_bar_line = 30,
  sym_start_of_repeated_section = 31,
  sym_end_of_repeated_section = 32,
  sym_start_end_of_two_repeated_sections = 33,
  aux_sym_first_repeat_bar_token1 = 34,
  aux_sym_first_repeat_bar_token2 = 35,
  aux_sym_lyric_syllable_token1 = 36,
  aux_sym_verse_number_token1 = 37,
  anon_sym_DOT = 38,
  aux_sym_lyric_text_token2 = 39,
  aux_sym_lyric_text_token3 = 40,
  anon_sym_BANGtrill_BANG = 41,
  anon_sym_BANGtrill_LPAREN_BANG = 42,
  anon_sym_BANGtrill_RPAREN_BANG = 43,
  anon_sym_BANGlowermordent_BANG = 44,
  anon_sym_BANGuppermordent_BANG = 45,
  anon_sym_BANGmordent_BANG = 46,
  anon_sym_BANGpralltriller_BANG = 47,
  anon_sym_BANGroll_BANG = 48,
  anon_sym_BANGturn_BANG = 49,
  anon_sym_BANGturnx_BANG = 50,
  anon_sym_BANGinvertedturn_BANG = 51,
  anon_sym_BANGinvertedturnx_BANG = 52,
  anon_sym_BANGarpeggio_BANG = 53,
  anon_sym_BANG_GT_BANG = 54,
  anon_sym_BANGaccent_BANG = 55,
  anon_sym_BANGemphasis_BANG = 56,
  anon_sym_BANGfermata_BANG = 57,
  anon_sym_BANGinvertedfermata_BANG = 58,
  anon_sym_BANGtenuto_BANG = 59,
  anon_sym_BANG0_BANG_DASH_BANG5_BANG = 60,
  anon_sym_BANG_PLUS_BANG = 61,
  anon_sym_BANGplus_BANG = 62,
  anon_sym_BANGsnap_BANG = 63,
  anon_sym_BANGslide_BANG = 64,
  anon_sym_BANGwedge_BANG = 65,
  anon_sym_BANGupbow_BANG = 66,
  anon_sym_BANGdownbow_BANG = 67,
  anon_sym_BANGopen_BANG = 68,
  anon_sym_BANGthumb_BANG = 69,
  anon_sym_BANGbreath_BANG = 70,
  anon_sym_BANGpppp_BANG = 71,
  anon_sym_BANGppp_BANG = 72,
  anon_sym_BANGpp_BANG = 73,
  anon_sym_BANGp_BANG = 74,
  anon_sym_BANGmp_BANG = 75,
  anon_sym_BANGmf_BANG = 76,
  anon_sym_BANGf_BANG = 77,
  anon_sym_BANGff_BANG = 78,
  anon_sym_BANGfff_BANG = 79,
  anon_sym_BANGffff_BANG = 80,
  anon_sym_BANGsfz_BANG = 81,
  anon_sym_BANGcrescendo_LPAREN_BANG = 82,
  anon_sym_BANG_LT_LPAREN_BANG = 83,
  anon_sym_BANGcrescendo_RPAREN_BANG = 84,
  anon_sym_BANG_LT_RPAREN_BANG = 85,
  anon_sym_BANGdiminuendo_LPAREN_BANG = 86,
  anon_sym_BANG_GT_LPAREN_BANG = 87,
  anon_sym_BANGdiminuendo_RPAREN_BANG = 88,
  anon_sym_BANG_GT_RPAREN_BANG = 89,
  anon_sym_BANGsegno_BANG = 90,
  anon_sym_BANGcoda_BANG = 91,
  anon_sym_BANGD_DOTS_DOT_BANG = 92,
  anon_sym_BANGD_DOTC_DOT_BANG = 93,
  anon_sym_BANGdacoda_BANG = 94,
  anon_sym_BANGdacapo_BANG = 95,
  anon_sym_BANGfine_BANG = 96,
  anon_sym_BANGshortphrase_BANG = 97,
  anon_sym_BANGmediumphrase_BANG = 98,
  anon_sym_BANGlongphrase_BANG = 99,
  anon_sym_P_COLON = 100,
  aux_sym_section_name_token1 = 101,
  sym_TEXT = 102,
  anon_sym_PERCENTabc_DASH = 103,
  anon_sym_K_COLON = 104,
  anon_sym_m_COLON = 105,
  anon_sym_M_COLON = 106,
  anon_sym_N_COLON = 107,
  anon_sym_r_COLON = 108,
  anon_sym_R_COLON = 109,
  anon_sym_s_COLON = 110,
  anon_sym_Q_COLON = 111,
  anon_sym_L_COLON = 112,
  anon_sym_U_COLON = 113,
  aux_sym_user_defined_token1 = 114,
  aux_sym_user_defined_token2 = 115,
  anon_sym_EQ = 116,
  anon_sym_V_COLON = 117,
  aux_sym_words_line_token1 = 118,
  sym_source_file = 119,
  sym_chord_symbol_note = 120,
  sym_chord_symbol = 121,
  sym_generic_bar_line = 122,
  sym_first_repeat_bar = 123,
  sym_second_repeat_bar = 124,
  sym_symbol = 125,
  sym_part_line_content = 126,
  sym_parts_line = 127,
  sym_section_name = 128,
  sym_sections_group = 129,
  sym_body_inline_info = 130,
  sym_key = 131,
  sym_macros = 132,
  sym_meter = 133,
  sym_notes = 134,
  sym_remark = 135,
  sym_rhythm_line = 136,
  sym_symbol_line = 137,
  sym_tempo = 138,
  sym_unit_note_length = 139,
  sym_user_defined = 140,
  sym_voice = 141,
  aux_sym_part_line_content_repeat1 = 142,
  aux_sym_part_line_content_repeat2 = 143,
  aux_sym_symbol_line_repeat1 = 144,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [sym_NEWLINE] = "NEWLINE",
  [aux_sym_COMMENTLINE_token1] = "COMMENTLINE_token1",
  [anon_sym_BSLASH] = "\\",
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
  [aux_sym_multimeasure_rest_token1] = "multimeasure_rest_token1",
  [sym_rhythm] = "rhythm",
  [aux_sym_grace_note_token1] = "grace_note_token1",
  [aux_sym_grace_note_token2] = "grace_note_token2",
  [aux_sym_chord_symbol_token1] = "chord_symbol_token1",
  [aux_sym_chord_symbol_token2] = "chord_symbol_token2",
  [sym_annotation] = "annotation",
  [sym_tuplet_marker] = "tuplet_marker",
  [sym_chord_type] = "chord_type",
  [aux_sym_nth_ending_number_token1] = "nth_ending_number_token1",
  [anon_sym_COMMA] = ",",
  [anon_sym_DASH] = "-",
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
  [aux_sym_lyric_text_token2] = "lyric_text_token2",
  [aux_sym_lyric_text_token3] = "lyric_text_token3",
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
  [anon_sym_P_COLON] = "P:",
  [aux_sym_section_name_token1] = "section_name_token1",
  [sym_TEXT] = "TEXT",
  [anon_sym_PERCENTabc_DASH] = "%abc-",
  [anon_sym_K_COLON] = "K:",
  [anon_sym_m_COLON] = "m:",
  [anon_sym_M_COLON] = "M:",
  [anon_sym_N_COLON] = "N:",
  [anon_sym_r_COLON] = "r:",
  [anon_sym_R_COLON] = "R:",
  [anon_sym_s_COLON] = "s:",
  [anon_sym_Q_COLON] = "Q:",
  [anon_sym_L_COLON] = "L:",
  [anon_sym_U_COLON] = "U:",
  [aux_sym_user_defined_token1] = "user_defined_token1",
  [aux_sym_user_defined_token2] = "user_defined_token2",
  [anon_sym_EQ] = "=",
  [anon_sym_V_COLON] = "V:",
  [aux_sym_words_line_token1] = "words_line_token1",
  [sym_source_file] = "source_file",
  [sym_chord_symbol_note] = "chord_symbol_note",
  [sym_chord_symbol] = "chord_symbol",
  [sym_generic_bar_line] = "generic_bar_line",
  [sym_first_repeat_bar] = "first_repeat_bar",
  [sym_second_repeat_bar] = "second_repeat_bar",
  [sym_symbol] = "symbol",
  [sym_part_line_content] = "part_line_content",
  [sym_parts_line] = "parts_line",
  [sym_section_name] = "section_name",
  [sym_sections_group] = "sections_group",
  [sym_body_inline_info] = "body_inline_info",
  [sym_key] = "key",
  [sym_macros] = "macros",
  [sym_meter] = "meter",
  [sym_notes] = "notes",
  [sym_remark] = "remark",
  [sym_rhythm_line] = "rhythm_line",
  [sym_symbol_line] = "symbol_line",
  [sym_tempo] = "tempo",
  [sym_unit_note_length] = "unit_note_length",
  [sym_user_defined] = "user_defined",
  [sym_voice] = "voice",
  [aux_sym_part_line_content_repeat1] = "part_line_content_repeat1",
  [aux_sym_part_line_content_repeat2] = "part_line_content_repeat2",
  [aux_sym_symbol_line_repeat1] = "symbol_line_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__space] = sym__space,
  [sym_NEWLINE] = sym_NEWLINE,
  [aux_sym_COMMENTLINE_token1] = aux_sym_COMMENTLINE_token1,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
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
  [aux_sym_multimeasure_rest_token1] = aux_sym_multimeasure_rest_token1,
  [sym_rhythm] = sym_rhythm,
  [aux_sym_grace_note_token1] = aux_sym_grace_note_token1,
  [aux_sym_grace_note_token2] = aux_sym_grace_note_token2,
  [aux_sym_chord_symbol_token1] = aux_sym_chord_symbol_token1,
  [aux_sym_chord_symbol_token2] = aux_sym_chord_symbol_token2,
  [sym_annotation] = sym_annotation,
  [sym_tuplet_marker] = sym_tuplet_marker,
  [sym_chord_type] = sym_chord_type,
  [aux_sym_nth_ending_number_token1] = aux_sym_nth_ending_number_token1,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_DASH] = anon_sym_DASH,
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
  [aux_sym_lyric_text_token2] = aux_sym_lyric_text_token2,
  [aux_sym_lyric_text_token3] = aux_sym_lyric_text_token3,
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
  [anon_sym_P_COLON] = anon_sym_P_COLON,
  [aux_sym_section_name_token1] = aux_sym_section_name_token1,
  [sym_TEXT] = sym_TEXT,
  [anon_sym_PERCENTabc_DASH] = anon_sym_PERCENTabc_DASH,
  [anon_sym_K_COLON] = anon_sym_K_COLON,
  [anon_sym_m_COLON] = anon_sym_m_COLON,
  [anon_sym_M_COLON] = anon_sym_M_COLON,
  [anon_sym_N_COLON] = anon_sym_N_COLON,
  [anon_sym_r_COLON] = anon_sym_r_COLON,
  [anon_sym_R_COLON] = anon_sym_R_COLON,
  [anon_sym_s_COLON] = anon_sym_s_COLON,
  [anon_sym_Q_COLON] = anon_sym_Q_COLON,
  [anon_sym_L_COLON] = anon_sym_L_COLON,
  [anon_sym_U_COLON] = anon_sym_U_COLON,
  [aux_sym_user_defined_token1] = aux_sym_user_defined_token1,
  [aux_sym_user_defined_token2] = aux_sym_user_defined_token2,
  [anon_sym_EQ] = anon_sym_EQ,
  [anon_sym_V_COLON] = anon_sym_V_COLON,
  [aux_sym_words_line_token1] = aux_sym_words_line_token1,
  [sym_source_file] = sym_source_file,
  [sym_chord_symbol_note] = sym_chord_symbol_note,
  [sym_chord_symbol] = sym_chord_symbol,
  [sym_generic_bar_line] = sym_generic_bar_line,
  [sym_first_repeat_bar] = sym_first_repeat_bar,
  [sym_second_repeat_bar] = sym_second_repeat_bar,
  [sym_symbol] = sym_symbol,
  [sym_part_line_content] = sym_part_line_content,
  [sym_parts_line] = sym_parts_line,
  [sym_section_name] = sym_section_name,
  [sym_sections_group] = sym_sections_group,
  [sym_body_inline_info] = sym_body_inline_info,
  [sym_key] = sym_key,
  [sym_macros] = sym_macros,
  [sym_meter] = sym_meter,
  [sym_notes] = sym_notes,
  [sym_remark] = sym_remark,
  [sym_rhythm_line] = sym_rhythm_line,
  [sym_symbol_line] = sym_symbol_line,
  [sym_tempo] = sym_tempo,
  [sym_unit_note_length] = sym_unit_note_length,
  [sym_user_defined] = sym_user_defined,
  [sym_voice] = sym_voice,
  [aux_sym_part_line_content_repeat1] = aux_sym_part_line_content_repeat1,
  [aux_sym_part_line_content_repeat2] = aux_sym_part_line_content_repeat2,
  [aux_sym_symbol_line_repeat1] = aux_sym_symbol_line_repeat1,
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
  [sym_NEWLINE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_COMMENTLINE_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_BSLASH] = {
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
  [aux_sym_nth_ending_number_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DASH] = {
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
  [aux_sym_lyric_text_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_lyric_text_token3] = {
    .visible = false,
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
  [anon_sym_P_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_section_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_TEXT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_PERCENTabc_DASH] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_K_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_m_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_M_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_N_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_r_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_R_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_s_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_Q_COLON] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_L_COLON] = {
    .visible = true,
    .named = false,
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
  [anon_sym_V_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_words_line_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_source_file] = {
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
  [sym_symbol] = {
    .visible = true,
    .named = true,
  },
  [sym_part_line_content] = {
    .visible = true,
    .named = true,
  },
  [sym_parts_line] = {
    .visible = true,
    .named = true,
  },
  [sym_section_name] = {
    .visible = true,
    .named = true,
  },
  [sym_sections_group] = {
    .visible = true,
    .named = true,
  },
  [sym_body_inline_info] = {
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
  [sym_remark] = {
    .visible = true,
    .named = true,
  },
  [sym_rhythm_line] = {
    .visible = true,
    .named = true,
  },
  [sym_symbol_line] = {
    .visible = true,
    .named = true,
  },
  [sym_tempo] = {
    .visible = true,
    .named = true,
  },
  [sym_unit_note_length] = {
    .visible = true,
    .named = true,
  },
  [sym_user_defined] = {
    .visible = true,
    .named = true,
  },
  [sym_voice] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_part_line_content_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_part_line_content_repeat2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_symbol_line_repeat1] = {
    .visible = false,
    .named = false,
  },
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
  [30] = 21,
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
  [78] = 78,
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
  [119] = 119,
  [120] = 120,
  [121] = 121,
  [122] = 122,
  [123] = 123,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (eof) ADVANCE(290);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '$') ADVANCE(298);
      if (lookahead == '%') ADVANCE(101);
      if (lookahead == '\'') ADVANCE(309);
      if (lookahead == '(') ADVANCE(300);
      if (lookahead == ')') ADVANCE(301);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead == '+') ADVANCE(81);
      if (lookahead == ',') ADVANCE(354);
      if (lookahead == '-') ADVANCE(355);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == '/') ADVANCE(313);
      if (lookahead == '0') ADVANCE(311);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(449);
      if (lookahead == '[') ADVANCE(303);
      if (lookahead == '\\') ADVANCE(297);
      if (lookahead == ']') ADVANCE(304);
      if (lookahead == '`') ADVANCE(299);
      if (lookahead == '{') ADVANCE(317);
      if (lookahead == '|') ADVANCE(356);
      if (lookahead == '}') ADVANCE(318);
      if (lookahead == '~') ADVANCE(368);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(314);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '!') ADVANCE(73);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(305);
      if (lookahead == 'K') ADVANCE(83);
      if (lookahead == 'L') ADVANCE(84);
      if (lookahead == 'M') ADVANCE(85);
      if (lookahead == 'N') ADVANCE(86);
      if (lookahead == 'P') ADVANCE(87);
      if (lookahead == 'Q') ADVANCE(88);
      if (lookahead == 'R') ADVANCE(89);
      if (lookahead == 'U') ADVANCE(90);
      if (lookahead == 'V') ADVANCE(91);
      if (lookahead == '[') ADVANCE(302);
      if (lookahead == '^') ADVANCE(306);
      if (lookahead == '_') ADVANCE(307);
      if (lookahead == 'm') ADVANCE(92);
      if (lookahead == 'r') ADVANCE(93);
      if (lookahead == 's') ADVANCE(94);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(308);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '!') ADVANCE(270);
      if (lookahead == '"') ADVANCE(320);
      if (lookahead == '*') ADVANCE(369);
      if (lookahead == ':') ADVANCE(82);
      if (lookahead == '=') ADVANCE(449);
      if (lookahead == 'H') ADVANCE(75);
      if (lookahead == '[') ADVANCE(286);
      if (lookahead == ']') ADVANCE(304);
      if (lookahead == '|') ADVANCE(356);
      if (lookahead == '\t' ||
          lookahead == '\r') ADVANCE(363);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      if (('h' <= lookahead && lookahead <= 'w')) ADVANCE(447);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '"') ADVANCE(319);
      if (lookahead == '/') ADVANCE(321);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(353);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(305);
      if (lookahead == '^') ADVANCE(306);
      if (lookahead == '_') ADVANCE(326);
      if (lookahead == 'a') ADVANCE(351);
      if (lookahead == 'd') ADVANCE(335);
      if (lookahead == 'm') ADVANCE(327);
      if (lookahead == 's') ADVANCE(352);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '.') ADVANCE(367);
      if (lookahead == ']') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(76);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(390);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(383);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(406);
      if (lookahead == 'e') ADVANCE(240);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(208);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(403);
      if (lookahead == 'l') ADVANCE(275);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(412);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(414);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(416);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(418);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(407);
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(405);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(404);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(402);
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(408);
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(401);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(410);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(422);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(421);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(420);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(409);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(425);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(397);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(391);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(400);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(377);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(392);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(378);
      if (lookahead == 'x') ADVANCE(40);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(80);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(419);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(393);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(398);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(370);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(370);
      if (lookahead == '(') ADVANCE(48);
      if (lookahead == ')') ADVANCE(49);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(379);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(395);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(394);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(384);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(399);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(424);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(423);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(388);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(371);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(372);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(389);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(396);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(386);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(375);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(382);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(385);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(411);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(413);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(428);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(415);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(417);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(426);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == 'x') ADVANCE(67);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(373);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(427);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(376);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(374);
      END_STATE();
    case 67:
      if (lookahead == '!') ADVANCE(381);
      END_STATE();
    case 68:
      if (lookahead == '!') ADVANCE(387);
      END_STATE();
    case 69:
      if (lookahead == '"') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 71:
      if (lookahead == '(') ADVANCE(56);
      if (lookahead == ')') ADVANCE(57);
      END_STATE();
    case 72:
      if (lookahead == '(') ADVANCE(59);
      if (lookahead == ')') ADVANCE(60);
      END_STATE();
    case 73:
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '<') ADVANCE(70);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == 'D') ADVANCE(77);
      if (lookahead == 'a') ADVANCE(120);
      if (lookahead == 'b') ADVANCE(238);
      if (lookahead == 'c') ADVANCE(215);
      if (lookahead == 'd') ADVANCE(103);
      if (lookahead == 'e') ADVANCE(192);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(199);
      if (lookahead == 'l') ADVANCE(216);
      if (lookahead == 'm') ADVANCE(138);
      if (lookahead == 'o') ADVANCE(232);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(217);
      if (lookahead == 's') ADVANCE(136);
      if (lookahead == 't') ADVANCE(139);
      if (lookahead == 'u') ADVANCE(229);
      if (lookahead == 'w') ADVANCE(140);
      END_STATE();
    case 74:
      if (lookahead == '-') ADVANCE(436);
      END_STATE();
    case 75:
      if (lookahead == '-') ADVANCE(100);
      END_STATE();
    case 76:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 77:
      if (lookahead == '.') ADVANCE(99);
      END_STATE();
    case 78:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 79:
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 80:
      if (lookahead == '5') ADVANCE(50);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(451);
      END_STATE();
    case 82:
      if (lookahead == ':') ADVANCE(362);
      if (lookahead == '|') ADVANCE(361);
      END_STATE();
    case 83:
      if (lookahead == ':') ADVANCE(437);
      END_STATE();
    case 84:
      if (lookahead == ':') ADVANCE(445);
      END_STATE();
    case 85:
      if (lookahead == ':') ADVANCE(439);
      END_STATE();
    case 86:
      if (lookahead == ':') ADVANCE(440);
      END_STATE();
    case 87:
      if (lookahead == ':') ADVANCE(429);
      END_STATE();
    case 88:
      if (lookahead == ':') ADVANCE(444);
      END_STATE();
    case 89:
      if (lookahead == ':') ADVANCE(442);
      END_STATE();
    case 90:
      if (lookahead == ':') ADVANCE(446);
      END_STATE();
    case 91:
      if (lookahead == ':') ADVANCE(450);
      END_STATE();
    case 92:
      if (lookahead == ':') ADVANCE(438);
      END_STATE();
    case 93:
      if (lookahead == ':') ADVANCE(441);
      END_STATE();
    case 94:
      if (lookahead == ':') ADVANCE(443);
      END_STATE();
    case 95:
      if (lookahead == ':') ADVANCE(96);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 96:
      if (lookahead == ':') ADVANCE(289);
      END_STATE();
    case 97:
      if (lookahead == ':') ADVANCE(289);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(95);
      END_STATE();
    case 98:
      if (lookahead == ':') ADVANCE(97);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 99:
      if (lookahead == 'C') ADVANCE(78);
      if (lookahead == 'S') ADVANCE(79);
      END_STATE();
    case 100:
      if (lookahead == 'W') ADVANCE(448);
      END_STATE();
    case 101:
      if (lookahead == 'a') ADVANCE(296);
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(295);
      END_STATE();
    case 102:
      if (lookahead == 'a') ADVANCE(263);
      END_STATE();
    case 103:
      if (lookahead == 'a') ADVANCE(121);
      if (lookahead == 'i') ADVANCE(193);
      if (lookahead == 'o') ADVANCE(282);
      END_STATE();
    case 104:
      if (lookahead == 'a') ADVANCE(256);
      END_STATE();
    case 105:
      if (lookahead == 'a') ADVANCE(234);
      END_STATE();
    case 106:
      if (lookahead == 'a') ADVANCE(259);
      END_STATE();
    case 107:
      if (lookahead == 'a') ADVANCE(235);
      if (lookahead == 'o') ADVANCE(130);
      END_STATE();
    case 108:
      if (lookahead == 'a') ADVANCE(271);
      END_STATE();
    case 109:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 110:
      if (lookahead == 'a') ADVANCE(46);
      END_STATE();
    case 111:
      if (lookahead == 'a') ADVANCE(52);
      END_STATE();
    case 112:
      if (lookahead == 'a') ADVANCE(68);
      END_STATE();
    case 113:
      if (lookahead == 'a') ADVANCE(183);
      END_STATE();
    case 114:
      if (lookahead == 'a') ADVANCE(260);
      END_STATE();
    case 115:
      if (lookahead == 'a') ADVANCE(273);
      END_STATE();
    case 116:
      if (lookahead == 'a') ADVANCE(261);
      END_STATE();
    case 117:
      if (lookahead == 'b') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(161);
      END_STATE();
    case 118:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 119:
      if (lookahead == 'b') ADVANCE(225);
      END_STATE();
    case 120:
      if (lookahead == 'c') ADVANCE(123);
      if (lookahead == 'r') ADVANCE(233);
      END_STATE();
    case 121:
      if (lookahead == 'c') ADVANCE(107);
      END_STATE();
    case 122:
      if (lookahead == 'c') ADVANCE(74);
      END_STATE();
    case 123:
      if (lookahead == 'c') ADVANCE(146);
      END_STATE();
    case 124:
      if (lookahead == 'c') ADVANCE(148);
      END_STATE();
    case 125:
      if (lookahead == 'd') ADVANCE(162);
      END_STATE();
    case 126:
      if (lookahead == 'd') ADVANCE(167);
      END_STATE();
    case 127:
      if (lookahead == 'd') ADVANCE(109);
      END_STATE();
    case 128:
      if (lookahead == 'd') ADVANCE(173);
      END_STATE();
    case 129:
      if (lookahead == 'd') ADVANCE(224);
      END_STATE();
    case 130:
      if (lookahead == 'd') ADVANCE(110);
      END_STATE();
    case 131:
      if (lookahead == 'd') ADVANCE(150);
      END_STATE();
    case 132:
      if (lookahead == 'd') ADVANCE(156);
      END_STATE();
    case 133:
      if (lookahead == 'd') ADVANCE(157);
      END_STATE();
    case 134:
      if (lookahead == 'd') ADVANCE(158);
      END_STATE();
    case 135:
      if (lookahead == 'd') ADVANCE(226);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(165);
      if (lookahead == 'f') ADVANCE(285);
      if (lookahead == 'h') ADVANCE(219);
      if (lookahead == 'l') ADVANCE(174);
      if (lookahead == 'n') ADVANCE(105);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(262);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(128);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(241);
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(204);
      if (lookahead == 'h') ADVANCE(277);
      if (lookahead == 'r') ADVANCE(177);
      if (lookahead == 'u') ADVANCE(244);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(126);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(102);
      END_STATE();
    case 142:
      if (lookahead == 'e') ADVANCE(163);
      END_STATE();
    case 143:
      if (lookahead == 'e') ADVANCE(210);
      END_STATE();
    case 144:
      if (lookahead == 'e') ADVANCE(243);
      END_STATE();
    case 145:
      if (lookahead == 'e') ADVANCE(125);
      END_STATE();
    case 146:
      if (lookahead == 'e') ADVANCE(205);
      END_STATE();
    case 147:
      if (lookahead == 'e') ADVANCE(247);
      END_STATE();
    case 148:
      if (lookahead == 'e') ADVANCE(209);
      END_STATE();
    case 149:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 150:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 151:
      if (lookahead == 'e') ADVANCE(42);
      END_STATE();
    case 152:
      if (lookahead == 'e') ADVANCE(58);
      END_STATE();
    case 153:
      if (lookahead == 'e') ADVANCE(61);
      END_STATE();
    case 154:
      if (lookahead == 'e') ADVANCE(64);
      END_STATE();
    case 155:
      if (lookahead == 'e') ADVANCE(242);
      END_STATE();
    case 156:
      if (lookahead == 'e') ADVANCE(211);
      END_STATE();
    case 157:
      if (lookahead == 'e') ADVANCE(212);
      END_STATE();
    case 158:
      if (lookahead == 'e') ADVANCE(213);
      END_STATE();
    case 159:
      if (lookahead == 'e') ADVANCE(214);
      END_STATE();
    case 160:
      if (lookahead == 'e') ADVANCE(254);
      END_STATE();
    case 161:
      if (lookahead == 'e') ADVANCE(255);
      END_STATE();
    case 162:
      if (lookahead == 'f') ADVANCE(160);
      if (lookahead == 't') ADVANCE(279);
      END_STATE();
    case 163:
      if (lookahead == 'g') ADVANCE(164);
      END_STATE();
    case 164:
      if (lookahead == 'g') ADVANCE(179);
      END_STATE();
    case 165:
      if (lookahead == 'g') ADVANCE(206);
      END_STATE();
    case 166:
      if (lookahead == 'g') ADVANCE(231);
      END_STATE();
    case 167:
      if (lookahead == 'g') ADVANCE(151);
      END_STATE();
    case 168:
      if (lookahead == 'h') ADVANCE(104);
      END_STATE();
    case 169:
      if (lookahead == 'h') ADVANCE(245);
      END_STATE();
    case 170:
      if (lookahead == 'h') ADVANCE(44);
      END_STATE();
    case 171:
      if (lookahead == 'h') ADVANCE(251);
      END_STATE();
    case 172:
      if (lookahead == 'h') ADVANCE(253);
      END_STATE();
    case 173:
      if (lookahead == 'i') ADVANCE(278);
      END_STATE();
    case 174:
      if (lookahead == 'i') ADVANCE(131);
      END_STATE();
    case 175:
      if (lookahead == 'i') ADVANCE(258);
      END_STATE();
    case 176:
      if (lookahead == 'i') ADVANCE(207);
      END_STATE();
    case 177:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 178:
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 179:
      if (lookahead == 'i') ADVANCE(223);
      END_STATE();
    case 180:
      if (lookahead == 'i') ADVANCE(190);
      END_STATE();
    case 181:
      if (lookahead == 'l') ADVANCE(39);
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
      if (lookahead == 'l') ADVANCE(264);
      END_STATE();
    case 187:
      if (lookahead == 'l') ADVANCE(147);
      END_STATE();
    case 188:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 189:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 190:
      if (lookahead == 'l') ADVANCE(189);
      END_STATE();
    case 191:
      if (lookahead == 'm') ADVANCE(118);
      END_STATE();
    case 192:
      if (lookahead == 'm') ADVANCE(230);
      END_STATE();
    case 193:
      if (lookahead == 'm') ADVANCE(176);
      END_STATE();
    case 194:
      if (lookahead == 'm') ADVANCE(227);
      END_STATE();
    case 195:
      if (lookahead == 'm') ADVANCE(108);
      END_STATE();
    case 196:
      if (lookahead == 'm') ADVANCE(115);
      END_STATE();
    case 197:
      if (lookahead == 'm') ADVANCE(228);
      END_STATE();
    case 198:
      if (lookahead == 'm') ADVANCE(237);
      END_STATE();
    case 199:
      if (lookahead == 'n') ADVANCE(281);
      END_STATE();
    case 200:
      if (lookahead == 'n') ADVANCE(119);
      END_STATE();
    case 201:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 202:
      if (lookahead == 'n') ADVANCE(166);
      if (lookahead == 'w') ADVANCE(155);
      END_STATE();
    case 203:
      if (lookahead == 'n') ADVANCE(62);
      END_STATE();
    case 204:
      if (lookahead == 'n') ADVANCE(276);
      END_STATE();
    case 205:
      if (lookahead == 'n') ADVANCE(265);
      END_STATE();
    case 206:
      if (lookahead == 'n') ADVANCE(220);
      END_STATE();
    case 207:
      if (lookahead == 'n') ADVANCE(280);
      END_STATE();
    case 208:
      if (lookahead == 'n') ADVANCE(149);
      END_STATE();
    case 209:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 210:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 211:
      if (lookahead == 'n') ADVANCE(266);
      END_STATE();
    case 212:
      if (lookahead == 'n') ADVANCE(267);
      END_STATE();
    case 213:
      if (lookahead == 'n') ADVANCE(268);
      END_STATE();
    case 214:
      if (lookahead == 'n') ADVANCE(135);
      END_STATE();
    case 215:
      if (lookahead == 'o') ADVANCE(127);
      if (lookahead == 'r') ADVANCE(137);
      END_STATE();
    case 216:
      if (lookahead == 'o') ADVANCE(202);
      END_STATE();
    case 217:
      if (lookahead == 'o') ADVANCE(182);
      END_STATE();
    case 218:
      if (lookahead == 'o') ADVANCE(283);
      END_STATE();
    case 219:
      if (lookahead == 'o') ADVANCE(239);
      END_STATE();
    case 220:
      if (lookahead == 'o') ADVANCE(35);
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
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 225:
      if (lookahead == 'o') ADVANCE(284);
      END_STATE();
    case 226:
      if (lookahead == 'o') ADVANCE(72);
      END_STATE();
    case 227:
      if (lookahead == 'o') ADVANCE(250);
      END_STATE();
    case 228:
      if (lookahead == 'o') ADVANCE(252);
      END_STATE();
    case 229:
      if (lookahead == 'p') ADVANCE(117);
      END_STATE();
    case 230:
      if (lookahead == 'p') ADVANCE(168);
      END_STATE();
    case 231:
      if (lookahead == 'p') ADVANCE(169);
      END_STATE();
    case 232:
      if (lookahead == 'p') ADVANCE(143);
      END_STATE();
    case 233:
      if (lookahead == 'p') ADVANCE(142);
      END_STATE();
    case 234:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 235:
      if (lookahead == 'p') ADVANCE(221);
      END_STATE();
    case 236:
      if (lookahead == 'p') ADVANCE(171);
      END_STATE();
    case 237:
      if (lookahead == 'p') ADVANCE(172);
      END_STATE();
    case 238:
      if (lookahead == 'r') ADVANCE(141);
      END_STATE();
    case 239:
      if (lookahead == 'r') ADVANCE(274);
      END_STATE();
    case 240:
      if (lookahead == 'r') ADVANCE(195);
      END_STATE();
    case 241:
      if (lookahead == 'r') ADVANCE(132);
      END_STATE();
    case 242:
      if (lookahead == 'r') ADVANCE(194);
      END_STATE();
    case 243:
      if (lookahead == 'r') ADVANCE(269);
      END_STATE();
    case 244:
      if (lookahead == 'r') ADVANCE(201);
      END_STATE();
    case 245:
      if (lookahead == 'r') ADVANCE(106);
      END_STATE();
    case 246:
      if (lookahead == 'r') ADVANCE(203);
      END_STATE();
    case 247:
      if (lookahead == 'r') ADVANCE(65);
      END_STATE();
    case 248:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 249:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 250:
      if (lookahead == 'r') ADVANCE(133);
      END_STATE();
    case 251:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 252:
      if (lookahead == 'r') ADVANCE(134);
      END_STATE();
    case 253:
      if (lookahead == 'r') ADVANCE(116);
      END_STATE();
    case 254:
      if (lookahead == 'r') ADVANCE(196);
      END_STATE();
    case 255:
      if (lookahead == 'r') ADVANCE(197);
      END_STATE();
    case 256:
      if (lookahead == 's') ADVANCE(175);
      END_STATE();
    case 257:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 258:
      if (lookahead == 's') ADVANCE(55);
      END_STATE();
    case 259:
      if (lookahead == 's') ADVANCE(152);
      END_STATE();
    case 260:
      if (lookahead == 's') ADVANCE(153);
      END_STATE();
    case 261:
      if (lookahead == 's') ADVANCE(154);
      END_STATE();
    case 262:
      if (lookahead == 's') ADVANCE(124);
      END_STATE();
    case 263:
      if (lookahead == 't') ADVANCE(170);
      END_STATE();
    case 264:
      if (lookahead == 't') ADVANCE(249);
      END_STATE();
    case 265:
      if (lookahead == 't') ADVANCE(43);
      END_STATE();
    case 266:
      if (lookahead == 't') ADVANCE(53);
      END_STATE();
    case 267:
      if (lookahead == 't') ADVANCE(63);
      END_STATE();
    case 268:
      if (lookahead == 't') ADVANCE(66);
      END_STATE();
    case 269:
      if (lookahead == 't') ADVANCE(145);
      END_STATE();
    case 270:
      if (lookahead == 't') ADVANCE(248);
      END_STATE();
    case 271:
      if (lookahead == 't') ADVANCE(111);
      END_STATE();
    case 272:
      if (lookahead == 't') ADVANCE(222);
      END_STATE();
    case 273:
      if (lookahead == 't') ADVANCE(112);
      END_STATE();
    case 274:
      if (lookahead == 't') ADVANCE(236);
      END_STATE();
    case 275:
      if (lookahead == 'u') ADVANCE(257);
      END_STATE();
    case 276:
      if (lookahead == 'u') ADVANCE(272);
      END_STATE();
    case 277:
      if (lookahead == 'u') ADVANCE(191);
      END_STATE();
    case 278:
      if (lookahead == 'u') ADVANCE(198);
      END_STATE();
    case 279:
      if (lookahead == 'u') ADVANCE(246);
      END_STATE();
    case 280:
      if (lookahead == 'u') ADVANCE(159);
      END_STATE();
    case 281:
      if (lookahead == 'v') ADVANCE(144);
      END_STATE();
    case 282:
      if (lookahead == 'w') ADVANCE(200);
      END_STATE();
    case 283:
      if (lookahead == 'w') ADVANCE(41);
      END_STATE();
    case 284:
      if (lookahead == 'w') ADVANCE(51);
      END_STATE();
    case 285:
      if (lookahead == 'z') ADVANCE(22);
      END_STATE();
    case 286:
      if (lookahead == '|') ADVANCE(359);
      END_STATE();
    case 287:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 288:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(98);
      END_STATE();
    case 289:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
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
          lookahead != ']') ADVANCE(435);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(sym_NEWLINE);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(sym_NEWLINE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(435);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_COMMENTLINE_token1);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_COMMENTLINE_token1);
      if (lookahead == 'b') ADVANCE(122);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(359);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(305);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(305);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(287);
      if (lookahead == '0') ADVANCE(311);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(312);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(312);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(314);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(315);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(316);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(322);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(69);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(288);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(323);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(324);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(325);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(338);
      if (lookahead == 'i') ADVANCE(341);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(342);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(343);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(340);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(344);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(349);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(345);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(350);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(337);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(347);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(353);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(346);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(348);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(353);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ':') ADVANCE(360);
      if (lookahead == ']') ADVANCE(357);
      if (lookahead == '|') ADVANCE(358);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(sym_start_of_repeated_section);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token1);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(aux_sym_first_repeat_bar_token2);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(364);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(aux_sym_lyric_syllable_token1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(aux_sym_lyric_text_token2);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(aux_sym_lyric_text_token3);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 412:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 413:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 414:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 415:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 416:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 417:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 418:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 419:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 420:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 421:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 422:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 423:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 424:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 425:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 426:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 427:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 428:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 429:
      ACCEPT_TOKEN(anon_sym_P_COLON);
      END_STATE();
    case 430:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == '.') ADVANCE(367);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(365);
      if (('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(366);
      END_STATE();
    case 431:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (lookahead == ']') ADVANCE(304);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 432:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (lookahead == '\n') ADVANCE(293);
      if (lookahead == ' ') ADVANCE(291);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 433:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(433);
      END_STATE();
    case 434:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '\n') ADVANCE(294);
      if (lookahead == ' ') ADVANCE(292);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(435);
      END_STATE();
    case 435:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(435);
      END_STATE();
    case 436:
      ACCEPT_TOKEN(anon_sym_PERCENTabc_DASH);
      END_STATE();
    case 437:
      ACCEPT_TOKEN(anon_sym_K_COLON);
      END_STATE();
    case 438:
      ACCEPT_TOKEN(anon_sym_m_COLON);
      END_STATE();
    case 439:
      ACCEPT_TOKEN(anon_sym_M_COLON);
      END_STATE();
    case 440:
      ACCEPT_TOKEN(anon_sym_N_COLON);
      END_STATE();
    case 441:
      ACCEPT_TOKEN(anon_sym_r_COLON);
      END_STATE();
    case 442:
      ACCEPT_TOKEN(anon_sym_R_COLON);
      END_STATE();
    case 443:
      ACCEPT_TOKEN(anon_sym_s_COLON);
      END_STATE();
    case 444:
      ACCEPT_TOKEN(anon_sym_Q_COLON);
      END_STATE();
    case 445:
      ACCEPT_TOKEN(anon_sym_L_COLON);
      END_STATE();
    case 446:
      ACCEPT_TOKEN(anon_sym_U_COLON);
      END_STATE();
    case 447:
      ACCEPT_TOKEN(aux_sym_user_defined_token1);
      END_STATE();
    case 448:
      ACCEPT_TOKEN(aux_sym_user_defined_token2);
      END_STATE();
    case 449:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 450:
      ACCEPT_TOKEN(anon_sym_V_COLON);
      END_STATE();
    case 451:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 1},
  [2] = {.lex_state = 1},
  [3] = {.lex_state = 2},
  [4] = {.lex_state = 2},
  [5] = {.lex_state = 2},
  [6] = {.lex_state = 2},
  [7] = {.lex_state = 2},
  [8] = {.lex_state = 2},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 2},
  [13] = {.lex_state = 2},
  [14] = {.lex_state = 2},
  [15] = {.lex_state = 2},
  [16] = {.lex_state = 2},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 430},
  [19] = {.lex_state = 4},
  [20] = {.lex_state = 4},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 431},
  [23] = {.lex_state = 431},
  [24] = {.lex_state = 3},
  [25] = {.lex_state = 4},
  [26] = {.lex_state = 3},
  [27] = {.lex_state = 4},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 1},
  [30] = {.lex_state = 1},
  [31] = {.lex_state = 1},
  [32] = {.lex_state = 431},
  [33] = {.lex_state = 2},
  [34] = {.lex_state = 1},
  [35] = {.lex_state = 1},
  [36] = {.lex_state = 1},
  [37] = {.lex_state = 434},
  [38] = {.lex_state = 434},
  [39] = {.lex_state = 434},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 432},
  [42] = {.lex_state = 430},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 0},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 0},
  [47] = {.lex_state = 0},
  [48] = {.lex_state = 0},
  [49] = {.lex_state = 0},
  [50] = {.lex_state = 1},
  [51] = {.lex_state = 0},
  [52] = {.lex_state = 0},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 0},
  [55] = {.lex_state = 0},
  [56] = {.lex_state = 432},
  [57] = {.lex_state = 1},
  [58] = {.lex_state = 1},
  [59] = {.lex_state = 1},
  [60] = {.lex_state = 1},
  [61] = {.lex_state = 1},
  [62] = {.lex_state = 1},
  [63] = {.lex_state = 0},
  [64] = {.lex_state = 1},
  [65] = {.lex_state = 0},
  [66] = {.lex_state = 434},
  [67] = {.lex_state = 434},
  [68] = {.lex_state = 1},
  [69] = {.lex_state = 1},
  [70] = {.lex_state = 1},
  [71] = {.lex_state = 1},
  [72] = {.lex_state = 434},
  [73] = {.lex_state = 1},
  [74] = {.lex_state = 1},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 1},
  [77] = {.lex_state = 434},
  [78] = {.lex_state = 1},
  [79] = {.lex_state = 1},
  [80] = {.lex_state = 1},
  [81] = {.lex_state = 434},
  [82] = {.lex_state = 1},
  [83] = {.lex_state = 1},
  [84] = {.lex_state = 1},
  [85] = {.lex_state = 1},
  [86] = {.lex_state = 1},
  [87] = {.lex_state = 1},
  [88] = {.lex_state = 1},
  [89] = {.lex_state = 1},
  [90] = {.lex_state = 1},
  [91] = {.lex_state = 1},
  [92] = {.lex_state = 1},
  [93] = {.lex_state = 1},
  [94] = {.lex_state = 1},
  [95] = {.lex_state = 1},
  [96] = {.lex_state = 1},
  [97] = {.lex_state = 1},
  [98] = {.lex_state = 1},
  [99] = {.lex_state = 1},
  [100] = {.lex_state = 1},
  [101] = {.lex_state = 1},
  [102] = {.lex_state = 1},
  [103] = {.lex_state = 1},
  [104] = {.lex_state = 1},
  [105] = {.lex_state = 1},
  [106] = {.lex_state = 1},
  [107] = {.lex_state = 1},
  [108] = {.lex_state = 1},
  [109] = {.lex_state = 1},
  [110] = {.lex_state = 1},
  [111] = {.lex_state = 1},
  [112] = {.lex_state = 1},
  [113] = {.lex_state = 1},
  [114] = {.lex_state = 1},
  [115] = {.lex_state = 1},
  [116] = {.lex_state = 1},
  [117] = {.lex_state = 1},
  [118] = {.lex_state = 1},
  [119] = {.lex_state = 1},
  [120] = {.lex_state = 1},
  [121] = {.lex_state = 1},
  [122] = {.lex_state = 1},
  [123] = {.lex_state = 1},
  [124] = {.lex_state = 1},
  [125] = {.lex_state = 1},
  [126] = {.lex_state = 0},
  [127] = {.lex_state = 434},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_NEWLINE] = ACTIONS(3),
    [aux_sym_COMMENTLINE_token1] = ACTIONS(1),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_slur_open] = ACTIONS(1),
    [sym_slur_close] = ACTIONS(1),
    [aux_sym_note_construct_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [sym_octave] = ACTIONS(1),
    [aux_sym_multimeasure_rest_token1] = ACTIONS(1),
    [sym_rhythm] = ACTIONS(1),
    [aux_sym_grace_note_token1] = ACTIONS(1),
    [aux_sym_grace_note_token2] = ACTIONS(1),
    [aux_sym_chord_symbol_token1] = ACTIONS(1),
    [aux_sym_chord_symbol_token2] = ACTIONS(1),
    [sym_annotation] = ACTIONS(1),
    [sym_tuplet_marker] = ACTIONS(1),
    [aux_sym_nth_ending_number_token1] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_bar_line] = ACTIONS(1),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(1),
    [sym_thin_double_bar_line] = ACTIONS(1),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(1),
    [sym_start_of_repeated_section] = ACTIONS(1),
    [sym_end_of_repeated_section] = ACTIONS(1),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(1),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(1),
    [aux_sym_verse_number_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [aux_sym_lyric_text_token2] = ACTIONS(1),
    [aux_sym_lyric_text_token3] = ACTIONS(1),
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
    [aux_sym_section_name_token1] = ACTIONS(1),
    [anon_sym_PERCENTabc_DASH] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_words_line_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(65),
    [sym_body_inline_info] = STATE(126),
    [sym__space] = ACTIONS(3),
    [sym_NEWLINE] = ACTIONS(3),
    [anon_sym_LBRACK] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 14,
    ACTIONS(7), 1,
      anon_sym_P_COLON,
    ACTIONS(9), 1,
      anon_sym_K_COLON,
    ACTIONS(11), 1,
      anon_sym_m_COLON,
    ACTIONS(13), 1,
      anon_sym_M_COLON,
    ACTIONS(15), 1,
      anon_sym_N_COLON,
    ACTIONS(17), 1,
      anon_sym_r_COLON,
    ACTIONS(19), 1,
      anon_sym_R_COLON,
    ACTIONS(21), 1,
      anon_sym_s_COLON,
    ACTIONS(23), 1,
      anon_sym_Q_COLON,
    ACTIONS(25), 1,
      anon_sym_L_COLON,
    ACTIONS(27), 1,
      anon_sym_U_COLON,
    ACTIONS(29), 1,
      anon_sym_V_COLON,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(40), 12,
      sym_parts_line,
      sym_key,
      sym_macros,
      sym_meter,
      sym_notes,
      sym_remark,
      sym_rhythm_line,
      sym_symbol_line,
      sym_tempo,
      sym_unit_note_length,
      sym_user_defined,
      sym_voice,
  [55] = 10,
    ACTIONS(31), 1,
      anon_sym_RBRACK,
    ACTIONS(33), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(39), 1,
      sym_bar_line,
    ACTIONS(45), 1,
      sym_end_of_repeated_section,
    ACTIONS(48), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(36), 2,
      sym_annotation,
      aux_sym_lyric_text_token3,
    STATE(8), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(3), 4,
      sym_chord_symbol,
      sym_generic_bar_line,
      sym_symbol,
      aux_sym_symbol_line_repeat1,
    ACTIONS(42), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [96] = 10,
    ACTIONS(51), 1,
      anon_sym_RBRACK,
    ACTIONS(53), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(57), 1,
      sym_bar_line,
    ACTIONS(61), 1,
      sym_end_of_repeated_section,
    ACTIONS(63), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(55), 2,
      sym_annotation,
      aux_sym_lyric_text_token3,
    STATE(8), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(3), 4,
      sym_chord_symbol,
      sym_generic_bar_line,
      sym_symbol,
      aux_sym_symbol_line_repeat1,
    ACTIONS(59), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [137] = 9,
    ACTIONS(53), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(57), 1,
      sym_bar_line,
    ACTIONS(61), 1,
      sym_end_of_repeated_section,
    ACTIONS(63), 1,
      anon_sym_BANGtrill_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(65), 2,
      sym_annotation,
      aux_sym_lyric_text_token3,
    STATE(8), 2,
      sym_first_repeat_bar,
      sym_second_repeat_bar,
    STATE(4), 4,
      sym_chord_symbol,
      sym_generic_bar_line,
      sym_symbol,
      aux_sym_symbol_line_repeat1,
    ACTIONS(59), 5,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
  [175] = 5,
    ACTIONS(71), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(73), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(69), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(67), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [202] = 5,
    ACTIONS(75), 1,
      aux_sym_first_repeat_bar_token1,
    ACTIONS(77), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(69), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(67), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [229] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(69), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(67), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [250] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(81), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(79), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [271] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(85), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(83), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [292] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(89), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(87), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [313] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(93), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(91), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [334] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(97), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(95), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [355] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(101), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(99), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [376] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(105), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(103), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [397] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(109), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(107), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [418] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(113), 2,
      aux_sym_chord_symbol_token1,
      sym_bar_line,
    ACTIONS(111), 10,
      anon_sym_RBRACK,
      sym_annotation,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_start_of_repeated_section,
      sym_end_of_repeated_section,
      sym_start_end_of_two_repeated_sections,
      aux_sym_lyric_text_token3,
      anon_sym_BANGtrill_BANG,
  [439] = 7,
    ACTIONS(115), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(117), 1,
      anon_sym_DOT,
    ACTIONS(119), 1,
      aux_sym_section_name_token1,
    STATE(43), 1,
      sym_part_line_content,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(20), 2,
      sym_section_name,
      aux_sym_part_line_content_repeat2,
    STATE(22), 2,
      sym_sections_group,
      aux_sym_part_line_content_repeat1,
  [464] = 5,
    ACTIONS(121), 1,
      anon_sym_RBRACK,
    ACTIONS(123), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(126), 1,
      anon_sym_DOT,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(19), 2,
      sym_section_name,
      aux_sym_part_line_content_repeat2,
  [482] = 5,
    ACTIONS(115), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(117), 1,
      anon_sym_DOT,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(19), 2,
      sym_section_name,
      aux_sym_part_line_content_repeat2,
  [500] = 3,
    ACTIONS(131), 1,
      sym_alteration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(133), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [513] = 4,
    ACTIONS(119), 1,
      aux_sym_section_name_token1,
    ACTIONS(129), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(23), 2,
      sym_sections_group,
      aux_sym_part_line_content_repeat1,
  [528] = 4,
    ACTIONS(135), 1,
      anon_sym_RBRACK,
    ACTIONS(137), 1,
      aux_sym_section_name_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(23), 2,
      sym_sections_group,
      aux_sym_part_line_content_repeat1,
  [543] = 4,
    ACTIONS(140), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(142), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(144), 1,
      sym_chord_type,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [557] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(146), 3,
      anon_sym_RBRACK,
      aux_sym_lyric_syllable_token1,
      anon_sym_DOT,
  [567] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(148), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [577] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(150), 3,
      anon_sym_RBRACK,
      aux_sym_lyric_syllable_token1,
      anon_sym_DOT,
  [587] = 3,
    ACTIONS(152), 1,
      sym_note_letter,
    STATE(70), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [598] = 3,
    ACTIONS(152), 1,
      sym_note_letter,
    STATE(64), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [609] = 3,
    ACTIONS(133), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(154), 1,
      sym_alteration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [620] = 3,
    ACTIONS(156), 1,
      sym_note_letter,
    STATE(24), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [631] = 3,
    ACTIONS(158), 1,
      anon_sym_RBRACK,
    ACTIONS(160), 1,
      aux_sym_section_name_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [642] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(162), 2,
      aux_sym_user_defined_token1,
      aux_sym_user_defined_token2,
  [651] = 3,
    ACTIONS(164), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(166), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [662] = 3,
    ACTIONS(63), 1,
      anon_sym_BANGtrill_BANG,
    STATE(63), 1,
      sym_symbol,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [673] = 2,
    ACTIONS(168), 1,
      anon_sym_BANGinvertedturn_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [681] = 2,
    ACTIONS(172), 1,
      sym_TEXT,
    ACTIONS(170), 2,
      sym__space,
      sym_NEWLINE,
  [689] = 2,
    ACTIONS(174), 1,
      sym_TEXT,
    ACTIONS(170), 2,
      sym__space,
      sym_NEWLINE,
  [697] = 2,
    ACTIONS(176), 1,
      sym_TEXT,
    ACTIONS(170), 2,
      sym__space,
      sym_NEWLINE,
  [705] = 2,
    ACTIONS(178), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [713] = 2,
    ACTIONS(180), 1,
      aux_sym_section_name_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [721] = 2,
    ACTIONS(182), 1,
      aux_sym_lyric_syllable_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [729] = 2,
    ACTIONS(184), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [737] = 2,
    ACTIONS(186), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [745] = 2,
    ACTIONS(188), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [753] = 2,
    ACTIONS(190), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [761] = 2,
    ACTIONS(192), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [769] = 2,
    ACTIONS(194), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [777] = 2,
    ACTIONS(196), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [785] = 2,
    ACTIONS(198), 1,
      anon_sym_BANGtrill_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [793] = 2,
    ACTIONS(200), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [801] = 2,
    ACTIONS(202), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [809] = 2,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [817] = 2,
    ACTIONS(206), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [825] = 2,
    ACTIONS(208), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [833] = 2,
    ACTIONS(210), 1,
      aux_sym_section_name_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [841] = 2,
    ACTIONS(212), 1,
      anon_sym_BANG_GT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [849] = 2,
    ACTIONS(214), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [857] = 2,
    ACTIONS(216), 1,
      anon_sym_BANGtrill_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [865] = 2,
    ACTIONS(218), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [873] = 2,
    ACTIONS(220), 1,
      aux_sym_first_repeat_bar_token2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [881] = 2,
    ACTIONS(222), 1,
      anon_sym_BANGlowermordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [889] = 2,
    ACTIONS(224), 1,
      anon_sym_RBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [897] = 2,
    ACTIONS(226), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [905] = 2,
    ACTIONS(228), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [913] = 2,
    ACTIONS(230), 1,
      sym_TEXT,
    ACTIONS(170), 2,
      sym__space,
      sym_NEWLINE,
  [921] = 2,
    ACTIONS(232), 1,
      sym_TEXT,
    ACTIONS(170), 2,
      sym__space,
      sym_NEWLINE,
  [929] = 2,
    ACTIONS(234), 1,
      anon_sym_BANGuppermordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [937] = 2,
    ACTIONS(236), 1,
      anon_sym_BANGaccent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [945] = 2,
    ACTIONS(238), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [953] = 2,
    ACTIONS(240), 1,
      anon_sym_BANGmordent_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [961] = 2,
    ACTIONS(242), 1,
      sym_TEXT,
    ACTIONS(170), 2,
      sym__space,
      sym_NEWLINE,
  [969] = 2,
    ACTIONS(244), 1,
      anon_sym_BANGpralltriller_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [977] = 2,
    ACTIONS(246), 1,
      anon_sym_BANGroll_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [985] = 2,
    ACTIONS(248), 1,
      anon_sym_BANGturn_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [993] = 2,
    ACTIONS(250), 1,
      anon_sym_BANGturnx_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1001] = 2,
    ACTIONS(252), 1,
      sym_TEXT,
    ACTIONS(170), 2,
      sym__space,
      sym_NEWLINE,
  [1009] = 2,
    ACTIONS(254), 1,
      anon_sym_BANGinvertedturnx_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1017] = 2,
    ACTIONS(256), 1,
      anon_sym_BANGarpeggio_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1025] = 2,
    ACTIONS(258), 1,
      anon_sym_LBRACK,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1033] = 2,
    ACTIONS(260), 1,
      sym_TEXT,
    ACTIONS(170), 2,
      sym__space,
      sym_NEWLINE,
  [1041] = 2,
    ACTIONS(262), 1,
      anon_sym_BANGp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1049] = 2,
    ACTIONS(264), 1,
      anon_sym_BANGfermata_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1057] = 2,
    ACTIONS(266), 1,
      anon_sym_BANGinvertedfermata_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1065] = 2,
    ACTIONS(268), 1,
      anon_sym_BANGtenuto_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1073] = 2,
    ACTIONS(270), 1,
      anon_sym_BANG0_BANG_DASH_BANG5_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1081] = 2,
    ACTIONS(272), 1,
      anon_sym_BANG_PLUS_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1089] = 2,
    ACTIONS(274), 1,
      anon_sym_BANGplus_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1097] = 2,
    ACTIONS(276), 1,
      anon_sym_BANGsnap_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1105] = 2,
    ACTIONS(278), 1,
      anon_sym_BANGslide_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1113] = 2,
    ACTIONS(280), 1,
      anon_sym_BANGwedge_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1121] = 2,
    ACTIONS(282), 1,
      anon_sym_BANGupbow_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1129] = 2,
    ACTIONS(284), 1,
      anon_sym_BANGdownbow_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1137] = 2,
    ACTIONS(286), 1,
      anon_sym_BANGopen_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1145] = 2,
    ACTIONS(288), 1,
      anon_sym_BANGthumb_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1153] = 2,
    ACTIONS(290), 1,
      anon_sym_BANGbreath_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1161] = 2,
    ACTIONS(292), 1,
      anon_sym_BANGpppp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1169] = 2,
    ACTIONS(294), 1,
      anon_sym_BANGppp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1177] = 2,
    ACTIONS(296), 1,
      anon_sym_BANGpp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1185] = 2,
    ACTIONS(298), 1,
      anon_sym_BANGemphasis_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1193] = 2,
    ACTIONS(300), 1,
      anon_sym_BANGmp_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1201] = 2,
    ACTIONS(302), 1,
      anon_sym_BANGmf_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1209] = 2,
    ACTIONS(304), 1,
      anon_sym_BANGf_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1217] = 2,
    ACTIONS(306), 1,
      anon_sym_BANGff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1225] = 2,
    ACTIONS(308), 1,
      anon_sym_BANGfff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1233] = 2,
    ACTIONS(310), 1,
      anon_sym_BANGffff_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1241] = 2,
    ACTIONS(312), 1,
      anon_sym_BANGsfz_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1249] = 2,
    ACTIONS(314), 1,
      anon_sym_BANGcrescendo_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1257] = 2,
    ACTIONS(316), 1,
      anon_sym_BANG_LT_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1265] = 2,
    ACTIONS(318), 1,
      anon_sym_BANGcrescendo_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1273] = 2,
    ACTIONS(320), 1,
      anon_sym_BANG_LT_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1281] = 2,
    ACTIONS(322), 1,
      anon_sym_BANGdiminuendo_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1289] = 2,
    ACTIONS(324), 1,
      anon_sym_BANG_GT_LPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1297] = 2,
    ACTIONS(326), 1,
      anon_sym_BANGdiminuendo_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1305] = 2,
    ACTIONS(328), 1,
      anon_sym_BANG_GT_RPAREN_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1313] = 2,
    ACTIONS(330), 1,
      anon_sym_BANGsegno_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1321] = 2,
    ACTIONS(332), 1,
      anon_sym_BANGcoda_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1329] = 2,
    ACTIONS(334), 1,
      anon_sym_BANGD_DOTS_DOT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1337] = 2,
    ACTIONS(336), 1,
      anon_sym_BANGD_DOTC_DOT_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1345] = 2,
    ACTIONS(338), 1,
      anon_sym_BANGdacoda_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1353] = 2,
    ACTIONS(340), 1,
      anon_sym_BANGdacapo_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1361] = 2,
    ACTIONS(342), 1,
      anon_sym_BANGfine_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1369] = 2,
    ACTIONS(344), 1,
      anon_sym_BANGshortphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1377] = 2,
    ACTIONS(346), 1,
      anon_sym_BANGmediumphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1385] = 2,
    ACTIONS(348), 1,
      anon_sym_BANGlongphrase_BANG,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1393] = 2,
    ACTIONS(350), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [1401] = 2,
    ACTIONS(352), 1,
      sym_TEXT,
    ACTIONS(170), 2,
      sym__space,
      sym_NEWLINE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 55,
  [SMALL_STATE(4)] = 96,
  [SMALL_STATE(5)] = 137,
  [SMALL_STATE(6)] = 175,
  [SMALL_STATE(7)] = 202,
  [SMALL_STATE(8)] = 229,
  [SMALL_STATE(9)] = 250,
  [SMALL_STATE(10)] = 271,
  [SMALL_STATE(11)] = 292,
  [SMALL_STATE(12)] = 313,
  [SMALL_STATE(13)] = 334,
  [SMALL_STATE(14)] = 355,
  [SMALL_STATE(15)] = 376,
  [SMALL_STATE(16)] = 397,
  [SMALL_STATE(17)] = 418,
  [SMALL_STATE(18)] = 439,
  [SMALL_STATE(19)] = 464,
  [SMALL_STATE(20)] = 482,
  [SMALL_STATE(21)] = 500,
  [SMALL_STATE(22)] = 513,
  [SMALL_STATE(23)] = 528,
  [SMALL_STATE(24)] = 543,
  [SMALL_STATE(25)] = 557,
  [SMALL_STATE(26)] = 567,
  [SMALL_STATE(27)] = 577,
  [SMALL_STATE(28)] = 587,
  [SMALL_STATE(29)] = 598,
  [SMALL_STATE(30)] = 609,
  [SMALL_STATE(31)] = 620,
  [SMALL_STATE(32)] = 631,
  [SMALL_STATE(33)] = 642,
  [SMALL_STATE(34)] = 651,
  [SMALL_STATE(35)] = 662,
  [SMALL_STATE(36)] = 673,
  [SMALL_STATE(37)] = 681,
  [SMALL_STATE(38)] = 689,
  [SMALL_STATE(39)] = 697,
  [SMALL_STATE(40)] = 705,
  [SMALL_STATE(41)] = 713,
  [SMALL_STATE(42)] = 721,
  [SMALL_STATE(43)] = 729,
  [SMALL_STATE(44)] = 737,
  [SMALL_STATE(45)] = 745,
  [SMALL_STATE(46)] = 753,
  [SMALL_STATE(47)] = 761,
  [SMALL_STATE(48)] = 769,
  [SMALL_STATE(49)] = 777,
  [SMALL_STATE(50)] = 785,
  [SMALL_STATE(51)] = 793,
  [SMALL_STATE(52)] = 801,
  [SMALL_STATE(53)] = 809,
  [SMALL_STATE(54)] = 817,
  [SMALL_STATE(55)] = 825,
  [SMALL_STATE(56)] = 833,
  [SMALL_STATE(57)] = 841,
  [SMALL_STATE(58)] = 849,
  [SMALL_STATE(59)] = 857,
  [SMALL_STATE(60)] = 865,
  [SMALL_STATE(61)] = 873,
  [SMALL_STATE(62)] = 881,
  [SMALL_STATE(63)] = 889,
  [SMALL_STATE(64)] = 897,
  [SMALL_STATE(65)] = 905,
  [SMALL_STATE(66)] = 913,
  [SMALL_STATE(67)] = 921,
  [SMALL_STATE(68)] = 929,
  [SMALL_STATE(69)] = 937,
  [SMALL_STATE(70)] = 945,
  [SMALL_STATE(71)] = 953,
  [SMALL_STATE(72)] = 961,
  [SMALL_STATE(73)] = 969,
  [SMALL_STATE(74)] = 977,
  [SMALL_STATE(75)] = 985,
  [SMALL_STATE(76)] = 993,
  [SMALL_STATE(77)] = 1001,
  [SMALL_STATE(78)] = 1009,
  [SMALL_STATE(79)] = 1017,
  [SMALL_STATE(80)] = 1025,
  [SMALL_STATE(81)] = 1033,
  [SMALL_STATE(82)] = 1041,
  [SMALL_STATE(83)] = 1049,
  [SMALL_STATE(84)] = 1057,
  [SMALL_STATE(85)] = 1065,
  [SMALL_STATE(86)] = 1073,
  [SMALL_STATE(87)] = 1081,
  [SMALL_STATE(88)] = 1089,
  [SMALL_STATE(89)] = 1097,
  [SMALL_STATE(90)] = 1105,
  [SMALL_STATE(91)] = 1113,
  [SMALL_STATE(92)] = 1121,
  [SMALL_STATE(93)] = 1129,
  [SMALL_STATE(94)] = 1137,
  [SMALL_STATE(95)] = 1145,
  [SMALL_STATE(96)] = 1153,
  [SMALL_STATE(97)] = 1161,
  [SMALL_STATE(98)] = 1169,
  [SMALL_STATE(99)] = 1177,
  [SMALL_STATE(100)] = 1185,
  [SMALL_STATE(101)] = 1193,
  [SMALL_STATE(102)] = 1201,
  [SMALL_STATE(103)] = 1209,
  [SMALL_STATE(104)] = 1217,
  [SMALL_STATE(105)] = 1225,
  [SMALL_STATE(106)] = 1233,
  [SMALL_STATE(107)] = 1241,
  [SMALL_STATE(108)] = 1249,
  [SMALL_STATE(109)] = 1257,
  [SMALL_STATE(110)] = 1265,
  [SMALL_STATE(111)] = 1273,
  [SMALL_STATE(112)] = 1281,
  [SMALL_STATE(113)] = 1289,
  [SMALL_STATE(114)] = 1297,
  [SMALL_STATE(115)] = 1305,
  [SMALL_STATE(116)] = 1313,
  [SMALL_STATE(117)] = 1321,
  [SMALL_STATE(118)] = 1329,
  [SMALL_STATE(119)] = 1337,
  [SMALL_STATE(120)] = 1345,
  [SMALL_STATE(121)] = 1353,
  [SMALL_STATE(122)] = 1361,
  [SMALL_STATE(123)] = 1369,
  [SMALL_STATE(124)] = 1377,
  [SMALL_STATE(125)] = 1385,
  [SMALL_STATE(126)] = 1393,
  [SMALL_STATE(127)] = 1401,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(66),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [21] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_symbol_line_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(31),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(3),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(6),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(8),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(7),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_symbol_line_repeat1, 2), SHIFT_REPEAT(50),
  [51] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol_line, 2),
  [53] = {.entry = {.count = 1, .reusable = false}}, SHIFT(31),
  [55] = {.entry = {.count = 1, .reusable = true}}, SHIFT(3),
  [57] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [59] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [61] = {.entry = {.count = 1, .reusable = true}}, SHIFT(7),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_generic_bar_line, 1),
  [69] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_generic_bar_line, 1),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(80),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [75] = {.entry = {.count = 1, .reusable = false}}, SHIFT(58),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [79] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [81] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 5),
  [83] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 4),
  [85] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 4),
  [87] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 4),
  [89] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 4),
  [91] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_symbol, 59),
  [93] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_symbol, 59),
  [95] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_first_repeat_bar, 2),
  [97] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_first_repeat_bar, 2),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_second_repeat_bar, 2),
  [101] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_second_repeat_bar, 2),
  [103] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 3),
  [107] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 6),
  [111] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [113] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_symbol, 4),
  [115] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [117] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [119] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [121] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_line_content_repeat2, 2),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_line_content_repeat2, 2), SHIFT_REPEAT(41),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_part_line_content_repeat2, 2), SHIFT_REPEAT(42),
  [129] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_part_line_content, 1),
  [131] = {.entry = {.count = 1, .reusable = false}}, SHIFT(26),
  [133] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_part_line_content_repeat1, 2),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_part_line_content_repeat1, 2), SHIFT_REPEAT(32),
  [140] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [142] = {.entry = {.count = 1, .reusable = true}}, SHIFT(29),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 3),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_name, 2),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [156] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sections_group, 1),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sections_group, 1),
  [162] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(78),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(45),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [176] = {.entry = {.count = 1, .reusable = false}}, SHIFT(54),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(55),
  [180] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [182] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_parts_line, 2),
  [186] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_key, 2),
  [188] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macros, 2),
  [190] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_meter, 2),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_notes, 2),
  [194] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_remark, 2),
  [196] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_rhythm_line, 2),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(59),
  [200] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_tempo, 2),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_unit_note_length, 2),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [206] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_voice, 2),
  [208] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_body_inline_info, 3),
  [210] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(69),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(61),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [222] = {.entry = {.count = 1, .reusable = true}}, SHIFT(68),
  [224] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_user_defined, 4),
  [226] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [228] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [230] = {.entry = {.count = 1, .reusable = false}}, SHIFT(47),
  [232] = {.entry = {.count = 1, .reusable = false}}, SHIFT(46),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [236] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [238] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [240] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [242] = {.entry = {.count = 1, .reusable = false}}, SHIFT(44),
  [244] = {.entry = {.count = 1, .reusable = true}}, SHIFT(74),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [250] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [252] = {.entry = {.count = 1, .reusable = false}}, SHIFT(48),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [256] = {.entry = {.count = 1, .reusable = true}}, SHIFT(57),
  [258] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [260] = {.entry = {.count = 1, .reusable = false}}, SHIFT(51),
  [262] = {.entry = {.count = 1, .reusable = true}}, SHIFT(101),
  [264] = {.entry = {.count = 1, .reusable = true}}, SHIFT(84),
  [266] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [268] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [270] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [272] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [274] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [276] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [278] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [280] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [282] = {.entry = {.count = 1, .reusable = true}}, SHIFT(93),
  [284] = {.entry = {.count = 1, .reusable = true}}, SHIFT(94),
  [286] = {.entry = {.count = 1, .reusable = true}}, SHIFT(95),
  [288] = {.entry = {.count = 1, .reusable = true}}, SHIFT(96),
  [290] = {.entry = {.count = 1, .reusable = true}}, SHIFT(97),
  [292] = {.entry = {.count = 1, .reusable = true}}, SHIFT(98),
  [294] = {.entry = {.count = 1, .reusable = true}}, SHIFT(99),
  [296] = {.entry = {.count = 1, .reusable = true}}, SHIFT(82),
  [298] = {.entry = {.count = 1, .reusable = true}}, SHIFT(83),
  [300] = {.entry = {.count = 1, .reusable = true}}, SHIFT(102),
  [302] = {.entry = {.count = 1, .reusable = true}}, SHIFT(103),
  [304] = {.entry = {.count = 1, .reusable = true}}, SHIFT(104),
  [306] = {.entry = {.count = 1, .reusable = true}}, SHIFT(105),
  [308] = {.entry = {.count = 1, .reusable = true}}, SHIFT(106),
  [310] = {.entry = {.count = 1, .reusable = true}}, SHIFT(107),
  [312] = {.entry = {.count = 1, .reusable = true}}, SHIFT(108),
  [314] = {.entry = {.count = 1, .reusable = true}}, SHIFT(109),
  [316] = {.entry = {.count = 1, .reusable = true}}, SHIFT(110),
  [318] = {.entry = {.count = 1, .reusable = true}}, SHIFT(111),
  [320] = {.entry = {.count = 1, .reusable = true}}, SHIFT(112),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(114),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(115),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(116),
  [330] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [332] = {.entry = {.count = 1, .reusable = true}}, SHIFT(118),
  [334] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [336] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [338] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [340] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [342] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [344] = {.entry = {.count = 1, .reusable = true}}, SHIFT(124),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [348] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [350] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [352] = {.entry = {.count = 1, .reusable = false}}, SHIFT(49),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef _WIN32
#define extern __declspec(dllexport)
#endif

extern const TSLanguage *tree_sitter_ABC(void) {
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
