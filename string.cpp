#include <iostream>
#include <string> // Required for string class
using namespace std;

int main(int argc, char const *argv[])
{
    // ! STRINGS
    // ? String Class
    // * The string class automatically manages memory allocation and deallocation.
    string name = "John";
    cout << name << endl; // Outputs: John

    // ? String Concatenation
    // * The + operator can be used to concatenate strings.
    string firstName = "John";
    string lastName = "Wick";
    string fullName = firstName + " " + lastName;
    cout << fullName << endl; // Outputs: John Wick

    // ? String Length
    // * The length() method returns the length of the string.
    cout << "Length: " << fullName.length() << endl; // Outputs: 10

    // ? String Access
    // * Strings can be accessed using the [] operator.
    cout << "First character: " << fullName[0] << endl; // Outputs: J

    // ? String Input
    // * The getline() function is used to read a line of text from the input stream.
    string city;
    cout << "Enter your city: ";
    getline(cin, city);
    cout << "City: " << city << endl;

    // ? String Comparison
    // * The compare() method is used to compare two strings.
    string str1 = "apple";
    string str2 = "banana";
    if (str1.compare(str2) == 0)
    {
        cout << "Strings are equal" << endl;
    }
    else
    {
        cout << "Strings are not equal" << endl;
    }

    // ? String Substring
    // * The substr() method is used to extract a substring from a string.
    string text = "Hello, World!";
    string sub = text.substr(7, 5); // Extracts "World"
    cout << "Substring: " << sub << endl;

    // ? String Find
    // * The find() method is used to search for a substring within a string.
    string sentence = "The quick brown fox jumps over the lazy dog";
    int index = sentence.find("fox");
    cout << "Substring found at index: " << index << endl; // Outputs: 16
    // ? Copying Strings
    // * The copy() method is used to copy a substring from a string to a character array.
    string textCopy = "Hello, World!";
    char dest[5];
    textCopy.copy(dest, 5, 7);               // Copies "World" to dest
    dest[5] = '\0';                          // Null-terminate the string
    cout << "Copied text: " << dest << endl; // Outputs: World

    // ? String Replace
    // * The replace() method is used to replace a substring with another string.
    string message = "Hello, World!";
    message.replace(7, 5, "C++");
    cout << "Replaced message: " << message << endl; // Outputs: Hello, C++

    // ? tolower() and toupper()
    // * The tolower() and toupper() functions are used to convert characters to lowercase and uppercase respectively.
    string textCase = "Hello, World!";
    for (char &c : textCase)
    {
        c = tolower(c); // Convert to lowercase
    }
    cout << "Lowercase: " << textCase << endl; // Outputs: hello, world!

    for (char &c : textCase)
    {
        c = toupper(c); // Convert to uppercase
    }
    cout << "Uppercase: " << textCase << endl; // Outputs: HELLO, WORLD!

    // ? String Erase
    // * The erase() method is used to remove characters from a string.
    string text1 = "Hello, World!";
    text1.erase(7, 5);                        // Erases "World"
    cout << "Erased text: " << text1 << endl; // Outputs: Hello,

    // ? String Insert
    // * The insert() method is used to insert characters into a string.
    string text2 = "Hello, World!";
    text2.insert(7, "C++");
    cout << "Inserted text: " << text2 << endl; // Outputs: Hello, C++World!

    // ? String Empty
    // * The empty() method is used to check if a string is empty.
    string emptyStr = "";
    if (emptyStr.empty())
    {
        cout << "String is empty" << endl;
    }
    else
    {
        cout << "String is not empty" << endl;
    }

    // ? String Clear
    // * The clear() method is used to remove all characters from a string.
    string text3 = "Hello, World!";
    text3.clear();
    cout << "Cleared text: " << text3 << endl; // Outputs: ""

    // ? String to Number
    // * The stoi() function converts a string to an integer.
    string numStr = "123";
    int num = stoi(numStr);
    cout << "Number: " << num << endl; // Outputs: 123

    // * The stof() function converts a string to a float.
    string floatStr = "3.14";
    float pi = stof(floatStr);
    cout << "Pi: " << pi << endl; // Outputs: 3.14

    // * The stod() function converts a string to a double.
    string doubleStr = "3.14159";
    double piValue = stod(doubleStr);
    cout << "Pi Value: " << piValue << endl; // Outputs: 3.14159

    // * The to_string() function converts a number to a string.
    int number = 123;
    string str = to_string(number);
    cout << "String: " << str << endl; // Outputs: 123

    return 0;
}
