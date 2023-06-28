#include<iostream>
using namespace std;
class test
{
    int testcode;
    char description[30];
    int nocandidate,center;
    float callcenter()
    {
        return (nocandidate/100+1);
    }
    public:
    void schedule()
    {
        cout<<"Enter the testcode:";
        cin>>testcode;
        cout<<"Enter the description:";
        cin>>description;
        cout<<"Enter the nocandidate:";
        cin>>nocandidate;
        center=callcenter();
    }
    void disptest()
    {
        cout<<"Enter the testcode:"<<testcode<<endl;
        cout<<"Enter the description:"<<description<<endl;
        cout<<"Enter the nocandidate:"<<nocandidate<<endl;
        cout<<"centre:"<<center<<endl; 
    }
};
int main()
{
    test x;
    x.schedule();
    x.disptest();
}