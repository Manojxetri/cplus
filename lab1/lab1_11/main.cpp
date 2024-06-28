#include <iostream>

using namespace std;

namespace first {
    int val = 500;
    double a = 10.001;
}

namespace second {
    int val = 600;
    double a = 12.001;
}

int val = 200;

int main() {
    int val = 100;

    // Accessing the local variable `val` inside main
    cout << "The value of val is " << val << endl;

    // Accessing the global variable `val`
    cout << "The value of val is " << first::val << endl;

    // Accessing the `val` in the first namespace
    cout << "The value of val is " << second::val << endl;

    // Accessing the `a` in the first namespace
    cout << "The value of val is " << ::val << endl;

    // Accessing the `val` in the second namespace
    cout << "The value of val is " << first::a << endl;

    // Accessing the `a` in the second namespace
    cout << "The value of val is " << second::a << endl;

    return 0;
}
