#include <iostream>
using namespace std;
int main(int argc, char const *argv[])
{
    // ! Conditional Statements
    // ? If-Else
    // * The if-else statement allows you to execute a block of code if a condition is true, and another block if the condition is false.
    // * The else block is optional.
    int age = 18; // Age of the person
    if (age >= 18)
    {
        cout << "You are an adult." << endl; // Executes if the condition is true
    }
    else
    {
        cout << "You are a minor." << endl; // Executes if the condition is false
    }

    // ? If-Else If-Else Ladder
    // * The if-else if-else ladder allows you to check multiple conditions and execute the corresponding block of code.
    int num = 0; // Number to check
    if (num > 0)
    {
        cout << "Positive number." << endl; // Executes if the number is positive
    }
    else if (num < 0)
    {
        cout << "Negative number." << endl; // Executes if the number is negative
    }
    else
    {
        cout << "Zero." << endl; // Executes if the number is zero
    }

    // ? Nested If-Else
    // * We can nest if-else statements within each other to check multiple conditions.
    int x = 10; // First number
    int y = 20; // Second number
    if (x == y)
    {
        cout << "Numbers are equal." << endl; // Executes if the numbers are equal
    }
    else
    {
        if (x > y)
        {
            cout << "First number is greater." << endl; // Executes if the first number is greater
        }
        else
        {
            cout << "Second number is greater." << endl; // Executes if the second number is greater
        }

        // ? Ternary Operator
        // * The ternary operator is a shorthand for the if-else statement.
        // * condition ? expression1 : expression2;
        // *If the condition is true, "expression1" is executed; otherwise, "expression2" is executed.
        int number = 5; // Number to check
        string result = (number % 2 == 0) ? "even" : "odd";
        cout << "The number is " << result << "." << endl;

        // ? Switch-Case
        // * 'Switch' statements is used when we have multiple specific values to compare against a single variable or expression.
        int choice = 2; // User choice
        switch (choice)
        {
        case 1:
            cout << "Option 1 selected." << endl;
            break; // Exit the switch block
        case 2:
            cout << "Option 2 selected." << endl;
            break; // Exit the switch block
        case 3:
            cout << "Option 3 selected." << endl;
            break; // Exit the switch block
        default:
            cout << "Invalid choice." << endl;
        }
    }

    return 0;
}
