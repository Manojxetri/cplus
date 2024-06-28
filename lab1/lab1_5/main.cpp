/*program to swap two numbers*/
#include<iostream>
using namespace std;
/*using of swap function to swap two numbers*/
int swap(int a,int b)
{
      int temp;
      temp=a;
      a=b;
      b=temp;
      cout <<"\n";
      cout <<"After swapping numbers are:" <<a <<" " <<b <<endl;;
      return 0;
}
int main()
{
    int x,y;
    cout <<"enter two numbers:" ;
    cin >>x >>y;
    swap(x,y);/*passing the value to the swap function*/
    return 0;

}

