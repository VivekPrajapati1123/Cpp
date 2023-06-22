#include<iostream>
using namespace std;
int main()
{
    int a;
    cout<<"Enter the year : ",a;
    cin>>a;
    if(a%4==0)
    {
        cout<<"leap year ",a;
    }
    else
    {
        cout<<"Not leap year ",a;
    }
}