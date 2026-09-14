
#include <iostream>
using namespace std;

class Car
{
    int carId;
    float price;
    int quantity;

    // Nested class
    class Model
    {
        string modelName;

    public:

        // Default Constructor
        Model()
        {
            modelName = "";
        }

        // Parameterized Constructor
        Model(string name)
        {
            modelName = name;
        }

        // Copy Constructor
        Model(Model &m)
        {
            modelName = m.modelName;
        }

        void input()
        {
            cout << "Enter Model Name: ";
            getline(cin, modelName);
        }

        void display()
        {
            cout << "Model Name = " << modelName << endl;
        }
    };

    Model model;

public:

    // 1. Default Constructor
    Car() : model()
    {
        carId = 0;
        price = 0;
        quantity = 0;
    }

    // 2. Parameterized Constructor
    Car(int id, string name, float p, int q)
        : model(name)
    {
        carId = id;
        price = p;
        quantity = q;
    }

    // 3. Copy Constructor
    Car(Car &c) : model(c.model)
    {
        carId = c.carId;
        price = c.price;
        quantity = c.quantity;
    }

    void input()
    {
        cout << "Enter Car ID: ";
        cin >> carId;

        cin.ignore();

        model.input();

        cout << "Enter Price: ";
        cin >> price;

        cout << "Enter Quantity: ";
        cin >> quantity;
    }

    void display()
    {
        cout << "Car ID = " << carId << endl;
        model.display();
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
    Car c1;

    cout << "Using Default Constructor:" << endl;
    c1.input();
    c1.display();

    // Input for Parameterized Constructor
    cout << "\nEnter Car ID: ";
    cin >> id;

    cin.ignore();

    cout << "Enter Model Name: ";
    getline(cin, name);

    cout << "Enter Price: ";
    cin >> price;

    cout << "Enter Quantity: ";
    cin >> quantity;

    // Parameterized Constructor
    Car c2(id, name, price, quantity);

    cout << "\nUsing Parameterized Constructor:" << endl;
    c2.display();

    // Copy Constructor
    Car c3(c2);

    cout << "\nUsing Copy Constructor:" << endl;
    c3.display();

    return 0;
}
