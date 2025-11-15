#include <iostream>
using namespace std;

// ! Example: Overloading the + Operator
// Class representing a complex number
class Complex
{
private:
    double real;
    double imag;

public:
    // Constructor
    Complex(double r = 0, double i = 0) : real(r), imag(i) {}

    // Overloading the + operator
    Complex operator+(const Complex &c)
    {
        Complex result;
        result.real = real + c.real;
        result.imag = imag + c.imag;
        return result;
    }

    // Friend function to overload << operator for output
    friend ostream &operator<<(ostream &out, const Complex &c);
};

// Overloading << for output
ostream &operator<<(ostream &out, const Complex &c)
{
    out << c.real << " + " << c.imag << "i";
    return out;
}

// ! Overloading Unary Operators
class Counter
{
private:
    int count;

public:
    // Constructor
    Counter() : count(0) {}

    // Overloading the ++ operator (prefix)
    Counter &operator++()
    {
        ++count; // Increment the count
        return *this;
    }

    // Overloading the ++ operator (postfix)
    Counter operator++(int)
    {
        Counter temp = *this;
        ++count;     // Increment the count
        return temp; // Return the old value
    }

    int getCount() const
    {
        return count;
    }
};

int main(int argc, char const *argv[])
{
    // ! OPERATOR OVERLOADING
    // * Operator overloading allows us to define custom behavior for operators like +, -, *, /, etc. when used with objects of a class.

    // ! Example: Overloading the + Operator
    Complex c1(3, 4); // 3 + 4i
    Complex c2(1, 2); // 1 + 2i

    Complex c3 = c1 + c2; // Adding two Complex numbers using the overloaded + operator

    cout << "c1 = " << c1 << endl;
    cout << "c2 = " << c2 << endl;
    cout << "c3 = " << c3 << endl; // Output: c3 = 4 + 6i

    // ! Overloading Unary Operators
    Counter c;

    ++c; // Calls the prefix version of ++
    cout << "After prefix increment: " << c.getCount() << endl;

    c++; // Calls the postfix version of ++
    cout << "After postfix increment: " << c.getCount() << endl;

    // !    Rules for Operator Overloading
    // ? Cannot create new operators: You cannot create new operators. You can only overload existing ones.
    // ? Cannot change the operator's precedence: The precedence and associativity of operators remain the same after overloading.
    // ? At least one operand must be a user-defined type: You cannot overload operators for built-in types (e.g., you can't redefine how + works for int).
    // ? Some operators cannot be overloaded:
    // * :: (Scope resolution)
    // * . (Member access)
    // * .* (Pointer-to-member access)
    // * sizeof
    // * ?: (Ternary conditional operator)

    // !     Types of Operator Overloading
    // ? Unary Operators: Operators that operate on a single operand, such as ++, --, !, - (negation).
    // ? Binary Operators: Operators that operate on two operands, such as +, -, *, /.
    // ? Relational/Comparison Operators: Operators like <, >, <=, >=, ==, !=.
    // ? Assignment Operators: =, +=, -=, etc.
    // ? Stream Insertion and Extraction Operators: <<, >>.

    return 0;
}