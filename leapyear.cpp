#include<iostream>
using namespace std;
int main()
{
    int year;
    cout<<"enter a year: ";
    cin>>year;
    if (year%4==0){
        cout<<"Leap year";
    }
    else{
        cout<<"not a leap year";
    }
}