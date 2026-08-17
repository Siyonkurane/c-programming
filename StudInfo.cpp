#include <iostream>
using namespace std;

class Student
{
    string name;
    int rollno;
    float marks;

public:
    void accept()
    {
        cout << "Enter Student Name: ";
        cin >> name;

        cout << "Enter Roll Number: ";
        cin >> rollno;

        cout << "Enter Marks: ";
        cin >> marks;
    }

    void display()
    {
        cout << " Student's Info :-" << endl;
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks: " << marks << endl;
    }
};

int main()
{
    Student s;

    s.accept();
    s.display();

    return 0;
}