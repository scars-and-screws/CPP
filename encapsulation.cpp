#include <iostream>
using namespace std;

// ! An example of Encapsulation
class BankAccount
{
private:
    //  Private data members: cannot be accessed directly from outside the class
    string accountHolderName;
    double balance;

public:
    //  Constructor to initialize the account
    BankAccount(string name, double initialBalance)
    {
        accountHolderName = name;
        balance = initialBalance;
    }

    // Public method to get the balance (getter)
    double getBalance() const
    {
        return balance;
    }

    // Public method to deposit money into the account
    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposit successful! New balance: $" << balance << endl;
        }
        else
        {
            cout << "Invalid deposit amount!" << endl;
        }
    }

    // Public method to withdraw money from the account
    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawal successful! New balance: $" << balance << endl;
        }
        else
        {
            cout << "Invalid or insufficient funds for withdrawal!" << endl;
        }
    }
};
// ! Explanation of Encapsulation in the BankAccount class:
// ? Private Data Members:
// * accountHolderName and balance are declared as private, meaning they cannot be accessed directly from outside the class. This ensures that the account balance and account holder's name are protected from being modified directly by external code.

// ? Public Methods:
// * Getters and Setters (Accessor Methods): These provide controlled access to private data members. In this case, the getBalance() method allows access to the account balance, and methods like deposit() and withdraw() allow controlled modification of the balance.
// * deposit() and withdraw() are the only ways to modify the balance, ensuring that invalid operations (like depositing a negative amount or withdrawing more than the balance) are handled properly.

// ? Error Prevention:
// * If we tried to modify the balance directly (myAccount.balance = 1000;), the compiler would throw an error because balance is private. This enforces encapsulation by ensuring that the internal data can only be accessed and modified through methods defined within the class.

int main(int argc, char const *argv[])
{
    // ! ENCAPSULATION
    // * Encapsulation is one of the four fundamental principles of Object-Oriented Programming (OOP), along with Abstraction, Inheritance, and Polymorphism.
    // * It refers to the bundling of data (variables) and methods (functions) that operate on that data.
    // * Encapsulation is used to hide the values or state of a structured data object inside a class, preventing unauthorized parties' direct access to them.
    // * The data is only accessible through the functions (getters and setters) that are bundled with the data.
    // * Encapsulation helps in data hiding, reducing complexity, and increasing reusability.

    // Creating an object of BankAccount
    BankAccount myAccount("John Wick", 500.00);

    // Accessing the balance through a public getter function
    cout << "Current balance: $" << myAccount.getBalance() << endl;

    // Depositing money into the account
    myAccount.deposit(150.00);

    // Trying to withdraw money
    myAccount.withdraw(100.00);

    // Attempting to withdraw more than the balance
    myAccount.withdraw(600.00);

    // Accessing private members directly is not allowed (will cause error)
    // myAccount.balance = 1000;  // Error: 'balance' is private within this context

    // ! Encapsulation and Access Specifiers:
    // ? Private (private): The members declared as private are accessible only within the class itself and cannot be accessed directly by objects of that class.
    // ? Protected (protected): The members declared as protected are accessible within the class and by derived classes (used primarily in inheritance).
    // ? Public (public): The members declared as public are accessible from outside the class using an object of that class.

    // ! Key concepts of Encapsulation:
    // * Data Hiding: The internal state of an object is hidden from the outside world.
    // * Access Specifiers: Control the access to the class members.
    // * Getters and Setters: Methods to read and modify the private data members.

    return 0;
}