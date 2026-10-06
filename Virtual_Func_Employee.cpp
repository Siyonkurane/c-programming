#include <iostream>
using namespace std;

class Employee
{
public:
    virtual void salary()
    {
        cout << "Employee Salary" << endl;
    }
};

class Manager : public Employee
{
public:
    void salary() override
    {
        cout << "Manager Salary = Rs. 80000" << endl;
    }
};

class Developer : public Employee
{
public:
    void salary() override
    {
        cout << "Developer Salary = Rs. 60000" << endl;
    }
};

int main()
{
    Manager m;
    Developer d;

    m.salary();
    d.salary();

    return 0;
}