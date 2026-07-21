#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter the number: ";
    cin>>a;
    cout<<"Enter the number: ";
    cin>>b;
    cout<<"Enter the number: ";
    cin>>c;
    if (a>b && a>c)
    {
        cout<<a<<" is Greatest";
    }
    else if (b>c)
    {
        cout<<b<<" is Greatest";
    }
    else{
        cout<<c<<" is Greatest";
    }
}