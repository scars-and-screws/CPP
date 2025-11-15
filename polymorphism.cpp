#include <iostream>
using namespace std;

// ! Compile-time polymorphism (Static polymorphism) example
// Overloaded functions: same name, different parameters
void print(int i)
{
    cout << "Printing int: " << i << endl;
}

void print(double f)
{
    cout << "Printing float: " << f << endl;
}

void print(string s)
{
    cout << "Printing string: " << s << endl;
}

// ! Run-time polymorphism (Dynamic polymorphism) example
// Base class
class Account
{
public:
    virtual void calculateInterest()
    {
        cout << "Calculating interest for a general account." << endl;
    }
};

// Derived class - SavingsAccount
class SavingsAccount : public Account
{
public:
    void calculateInterest() override
    {
        cout << "Calculating interest for a savings account." << endl;
    }
};

// Derived class - CurrentAccount
class CurrentAccount : public Account
{
public:
    void calculateInterest() override
    {
        cout << "Calculating interest for a current account." << endl;
    }
};

// ! Virtual Destructor example

class Animal // Base class
{
public:
    Animal()
    {
        cout << "Animal created." << endl;
    }

    // Virtual destructor
    virtual ~Animal()
    {
        cout << "Animal destroyed." << endl;
    }
};

// Derived class
class Dog : public Animal
{
public:
    Dog()
    {
        cout << "Dog created." << endl;
    }

    ~Dog()
    {
        cout << "Dog destroyed." << endl;
    }
};
int main(int argc, char const *argv[])
{
    // ! POLYMORPHISM
    // * Polymorphism means (many forms) It allows one interface (method or function) to be used for different data types or classes. it provides different implementations of the same function, depending on the object type.

    // ! Polymorphism is of two types:
    // ? Compile-time polymorphism (Static polymorphism):
    // * Achieved using function overloading or operator overloading.
    // * The method that is called is determined at compile time.
    // * Same function name, different signatures (arguments).
    print(42);      // Calls print(int)
    print(3.14);    // Calls print(double)
    print("Hello"); // Calls print(string)

    // ? Run-time polymorphism (Dynamic polymorphism):
    // * Achieved using inheritance and virtual functions.
    // * The method that is called is determined at runtime based on the type of the object.
    // * In runtime polymorphism, the function call is resolved during the execution of the program.
    // * This is also called late binding or dynamic binding because the function to be called is determined later (i.e., at runtime).
    // *  Base class pointer pointing to derived class objects, and the correct overridden function is called.
    Account *accPtr;

    SavingsAccount savings;
    CurrentAccount current;

    // Account pointer points to SavingsAccount object
    accPtr = &savings;
    accPtr->calculateInterest(); // Output: Calculating interest for a savings account.

    // Account pointer points to CurrentAccount object
    accPtr = &current;
    accPtr->calculateInterest(); // Output: Calculating interest for a current account.

    // ? Base Class (Account): This class has a virtual function calculateInterest(), which is overridden in the derived classes.
    // ? Derived Classes (SavingsAccount, CurrentAccount): Both derived classes override the calculateInterest() function with specific implementations.
    // ? Runtime Polymorphism: A base class pointer (Account* accountPtr) points to objects of derived classes. The correct version of calculateInterest() is called based on the type of the object at runtime, not the type of the pointer.

    // ! Virtual Destructor
    // * Ensure that when deleting a derived class object via a base class pointer, both the base and derived class destructors are called to prevent resource leaks.
    // * The base class destructor should be declared as virtual.
    // * ensures that the destructors of derived classes are invoked correctly when deleting objects through a base class pointer.
    Animal *animalPtr = new Dog(); // Base class pointer to derived object
    delete animalPtr;              // Calls both Dog's and Animal's destructors

    return 0;
}