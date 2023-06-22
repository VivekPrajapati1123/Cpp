#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d,p;
    float x;
    cout<<"Enter a : ";
    cin>>a;
    cout<<"Enter b : ";
    cin>>b;
    cout<<"Enter c : ";
    cin>>c;
    cout<<"\nMaths\tSci\tEng\tTotal\tPer";
    d=a+b+c;
    p=d/3;
    cout<<"\n"<<a<<b<<c<<d<<p;
}