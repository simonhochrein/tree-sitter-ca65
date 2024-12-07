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
    section: ($) =>
      seq(
        $.label,
        field("body", repeat(choice($.subsection, $.instruction, $.macro))),
      ),
    subsection: ($) =>
      seq(
        $.sublabel,
        field("body", repeat(choice($.instruction, $.macro, "\n"))),
      ),
    instruction: ($) => seq($.opcode, optional($.operands), "\n"),
    constant: ($) => seq($.identifier, "=", $.operand),

    opcode: ($) => /[a-z]{3}/,
    identifier: ($) => /[A-Za-z0-9_-]+/,
    operands: ($) => choice(seq($.operand, ",", $.operand), $.operand),
    operand: ($) => choice($.immediate, $.identifier),
    immediate: ($) => /\$?[0-9]+/,
    label: ($) => seq($.identifier, ":", "\n"),
    sublabel: ($) => seq(/\.[A-Za-z0-9_-]+/, ":", "\n"),
    macro: ($) => seq(".", $.identifier, $.operands, "\n"),

    line_comment: ($) => seq(";", token.immediate(/.*/), "\n"),
    block_comment: ($) => token(seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/")),
  },
});
