#include<iostream>
using namespace std;
class student
{
    int admno;
    char sname[20];
    float Eng,Sci,Maths,Total,per;
    float ctotal()
    {
        return Eng+Sci+Maths;
    }
    public:
    void takedata()
    {
        cout<<"Enter the admnin:";
        cin>>admno;
        cout<<"Enter the name:";
        cin>>sname;
        cout<<"Enter the Eng Marks:";
        cin>>Eng;
        cout<<"Enter the Sci Marks:";
        cin>>Sci;
        cout<<"Enter the Maths Marks:";
        cin>>Maths;
        Total=ctotal();
    }
    void showdata()
    {
        cout<<"admin no:"<<admno<<endl;
        cout<<"name:"<<sname<<endl;
        cout<<"English Marks:"<<Eng<<endl;
        cout<<"Scince Marks:"<<Sci<<endl;
        cout<<"Maths Marks:"<<Maths<<endl;
        cout<<"Total is:"<<Total<<endl;
    }
};
int main()
{
    student x;
    x.takedata();
    x.showdata();
}