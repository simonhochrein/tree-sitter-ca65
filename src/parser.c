#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 48
#define LARGE_STATE_COUNT 5
#define SYMBOL_COUNT 29
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
  sym_section_body = 15,
  sym_subsection = 16,
  sym_subsection_body = 17,
  sym_instruction = 18,
  sym_constant = 19,
  sym_operands = 20,
  sym_operand = 21,
  sym_label = 22,
  sym_sublabel = 23,
  sym_macro = 24,
  sym_line_comment = 25,
  aux_sym_program_repeat1 = 26,
  aux_sym_section_repeat1 = 27,
  aux_sym_subsection_repeat1 = 28,
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
  [sym_section_body] = "section_body",
  [sym_subsection] = "subsection",
  [sym_subsection_body] = "subsection_body",
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
  [sym_section_body] = sym_section_body,
  [sym_subsection] = sym_subsection,
  [sym_subsection_body] = sym_subsection_body,
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
  [sym_section_body] = {
    .visible = true,
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
  [17] = 15,
  [18] = 18,
  [19] = 16,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 12,
  [24] = 18,
  [25] = 25,
  [26] = 25,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 22,
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
  [41] = 38,
  [42] = 40,
  [43] = 43,
  [44] = 34,
  [45] = 43,
  [46] = 39,
  [47] = 21,
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
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 6},
  [6] = {.lex_state = 6},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 0},
  [17] = {.lex_state = 6},
  [18] = {.lex_state = 1},
  [19] = {.lex_state = 6},
  [20] = {.lex_state = 6},
  [21] = {.lex_state = 6},
  [22] = {.lex_state = 6},
  [23] = {.lex_state = 6},
  [24] = {.lex_state = 1},
  [25] = {.lex_state = 1},
  [26] = {.lex_state = 1},
  [27] = {.lex_state = 1},
  [28] = {.lex_state = 1},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 26},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
  [37] = {.lex_state = 0},
  [38] = {.lex_state = 0},
  [39] = {.lex_state = 1},
  [40] = {.lex_state = 0},
  [41] = {.lex_state = 0},
  [42] = {.lex_state = 0},
  [43] = {.lex_state = 0},
  [44] = {.lex_state = 26},
  [45] = {.lex_state = 0},
  [46] = {.lex_state = 1},
  [47] = {(TSStateId)(-1)},
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
    [sym_program] = STATE(33),
    [sym_section] = STATE(5),
    [sym_instruction] = STATE(5),
    [sym_constant] = STATE(5),
    [sym_label] = STATE(3),
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
    [sym_section_body] = STATE(4),
    [sym_subsection] = STATE(10),
    [sym_instruction] = STATE(10),
    [sym_sublabel] = STATE(7),
    [sym_macro] = STATE(10),
    [sym_line_comment] = STATE(2),
    [aux_sym_section_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(19),
    [anon_sym_LF] = ACTIONS(21),
    [sym_opcode] = ACTIONS(24),
    [sym_identifier] = ACTIONS(27),
    [aux_sym_sublabel_token1] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(31),
    [anon_sym_SEMI] = ACTIONS(19),
    [sym_block_comment] = ACTIONS(5),
  },
  [3] = {
    [sym_section_body] = STATE(2),
    [sym_subsection] = STATE(10),
    [sym_instruction] = STATE(10),
    [sym_sublabel] = STATE(7),
    [sym_macro] = STATE(10),
    [sym_line_comment] = STATE(3),
    [aux_sym_section_repeat1] = STATE(2),
    [ts_builtin_sym_end] = ACTIONS(34),
    [anon_sym_LF] = ACTIONS(36),
    [sym_opcode] = ACTIONS(39),
    [sym_identifier] = ACTIONS(42),
    [aux_sym_sublabel_token1] = ACTIONS(29),
    [anon_sym_DOT] = ACTIONS(44),
    [anon_sym_SEMI] = ACTIONS(34),
    [sym_block_comment] = ACTIONS(5),
  },
  [4] = {
    [sym_section_body] = STATE(4),
    [sym_subsection] = STATE(10),
    [sym_instruction] = STATE(10),
    [sym_sublabel] = STATE(7),
    [sym_macro] = STATE(10),
    [sym_line_comment] = STATE(4),
    [aux_sym_section_repeat1] = STATE(4),
    [ts_builtin_sym_end] = ACTIONS(47),
    [anon_sym_LF] = ACTIONS(49),
    [sym_opcode] = ACTIONS(52),
    [sym_identifier] = ACTIONS(55),
    [aux_sym_sublabel_token1] = ACTIONS(57),
    [anon_sym_DOT] = ACTIONS(60),
    [anon_sym_SEMI] = ACTIONS(47),
    [sym_block_comment] = ACTIONS(5),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 10,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(11), 1,
      sym_opcode,
    ACTIONS(13), 1,
      sym_identifier,
    ACTIONS(15), 1,
      anon_sym_DOT,
    ACTIONS(17), 1,
      anon_sym_SEMI,
    ACTIONS(63), 1,
      ts_builtin_sym_end,
    ACTIONS(65), 1,
      anon_sym_LF,
    STATE(3), 1,
      sym_label,
    STATE(5), 1,
      sym_line_comment,
    STATE(6), 5,
      sym_section,
      sym_instruction,
      sym_constant,
      sym_macro,
      aux_sym_program_repeat1,
  [35] = 9,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(67), 1,
      ts_builtin_sym_end,
    ACTIONS(69), 1,
      anon_sym_LF,
    ACTIONS(72), 1,
      sym_opcode,
    ACTIONS(75), 1,
      sym_identifier,
    ACTIONS(78), 1,
      anon_sym_DOT,
    ACTIONS(81), 1,
      anon_sym_SEMI,
    STATE(3), 1,
      sym_label,
    STATE(6), 6,
      sym_section,
      sym_instruction,
      sym_constant,
      sym_macro,
      sym_line_comment,
      aux_sym_program_repeat1,
  [68] = 9,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(86), 1,
      anon_sym_LF,
    ACTIONS(89), 1,
      sym_opcode,
    ACTIONS(92), 1,
      sym_identifier,
    ACTIONS(94), 1,
      anon_sym_DOT,
    STATE(7), 1,
      sym_line_comment,
    STATE(8), 2,
      sym_subsection_body,
      aux_sym_subsection_repeat1,
    STATE(14), 2,
      sym_instruction,
      sym_macro,
    ACTIONS(84), 3,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [100] = 9,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(99), 1,
      anon_sym_LF,
    ACTIONS(102), 1,
      sym_opcode,
    ACTIONS(105), 1,
      sym_identifier,
    ACTIONS(107), 1,
      anon_sym_DOT,
    STATE(8), 1,
      sym_line_comment,
    STATE(9), 2,
      sym_subsection_body,
      aux_sym_subsection_repeat1,
    STATE(14), 2,
      sym_instruction,
      sym_macro,
    ACTIONS(97), 3,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [132] = 8,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(112), 1,
      anon_sym_LF,
    ACTIONS(115), 1,
      sym_opcode,
    ACTIONS(118), 1,
      sym_identifier,
    ACTIONS(120), 1,
      anon_sym_DOT,
    STATE(14), 2,
      sym_instruction,
      sym_macro,
    ACTIONS(110), 3,
      ts_builtin_sym_end,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
    STATE(9), 3,
      sym_subsection_body,
      sym_line_comment,
      aux_sym_subsection_repeat1,
  [162] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(10), 1,
      sym_line_comment,
    ACTIONS(125), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(123), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [180] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(11), 1,
      sym_line_comment,
    ACTIONS(129), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(127), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [198] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(12), 1,
      sym_line_comment,
    ACTIONS(133), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [216] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(13), 1,
      sym_line_comment,
    ACTIONS(137), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(135), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [234] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(14), 1,
      sym_line_comment,
    ACTIONS(141), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(139), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [252] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(15), 1,
      sym_line_comment,
    ACTIONS(145), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [270] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(16), 1,
      sym_line_comment,
    ACTIONS(149), 3,
      sym_opcode,
      sym_identifier,
      anon_sym_DOT,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      aux_sym_sublabel_token1,
      anon_sym_SEMI,
  [288] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(17), 1,
      sym_line_comment,
    ACTIONS(145), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(143), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [305] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(151), 1,
      anon_sym_LF,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_immediate,
    STATE(18), 1,
      sym_line_comment,
    STATE(31), 1,
      sym_operand,
    STATE(40), 1,
      sym_operands,
  [330] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(19), 1,
      sym_line_comment,
    ACTIONS(149), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(147), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [347] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(20), 1,
      sym_line_comment,
    ACTIONS(159), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(157), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [364] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(21), 1,
      sym_line_comment,
    ACTIONS(163), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(161), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [381] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(22), 1,
      sym_line_comment,
    ACTIONS(167), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(165), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [398] = 4,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(23), 1,
      sym_line_comment,
    ACTIONS(133), 2,
      sym_opcode,
      sym_identifier,
    ACTIONS(131), 4,
      ts_builtin_sym_end,
      anon_sym_LF,
      anon_sym_DOT,
      anon_sym_SEMI,
  [415] = 8,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_immediate,
    ACTIONS(169), 1,
      anon_sym_LF,
    STATE(24), 1,
      sym_line_comment,
    STATE(31), 1,
      sym_operand,
    STATE(42), 1,
      sym_operands,
  [440] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_immediate,
    STATE(25), 1,
      sym_line_comment,
    STATE(31), 1,
      sym_operand,
    STATE(45), 1,
      sym_operands,
  [462] = 7,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_immediate,
    STATE(26), 1,
      sym_line_comment,
    STATE(31), 1,
      sym_operand,
    STATE(43), 1,
      sym_operands,
  [484] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(153), 1,
      sym_identifier,
    ACTIONS(155), 1,
      sym_immediate,
    STATE(27), 1,
      sym_line_comment,
    STATE(36), 1,
      sym_operand,
  [503] = 6,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(171), 1,
      sym_identifier,
    ACTIONS(173), 1,
      sym_immediate,
    STATE(20), 1,
      sym_operand,
    STATE(28), 1,
      sym_line_comment,
  [522] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(175), 1,
      anon_sym_EQ,
    ACTIONS(177), 1,
      anon_sym_COLON,
    STATE(29), 1,
      sym_line_comment,
  [538] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    STATE(30), 1,
      sym_line_comment,
    ACTIONS(165), 2,
      anon_sym_LF,
      anon_sym_COMMA,
  [552] = 5,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(179), 1,
      anon_sym_LF,
    ACTIONS(181), 1,
      anon_sym_COMMA,
    STATE(31), 1,
      sym_line_comment,
  [568] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(183), 1,
      anon_sym_LF,
    STATE(32), 1,
      sym_line_comment,
  [581] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(185), 1,
      ts_builtin_sym_end,
    STATE(33), 1,
      sym_line_comment,
  [594] = 4,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(189), 1,
      aux_sym_line_comment_token1,
    ACTIONS(191), 1,
      sym_block_comment,
    STATE(34), 1,
      sym_line_comment,
  [607] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(193), 1,
      anon_sym_LF,
    STATE(35), 1,
      sym_line_comment,
  [620] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(195), 1,
      anon_sym_LF,
    STATE(36), 1,
      sym_line_comment,
  [633] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(197), 1,
      anon_sym_COLON,
    STATE(37), 1,
      sym_line_comment,
  [646] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(199), 1,
      anon_sym_LF,
    STATE(38), 1,
      sym_line_comment,
  [659] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(201), 1,
      sym_identifier,
    STATE(39), 1,
      sym_line_comment,
  [672] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(203), 1,
      anon_sym_LF,
    STATE(40), 1,
      sym_line_comment,
  [685] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(205), 1,
      anon_sym_LF,
    STATE(41), 1,
      sym_line_comment,
  [698] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(207), 1,
      anon_sym_LF,
    STATE(42), 1,
      sym_line_comment,
  [711] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(209), 1,
      anon_sym_LF,
    STATE(43), 1,
      sym_line_comment,
  [724] = 4,
    ACTIONS(187), 1,
      anon_sym_SEMI,
    ACTIONS(191), 1,
      sym_block_comment,
    ACTIONS(211), 1,
      aux_sym_line_comment_token1,
    STATE(44), 1,
      sym_line_comment,
  [737] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(213), 1,
      anon_sym_LF,
    STATE(45), 1,
      sym_line_comment,
  [750] = 4,
    ACTIONS(3), 1,
      anon_sym_SEMI,
    ACTIONS(5), 1,
      sym_block_comment,
    ACTIONS(215), 1,
      sym_identifier,
    STATE(46), 1,
      sym_line_comment,
  [763] = 1,
    ACTIONS(161), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(5)] = 0,
  [SMALL_STATE(6)] = 35,
  [SMALL_STATE(7)] = 68,
  [SMALL_STATE(8)] = 100,
  [SMALL_STATE(9)] = 132,
  [SMALL_STATE(10)] = 162,
  [SMALL_STATE(11)] = 180,
  [SMALL_STATE(12)] = 198,
  [SMALL_STATE(13)] = 216,
  [SMALL_STATE(14)] = 234,
  [SMALL_STATE(15)] = 252,
  [SMALL_STATE(16)] = 270,
  [SMALL_STATE(17)] = 288,
  [SMALL_STATE(18)] = 305,
  [SMALL_STATE(19)] = 330,
  [SMALL_STATE(20)] = 347,
  [SMALL_STATE(21)] = 364,
  [SMALL_STATE(22)] = 381,
  [SMALL_STATE(23)] = 398,
  [SMALL_STATE(24)] = 415,
  [SMALL_STATE(25)] = 440,
  [SMALL_STATE(26)] = 462,
  [SMALL_STATE(27)] = 484,
  [SMALL_STATE(28)] = 503,
  [SMALL_STATE(29)] = 522,
  [SMALL_STATE(30)] = 538,
  [SMALL_STATE(31)] = 552,
  [SMALL_STATE(32)] = 568,
  [SMALL_STATE(33)] = 581,
  [SMALL_STATE(34)] = 594,
  [SMALL_STATE(35)] = 607,
  [SMALL_STATE(36)] = 620,
  [SMALL_STATE(37)] = 633,
  [SMALL_STATE(38)] = 646,
  [SMALL_STATE(39)] = 659,
  [SMALL_STATE(40)] = 672,
  [SMALL_STATE(41)] = 685,
  [SMALL_STATE(42)] = 698,
  [SMALL_STATE(43)] = 711,
  [SMALL_STATE(44)] = 724,
  [SMALL_STATE(45)] = 737,
  [SMALL_STATE(46)] = 750,
  [SMALL_STATE(47)] = 763,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT(34),
  [5] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [7] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 0, 0, 0),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(5),
  [11] = {.entry = {.count = 1, .reusable = false}}, SHIFT(18),
  [13] = {.entry = {.count = 1, .reusable = false}}, SHIFT(29),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(39),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(44),
  [19] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 2, 0, 1),
  [21] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 2, 0, 1), SHIFT(10),
  [24] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 2, 0, 1), SHIFT(24),
  [27] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 2, 0, 1),
  [29] = {.entry = {.count = 1, .reusable = true}}, SHIFT(37),
  [31] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 2, 0, 1), SHIFT(46),
  [34] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section, 1, 0, 0),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_section, 1, 0, 0), SHIFT(10),
  [39] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 1, 0, 0), SHIFT(24),
  [42] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section, 1, 0, 0),
  [44] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_section, 1, 0, 0), SHIFT(46),
  [47] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [49] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(10),
  [52] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [55] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0),
  [57] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(37),
  [60] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_section_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [63] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_program, 1, 0, 0),
  [65] = {.entry = {.count = 1, .reusable = true}}, SHIFT(6),
  [67] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0),
  [69] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(6),
  [72] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [75] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(29),
  [78] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(39),
  [81] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_program_repeat1, 2, 0, 0), SHIFT_REPEAT(44),
  [84] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 1, 0, 0),
  [86] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_subsection, 1, 0, 0), SHIFT(14),
  [89] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 1, 0, 0), SHIFT(24),
  [92] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection, 1, 0, 0),
  [94] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 1, 0, 0), SHIFT(46),
  [97] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 1),
  [99] = {.entry = {.count = 2, .reusable = true}}, REDUCE(sym_subsection, 2, 0, 1), SHIFT(14),
  [102] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 1), SHIFT(24),
  [105] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 1),
  [107] = {.entry = {.count = 2, .reusable = false}}, REDUCE(sym_subsection, 2, 0, 1), SHIFT(46),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0),
  [112] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0), SHIFT_REPEAT(14),
  [115] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0), SHIFT_REPEAT(24),
  [118] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0),
  [120] = {.entry = {.count = 2, .reusable = false}}, REDUCE(aux_sym_subsection_repeat1, 2, 0, 0), SHIFT_REPEAT(46),
  [123] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_section_body, 1, 0, 0),
  [125] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_section_body, 1, 0, 0),
  [127] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_label, 3, 0, 0),
  [129] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_label, 3, 0, 0),
  [131] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_macro, 4, 0, 0),
  [133] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_macro, 4, 0, 0),
  [135] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_sublabel, 3, 0, 0),
  [137] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_sublabel, 3, 0, 0),
  [139] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_subsection_body, 1, 0, 0),
  [141] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_subsection_body, 1, 0, 0),
  [143] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 2, 0, 0),
  [145] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 2, 0, 0),
  [147] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_instruction, 3, 0, 0),
  [149] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_instruction, 3, 0, 0),
  [151] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [153] = {.entry = {.count = 1, .reusable = true}}, SHIFT(30),
  [155] = {.entry = {.count = 1, .reusable = false}}, SHIFT(30),
  [157] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_constant, 3, 0, 0),
  [159] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_constant, 3, 0, 0),
  [161] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_line_comment, 3, 0, 0),
  [163] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_line_comment, 3, 0, 0),
  [165] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operand, 1, 0, 0),
  [167] = {.entry = {.count = 1, .reusable = false}}, REDUCE(sym_operand, 1, 0, 0),
  [169] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [171] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [173] = {.entry = {.count = 1, .reusable = false}}, SHIFT(22),
  [175] = {.entry = {.count = 1, .reusable = true}}, SHIFT(28),
  [177] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [179] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 1, 0, 0),
  [181] = {.entry = {.count = 1, .reusable = true}}, SHIFT(27),
  [183] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [185] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
  [187] = {.entry = {.count = 1, .reusable = false}}, SHIFT(34),
  [189] = {.entry = {.count = 1, .reusable = false}}, SHIFT(38),
  [191] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [193] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [195] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_operands, 3, 0, 0),
  [197] = {.entry = {.count = 1, .reusable = true}}, SHIFT(32),
  [199] = {.entry = {.count = 1, .reusable = true}}, SHIFT(47),
  [201] = {.entry = {.count = 1, .reusable = true}}, SHIFT(25),
  [203] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [205] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [207] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [209] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [211] = {.entry = {.count = 1, .reusable = false}}, SHIFT(41),
  [213] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [215] = {.entry = {.count = 1, .reusable = true}}, SHIFT(26),
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
