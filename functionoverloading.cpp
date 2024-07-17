// function overloading
#include<iostream>
using namespace std;
int sum(int a,int b){
    return a+b;
}
int sum(int a,int b,int c)
{
    return  a+b+c;
}
int main()
{
    cout<<sum(4,4)<<endl;
    cout<<sum(4,4,4);
    return 0;
}