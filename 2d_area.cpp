#include<iostream>
using namespace std;
class area
{
    public:
    area(int a,int b)
    {
        cout<<"rectangle area:"<<a*b<<endl;
    }
    area(int a,double b)
    {
        cout<<"rectangle area:"<<0.5*a*b<<endl;
    }
    area(double a,double c)
    {
        cout<<"elliposid area:"<<3.14*a*c<<endl;
    }
    area(int a)
    {
        cout<<"cube area:"<<a*a<<endl;
    }
    area(double a)
    {
        cout<<"circle area:"<<3.14*(a*a)<<endl;
    }
};
int main()
{
    area a(4,3),b(5,3.4),c(3.5,5.5),d(3),e(3.5);
}