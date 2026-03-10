#include <iostream>
using namespace std;

class Mobile
{
private:
    string brand;
    float price;
    int storage;

public:

    
    Mobile(string b)
    {
        brand = b;
        price = 0;
        storage = 0;
    }


    Mobile(string b, float p)
    {
        brand = b;
        price = p;
        storage = 0;
    }

    
    Mobile(string b, float p, int s)
    {
        brand = b;
        price = p;
        storage = s;
    }

    void display()
    {
        cout << "Brand: " << brand << endl;
        cout << "Price: " << price << endl;
        cout << "Storage: " << storage << " GB" << endl;
        cout << "----------------------" << endl;
    }
};

int main()
{
    
    Mobile m1("Apple");

    
    Mobile m2("Samsung", 50000);

    
    Mobile m3("OnePlus", 45000, 128);

    
    m1.display();
    m2.display();
    m3.display();

    return 0;
}