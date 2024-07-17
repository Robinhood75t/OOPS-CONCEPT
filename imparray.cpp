#include<iostream>
using namespace std;
class array{
    public:
    int *arr;
    int size;

    array(int n)
    {
        size = n;
        arr = new int[size];
    }

    void input(){
        cout<<"enter the elements of array: ";
        for(int i = 0;i<size;i++)
        {
            cin>>arr[i];
        }
    }
    void print()
    {
        cout<<"array elements are : ";
        for(int i = 0; i<size ;i++)
        {
            cout<<arr[i]<<" ";
        }
    }
};
int main()
{
    int size;
    cout<<"enter the size of the array : ";
    cin>>size;
    array arr(size);
    arr.input();
    arr.print();
    return 0;
}