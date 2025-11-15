#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // ! LOOPS
    // ? For loop
    // * for (initialization; condition; increment/decrement) { code }
    // * The for loop is used to execute a block of code a specified number of times.
    for (int i = 0; i < 5; i++)
    {
        cout << i << " "; // Outputs: 0 1 2 3 4
    }
    cout << endl;

    // ? Range-based for loop (C++11)
    // * The range-based for loop simplifies array traversal by automatically iterating over each element of the array.
    int numbers[5] = {1, 2, 3, 4, 5};
    for (int num : numbers)
    {
        cout << num << " "; // Outputs: 1 2 3 4 5
    }

    // ? While loop
    // * while (condition) { code }
    // * The while loop is used to execute a block of code as long as the condition is true.
    int j = 0;
    while (j < 5)
    {
        cout << j << " "; // Outputs: 0 1 2 3 4
        j++;
    }
    cout << endl;

    // ? Do-While loop
    // * do { code } while (condition);
    // * The do-while loop is similar to the while loop, but the condition is checked after the block of code is executed. atleast once the code block will be executed.
    int k = 0;
    do
    {
        cout << k << " "; // Outputs: 0 1 2 3 4
        k++;
    } while (k < 5);
    cout << endl;

    // ? Nested loops
    // * Loops can be nested within each other to create complex patterns or iterate over multi-dimensional arrays.
    for (int i = 0; i < 3; i++) // Outer loop
    {
        for (int j = 0; j < 3; j++) // Inner loop
        {
            cout << i << "," << j << " "; // Outputs: 0,0 0,1 0,2 1,0 1,1 1,2 2,0 2,1 2,2
        }
    }

    // ? Loop control statements
    // * Loop control statements allow you to control the flow of loops.
    // ? break: Terminates the loop and transfers control to the statement immediately following the loop.
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            break; // Terminates the loop when i is 3
        }
        cout << i << " "; // Outputs: 0 1 2
    }
    // ? continue: Skips the current iteration and proceeds to the next iteration of the loop.
    for (int i = 0; i < 5; i++)
    {
        if (i == 3)
        {
            continue; // Skips the iteration when i is 3
        }
        cout << i << " "; // Outputs: 0 1 2 4
    }
    // ? return: Exits the function and returns a value.
    // * The return statement is used to exit a function and return a value to the caller.
    // * It can also be used to return early from a loop or a switch statement.

    return 0;
}
