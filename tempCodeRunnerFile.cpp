#include <iostream>
using namespace std;

// ? Example of a class
class Rectangle // Class definition
{
public:            // Access Specifier (public, private, protected)
    int length{};  // Data members (variables)
    int breadth{}; // Data members (variables)

    int area() // Member function (method)
    {
        return length * breadth;
    }

    int perimeter() // Member function (method)
    {
        return 2 * (length + breadth);
    }
};

// ? Example of a class with private access specifier
class Rectangle2 // Class definition
{
private:            // Access Specifier (public, private, protected)
    int length{6};  // Data members (variables)
    int breadth{9}; // Data members (variables)

public:        // Access Specifier (public, private, protected)
    int area() // Member function (method)
    {
        return length * breadth;
    }

    int perimeter() // Member function (method)
    {
        return 2 * (length + breadth);
    }
};

// ? Example of a class with protected access specifier
class Rectangle3 // Class definition
{
protected:          // Access Specifier (public, private, protected)
    int length{2};  // Data members (variables)
    int breadth{3}; // Data members (variables)

public:        // Access Specifier (public, private, protected)
    int area() // Member function (method)
    {
        return length * breadth;
    }

    int perimeter() // Member function (method)
    {
        return 2 * (length + breadth);
    }
};

// ? Example of a class with constructor
class Car
{
public:
    string brand;
    string model;
    int year;

    // Default Constructor
    Car()
    {
        brand = "Ford";
        model = "Mustang";
        year = 1969;
    }
    // Car() = default; // Default Constructor

    // Parameterized Constructor
    Car(string b, string m, int y)
    {
        brand = b;
        model = m;
        year = y;
    }
    // method
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

// ? Example of a class with destructor
class Car2
{
public:
    string brand;
    string model;
    int year;

    // Default Constructor
    Car2()
    {
        brand = "Ford";
        model = "Mustang";
        year = 1969;
    }
    // Destructor
    ~Car2()
    {
        cout << "Object is destroyed" << endl;
    }
    // method
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

// ? Example of a class with copy constructor
class Car3
{
public:
    string brand;
    string model;
    int year;

    // Default Constructor
    Car3()
    {
        brand = "Ford";
        model = "Mustang";
        year = 1969;
    }
    // Copy Constructor
    Car3(const Car3 &old_obj)
    {
        brand = old_obj.brand;
        model = old_obj.model;
        year = old_obj.year;
    }
    // method
    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

// ? Example of a class with getters and setters
class Dog
{
private:
    string name{"Bitch"};
    int age{12};

public:
    // Getter
    string getName()
    {
        return name;
    }
    int getAge()
    {
        return age;
    }
    // Setter
    void setAge(int a)
    {
        age = a;
    }
};

// ? Example of Static variables and methods
class Person
{
private:
    string name;
    int age;

    // Static data member to keep track of the total number of Person objects
    static int personCount;

public:
    // Constructor
    Person(string n, int a) : name(n), age(a)
    {
        // Increment personCount when a new object is created
        personCount++;
    }

    // Destructor
    ~Person()
    {
        // Decrement personCount when an object is destroyed
        personCount--;
    }

    // Static member function to get the current person count
    static int getPersonCount()
    {
        return personCount;
    }

    // Non-static member function to display person details
    void display() const
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
// Initialize static data member (must be done outside the class)
int Person::personCount = 0;

// ? Example of a struct
struct Point
{
    int x;
    int y;
};

int main(int argc, char const *argv[])
{
    // ! CLASSES
    // * A class is a user-defined datatype that represents a real-world entity, grouping related data members(variables) and member functions(methods) into a single unit.
    // * A class defines a structure but does not allocate memory until an object is created from it.
    // * An object is created from a class using the new keyword. The new keyword returns the address of the object created.

    // ? Access Modifiers
    // * Access modifiers are keywords that define the access level of the members of a class. There are three access modifiers in C++:

    // ! public: Members can be accessed from outside the class.
    Rectangle r1;   // Object creation
    r1.length = 10; // Accessing data members using the dot operator (.) and assigning values to them
    r1.breadth = 5;
    cout << "Area of r1: " << r1.area() << endl;
    cout << "Perimeter of r1: " << r1.perimeter() << endl;

    // ! private: Members cannot be accessed from outside the class. The private members are only accessible within the class. By default, the members of a class are private.
    Rectangle2 r2; // Object creation
    // r2.length = 10; // Error: 'int Rectangle2::length' is private within this context
    cout << "Area of r2: " << r2.area() << endl; // Accessing member functions

    // ! protected: Members cannot be accessed from outside the class, however, they can be accessed in inherited classes.
    Rectangle3 r3; // Object creation
    // r3.length = 10; // Error: 'int Rectangle3::length' is protected within this context
    cout << "Area of r3: " << r3.area() << endl; // Accessing member functions

    // ? Constructors
    // * A constructor is a special member function of a class that is automatically called when an object of the class is created. It is used to initialize the data members of new objects.
    // * Constructors have the same name as the class and do not have a return type.
    // * Constructors can be overloaded, which means a class can have more than one constructor.
    // * Constructors are called automatically when objects are created.
    // * If a class does not have a constructor, the compiler provides a default constructor.
    // * Constructor should be public in order to create an object of the class. If the constructor is private, we cannot create an object.

    // ? There are two types of constructors in C++:
    // ! Default Constructor: A constructor that does not take any arguments is called a default constructor.
    Car c1; // Default Constructor
    c1.display();

    // ! Parameterized Constructor: A constructor that takes arguments is called a parameterized constructor.
    Car c2("Honda", "Civic", 2020); // Parameterized Constructor
    c2.display();

    // ? Destructor
    // * A destructor is a special member function of a class that is called automatically when an object goes out of scope or is explicitly deleted.
    // * The destructor has the same name as the class but with a tilde (~) before it.
    // * A class can only have one destructor.
    // * The destructor does not take any arguments and does not return anything.
    // * The destructor is called automatically when an object goes out of scope or is explicitly deleted.
    // * The destructor is used to release resources acquired by the object during its lifetime.
    Car2 c3; // Default Constructor
    c3.display();

    // ? Copy Constructor
    // * A copy constructor is a special constructor that initializes a new object as a copy of an existing object.
    // ! The copy constructor is used to:
    // * Initialize a new object as a copy of an existing object.
    // * Copy an object to pass it as an argument to a function.
    // * Copy an object to return it from a function.
    // ! The copy constructor has the following signature:
    // * ClassName(const ClassName &old_obj);
    Car3 c4;      // Default Constructor
    Car3 c5 = c4; // Copy Constructor
    c5.display();

    // ? Getters and Setters
    // * Getters and setters are used to control the access of class members. They are also known as accessors and mutators.
    // * Getters are used to access the value of a private member from outside the class.
    // * Setters are used to modify the value of a private member from outside the class.
    // * Getters and setters are public member functions that are used to access and modify the private members of a class.
    // * Getters and setters are used to implement data encapsulation.
    Dog d1;
    d1.setAge(69);
    cout << "Name: " << d1.getName() << endl;
    cout << "Age: " << d1.getAge() << endl;

    // ? Managing a Stack Object through pointers
    Rectangle *r4 = &r1;
    // r4->length = 20;
    // r4->breadth = 10;

    cout << "Area of r4: " << r4->area() << endl;
    cout << "Perimeter of r4: " << r4->perimeter() << endl;

    // ? Dynamic Memory Allocation of Objects using new keyword (Heap)
    Rectangle *r5 = new Rectangle();
    r5->length = 65;
    r5->breadth = 76;
    cout << "Area of r5: " << r5->area() << endl;
    cout << "Perimeter of r5: " << r5->perimeter() << endl;
    delete r5; // Deallocating memory

    // ? Static
    // * Static members are shared by all objects of the class. They are initialized only once.
    // * Static data members must be defined and initialized outside the class definition (global), as they are not part of the individual object’s memory. Changes affect all instances of the class.
    // * Static members are accessed using the class name, not the object name.
    // * Static members can be accessed using the class name without creating an object
    // * Static members are used to store class-wide information.
    // * Static members are declared using the static keyword.
    // * Static members can be variables or functions.
    // * Static variables are initialized to zero when the first object is created.
    // * Static variables are destroyed when the program ends.
    // * Static functions can only access static members of the class.
    // * Static members can be public, private, or protected.
    // * Static members can be accessed using the scope resolution operator (::).

    // Before any objects are created, the person count is 0
    cout << "Total Persons: " << Person::getPersonCount() << endl;

    // Create two Person objects
    Person person1("John", 25);
    Person person2("Alice", 30);

    // Display the person details
    person1.display();
    person2.display();

    // The static person count should now reflect the two objects created
    cout << "Total Persons after creation: " << Person::getPersonCount() << endl;

    {
        // Create another Person object inside a block
        Person person3("Bob", 22);
        person3.display();
        cout << "Total Persons after creating person3: " << Person::getPersonCount() << endl;
    } // person3 goes out of scope and is destroyed here

    // personCount decreases after person3 is destroyed
    cout << "Total Persons after person3 is destroyed: " << Person::getPersonCount() << endl;

    // ? Struct vs Class
    // * Struct members are public by default, while class members are private by default.
    // * Structs are value types, while classes are reference types.
    // * Structs do not require a constructor, while classes require a constructor.
    // * Structs are used for lightweight objects such as Point, Rectangle, etc., while classes are used for more complex objects.
    // * Structs do not have constructors, destructors, or access specifiers, while classes can have them.
    // * Structs do not support inheritance, while classes support inheritance.

    Point p1;
    p1.x = 5;
    p1.y = 10;
    cout << "Point p1: (" << p1.x << ", " << p1.y << ")" << endl;

    return 0;
}