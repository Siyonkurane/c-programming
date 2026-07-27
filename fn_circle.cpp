#include<iostream>
using namespace std;
#define pi 3.14

float area(float r)
{
    return pi*r*r;
}
float circumference(float r)
{
    return 2*pi*r;
}

int main()
{
    float radius;

    cout<<"Enter Radius : ";
    cin>>radius;

    cout<<"Area of circle = "<<area(radius)<<endl;
    cout<<"circumference of circle = "<<circumference(radius);

    return 0;
}