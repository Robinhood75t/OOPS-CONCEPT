// how to use global variable using scope resolution operator

#include<iostream>
using namespace std;
int m = 10;
int main()
{
    int m = 20;
    {
        int m = 30;
        cout<<m<<endl;
        cout<<::m<<endl;
    }
    cout<<m<<endl;
    return 0;
}