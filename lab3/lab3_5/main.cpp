#include <iostream>
using namespace std;

class Item {
    int code, price;

public:
    // Default Constructor
    Item() {
        code = 0;
        price = 0;
    }

    // Parameterized Constructor
    Item(int c, int p) {
        code = c;
        price = p;
    }

    // Copy Constructor
    Item(const Item &x) {
        code = x.code;
        price = x.price;
    }

    // Destructor
    ~Item() {
        cout << "Function is executed automatically just before the lifetime of an object finishes" << endl;
        cout << "Memory is deallocated!!" << endl;
    }

    // Display function
    void display() {
        cout << "Code = " << code << endl;
        cout << "Price = " << price << endl << endl;
    }
};

int main() {
    // Default Constructor
    Item I1;
    cout << "Item I1 (Default Constructor):" << endl;
    I1.display();

    // Parameterized Constructor
    Item I2(100, 200);
    cout << "Item I2 (Parameterized Constructor):" << endl;
    I2.display();

    // Copy Constructor
    Item I3(I2);
    cout << "Item I3 (Copy Constructor):" << endl;
    I3.display();

    return 0;
}
