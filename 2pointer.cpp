#include<iostream>
using namespace std;

int main()
{
    int arr[]={0, 1, 0, 0,1,0,1,1};
    int noz = 0;
    int no1 = 0;
    for(int i=0;i<8;i++)
    {
        if(arr[i]==0)
        noz++;
        else
        no1++;
    }

    for(int i=0;i<8;i++)
    {
        if(i<noz)
        arr[i]=0;
        else
        arr[i]=1;
        cout<<arr[i]<<endl;
    }

    return 0;
}