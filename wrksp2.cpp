#include<iostream>
#include<climits> //for INT_MAX AND INT_MIN GIVES AN GARGABE VALUE AS OUTPUT
#include<vector>
using namespace std;

int main()
{
    int i;
    int n;
    cout<<"Enter n ";
    cin>>n;
    vector<int>v;
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
    cout<<"\n";
    for(int i=0;i<n;i++)
    {
        cout<<v[i]<<endl;
    }
    // vector<int>v;
    // v.push_back(10);
    // cout<<v.capacity()<<endl;
    // v.push_back(20);
    // v.push_back(30);
    // v.push_back(40);
    //  cout<<v.capacity()<<endl;
    // v.push_back(50);
    // v.pop_back(); 
    // cout<<v.capacity()<<endl;
    // cout<<v.size();
    return 0;
   
}