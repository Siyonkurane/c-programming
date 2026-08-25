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
        name = "Siyon";
        id = 101;
        salary = 50000;
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