#include <iostream>
#include <string>
using namespace std;
class Person
{
public:
    string name;
    int age;
    // Person(string name, int age)
    // {
    //     this->name = name;
    //     this->age = age;
    // };
    Person(){

    }
};

class Student : public Person
{
public:
    int rollno;
    Student(string name, int age,int rollno)
    {
        this->name = name;
        this->age = age;
        this->rollno = rollno;
    }
    void getInfo(){
        cout<<"name is : "<<name<<endl;
        cout<<"age is : "<<age<<endl;
        cout<<"rollno is : "<<rollno<<endl;
    }
    Student(){

    }
};

//polymorphism 
class Print {
public:
    // Function to print an integer
    void show(int i) {
        cout << "Integer: " << i << endl;
    }

    // Function to print a double
    void show(double d) {
        cout << "Double: " << d << endl;
    }

    // Function to print a string
    void show(string s) {
        cout << "String: " << s << endl;
    }
};

class Base {
public:
    virtual void show() {  // Virtual function
        cout << "Base class show() function" << endl;
    }

    void display() {
        cout << "Base class display() function" << endl;
    }
};

class Derived : public Base {
public:
    void show() override {  // Override the base class function
        cout << "Derived class show() function" << endl;
    }

    void display() {
        cout << "Derived class display() function" << endl;
    }
};

int main()
{
    Student s1;
    s1.name="suraj";
    s1.age=21;
    s1.rollno=12;
    s1.getInfo();
     Print p;
    p.show(5);        // Calls show(int)
    p.show(6.7);      // Calls show(double)
    p.show("Hello");  // Calls show(string)

    Base* basePtr;
    Derived d;
    basePtr = &d;

    // Run-time polymorphism: Calls Derived class's show()
    basePtr->show();

    // Calls Base class's display() (No polymorphism here)
    basePtr->display();

    return 0;
}