#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 42
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 32
#define ALIAS_COUNT 0
#define TOKEN_COUNT 15
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_EQ = 1,
  sym_opcode = 2,
  sym_identifier = 3,
  anon_sym_COMMA = 4,
  anon_sym_COLON = 5,
  aux_sym_sublabel_token1 = 6,
  anon_sym_DOT = 7,
  anon_sym_DOTinclude = 8,
  sym_immediate = 9,
  sym_string = 10,
  anon_sym_SEMI = 11,
  aux_sym_line_comment_token1 = 12,
  sym_block_comment = 13,
  anon_sym_LF = 14,
  sym_program = 15,
  sym_section = 16,
  sym__section_body = 17,
  sym_subsection = 18,
  sym_subsection_body = 19,
  sym_instruction = 20,
  sym_constant = 21,
  sym_operands = 22,
  sym_operand = 23,
  sym_label = 24,
  sym_sublabel = 25,
  sym_macro = 26,
  sym_include = 27,
  sym_line_comment = 28,
  aux_sym_program_repeat1 = 29,
  aux_sym_section_repeat1 = 30,
  aux_sym_subsection_repeat1 = 31,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_EQ] = "=",
  [sym_opcode] = "opcode",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
  [anon_sym_COLON] = ":",
  [aux_sym_sublabel_token1] = "sublabel_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_DOTinclude] = ".include",
  [sym_immediate] = "immediate",
  [sym_string] = "string",
  [anon_sym_SEMI] = ";",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [sym_block_comment] = "block_comment",
  [anon_sym_LF] = "\n",
  [sym_program] = "program",
  [sym_section] = "section",
  [sym__section_body] = "_section_body",
  [sym_subsection] = "subsection",
  [sym_subsection_body] = "subsection_body",
  [sym_instruction] = "instruction",
  [sym_constant] = "constant",
  [sym_operands] = "operands",
  [sym_operand] = "operand",
  [sym_label] = "label",
  [sym_sublabel] = "sublabel",
  [sym_macro] = "macro",
  [sym_include] = "include",
  [sym_line_comment] = "line_comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_subsection_repeat1] = "subsection_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_opcode] = sym_opcode,
  [sym_identifier] = sym_identifier,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_sublabel_token1] = aux_sym_sublabel_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_DOTinclude] = anon_sym_DOTinclude,
  [sym_immediate] = sym_immediate,
  [sym_string] = sym_string,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [sym_block_comment] = sym_block_comment,
  [anon_sym_LF] = anon_sym_LF,
  [sym_program] = sym_program,
  [sym_section] = sym_section,
  [sym__section_body] = sym__section_body,
  [sym_subsection] = sym_subsection,
  [sym_subsection_body] = sym_subsection_body,
  [sym_instruction] = sym_instruction,
  [sym_constant] = sym_constant,
  [sym_operands] = sym_operands,
  [sym_operand] = sym_operand,
  [sym_label] = sym_label,
  [sym_sublabel] = sym_sublabel,
  [sym_macro] = sym_macro,
  [sym_include] = sym_include,
  [sym_line_comment] = sym_line_comment,
  [aux_sym_program_repeat1] = aux_sym_program_repeat1,
  [aux_sym_section_repeat1] = aux_sym_section_repeat1,
  [aux_sym_subsection_repeat1] = aux_sym_subsection_repeat1,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_EQ] = {
    .visible = true,
    .named = false,
  },
  [sym_opcode] = {
    .visible = true,
    .named = true,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_sublabel_token1] = {
    .visible = false,
    .named = false,
  },
  [anon_sym_DOT] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DOTinclude] = {
    .visible = true,
    .named = false,
  },
  [sym_immediate] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_SEMI] = {
    .visible = true,
    .named = false,
  },
  [aux_sym_line_comment_token1] = {
    .visible = false,
    .named = false,
  },
  [sym_block_comment] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
  },
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym__section_body] = {
    .visible = false,
    .named = true,
  },
  [sym_subsection] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection_body] = {
    .visible = true,
    .named = true,
  },
  [sym_instruction] = {
    .visible = true,
    .named = true,
  },
  [sym_constant] = {
    .visible = true,
    .named = true,
  },
  [sym_operands] = {
    .visible = true,
    .named = true,
  },
  [sym_operand] = {
    .visible = true,
    .named = true,
  },
  [sym_label] = {
    .visible = true,
    .named = true,
  },
  [sym_sublabel] = {
    .visible = true,
    .named = true,
  },
  [sym_macro] = {
    .visible = true,
    .named = true,
  },
  [sym_include] = {
    .visible = true,
    .named = true,
  },
  [sym_line_comment] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_program_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_section_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_subsection_repeat1] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_body = 1,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_body] = "body",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 1},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_body, 1},
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
  [25] = 19,
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
  [39] = 28,
  [40] = 35,
  [41] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(15);
      ADVANCE_MAP(
        '\n', 40,
        '"', 2,
        '$', 12,
        ',', 25,
        '.', 28,
        '/', 3,
        ':', 26,
        ';', 32,
        '=', 16,
        '@', 13,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(20);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(21);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(24);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '"') ADVANCE(2);
      if (lookahead == '$') ADVANCE(12);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(5);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead == '/') ADVANCE(39);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 5:
      if (lookahead == '*') ADVANCE(4);
      if (lookahead != 0) ADVANCE(5);
      END_STATE();
    case 6:
      if (lookahead == 'c') ADVANCE(9);
      END_STATE();
    case 7:
      if (lookahead == 'd') ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == 'e') ADVANCE(29);
      END_STATE();
    case 9:
      if (lookahead == 'l') ADVANCE(11);
      END_STATE();
    case 10:
      if (lookahead == 'n') ADVANCE(6);
      END_STATE();
    case 11:
      if (lookahead == 'u') ADVANCE(7);
      END_STATE();
    case 12:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 13:
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 14:
      if (eof) ADVANCE(15);
      if (lookahead == '\n') ADVANCE(40);
      if (lookahead == '.') ADVANCE(28);
      if (lookahead == '/') ADVANCE(3);
      if (lookahead == ';') ADVANCE(32);
      if (lookahead == '@') ADVANCE(13);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(14);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(23);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(24);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(sym_opcode);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(17);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(21);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(24);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'f')) ADVANCE(19);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F')) ADVANCE(21);
      if (('g' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(24);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(21);
      if (lookahead == '-' ||
          ('G' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('g' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(24);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(22);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_sublabel_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == 'i') ADVANCE(10);
      END_STATE();
    case 29:
      ACCEPT_TOKEN(anon_sym_DOTinclude);
      END_STATE();
    case 30:
      ACCEPT_TOKEN(sym_immediate);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(30);
      END_STATE();
    case 31:
      ACCEPT_TOKEN(sym_string);
      if (lookahead == '"') ADVANCE(31);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(2);
      END_STATE();
    case 32:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 33:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 34:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead == '/') ADVANCE(38);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 35:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(5);
      if (lookahead == '*') ADVANCE(34);
      if (lookahead != 0) ADVANCE(35);
      END_STATE();
    case 36:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(35);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 37:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(36);
      if (lookahead == ';') ADVANCE(33);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(37);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 38:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(38);
      END_STATE();
    case 39:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    case 40:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 14},
  [2] = {.lex_state = 14},
  [3] = {.lex_state = 14},
  [4] = {.lex_state = 14},
  [5] = {.lex_state = 14},
  [6] = {.lex_state = 14},
  [7] = {.lex_state = 14},
  [8] = {.lex_state = 14},
  [9] = {.lex_state = 14},
  [10] = {.lex_state = 14},
  [11] = {.lex_state = 14},
  [12] = {.lex_state = 14},
  [13] = {.lex_state = 14},
  [14] = {.lex_state = 14},
  [15] = {.lex_state = 14},
  [16] = {.lex_state = 14},
  [17] = {.lex_state = 14},
  [18] = {.lex_state = 14},
  [19] = {.lex_state = 14},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 14},
  [22] = {.lex_state = 1},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 1},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 37},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 37},
  [41] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_opcode] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_sublabel_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_DOTinclude] = ACTIONS(1),
    [sym_immediate] = ACTIONS(1),
    [sym_string] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(1),
  },
  [1] = {
    [sym_program] = STATE(37),
    [sym_section] = STATE(5),
    [sym_instruction] = STATE(5),
    [sym_constant] = STATE(5),
    [sym_label] = STATE(2),
    [sym_macro] = STATE(5),
    [sym_include] = STATE(17),
    [sym_line_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [sym_opcode] = ACTIONS(9),
    [sym_identifier] = ACTIONS(11),
    [anon_sym_DOT] = ACTIONS(13),
    [anon_sym_DOTinclude] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(19),
  },
  [2] = {
    [sym__section_body] = STATE(3),
    [sym_subsection] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_sublabel] = STATE(8),
    [sym_macro] = STATE(3),
    [sym_include] = STATE(17),
    [sym_line_comment] = STATE(2),
    [aux_sym_section_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(21),
    [sym_opcode] = ACTIONS(23),
    [sym_identifier] = ACTIONS(26),
    [aux_sym_sublabel_token1] = ACTIONS(28),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_DOTinclude] = ACTIONS(33),
    [anon_sym_SEMI] = ACTIONS(21),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(36),
  },
  [3] = {
    [sym__section_body] = STATE(4),
    [sym_subsection] = STATE(4),
    [sym_instruction] = STATE(4),
    [sym_sublabel] = STATE(8),
    [sym_macro] = STATE(4),
    [sym_include] = STATE(17),
    [sym_line_comment] = STATE(3),
    [aux_sym_section_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(39),
    [sym_opcode] = ACTIONS(41),
    [sym_identifier] = ACTIONS(44),
    [aux_sym_sublabel_token1] = ACTIONS(28),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_DOTinclude] = ACTIONS(49),
    [anon_sym_SEMI] = ACTIONS(39),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(52),
  },
  [4] = {
    [sym__section_body] = STATE(4),
    [sym_subsection] = STATE(4),
    [sym_instruction] = STATE(4),
    [sym_sublabel] = STATE(8),
    [sym_macro] = STATE(4),
    [sym_include] = STATE(17),
    [sym_line_comment] = STATE(4),
    [aux_sym_section_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(55),
    [sym_opcode] = ACTIONS(57),
    [sym_identifier] = ACTIONS(60),
    [aux_sym_sublabel_token1] = ACTIONS(62),
    [anon_sym_DOT] = ACTIONS(65),
    [anon_sym_DOTinclude] = ACTIONS(68),
    [anon_sym_SEMI] = ACTIONS(55),
    [sym_block_comment] = ACTIONS(5),
    [anon_sym_LF] = ACTIONS(71),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 12,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(9), 1,
      sym_opcode,
    ACTIONS(11), 1,
      sym_identifier,
    ACTIONS(13), 1,
      anon_sym_DOT,
    ACTIONS(15), 1,
      anon_sym_DOTinclude,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(74), 1,
      ts_builtin_sym_end,
    ACTIONS(76), 1,
      anon_sym_LF,
    STATE(2), 1,
      sym_label,
    STATE(5), 1,
      sym_line_comment,
    STATE(17), 1,
      sym_include,
    STATE(6), 5,
      sym_section,
      sym_instruction,
      sym_constant,
      sym_macro,
      aux_sym_program_repeat1,
  [41] = 11,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(78), 1,
      ts_builtin_sym_end,
    ACTIONS(80), 1,
      sym_opcode,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(86), 1,
      anon_sym_DOT,
    ACTIONS(89), 1,
      anon_sym_DOTinclude,
    ACTIONS(92), 1,
      anon_sym_SEMI,
    ACTIONS(95), 1,
      anon_sym_LF,
    STATE(2), 1,
      sym_label,
    STATE(17), 1,
      sym_include,
    STATE(6), 6,
      sym_section,
      sym_instruction,
      sym_constant,
      sym_macro,
      sym_line_comment,
      aux_sym_program_repeat1,
  [80] = 11,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(100), 1,
      sym_opcode,
    ACTIONS(103), 1,
      sym_identifier,
    ACTIONS(105), 1,
      anon_sym_DOT,
    ACTIONS(108), 1,
      anon_sym_DOTinclude,
    ACTIONS(111), 1,
      anon_sym_LF,
    STATE(7), 1,
      sym_line_comment,
    STATE(17), 1,
      sym_include,
    STATE(9), 2,
      sym_subsection_body,
      aux_sym_subsection_repeat1,
    STATE(14), 2,
      sym_instruction,
      sym_macro,
    ACTIONS(98), 3,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [118] = 11,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(116), 1,
      sym_opcode,
    ACTIONS(119), 1,
      sym_identifier,
    ACTIONS(121), 1,
      anon_sym_DOT,
    ACTIONS(124), 1,
      anon_sym_DOTinclude,
    ACTIONS(127), 1,
      anon_sym_LF,
    STATE(8), 1,
      sym_line_comment,
    STATE(17), 1,
      sym_include,
    STATE(7), 2,
      sym_subsection_body,
      aux_sym_subsection_repeat1,
    STATE(14), 2,
      sym_instruction,
      sym_macro,
    ACTIONS(114), 3,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [156] = 10,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(132), 1,
      sym_opcode,
    ACTIONS(135), 1,
      sym_identifier,
    ACTIONS(137), 1,
      anon_sym_DOT,
    ACTIONS(140), 1,
      anon_sym_DOTinclude,
    ACTIONS(143), 1,
      anon_sym_LF,
    STATE(17), 1,
      sym_include,
    STATE(14), 2,
      sym_instruction,
      sym_macro,
    ACTIONS(130), 3,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
    STATE(9), 3,
      sym_subsection_body,
      sym_line_comment,
      aux_sym_subsection_repeat1,
  [192] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(148), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(146), 5,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_DOTinclude,
      anon_sym_SEMI,
      anon_sym_LF,
  [211] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(152), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(150), 5,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_DOTinclude,
      anon_sym_SEMI,
      anon_sym_LF,
  [230] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(156), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(154), 5,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_DOTinclude,
      anon_sym_SEMI,
      anon_sym_LF,
  [249] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(160), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(158), 5,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_DOTinclude,
      anon_sym_SEMI,
      anon_sym_LF,
  [268] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(164), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(162), 5,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_DOTinclude,
      anon_sym_SEMI,
      anon_sym_LF,
  [287] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(168), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(166), 5,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_DOTinclude,
      anon_sym_SEMI,
      anon_sym_LF,
  [306] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(172), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(170), 5,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_DOTinclude,
      anon_sym_SEMI,
      anon_sym_LF,
  [325] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(176), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(174), 5,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_DOTinclude,
      anon_sym_SEMI,
      anon_sym_LF,
  [344] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(180), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(178), 4,
      ts_builtin_sym_end,
      anon_sym_DOTinclude,
      anon_sym_SEMI,
      anon_sym_LF,
  [362] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(184), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(182), 4,
      ts_builtin_sym_end,
      anon_sym_DOTinclude,
      anon_sym_SEMI,
      anon_sym_LF,
  [380] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(188), 1,
      sym_immediate,
    ACTIONS(190), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym_line_comment,
    STATE(26), 1,
      sym_operand,
    STATE(29), 1,
      sym_operands,
    ACTIONS(186), 2,
      sym_identifier,
      sym_string,
  [406] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(194), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(192), 4,
      ts_builtin_sym_end,
      anon_sym_DOTinclude,
      anon_sym_SEMI,
      anon_sym_LF,
  [424] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(188), 1,
      sym_immediate,
    STATE(22), 1,
      sym_line_comment,
    STATE(26), 1,
      sym_operand,
    STATE(34), 1,
      sym_operands,
    ACTIONS(186), 2,
      sym_identifier,
      sym_string,
  [447] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      sym_immediate,
    STATE(18), 1,
      sym_operand,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(196), 2,
      sym_identifier,
      sym_string,
  [467] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(188), 1,
      sym_immediate,
    STATE(24), 1,
      sym_line_comment,
    STATE(36), 1,
      sym_operand,
    ACTIONS(186), 2,
      sym_identifier,
      sym_string,
  [487] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(25), 1,
      sym_line_comment,
    ACTIONS(182), 2,
      anon_sym_COMMA,
      anon_sym_LF,
  [501] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(200), 1,
      anon_sym_COMMA,
    ACTIONS(202), 1,
      anon_sym_LF,
    STATE(26), 1,
      sym_line_comment,
  [517] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(204), 1,
      anon_sym_EQ,
    ACTIONS(206), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym_line_comment,
  [533] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(208), 1,
      anon_sym_LF,
    STATE(28), 1,
      sym_line_comment,
  [546] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(210), 1,
      anon_sym_LF,
    STATE(29), 1,
      sym_line_comment,
  [559] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(212), 1,
      anon_sym_COLON,
    STATE(30), 1,
      sym_line_comment,
  [572] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(214), 1,
      anon_sym_LF,
    STATE(31), 1,
      sym_line_comment,
  [585] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(216), 1,
      sym_identifier,
    STATE(32), 1,
      sym_line_comment,
  [598] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(218), 1,
      sym_string,
    STATE(33), 1,
      sym_line_comment,
  [611] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(220), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym_line_comment,
  [624] = 4,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(224), 1,
      aux_sym_line_comment_token1,
    ACTIONS(226), 1,
      sym_block_comment,
    STATE(35), 1,
      sym_line_comment,
  [637] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(228), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_line_comment,
  [650] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(230), 1,
      ts_builtin_sym_end,
    STATE(37), 1,
      sym_line_comment,
  [663] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(232), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym_line_comment,
  [676] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(234), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym_line_comment,
  [689] = 4,
    ACTIONS(222), 1,
      anon_sym_SEMI,
    ACTIONS(226), 1,
      sym_block_comment,
    ACTIONS(236), 1,
      aux_sym_line_comment_token1,
    STATE(40), 1,
      sym_line_comment,
  [702] = 1,
    ACTIONS(192), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 41,
  [SMALL_STATE(7)] = 80,
  [SMALL_STATE(8)] = 118,
  [SMALL_STATE(9)] = 156,
  [SMALL_STATE(10)] = 192,
  [SMALL_STATE(11)] = 211,
  [SMALL_STATE(12)] = 230,
  [SMALL_STATE(13)] = 249,
  [SMALL_STATE(14)] = 268,
  [SMALL_STATE(15)] = 287,
  [SMALL_STATE(16)] = 306,
  [SMALL_STATE(17)] = 325,
  [SMALL_STATE(18)] = 344,
  [SMALL_STATE(19)] = 362,
  [SMALL_STATE(20)] = 380,
  [SMALL_STATE(21)] = 406,
  [SMALL_STATE(22)] = 424,
  [SMALL_STATE(23)] = 447,
  [SMALL_STATE(24)] = 467,
  [SMALL_STATE(25)] = 487,
  [SMALL_STATE(26)] = 501,
  [SMALL_STATE(27)] = 517,
  [SMALL_STATE(28)] = 533,
  [SMALL_STATE(29)] = 546,
  [SMALL_STATE(30)] = 559,
  [SMALL_STATE(31)] = 572,
  [SMALL_STATE(32)] = 585,
  [SMALL_STATE(33)] = 598,
  [SMALL_STATE(34)] = 611,
  [SMALL_STATE(35)] = 624,
  [SMALL_STATE(36)] = 637,
  [SMALL_STATE(37)] = 650,
  [SMALL_STATE(38)] = 663,
  [SMALL_STATE(39)] = 676,
  [SMALL_STATE(40)] = 689,
  [SMALL_STATE(41)] = 702,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = false}}, SHIFT(20),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(40),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [23] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 1, 0, 0), SHIFT(20),
  [26] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 0),
  [28] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [30] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 1, 0, 0), SHIFT(32),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 1, 0, 0), SHIFT(33),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 1, 0, 0), SHIFT(3),
  [39] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 1),
  [41] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 2, 0, 1), SHIFT(20),
  [44] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 1),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 2, 0, 1), SHIFT(32),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 2, 0, 1), SHIFT(33),
  [52] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 2, 0, 1), SHIFT(4),
  [55] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [60] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [62] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(30),
  [65] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [68] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [71] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [74] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [78] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [83] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [86] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [92] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(40),
  [95] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [98] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 1),
  [100] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 1), SHIFT(20),
  [103] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 1),
  [105] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 1), SHIFT(32),
  [108] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 1), SHIFT(33),
  [111] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 1), SHIFT(14),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 1, 0, 0),
  [116] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 1, 0, 0), SHIFT(20),
  [119] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection, 1, 0, 0),
  [121] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 1, 0, 0), SHIFT(32),
  [124] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_subsection, 1, 0, 0), SHIFT(33),
  [127] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_subsection, 1, 0, 0), SHIFT(14),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0),
  [132] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [135] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0),
  [137] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0), SHIFT_REPEAT(32),
  [140] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [143] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 4, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_include, 2, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_include, 2, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [156] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [158] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [160] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 0),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_body, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_body, 1, 0, 0),
  [166] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sublabel, 3, 0, 0),
  [168] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sublabel, 3, 0, 0),
  [170] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 0),
  [172] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 0),
  [174] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 1, 0, 0),
  [176] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 1, 0, 0),
  [178] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3, 0, 0),
  [180] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 3, 0, 0),
  [182] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1, 0, 0),
  [184] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [188] = {.entry = {.count = 1, .reusable = false}}, SHIFT(25),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [192] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [194] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3, 0, 0),
  [196] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [198] = {.entry = {.count = 1, .reusable = false}}, SHIFT(19),
  [200] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
  [202] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [204] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [206] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [208] = {.entry = {.count = 1, .reusable = true}}, SHIFT(41),
  [210] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [212] = {.entry = {.count = 1, .reusable = true}}, SHIFT(38),
  [214] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [216] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [218] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [220] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [222] = {.entry = {.count = 1, .reusable = false}}, SHIFT(35),
  [224] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [226] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [228] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 0),
  [230] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [232] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [234] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [236] = {.entry = {.count = 1, .reusable = false}}, SHIFT(39),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_ca65(void) {
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
