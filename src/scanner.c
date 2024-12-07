#include "tree_sitter/parser.h"

void *tree_sitter_ca65_external_scanner_create() { return NULL; }
void tree_sitter_ca65_external_scanner_destroy(void *payload) {}
unsigned tree_sitter_ca65_external_scanner_serialize(void *payload,
                                                     char *buffer) {
  return 0;
}
void tree_sitter_ca65_external_scanner_deserialize(void *payload,
                                                   const char *buffer,
                                                   unsigned length) {}

bool tree_sitter_ca65_external_scanner_scan(void *payload, TSLexer *lexer,
                                            const bool *valid_symbols) {
  while (lexer->lookahead == ' ' || lexer->lookahead == '\t') {
    lexer->advance(lexer, true);
  }
  if (lexer->lookahead == 0 || lexer->lookahead == '\n') {
    return true;
  }
  return false;
}
