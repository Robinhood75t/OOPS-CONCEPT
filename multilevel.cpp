//multilevel inheritance
#include<iostream>
using namespace std;
class parent{
    public:
    parent(){
        cout<<"parent class"<<endl;
    }
};
class child1:public parent{
    public:
    child1()
    {
        cout<<"child1 class"<<endl;
    }
};
class child2:public child1{
    public:
    child2()
    {
        cout<<"child2 class"<<endl;
    }
};
int main()
{
    child2 c;
    return 0;
}