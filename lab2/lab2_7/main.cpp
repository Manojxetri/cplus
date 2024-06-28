#include <iostream>
using namespace std;

// Function prototype
void modify(int);

int main()
{
    int num = 5;
    cout << "Before modify function: " << num << endl;
    modify(num);
    cout << "After modify function: " << num << endl;
    return 0;
}

// Function to modify the value
void modify(int value)
{
    value = 10;
    cout << "Inside modify function: " << value << endl;
}
