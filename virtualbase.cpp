#include<iostream>
using namespace std;
class base{
    public:
    base()
    {
        cout<<"base"<<endl;
    }
};
class derived1:virtual public base{
    public:
    derived1()
    {
        cout<<"derived1"<<endl;
    }
};
class derived2:virtual public base{
    public:
    derived2()
    {
        cout<<"derived2"<<endl;
    }
};
class derived : public derived1,public derived2{
    public:
    derived()
    {
        cout<<"derived"<<endl;
    }
};
int main()
{
    derived d;
    
    return 0;
}