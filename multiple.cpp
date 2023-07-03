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
    box operator* (box &n)
    {
        box t;
        t.l=l*n.l;
        t.w=w*n.w;
        t.h=h*n.h;
        return t;
    }
};
int main()
{
    box b,a,c;
    b.setdata(4,4,4);
    cout<<"box b div:"<<b.getdata()<<endl;
    a.setdata(2,2,2);
    cout<<"box a div:"<<a.getdata()<<endl;
    c=b*a;
    cout<<"box c div:"<<c.getdata()<<endl;
}