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

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }
};

int main()
{
    Employee e("Siyon", 101, 50000);

    e.display();

    return 0;
}