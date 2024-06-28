/*program to calculate area of circle using cmath library function*/
#include<iostream>
using namespace std;
#include<cmath>/* using of cmath library function*/
#define pi 3.14/*defining the value of pi*/
int main()
{
       float r;
       cout <<"enter the radius of the circle: " <<endl;
       cin >>r;
       float area;
       area=pi*r*r;/*calculating the area of the circle*/
       cout <<"area of circle is:" <<area <<endl;
       return 0;
 }
