//#include <iostream>

//using namespace std;

//class Distance{
  //          private:
    //        int inch,foot;
      //      public:
        //    Distance(){};
          //  Distance(int i,int f){
            //inch=i;
            //foot=f;
            //}
            //void addDistance(Distance d1,Distance d2){
            //foot=d1.foot+d2.foot;
            //inch=d1.inch+d2.inch;
            //foot=(foot+inch)/12;
            //inch=inch%12;
            //}
            //void display()
            //{
              //cout <<"foot is" <<foot <<endl;
              //cout <<"inch is " <<inch <<endl;
            //}

//};
//int main()
//{
//
  //  Distance d1(5,4);
    //d1.display();
    //return 0;
//}



/*#include <iostream>

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
            Distance addDistance(Distance d1,Distance d2){
            foot=d1.foot+d2.foot;
            inch=d1.inch+d2.inch;
            foot=(foot+inch)/12;
            inch=inch%12;
            return Distance(foot,inch);
            }
            void display(){
               cout <<"foot:" <<foot <<"inch:" <<inch <<endl;
            }

};
int main()
{

    Distance d1(5,4),d2(10,4),d3;
    d3.addDistance(d1,d2);
    d3.display();
    return 0;
}*/

//using operator overloading

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
            Distance operator +(Distance d){
            Distance dist;
            dist.foot=foot+d.foot;
            dist.inch=inch+d.inch;
            dist.foot=(dist.foot+dist.inch)/12;
            dist.inch=dist.inch%12;
            return dist;
            }
            void display(){
               cout <<"foot:" <<foot <<"inch:" <<inch <<endl;
            }

};
int main()
{

    Distance d1(5,4),d2(10,4),d3;
    d3=d1+d2;
    d3.display();
    return 0;
}

