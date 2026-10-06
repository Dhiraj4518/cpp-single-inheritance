#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rollNo;

    void getStudentDetails()
    {
        cout << "Enter student name: ";
        cin >> name;

        cout << "Enter roll number: ";
        cin >> rollNo;
    }
};

class Result : public Student
{
public:
    float marks;

    void getResult()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << "\n--- Student Details ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll No: " << rollNo << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r;

    r.getStudentDetails();
    r.getResult();
    r.display();

    return 0;
}