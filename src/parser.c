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
#define STATE_COUNT 151
#define LARGE_STATE_COUNT 2
#define SYMBOL_COUNT 133
#define ALIAS_COUNT 0
#define TOKEN_COUNT 106
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 0
#define MAX_ALIAS_SEQUENCE_LENGTH 7
#define PRODUCTION_ID_COUNT 1

enum {
  sym__space = 1,
  sym_NEWLINE = 2,
  anon_sym_BSLASH = 3,
  anon_sym_PLUS = 4,
  anon_sym_COLON = 5,
  sym_note_skip = 6,
  anon_sym_DASH = 7,
  sym_TILDE = 8,
  aux_sym_COMMENTLINE_token1 = 9,
  anon_sym_DOLLAR = 10,
  anon_sym_BQUOTE = 11,
  sym_slur_open = 12,
  sym_slur_close = 13,
  aux_sym_note_construct_token1 = 14,
  anon_sym_LBRACK = 15,
  anon_sym_RBRACK = 16,
  sym_alteration = 17,
  sym_note_letter = 18,
  sym_octave = 19,
  sym_rest = 20,
  anon_sym_Z = 21,
  anon_sym_X = 22,
  aux_sym_multimeasure_rest_token1 = 23,
  sym_rhythm = 24,
  aux_sym_grace_note_token1 = 25,
  aux_sym_grace_note_token2 = 26,
  aux_sym_chord_symbol_token1 = 27,
  aux_sym_chord_symbol_token2 = 28,
  sym_annotation = 29,
  sym_tuplet_marker = 30,
  sym_chord_type = 31,
  sym_decoration_shorthand = 32,
  aux_sym_nth_ending_number_token1 = 33,
  anon_sym_COMMA = 34,
  sym_bar_line = 35,
  sym_close_thin_thick_double_bar_line = 36,
  sym_thin_double_bar_line = 37,
  sym_open_thick_thin_double_bar_line = 38,
  sym_end_of_repeated_section = 39,
  sym_start_end_of_two_repeated_sections = 40,
  aux_sym_first_repeat_bar_token2 = 41,
  aux_sym_verse_number_token1 = 42,
  anon_sym_BANGtrill_BANG = 43,
  anon_sym_BANGtrill_LPAREN_BANG = 44,
  anon_sym_BANGtrill_RPAREN_BANG = 45,
  anon_sym_BANGlowermordent_BANG = 46,
  anon_sym_BANGuppermordent_BANG = 47,
  anon_sym_BANGmordent_BANG = 48,
  anon_sym_BANGpralltriller_BANG = 49,
  anon_sym_BANGroll_BANG = 50,
  anon_sym_BANGturn_BANG = 51,
  anon_sym_BANGturnx_BANG = 52,
  anon_sym_BANGinvertedturn_BANG = 53,
  anon_sym_BANGinvertedturnx_BANG = 54,
  anon_sym_BANGarpeggio_BANG = 55,
  anon_sym_BANG_GT_BANG = 56,
  anon_sym_BANGaccent_BANG = 57,
  anon_sym_BANGemphasis_BANG = 58,
  anon_sym_BANGfermata_BANG = 59,
  anon_sym_BANGinvertedfermata_BANG = 60,
  anon_sym_BANGtenuto_BANG = 61,
  anon_sym_BANG0_BANG_DASH_BANG5_BANG = 62,
  anon_sym_BANG_PLUS_BANG = 63,
  anon_sym_BANGplus_BANG = 64,
  anon_sym_BANGsnap_BANG = 65,
  anon_sym_BANGslide_BANG = 66,
  anon_sym_BANGwedge_BANG = 67,
  anon_sym_BANGupbow_BANG = 68,
  anon_sym_BANGdownbow_BANG = 69,
  anon_sym_BANGopen_BANG = 70,
  anon_sym_BANGthumb_BANG = 71,
  anon_sym_BANGbreath_BANG = 72,
  anon_sym_BANGpppp_BANG = 73,
  anon_sym_BANGppp_BANG = 74,
  anon_sym_BANGpp_BANG = 75,
  anon_sym_BANGp_BANG = 76,
  anon_sym_BANGmp_BANG = 77,
  anon_sym_BANGmf_BANG = 78,
  anon_sym_BANGf_BANG = 79,
  anon_sym_BANGff_BANG = 80,
  anon_sym_BANGfff_BANG = 81,
  anon_sym_BANGffff_BANG = 82,
  anon_sym_BANGsfz_BANG = 83,
  anon_sym_BANGcrescendo_LPAREN_BANG = 84,
  anon_sym_BANG_LT_LPAREN_BANG = 85,
  anon_sym_BANGcrescendo_RPAREN_BANG = 86,
  anon_sym_BANG_LT_RPAREN_BANG = 87,
  anon_sym_BANGdiminuendo_LPAREN_BANG = 88,
  anon_sym_BANG_GT_LPAREN_BANG = 89,
  anon_sym_BANGdiminuendo_RPAREN_BANG = 90,
  anon_sym_BANG_GT_RPAREN_BANG = 91,
  anon_sym_BANGsegno_BANG = 92,
  anon_sym_BANGcoda_BANG = 93,
  anon_sym_BANGD_DOTS_DOT_BANG = 94,
  anon_sym_BANGD_DOTC_DOT_BANG = 95,
  anon_sym_BANGdacoda_BANG = 96,
  anon_sym_BANGdacapo_BANG = 97,
  anon_sym_BANGfine_BANG = 98,
  anon_sym_BANGshortphrase_BANG = 99,
  anon_sym_BANGmediumphrase_BANG = 100,
  anon_sym_BANGlongphrase_BANG = 101,
  aux_sym_section_name_token1 = 102,
  sym_TEXT = 103,
  anon_sym_EQ = 104,
  aux_sym_words_line_token1 = 105,
  sym_source_file = 106,
  sym_TEXTLINE = 107,
  sym_COMMENTLINE = 108,
  sym_MUSIC_CODE = 109,
  sym_music_content = 110,
  sym_nte_or_chrd = 111,
  sym_beam = 112,
  sym_note_construct = 113,
  sym_chord_cstrct = 114,
  sym_note = 115,
  sym_chord_note = 116,
  sym_pitch = 117,
  sym_multimeasure_rest = 118,
  sym_grace_note = 119,
  sym_chord_symbol_note = 120,
  sym_chord_symbol = 121,
  sym_decoration = 122,
  sym_Nth_ending = 123,
  sym_nth_ending_number = 124,
  aux_sym_MUSIC_CODE_repeat1 = 125,
  aux_sym_beam_repeat1 = 126,
  aux_sym_beam_repeat2 = 127,
  aux_sym_note_construct_repeat1 = 128,
  aux_sym_chord_cstrct_repeat1 = 129,
  aux_sym_pitch_repeat1 = 130,
  aux_sym_grace_note_repeat1 = 131,
  aux_sym_nth_ending_number_repeat1 = 132,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [sym__space] = "_space",
  [sym_NEWLINE] = "NEWLINE",
  [anon_sym_BSLASH] = "\\",
  [anon_sym_PLUS] = "+",
  [anon_sym_COLON] = ":",
  [sym_note_skip] = "note_skip",
  [anon_sym_DASH] = "-",
  [sym_TILDE] = "TILDE",
  [aux_sym_COMMENTLINE_token1] = "COMMENTLINE_token1",
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
  [sym_end_of_repeated_section] = "end_of_repeated_section",
  [sym_start_end_of_two_repeated_sections] = "start_end_of_two_repeated_sections",
  [aux_sym_first_repeat_bar_token2] = "first_repeat_bar_token2",
  [aux_sym_verse_number_token1] = "verse_number_token1",
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
  [aux_sym_section_name_token1] = "section_name_token1",
  [sym_TEXT] = "TEXT",
  [anon_sym_EQ] = "=",
  [aux_sym_words_line_token1] = "words_line_token1",
  [sym_source_file] = "source_file",
  [sym_TEXTLINE] = "TEXTLINE",
  [sym_COMMENTLINE] = "COMMENTLINE",
  [sym_MUSIC_CODE] = "MUSIC_CODE",
  [sym_music_content] = "music_content",
  [sym_nte_or_chrd] = "nte_or_chrd",
  [sym_beam] = "beam",
  [sym_note_construct] = "note_construct",
  [sym_chord_cstrct] = "chord_cstrct",
  [sym_note] = "note",
  [sym_chord_note] = "chord_note",
  [sym_pitch] = "pitch",
  [sym_multimeasure_rest] = "multimeasure_rest",
  [sym_grace_note] = "grace_note",
  [sym_chord_symbol_note] = "chord_symbol_note",
  [sym_chord_symbol] = "chord_symbol",
  [sym_decoration] = "decoration",
  [sym_Nth_ending] = "Nth_ending",
  [sym_nth_ending_number] = "nth_ending_number",
  [aux_sym_MUSIC_CODE_repeat1] = "MUSIC_CODE_repeat1",
  [aux_sym_beam_repeat1] = "beam_repeat1",
  [aux_sym_beam_repeat2] = "beam_repeat2",
  [aux_sym_note_construct_repeat1] = "note_construct_repeat1",
  [aux_sym_chord_cstrct_repeat1] = "chord_cstrct_repeat1",
  [aux_sym_pitch_repeat1] = "pitch_repeat1",
  [aux_sym_grace_note_repeat1] = "grace_note_repeat1",
  [aux_sym_nth_ending_number_repeat1] = "nth_ending_number_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [sym__space] = sym__space,
  [sym_NEWLINE] = sym_NEWLINE,
  [anon_sym_BSLASH] = anon_sym_BSLASH,
  [anon_sym_PLUS] = anon_sym_PLUS,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_note_skip] = sym_note_skip,
  [anon_sym_DASH] = anon_sym_DASH,
  [sym_TILDE] = sym_TILDE,
  [aux_sym_COMMENTLINE_token1] = aux_sym_COMMENTLINE_token1,
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
  [sym_end_of_repeated_section] = sym_end_of_repeated_section,
  [sym_start_end_of_two_repeated_sections] = sym_start_end_of_two_repeated_sections,
  [aux_sym_first_repeat_bar_token2] = aux_sym_first_repeat_bar_token2,
  [aux_sym_verse_number_token1] = aux_sym_verse_number_token1,
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
  [aux_sym_section_name_token1] = aux_sym_section_name_token1,
  [sym_TEXT] = sym_TEXT,
  [anon_sym_EQ] = anon_sym_EQ,
  [aux_sym_words_line_token1] = aux_sym_words_line_token1,
  [sym_source_file] = sym_source_file,
  [sym_TEXTLINE] = sym_TEXTLINE,
  [sym_COMMENTLINE] = sym_COMMENTLINE,
  [sym_MUSIC_CODE] = sym_MUSIC_CODE,
  [sym_music_content] = sym_music_content,
  [sym_nte_or_chrd] = sym_nte_or_chrd,
  [sym_beam] = sym_beam,
  [sym_note_construct] = sym_note_construct,
  [sym_chord_cstrct] = sym_chord_cstrct,
  [sym_note] = sym_note,
  [sym_chord_note] = sym_chord_note,
  [sym_pitch] = sym_pitch,
  [sym_multimeasure_rest] = sym_multimeasure_rest,
  [sym_grace_note] = sym_grace_note,
  [sym_chord_symbol_note] = sym_chord_symbol_note,
  [sym_chord_symbol] = sym_chord_symbol,
  [sym_decoration] = sym_decoration,
  [sym_Nth_ending] = sym_Nth_ending,
  [sym_nth_ending_number] = sym_nth_ending_number,
  [aux_sym_MUSIC_CODE_repeat1] = aux_sym_MUSIC_CODE_repeat1,
  [aux_sym_beam_repeat1] = aux_sym_beam_repeat1,
  [aux_sym_beam_repeat2] = aux_sym_beam_repeat2,
  [aux_sym_note_construct_repeat1] = aux_sym_note_construct_repeat1,
  [aux_sym_chord_cstrct_repeat1] = aux_sym_chord_cstrct_repeat1,
  [aux_sym_pitch_repeat1] = aux_sym_pitch_repeat1,
  [aux_sym_grace_note_repeat1] = aux_sym_grace_note_repeat1,
  [aux_sym_nth_ending_number_repeat1] = aux_sym_nth_ending_number_repeat1,
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
  [sym_TILDE] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_COMMENTLINE_token1] = {
    .visible = false,
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
  [sym_end_of_repeated_section] = {
    .visible = true,
    .named = true,
  },
  [sym_start_end_of_two_repeated_sections] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_first_repeat_bar_token2] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_verse_number_token1] = {
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
  [aux_sym_section_name_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_TEXT] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_EQ] = {
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
  [sym_TEXTLINE] = {
    .visible = true,
    .named = true,
  },
  [sym_COMMENTLINE] = {
    .visible = true,
    .named = true,
  },
  [sym_MUSIC_CODE] = {
    .visible = true,
    .named = true,
  },
  [sym_music_content] = {
    .visible = true,
    .named = true,
  },
  [sym_nte_or_chrd] = {
    .visible = true,
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
  [sym_chord_cstrct] = {
    .visible = true,
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
  [sym_pitch] = {
    .visible = true,
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
  [aux_sym_MUSIC_CODE_repeat1] = {
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
  [aux_sym_chord_cstrct_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_pitch_repeat1] = {
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
  [6] = 5,
  [7] = 7,
  [8] = 8,
  [9] = 4,
  [10] = 7,
  [11] = 8,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 16,
  [18] = 13,
  [19] = 19,
  [20] = 12,
  [21] = 14,
  [22] = 15,
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
  [46] = 44,
  [47] = 19,
  [48] = 48,
  [49] = 49,
  [50] = 50,
  [51] = 51,
  [52] = 52,
  [53] = 27,
  [54] = 54,
  [55] = 30,
  [56] = 24,
  [57] = 26,
  [58] = 33,
  [59] = 29,
  [60] = 28,
  [61] = 25,
  [62] = 31,
  [63] = 40,
  [64] = 64,
  [65] = 37,
  [66] = 66,
  [67] = 38,
  [68] = 68,
  [69] = 69,
  [70] = 68,
  [71] = 39,
  [72] = 34,
  [73] = 41,
  [74] = 66,
  [75] = 75,
  [76] = 35,
  [77] = 75,
  [78] = 78,
  [79] = 36,
  [80] = 69,
  [81] = 42,
  [82] = 82,
  [83] = 64,
  [84] = 82,
  [85] = 85,
  [86] = 86,
  [87] = 87,
  [88] = 88,
  [89] = 85,
  [90] = 88,
  [91] = 86,
  [92] = 87,
  [93] = 93,
  [94] = 94,
  [95] = 95,
  [96] = 95,
  [97] = 97,
  [98] = 97,
  [99] = 32,
  [100] = 100,
  [101] = 23,
  [102] = 102,
  [103] = 103,
  [104] = 102,
  [105] = 105,
  [106] = 106,
  [107] = 107,
  [108] = 106,
  [109] = 109,
  [110] = 43,
  [111] = 103,
  [112] = 112,
  [113] = 113,
  [114] = 114,
  [115] = 115,
  [116] = 116,
  [117] = 117,
  [118] = 114,
  [119] = 119,
  [120] = 49,
  [121] = 50,
  [122] = 122,
  [123] = 52,
  [124] = 124,
  [125] = 125,
  [126] = 126,
  [127] = 127,
  [128] = 128,
  [129] = 129,
  [130] = 130,
  [131] = 131,
  [132] = 132,
  [133] = 133,
  [134] = 134,
  [135] = 135,
  [136] = 127,
  [137] = 137,
  [138] = 138,
  [139] = 139,
  [140] = 140,
  [141] = 141,
  [142] = 137,
  [143] = 143,
  [144] = 144,
  [145] = 145,
  [146] = 141,
  [147] = 147,
  [148] = 148,
  [149] = 149,
  [150] = 150,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      ACCEPT_TOKEN(aux_sym_section_name_token1);
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '!') ADVANCE(72);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '$') ADVANCE(279);
      if (lookahead == '\'') ADVANCE(291);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '*') ADVANCE(275);
      if (lookahead == '+') ADVANCE(273);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == '0') ADVANCE(296);
      if (lookahead == ':') ADVANCE(274);
      if (lookahead == '=') ADVANCE(410);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(272);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead == '{') ADVANCE(303);
      if (lookahead == '|') ADVANCE(343);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '~') ADVANCE(277);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(300);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == ',') ADVANCE(342);
      if (lookahead == '-') ADVANCE(276);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(287);
      if (lookahead == 'X') ADVANCE(294);
      if (lookahead == 'Z') ADVANCE(293);
      if (lookahead == '[') ADVANCE(284);
      if (lookahead == '^') ADVANCE(288);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == '{') ADVANCE(303);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(292);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(341);
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
          lookahead == '~') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(290);
      END_STATE();
    case 2:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == ':') ADVANCE(261);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(287);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '^') ADVANCE(288);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead == '{') ADVANCE(303);
      if (lookahead == '|') ADVANCE(343);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(291);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(300);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(292);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(299);
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
          lookahead == '~') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(290);
      END_STATE();
    case 3:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(305);
      if (lookahead == '/') ADVANCE(307);
      if (lookahead == '7' ||
          lookahead == '9') ADVANCE(339);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(287);
      if (lookahead == '^') ADVANCE(288);
      if (lookahead == '_') ADVANCE(312);
      if (lookahead == 'a') ADVANCE(337);
      if (lookahead == 'd') ADVANCE(321);
      if (lookahead == 'm') ADVANCE(313);
      if (lookahead == 's') ADVANCE(338);
      if (('0' <= lookahead && lookahead <= '8') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 4:
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(268);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 5:
      if (lookahead == ' ') ADVANCE(73);
      END_STATE();
    case 6:
      if (lookahead == ' ') ADVANCE(34);
      END_STATE();
    case 7:
      if (lookahead == '!') ADVANCE(369);
      END_STATE();
    case 8:
      if (lookahead == '!') ADVANCE(5);
      END_STATE();
    case 9:
      if (lookahead == '!') ADVANCE(362);
      if (lookahead == '(') ADVANCE(14);
      if (lookahead == ')') ADVANCE(15);
      END_STATE();
    case 10:
      if (lookahead == '!') ADVANCE(385);
      if (lookahead == 'e') ADVANCE(217);
      if (lookahead == 'f') ADVANCE(16);
      if (lookahead == 'i') ADVANCE(185);
      END_STATE();
    case 11:
      if (lookahead == '!') ADVANCE(382);
      if (lookahead == 'l') ADVANCE(250);
      if (lookahead == 'p') ADVANCE(19);
      if (lookahead == 'r') ADVANCE(94);
      END_STATE();
    case 12:
      if (lookahead == '!') ADVANCE(391);
      END_STATE();
    case 13:
      if (lookahead == '!') ADVANCE(393);
      END_STATE();
    case 14:
      if (lookahead == '!') ADVANCE(395);
      END_STATE();
    case 15:
      if (lookahead == '!') ADVANCE(397);
      END_STATE();
    case 16:
      if (lookahead == '!') ADVANCE(386);
      if (lookahead == 'f') ADVANCE(20);
      END_STATE();
    case 17:
      if (lookahead == '!') ADVANCE(384);
      END_STATE();
    case 18:
      if (lookahead == '!') ADVANCE(383);
      END_STATE();
    case 19:
      if (lookahead == '!') ADVANCE(381);
      if (lookahead == 'p') ADVANCE(21);
      END_STATE();
    case 20:
      if (lookahead == '!') ADVANCE(387);
      if (lookahead == 'f') ADVANCE(26);
      END_STATE();
    case 21:
      if (lookahead == '!') ADVANCE(380);
      if (lookahead == 'p') ADVANCE(30);
      END_STATE();
    case 22:
      if (lookahead == '!') ADVANCE(389);
      END_STATE();
    case 23:
      if (lookahead == '!') ADVANCE(401);
      END_STATE();
    case 24:
      if (lookahead == '!') ADVANCE(400);
      END_STATE();
    case 25:
      if (lookahead == '!') ADVANCE(399);
      END_STATE();
    case 26:
      if (lookahead == '!') ADVANCE(388);
      END_STATE();
    case 27:
      if (lookahead == '!') ADVANCE(404);
      END_STATE();
    case 28:
      if (lookahead == '!') ADVANCE(376);
      END_STATE();
    case 29:
      if (lookahead == '!') ADVANCE(370);
      END_STATE();
    case 30:
      if (lookahead == '!') ADVANCE(379);
      END_STATE();
    case 31:
      if (lookahead == '!') ADVANCE(356);
      END_STATE();
    case 32:
      if (lookahead == '!') ADVANCE(371);
      END_STATE();
    case 33:
      if (lookahead == '!') ADVANCE(357);
      if (lookahead == 'x') ADVANCE(39);
      END_STATE();
    case 34:
      if (lookahead == '!') ADVANCE(77);
      END_STATE();
    case 35:
      if (lookahead == '!') ADVANCE(398);
      END_STATE();
    case 36:
      if (lookahead == '!') ADVANCE(372);
      END_STATE();
    case 37:
      if (lookahead == '!') ADVANCE(377);
      END_STATE();
    case 38:
      if (lookahead == '!') ADVANCE(349);
      if (lookahead == '(') ADVANCE(47);
      if (lookahead == ')') ADVANCE(48);
      END_STATE();
    case 39:
      if (lookahead == '!') ADVANCE(358);
      END_STATE();
    case 40:
      if (lookahead == '!') ADVANCE(374);
      END_STATE();
    case 41:
      if (lookahead == '!') ADVANCE(373);
      END_STATE();
    case 42:
      if (lookahead == '!') ADVANCE(363);
      END_STATE();
    case 43:
      if (lookahead == '!') ADVANCE(378);
      END_STATE();
    case 44:
      if (lookahead == '!') ADVANCE(403);
      END_STATE();
    case 45:
      if (lookahead == '!') ADVANCE(402);
      END_STATE();
    case 46:
      if (lookahead == '!') ADVANCE(367);
      END_STATE();
    case 47:
      if (lookahead == '!') ADVANCE(350);
      END_STATE();
    case 48:
      if (lookahead == '!') ADVANCE(351);
      END_STATE();
    case 49:
      if (lookahead == '!') ADVANCE(368);
      END_STATE();
    case 50:
      if (lookahead == '!') ADVANCE(375);
      END_STATE();
    case 51:
      if (lookahead == '!') ADVANCE(365);
      END_STATE();
    case 52:
      if (lookahead == '!') ADVANCE(354);
      END_STATE();
    case 53:
      if (lookahead == '!') ADVANCE(361);
      END_STATE();
    case 54:
      if (lookahead == '!') ADVANCE(364);
      END_STATE();
    case 55:
      if (lookahead == '!') ADVANCE(390);
      END_STATE();
    case 56:
      if (lookahead == '!') ADVANCE(392);
      END_STATE();
    case 57:
      if (lookahead == '!') ADVANCE(407);
      END_STATE();
    case 58:
      if (lookahead == '!') ADVANCE(394);
      END_STATE();
    case 59:
      if (lookahead == '!') ADVANCE(396);
      END_STATE();
    case 60:
      if (lookahead == '!') ADVANCE(405);
      END_STATE();
    case 61:
      if (lookahead == '!') ADVANCE(359);
      if (lookahead == 'x') ADVANCE(66);
      END_STATE();
    case 62:
      if (lookahead == '!') ADVANCE(352);
      END_STATE();
    case 63:
      if (lookahead == '!') ADVANCE(406);
      END_STATE();
    case 64:
      if (lookahead == '!') ADVANCE(355);
      END_STATE();
    case 65:
      if (lookahead == '!') ADVANCE(353);
      END_STATE();
    case 66:
      if (lookahead == '!') ADVANCE(360);
      END_STATE();
    case 67:
      if (lookahead == '!') ADVANCE(366);
      END_STATE();
    case 68:
      if (lookahead == '"') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 69:
      if (lookahead == '(') ADVANCE(12);
      if (lookahead == ')') ADVANCE(13);
      END_STATE();
    case 70:
      if (lookahead == '(') ADVANCE(55);
      if (lookahead == ')') ADVANCE(56);
      END_STATE();
    case 71:
      if (lookahead == '(') ADVANCE(58);
      if (lookahead == ')') ADVANCE(59);
      END_STATE();
    case 72:
      if (lookahead == '+') ADVANCE(7);
      if (lookahead == '0') ADVANCE(8);
      if (lookahead == '<') ADVANCE(69);
      if (lookahead == '>') ADVANCE(9);
      if (lookahead == 'D') ADVANCE(74);
      if (lookahead == 'a') ADVANCE(101);
      if (lookahead == 'b') ADVANCE(215);
      if (lookahead == 'c') ADVANCE(192);
      if (lookahead == 'd') ADVANCE(84);
      if (lookahead == 'e') ADVANCE(169);
      if (lookahead == 'f') ADVANCE(10);
      if (lookahead == 'i') ADVANCE(176);
      if (lookahead == 'l') ADVANCE(193);
      if (lookahead == 'm') ADVANCE(118);
      if (lookahead == 'o') ADVANCE(209);
      if (lookahead == 'p') ADVANCE(11);
      if (lookahead == 'r') ADVANCE(194);
      if (lookahead == 's') ADVANCE(116);
      if (lookahead == 't') ADVANCE(119);
      if (lookahead == 'u') ADVANCE(206);
      if (lookahead == 'w') ADVANCE(120);
      END_STATE();
    case 73:
      if (lookahead == '-') ADVANCE(6);
      END_STATE();
    case 74:
      if (lookahead == '.') ADVANCE(82);
      END_STATE();
    case 75:
      if (lookahead == '.') ADVANCE(23);
      END_STATE();
    case 76:
      if (lookahead == '.') ADVANCE(24);
      END_STATE();
    case 77:
      if (lookahead == '5') ADVANCE(49);
      END_STATE();
    case 78:
      if (lookahead == ':') ADVANCE(79);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 79:
      if (lookahead == ':') ADVANCE(264);
      END_STATE();
    case 80:
      if (lookahead == ':') ADVANCE(264);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(78);
      END_STATE();
    case 81:
      if (lookahead == ':') ADVANCE(80);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 82:
      if (lookahead == 'C') ADVANCE(75);
      if (lookahead == 'S') ADVANCE(76);
      END_STATE();
    case 83:
      if (lookahead == 'a') ADVANCE(239);
      END_STATE();
    case 84:
      if (lookahead == 'a') ADVANCE(102);
      if (lookahead == 'i') ADVANCE(170);
      if (lookahead == 'o') ADVANCE(257);
      END_STATE();
    case 85:
      if (lookahead == 'a') ADVANCE(232);
      END_STATE();
    case 86:
      if (lookahead == 'a') ADVANCE(211);
      END_STATE();
    case 87:
      if (lookahead == 'a') ADVANCE(235);
      END_STATE();
    case 88:
      if (lookahead == 'a') ADVANCE(212);
      if (lookahead == 'o') ADVANCE(110);
      END_STATE();
    case 89:
      if (lookahead == 'a') ADVANCE(246);
      END_STATE();
    case 90:
      if (lookahead == 'a') ADVANCE(25);
      END_STATE();
    case 91:
      if (lookahead == 'a') ADVANCE(45);
      END_STATE();
    case 92:
      if (lookahead == 'a') ADVANCE(51);
      END_STATE();
    case 93:
      if (lookahead == 'a') ADVANCE(67);
      END_STATE();
    case 94:
      if (lookahead == 'a') ADVANCE(162);
      END_STATE();
    case 95:
      if (lookahead == 'a') ADVANCE(236);
      END_STATE();
    case 96:
      if (lookahead == 'a') ADVANCE(248);
      END_STATE();
    case 97:
      if (lookahead == 'a') ADVANCE(237);
      END_STATE();
    case 98:
      if (lookahead == 'b') ADVANCE(195);
      if (lookahead == 'p') ADVANCE(141);
      END_STATE();
    case 99:
      if (lookahead == 'b') ADVANCE(37);
      END_STATE();
    case 100:
      if (lookahead == 'b') ADVANCE(202);
      END_STATE();
    case 101:
      if (lookahead == 'c') ADVANCE(103);
      if (lookahead == 'r') ADVANCE(210);
      END_STATE();
    case 102:
      if (lookahead == 'c') ADVANCE(88);
      END_STATE();
    case 103:
      if (lookahead == 'c') ADVANCE(126);
      END_STATE();
    case 104:
      if (lookahead == 'c') ADVANCE(128);
      END_STATE();
    case 105:
      if (lookahead == 'd') ADVANCE(142);
      END_STATE();
    case 106:
      if (lookahead == 'd') ADVANCE(147);
      END_STATE();
    case 107:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 108:
      if (lookahead == 'd') ADVANCE(153);
      END_STATE();
    case 109:
      if (lookahead == 'd') ADVANCE(201);
      END_STATE();
    case 110:
      if (lookahead == 'd') ADVANCE(91);
      END_STATE();
    case 111:
      if (lookahead == 'd') ADVANCE(130);
      END_STATE();
    case 112:
      if (lookahead == 'd') ADVANCE(136);
      END_STATE();
    case 113:
      if (lookahead == 'd') ADVANCE(137);
      END_STATE();
    case 114:
      if (lookahead == 'd') ADVANCE(138);
      END_STATE();
    case 115:
      if (lookahead == 'd') ADVANCE(203);
      END_STATE();
    case 116:
      if (lookahead == 'e') ADVANCE(145);
      if (lookahead == 'f') ADVANCE(260);
      if (lookahead == 'h') ADVANCE(196);
      if (lookahead == 'l') ADVANCE(154);
      if (lookahead == 'n') ADVANCE(86);
      END_STATE();
    case 117:
      if (lookahead == 'e') ADVANCE(238);
      END_STATE();
    case 118:
      if (lookahead == 'e') ADVANCE(108);
      if (lookahead == 'f') ADVANCE(17);
      if (lookahead == 'o') ADVANCE(218);
      if (lookahead == 'p') ADVANCE(18);
      END_STATE();
    case 119:
      if (lookahead == 'e') ADVANCE(181);
      if (lookahead == 'h') ADVANCE(252);
      if (lookahead == 'r') ADVANCE(157);
      if (lookahead == 'u') ADVANCE(221);
      END_STATE();
    case 120:
      if (lookahead == 'e') ADVANCE(106);
      END_STATE();
    case 121:
      if (lookahead == 'e') ADVANCE(83);
      END_STATE();
    case 122:
      if (lookahead == 'e') ADVANCE(143);
      END_STATE();
    case 123:
      if (lookahead == 'e') ADVANCE(187);
      END_STATE();
    case 124:
      if (lookahead == 'e') ADVANCE(220);
      END_STATE();
    case 125:
      if (lookahead == 'e') ADVANCE(105);
      END_STATE();
    case 126:
      if (lookahead == 'e') ADVANCE(182);
      END_STATE();
    case 127:
      if (lookahead == 'e') ADVANCE(224);
      END_STATE();
    case 128:
      if (lookahead == 'e') ADVANCE(186);
      END_STATE();
    case 129:
      if (lookahead == 'e') ADVANCE(27);
      END_STATE();
    case 130:
      if (lookahead == 'e') ADVANCE(36);
      END_STATE();
    case 131:
      if (lookahead == 'e') ADVANCE(41);
      END_STATE();
    case 132:
      if (lookahead == 'e') ADVANCE(57);
      END_STATE();
    case 133:
      if (lookahead == 'e') ADVANCE(60);
      END_STATE();
    case 134:
      if (lookahead == 'e') ADVANCE(63);
      END_STATE();
    case 135:
      if (lookahead == 'e') ADVANCE(219);
      END_STATE();
    case 136:
      if (lookahead == 'e') ADVANCE(188);
      END_STATE();
    case 137:
      if (lookahead == 'e') ADVANCE(189);
      END_STATE();
    case 138:
      if (lookahead == 'e') ADVANCE(190);
      END_STATE();
    case 139:
      if (lookahead == 'e') ADVANCE(191);
      END_STATE();
    case 140:
      if (lookahead == 'e') ADVANCE(230);
      END_STATE();
    case 141:
      if (lookahead == 'e') ADVANCE(231);
      END_STATE();
    case 142:
      if (lookahead == 'f') ADVANCE(140);
      if (lookahead == 't') ADVANCE(254);
      END_STATE();
    case 143:
      if (lookahead == 'g') ADVANCE(144);
      END_STATE();
    case 144:
      if (lookahead == 'g') ADVANCE(159);
      END_STATE();
    case 145:
      if (lookahead == 'g') ADVANCE(183);
      END_STATE();
    case 146:
      if (lookahead == 'g') ADVANCE(208);
      END_STATE();
    case 147:
      if (lookahead == 'g') ADVANCE(131);
      END_STATE();
    case 148:
      if (lookahead == 'h') ADVANCE(85);
      END_STATE();
    case 149:
      if (lookahead == 'h') ADVANCE(222);
      END_STATE();
    case 150:
      if (lookahead == 'h') ADVANCE(43);
      END_STATE();
    case 151:
      if (lookahead == 'h') ADVANCE(227);
      END_STATE();
    case 152:
      if (lookahead == 'h') ADVANCE(229);
      END_STATE();
    case 153:
      if (lookahead == 'i') ADVANCE(253);
      END_STATE();
    case 154:
      if (lookahead == 'i') ADVANCE(111);
      END_STATE();
    case 155:
      if (lookahead == 'i') ADVANCE(234);
      END_STATE();
    case 156:
      if (lookahead == 'i') ADVANCE(184);
      END_STATE();
    case 157:
      if (lookahead == 'i') ADVANCE(163);
      END_STATE();
    case 158:
      if (lookahead == 'i') ADVANCE(164);
      END_STATE();
    case 159:
      if (lookahead == 'i') ADVANCE(200);
      END_STATE();
    case 160:
      if (lookahead == 'l') ADVANCE(38);
      END_STATE();
    case 161:
      if (lookahead == 'l') ADVANCE(167);
      END_STATE();
    case 162:
      if (lookahead == 'l') ADVANCE(165);
      END_STATE();
    case 163:
      if (lookahead == 'l') ADVANCE(160);
      END_STATE();
    case 164:
      if (lookahead == 'l') ADVANCE(166);
      END_STATE();
    case 165:
      if (lookahead == 'l') ADVANCE(240);
      END_STATE();
    case 166:
      if (lookahead == 'l') ADVANCE(127);
      END_STATE();
    case 167:
      if (lookahead == 'l') ADVANCE(31);
      END_STATE();
    case 168:
      if (lookahead == 'm') ADVANCE(99);
      END_STATE();
    case 169:
      if (lookahead == 'm') ADVANCE(207);
      END_STATE();
    case 170:
      if (lookahead == 'm') ADVANCE(156);
      END_STATE();
    case 171:
      if (lookahead == 'm') ADVANCE(204);
      END_STATE();
    case 172:
      if (lookahead == 'm') ADVANCE(89);
      END_STATE();
    case 173:
      if (lookahead == 'm') ADVANCE(96);
      END_STATE();
    case 174:
      if (lookahead == 'm') ADVANCE(205);
      END_STATE();
    case 175:
      if (lookahead == 'm') ADVANCE(214);
      END_STATE();
    case 176:
      if (lookahead == 'n') ADVANCE(256);
      END_STATE();
    case 177:
      if (lookahead == 'n') ADVANCE(100);
      END_STATE();
    case 178:
      if (lookahead == 'n') ADVANCE(33);
      END_STATE();
    case 179:
      if (lookahead == 'n') ADVANCE(146);
      if (lookahead == 'w') ADVANCE(135);
      END_STATE();
    case 180:
      if (lookahead == 'n') ADVANCE(61);
      END_STATE();
    case 181:
      if (lookahead == 'n') ADVANCE(251);
      END_STATE();
    case 182:
      if (lookahead == 'n') ADVANCE(241);
      END_STATE();
    case 183:
      if (lookahead == 'n') ADVANCE(197);
      END_STATE();
    case 184:
      if (lookahead == 'n') ADVANCE(255);
      END_STATE();
    case 185:
      if (lookahead == 'n') ADVANCE(129);
      END_STATE();
    case 186:
      if (lookahead == 'n') ADVANCE(109);
      END_STATE();
    case 187:
      if (lookahead == 'n') ADVANCE(28);
      END_STATE();
    case 188:
      if (lookahead == 'n') ADVANCE(242);
      END_STATE();
    case 189:
      if (lookahead == 'n') ADVANCE(243);
      END_STATE();
    case 190:
      if (lookahead == 'n') ADVANCE(244);
      END_STATE();
    case 191:
      if (lookahead == 'n') ADVANCE(115);
      END_STATE();
    case 192:
      if (lookahead == 'o') ADVANCE(107);
      if (lookahead == 'r') ADVANCE(117);
      END_STATE();
    case 193:
      if (lookahead == 'o') ADVANCE(179);
      END_STATE();
    case 194:
      if (lookahead == 'o') ADVANCE(161);
      END_STATE();
    case 195:
      if (lookahead == 'o') ADVANCE(258);
      END_STATE();
    case 196:
      if (lookahead == 'o') ADVANCE(216);
      END_STATE();
    case 197:
      if (lookahead == 'o') ADVANCE(35);
      END_STATE();
    case 198:
      if (lookahead == 'o') ADVANCE(44);
      END_STATE();
    case 199:
      if (lookahead == 'o') ADVANCE(46);
      END_STATE();
    case 200:
      if (lookahead == 'o') ADVANCE(53);
      END_STATE();
    case 201:
      if (lookahead == 'o') ADVANCE(70);
      END_STATE();
    case 202:
      if (lookahead == 'o') ADVANCE(259);
      END_STATE();
    case 203:
      if (lookahead == 'o') ADVANCE(71);
      END_STATE();
    case 204:
      if (lookahead == 'o') ADVANCE(226);
      END_STATE();
    case 205:
      if (lookahead == 'o') ADVANCE(228);
      END_STATE();
    case 206:
      if (lookahead == 'p') ADVANCE(98);
      END_STATE();
    case 207:
      if (lookahead == 'p') ADVANCE(148);
      END_STATE();
    case 208:
      if (lookahead == 'p') ADVANCE(149);
      END_STATE();
    case 209:
      if (lookahead == 'p') ADVANCE(123);
      END_STATE();
    case 210:
      if (lookahead == 'p') ADVANCE(122);
      END_STATE();
    case 211:
      if (lookahead == 'p') ADVANCE(32);
      END_STATE();
    case 212:
      if (lookahead == 'p') ADVANCE(198);
      END_STATE();
    case 213:
      if (lookahead == 'p') ADVANCE(151);
      END_STATE();
    case 214:
      if (lookahead == 'p') ADVANCE(152);
      END_STATE();
    case 215:
      if (lookahead == 'r') ADVANCE(121);
      END_STATE();
    case 216:
      if (lookahead == 'r') ADVANCE(249);
      END_STATE();
    case 217:
      if (lookahead == 'r') ADVANCE(172);
      END_STATE();
    case 218:
      if (lookahead == 'r') ADVANCE(112);
      END_STATE();
    case 219:
      if (lookahead == 'r') ADVANCE(171);
      END_STATE();
    case 220:
      if (lookahead == 'r') ADVANCE(245);
      END_STATE();
    case 221:
      if (lookahead == 'r') ADVANCE(178);
      END_STATE();
    case 222:
      if (lookahead == 'r') ADVANCE(87);
      END_STATE();
    case 223:
      if (lookahead == 'r') ADVANCE(180);
      END_STATE();
    case 224:
      if (lookahead == 'r') ADVANCE(64);
      END_STATE();
    case 225:
      if (lookahead == 'r') ADVANCE(158);
      END_STATE();
    case 226:
      if (lookahead == 'r') ADVANCE(113);
      END_STATE();
    case 227:
      if (lookahead == 'r') ADVANCE(95);
      END_STATE();
    case 228:
      if (lookahead == 'r') ADVANCE(114);
      END_STATE();
    case 229:
      if (lookahead == 'r') ADVANCE(97);
      END_STATE();
    case 230:
      if (lookahead == 'r') ADVANCE(173);
      END_STATE();
    case 231:
      if (lookahead == 'r') ADVANCE(174);
      END_STATE();
    case 232:
      if (lookahead == 's') ADVANCE(155);
      END_STATE();
    case 233:
      if (lookahead == 's') ADVANCE(29);
      END_STATE();
    case 234:
      if (lookahead == 's') ADVANCE(54);
      END_STATE();
    case 235:
      if (lookahead == 's') ADVANCE(132);
      END_STATE();
    case 236:
      if (lookahead == 's') ADVANCE(133);
      END_STATE();
    case 237:
      if (lookahead == 's') ADVANCE(134);
      END_STATE();
    case 238:
      if (lookahead == 's') ADVANCE(104);
      END_STATE();
    case 239:
      if (lookahead == 't') ADVANCE(150);
      END_STATE();
    case 240:
      if (lookahead == 't') ADVANCE(225);
      END_STATE();
    case 241:
      if (lookahead == 't') ADVANCE(42);
      END_STATE();
    case 242:
      if (lookahead == 't') ADVANCE(52);
      END_STATE();
    case 243:
      if (lookahead == 't') ADVANCE(62);
      END_STATE();
    case 244:
      if (lookahead == 't') ADVANCE(65);
      END_STATE();
    case 245:
      if (lookahead == 't') ADVANCE(125);
      END_STATE();
    case 246:
      if (lookahead == 't') ADVANCE(92);
      END_STATE();
    case 247:
      if (lookahead == 't') ADVANCE(199);
      END_STATE();
    case 248:
      if (lookahead == 't') ADVANCE(93);
      END_STATE();
    case 249:
      if (lookahead == 't') ADVANCE(213);
      END_STATE();
    case 250:
      if (lookahead == 'u') ADVANCE(233);
      END_STATE();
    case 251:
      if (lookahead == 'u') ADVANCE(247);
      END_STATE();
    case 252:
      if (lookahead == 'u') ADVANCE(168);
      END_STATE();
    case 253:
      if (lookahead == 'u') ADVANCE(175);
      END_STATE();
    case 254:
      if (lookahead == 'u') ADVANCE(223);
      END_STATE();
    case 255:
      if (lookahead == 'u') ADVANCE(139);
      END_STATE();
    case 256:
      if (lookahead == 'v') ADVANCE(124);
      END_STATE();
    case 257:
      if (lookahead == 'w') ADVANCE(177);
      END_STATE();
    case 258:
      if (lookahead == 'w') ADVANCE(40);
      END_STATE();
    case 259:
      if (lookahead == 'w') ADVANCE(50);
      END_STATE();
    case 260:
      if (lookahead == 'z') ADVANCE(22);
      END_STATE();
    case 261:
      if (lookahead == '|') ADVANCE(347);
      END_STATE();
    case 262:
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 263:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(81);
      END_STATE();
    case 264:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 265:
      if (lookahead != 0 &&
          lookahead != '%') ADVANCE(278);
      END_STATE();
    case 266:
      if (eof) ADVANCE(267);
      if (lookahead == '\n') ADVANCE(270);
      if (lookahead == ' ') ADVANCE(268);
      if (lookahead == '"') ADVANCE(306);
      if (lookahead == '$') ADVANCE(279);
      if (lookahead == '%') ADVANCE(265);
      if (lookahead == '(') ADVANCE(281);
      if (lookahead == ')') ADVANCE(282);
      if (lookahead == '-') ADVANCE(283);
      if (lookahead == '/') ADVANCE(298);
      if (lookahead == ':') ADVANCE(261);
      if (lookahead == '=' ||
          (9837 <= lookahead && lookahead <= 9839) ||
          lookahead == 119082 ||
          lookahead == 119083) ADVANCE(287);
      if (lookahead == 'X') ADVANCE(294);
      if (lookahead == 'Z') ADVANCE(293);
      if (lookahead == '[') ADVANCE(285);
      if (lookahead == '\\') ADVANCE(272);
      if (lookahead == ']') ADVANCE(286);
      if (lookahead == '^') ADVANCE(288);
      if (lookahead == '_') ADVANCE(289);
      if (lookahead == '`') ADVANCE(280);
      if (lookahead == '{') ADVANCE(303);
      if (lookahead == '|') ADVANCE(343);
      if (lookahead == '}') ADVANCE(304);
      if (lookahead == '\'' ||
          lookahead == ',') ADVANCE(291);
      if (('<' <= lookahead && lookahead <= '>')) ADVANCE(300);
      if (lookahead == 'x' ||
          lookahead == 'z') ADVANCE(292);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(299);
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
          lookahead == '~') ADVANCE(340);
      if (('A' <= lookahead && lookahead <= 'G') ||
          ('a' <= lookahead && lookahead <= 'g')) ADVANCE(290);
      END_STATE();
    case 267:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 268:
      ACCEPT_TOKEN(sym__space);
      END_STATE();
    case 269:
      ACCEPT_TOKEN(sym__space);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(409);
      END_STATE();
    case 270:
      ACCEPT_TOKEN(sym_NEWLINE);
      END_STATE();
    case 271:
      ACCEPT_TOKEN(sym_NEWLINE);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(409);
      END_STATE();
    case 272:
      ACCEPT_TOKEN(anon_sym_BSLASH);
      END_STATE();
    case 273:
      ACCEPT_TOKEN(anon_sym_PLUS);
      if (lookahead == ':') ADVANCE(411);
      END_STATE();
    case 274:
      ACCEPT_TOKEN(anon_sym_COLON);
      if (lookahead == ':') ADVANCE(348);
      if (lookahead == '|') ADVANCE(347);
      END_STATE();
    case 275:
      ACCEPT_TOKEN(sym_note_skip);
      END_STATE();
    case 276:
      ACCEPT_TOKEN(anon_sym_DASH);
      END_STATE();
    case 277:
      ACCEPT_TOKEN(sym_TILDE);
      END_STATE();
    case 278:
      ACCEPT_TOKEN(aux_sym_COMMENTLINE_token1);
      END_STATE();
    case 279:
      ACCEPT_TOKEN(anon_sym_DOLLAR);
      END_STATE();
    case 280:
      ACCEPT_TOKEN(anon_sym_BQUOTE);
      END_STATE();
    case 281:
      ACCEPT_TOKEN(sym_slur_open);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 282:
      ACCEPT_TOKEN(sym_slur_close);
      END_STATE();
    case 283:
      ACCEPT_TOKEN(aux_sym_note_construct_token1);
      END_STATE();
    case 284:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 285:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      if (lookahead == '|') ADVANCE(346);
      END_STATE();
    case 286:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 287:
      ACCEPT_TOKEN(sym_alteration);
      END_STATE();
    case 288:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '^') ADVANCE(287);
      END_STATE();
    case 289:
      ACCEPT_TOKEN(sym_alteration);
      if (lookahead == '_') ADVANCE(287);
      END_STATE();
    case 290:
      ACCEPT_TOKEN(sym_note_letter);
      END_STATE();
    case 291:
      ACCEPT_TOKEN(sym_octave);
      END_STATE();
    case 292:
      ACCEPT_TOKEN(sym_rest);
      END_STATE();
    case 293:
      ACCEPT_TOKEN(anon_sym_Z);
      END_STATE();
    case 294:
      ACCEPT_TOKEN(anon_sym_X);
      END_STATE();
    case 295:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (lookahead == '/') ADVANCE(262);
      if (lookahead == '0') ADVANCE(296);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(295);
      END_STATE();
    case 296:
      ACCEPT_TOKEN(aux_sym_multimeasure_rest_token1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(296);
      END_STATE();
    case 297:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(297);
      END_STATE();
    case 298:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(297);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 299:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '/') ADVANCE(262);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(299);
      END_STATE();
    case 300:
      ACCEPT_TOKEN(sym_rhythm);
      if (lookahead == '<' ||
          lookahead == '>') ADVANCE(300);
      END_STATE();
    case 301:
      ACCEPT_TOKEN(sym_rhythm);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(301);
      END_STATE();
    case 302:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      END_STATE();
    case 303:
      ACCEPT_TOKEN(aux_sym_grace_note_token1);
      if (lookahead == '/') ADVANCE(302);
      END_STATE();
    case 304:
      ACCEPT_TOKEN(aux_sym_grace_note_token2);
      END_STATE();
    case 305:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      END_STATE();
    case 306:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token1);
      if (lookahead == '"') ADVANCE(308);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(68);
      END_STATE();
    case 307:
      ACCEPT_TOKEN(aux_sym_chord_symbol_token2);
      END_STATE();
    case 308:
      ACCEPT_TOKEN(sym_annotation);
      END_STATE();
    case 309:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == ':') ADVANCE(263);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(309);
      END_STATE();
    case 310:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      END_STATE();
    case 311:
      ACCEPT_TOKEN(sym_tuplet_marker);
      if (lookahead == '\t' ||
          lookahead == '\n' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(310);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(311);
      END_STATE();
    case 312:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == '_') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 313:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'a') ADVANCE(324);
      if (lookahead == 'i') ADVANCE(327);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('b' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 314:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 315:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'd') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 316:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(314);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 317:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(328);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 318:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'e') ADVANCE(329);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 319:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'g') ADVANCE(325);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 320:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'h') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 321:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(326);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 322:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(330);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 323:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'i') ADVANCE(335);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 324:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'j') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 325:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(317);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 326:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'm') ADVANCE(322);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 327:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(331);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 328:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(336);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 329:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(315);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 330:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'n') ADVANCE(323);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 331:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'o') ADVANCE(333);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 332:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'p') ADVANCE(318);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 333:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'r') ADVANCE(339);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 334:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(332);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 335:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 's') ADVANCE(320);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 336:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 't') ADVANCE(316);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 337:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(319);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 338:
      ACCEPT_TOKEN(sym_chord_type);
      if (lookahead == 'u') ADVANCE(334);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 339:
      ACCEPT_TOKEN(sym_chord_type);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(339);
      END_STATE();
    case 340:
      ACCEPT_TOKEN(sym_decoration_shorthand);
      END_STATE();
    case 341:
      ACCEPT_TOKEN(aux_sym_nth_ending_number_token1);
      END_STATE();
    case 342:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 343:
      ACCEPT_TOKEN(sym_bar_line);
      if (lookahead == ']') ADVANCE(344);
      if (lookahead == '|') ADVANCE(345);
      END_STATE();
    case 344:
      ACCEPT_TOKEN(sym_close_thin_thick_double_bar_line);
      END_STATE();
    case 345:
      ACCEPT_TOKEN(sym_thin_double_bar_line);
      END_STATE();
    case 346:
      ACCEPT_TOKEN(sym_open_thick_thin_double_bar_line);
      END_STATE();
    case 347:
      ACCEPT_TOKEN(sym_end_of_repeated_section);
      END_STATE();
    case 348:
      ACCEPT_TOKEN(sym_start_end_of_two_repeated_sections);
      END_STATE();
    case 349:
      ACCEPT_TOKEN(anon_sym_BANGtrill_BANG);
      END_STATE();
    case 350:
      ACCEPT_TOKEN(anon_sym_BANGtrill_LPAREN_BANG);
      END_STATE();
    case 351:
      ACCEPT_TOKEN(anon_sym_BANGtrill_RPAREN_BANG);
      END_STATE();
    case 352:
      ACCEPT_TOKEN(anon_sym_BANGlowermordent_BANG);
      END_STATE();
    case 353:
      ACCEPT_TOKEN(anon_sym_BANGuppermordent_BANG);
      END_STATE();
    case 354:
      ACCEPT_TOKEN(anon_sym_BANGmordent_BANG);
      END_STATE();
    case 355:
      ACCEPT_TOKEN(anon_sym_BANGpralltriller_BANG);
      END_STATE();
    case 356:
      ACCEPT_TOKEN(anon_sym_BANGroll_BANG);
      END_STATE();
    case 357:
      ACCEPT_TOKEN(anon_sym_BANGturn_BANG);
      END_STATE();
    case 358:
      ACCEPT_TOKEN(anon_sym_BANGturnx_BANG);
      END_STATE();
    case 359:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturn_BANG);
      END_STATE();
    case 360:
      ACCEPT_TOKEN(anon_sym_BANGinvertedturnx_BANG);
      END_STATE();
    case 361:
      ACCEPT_TOKEN(anon_sym_BANGarpeggio_BANG);
      END_STATE();
    case 362:
      ACCEPT_TOKEN(anon_sym_BANG_GT_BANG);
      END_STATE();
    case 363:
      ACCEPT_TOKEN(anon_sym_BANGaccent_BANG);
      END_STATE();
    case 364:
      ACCEPT_TOKEN(anon_sym_BANGemphasis_BANG);
      END_STATE();
    case 365:
      ACCEPT_TOKEN(anon_sym_BANGfermata_BANG);
      END_STATE();
    case 366:
      ACCEPT_TOKEN(anon_sym_BANGinvertedfermata_BANG);
      END_STATE();
    case 367:
      ACCEPT_TOKEN(anon_sym_BANGtenuto_BANG);
      END_STATE();
    case 368:
      ACCEPT_TOKEN(anon_sym_BANG0_BANG_DASH_BANG5_BANG);
      END_STATE();
    case 369:
      ACCEPT_TOKEN(anon_sym_BANG_PLUS_BANG);
      END_STATE();
    case 370:
      ACCEPT_TOKEN(anon_sym_BANGplus_BANG);
      END_STATE();
    case 371:
      ACCEPT_TOKEN(anon_sym_BANGsnap_BANG);
      END_STATE();
    case 372:
      ACCEPT_TOKEN(anon_sym_BANGslide_BANG);
      END_STATE();
    case 373:
      ACCEPT_TOKEN(anon_sym_BANGwedge_BANG);
      END_STATE();
    case 374:
      ACCEPT_TOKEN(anon_sym_BANGupbow_BANG);
      END_STATE();
    case 375:
      ACCEPT_TOKEN(anon_sym_BANGdownbow_BANG);
      END_STATE();
    case 376:
      ACCEPT_TOKEN(anon_sym_BANGopen_BANG);
      END_STATE();
    case 377:
      ACCEPT_TOKEN(anon_sym_BANGthumb_BANG);
      END_STATE();
    case 378:
      ACCEPT_TOKEN(anon_sym_BANGbreath_BANG);
      END_STATE();
    case 379:
      ACCEPT_TOKEN(anon_sym_BANGpppp_BANG);
      END_STATE();
    case 380:
      ACCEPT_TOKEN(anon_sym_BANGppp_BANG);
      END_STATE();
    case 381:
      ACCEPT_TOKEN(anon_sym_BANGpp_BANG);
      END_STATE();
    case 382:
      ACCEPT_TOKEN(anon_sym_BANGp_BANG);
      END_STATE();
    case 383:
      ACCEPT_TOKEN(anon_sym_BANGmp_BANG);
      END_STATE();
    case 384:
      ACCEPT_TOKEN(anon_sym_BANGmf_BANG);
      END_STATE();
    case 385:
      ACCEPT_TOKEN(anon_sym_BANGf_BANG);
      END_STATE();
    case 386:
      ACCEPT_TOKEN(anon_sym_BANGff_BANG);
      END_STATE();
    case 387:
      ACCEPT_TOKEN(anon_sym_BANGfff_BANG);
      END_STATE();
    case 388:
      ACCEPT_TOKEN(anon_sym_BANGffff_BANG);
      END_STATE();
    case 389:
      ACCEPT_TOKEN(anon_sym_BANGsfz_BANG);
      END_STATE();
    case 390:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_LPAREN_BANG);
      END_STATE();
    case 391:
      ACCEPT_TOKEN(anon_sym_BANG_LT_LPAREN_BANG);
      END_STATE();
    case 392:
      ACCEPT_TOKEN(anon_sym_BANGcrescendo_RPAREN_BANG);
      END_STATE();
    case 393:
      ACCEPT_TOKEN(anon_sym_BANG_LT_RPAREN_BANG);
      END_STATE();
    case 394:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_LPAREN_BANG);
      END_STATE();
    case 395:
      ACCEPT_TOKEN(anon_sym_BANG_GT_LPAREN_BANG);
      END_STATE();
    case 396:
      ACCEPT_TOKEN(anon_sym_BANGdiminuendo_RPAREN_BANG);
      END_STATE();
    case 397:
      ACCEPT_TOKEN(anon_sym_BANG_GT_RPAREN_BANG);
      END_STATE();
    case 398:
      ACCEPT_TOKEN(anon_sym_BANGsegno_BANG);
      END_STATE();
    case 399:
      ACCEPT_TOKEN(anon_sym_BANGcoda_BANG);
      END_STATE();
    case 400:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTS_DOT_BANG);
      END_STATE();
    case 401:
      ACCEPT_TOKEN(anon_sym_BANGD_DOTC_DOT_BANG);
      END_STATE();
    case 402:
      ACCEPT_TOKEN(anon_sym_BANGdacoda_BANG);
      END_STATE();
    case 403:
      ACCEPT_TOKEN(anon_sym_BANGdacapo_BANG);
      END_STATE();
    case 404:
      ACCEPT_TOKEN(anon_sym_BANGfine_BANG);
      END_STATE();
    case 405:
      ACCEPT_TOKEN(anon_sym_BANGshortphrase_BANG);
      END_STATE();
    case 406:
      ACCEPT_TOKEN(anon_sym_BANGmediumphrase_BANG);
      END_STATE();
    case 407:
      ACCEPT_TOKEN(anon_sym_BANGlongphrase_BANG);
      END_STATE();
    case 408:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead == '\n') ADVANCE(271);
      if (lookahead == ' ') ADVANCE(269);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(409);
      END_STATE();
    case 409:
      ACCEPT_TOKEN(sym_TEXT);
      if (lookahead != 0 &&
          lookahead != ']') ADVANCE(409);
      END_STATE();
    case 410:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 411:
      ACCEPT_TOKEN(aux_sym_words_line_token1);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 266},
  [2] = {.lex_state = 266},
  [3] = {.lex_state = 266},
  [4] = {.lex_state = 266},
  [5] = {.lex_state = 266},
  [6] = {.lex_state = 266},
  [7] = {.lex_state = 266},
  [8] = {.lex_state = 266},
  [9] = {.lex_state = 2},
  [10] = {.lex_state = 2},
  [11] = {.lex_state = 2},
  [12] = {.lex_state = 266},
  [13] = {.lex_state = 266},
  [14] = {.lex_state = 266},
  [15] = {.lex_state = 266},
  [16] = {.lex_state = 266},
  [17] = {.lex_state = 2},
  [18] = {.lex_state = 2},
  [19] = {.lex_state = 266},
  [20] = {.lex_state = 2},
  [21] = {.lex_state = 2},
  [22] = {.lex_state = 2},
  [23] = {.lex_state = 266},
  [24] = {.lex_state = 266},
  [25] = {.lex_state = 266},
  [26] = {.lex_state = 266},
  [27] = {.lex_state = 266},
  [28] = {.lex_state = 266},
  [29] = {.lex_state = 266},
  [30] = {.lex_state = 266},
  [31] = {.lex_state = 266},
  [32] = {.lex_state = 266},
  [33] = {.lex_state = 266},
  [34] = {.lex_state = 266},
  [35] = {.lex_state = 266},
  [36] = {.lex_state = 266},
  [37] = {.lex_state = 266},
  [38] = {.lex_state = 266},
  [39] = {.lex_state = 266},
  [40] = {.lex_state = 266},
  [41] = {.lex_state = 266},
  [42] = {.lex_state = 266},
  [43] = {.lex_state = 266},
  [44] = {.lex_state = 2},
  [45] = {.lex_state = 1},
  [46] = {.lex_state = 2},
  [47] = {.lex_state = 2},
  [48] = {.lex_state = 1},
  [49] = {.lex_state = 266},
  [50] = {.lex_state = 266},
  [51] = {.lex_state = 1},
  [52] = {.lex_state = 266},
  [53] = {.lex_state = 2},
  [54] = {.lex_state = 1},
  [55] = {.lex_state = 2},
  [56] = {.lex_state = 2},
  [57] = {.lex_state = 2},
  [58] = {.lex_state = 2},
  [59] = {.lex_state = 2},
  [60] = {.lex_state = 2},
  [61] = {.lex_state = 2},
  [62] = {.lex_state = 2},
  [63] = {.lex_state = 2},
  [64] = {.lex_state = 266},
  [65] = {.lex_state = 2},
  [66] = {.lex_state = 266},
  [67] = {.lex_state = 2},
  [68] = {.lex_state = 2},
  [69] = {.lex_state = 266},
  [70] = {.lex_state = 2},
  [71] = {.lex_state = 2},
  [72] = {.lex_state = 2},
  [73] = {.lex_state = 2},
  [74] = {.lex_state = 266},
  [75] = {.lex_state = 1},
  [76] = {.lex_state = 2},
  [77] = {.lex_state = 1},
  [78] = {.lex_state = 266},
  [79] = {.lex_state = 2},
  [80] = {.lex_state = 266},
  [81] = {.lex_state = 2},
  [82] = {.lex_state = 266},
  [83] = {.lex_state = 266},
  [84] = {.lex_state = 266},
  [85] = {.lex_state = 266},
  [86] = {.lex_state = 266},
  [87] = {.lex_state = 266},
  [88] = {.lex_state = 266},
  [89] = {.lex_state = 266},
  [90] = {.lex_state = 266},
  [91] = {.lex_state = 266},
  [92] = {.lex_state = 266},
  [93] = {.lex_state = 266},
  [94] = {.lex_state = 2},
  [95] = {.lex_state = 266},
  [96] = {.lex_state = 266},
  [97] = {.lex_state = 266},
  [98] = {.lex_state = 266},
  [99] = {.lex_state = 266},
  [100] = {.lex_state = 2},
  [101] = {.lex_state = 266},
  [102] = {.lex_state = 266},
  [103] = {.lex_state = 266},
  [104] = {.lex_state = 266},
  [105] = {.lex_state = 266},
  [106] = {.lex_state = 266},
  [107] = {.lex_state = 266},
  [108] = {.lex_state = 266},
  [109] = {.lex_state = 266},
  [110] = {.lex_state = 266},
  [111] = {.lex_state = 266},
  [112] = {.lex_state = 266},
  [113] = {.lex_state = 266},
  [114] = {.lex_state = 266},
  [115] = {.lex_state = 266},
  [116] = {.lex_state = 266},
  [117] = {.lex_state = 266},
  [118] = {.lex_state = 266},
  [119] = {.lex_state = 266},
  [120] = {.lex_state = 266},
  [121] = {.lex_state = 266},
  [122] = {.lex_state = 266},
  [123] = {.lex_state = 266},
  [124] = {.lex_state = 266},
  [125] = {.lex_state = 266},
  [126] = {.lex_state = 266},
  [127] = {.lex_state = 3},
  [128] = {.lex_state = 3},
  [129] = {.lex_state = 3},
  [130] = {.lex_state = 266},
  [131] = {.lex_state = 3},
  [132] = {.lex_state = 266},
  [133] = {.lex_state = 266},
  [134] = {.lex_state = 408},
  [135] = {.lex_state = 266},
  [136] = {.lex_state = 2},
  [137] = {.lex_state = 4},
  [138] = {.lex_state = 266},
  [139] = {.lex_state = 266},
  [140] = {.lex_state = 266},
  [141] = {.lex_state = 266},
  [142] = {.lex_state = 4},
  [143] = {.lex_state = 266},
  [144] = {.lex_state = 2},
  [145] = {.lex_state = 2},
  [146] = {.lex_state = 266},
  [147] = {.lex_state = 266},
  [148] = {.lex_state = 1},
  [149] = {.lex_state = 266},
  [150] = {.lex_state = 266},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [sym__space] = ACTIONS(3),
    [sym_NEWLINE] = ACTIONS(3),
    [anon_sym_BSLASH] = ACTIONS(1),
    [anon_sym_PLUS] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [sym_note_skip] = ACTIONS(1),
    [anon_sym_DASH] = ACTIONS(1),
    [sym_TILDE] = ACTIONS(1),
    [anon_sym_DOLLAR] = ACTIONS(1),
    [anon_sym_BQUOTE] = ACTIONS(1),
    [sym_slur_open] = ACTIONS(1),
    [sym_slur_close] = ACTIONS(1),
    [aux_sym_note_construct_token1] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
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
    [sym_bar_line] = ACTIONS(1),
    [sym_close_thin_thick_double_bar_line] = ACTIONS(1),
    [sym_thin_double_bar_line] = ACTIONS(1),
    [sym_open_thick_thin_double_bar_line] = ACTIONS(1),
    [sym_end_of_repeated_section] = ACTIONS(1),
    [sym_start_end_of_two_repeated_sections] = ACTIONS(1),
    [aux_sym_first_repeat_bar_token2] = ACTIONS(1),
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
    [aux_sym_section_name_token1] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [aux_sym_words_line_token1] = ACTIONS(1),
  },
  [1] = {
    [sym_source_file] = STATE(138),
    [sym_MUSIC_CODE] = STATE(147),
    [sym_music_content] = STATE(2),
    [sym_nte_or_chrd] = STATE(4),
    [sym_beam] = STATE(50),
    [sym_note_construct] = STATE(37),
    [sym_chord_cstrct] = STATE(37),
    [sym_note] = STATE(26),
    [sym_pitch] = STATE(19),
    [sym_multimeasure_rest] = STATE(50),
    [sym_grace_note] = STATE(70),
    [sym_chord_symbol] = STATE(98),
    [sym_decoration] = STATE(102),
    [sym_Nth_ending] = STATE(50),
    [sym_nth_ending_number] = STATE(6),
    [aux_sym_MUSIC_CODE_repeat1] = STATE(2),
    [aux_sym_note_construct_repeat1] = STATE(70),
    [sym__space] = ACTIONS(3),
    [sym_NEWLINE] = ACTIONS(3),
    [sym_slur_open] = ACTIONS(5),
    [sym_slur_close] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [sym_alteration] = ACTIONS(11),
    [sym_note_letter] = ACTIONS(13),
    [sym_rest] = ACTIONS(15),
    [anon_sym_Z] = ACTIONS(17),
    [anon_sym_X] = ACTIONS(17),
    [aux_sym_grace_note_token1] = ACTIONS(19),
    [aux_sym_chord_symbol_token1] = ACTIONS(21),
    [sym_annotation] = ACTIONS(7),
    [sym_tuplet_marker] = ACTIONS(7),
    [sym_decoration_shorthand] = ACTIONS(23),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 25,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(5), 1,
      sym_slur_open,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      sym_alteration,
    ACTIONS(13), 1,
      sym_note_letter,
    ACTIONS(15), 1,
      sym_rest,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(21), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(25), 1,
      sym_NEWLINE,
    ACTIONS(29), 1,
      aux_sym_COMMENTLINE_token1,
    STATE(4), 1,
      sym_nte_or_chrd,
    STATE(6), 1,
      sym_nth_ending_number,
    STATE(19), 1,
      sym_pitch,
    STATE(26), 1,
      sym_note,
    STATE(98), 1,
      sym_chord_symbol,
    STATE(102), 1,
      sym_decoration,
    STATE(149), 1,
      sym_COMMENTLINE,
    ACTIONS(17), 2,
      anon_sym_Z,
      anon_sym_X,
    ACTIONS(27), 2,
      anon_sym_BSLASH,
      anon_sym_DOLLAR,
    STATE(3), 2,
      sym_music_content,
      aux_sym_MUSIC_CODE_repeat1,
    STATE(37), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(70), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(7), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(50), 3,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
  [85] = 22,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(33), 1,
      sym_slur_open,
    ACTIONS(39), 1,
      anon_sym_LBRACK,
    ACTIONS(42), 1,
      sym_alteration,
    ACTIONS(45), 1,
      sym_note_letter,
    ACTIONS(48), 1,
      sym_rest,
    ACTIONS(54), 1,
      aux_sym_grace_note_token1,
    ACTIONS(57), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(60), 1,
      sym_decoration_shorthand,
    STATE(4), 1,
      sym_nte_or_chrd,
    STATE(6), 1,
      sym_nth_ending_number,
    STATE(19), 1,
      sym_pitch,
    STATE(26), 1,
      sym_note,
    STATE(98), 1,
      sym_chord_symbol,
    STATE(102), 1,
      sym_decoration,
    ACTIONS(51), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(3), 2,
      sym_music_content,
      aux_sym_MUSIC_CODE_repeat1,
    STATE(37), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(70), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(36), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(50), 3,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
    ACTIONS(31), 4,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
  [163] = 19,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(11), 1,
      sym_alteration,
    ACTIONS(13), 1,
      sym_note_letter,
    ACTIONS(15), 1,
      sym_rest,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(21), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    ACTIONS(67), 1,
      sym_slur_open,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_pitch,
    STATE(23), 1,
      aux_sym_beam_repeat2,
    STATE(26), 1,
      sym_note,
    STATE(98), 1,
      sym_chord_symbol,
    STATE(102), 1,
      sym_decoration,
    STATE(8), 2,
      sym_nte_or_chrd,
      aux_sym_beam_repeat1,
    STATE(37), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(70), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(63), 9,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      sym_slur_close,
      anon_sym_Z,
      anon_sym_X,
      sym_annotation,
      sym_tuplet_marker,
  [232] = 21,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(21), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(71), 1,
      sym_slur_open,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(5), 1,
      sym_nth_ending_number,
    STATE(9), 1,
      sym_nte_or_chrd,
    STATE(47), 1,
      sym_pitch,
    STATE(57), 1,
      sym_note,
    STATE(97), 1,
      sym_chord_symbol,
    STATE(104), 1,
      sym_decoration,
    STATE(118), 1,
      sym_music_content,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(83), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(65), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(68), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(73), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(121), 3,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
  [304] = 21,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(21), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(71), 1,
      sym_slur_open,
    ACTIONS(75), 1,
      anon_sym_LBRACK,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(5), 1,
      sym_nth_ending_number,
    STATE(9), 1,
      sym_nte_or_chrd,
    STATE(47), 1,
      sym_pitch,
    STATE(57), 1,
      sym_note,
    STATE(97), 1,
      sym_chord_symbol,
    STATE(104), 1,
      sym_decoration,
    STATE(114), 1,
      sym_music_content,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(83), 2,
      anon_sym_Z,
      anon_sym_X,
    STATE(65), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(68), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(73), 3,
      sym_slur_close,
      sym_annotation,
      sym_tuplet_marker,
    STATE(121), 3,
      sym_beam,
      sym_multimeasure_rest,
      sym_Nth_ending,
  [376] = 17,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(87), 1,
      sym_slur_open,
    ACTIONS(89), 1,
      anon_sym_LBRACK,
    ACTIONS(92), 1,
      sym_alteration,
    ACTIONS(95), 1,
      sym_note_letter,
    ACTIONS(98), 1,
      sym_rest,
    ACTIONS(101), 1,
      aux_sym_grace_note_token1,
    ACTIONS(104), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(107), 1,
      sym_decoration_shorthand,
    STATE(19), 1,
      sym_pitch,
    STATE(26), 1,
      sym_note,
    STATE(98), 1,
      sym_chord_symbol,
    STATE(102), 1,
      sym_decoration,
    STATE(7), 2,
      sym_nte_or_chrd,
      aux_sym_beam_repeat1,
    STATE(37), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(70), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(85), 9,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      sym_slur_close,
      anon_sym_Z,
      anon_sym_X,
      sym_annotation,
      sym_tuplet_marker,
  [439] = 10,
    ACTIONS(3), 1,
      sym__space,
    STATE(19), 1,
      sym_pitch,
    STATE(26), 1,
      sym_note,
    STATE(98), 1,
      sym_chord_symbol,
    STATE(102), 1,
      sym_decoration,
    ACTIONS(112), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    STATE(7), 2,
      sym_nte_or_chrd,
      aux_sym_beam_repeat1,
    STATE(37), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(70), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(110), 15,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
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
  [488] = 19,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(67), 1,
      sym_bar_line,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(114), 1,
      anon_sym_BQUOTE,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      aux_sym_chord_symbol_token1,
    STATE(47), 1,
      sym_pitch,
    STATE(57), 1,
      sym_note,
    STATE(97), 1,
      sym_chord_symbol,
    STATE(101), 1,
      aux_sym_beam_repeat2,
    STATE(104), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(11), 2,
      sym_nte_or_chrd,
      aux_sym_beam_repeat1,
    STATE(65), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(68), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(63), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [553] = 17,
    ACTIONS(87), 1,
      sym_bar_line,
    ACTIONS(101), 1,
      aux_sym_grace_note_token1,
    ACTIONS(107), 1,
      sym_decoration_shorthand,
    ACTIONS(120), 1,
      anon_sym_LBRACK,
    ACTIONS(123), 1,
      sym_alteration,
    ACTIONS(126), 1,
      sym_note_letter,
    ACTIONS(129), 1,
      sym_rest,
    ACTIONS(132), 1,
      aux_sym_chord_symbol_token1,
    STATE(47), 1,
      sym_pitch,
    STATE(57), 1,
      sym_note,
    STATE(97), 1,
      sym_chord_symbol,
    STATE(104), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(10), 2,
      sym_nte_or_chrd,
      aux_sym_beam_repeat1,
    STATE(65), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(68), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(85), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [612] = 17,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(112), 1,
      sym_bar_line,
    ACTIONS(116), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      aux_sym_chord_symbol_token1,
    STATE(47), 1,
      sym_pitch,
    STATE(57), 1,
      sym_note,
    STATE(97), 1,
      sym_chord_symbol,
    STATE(104), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(10), 2,
      sym_nte_or_chrd,
      aux_sym_beam_repeat1,
    STATE(65), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(68), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(110), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [671] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(139), 1,
      sym_octave,
    STATE(15), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(137), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(135), 18,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [705] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(145), 1,
      sym_octave,
    STATE(13), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(143), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(141), 18,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [739] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(152), 1,
      sym_octave,
    STATE(13), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(150), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(148), 18,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [773] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(152), 1,
      sym_octave,
    STATE(13), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(156), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(154), 18,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [807] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(158), 1,
      sym_octave,
    STATE(14), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(156), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(154), 18,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      anon_sym_Z,
      anon_sym_X,
      sym_rhythm,
      aux_sym_grace_note_token1,
      sym_annotation,
      sym_tuplet_marker,
      sym_decoration_shorthand,
  [841] = 5,
    ACTIONS(160), 1,
      sym_octave,
    STATE(21), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(156), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(154), 15,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [873] = 5,
    ACTIONS(162), 1,
      sym_octave,
    STATE(18), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(143), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(141), 15,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [905] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(169), 1,
      sym_rhythm,
    ACTIONS(167), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(165), 17,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
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
  [935] = 5,
    ACTIONS(171), 1,
      sym_octave,
    STATE(22), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(137), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(135), 15,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [967] = 5,
    ACTIONS(173), 1,
      sym_octave,
    STATE(18), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(150), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(148), 15,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [999] = 5,
    ACTIONS(173), 1,
      sym_octave,
    STATE(18), 1,
      aux_sym_pitch_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(156), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(154), 15,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_rhythm,
      aux_sym_grace_note_token1,
      aux_sym_grace_note_token2,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [1031] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(65), 1,
      anon_sym_BQUOTE,
    STATE(32), 1,
      aux_sym_beam_repeat2,
    ACTIONS(112), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(110), 15,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
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
  [1062] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(179), 1,
      sym_rhythm,
    ACTIONS(177), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(175), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1091] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(185), 1,
      aux_sym_note_construct_token1,
    ACTIONS(183), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(181), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1120] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(191), 1,
      aux_sym_note_construct_token1,
    ACTIONS(189), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(187), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1149] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(195), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(193), 17,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
      sym_slur_close,
      aux_sym_note_construct_token1,
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
  [1176] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(201), 1,
      sym_rhythm,
    ACTIONS(199), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(197), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1205] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(207), 1,
      aux_sym_note_construct_token1,
    ACTIONS(205), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(203), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1234] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(213), 1,
      aux_sym_note_construct_token1,
    ACTIONS(211), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(209), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1263] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(219), 1,
      sym_rhythm,
    ACTIONS(217), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(215), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1292] = 5,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(223), 1,
      anon_sym_BQUOTE,
    STATE(32), 1,
      aux_sym_beam_repeat2,
    ACTIONS(226), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(221), 15,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
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
  [1323] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(232), 1,
      sym_rhythm,
    ACTIONS(230), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(228), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1352] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(177), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(175), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1378] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(183), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(181), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1404] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(199), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(197), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1430] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(236), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(234), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1456] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(240), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(238), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1482] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(244), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(242), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1508] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(217), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(215), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1534] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(211), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(209), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1560] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(205), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(203), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1586] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(226), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(221), 16,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
      anon_sym_BQUOTE,
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
  [1612] = 15,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(118), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(246), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(57), 1,
      sym_note,
    STATE(97), 1,
      sym_chord_symbol,
    STATE(104), 1,
      sym_decoration,
    STATE(110), 1,
      sym_nte_or_chrd,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(65), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(68), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1661] = 5,
    STATE(51), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(250), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(252), 11,
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
  [1690] = 15,
    ACTIONS(11), 1,
      sym_alteration,
    ACTIONS(13), 1,
      sym_note_letter,
    ACTIONS(15), 1,
      sym_rest,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(69), 1,
      anon_sym_LBRACK,
    ACTIONS(118), 1,
      aux_sym_chord_symbol_token1,
    STATE(19), 1,
      sym_pitch,
    STATE(26), 1,
      sym_note,
    STATE(43), 1,
      sym_nte_or_chrd,
    STATE(98), 1,
      sym_chord_symbol,
    STATE(102), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(37), 2,
      sym_note_construct,
      sym_chord_cstrct,
    STATE(70), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [1739] = 4,
    ACTIONS(254), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(167), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(165), 13,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_RBRACK,
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
  [1766] = 5,
    STATE(45), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(248), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(256), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(258), 11,
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
  [1795] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(262), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(260), 15,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
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
  [1820] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(67), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(63), 15,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
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
  [1845] = 5,
    STATE(51), 1,
      aux_sym_nth_ending_number_repeat1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(264), 2,
      anon_sym_DASH,
      anon_sym_COMMA,
    ACTIONS(267), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(269), 11,
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
  [1874] = 3,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(273), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(271), 15,
      sym_NEWLINE,
      anon_sym_BSLASH,
      aux_sym_COMMENTLINE_token1,
      anon_sym_DOLLAR,
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
  [1899] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(195), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(193), 13,
      anon_sym_BQUOTE,
      aux_sym_note_construct_token1,
      anon_sym_RBRACK,
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
  [1923] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(267), 2,
      sym_slur_open,
      aux_sym_chord_symbol_token1,
    ACTIONS(269), 13,
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
  [1947] = 4,
    ACTIONS(275), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(211), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(209), 11,
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
  [1972] = 4,
    ACTIONS(277), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(177), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(175), 11,
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
  [1997] = 4,
    ACTIONS(279), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(189), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(187), 11,
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
  [2022] = 4,
    ACTIONS(281), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(230), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(228), 11,
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
  [2047] = 4,
    ACTIONS(283), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(205), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(203), 11,
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
  [2072] = 4,
    ACTIONS(285), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(199), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(197), 11,
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
  [2097] = 4,
    ACTIONS(287), 1,
      aux_sym_note_construct_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(181), 11,
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
  [2122] = 4,
    ACTIONS(289), 1,
      sym_rhythm,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(217), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(215), 11,
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
  [2147] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(217), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(215), 11,
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
  [2169] = 12,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(291), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(78), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2209] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(236), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(234), 11,
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
  [2231] = 12,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(293), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(78), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2271] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(240), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(238), 11,
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
  [2293] = 13,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(118), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(55), 1,
      sym_note,
    STATE(95), 1,
      sym_chord_symbol,
    STATE(103), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(94), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2335] = 12,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(297), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(78), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2375] = 13,
    ACTIONS(11), 1,
      sym_alteration,
    ACTIONS(13), 1,
      sym_note_letter,
    ACTIONS(15), 1,
      sym_rest,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(118), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_pitch,
    STATE(30), 1,
      sym_note,
    STATE(96), 1,
      sym_chord_symbol,
    STATE(111), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(94), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2417] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(244), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(242), 11,
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
  [2439] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(177), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(175), 11,
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
  [2461] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(211), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(209), 11,
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
  [2483] = 12,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(301), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(78), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2523] = 12,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(303), 1,
      aux_sym_nth_ending_number_token1,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(66), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2563] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(183), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(181), 11,
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
  [2585] = 12,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(303), 1,
      aux_sym_nth_ending_number_token1,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(74), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2625] = 12,
    ACTIONS(305), 1,
      anon_sym_RBRACK,
    ACTIONS(307), 1,
      sym_alteration,
    ACTIONS(310), 1,
      sym_note_letter,
    ACTIONS(313), 1,
      sym_rest,
    ACTIONS(316), 1,
      aux_sym_grace_note_token1,
    ACTIONS(319), 1,
      sym_decoration_shorthand,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(78), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2665] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(199), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(197), 11,
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
  [2687] = 12,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(322), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(78), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2727] = 3,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(205), 2,
      anon_sym_LBRACK,
      sym_bar_line,
    ACTIONS(203), 11,
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
  [2749] = 12,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(324), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(78), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2789] = 12,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(326), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(78), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2829] = 12,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(328), 1,
      anon_sym_RBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(78), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2869] = 11,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(64), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2906] = 11,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(80), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2943] = 11,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(74), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [2980] = 11,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(84), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3017] = 11,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(83), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3054] = 11,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(82), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3091] = 11,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(69), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3128] = 11,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(47), 1,
      sym_pitch,
    STATE(109), 1,
      sym_note,
    STATE(112), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(66), 2,
      sym_chord_note,
      aux_sym_chord_cstrct_repeat1,
    STATE(93), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3165] = 10,
    ACTIONS(19), 1,
      aux_sym_grace_note_token1,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(47), 1,
      sym_pitch,
    STATE(105), 1,
      sym_note,
    STATE(115), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(94), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
  [3198] = 4,
    ACTIONS(332), 1,
      aux_sym_grace_note_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(94), 2,
      sym_grace_note,
      aux_sym_note_construct_repeat1,
    ACTIONS(330), 6,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
  [3218] = 9,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(59), 1,
      sym_note,
    STATE(108), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3247] = 9,
    ACTIONS(11), 1,
      sym_alteration,
    ACTIONS(13), 1,
      sym_note_letter,
    ACTIONS(15), 1,
      sym_rest,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_pitch,
    STATE(29), 1,
      sym_note,
    STATE(106), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3276] = 9,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(55), 1,
      sym_note,
    STATE(103), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3305] = 9,
    ACTIONS(11), 1,
      sym_alteration,
    ACTIONS(13), 1,
      sym_note_letter,
    ACTIONS(15), 1,
      sym_rest,
    ACTIONS(23), 1,
      sym_decoration_shorthand,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_pitch,
    STATE(30), 1,
      sym_note,
    STATE(111), 1,
      sym_decoration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3334] = 5,
    ACTIONS(226), 1,
      sym_bar_line,
    ACTIONS(339), 1,
      anon_sym_BQUOTE,
    STATE(99), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(221), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [3354] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(342), 7,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      aux_sym_chord_symbol_token1,
      sym_decoration_shorthand,
  [3368] = 5,
    ACTIONS(112), 1,
      sym_bar_line,
    ACTIONS(114), 1,
      anon_sym_BQUOTE,
    STATE(99), 1,
      aux_sym_beam_repeat2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(110), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [3388] = 7,
    ACTIONS(11), 1,
      sym_alteration,
    ACTIONS(13), 1,
      sym_note_letter,
    ACTIONS(15), 1,
      sym_rest,
    ACTIONS(299), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_pitch,
    STATE(30), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3411] = 7,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(335), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(59), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3434] = 7,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(295), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(55), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3457] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(344), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [3470] = 7,
    ACTIONS(11), 1,
      sym_alteration,
    ACTIONS(13), 1,
      sym_note_letter,
    ACTIONS(15), 1,
      sym_rest,
    ACTIONS(346), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_pitch,
    STATE(25), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3493] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(348), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [3506] = 7,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    ACTIONS(350), 1,
      anon_sym_LBRACK,
    STATE(47), 1,
      sym_pitch,
    STATE(61), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3529] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(352), 6,
      anon_sym_RBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      aux_sym_grace_note_token1,
      sym_decoration_shorthand,
  [3542] = 3,
    ACTIONS(226), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(221), 5,
      anon_sym_BQUOTE,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [3557] = 7,
    ACTIONS(11), 1,
      sym_alteration,
    ACTIONS(13), 1,
      sym_note_letter,
    ACTIONS(15), 1,
      sym_rest,
    ACTIONS(337), 1,
      anon_sym_LBRACK,
    STATE(19), 1,
      sym_pitch,
    STATE(29), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3580] = 6,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(47), 1,
      sym_pitch,
    STATE(105), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3600] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(354), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [3612] = 3,
    ACTIONS(356), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(358), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [3626] = 6,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(81), 1,
      sym_rest,
    STATE(47), 1,
      sym_pitch,
    STATE(107), 1,
      sym_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3646] = 5,
    ACTIONS(360), 1,
      sym_alteration,
    ACTIONS(363), 1,
      sym_note_letter,
    ACTIONS(366), 1,
      aux_sym_grace_note_token2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(116), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [3664] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(368), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [3676] = 3,
    ACTIONS(370), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(372), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [3690] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(374), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [3702] = 3,
    ACTIONS(262), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(260), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [3716] = 3,
    ACTIONS(67), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(63), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [3730] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(376), 5,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
      sym_decoration_shorthand,
  [3742] = 3,
    ACTIONS(273), 1,
      sym_bar_line,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(271), 4,
      sym_close_thin_thick_double_bar_line,
      sym_thin_double_bar_line,
      sym_open_thick_thin_double_bar_line,
      sym_end_of_repeated_section,
  [3756] = 5,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(378), 1,
      aux_sym_grace_note_token2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(116), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [3774] = 4,
    ACTIONS(77), 1,
      sym_alteration,
    ACTIONS(79), 1,
      sym_note_letter,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    STATE(124), 2,
      sym_pitch,
      aux_sym_grace_note_repeat1,
  [3789] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(380), 4,
      anon_sym_LBRACK,
      sym_alteration,
      sym_note_letter,
      sym_rest,
  [3800] = 3,
    ACTIONS(382), 1,
      sym_alteration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(384), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [3813] = 4,
    ACTIONS(386), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(388), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(390), 1,
      sym_chord_type,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3827] = 2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
    ACTIONS(392), 3,
      aux_sym_chord_symbol_token1,
      aux_sym_chord_symbol_token2,
      sym_chord_type,
  [3837] = 3,
    ACTIONS(394), 1,
      sym_note_letter,
    STATE(128), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3848] = 3,
    ACTIONS(396), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(398), 1,
      aux_sym_chord_symbol_token2,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3859] = 3,
    ACTIONS(400), 1,
      sym_note_letter,
    STATE(144), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3870] = 3,
    ACTIONS(400), 1,
      sym_note_letter,
    STATE(145), 1,
      sym_chord_symbol_note,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3881] = 3,
    ACTIONS(404), 1,
      sym_TEXT,
    STATE(139), 1,
      sym_TEXTLINE,
    ACTIONS(402), 2,
      sym__space,
      sym_NEWLINE,
  [3892] = 4,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(29), 1,
      aux_sym_COMMENTLINE_token1,
    ACTIONS(406), 1,
      sym_NEWLINE,
    STATE(140), 1,
      sym_COMMENTLINE,
  [3905] = 3,
    ACTIONS(384), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(408), 1,
      sym_alteration,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3916] = 2,
    ACTIONS(410), 1,
      aux_sym_multimeasure_rest_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3924] = 2,
    ACTIONS(412), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3932] = 2,
    ACTIONS(414), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3940] = 2,
    ACTIONS(416), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3948] = 2,
    ACTIONS(418), 1,
      sym_note_letter,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3956] = 2,
    ACTIONS(420), 1,
      aux_sym_multimeasure_rest_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3964] = 2,
    ACTIONS(422), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3972] = 2,
    ACTIONS(424), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3980] = 2,
    ACTIONS(426), 1,
      aux_sym_chord_symbol_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3988] = 2,
    ACTIONS(428), 1,
      sym_note_letter,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [3996] = 2,
    ACTIONS(430), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [4004] = 2,
    ACTIONS(432), 1,
      aux_sym_nth_ending_number_token1,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [4012] = 2,
    ACTIONS(434), 1,
      ts_builtin_sym_end,
    ACTIONS(3), 2,
      sym__space,
      sym_NEWLINE,
  [4020] = 2,
    ACTIONS(3), 1,
      sym__space,
    ACTIONS(436), 1,
      sym_NEWLINE,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(2)] = 0,
  [SMALL_STATE(3)] = 85,
  [SMALL_STATE(4)] = 163,
  [SMALL_STATE(5)] = 232,
  [SMALL_STATE(6)] = 304,
  [SMALL_STATE(7)] = 376,
  [SMALL_STATE(8)] = 439,
  [SMALL_STATE(9)] = 488,
  [SMALL_STATE(10)] = 553,
  [SMALL_STATE(11)] = 612,
  [SMALL_STATE(12)] = 671,
  [SMALL_STATE(13)] = 705,
  [SMALL_STATE(14)] = 739,
  [SMALL_STATE(15)] = 773,
  [SMALL_STATE(16)] = 807,
  [SMALL_STATE(17)] = 841,
  [SMALL_STATE(18)] = 873,
  [SMALL_STATE(19)] = 905,
  [SMALL_STATE(20)] = 935,
  [SMALL_STATE(21)] = 967,
  [SMALL_STATE(22)] = 999,
  [SMALL_STATE(23)] = 1031,
  [SMALL_STATE(24)] = 1062,
  [SMALL_STATE(25)] = 1091,
  [SMALL_STATE(26)] = 1120,
  [SMALL_STATE(27)] = 1149,
  [SMALL_STATE(28)] = 1176,
  [SMALL_STATE(29)] = 1205,
  [SMALL_STATE(30)] = 1234,
  [SMALL_STATE(31)] = 1263,
  [SMALL_STATE(32)] = 1292,
  [SMALL_STATE(33)] = 1323,
  [SMALL_STATE(34)] = 1352,
  [SMALL_STATE(35)] = 1378,
  [SMALL_STATE(36)] = 1404,
  [SMALL_STATE(37)] = 1430,
  [SMALL_STATE(38)] = 1456,
  [SMALL_STATE(39)] = 1482,
  [SMALL_STATE(40)] = 1508,
  [SMALL_STATE(41)] = 1534,
  [SMALL_STATE(42)] = 1560,
  [SMALL_STATE(43)] = 1586,
  [SMALL_STATE(44)] = 1612,
  [SMALL_STATE(45)] = 1661,
  [SMALL_STATE(46)] = 1690,
  [SMALL_STATE(47)] = 1739,
  [SMALL_STATE(48)] = 1766,
  [SMALL_STATE(49)] = 1795,
  [SMALL_STATE(50)] = 1820,
  [SMALL_STATE(51)] = 1845,
  [SMALL_STATE(52)] = 1874,
  [SMALL_STATE(53)] = 1899,
  [SMALL_STATE(54)] = 1923,
  [SMALL_STATE(55)] = 1947,
  [SMALL_STATE(56)] = 1972,
  [SMALL_STATE(57)] = 1997,
  [SMALL_STATE(58)] = 2022,
  [SMALL_STATE(59)] = 2047,
  [SMALL_STATE(60)] = 2072,
  [SMALL_STATE(61)] = 2097,
  [SMALL_STATE(62)] = 2122,
  [SMALL_STATE(63)] = 2147,
  [SMALL_STATE(64)] = 2169,
  [SMALL_STATE(65)] = 2209,
  [SMALL_STATE(66)] = 2231,
  [SMALL_STATE(67)] = 2271,
  [SMALL_STATE(68)] = 2293,
  [SMALL_STATE(69)] = 2335,
  [SMALL_STATE(70)] = 2375,
  [SMALL_STATE(71)] = 2417,
  [SMALL_STATE(72)] = 2439,
  [SMALL_STATE(73)] = 2461,
  [SMALL_STATE(74)] = 2483,
  [SMALL_STATE(75)] = 2523,
  [SMALL_STATE(76)] = 2563,
  [SMALL_STATE(77)] = 2585,
  [SMALL_STATE(78)] = 2625,
  [SMALL_STATE(79)] = 2665,
  [SMALL_STATE(80)] = 2687,
  [SMALL_STATE(81)] = 2727,
  [SMALL_STATE(82)] = 2749,
  [SMALL_STATE(83)] = 2789,
  [SMALL_STATE(84)] = 2829,
  [SMALL_STATE(85)] = 2869,
  [SMALL_STATE(86)] = 2906,
  [SMALL_STATE(87)] = 2943,
  [SMALL_STATE(88)] = 2980,
  [SMALL_STATE(89)] = 3017,
  [SMALL_STATE(90)] = 3054,
  [SMALL_STATE(91)] = 3091,
  [SMALL_STATE(92)] = 3128,
  [SMALL_STATE(93)] = 3165,
  [SMALL_STATE(94)] = 3198,
  [SMALL_STATE(95)] = 3218,
  [SMALL_STATE(96)] = 3247,
  [SMALL_STATE(97)] = 3276,
  [SMALL_STATE(98)] = 3305,
  [SMALL_STATE(99)] = 3334,
  [SMALL_STATE(100)] = 3354,
  [SMALL_STATE(101)] = 3368,
  [SMALL_STATE(102)] = 3388,
  [SMALL_STATE(103)] = 3411,
  [SMALL_STATE(104)] = 3434,
  [SMALL_STATE(105)] = 3457,
  [SMALL_STATE(106)] = 3470,
  [SMALL_STATE(107)] = 3493,
  [SMALL_STATE(108)] = 3506,
  [SMALL_STATE(109)] = 3529,
  [SMALL_STATE(110)] = 3542,
  [SMALL_STATE(111)] = 3557,
  [SMALL_STATE(112)] = 3580,
  [SMALL_STATE(113)] = 3600,
  [SMALL_STATE(114)] = 3612,
  [SMALL_STATE(115)] = 3626,
  [SMALL_STATE(116)] = 3646,
  [SMALL_STATE(117)] = 3664,
  [SMALL_STATE(118)] = 3676,
  [SMALL_STATE(119)] = 3690,
  [SMALL_STATE(120)] = 3702,
  [SMALL_STATE(121)] = 3716,
  [SMALL_STATE(122)] = 3730,
  [SMALL_STATE(123)] = 3742,
  [SMALL_STATE(124)] = 3756,
  [SMALL_STATE(125)] = 3774,
  [SMALL_STATE(126)] = 3789,
  [SMALL_STATE(127)] = 3800,
  [SMALL_STATE(128)] = 3813,
  [SMALL_STATE(129)] = 3827,
  [SMALL_STATE(130)] = 3837,
  [SMALL_STATE(131)] = 3848,
  [SMALL_STATE(132)] = 3859,
  [SMALL_STATE(133)] = 3870,
  [SMALL_STATE(134)] = 3881,
  [SMALL_STATE(135)] = 3892,
  [SMALL_STATE(136)] = 3905,
  [SMALL_STATE(137)] = 3916,
  [SMALL_STATE(138)] = 3924,
  [SMALL_STATE(139)] = 3932,
  [SMALL_STATE(140)] = 3940,
  [SMALL_STATE(141)] = 3948,
  [SMALL_STATE(142)] = 3956,
  [SMALL_STATE(143)] = 3964,
  [SMALL_STATE(144)] = 3972,
  [SMALL_STATE(145)] = 3980,
  [SMALL_STATE(146)] = 3988,
  [SMALL_STATE(147)] = 3996,
  [SMALL_STATE(148)] = 4004,
  [SMALL_STATE(149)] = 4012,
  [SMALL_STATE(150)] = 4020,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = false}}, SHIFT(50),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(50),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(77),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(146),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(137),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(125),
  [21] = {.entry = {.count = 1, .reusable = false}}, SHIFT(130),
  [23] = {.entry = {.count = 1, .reusable = true}}, SHIFT(126),
  [25] = {.entry = {.count = 1, .reusable = true}}, SHIFT(149),
  [27] = {.entry = {.count = 1, .reusable = true}}, SHIFT(135),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(134),
  [31] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_MUSIC_CODE_repeat1, 2),
  [33] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(50),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(50),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(77),
  [42] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(146),
  [45] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(12),
  [48] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(19),
  [51] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(137),
  [54] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(125),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(130),
  [60] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_MUSIC_CODE_repeat1, 2), SHIFT_REPEAT(126),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_music_content, 1),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(46),
  [67] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_music_content, 1),
  [69] = {.entry = {.count = 1, .reusable = true}}, SHIFT(87),
  [71] = {.entry = {.count = 1, .reusable = false}}, SHIFT(121),
  [73] = {.entry = {.count = 1, .reusable = true}}, SHIFT(121),
  [75] = {.entry = {.count = 1, .reusable = true}}, SHIFT(75),
  [77] = {.entry = {.count = 1, .reusable = true}}, SHIFT(141),
  [79] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [81] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [83] = {.entry = {.count = 1, .reusable = true}}, SHIFT(142),
  [85] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(87),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(146),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(12),
  [98] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(19),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(125),
  [104] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(130),
  [107] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(126),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_beam, 2),
  [112] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_beam, 2),
  [114] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [116] = {.entry = {.count = 1, .reusable = false}}, SHIFT(92),
  [118] = {.entry = {.count = 1, .reusable = true}}, SHIFT(130),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(92),
  [123] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(141),
  [126] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(20),
  [129] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(47),
  [132] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat1, 2), SHIFT_REPEAT(130),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 1),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 1),
  [139] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [141] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_pitch_repeat1, 2),
  [143] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_pitch_repeat1, 2),
  [145] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pitch_repeat1, 2), SHIFT_REPEAT(13),
  [148] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 3),
  [150] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 3),
  [152] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pitch, 2),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_pitch, 2),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [162] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_pitch_repeat1, 2), SHIFT_REPEAT(18),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 1),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 1),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [173] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [175] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 5),
  [177] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 5),
  [179] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [181] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 4),
  [183] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 4),
  [185] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [187] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 1),
  [189] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 1),
  [191] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [193] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note, 2),
  [195] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note, 2),
  [197] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 4),
  [199] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 4),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [203] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 3),
  [205] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 3),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [209] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 2),
  [211] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 2),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(42),
  [215] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 6),
  [217] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 6),
  [219] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [221] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2),
  [223] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2), SHIFT_REPEAT(46),
  [226] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_beam_repeat2, 2),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 3),
  [230] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 3),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(36),
  [234] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nte_or_chrd, 1),
  [236] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nte_or_chrd, 1),
  [238] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_cstrct, 7),
  [240] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_chord_cstrct, 7),
  [242] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_note_construct, 5),
  [244] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_note_construct, 5),
  [246] = {.entry = {.count = 1, .reusable = true}}, SHIFT(92),
  [248] = {.entry = {.count = 1, .reusable = true}}, SHIFT(148),
  [250] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 3),
  [252] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 3),
  [254] = {.entry = {.count = 1, .reusable = true}}, SHIFT(53),
  [256] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_nth_ending_number, 2),
  [258] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_nth_ending_number, 2),
  [260] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_multimeasure_rest, 2),
  [262] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_multimeasure_rest, 2),
  [264] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2), SHIFT_REPEAT(148),
  [267] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [269] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_nth_ending_number_repeat1, 2),
  [271] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_Nth_ending, 3),
  [273] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_Nth_ending, 3),
  [275] = {.entry = {.count = 1, .reusable = true}}, SHIFT(81),
  [277] = {.entry = {.count = 1, .reusable = true}}, SHIFT(63),
  [279] = {.entry = {.count = 1, .reusable = true}}, SHIFT(73),
  [281] = {.entry = {.count = 1, .reusable = true}}, SHIFT(79),
  [283] = {.entry = {.count = 1, .reusable = true}}, SHIFT(76),
  [285] = {.entry = {.count = 1, .reusable = true}}, SHIFT(72),
  [287] = {.entry = {.count = 1, .reusable = true}}, SHIFT(71),
  [289] = {.entry = {.count = 1, .reusable = true}}, SHIFT(67),
  [291] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [293] = {.entry = {.count = 1, .reusable = true}}, SHIFT(58),
  [295] = {.entry = {.count = 1, .reusable = true}}, SHIFT(86),
  [297] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [299] = {.entry = {.count = 1, .reusable = true}}, SHIFT(91),
  [301] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [303] = {.entry = {.count = 1, .reusable = true}}, SHIFT(48),
  [305] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2),
  [307] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(141),
  [310] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(20),
  [313] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(47),
  [316] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(125),
  [319] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_chord_cstrct_repeat1, 2), SHIFT_REPEAT(126),
  [322] = {.entry = {.count = 1, .reusable = true}}, SHIFT(60),
  [324] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [326] = {.entry = {.count = 1, .reusable = true}}, SHIFT(62),
  [328] = {.entry = {.count = 1, .reusable = true}}, SHIFT(56),
  [330] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2),
  [332] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_note_construct_repeat1, 2), SHIFT_REPEAT(125),
  [335] = {.entry = {.count = 1, .reusable = true}}, SHIFT(88),
  [337] = {.entry = {.count = 1, .reusable = true}}, SHIFT(90),
  [339] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_beam_repeat2, 2), SHIFT_REPEAT(44),
  [342] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_grace_note, 3),
  [344] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 2),
  [346] = {.entry = {.count = 1, .reusable = true}}, SHIFT(85),
  [348] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 3),
  [350] = {.entry = {.count = 1, .reusable = true}}, SHIFT(89),
  [352] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_note, 1),
  [354] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 3),
  [356] = {.entry = {.count = 1, .reusable = false}}, SHIFT(52),
  [358] = {.entry = {.count = 1, .reusable = true}}, SHIFT(52),
  [360] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(141),
  [363] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2), SHIFT_REPEAT(20),
  [366] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_grace_note_repeat1, 2),
  [368] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 6),
  [370] = {.entry = {.count = 1, .reusable = false}}, SHIFT(123),
  [372] = {.entry = {.count = 1, .reusable = true}}, SHIFT(123),
  [374] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 5),
  [376] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol, 4),
  [378] = {.entry = {.count = 1, .reusable = true}}, SHIFT(100),
  [380] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_decoration, 1),
  [382] = {.entry = {.count = 1, .reusable = false}}, SHIFT(129),
  [384] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 1),
  [386] = {.entry = {.count = 1, .reusable = true}}, SHIFT(113),
  [388] = {.entry = {.count = 1, .reusable = true}}, SHIFT(132),
  [390] = {.entry = {.count = 1, .reusable = true}}, SHIFT(131),
  [392] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_chord_symbol_note, 2),
  [394] = {.entry = {.count = 1, .reusable = true}}, SHIFT(127),
  [396] = {.entry = {.count = 1, .reusable = true}}, SHIFT(122),
  [398] = {.entry = {.count = 1, .reusable = true}}, SHIFT(133),
  [400] = {.entry = {.count = 1, .reusable = true}}, SHIFT(136),
  [402] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [404] = {.entry = {.count = 1, .reusable = false}}, SHIFT(150),
  [406] = {.entry = {.count = 1, .reusable = true}}, SHIFT(140),
  [408] = {.entry = {.count = 1, .reusable = true}}, SHIFT(129),
  [410] = {.entry = {.count = 1, .reusable = true}}, SHIFT(49),
  [412] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [414] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_COMMENTLINE, 2),
  [416] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MUSIC_CODE, 3),
  [418] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [420] = {.entry = {.count = 1, .reusable = true}}, SHIFT(120),
  [422] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_TEXTLINE, 2),
  [424] = {.entry = {.count = 1, .reusable = true}}, SHIFT(119),
  [426] = {.entry = {.count = 1, .reusable = true}}, SHIFT(117),
  [428] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [430] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_source_file, 1),
  [432] = {.entry = {.count = 1, .reusable = true}}, SHIFT(54),
  [434] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_MUSIC_CODE, 2),
  [436] = {.entry = {.count = 1, .reusable = true}}, SHIFT(143),
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
