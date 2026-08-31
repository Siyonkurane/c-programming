#include <iostream>
using namespace std;

class Employee
{
    string name;
    int id;
    float salary;

    static int count;

public:
    
    Employee(string n, int i, float s)
    {
        name = n;
        id = i;
        salary = s;
        count++;
    }

    
    Employee(Employee &e)
    {
        name = e.name;
        id = e.id;
        salary = e.salary;
        count++;
    }

    void display()
    {
        cout << "Employee Name: " << name << endl;
        cout << "Employee ID: " << id << endl;
        cout << "Employee Salary: " << salary << endl;
    }

    static void displayCount()
    {
        cout << "Total Employees: " << count << endl;
    }
};

// Definition of static data member
int Employee::count = 0;

int main()
{
    Employee e1("Siyon kurane", 6108, 500000);

    
    Employee e2(e1);

    cout << "Employee 1:" << endl;
    e1.display();

    cout <<endl<<"Employee 2 (Copied):" << endl;
    e2.display();

    cout << endl;
    Employee::displayCount();

    return 0;
}