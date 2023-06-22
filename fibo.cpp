#include<iostream>
using namespace std;
int main()
{
    int i,n;
    int t1=0,t2=1;
    int nexttime=t1+t2;
    cout<<"Enter the value : ";
    cin>>n;
    cout<<"value : "<<t1<<t2;
    for(i=3;i<=n;i++)
    {
        cout<<","<<nexttime;
        t1=t2;
        t2=nexttime;
        nexttime=t1+t2;
    }
}