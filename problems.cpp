problem 4
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

problem 6
#include <iostream>
using namespace std;
struct stInfo{

    string firstName;
    string lastName;
};

stInfo ReadName(){
    stInfo Info;
    cout<<"please enter your first name"<<endl;
    cin>>Info.firstName;

    cout<<"please enter your last name"<<endl;
    cin>>Info.lastName;
    return Info;
}

string GetFullName(stInfo Info){

    string fullName= "";
    fullName= Info.firstName +" "+Info.lastName;
    return fullName;

}

 void printFullName(string fullName){
 
     cout<<"your full name is"<<fullName<<endl;
 }

int main()
{
   printFullName(GetFullName(ReadName()));
}
