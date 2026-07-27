#include<iostream>
using namespace std;

int square(int a)
{
    return a*a;
}
int main()
{
    int num;
    
    cout<<"Enter a number: ";
    cin>>num;

    cout<<"Square of the number = "<<square(num);
}