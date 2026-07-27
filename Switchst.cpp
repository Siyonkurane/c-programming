#include<iostream>
using namespace std;

int main()
{
    int a,b,choice;

    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;

    cout<<"1. Addition"<<endl;
    cout<<"2. Substraction"<<endl;
    cout<<"3. Multiplication"<<endl;
    cout<<"4. Division"<<endl;
    
    cout<<"Enter operation number:"<<endl;
    cin>>choice;
    switch(choice)
    {
        case 1:
          cout<<"Addition = "<<a+b;
          break;
        case 2:
          cout<<"Substraction = "<<a-b;
          break;
        case 3:
          cout<<"Multiplication = "<<a*b;
          break;
        case 4:
          cout<<"Division = "<<a/b;
          break;
    }
    return 0;
}