#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // ! ARRAYS
    // ? Key Features of Arrays: Fixed-size, Contiguous Memory, Same Data Type, Index-based Access

    // ! Declaration and Initialization
    // * Arrays are declared by specifying the data type of the elements and the number of elements in the array.
    // * type arrayName[arraySize] = {element1, element2, ...};
    // ? Array Declaration
    int nums[5];             // Declares an array of 5 integers
    cout << nums[0] << endl; // Outputs: 0 (uninitialized)

    // ? Implicit size determination (C++11)
    // * Array declared without specifying the size, the compiler will determine the size based on the number of elements in the initialization list.
    int arr[] = {1, 2, 3};                        // Declares an array of 3 integers
    cout << sizeof(arr) / sizeof(arr[0]) << endl; // Outputs: 3

    // ! Array Initialization
    // ? Partial Initialization
    // * If only some elements are initialized, the rest are set to zero(0) for numeric types, false for boolean types, and nullptr for pointer types.
    int numArr[5] = {1, 2, 3};    // Initializes the first 3 elements to 1, 2, and 3, and the rest to 0
    cout << numArr[3] << endl;    // Outputs: 0
    int values[3] = {10, 20, 30}; // Declares and initializes an array of 3 integers

    // ? Accessing Array Elements
    cout << "First element: " << values[0] << endl; // Outputs: 10

    // ? Modifying Array Elements
    values[1] = 25;                                  // Modifies the second element of the array
    cout << "Second element: " << values[1] << endl; // Outputs: 25

    // ! Character Arrays (Strings)
    // * The string is terminated by a null character '\0' which indicates the end of the string.
    char name[8] = {'f', 'u', 'k', ' ', 'C', '+', '+', '\0'}; // Declares a string with 8characters
    cout << name << endl;                                     // Outputs: fuk C++

    // ? Implicit Null Termination
    // ? If a character array is null terminated, it's called as C-String.
    // * If the null character is not explicitly provided, the compiler will automatically add it at the end of the string.
    char greeting[]{"CPP"}; // Declares and initializes a string
    cout << greeting << endl;

    // ! Common Array Operations
    // ? Using Loops to Traverse Arrays
    int numbers[5] = {1, 2, 3, 4, 5};
    for (int i = 0; i < 5; i++)
    {
        cout << numbers[i] << " "; // Outputs: 1 2 3 4 5
    }

    // ? Using Range-based For Loop (C++11)
    // * The range-based for loop simplifies array traversal by automatically iterating over each element of the array.
    for (int num : numbers)
    {
        cout << num << " "; // Outputs: 1 2 3 4 5
    }

    // ! Multidimensional Arrays
    // * Multidimensional arrays are arrays of arrays, allowing you to create tables or matrices.
    // * type arrayName[rows][columns] = {{val1, val2, ...}, {val3, val4, ...}, ...};
    int matrix[2][3] = {{1, 2, 3}, {4, 5, 6}}; // Declares a 2x3 matrix

    // ? Accessing Multidimensional Array Elements
    cout << "Element at matrix[0][1]: " << matrix[0][1] << endl; // Outputs: 2

    // ? Using Loops to Traverse Multidimensional Arrays
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << matrix[i][j] << " "; // Outputs all elements of the matrix
        }
    }

    return 0;
}
