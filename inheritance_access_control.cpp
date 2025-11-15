#include <iostream>
using namespace std;

// ? Base class 'Person' with different access specifiers
class Person
{
public:
    string name; // Public member - accessible from outside

protected:
    int age; // Protected member - not accessible from outside the class, but accessible to derived classes

private:
    int SSN; // Private member - only accessible inside the 'Person' class

public:
    // Constructor to initialize 'name', 'age', and 'SSN'
    Person(string n, int a, int s) : name(n), age(a), SSN(s) {}

    // Public method to display basic info
    void displayInfo()
    {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// ? ////////////////////////////////////////////////////////////////
// ! 1. Public Inheritance - All 'public' and 'protected' members  //
// !   remain accessible according to their original access level  //
// ? ////////////////////////////////////////////////////////////////

class Student : public Person
{
public:
    int studentID;

    //   Constructor to initialize 'Student' attributes and base class 'Person'
    Student(string n, int a, int s, int id) : Person(n, a, s), studentID(id) {}

    //   Method to display student's details
    void displayStudentInfo()
    {
        displayInfo(); // Can access 'public' function of 'Person'
        cout << "Student ID: " << studentID << endl;

        //  Can access 'protected' member 'age' because it's inherited as 'protected'
        cout << "Age (protected member): " << age << endl;

        // Cannot access 'private' member 'SSN' directly
        // cout << "SSN: " << SSN << endl; // Error: 'SSN' is private in 'Person'
    }
};

// ? ////////////////////////////////////////////////////////////////
// ! 2. Protected Inheritance - All 'public' and 'protected'       //
// !    members become 'protected' in the derived class            //
// ? ////////////////////////////////////////////////////////////////

class Teacher : protected Person
{
public:
    int teacherID;

    // Constructor to initialize 'Teacher' attributes and base class 'Person'
    Teacher(string n, int a, int s, int id) : Person(n, a, s), teacherID(id) {}

    // Method to display teacher's details
    void displayTeacherInfo()
    {
        displayInfo(); // Can access 'public' function of 'Person'
        cout << "Teacher ID: " << teacherID << endl;

        // Can access 'protected' member 'age' because it's inherited as 'protected'
        cout << "Age (protected member): " << age << endl;

        // Cannot access 'private' member 'SSN' directly
        // cout << "SSN: " << SSN << endl; // Error: 'SSN' is private in 'Person'
    }
};

// ? ////////////////////////////////////////////////////////////////
// ! 3. Private Inheritance - All 'public' and 'protected'         //
// !    members become 'private' in the derived class              //
// ? ////////////////////////////////////////////////////////////////

class Employee : private Person
{
public:
    int employeeID;

    // Constructor to initialize 'Employee' attributes and base class 'Person'
    Employee(string n, int a, int s, int id) : Person(n, a, s), employeeID(id) {}

    // Method to display employee's details
    void displayEmployeeInfo()
    {
        displayInfo(); // Can access 'public' function of 'Person'
        cout << "Employee ID: " << employeeID << endl;

        // Can access 'protected' member 'age' because it's inherited as 'private'
        cout << "Age (inherited as private): " << age << endl;

        // Cannot access 'private' member 'SSN' directly
        // cout << "SSN: " << SSN << endl; // Error: 'SSN' is private in 'Person'
    }
};

int main(int argc, char const *argv[])
{

    // ! Access Control Chart in Inheritance
    // *  Access Level in Base Class	    Public Inheritance	        Protected Inheritance	    Private Inheritance
    // ?  public	                        public	                    protected	                private
    // ?  protected	                        protected	                protected	                private
    // ?  private	                        Not accessible	            Not accessible	            Not accessible

    // 1. Public inheritance - All public members remain public
    Student student("Alice", 20, 123456, 1001);
    student.displayStudentInfo();

    // 'name' is public in 'Person' and remains public in 'Student'
    cout << "Accessing public member directly: " << student.name << endl;

    // Cannot access 'age' or 'SSN' directly from outside
    // cout << student.age << endl;  // Error: 'age' is protected in 'Student'
    // cout << student.SSN << endl;  // Error: 'SSN' is private in 'Person'

    cout << "-------------------------------------------" << endl;

    // 2. Protected inheritance - Public members become protected
    Teacher teacher("Bob", 35, 654321, 2001);
    teacher.displayTeacherInfo();

    // Cannot access 'name' or 'age' from outside because they are protected now
    // cout << teacher.name << endl;  // Error: 'name' is protected in 'Teacher'

    cout << "-------------------------------------------" << endl;

    // 3. Private inheritance - Public members become private
    Employee employee("Charlie", 45, 987654, 3001);
    employee.displayEmployeeInfo();

    // Cannot access 'name' or 'age' from outside because they are private now
    // cout << employee.name << endl;  // Error: 'name' is private in 'Employee'

    //  !    Explanation of Example:
    // ? Person Class:
    // * name: Public member, accessible to everyone.
    // * age: Protected member, accessible to the class itself and any derived classes.
    // * SSN: Private member, accessible only within the Person class.

    // ? Public Inheritance (Student):
    // * Inherits the public member name as public.
    // * Inherits the protected member age as protected.
    // * Cannot access the private member SSN.
    // * The public function displayInfo() from Person is accessible.

    // ? Protected Inheritance (Teacher):
    // * Inherits the public member name as protected.
    // * Inherits the protected member age as protected.
    // * Cannot access the private member SSN.
    // * The public function displayInfo() is still accessible but now becomes protected in Teacher.

    // ? Private Inheritance (Employee):
    // * Inherits the public member name as private.
    // * Inherits the protected member age as private.
    // * Cannot access the private member SSN.
    // * The public function displayInfo() from Person is accessible but is now private in Employee.

    return 0;
}