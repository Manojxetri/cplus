#include <iostream>

using namespace std;
class Rectangle
{
    private:
    int length,breadth;
    public:
    Rectangle()
    {
       length=0;
       breadth=0;
    }
    Rectangle(int l,int b)
    {
       length=l;
       breadth=b;
    }
    int area()
    {
        return length*breadth;
    }
};

int main()
{
    Rectangle r1(3,4);
    Rectangle *r2=new Rectangle(5,7);
    cout <<"area of r1 is" <<r1.area() <<endl;
   // cout <<"area of r2 is " <<r3.area() <<endl;
    cout <<"area of r3 is" <<r2->area() <<endl;

    return 0;
}
