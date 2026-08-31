#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;
    float salary;

public:
    
    Employee(string n, int i, float s)
    {
        name = n;
        id = i;
        salary = s;
    }

    
    Employee(Employee &e)
    {
        name = e.name;
        id = e.id;
        salary = e.salary;
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
    Employee e1("Siyon kurane", 6108, 500000);

    
    Employee e2(e1);

    cout << "Employee 1:" << endl;
    e1.display();

    cout <<endl<<"Employee 2 (Copied of 1):" << endl;
    e2.display();

    return 0;
}