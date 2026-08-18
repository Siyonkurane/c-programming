#include <iostream>
using namespace std;

class Complex
{
    int re, im;

public:
    void accept()
    {
        cout << "Enter real part: ";
        cin >> re;

        cout << "Enter imaginary part: ";
        cin >> im;
    }

    Complex add(Complex c)
    {
        Complex res;

        res.re = re + c.re;
        res.im = im + c.im;

        return res;
    }

    Complex subtract(Complex c)
    {
        Complex res;

        res.re = re - c.re;
        res.im = im - c.im;

        return res;
    }

    void display()
    {
        cout << re << " + " << im << "i";
    }
};

int main()
{
    Complex c1, c2, c3, sum, diff;

    cout << "Enter the First Complex Number:" << endl;
    c1.accept();

    cout <<endl<< "Enter the Second Complex Number:" << endl;
    c2.accept();

    cout<<endl<<"Enter the Third Complex Number:"<<endl;
    c3.accept();

    sum = c1.add(c2);
    diff = c1.subtract(c2);
    cout<<"c1 + c2 :- ";
    sum.display();
    cout<<endl<<"c1 - c2 :- ";
    diff.display();

    sum = c1.add(c3);
    diff = c1.subtract(c3);
    cout<<endl<<"c1 + c3 :- ";
    sum.display();
    cout<<endl<<"c1 - c3 :- ";
    diff.display();


    sum = c2.add(c3);
    diff =c2.subtract(c3);
    cout<<endl<<"c2 + c3 :- ";
    sum.display();
    cout<<endl<<"c2 -c3 :- ";
    diff.display();

    
    return 0;
}