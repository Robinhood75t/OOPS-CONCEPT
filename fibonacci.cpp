#include<iostream>
using namespace std;
int main()
{
    int n;
    cout<<"enter the number till you want to print fibonacci series : ";
    cin>>n;

    int nextterm;
    int term1 = 0;
    int term2 = 1;
    for(int i=0;i<=n;i++)
    {
        
        cout<<term1<<endl;
        nextterm = term1+term2;
        term1 = term2;
        term2 = nextterm;

    }
    return 0;
}