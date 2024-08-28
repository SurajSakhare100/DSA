#include <iostream>
#include <string>

using namespace std;

class Teacher
{
private:
    double salary; //data hiding
public:
    // Properties / Attributes
    string name;
    string dept;
    string subject;
    // non-parameterized
    Teacher(){
        salary=0.00;
    }
    //parameterized
    Teacher(string name,string dept,string subject,double salary){
        this->name=name;
        this->dept=dept;
        this->subject=subject;
        this->salary=salary;
    }
    Teacher(Teacher &orgObj){
        cout<<"copy constructor invoked";
        this->name=orgObj.name;
        this->dept=orgObj.dept;
        this->subject=orgObj.subject;
        this->salary=orgObj.salary;
    }

    // Methods / Member Functions
    void changeDept(string newDept)
    {
        dept = newDept;
    }
    void setSalary(double s)
    {
        salary = s;
    }
    double getSalary()
    {
        return salary;
    }

    void displayInfo()
    {
        cout << "Teacher Name: " << name << endl;
        cout << "Department: " << dept << endl;
        cout << "Subject: " << subject << endl;
        cout << "Salary: " << salary << endl;
    }
};

class Student
{
public:
    // Properties / Attributes
    string name;
    string rollno;
    int age;

    void displayInfo()
    {
        cout << "Student Name: " << name << endl;
        cout << "Roll No: " << rollno << endl;
        cout << "Age: " << age << endl;
    }
};

int main()
{
    // Creating and initializing a Teacher object
    Teacher t1("suraj","IT","AIML",24000);
    Teacher t2(t1); //custom copy constructor
    // Display initial teacher info
    // t1.displayInfo();

    // t1.setSalary(34000);
    // cout<<t1.getSalary();

    // Changing the department of the teacher
    // t1.changeDept("Physics");

    // Display updated teacher info
    // cout << "\nAfter changing department:" << endl;
    t2.displayInfo();

    // Creating and initializing a Student object
    // Student s1;
    // s1.name = "Alice Smith";
    // s1.rollno = "S12345";
    // s1.age = 20;

    // Display student info
    // cout << "\nStudent Information:" << endl;
    // s1.displayInfo();

    return 0;
}
