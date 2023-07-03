#include<iostream>
using namespace std;
class box
{
    int l,w,h;
    public:
    void setdata(int a,int b,int c)
    {
        l=a;
        w=b;
        h=c;
    }
    int getdata()
    {
        return l*w*h;
    }
    box operator- (box &n)
    {
        box t;
        t.l=l-n.l;
        t.w=w-n.w;
        t.h=h-n.h;
        return t;
    }
};
int main()
{
    box b,a,c;
    b.setdata(5,5,5);
    cout<<"box b volume:"<<b.getdata()<<endl;
    a.setdata(3,3,3);
    cout<<"box a volume:"<<a.getdata()<<endl;
    c=b-a;
    cout<<"box c volume:"<<c.getdata()<<endl;
}