#include <iostream>

using namespace std;

class Distance{
     private:
     int feet,inch;
     public:
     Distance();
     Distance(int f,int i){
      feet=f;
      inch=i;
      }
      void addDistance(Distance d1,Distance d2){
     feet=d1.feet+d2.feet;
     inch=d1.inch+d2.inch;
     feet=feet+inch/12;
     inch=inch%12;
   }
   void display(){
      cout <<"feet:" <<feet <<endl;
      cout<<"inch:" <<inch <<endl;

      }
};

int main()
{


    return 0;
}
