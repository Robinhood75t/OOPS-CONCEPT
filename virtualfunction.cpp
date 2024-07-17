#include<iostream>
using namespace std;
class base{
    public:
    virtual void display()
    {
        cout<<"display"<<endl;
    }
    void show()
    {
        cout<<"show base ";
    }
};
class derived:public base{
    public:
    void display()
    {
        cout<<"display"<<endl;
    }
    void show()
    {
        cout<<"show base ";
    }
};
int main()
{
    base b;
    derived d;
    base* ptr;
    ptr = &b;
    ptr -> display();
    ptr -> show();
    ptr -> display();
    ptr -> show();
    return 0;
}