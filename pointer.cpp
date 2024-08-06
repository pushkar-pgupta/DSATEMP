#include<iostream>
using namespace std;
void swap(int* p,int* q)
{
    int c;
    c=*p;
    *p=*q;
    *q=c;
    cout<<*p<<" "<<*q;
}
int main()
{
    int a,b;
    cout<<"Enter the numbers ";
    cin>>a>>b;
    swap(&a,&b);
    /*int x=9;
    int* p=&x;
    cout<<x<<endl<<*p;
    *p=8;
    cout<<endl<<x;
    return 0; */

}