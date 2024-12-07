/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "ca65",
  extras: ($) => [/ |\t|\r/, $.line_comment, $.block_comment],
  conflicts: ($) => [[$.subsection], [$.section]],

  rules: {
    program: ($) =>
      seq(
        repeat(
          choice(
            $.macro,
            $.constant,
            $.line_comment,
            $.section,
            $.instruction,
            "\n",
          ),
        ),
      ),
    section: ($) => seq($.label, field("body", repeat($.section_body))),
    section_body: ($) => choice($.subsection, $.instruction, $.macro, "\n"),
    subsection: ($) =>
      seq($.sublabel, field("body", repeat($.subsection_body))),
    subsection_body: ($) => choice($.instruction, $.macro, "\n"),
    instruction: ($) => seq($.opcode, optional($.operands), "\n"),
    constant: ($) => seq($.identifier, "=", $.operand),

    opcode: ($) => /[a-z]{3}/,
    identifier: ($) => /[A-Za-z0-9_-]+/,
    operands: ($) => choice(seq($.operand, ",", $.operand), $.operand),
    operand: ($) => choice($.immediate, $.string, $.identifier),
    label: ($) => seq($.identifier, ":", "\n"),
    sublabel: ($) => seq(/\@[A-Za-z0-9_-]+/, ":", "\n"),
    macro: ($) => choice($.include, seq(".", $.identifier, $.operands, "\n")),
    include: ($) => seq(".include", $.string),

    immediate: ($) => /\$?[0-9A-Fa-f]+/,
    string: ($) => /"(.*)"/,

    line_comment: ($) => seq(";", token.immediate(/.*/), "\n"),
    block_comment: ($) => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
  },
});
