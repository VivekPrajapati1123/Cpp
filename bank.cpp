#include<iostream>
using namespace std;
class bank
{
    int acno,balance,amt;
    char name[30];
    public:
    void setdata()
    {
        cout<<"enter the account number:";
        cin>>acno;
        cout<<"enter the name:";
        cin>>name;
        cout<<"enter the balance:";
        cin>>balance;
    }
    void showdata()
    {
        cout<<"account number:"<<acno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"balance:"<<balance<<endl;
    }
    void deposite()
    {
        cout<<"enter amount deposite:";
        cin>>amt;
        balance=balance+amt;
    }
    void withdraw()
    {
        cout<<"enter amount withdraw:";
        cin>>amt;
        if(balance>=amt)
        {
            balance=balance-amt;
        }
        else
        {
            cout<<"less balance..";
        }
        cout<<"your balance is "<<balance<<endl;
    }
};
int main()
{
    bank x;
    int ch;
    do
    {
        cout<<"\n1.setdata\n2.showdata\n3.withdraw\n4.deposite\n5.exit";
        cout<<"\ninput your choise";
        cin>>ch;
        switch(ch)
        {
            case 1:
                 cout<<"1.setdata\n";
                 x.setdata();
            break;
            case 2:
                cout<<"2.account details\n";
                 x.showdata();
            break;
            case 3:
             cout<<"3.deposite\n";
                x.deposite();
            break;
            case 4:
                cout<<"4.withdraw\n";
                x.withdraw();
            break;
            case 5:
                cout<<"\nthank you..";
                cout<<"\nvisit again..";
            break;
            default:
                cout<<"\n sorry wrong option";
            break;
        }
    }   
     while(ch!=5);
}
