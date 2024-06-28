//program to take days and display years months and days
#include <iostream>

using namespace std;

int main()
{
    int n,year;
    cout <<"enter the number of days" <<endl;
    cin >>n;
    year=n/365;
    n=n%365;
    int month=n/30;
    n=n%30;
    int day=n;
    cout << year<<"year" <<" " <<month <<" "  <<"month" <<" "<<day <<"day" <<endl;
    return 0;
}
