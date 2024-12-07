#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 46
#define LARGE_STATE_COUNT 7
#define SYMBOL_COUNT 27
#define ALIAS_COUNT 0
#define TOKEN_COUNT 13
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 1
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LF = 1,
  anon_sym_EQ = 2,
  sym_opcode = 3,
  sym_identifier = 4,
  anon_sym_COMMA = 5,
  sym_immediate = 6,
  anon_sym_COLON = 7,
  aux_sym_sublabel_token1 = 8,
  anon_sym_DOT = 9,
  anon_sym_SEMI = 10,
  aux_sym_line_comment_token1 = 11,
  sym_block_comment = 12,
  sym_program = 13,
  sym_section = 14,
  sym_subsection = 15,
  sym_instruction = 16,
  sym_constant = 17,
  sym_operands = 18,
  sym_operand = 19,
  sym_label = 20,
  sym_sublabel = 21,
  sym_macro = 22,
  sym_line_comment = 23,
  aux_sym_program_repeat1 = 24,
  aux_sym_section_repeat1 = 25,
  aux_sym_subsection_repeat1 = 26,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LF] = "\n",
  [anon_sym_EQ] = "=",
  [sym_opcode] = "opcode",
  [sym_identifier] = "identifier",
  [anon_sym_COMMA] = ",",
  [sym_immediate] = "immediate",
  [anon_sym_COLON] = ":",
  [aux_sym_sublabel_token1] = "sublabel_token1",
  [anon_sym_DOT] = ".",
  [anon_sym_SEMI] = ";",
  [aux_sym_line_comment_token1] = "line_comment_token1",
  [sym_block_comment] = "block_comment",
  [sym_program] = "program",
  [sym_section] = "section",
  [sym_subsection] = "subsection",
  [sym_instruction] = "instruction",
  [sym_constant] = "constant",
  [sym_operands] = "operands",
  [sym_operand] = "operand",
  [sym_label] = "label",
  [sym_sublabel] = "sublabel",
  [sym_macro] = "macro",
  [sym_line_comment] = "line_comment",
  [aux_sym_program_repeat1] = "program_repeat1",
  [aux_sym_section_repeat1] = "section_repeat1",
  [aux_sym_subsection_repeat1] = "subsection_repeat1",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LF] = anon_sym_LF,
  [anon_sym_EQ] = anon_sym_EQ,
  [sym_opcode] = sym_opcode,
  [sym_identifier] = sym_identifier,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [sym_immediate] = sym_immediate,
  [anon_sym_COLON] = anon_sym_COLON,
  [aux_sym_sublabel_token1] = aux_sym_sublabel_token1,
  [anon_sym_DOT] = anon_sym_DOT,
  [anon_sym_SEMI] = anon_sym_SEMI,
  [aux_sym_line_comment_token1] = aux_sym_line_comment_token1,
  [sym_block_comment] = sym_block_comment,
  [sym_program] = sym_program,
  [sym_section] = sym_section,
  [sym_subsection] = sym_subsection,
  [sym_instruction] = sym_instruction,
  [sym_constant] = sym_constant,
  [sym_operands] = sym_operands,
  [sym_operand] = sym_operand,
  [sym_label] = sym_label,
  [sym_sublabel] = sym_sublabel,
  [sym_macro] = sym_macro,
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
  [anon_sym_LF] = {
    .visible = true,
    .named = false,
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
  [sym_immediate] = {
    .visible = true,
    .named = true,
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
  [sym_program] = {
    .visible = true,
    .named = true,
  },
  [sym_section] = {
    .visible = true,
    .named = true,
  },
  [sym_subsection] = {
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
  [16] = 13,
  [17] = 14,
  [18] = 18,
  [19] = 10,
  [20] = 15,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 23,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 22,
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
  [40] = 34,
  [41] = 38,
  [42] = 35,
  [43] = 32,
  [44] = 33,
  [45] = 21,
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(7);
      ADVANCE_MAP(
        '\n', 8,
        '$', 5,
        ',', 15,
        '.', 20,
        '/', 2,
        ':', 17,
        ';', 21,
        '=', 9,
      );
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(0);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(14);
      END_STATE();
    case 1:
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '$') ADVANCE(5);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(1);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 2:
      if (lookahead == '*') ADVANCE(4);
      END_STATE();
    case 3:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead == '/') ADVANCE(28);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 4:
      if (lookahead == '*') ADVANCE(3);
      if (lookahead != 0) ADVANCE(4);
      END_STATE();
    case 5:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 6:
      if (eof) ADVANCE(7);
      if (lookahead == '\n') ADVANCE(8);
      if (lookahead == '.') ADVANCE(19);
      if (lookahead == '/') ADVANCE(2);
      if (lookahead == ';') ADVANCE(21);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') SKIP(6);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(13);
      if (('-' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(14);
      END_STATE();
    case 7:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 8:
      ACCEPT_TOKEN(anon_sym_LF);
      END_STATE();
    case 9:
      ACCEPT_TOKEN(anon_sym_EQ);
      END_STATE();
    case 10:
      ACCEPT_TOKEN(sym_opcode);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 11:
      ACCEPT_TOKEN(sym_identifier);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(11);
      if (lookahead == '-' ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 12:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(10);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(14);
      END_STATE();
    case 13:
      ACCEPT_TOKEN(sym_identifier);
      if (('a' <= lookahead && lookahead <= 'z')) ADVANCE(12);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_') ADVANCE(14);
      END_STATE();
    case 14:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(14);
      END_STATE();
    case 15:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 16:
      ACCEPT_TOKEN(sym_immediate);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(16);
      END_STATE();
    case 17:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 18:
      ACCEPT_TOKEN(aux_sym_sublabel_token1);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 19:
      ACCEPT_TOKEN(anon_sym_DOT);
      END_STATE();
    case 20:
      ACCEPT_TOKEN(anon_sym_DOT);
      if (lookahead == '-' ||
          ('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'Z') ||
          lookahead == '_' ||
          ('a' <= lookahead && lookahead <= 'z')) ADVANCE(18);
      END_STATE();
    case 21:
      ACCEPT_TOKEN(anon_sym_SEMI);
      END_STATE();
    case 22:
      ACCEPT_TOKEN(anon_sym_SEMI);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 23:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead == '/') ADVANCE(27);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 24:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '\n') ADVANCE(4);
      if (lookahead == '*') ADVANCE(23);
      if (lookahead != 0) ADVANCE(24);
      END_STATE();
    case 25:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '*') ADVANCE(24);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 26:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead == '/') ADVANCE(25);
      if (lookahead == ';') ADVANCE(22);
      if (lookahead == '\t' ||
          lookahead == '\r' ||
          lookahead == ' ') ADVANCE(26);
      if (lookahead != 0 &&
          lookahead != '\t' &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 27:
      ACCEPT_TOKEN(aux_sym_line_comment_token1);
      if (lookahead != 0 &&
          lookahead != '\n') ADVANCE(27);
      END_STATE();
    case 28:
      ACCEPT_TOKEN(sym_block_comment);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 6},
  [2] = {.lex_state = 6},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 1},
  [16] = {.lex_state = 6},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 6},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 1},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 1},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 26},
  [33] = {.lex_state = 1},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 0},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 26},
  [44] = {.lex_state = 1},
  [45] = {(TSStateId)(-1)},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [sym_line_comment] = STATE(0),
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LF] = ACTIONS(1),
    [anon_sym_EQ] = ACTIONS(1),
    [sym_opcode] = ACTIONS(1),
    [sym_identifier] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [sym_immediate] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [aux_sym_sublabel_token1] = ACTIONS(1),
    [anon_sym_DOT] = ACTIONS(1),
    [anon_sym_SEMI] = ACTIONS(3),
    [sym_block_comment] = ACTIONS(5),
  },
  [1] = {
    [sym_program] = STATE(36),
    [sym_section] = STATE(5),
    [sym_instruction] = STATE(5),
    [sym_constant] = STATE(5),
    [sym_label] = STATE(4),
    [sym_macro] = STATE(5),
    [sym_line_comment] = STATE(1),
    [aux_sym_program_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(7),
    [anon_sym_LF] = ACTIONS(9),
    [sym_opcode] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_block_comment] = ACTIONS(5),
  },
  [2] = {
    [sym_section] = STATE(2),
    [sym_instruction] = STATE(2),
    [sym_constant] = STATE(2),
    [sym_label] = STATE(4),
    [sym_macro] = STATE(2),
    [sym_line_comment] = STATE(2),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [sym_opcode] = ACTIONS(24),
    [sym_identifier] = ACTIONS(27),
    [anon_sym_DOT] = ACTIONS(30),
    [anon_sym_SEMI] = ACTIONS(33),
    [sym_block_comment] = ACTIONS(5),
  },
  [3] = {
    [sym_subsection] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_sublabel] = STATE(8),
    [sym_macro] = STATE(3),
    [sym_line_comment] = STATE(3),
    [aux_sym_section_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(36),
    [anon_sym_LF] = ACTIONS(36),
    [sym_opcode] = ACTIONS(38),
    [sym_identifier] = ACTIONS(41),
    [aux_sym_sublabel_token1] = ACTIONS(43),
    [anon_sym_DOT] = ACTIONS(46),
    [anon_sym_SEMI] = ACTIONS(36),
    [sym_block_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_subsection] = STATE(6),
    [sym_instruction] = STATE(6),
    [sym_sublabel] = STATE(8),
    [sym_macro] = STATE(6),
    [sym_line_comment] = STATE(4),
    [aux_sym_section_repeat1] = STATE(6),
    [ts_builtin_sym_end] = ACTIONS(49),
    [anon_sym_LF] = ACTIONS(49),
    [sym_opcode] = ACTIONS(51),
    [sym_identifier] = ACTIONS(54),
    [aux_sym_sublabel_token1] = ACTIONS(56),
    [anon_sym_DOT] = ACTIONS(58),
    [anon_sym_SEMI] = ACTIONS(49),
    [sym_block_comment] = ACTIONS(5),
  },
  [5] = {
    [sym_section] = STATE(2),
    [sym_instruction] = STATE(2),
    [sym_constant] = STATE(2),
    [sym_label] = STATE(4),
    [sym_macro] = STATE(2),
    [sym_line_comment] = STATE(5),
    [aux_sym_program_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(61),
    [anon_sym_LF] = ACTIONS(63),
    [sym_opcode] = ACTIONS(11),
    [sym_identifier] = ACTIONS(13),
    [anon_sym_DOT] = ACTIONS(15),
    [anon_sym_SEMI] = ACTIONS(17),
    [sym_block_comment] = ACTIONS(5),
  },
  [6] = {
    [sym_subsection] = STATE(3),
    [sym_instruction] = STATE(3),
    [sym_sublabel] = STATE(8),
    [sym_macro] = STATE(3),
    [sym_line_comment] = STATE(6),
    [aux_sym_section_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(65),
    [anon_sym_LF] = ACTIONS(65),
    [sym_opcode] = ACTIONS(67),
    [sym_identifier] = ACTIONS(70),
    [aux_sym_sublabel_token1] = ACTIONS(56),
    [anon_sym_DOT] = ACTIONS(72),
    [anon_sym_SEMI] = ACTIONS(65),
    [sym_block_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 8,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(77), 1,
      anon_sym_LF,
    ACTIONS(80), 1,
      sym_opcode,
    ACTIONS(83), 1,
      sym_identifier,
    ACTIONS(85), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_line_comment,
    ACTIONS(75), 3,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
    STATE(9), 3,
      sym_instruction,
      sym_macro,
      aux_sym_subsection_repeat1,
  [29] = 8,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(90), 1,
      anon_sym_LF,
    ACTIONS(93), 1,
      sym_opcode,
    ACTIONS(96), 1,
      sym_identifier,
    ACTIONS(98), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_line_comment,
    ACTIONS(88), 3,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
    STATE(7), 3,
      sym_instruction,
      sym_macro,
      aux_sym_subsection_repeat1,
  [58] = 7,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(103), 1,
      anon_sym_LF,
    ACTIONS(106), 1,
      sym_opcode,
    ACTIONS(109), 1,
      sym_identifier,
    ACTIONS(111), 1,
      anon_sym_DOT,
    ACTIONS(101), 3,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
    STATE(9), 4,
      sym_instruction,
      sym_macro,
      sym_line_comment,
      aux_sym_subsection_repeat1,
  [85] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(116), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [103] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(120), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(118), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [121] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(124), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(122), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [139] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(128), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [157] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(132), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [175] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(134), 1,
      anon_sym_LF,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      sym_immediate,
    STATE(15), 1,
      sym_line_comment,
    STATE(29), 1,
      sym_operand,
    STATE(38), 1,
      sym_operands,
  [200] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(128), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(126), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [217] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(132), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(130), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [234] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(18), 1,
      sym_line_comment,
    ACTIONS(142), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(140), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [251] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(116), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(114), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [268] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      sym_immediate,
    ACTIONS(144), 1,
      anon_sym_LF,
    STATE(20), 1,
      sym_line_comment,
    STATE(29), 1,
      sym_operand,
    STATE(41), 1,
      sym_operands,
  [293] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(148), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(146), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [310] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(152), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(150), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [327] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      sym_immediate,
    STATE(23), 1,
      sym_line_comment,
    STATE(29), 1,
      sym_operand,
    STATE(35), 1,
      sym_operands,
  [349] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      sym_immediate,
    STATE(24), 1,
      sym_line_comment,
    STATE(29), 1,
      sym_operand,
    STATE(42), 1,
      sym_operands,
  [371] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(136), 1,
      sym_identifier,
    ACTIONS(138), 1,
      sym_immediate,
    STATE(25), 1,
      sym_line_comment,
    STATE(37), 1,
      sym_operand,
  [390] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(154), 1,
      sym_identifier,
    ACTIONS(156), 1,
      sym_immediate,
    STATE(18), 1,
      sym_operand,
    STATE(26), 1,
      sym_line_comment,
  [409] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(158), 1,
      anon_sym_EQ,
    ACTIONS(160), 1,
      anon_sym_COLON,
    STATE(27), 1,
      sym_line_comment,
  [425] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(28), 1,
      sym_line_comment,
    ACTIONS(150), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [439] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(162), 1,
      anon_sym_LF,
    ACTIONS(164), 1,
      anon_sym_COMMA,
    STATE(29), 1,
      sym_line_comment,
  [455] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(166), 1,
      anon_sym_LF,
    STATE(30), 1,
      sym_line_comment,
  [468] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(168), 1,
      anon_sym_COLON,
    STATE(31), 1,
      sym_line_comment,
  [481] = 4,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    ACTIONS(172), 1,
      aux_sym_line_comment_token1,
    ACTIONS(174), 1,
      sym_block_comment,
    STATE(32), 1,
      sym_line_comment,
  [494] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(176), 1,
      sym_identifier,
    STATE(33), 1,
      sym_line_comment,
  [507] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(178), 1,
      anon_sym_LF,
    STATE(34), 1,
      sym_line_comment,
  [520] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(180), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym_line_comment,
  [533] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(182), 1,
      ts_builtin_sym_end,
    STATE(36), 1,
      sym_line_comment,
  [546] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(184), 1,
      anon_sym_LF,
    STATE(37), 1,
      sym_line_comment,
  [559] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(186), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym_line_comment,
  [572] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(188), 1,
      anon_sym_LF,
    STATE(39), 1,
      sym_line_comment,
  [585] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(190), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym_line_comment,
  [598] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(192), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym_line_comment,
  [611] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(194), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym_line_comment,
  [624] = 4,
    ACTIONS(170), 1,
      anon_sym_SEMI,
    ACTIONS(174), 1,
      sym_block_comment,
    ACTIONS(196), 1,
      aux_sym_line_comment_token1,
    STATE(43), 1,
      sym_line_comment,
  [637] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(198), 1,
      sym_identifier,
    STATE(44), 1,
      sym_line_comment,
  [650] = 1,
    ACTIONS(146), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(7)] = 0,
  [SMALL_STATE(8)] = 29,
  [SMALL_STATE(9)] = 58,
  [SMALL_STATE(10)] = 85,
  [SMALL_STATE(11)] = 103,
  [SMALL_STATE(12)] = 121,
  [SMALL_STATE(13)] = 139,
  [SMALL_STATE(14)] = 157,
  [SMALL_STATE(15)] = 175,
  [SMALL_STATE(16)] = 200,
  [SMALL_STATE(17)] = 217,
  [SMALL_STATE(18)] = 234,
  [SMALL_STATE(19)] = 251,
  [SMALL_STATE(20)] = 268,
  [SMALL_STATE(21)] = 293,
  [SMALL_STATE(22)] = 310,
  [SMALL_STATE(23)] = 327,
  [SMALL_STATE(24)] = 349,
  [SMALL_STATE(25)] = 371,
  [SMALL_STATE(26)] = 390,
  [SMALL_STATE(27)] = 409,
  [SMALL_STATE(28)] = 425,
  [SMALL_STATE(29)] = 439,
  [SMALL_STATE(30)] = 455,
  [SMALL_STATE(31)] = 468,
  [SMALL_STATE(32)] = 481,
  [SMALL_STATE(33)] = 494,
  [SMALL_STATE(34)] = 507,
  [SMALL_STATE(35)] = 520,
  [SMALL_STATE(36)] = 533,
  [SMALL_STATE(37)] = 546,
  [SMALL_STATE(38)] = 559,
  [SMALL_STATE(39)] = 572,
  [SMALL_STATE(40)] = 585,
  [SMALL_STATE(41)] = 598,
  [SMALL_STATE(42)] = 611,
  [SMALL_STATE(43)] = 624,
  [SMALL_STATE(44)] = 637,
  [SMALL_STATE(45)] = 650,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(15),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(27),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(33),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(43),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(15),
  [27] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(27),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(33),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(43),
  [36] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [38] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [41] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [43] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(31),
  [46] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [49] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [51] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 1, 0, 0), SHIFT(20),
  [54] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, SHIFT(31),
  [58] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 1, 0, 0), SHIFT(44),
  [61] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [63] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [65] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 1),
  [67] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 2, 0, 1), SHIFT(20),
  [70] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 1),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 2, 0, 1), SHIFT(44),
  [75] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 1),
  [77] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 1), SHIFT(9),
  [80] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 1), SHIFT(20),
  [83] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 1),
  [85] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 1), SHIFT(44),
  [88] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 1, 0, 0),
  [90] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_subsection, 1, 0, 0), SHIFT(7),
  [93] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 1, 0, 0), SHIFT(20),
  [96] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection, 1, 0, 0),
  [98] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 1, 0, 0), SHIFT(44),
  [101] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0),
  [103] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [106] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0), SHIFT_REPEAT(20),
  [109] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0),
  [111] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [114] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4, 0, 0),
  [116] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 4, 0, 0),
  [118] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 0),
  [120] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 0),
  [122] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sublabel, 3, 0, 0),
  [124] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sublabel, 3, 0, 0),
  [126] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [128] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [130] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [132] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 0),
  [134] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [136] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [138] = {.entry = {.count = 1, .reusable = false}}, SHIFT(28),
  [140] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3, 0, 0),
  [142] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 3, 0, 0),
  [144] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [146] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [148] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3, 0, 0),
  [150] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1, 0, 0),
  [152] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1, 0, 0),
  [154] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [156] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [158] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
  [160] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [162] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [164] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [166] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [168] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [170] = {.entry = {.count = 1, .reusable = false}}, SHIFT(32),
  [172] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [174] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [176] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [178] = {.entry = {.count = 1, .reusable = true}}, SHIFT(45),
  [180] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [182] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [184] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 0),
  [186] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [188] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [190] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [192] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [194] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [196] = {.entry = {.count = 1, .reusable = false}}, SHIFT(40),
  [198] = {.entry = {.count = 1, .reusable = true}}, SHIFT(24),
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
