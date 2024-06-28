#include <iostream>
using namespace std;

class Student {
private:
    char name[30];
    int rollno;
    int total;
    float perc;

public:
    // member function to get student details
    void getDetails();
    // member function to print student's details
    void showDetails();
};

// use of function outside class to get student details
void Student::getDetails() {
    cout << "Enter name: ";
   // cin.ignore(); // Ignore any newline characters left in the buffer
    cin.getline(name, 30);
    cout << "Enter roll number: ";
    cin >> rollno;
    cout << "Enter total marks out of 500: ";
    cin >> total;
    perc = (total * 100.0) /500;
}

// use of function outside the class to show the student details
void Student::showDetails() {

    cout << "Name: " << name << ",";
    cout << "Roll Number: " << rollno <<",";
    cout << "Total Marks: " << total <<",";
    cout << "Percentage: " << perc ;
}

int main() {
    Student s1;
    s1.getDetails();
    s1.showDetails();
    return 0;
}
