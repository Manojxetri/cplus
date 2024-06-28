#include <iostream>

using namespace std;
class Rectangle
{
        private:
        int length,breadth;
        public:
        Rectangle();
        Rectangle(int,int);
        Rectangle(Rectangle &);
        void showData();
        int area();
        int perimeter();
};
Rectangle::Rectangle()
{
     length=0;
     breadth=0;
}
Rectangle::Rectangle(int l,int b)
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
Rectangle::Rectangle(Rectangle &a)
{
     length=a.length;
     breadth=a.breadth;
}
int main()
{
     Rectangle book,board(2,3),desk(3,2),notebook(desk),plate=board;
     //using of setdata
\
      //passing the value to show data
      book.showData();
      board.showData();
      desk.showData();
      notebook.showData();
      plate.showData();

      //calculating the area and perimeter
       cout <<"area of copy :" <<book.area() <<endl;
    cout <<"area of board:" <<board.area() <<endl;
    cout <<"area of desk:" <<desk.area() <<endl;
    cout <<"area of notebook:" <<notebook.area() <<endl;
    cout <<"area of plate:" <<plate.area() <<endl;


    cout <<"perimeter of copy :" <<book.perimeter() <<endl;
    cout <<"perimeter of board:" <<board.perimeter() <<endl;
    cout  <<"perimeter of desk:" <<desk.perimeter() <<endl;
    cout <<"perimeter of notebook:" <<notebook.perimeter() <<endl;
    cout <<"perimeter of plate"

      return 0;

}
