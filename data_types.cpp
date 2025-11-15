#include <iostream>
#include <typeinfo> // Required for typeid
using namespace std;

// ? Function Declaration
// * This function takes two integers as parameters and returns their sum.
int add(int a, int b);

// ? Typedef Declaration
// * Typedef creates an alias for the int data type, improving code readability.
typedef int Marks; // Alias for int, representing student marks or similar values.

int main()
{
    // ! VARIABLE INITIALIZATION

    //  * Default Initialization
    //  ? Variables declared without an initial value will contain garbage data.
    int val; // Default initialization
    cout << "Default initialized variable (garbage value): " << val << endl;

    //  * Copy Initialization
    //  ? The variable is initialized with the value of the expression on the right-hand side.
    int num1 = 10; // Copy initialization
    cout << "Copy initialized variable: " << num1 << endl;

    //  * Direct Initialization
    //  ? The variable is initialized directly with the value specified.
    int num2(20); // Direct initialization
    cout << "Direct initialized variable: " << num2 << endl;

    //  * Direct list Initialization
    //  ? The variable is initialized using a list of values enclosed in curly braces.
    int num4{};    // Value initialized to 0
    string name{}; // Value initialized to an empty string
    int num3{30};  // List initialization
    cout << "Direct list initialized variables: " << num4 << ", " << name << ", " << num3 << endl;

    // ? Expression list initialization
    int sum{add(10, 20)}; // Value initialized to the sum of 10 and 20
    cout << "Expression list initialized variable (sum): " << sum << endl;

    //  * List copy initialization
    //  ? The variable is initialized using a list of values enclosed in curly braces.
    int num7 = {40}; // List copy initialization
    cout << "List copy initialized variable: " << num7 << endl;

    //  ! NUMBER REPRESENTATION
    int decimal = 10;    // Decimal representation
    int octal = 012;     // Octal representation (0 prefix)
    int hex = 0xA;       // Hexadecimal representation (0x prefix)
    int binary = 0b1010; // Binary representation (C++14 onwards)
    cout << "Number representations - Decimal: " << decimal << ", Octal: " << octal << ", Hex: " << hex << ", Binary: " << binary << endl;

    //  ! SIZE DEFINITION
    //  ? The sizeof operator returns the size of a variable or data type in bytes.
    cout << "Size of int: " << sizeof(int) << " bytes" << endl;
    //  ? The sizeof operator can also be used with variables.
    int num = 10;
    cout << "Size of num: " << sizeof(num) << " bytes" << endl;

    // ! Basic Data Types

    // * 1. Integer (int)
    // ? Used to represent whole numbers (both positive and negative) without decimal points.
    int age = 20;
    cout << "Example of an integer: " << age << endl;

    // ! TYPE MODIFIERS FOR int IN C++

    // ? 1. Signed int (default)
    signed int signedInt = -100; // Explicitly signed
    int defaultSignedInt = 50;   // Implicitly signed (default behavior)
    cout << "Signed int: " << signedInt << endl;
    cout << "Default signed int: " << defaultSignedInt << endl;

    // ? 2. Unsigned int
    unsigned int unsignedInt = 3000;
    cout << "Unsigned int: " << unsignedInt << endl;

    // ? 3. Short int
    short int shortInt = 100;                 // Signed short int
    unsigned short int unsignedShort = 60000; // Unsigned short int
    cout << "Short int: " << shortInt << endl;
    cout << "Unsigned short int: " << unsignedShort << endl;

    // ? 4. Long int
    long int longInt = 100000L;                    // Signed long int
    unsigned long int unsignedLong = 3000000000UL; // Unsigned long int
    cout << "Long int: " << longInt << endl;
    cout << "Unsigned long int: " << unsignedLong << endl;

    // ? 5. Long long int
    long long int longLongInt = 900000000000LL;                        // Signed long long int
    unsigned long long int unsignedLongLong = 18000000000000000000ULL; // Unsigned long long int
    cout << "Long long int: " << longLongInt << endl;
    cout << "Unsigned long long int: " << unsignedLongLong << endl;

    // * 2. Floating Point (float)
    float weight = 65.5f;
    cout << "Example of a float: " << weight << endl;

    // * 3. Double Precision Floating Point (double)
    double pi = 3.14159265359;
    cout << "Example of a double: " << pi << endl;

    // * 4. Character (char)
    char grade = 'A';
    cout << "Example of a char: " << grade << endl;

    // * 5. Boolean (bool)
    bool isMale = true;
    cout << "Example of a bool: " << isMale << endl;

    // ! Derived Data Types

    // * 1. Arrays
    int scores[5] = {90, 85, 80, 75, 70}; // Array to store exam scores
    cout << "Example of an array: " << scores[0] << endl;

    // * 2. Pointers
    int x = 100;   // Integer variable
    int *ptr = &x; // Pointer to integer, holding the address of x
    cout << "Example of a pointer: " << *ptr << endl;

    // * 3. References
    int y = 200;  // Integer variable
    int &ref = y; // Reference to the integer variable y
    cout << "Example of a reference: " << ref << endl;

    // * 4. Functions
    cout << "Example of a function: " << add(10, 20) << endl;

    // ! User-Defined Data Types

    // * 1. Structures (struct)
    struct Person
    {
        string name;  // Name of the person
        int age;      // Age of the person
        float weight; // Weight of the person
    };
    Person person1; // Declare an instance of the structure Person
    person1.name = "John Wick";
    person1.age = 69;
    person1.weight = 70.5;
    cout << "Example of a structure: " << person1.name << endl;

    // * 2. Unions
    union Data
    {
        int i;   // Integer member
        float f; // Float member
        char c;  // Char member
    };
    Data data;    // Declare an instance of the union Data
    data.i = 100; // Assign value to the integer member
    cout << "Example of a union: " << data.i << endl;

    // * 3. Enumerations (enum)
    enum Color
    {
        RED,   // Red color
        GREEN, // Green color
        BLUE   // Blue color
    };
    Color color = GREEN; // Declare an enumeration variable of type Color
    cout << "Example of an enum: " << color << endl;

    // * 4. Typedef
    Marks m = 90; // Variable of type 'Marks', which is an alias for int
    cout << "Example of a typedef: " << m << endl;

    // * 5. Classes
    class Car
    {
    public:
        string brand; // Car brand
        string model; // Car model
        int year;     // Car manufacturing year

        // Constructor to initialize Car objects
        Car(string x, string y, int z) : brand(x), model(y), year(z) {}
    };
    Car car1("Toyota", "Corolla", 2021); // Create an object of class Car
    cout << "Example of a class: " << car1.brand << endl;

    // * 6. Objects
    Car *car2 = new Car("Honda", "Civic", 2021); // Create an object dynamically using new
    cout << "Example of an object: " << car2->brand << endl;
    delete car2; // Release dynamically allocated memory

    // ! Auto Keyword

    auto j = 42; // j is deduced to be int
    cout << "Type of j is : " << typeid(j).name() << endl;

    auto k = 3.14; // k is deduced to be double
    cout << "Type of k is : " << typeid(k).name() << endl;

    auto l = 'c'; // l is deduced to be char
    cout << "Type of l is : " << typeid(l).name() << endl;

    auto str = "hello"; // str is deduced to be const char*
    cout << "Type of str is : " << typeid(str).name() << endl;

    //  ? 'auto' with function return types
    auto result = add(2, 3); // result is deduced to be int
    cout << "Type of result is : " << typeid(result).name() << endl;

    // ? 'auto' with lambda expressions
    auto lambda = [](int x, int y)
    { return x * y; };
    auto product = lambda(4, 5); // product is deduced to be int
    cout << "Type of product is : " << typeid(product).name() << endl;

    return 0;
}

// ? Function Definition
// * This function returns the sum of two integers.
int add(int a, int b)
{
    return a + b;
}
