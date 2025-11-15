#include <iostream>
using namespace std;

// ! virtual function example

class Animal // Base class
{
public:
    virtual void sound()
    {
        cout << "This animal makes a sound." << endl;
    }
};

class Dog : public Animal // Derived class - Dog inherits from Animal class
{
public:
    void sound() override
    { // Overrides the base class version
        cout << "Dog barks." << endl;
    }
};

class Cat : public Animal // Derived class - Cat inherits from Animal class
{
public:
    void sound() override
    { // Overrides the base class version
        cout << "Cat meows." << endl;
    }
};

// ----------------//

// ! Example of  Abstract class with pure virtual function
class Shape
{
public:
    // Pure virtual function
    virtual void draw() = 0; // "= 0" makes it a pure virtual function
};

// Derived class - Circle
class Circle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Circle." << endl;
    }
};

// Derived class - Rectangle
class Rectangle : public Shape
{
public:
    void draw() override
    {
        cout << "Drawing a Rectangle." << endl;
    }
};

int main(int argc, char const *argv[])
{
    // ! VIRTUAL FUNCTIONS
    // * A virtual function is a function in a base class that is declared using the keyword virtual and is overridden by a derived classes. It allows us to achieve runtime polymorphism.
    // * When a base class pointer or reference refers to a derived class object, the overriden function in the derived class is called.
    // * Virtual function is defined using virtual keyword in the base class.

    // ! Example: Virtual Function
    Animal *animalPtr; // Base class pointer

    Dog dog;
    Cat cat;

    // Pointing to Dog object
    animalPtr = &dog;
    animalPtr->sound(); // Calls Dog's sound() - runtime polymorphism

    // Pointing to Cat object
    animalPtr = &cat;
    animalPtr->sound(); // Calls Cat's sound() - runtime polymorphism

    // * Virtual Function (sound): The function is declared virtual in the base class, allowing derived classes (Dog, Cat) to override it.
    // * Base Class Pointer: An Animal* pointer points to both Dog and Cat objects. The correct sound() method is called at runtime based on the object type, not the pointer type, achieving runtime polymorphism.

    // ------------------ //
    // ! Abstract Classes and Pure Virtual Functions
    // * An abstract class is a class that has at least one pure virtual function. A pure virtual function is a function declared in a base class that has no definition relative to the base class and must be overridden by derived classes.
    // * Abstract classes cannot be instantiated directly; The serve as a blueprint for derived classes.
    // ? Pure virtual functions are declared using the "= 0" syntax.

    // Shape shape; // Error: Cannot instantiate an abstract class
    Shape *shapePtr;

    Circle circle;
    Rectangle rectangle;

    shapePtr = &circle;
    shapePtr->draw(); // Calls Circle's draw()

    shapePtr = &rectangle;
    shapePtr->draw(); // Calls Rectangle's draw()

    return 0;
}