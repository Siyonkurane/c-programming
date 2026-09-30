#include <iostream>
using namespace std;

class Number
{
    int num;

public:
    void getData()
    {
        cout << "Enter a number: ";
        cin >> num;
    }

    void increment()
    {
        num = num + 1;
    }

    void display()
    {
        cout << "Number = " << num << endl;
    }
};

int main()
{
    Number n;

    n.getData();

    cout << endl <<"Before increment:" << endl;
    n.display();

    n.increment();

    cout << endl << "After increment:" << endl;
    n.display();

    return 0;
}