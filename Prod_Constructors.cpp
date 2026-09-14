
#include <iostream>
using namespace std;

class Product
{
    int productId;
    string productName;
    float price;
    int quantity;

public:

    // 1. Default Constructor
    Product()
    {
        productId = 0;
        productName = "";
        price = 0;
        quantity = 0;
    }

    // 2. Parameterized Constructor
    Product(int id, string name, float p, int q)
    {
        productId = id;
        productName = name;
        price = p;
        quantity = q;
    }

    // 3. Copy Constructor
    Product(Product &p)
    {
        productId = p.productId;
        productName = p.productName;
        price = p.price;
        quantity = p.quantity;
    }

    // Input function
    void input()
    {
        cout << "Enter Product ID: ";
        cin >> productId;

        cin.ignore();

        cout << "Enter Product Name: ";
        getline(cin, productName);

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "Product ID = " << productId << endl;
        cout << "Product Name = " << productName << endl;
        cout << "Price = " << price << endl;
        cout << "Quantity = " << quantity << endl;
        cout << "Total = " << price * quantity << endl;
    }
};

int main()
{
    int id, quantity;
    string name;
    float price;

    // Default Constructor
    Product p1;

    cout << "Using Default Constructor:" << endl;
    p1.input();
    p1.display();

    // Input for Parameterized Constructor
    cout << "\nEnter Product ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Product Name: ";
    getline(cin, name);

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Quantity: ";
    cin >> quantity;

    // Parameterized Constructor
    Product p2(id, name, price, quantity);

    cout << "\nUsing Parameterized Constructor:" << endl;
    p2.display();

    // Copy Constructor
    Product p3(p2);

    cout << "\nUsing Copy Constructor:" << endl;
    p3.display();

    return 0;
}
 
