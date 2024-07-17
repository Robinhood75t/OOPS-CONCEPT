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

    friend complex operator+(const complex &c1,const complex &c2);

    void display(){
        cout<<real<<" + "<<imag<< "i"<<endl;
    }
};
complex operator+(const complex &c1,const complex &c2)
{
    complex temp;
    temp.real = c1.real + c2.real;
    temp.imag = c1.imag + c2.imag;
    return temp;
}
int main()
{
    complex c1(2.5,3.5);
    complex c2(2.4,3.4);
    complex c3;

    c3 = c1 + c2;

    cout<<"result = ";
    c3.display();
    return 0;
}