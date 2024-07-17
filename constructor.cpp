#include<iostream>
using namespace std;
class student{
    public:
    string name;
    int roll;
    //default constructor
    student()
    {
        name = "robin";
        roll = 22;
    }
    //parameterised constructor
    student(string n,int a)
    {
        name = n;
        roll = a;
    }
    //copy constuctor
    student(student& s3){
        name = s3.name;
        roll = s3.roll;
    }
};
int main()
{
    student s1;
    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;
    student s2("vikas",55);
    cout<<s2.name<<endl;
    cout<<s2.roll<<endl;
    student s3 = s1;
    cout<<s1.name<<endl;
    cout<<s1.roll<<endl;
    return 0;
}