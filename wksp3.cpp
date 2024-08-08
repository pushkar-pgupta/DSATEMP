#include<iostream>
using namespace std;

int main()
{

    int a[][5]={{1,2,3,4,5},{6,7,8,9,10}};
    cout<<*(a)<<endl;
    cout<<&a[0][0]<<endl;
    cout<<**a<<endl;
    cout<<a[0][0]<<endl;
    cout<<(*(a)+1)<<endl;
    cout<<&a[0][1]<<endl;
    cout<<*(*(a)+1)<<endl;
    cout<<a[0][1]<<endl;
   
    // int a=56;
    // int *ptr,**d_ptr;
    // ptr=&a;
    // d_ptr=&ptr;
    // cout<<d_ptr<<endl;
    // cout<<&ptr<<endl;
    // cout<<*d_ptr<<endl;
    // cout<<&a<<endl;
    // cout<<**d_ptr<<endl;
    // cout<<ptr<<endl;


    // int a[]={1,2,3,4,5};
    // cout<<a;
    // cout<<&a[0]<<endl;
    // cout<<&a;
    // cout<<*a;
    // cout<<a[0];
    return 0;
}