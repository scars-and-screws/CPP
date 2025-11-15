#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    // ! Input and Output (I/O)
    // ? Standard Output (cout)
    // * cout is used to output data to the standard output device (usually the screen).
    // * The insertion operator (<<) is used along with cout to output data to the screen.
    cout << "Out of this world!" << endl;

    // ? Standard Input (cin)
    // * cin "Character input" is used to get input from the standard input device (usually the keyboard).
    // * The extraction operator (>>) is used along with cin to get input from the user  and store it in a variable.
    // * 'cin' reads the input until it encounters a whitespace (space, tab, or newline).
    // ? Single Input
    int age;
    cout << "Enter your age: ";
    cin >> age; // Store the input in the variable age
    cout << "Your age is: " << age << endl;

    // ? Multiple Inputs
    // * 'cin' can be used to take multiple inputs in a single line.
    int x, y;
    cout << "Enter two numbers separated by space: ";
    cin >> x >> y; // Takes two integers as input
    // * 'cin' automatically skips whitespace between inputs.
    cout << "You entered: x = " << x << ", y = " << y << endl;

    // ? Standard Error (cerr)
    // * cerr is used to display error messages. It is unbuffered, meaning it sends output directly to the console without buffering.
    cerr << "This is an error message: 4O4" << endl; // Display error message

    // ? Standard Log (clog)
    // * clog is used to display the log messages. It is buffered, meaning it sends output to the console after buffering.
    clog << "This is a log message." << endl; // Display log message

    // ? Getline(cin, variable)
    // * Using getline to read the entire line including spaces. It reads the input until a newline character is encountered.
    string fullName;
    cout << "Enter your full name: ";
    getline(cin, fullName); // Store the input in the variable fullName
    cout << "Your full name is: " << fullName << endl;

    return 0;
}
