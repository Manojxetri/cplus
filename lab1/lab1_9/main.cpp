#include<iostream>
using namespace std;
int main()
{
      int n;

      cout <<(n=4) <<endl;//assigning the value 4 and prints 4
      cout <<(n==4) <<endl;//checks n==4 since 4==4 so returns 1
      cout << (n>3) <<endl;//checks if n>3 i.e 4>3 which is true so returns 1
      cout << (n<4) <<endl;//checks if n is less than 4 since 4 is not less so returns 0
      cout <<(n=0) <<endl;//now the value of n is assigned to 0 from 4
      cout <<(n==0) <<endl;//checks if n equals to 0 since 0 equals to 0 so return 1
      cout << (n>0) <<endl;//checks if n is greater than 0 since 0 is not so returns 0
      cout <<(n&&4) <<endl;//here 0 is false and 4 is true so it returns 0
      cout <<(n||4) <<endl;//here 0 is false and 4 is trure so by or it is true
      cout <<(!n) <<endl;//here the not operation of 0 is 1 so returns 1
      return 0;
}
