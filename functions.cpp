#include <iostream>
using namespace std;

// ! FUNCTIONS
// Functions are blocks of code designed to perform specific tasks. They help in organizing and reusing code.

// ? Function Templates
// * Function templates are used to create generic functions that can work with different data types.
// * The keyword 'template' is used to define a function template.
// * The template parameter is a placeholder for a data type that will be specified when the function is called.
// * The compiler generates a specific version of the function for each data type it is called with.

// ? Template Parameters by Value
// * Template parameters can be passed by value to function templates.
template <typename T> // Define a template for generic type T
T maximum(T x, T y)   // Function template to find the maximum of two values
{
    return (x > y) ? x : y; // Returns the maximum of x and y
}

// ? Template parameters by reference
// * Template parameters can be passed by reference using the '&' symbol.
template <typename T>
T add(T &a, T &b)
{
    return a + b; // Returns the sum of a and b
}

// ? Template Specialization
// * Template specialization allows us to define a different implementation for a specific data type.
// * This can be useful when the default implementation is not suitable for a particular type.
template <>
char maximum(char x, char y)
{
    return (x > y) ? x : y; // Returns the maximum of x and y
}

// ? Concepts (C++20)
// * Concepts are a C++20 feature that allows constraining templates based on the properties of their template arguments.
// * Specify what types are allowed for template parameters
// * Compiler errors are easier to understand when a type that does not satisfy the concept is used.
// * Concepts can be used to specify requirements for template arguments.

// ? Function Declaration
// * A function declaration, also known as a function prototype, informs the compiler about a function's name, return type, and parameters before its actual definition is encountered.
// returnType functionName(parameter1Type parameter1, parameter2Type parameter2, ...);
int multiply(int a, int b); // Function declaration for multiply function

// ? Function Definition
// * A function definition provides the actual implementation of the function declared earlier.
// returnType functionName(parameter1Type parameter1, parameter2Type parameter2, ...)
// {
// Function body
// }
int multiply(int a, int b) // Function definition for multiply
{
    return a * b; // Returns the product of a and b
}

// ? Function with No Parameters and No Return Value
// * This type of function performs an action but does not take any input or provide any output.
// * The return type 'void' signifies that this function does not return a value.
void greet()
{
    cout << "Hey, it's your boy!!!" << endl; // Prints a greeting message
}

// ? Function with Parameters and Return Value
// * This type of function takes inputs (parameters) and performs a computation to produce a result (return value).
int addition(int a, int b)
{
    return a + b; // Returns the sum of a and b
}
// ?  Pass by Value
// * In pass by value, the actual parameters are copied to the formal parameters of the function. Any changes made to the formal parameters do not affect the actual parameters.
// * This is the default way of passing arguments to functions in C++.
int addNums(int x, int y)
{
    x = x + 10; // Changes made to x do not affect the original argument
    return x + y;
}

// ? Pass by Reference
// * In pass by reference, the address of the actual parameters is passed to the formal parameters. Any changes made to the formal parameters affect the actual parameters.
// * This can be done by using pointers or C++ references.
int addNumbers(int &a, int &b)
{
    a = a + 10; // Changes made to a affect the original argument
    return a + b;
}

// ? Function with Default Arguments
// * Functions can have default values for parameters. If the caller does not provide a value for a parameter, the default value is used.
void printValues(int a, int b = 10)
{
    cout << "a: " << a << ", b: " << b << endl; // Prints the values of a and b
}

// ? Inline Functions
// * Inline functions are suggested to the compiler to be expanded in place where they are called, rather than performing a traditional function call.
// * This can reduce the overhead of function calls, especially for small functions.
// * The 'inline' keyword is used to define an inline function.
inline int square(int x)
{
    return x * x; // Returns the square of x
}

// ? Recursive Function
// * A recursive function is one that calls itself to solve smaller instances of a problem.
// * It must have a base case to stop the recursion and avoid infinite loops.
int factorial(int n)
{
    if (n <= 1)
        return 1;                // Base case: factorial of 0 or 1 is 1
    return n * factorial(n - 1); // Recursive case: n multiplied by factorial of (n-1)
}

// ? Lambda Functions
// * Lambda functions are anonymous functions that can be defined in place without a name.
// * They are useful for short, one-time use functions.
// * The syntax for lambda functions is: [capture](parameters) -> returnType { function_body }
// * Lambda don't have direct access to global variables unless they are captured.
// * The 'auto' keyword can be used to automatically deduce the return type of the lambda function.
// * Lambda functions can be stored in variables and called like regular functions.

auto addLambda = [](int a, int b) -> int
{
    return a + b; // Returns the sum of a and b
};
// ? Declare a lambda function and call it directly
// []() { cout << "Hello, Lambda!" << endl; }();

// ? Function Overloading
// * Function overloading allows multiple functions to have the same name but different parameters (number or types).
// * The correct function is selected by the compiler based on the arguments passed.
int add(int a, int b)
{
    return a + b; // Adds two integers
}

double add(double a, double b)
{
    return a + b; // Adds two doubles
}

int main()
{
    // Example usage of the maximum function template
    cout << "Maximum of 4 and 5: " << maximum(4, 5) << endl;         // Outputs 5
    cout << "Maximum of 3.5 and 2.7: " << maximum(3.5, 2.7) << endl; // Outputs 3.5

    // Example of template parameter by reference
    int j = 5, k = 3;
    cout << "Add 5 and 3: " << add(j, k) << endl; // Outputs 8

    // Example of template specialization
    cout << "Maximum of 'a' and 'b': " << maximum('a', 'b') << endl; // Outputs 'b'

    // Example usage of the multiply function
    cout << "Multiply 4 and 5: " << multiply(4, 5) << endl; // Outputs 20

    // Example usage of the greet function
    greet(); // Prints greeting message

    // Example usage of the add function with integers
    cout << "Add 5 and 3: " << add(5, 3) << endl; // Outputs 8

    // Example usage of the add function with doubles
    cout << "Add 3.5 and 2.7: " << add(3.5, 2.7) << endl; // Outputs 6.2

    // Example usage of the addNums function with pass by value
    int x = 5, y = 3;
    cout << "AddNums result: " << addNums(x, y) << endl; // Outputs 18
    cout << "Original x value: " << x << endl;           // Outputs 5

    // Example usage of the addNumbers function with pass by reference
    int m = 5, n = 3;
    cout << "AddNumbers result: " << addNumbers(m, n) << endl; // Outputs 18
    cout << "Modified m value: " << m << endl;                 // Outputs 15

    // Example usage of the printValues function with default argument
    printValues(5); // Uses default value for second parameter (10)

    // Example usage of the printValues function with overridden argument
    printValues(5, 15); // Uses overridden value for second parameter (15)

    // Example usage of the inline function
    cout << "Square of 5: " << square(5) << endl; // Outputs 25

    // Example usage of the recursive function
    cout << "Factorial of 5: " << factorial(5) << endl; // Outputs 120

    // Example usage of the lambda function
    cout << "Lambda add 4 and 5: " << addLambda(4, 5) << endl; // Outputs 9

    return 0;
}
