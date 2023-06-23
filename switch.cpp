#include<iostream>
using namespace std;
int main()
{
    int a,b,ch;
    cout<<"Enter a and b:";
    cin>>a>>b;
    cout<<"1.Additition";
    cout<<"\n2.Multiplication";
    cout<<"\n3.subsraction";
    cout<<"\n4.Division";
    cout<<"\n\n Enter your choice:";
    cin>>ch;
    switch(ch)
    {
        case 1:
        cout<<"Additition of a and b is:"<<a+b;
        break;
        case 2:
        cout<<"Multiplication a and b is:"<<a*b;
        break;
        case 3:
        cout<<"Subsraction a and b is:"<<a-b;
        break;
        case 4:
        cout<<"Division a and b is:"<<a/b;
        break;
        Default:
        cout<<"wrong output..";
        break;
    }
}