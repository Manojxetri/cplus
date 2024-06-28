/*#include <iostream>
using namespace std;

// Function prototype
void modify(int&);

int main() {
    int num = 5;
    cout << "Before modify function: " << num << endl;
    modify(num);
    cout << "After modify function: " << num << endl;
    return 0;
}

// Function to modify the value
void modify(int& value) {
    value = 10;
    cout << "Inside modify function: " << value << endl;
}

#include <iostream>
using namespace std;

void swap(int* a, int* b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 5;
    int y = 10;

    cout << "Before swapping: x = " << x << ", y = " << y << endl;

    swap(&x, &y);

    cout << "After swapping: x = " << x << ", y = " << y << endl;

    return 0;
}
*/
// WAP in c++ that demonstrates return by value.
#include <iostream>
using namespace std;
float calculate_amount(float,float,float);
int main()
{
    float p,t,r,amount;
    cout<<"Enter the principal amount: ";
    cin>>p;
    cout<<"Enter the time period: ";
    cin>>t;
    cout<<"Enter the rate of interest: ";
    cin>>r;
    cout<<"The amount is: "<<calculate_amount(p,r,t)<<endl;
    return 0;
}
float calculate_amount(float p,float t,float r)
{
    return (p*t*r)/100;
}
