#include <iostream>
#include <exception>
using namespace std;

// ! Exception Handling example
int divide(int a, int b)
{
    if (b == 0)
    {
        throw "Division by zero error!"; // Throw an exception
    }
    return a / b;
}

int main(int argc, char const *argv[])
{
    // ! Exception Handling
    //  ?   The three main keywords involved in exception handling are:

    // * try: Defines a block of code that might throw an exception.
    // * catch: Defines a block of code to handle the exception. When an exception is thrown, the program looks for a corresponding catch block that can handle that exception.
    // * throw: Used to throw an exception when an error occurs. It transfers control to the nearest catch block that matches the exception type.

    int x = 10, y = 0;

    try
    {
        cout << "Result: " << divide(x, y) << endl;
    }
    catch (const char *e)
    {
        // Catch block to handle the exception
        cout << "Caught exception: " << e << endl;
    }

    // ? Custom exception class that inherits from std::exception
    class MyException : public exception
    {
    public:
        // Override the what() function to provide a custom error message
        const char *what() const noexcept override
        {
            return "Custom exception occurred!";
        }
    };

    // ! Standard Exceptions
    // * C++ provides a set of standard exceptions that can be used in common error scenarios.
    // * standard exceptions defined in the <stdexcept> and <exception> headers
    // * The standard exceptions are derived from the std::exception class.

    // ! Some common standard exceptions:
    // ? std::exception: Base class for all standard exceptions.
    // ? std::runtime_error: Exception thrown during runtime errors.
    // ? std::invalid_argument: Invalid argument passed to a function.
    // ? std::out_of_range: Accessing an element outside its valid range.
    // ? std::overflow_error: Arithmetic overflow.
    // ? std::underflow_error: Arithmetic underflow.
    // ? std::bad_alloc: Thrown when dynamic memory allocation fails (e.g., new operator).
    try
    {
        throw std::runtime_error("Runtime error occurred!");
    }
    catch (std::runtime_error &e)
    {
        cout << "Caught a runtime_error: " << e.what() << endl;
    }
    catch (std::exception &e)
    {
        cout << "Caught an exception: " << e.what() << endl;
    }
    // ? The what() function is a member of std::exception that returns the exception message as a C-style string.

    // ! Custom Exception Classes
    // * We can create your own exception classes by inheriting from the std::exception class.
    try
    {
        throw MyException(); // Throwing a custom exception
    }
    catch (MyException &e)
    {
        cout << "Caught MyException: " << e.what() << endl;
    }
    catch (exception &e)
    {
        cout << "Caught an exception: " << e.what() << endl;
    }
    return 0;
}