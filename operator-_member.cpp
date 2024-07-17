#include<iostream>
using namespace std;
class complex{
    private:
    float real;
    float imag;

    public:

    complex(float r = 0.0 , float i = 0.0)
    {
        real = r;
        imag = i;
    }

    complex operator-(complex& c){
        return complex(real + c.real , imag + c.imag);
    }
    void display()
    {
        cout<<real<<" + "<<imag<<"i"<<endl;
    }
};
int main()
{
    complex c1(3.0,4.0);
    complex c2(1.5,2.5);

    complex c3 = c1-c2;

    c3.display();
    return 0;
}