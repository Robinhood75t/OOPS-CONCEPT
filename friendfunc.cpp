#include<iostream>
using namespace std;
class complex{
    private:
    int real;
    int imag;

    public:
    
    complex(int r,int i)
    {
        real = r;
        imag = i;
    }

    friend void display(complex);
};
void display(complex c)
{
    cout<<" complex number : "<<c.real<<"+"<<c.imag<<"i"<<endl;
}
int main()
{
    complex c(3,4);
    display(c);
    return 0;
}