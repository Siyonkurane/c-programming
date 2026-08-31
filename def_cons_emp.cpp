#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;
    float salary;

public:
    
    Employee()
    {
        cout<<"Enter employee name: ";
        cin>>name;
        cout<<"Enter employee id: ";
        cin>>id;
        cout<<"Enter salary of employee: ";
        cin>>salary;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    Employee e;   

    e.display();

    return 0;
}