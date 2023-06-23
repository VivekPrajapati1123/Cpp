#include<iostream>
using namespace std;
int main()
{
    float basic,gross,hra,da;
    cout<<"Employee basic salary:";
    cin>>basic;
    if(basic<=5000)

    {
        da=basic*0.2;
        hra=basic*0.8;
    }
    else if(basic<=5000&&basic<=10000)
    {
        da=basic*0.3;
        hra=basic*0.12;
    }
    else if(basic<=10000&&basic<=15000)
    {
        da=basic*0.4;
        hra=basic*0.15; 
    }
    else if(basic<=15000)
    {
        da=basic*0.5;
        hra=basic*0.20; 
    }
    gross=basic+da+hra;
    cout<<"gross salary"<<gross;
    
}