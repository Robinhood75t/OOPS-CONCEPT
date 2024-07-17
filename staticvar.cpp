#include<iostream>
using namespace std;
class myclass{
    public:
    static int counter;

    myclass(){
        counter++;
    }
    
    static int displaycounter()
    {
        cout<<"number of objects are : "<<counter;
    }
};
int myclass::counter = 0;
int main()
{
    myclass obj1;
    myclass obj2;
    myclass obj3;

    myclass::displaycounter();
    
    return 0;
}
