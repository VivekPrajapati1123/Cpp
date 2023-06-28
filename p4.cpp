#include<iostream>
using namespace std;
class flight
{
    int flightno;
    string destination;
    float fuel,distance;
    float calfuel()
    {
        if(distance<=1000)
        {
            fuel=500;
        }
        else if(distance<=1000 && distance<=2000)
        {
            fuel=1100;
        }
        else
        {
            fuel=2200;
        }
    }
    public:
    void feedinfo()
    {
        cout<<"Enter the flight num:";
        cin>>flightno;
        cout<<"Enter the destination:";
        cin>>destination;
        cout<<"Enter the distance:";
        cin>>distance;
        calfuel();
    }
    void showinfo()
    {
        cout<<"flight no:"<<flightno<<endl;
        cout<<"destination:"<<destination<<endl;
        cout<<"distance:"<<distance<<endl;
        cout<<"fuel:"<<fuel<<endl; 
    }
};
int main ()
{
    flight x;
    x.feedinfo();
    x.showinfo();
}