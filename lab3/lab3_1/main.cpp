#include <iostream>

using namespace std;
class Rectangle
{
        private:
        int length,breadth;
        public:
        void setData(int l,int b)
        {
             length=l;
             breadth=b;
        }
        void showData()
        {
             cout <<"length:" <<length <<endl;
             cout <<"breadth:" <<breadth <<endl;
        }
        int area()
        {
             return length*breadth;
        }
        int perimeter()
        {
           return 2*(length+breadth);
        }

};
int main()
{
    Rectangle book,board,desk;
    book.setData(2,3);
    board.setData(5,3);
    desk.setData(10,2);

    //showimg data using show data
    book.showData();
    board.showData();
    desk.showData();

 //printing the area and perimeter
    cout <<"area of copy :" <<book.area() <<endl;
    cout <<"area of board:" <<board.area() <<endl;
    cout <<"area of desk:" <<desk.area() <<endl;

    cout <<"perimeter of copy :" <<book.perimeter() <<endl;
    cout <<"perimeter of board:" <<board.perimeter() <<endl;
    cout  <<"perimeter of desk:" <<desk.perimeter() <<endl;
    return 0;
}



