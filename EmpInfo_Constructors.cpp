#include <iostream>
#include <string>
using namespace std;

class Employee
{
    int employeeId;
    string employeeName;
    float employeeSalary;

public:
    // 1. Default Constructor
    Employee()
    {
        employeeId = 0;
        employeeName = "Unknown";
        employeeSalary = 0;
    }

    // 2. Parameterized Constructor
    Employee(int id, string name, float salary)
    {
        employeeId = id;
        employeeName = name;
        employeeSalary = salary;
    }

    // 3. Copy Constructor
    Employee(const Employee &e)
    {
        employeeId = e.employeeId;
        employeeName = e.employeeName;
        employeeSalary = e.employeeSalary;
    }

    void display()
    {
        cout << "Employee ID: " << employeeId << endl;
        cout << "Employee Name: " << employeeName << endl;
        cout << "Employee Salary: " << employeeSalary << endl;
        cout << "------------------------" << endl;
    }
};

int main()
{
    // Default constructor
    Employee e1;
    e1.display();

    // Parameterized constructor
    Employee e2(101, "Rahul", 45000);
    e2.display();

    // Copy constructor
    Employee e3(e2);
    e3.display();

    return 0;
}