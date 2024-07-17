#include<iostream>
using namespace std;
class student{
    public:

    string name;
    int age;
    int marks;

    void setdata()
    {
        cout<<"enter the name : ";
        cin>>name;
        cout<<"enter the age : ";
        cin>>age;
        cout<<"enter the marks : ";
        cin>>marks;
    }

    void printdata()
    {
        cout<<"student name "<<name<<endl;
        cout<<"age : "<<age<<endl;
        cout<<"marks : "<<marks<<endl;
    }
};
int main()
{
    student stud[10];
    for(int i = 0 ;i < 10 ;i++)
    {
        stud[i].setdata();
    }
    stud[9].printdata();
    return 0;
}