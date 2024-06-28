// c++ program that demostrates defult arguments.
#include <iostream>
using namespace std;
int sum(int x, int y, int z = 1, int w = 1)

{
    return (x + y + z + w);
}
int main()
{


    cout << "The sum is: " << sum(5, 5);
    cout << "\nThe sum is: " << sum(7,7);
    cout << "\nThe sum is: " << sum(5,10,2,3);

    return 0;
}
