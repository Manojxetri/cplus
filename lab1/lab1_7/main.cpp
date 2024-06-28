/*program to check even or odd using the ternary operator*/
#include<iostream>
using namespace std;

int main()
{
    int num;
    cout <<"enter a number to check even or odd" <<endl;
    cin >> num;/*entering a number to for test*/
    string test = (num%2 ==0)?"Even":"Odd";/*using of ternary operator :(test conditon)?"true":"false";*/
    cout <<test <<endl;/*displaying the result of ternary operator*/
    return 0;
}
