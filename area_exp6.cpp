#include <iostream>
using namespace std;

class Area
{
public:
   // Area of square
   int area(int side)
   {
    return side * side;
   }

   //area of rectangle
   int area(int length, int breadth)
   {
    return length * breadth;
   }

   //area of triangle
   int area(float base, float height)
   {
    return 0.5 * base * height;
   }
};

int main()
{
    Area a;
    
    int side, length, breadth;
    float base, height;
    
    cout << "Enter side of a square: ";
    cin >> side;

    cout << "Area of square: " << a.area(side) << endl;

    cout << endl << "Enter length and Breadth of rectangle: ";
    cin >> length >> breadth;

    cout << "Area of rectangle: " << a.area(length, breadth) << endl;

    cout << "Base and Height of triangle: ";
    cin >> base >> height;

    cout << "Area of triangle: " << a.area(base, height) << endl;

    return 0;

}