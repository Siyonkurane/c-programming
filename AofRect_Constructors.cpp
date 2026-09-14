#include <iostream>
using namespace std;

class Rectangle
{
    int length, breadth;

public:

    // 1. Default Constructor
    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    // 2. Parameterized Constructor
    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

    // 3. Copy Constructor
    Rectangle(Rectangle &r)
    {
        length = r.length;
        breadth = r.breadth;
    }

    void input()
    {
        cout << "Enter length: ";
        cin >> length;

        cout << "Enter breadth: ";
        cin >> breadth;
    }

    void display()
    {
        cout << "Length = " << length << endl;
        cout << "Breadth = " << breadth << endl;
        cout << "Area = " << length * breadth << endl;
    }
};

int main()
{
    int length, breadth;

    // Default constructor
    Rectangle r1;

    cout << "Using Default Constructor:" << endl;
    r1.input();
    r1.display();

    // Input for parameterized constructor
    cout << "\nEnter length for Parameterized Constructor: ";
    cin >> length;

    cout << "Enter breadth for Parameterized Constructor: ";
    cin >> breadth;

    // Parameterized constructor
    Rectangle r2(length, breadth);

    cout << "\nUsing Parameterized Constructor:" << endl;
    r2.display();

    // Copy constructor
    Rectangle r3(r2);

    cout << "\nUsing Copy Constructor:" << endl;
    r3.display();

    return 0;
}