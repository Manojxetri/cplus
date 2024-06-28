//program to demonstrate the use of static
#include <iostream>
using namespace std;
class Student{
         private:
         int rollno;
         char name[20];
         //use of static inorder to change the value
         static int count_student;
         public:
         Student(){}
         void getData(){
              cout << "enter roll no and name" <<endl;
              cin >>rollno >>name;
              count_student++;
         }
         //static should be used in function also
         static void displayCount(){
             cout <<"count " <<count_student <<endl;
         }

};
//static variable should be decalare in this way
int Student::count_student=0;

int main()
{
    Student s1,s2,s3;
    s1.getData();
    s1.displayCount();
    s2.getData();
    s2.displayCount();
    s3.getData();
    s3.displayCount();

    return 0;
}
