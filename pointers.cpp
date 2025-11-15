#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // ! Pointers
    // ? A pointer is a variable that stores the memory address of another variable.
    // ? A pointer variable points to a data type (like int or string) of the same type, and is created with the * operator. The address of the variable you're pointing to is assigned to the pointer variable.
    // ? The pointer variable can be used to access the value of the variable it points to, or to change that value.
    // ? We can change the address stored in a pointer variable. We can also change the value stored at the address stored in a pointer variable.
    // * The (&) operator is used to get the address of a variable.
    // * Dereference Operator (*) is used to access the value at the address stored in a pointer variable.

    // ! Declaration of Pointers
    int *ptr;    // Declares a pointer to an integer
    char *cptr;  // Declares a pointer to a character
    float *fptr; // Declares a pointer to a float

    // ! Initialization of Pointers
    int x = 10;
    // * & returns the memory address of a variable
    ptr = &x; // Assigns the address of x to ptr

    // ! Accessing the value of the variable pointed to by a pointer
    cout << "Value of x: " << x << endl;
    cout << "Value of x using pointer: " << *ptr << endl;
    cout << "Address of x: " << &x << endl;
    cout << "Address of x using pointer: " << ptr << endl;

    // ! Changing the value of the variable pointed to by a pointer
    *ptr = 20; // Changes the value of x to 20
    cout << "Value of x: " << x << endl;
    cout << "Value of x using pointer: " << *ptr << endl;

    // ! Null Pointers
    // ? Why use null pointers?
    // * 1. To initialize pointers when you don't have a valid address yet
    // * 2. To check if a pointer is valid before using it
    // * 3. To indicate the end of a data structure (e.g., end of a linked list)

    // ? A null pointer is a pointer that does not point to any memory location. It is used to indicate that the pointer is not intended to point to a valid memory location.
    // ? A null pointer is declared by assigning the value 0 or nullptr to the pointer variable.
    // * A null pointer, safer than an uninitialized pointer, because it is less likely to cause a segmentation fault.
    int *nullPtr = nullptr;
    cout << "Null pointer: " << nullPtr << endl;

    // ! Character Pointers
    // ? Pointer to a Character: A char* can point to a single character or an array of characters.
    // ? Pointer to a String: A char* can point to a C-style string (array of characters terminated by a null character '\0').
    // ? String Literals: Are constant character arrays, and should be assigned to a const char*.
    char ch = 'A';
    cptr = &ch;
    cout << "Value of ch: " << ch << endl;
    cout << "Value of ch using pointer: " << *cptr << endl;
    cout << "Address of ch: " << &ch << endl;
    cout << "Address of ch using pointer: " << cptr << endl;

    // ? Pointer to String Literal
    const char *str = "Holy Shit"; // Pointer to a string literal
    cout << "Output of Pointer char is: " << str << endl;
    // ? char* allows modification of the characters pointed to.
    // ? const char* points to read-only data (useful for string literals).

    // ! Pointer Arithmetic
    // ? Pointer arithmetic allows us to perform mathematical operations on pointers
    // ? It's commonly used for array manipulation and memory traversal
    //  * Basic pointer arithmetic
    int numbers[] = {10, 20, 30, 40, 50};
    int *numPtr = numbers; // numPtr points to first element of the array

    // ! Incrementing and Decrementing a pointer
    numPtr++; // Now it pints to the second element (20)
    cout << "After Incrementing th enumPtr: " << *numPtr << endl;

    numPtr--; // Back to the first element (10)
    cout << "After Decrementing the numPtr: " << *numPtr << endl;

    // ? Adding an integer to to a pointer
    numPtr = numPtr + 2; // Now points to the third element (30)
    cout << "After numPtr + 2: " << *numPtr << endl;

    // ? Subtracting an integer from a pointer
    numPtr = numPtr - 1; // Now points to the second element (20)
    cout << "After numPtr - 1: " << *numPtr << endl;

    // ! Pointer Arithmetic with Arrays
    // ? When we add an integer to a pointer, the pointer moves to the next memory location of the same data type.
    // ? When we subtract an integer from a pointer, the pointer moves to the previous memory location of the same data type.
    // ? When we subtract two pointers, the result is the number of elements between the two pointers.
    int *numPtr3 = numbers + 4; // Points to the last element (50)
    int *numPtr4 = numbers;     // Points to the first element (10)
    int numElements = numPtr3 - numPtr4;
    cout << "Number of elements between numPtr3 and numPtr4: " << numElements << endl;

    // ? When we add an integer to an array name, the result is the address of the element at that index.
    // ? When we subtract an integer from an array name, the result is the address of the element at that index.
    // ? When we subtract two array names, the result is the number of elements between the two array names.
    int *numPtr2 = numbers + 2; // Points to the third element (30)
    cout << "numPtr2: " << *numPtr2 << endl;

    // * Traverse the array using pointer arithmetic
    for (int i = 0; i < 5; i++)
    {
        cout << "Element " << i << ": " << *(numbers + i) << endl;
    }

    // ! Size of Pointers
    // ? The size of a pointer depends on the architecture of the system.
    // ? On a 32-bit system, the size of a pointer is 4 bytes.
    // ? On a 64-bit system, the size of a pointer is 8 bytes.
    cout << "Size of int pointer: " << sizeof(ptr) << " bytes" << endl;
    cout << "Size of char pointer: " << sizeof(cptr) << " bytes" << endl;
    cout << "Size of float pointer: " << sizeof(fptr) << " bytes" << endl;

    // ! Dynamic Memory Allocation
    // ? Dynamic memory allocation allows us to allocate memory at runtime. It's useful when we don't know the size of the data in advance.
    // ? The new operator is used to allocate memory on the heap. It returns the address of the allocated memory.
    // ? The delete operator is used to deallocate memory on the heap. It releases the memory that was allocated using new.
    // ? If we don't deallocate memory, it can lead to memory leaks.

    // * Allocating memory for a single variable
    int *num = new int; // Allocates memory for an integer
    *num = 5;           // Assigns a value to the allocated memory
    cout << "Value of num: " << *num << endl;
    delete num;    // Deallocates memory
    num = nullptr; // Avoids dangling pointer by assigning nullptr

    // * Allocating memory for an array
    // ? pointers initialized with dynamic arrays are different from arrays
    // ? std:size will not work with dynamic arrays because it's not a part of the array
    // ? range-based for loop will not work with dynamic arrays
    int *arr = new int[5]; // Allocates memory for an array of integers
    for (int i = 0; i < 5; i++)
    {
        arr[i] = i + 1; // Assigns values to the array elements
    }
    for (int i = 0; i < 5; i++)
    {
        cout << "Element of arr at index" << i << ": " << arr[i] << endl;
    }
    delete[] arr;  // Deallocates memory of the array
    arr = nullptr; // Avoids dangling pointer by assigning nullptr

    // ! Dangling Pointers
    // ? A dangling pointer is a pointer that doesn't point to a valid memory address. It may point to a memory address that was previously valid, but is no longer valid.
    // ? Dangling pointers can occur when the memory to which a pointer points is deallocated, or when the pointer goes out of scope.
    // ? Dangling pointers can lead to undefined behavior, and should be avoided by setting the pointer to nullptr after deallocation.

    // ! Memory Leaks
    // ? A memory leak occurs when memory that is allocated is not deallocated, resulting in a waste of memory.
    // ? Memory leaks can lead to performance issues, and can cause a program to run out of memory.
    // ? Memory leaks can be avoided by deallocating memory after it is no longer needed.

    // ! Pointer to Pointer

    return 0;
}