#include<iostream>
using namespace std;
class batsmen
{
    int bcode;
    char bname[20];
    int innings,notout,runs;
    float batavg;
    float calavg()
    {
        return runs/(innings-notout);
    }
    public:
    void readdata()
    {
        cout<<"Enter the number:";
        cin>>bcode;
         cout<<"Enter the name:";
        cin>>bname;
        cout<<"Enter the innings:";
        cin>>innings;
        cout<<"Enter the notout:";
        cin>>notout;
        cout<<"Enter the player innings runs:";
        cin>>runs;
        batavg=calavg();
    }
    void displaydata()
    {
         cout<<"number:"<<bcode<<endl;
         cout<<"name:"<<bname<<endl;
         cout<<"innings:"<<innings<<endl;
         cout<<"notout:"<<notout<<endl; 
         cout<<"innings runs:"<<runs<<endl;
         cout<<"batavg:"<<batavg<<endl;
    }
};
int main()
{
    batsmen x;
    x.readdata();
    x.displaydata();
}