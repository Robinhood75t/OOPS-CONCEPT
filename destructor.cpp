#include<iostream>
using namespace std;
class myclass{
    public:

    myclass() {
        cout<<" constructor called"<<endl;
    }

    ~myclass()
    {
        cout<<"destructor called"<<endl;
    }
};
int main()
{
    myclass q;
    return 0;
}