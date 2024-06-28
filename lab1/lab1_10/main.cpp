#include <iostream>
#include <iomanip> //IO Manipulators
using namespace std;
int main()
{
char pName[3][30]={"Dove Soap","Colgate","Vim"};
 int qty[3] ={5,10,15};
int i;
cout << setw(30) << "Product Name" << setw(20) << "Quantity" << endl;
for(i=0; i< 3; i++)
{
cout << setw(30) << pName[i] << setw(20) << qty[i] << endl;
}
return 0;
}
