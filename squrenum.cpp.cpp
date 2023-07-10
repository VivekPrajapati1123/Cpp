#include<iostream>
using namespace std;
class base
{
    protected:
    int n;
    public:
    void setN()
    {
        cout<<"Enter n:";
        cin>>n;
    }
};
class derived : public base
{
    int i;
    public:
    void getN()
    {
        for(i=1;i<=n;++i)
        {
            cout<<"squre of num is:"<<i<<":"<<i*i<<endl;
        }
    }
};
int main()
{
    derived d;
    d.setN();
    d.getN();
}