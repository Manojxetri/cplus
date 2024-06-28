#include <iostream>

using namespace std;

class Distance{
            private:
            int inch,foot;
            public:
            Distance(){};
            Distance(int i,int f){
            inch=i;
            foot=f;
            }
            void addDistance(Distance d1,Distance d2){
            foot=d1.foot+d2.foot;
            inch=d1.inch+d2.inch;
            foot=(foot+inch)/12;
            inch=inch%12;
            }

};
int main()
{

    return 0;
}
