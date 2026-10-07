#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    
    void getName()
    {
        cout << "Enter student name: ";
        cin >> name;
    }
};

class Marks
{
public:
    int marks;
    
    void getMarks()
    {
        cout << "Enter marks: ";
        cin >> marks;
    }
};

class Result : public Student, public Marks
{
public:
    void display()
    {
        cout << "\n--- Student Result ---" << endl;
        cout << "Name: " << name << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Result r;

    r.getName();
    r.getMarks();
    r.display();

    return 0;
}