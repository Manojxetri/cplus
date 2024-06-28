#include<iostream>
using namespace std;
int main()
{
    int n=4,k=2;
    cout << n <<endl;
    //prefix increment
    //n=n+1
    //value of variable is incremented by 1 and then value is used in the statement
    cout <<++n <<endl;
    cout <<n <<endl;
    //Postfix increment
    //value of variable is used in statement first and then value of variable is incremented
    //in next line the value of variable is incremented by 1
    cout <<n++ <<endl;
    cout <<n <<endl;
    cout <<--n <<endl;
    cout <<n-- <<endl;
    cout <<n <<endl;
    cout << n+k <<endl;
    cout <<n <<endl;
    cout <<k <<endl;
    cout <<n <<k <<endl;
    cout <<n <<endl;
    cout <<" " <<n <<endl;
    cout <<"n" <<endl;
    cout <<"\n" <<endl;
    cout <<"n*n=";//CAREFUL!
    cout <<n*n <<endl;
    cout <<'n' <<endl;
    return 0;
}
