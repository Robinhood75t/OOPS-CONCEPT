#include<iostream>
using namespace std;
inline int product(int a , int b)
{
    return a*b;
}
int main()
{
    int a; 
    int b;
    cout<<"enter the value of a and b : ";
    cin>>a>>b;
    cout<<"sum = "<<product(a,b);
    return 0;
}