/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "ca65",
  extras: ($) => [/ |\t|\r/, $.line_comment, $.block_comment],
  conflicts: ($) => [[$.subsection], [$.section]],
  inline: ($) => [$._newline],

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
            $._newline,
          ),
        ),
      ),
    section: ($) => seq($.label, field("body", repeat($._section_body))),
    _section_body: ($) =>
      choice($.subsection, $.instruction, $.macro, $._newline),
    subsection: ($) =>
      seq($.sublabel, field("body", repeat($.subsection_body))),
    subsection_body: ($) => choice($.instruction, $.macro, $._newline),
    instruction: ($) => seq($.opcode, optional($.operands), $._newline),
    constant: ($) => seq($.identifier, "=", $.operand),

    opcode: ($) => /[a-z]{3}/,
    identifier: ($) => /[A-Za-z0-9_-]+/,
    operands: ($) => choice(seq($.operand, ",", $.operand), $.operand),
    operand: ($) =>
      choice($.immediate, $.string, $.identifier, /\@[A-Za-z0-9_-]+/),
    label: ($) => seq($.identifier, ":", $._newline),
    sublabel: ($) => seq(/\@[A-Za-z0-9_-]+/, ":", $._newline),
    macro: ($) =>
      choice(
        $.macro_include,
        $.macro_proc,
        seq(".", $.identifier, $.operands, $._newline),
      ),
    macro_include: ($) => seq(".include", $.string),

    macro_proc: ($) =>
      seq(
        ".proc",
        $._newline,
        field(
          "body",
          repeat(
            choice($.section, $.subsection, $.instruction, $.macro, $._newline),
          ),
        ),
        ".endproc",
      ),

    immediate: ($) => /\$?[0-9A-Fa-f]+/,
    string: ($) => /"(.*)"/,

    line_comment: ($) => seq(";", token.immediate(/.*/), $._newline),
    block_comment: ($) => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),

    _newline: ($) => "\n",
  },
});
