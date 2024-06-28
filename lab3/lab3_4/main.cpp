#include <iostream>

using namespace std;
class Test
{
      private:
      int x,y;
      public:
     // int y;
      void getData()
      {
           cout<<"enter x and y" <<endl;
           cin>>x>>y;
      }
};
int main()
{
    Test t;
    t.getData();
    cout <<"enter the value of x" <<endl;
    cin>>t.x;//generates error
    cout <<"enter value of y" <<endl;
    cin>>t.y;//no error
    return 0;
}
