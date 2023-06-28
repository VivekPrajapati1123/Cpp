#include<iostream>
using namespace std;
class result
{
    private:
    int Sci,Maths,Eng,Total,x;
    float per;
    public:
    void setter()
    {
        cout<<"Enter sci marks : ";
        cin>>Sci;
        cout<<"Enter Eng marks : ";
        cin>>Eng;
        cout<<"Enter Maths marks : ";
        cin>>Maths;
    }
 void getter()
    {
        Total=Maths+Sci+Eng;
        per=(float)Total/3;
    }
 void setdata()
    {
        cout<<"Sci\tEng\tMaths\tTotal\tper\n";
        cout<<Sci<<"\t"<<Eng<<"\t"<<Maths<<"\t"<<Total<<"\t"<<per<<"\t";
    }
};
int main()
{
    result a;
    a.setter();
    a.getter();
    a.setdata();
}