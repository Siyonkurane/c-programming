#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n,temp,rem,sum=0;

    cout<<"Enter a number: ";
    cin>>n;

    temp=n;

    while(n!=0)
    {
        rem=n%10;
        sum=sum + pow(rem,3);
        n=n/10;
    }
    if (temp==sum)
    {
        cout<<"It is an armstrong number";
    }
    else
    {
        cout<<"It is not a armstrong number";
    }

}
