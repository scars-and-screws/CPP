#include <iostream>
using namespace std;
// * Function to increment a variable by 1
void increment(int &x)
{
    x++;
}

int main(int argc, char const *argv[])
{
    // ! References
    // ? A reference is an alias of a variable. It is a new name for an already existing variable.
    // ? They are used in function calls, function definitions, and variable declarations.
    // ! Key characteristics of references:
    // ? A reference must be initialized when it is created. We cannot declare a reference without assigning it to a variable at the time of it's creation.
    // ? Once a reference is initialized, it cannot be made to refer to another variable. The reference remains permanently tied to the original variable.
    // ? Unlike pointers, references cannot be NULL. They must be initialized to an existing variable.
    // ? References do not occupy extra memory like pointers. They are just another name for an existing variable.
    // ? Changes made to the reference variable will affect the original variable.
    // ? References are often used in function parameters for pass-by-reference. This allows functions to modify the original variable without copying.
    // ? References don't need dereferencing to access the value. They are automatically dereferenced.
    // ? References are commonly used in range-based for loops for efficient iteration and modification of elements.

    // ! Basic reference declaration and initialization
    int original = 10;
    int &ref = original; // ref is a reference to the variable original
    cout << "Original: " << original << endl;
    cout << "Reference: " << ref << endl;

    // * Modifying through the reference
    ref = 20; // modifies the original variable
    cout << "Original: " << original << endl;
    cout << "Reference: " << ref << endl;

    // * Reference as function parameter
    int num = 5;
    cout << "Before increment: " << num << endl;
    increment(num); // pass by reference
    cout << "After increment: " << num << endl;

    // * Reference in range-based for loop
    int arr[] = {1, 2, 3, 4, 5};
    for (int &x : arr)
    {
        x *= 2; // modifies the original array elements
    }
    for (int x : arr)
    {
        cout << x << " ";
    }
    cout << endl;

    // * Constant references
    // ? A reference can be declared as const to prevent modification of the original variable.
    // ? A const reference can be initialized with a non-const variable, but not vice-versa.
    const int &constRef = original;
    // constRef = 30; // error: assignment of read-only reference 'constRef'
    cout << "Constant Reference: " << constRef << endl;

    // * Reference to pointer
    int value = 100;
    int *ptr = &value;
    int *&ptrRef = ptr; // reference to a pointer
    cout << "Pointer Value: " << *ptrRef << endl;
    *ptrRef = 200; // modifies the original variable
    cout << "Pointer Value: " << *ptrRef << endl;

    // ! Dangling references
    // ? A dangling reference is a reference that refers to a memory location that has been deallocated.
    // ? Accessing a dangling reference results in undefined behavior.
    // ? Dangling references can occur when a reference is returned from a function that goes out of scope.
    // ? To avoid dangling references, ensure that the lifetime of the referenced variable is longer than the reference itself.

    return 0;
}