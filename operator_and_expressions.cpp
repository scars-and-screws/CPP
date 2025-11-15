#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // ! EXPRESSIONS
    //  ? Expressions are combinations of variables, constants and operators and operands that computes to a value.
    //  ? Expressions are used to perform operations on variables and values. Expression can be simple or complex.
    //  ? Simple expressions are those that have only one operation and no sub-expressions.
    //  ? Complex expressions are those that have more than one operation and sub-expressions.

    int result = (6 + 9) * (9 - 6); // Complex expression
    bool isPositive = (6 > 0);      // Simple expression

    // ! OPERATORS
    // ! Operator precedence
    // * Operator precedence determines the order in which operators are evaluated in an expression.
    // * Operators with higher precedence are evaluated first.
    // * Parentheses can be used to override the default precedence and force a specific order of evaluation.
    // * Operators with the same precedence are evaluated from left to right.
    // ? Precedence can be remembered using the acronym PEMDAS: Parentheses, Exponents, Multiplication and Division, Addition and Subtraction.
    // Example:
    // int result = 6 + 9 * 9 - 6; // Equivalent to 6 + (9 * 9) - 6 = 69

    // ? ARITHMETIC OPERATORS
    // * These operators are used to perform basic mathematical operations like addition, subtraction, multiplication, etc.
    // * They are binary operators, which means they operate on two operands.
    int a = 10, b = 5;
    int sum = a + b;       // Addition operator
    int diff = a - b;      // Subtraction operator
    int product = a * b;   // Multiplication operator
    int quotient = a / b;  // Division operator
    int remainder = a % b; // Modulus operator (gives the remainder of a division)

    // ? RELATIONAL OPERATORS
    // * These operators are used to compare two values. The result of a relational expression is a boolean value: true or false.
    // * They are binary operators.
    bool isEqual = (a == b);          // Equal to
    bool isNotEqual = (a != b);       // Not equal to
    bool isGreater = (a > b);         // Greater than
    bool isLess = (a < b);            // Less than
    bool isGreaterOrEqual = (a >= b); // Greater than or equal to
    bool isLessOrEqual = (a <= b);    // Less than or equal to

    // ? LOGICAL OPERATORS
    // * Used to perform logical operations and combine multiple conditions. The result of a logical expression is a boolean value. They are binary operators.
    bool logicalAnd = (a > b) && (b > 0); // Logical AND (true if both conditions are true)
    bool logicalOr = (a > b) || (b < 0);  // Logical OR (true if at least one condition is true)
    bool logicalNot = !(a > b);           // Logical NOT (reverses the result of the condition)

    // ? ASSIGNMENT OPERATORS
    // * Used to assign values to variables. They can also modify the value of a variable based on an operation. They are binary operators.
    int c = 10; // Simple assignment
    c += 5;     // Equivalent to c = c + 5 (adds 5 to c)
    c -= 2;     // Equivalent to c = c - 2 (subtracts 2 from c)
    c *= 3;     // Equivalent to c = c * 3 (multiplies c by 3)
    c /= 2;     // Equivalent to c = c / 2 (divides c by 2)
    c %= 4;     // Equivalent to c = c % 4 (c becomes the remainder of c divided by 4)

    // ? INCREMENT AND DECREMENT OPERATORS
    // * Used to increase or decrease the value of a variable by 1. They are unary operators. They can be used as prefix or postfix operators.
    int d = 5;
    int preIncrement = ++d;  // Pre-increment: d is increased before the expression is evaluated
    int postIncrement = d++; // Post-increment: d is increased after the expression is evaluated
    int preDecrement = --d;  // Pre-decrement: d is decreased before the expression is evaluated
    int postDecrement = d--; // Post-decrement: d is decreased after the expression is evaluated

    // ? CONDITIONAL OPERATOR (TERNARY OPERATOR)
    // * This operator is a shorthand way of writing an if-else statement. It is a ternary operator, which means it has three operands.
    // * The syntax is: condition ? expression_if_true : expression_if_false;
    int e = 10, f = 20;
    int max = (e > f) ? e : f; // If e is greater than f, max is e; otherwise, max is f

    // ? BITWISE OPERATORS
    // * These operators are used to perform bit-level operations on integer types. They are binary operators. They are used to manipulate individual bits of an integer.
    // * Mostly used in low-level programming like device drivers, embedded systems, etc.
    // * Common bitwise operators include AND (&), OR (|), XOR (^), NOT (~), left shift (<<), and right shift (>>).
    int g = 5;               // Binary: 0101
    int h = 3;               // Binary: 0011
    int bitwiseAnd = g & h;  // AND operation: 0101 & 0011 = 0001 (1) (1 if both bits are 1)
    int bitwiseOr = g | h;   // OR operation: 0101 | 0011 = 0111 (7) (1 if any of the bits is 1)
    int bitwiseXor = g ^ h;  // XOR operation: 0101 ^ 0011 = 0110 (6) (1 if bits are different, 0 if bits are same)
    int bitwiseNot = ~g;     // NOT operation: ~0101 = 1010 (in binary) = -6 (in decimal, considering two's complement)
    int leftShift = g << 1;  // Left shift: 0101 << 1 = 1010 (10 in decimal) (multiplies by 2)
    int rightShift = g >> 1; // Right shift: 0101 >> 1 = 0010 (2 in decimal) (divides by 2)

    return 0;
}