#include <iostream>
using namespace std;

// ! Basic Syntax of Inheritance:
class BaseClass
{
    // Base class members (variables and methods)
};

class DerivedClass : public BaseClass
{
    // Derived class members (can add new members or override base members)
};

// ! Example of Single Inheritance:
class Animal
{
public:
    void eat()
    {
        cout << "Eating..." << endl;
    }
};

class Dog : public Animal
{
public:
    void bark()
    {
        cout << "Barking..." << endl;
    }
};

// ! Example of Multiple Inheritance:
class Car
{
public:
    void drive()
    {
        cout << "Driving..." << endl;
    }
};

class ElectricCar
{
public:
    void charge()
    {
        cout << "Charging..." << endl;
    }
};

class Tesla : public Car, public ElectricCar
{
public:
    void autoPilot()
    {
        cout << "Auto Pilot..." << endl;
    }
};

// ! Example of Multilevel Inheritance:
class Parent
{
public:
    void parentMethod()
    {
        cout << "Parent Method..." << endl;
    }
};

class Child : public Parent
{
public:
    void childMethod()
    {
        cout << "Child Method..." << endl;
    }
};

class GrandChild : public Child
{
public:
    void grandChildMethod()
    {
        cout << "Grand Child Method..." << endl;
    }
};

// ! Example of Hierarchical Inheritance:
class Shape
{
public:
    void shapeMethod()
    {
        cout << "Shape Method..." << endl;
    }
};

class Circle : public Shape
{
public:
    void circleMethod()
    {
        cout << "Circle Method..." << endl;
    }
};

class Square : public Shape
{
public:
    void squareMethod()
    {
        cout << "Square Method..." << endl;
    }
};

// ! Example of Hybrid Inheritance:
// Base class 'Person'
class Person
{
protected:
    string name;
    int age;

public:
    Person(string n, int a) : name(n), age(a) {}

    void displayPersonInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Base class 'Worker'
class Worker
{
protected:
    int workerID;

public:
    Worker(int id) : workerID(id) {}

    void displayWorkerInfo()
    {
        cout << "Worker ID: " << workerID << endl;
    }
};

// Derived class 'Engineer' inherits from both 'Person' and 'Worker'
class Engineer : public Person, public Worker
{
private:
    string engineeringField;

public:
    // Constructor for initializing attributes from both base classes
    Engineer(string n, int a, int id, string field) : Person(n, a), Worker(id), engineeringField(field) {}

    // Display function to show Engineer's info
    void displayEngineerInfo()
    {
        displayPersonInfo(); // From Person
        displayWorkerInfo(); // From Worker
        cout << "Engineering Field: " << engineeringField << endl;
    }
};

// Derived class 'Manager' inherits from 'Person'
class Manager : public Person
{
private:
    int teamSize;

public:
    // Constructor for initializing Manager's attributes
    Manager(string n, int a, int size) : Person(n, a), teamSize(size) {}

    // Display function to show Manager's info
    void displayManagerInfo()
    {
        displayPersonInfo(); // From Person
        cout << "Team Size: " << teamSize << endl;
    }
};

int main(int argc, char const *argv[])
{
    // ! INHERITANCE
    // * Inheritance allows a new class (derived class or subclass) to inherit properties and behaviors of an existing class (base class or superclass).

    // ? Base Class (Super Class): The class whose properties and behaviors are inherited by the new class is called a base class (Parent Class or Super Class).
    // ? Derived Class (Sub Class): This is the child class that inherits properties and behaviors from an existing class is called a derived class (Child Class or Sub Class).

    // ! Access Specifiers :
    // * public: Members are accessible from outside the class.
    // * protected: Members are accessible within the class, derived classes, but not from outside.
    // * private: Members are accessible only within the class itself.

    // ! Access Control in Inheritance:
    // * Public Inheritance: Public members of the base class remain public in the derived class, and protected members remain protected.
    // * Protected Inheritance:  Base class members become protected in the derived class, except for private members which remain inaccessible.
    // * Private Inheritance: All base class members become private in the derived class, except for private members, which remain inaccessible.

    // ! Types of Inheritance:
    // * Single Inheritance: A class inherits from only one base class.
    Dog d1;
    d1.eat();
    d1.bark();

    // * Multiple Inheritance: A class inherits from more than one base class.
    Tesla t1;
    t1.drive();
    t1.charge();
    t1.autoPilot();

    // * Multilevel Inheritance: A class inherits from a derived class, making that derived class a base class for another class.(A class derives from a class that is already derived from another class.)

    GrandChild gc1;
    gc1.parentMethod();
    gc1.childMethod();
    gc1.grandChildMethod();

    // * Hierarchical Inheritance:  Multiple derived classes inherit from a single base class.
    Circle c1;
    c1.shapeMethod();
    c1.circleMethod();

    Square s1;
    s1.shapeMethod();
    s1.squareMethod();
    // * Hybrid Inheritance: A combination of two or more types of inheritance.
    Engineer e1("John", 30, 1001, "Software");
    e1.displayEngineerInfo();

    Manager m1("Alice", 35, 10);
    m1.displayManagerInfo();

    return 0;
}