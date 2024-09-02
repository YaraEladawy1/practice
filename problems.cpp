#include <iostream>
using namespace std;
struct stInfo
{
    int age;
    bool HasDrivingLicense;
};


 stInfo ReadInfo()
 {
     stInfo Info;
     cout<<"please enter your age"<<endl;
     cin>>Info.age;

     cout<<"do you have a driving license"<<endl;
     cin>>Info.HasDrivingLicense;

     return Info;
 }


 bool IsAccepted (stInfo Info)
 {
     return (Info.age>21 && Info.HasDrivingLicense);
 }

 void PrintInfo (stInfo Info)
 {
     if(IsAccepted(Info))
        cout<<"accepted"<<endl;
     else
        cout<<"rejected"<<endl;
 }
int main()
{
    PrintInfo(ReadInfo());
}
