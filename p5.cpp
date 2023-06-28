#include<iostream>
using namespace std;
class book
{
    int bookno;
    char booktitle[20];
    float price,value;
    float total_cost(int x)
    {
        float total;
        total=price*x;
        return total;
    }
    public:
    void input()
    {
        cout<<"Enter the bookno:";
        cin>>bookno;
        cout<<"Enter the booktitle:";
        cin>>booktitle;
        cout<<"Enter the price:";
        cin>>price;
    }
    void purchase()
    {
        int n;
        cout<<"Enter the copies:";
        cin>>n;
        float total;
        total= total_cost(n);
        cout<<"your total cost:"<<total;
    }
};
int main()
{
    book x;
    x.input();
    x.purchase();
}