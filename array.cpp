#include<iostream>
using namespace std;

int main()
{
    int a[8];
    cout<<"Enter the value"<<endl;
    for(int i=0;i<8;i++)
    {
        cin>>a[i];
    }
    cout<<endl<<"Array is :"<<endl;
    for(int i=0;i<8;i++)
    {
        cout<<a[i]<<endl;
    }
    return 0;
}