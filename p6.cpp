#include<iostream>
using namespace std;
class report
{
    int adno,s;
    char name[20];
    float maths,sci,ba,account,eng,marks,avg,ave,total;
    float getavg()
    {
        ave=0;
        ave=maths+sci+eng+ba+account;
        avg=ave/5;
    }
    public:
    void readinfo()
    {
        cout<<"Enter the admnin:";
        cin>>adno;
        cout<<"Enter the name:";
        cin>>name;
        cout<<"Enter the Eng Marks:";
        cin>>eng;
        cout<<"Enter the Sci Marks:";
        cin>>sci;
        cout<<"Enter the Maths Marks:";
        cin>>maths;
        cout<<"Enter the ba Marks:";
        cin>>ba;
        cout<<"Enter the account Marks:";
        cin>>account;
       getavg();
    }
    void display()
    {
        cout<<"admin no:"<<adno<<endl;
        cout<<"name:"<<name<<endl;
        cout<<"marks obtained:"<<endl;
        cout<<"sci Marks:"<<sci<<endl;
        cout<<"maths Marks:"<<maths<<endl;
        cout<<"ba Marks:"<<ba<<endl;
        cout<<"account Marks:"<<account<<endl;
         cout<<"eng Marks:"<<eng<<endl;
        cout<<"avg:"<<avg<<endl;
    }
}; 
int main()
{
    report d;
    d.readinfo();
    d.display();
}