#include <iostream>

using namespace std;
class Rectangle
{
        private:
        int length,breadth;
        public:
        void setData(int,int);
        void showData();
        int area();
        int perimeter();
};
void Rectangle ::setData(int l,int b)
{
      length=l;
      breadth=b;
}
void Rectangle ::showData()
{
        cout <<"length:" <<length <<endl;
        cout <<"breadth:" <<breadth <<endl;
}
int Rectangle ::area()
{
     return length*breadth;
}
int Rectangle ::perimeter()
{
     return 2*(length+breadth);
}

int main()
{
     Rectangle book,board,desk;
     //using of setdata
     book.setData(2,3);
     board.setData(3,2);
     desk.setData(5,4);

      //passing the value to show data
      book.showData();
      board.showData();
      desk.showData();

      //calculating the area and perimeter
       cout <<"area of copy :" <<book.area() <<endl;
    cout <<"area of board:" <<board.area() <<endl;
    cout <<"area of desk:" <<desk.area() <<endl;

    cout <<"perimeter of copy :" <<book.perimeter() <<endl;
    cout <<"perimeter of board:" <<board.perimeter() <<endl;
    cout  <<"perimeter of desk:" <<desk.perimeter() <<endl;
      return 0;

}
