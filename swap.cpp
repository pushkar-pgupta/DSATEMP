#include<iostream>
using namespace std;
void swap(int x,int y)
{
    int c;
    c=y;
    y=x;
    x=c;
}
int main()
{
    int a,b,c;
    cout<<"Enter the numbers";
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b;

    return 0;
}