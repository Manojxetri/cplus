#include <iostream>

using namespace std;

class Rectangle{
     private:
     int length,breadth;
     public:
     Rectangle(){};
     Rectangle(int l,int b);
    // void operator ++();
    void operator ++(int);
     void display();
};

Rectangle::Rectangle (int l,int b){
length=l;
breadth=b;
}
//void Rectangle::operator++(){
 //++length;
 //++breadth;
 //}
 //for postfix operator overlaoding
 void Rectangle::operator++(int){
 ++length;
 ++breadth;
 }
 void Rectangle::display(){
 cout <<"length:" <<" " <<length <<endl;
 cout <<"breadth:" <<" " <<breadth <<endl;
 }
int main()
{
    Rectangle r1(2,3);
    //++r1 this is prefix opertaor overloading;
    r1++;//this is postfix operator overloading
    r1.display();
    return 0;
}
