#include<iostream>
using namespace std;
int main()
{
    char ch,lwr,upr;
    cout<<"Enter the ch : ";
    cin>>ch;
    lwr=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
    upr=(ch==ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
    if(lwr||upr)
    {
        cout<<"This is vowel :"<<ch;
    }
    else
    {
        cout<<"This is consotant :"<<ch;
    }
}