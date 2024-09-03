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


problem 7
#include <iostream>
using namespace std;

   int ReadNumber()
   {
       int num;
       cout<<"please enter the number"<<endl;
       cin>> num;
       return num;
   }

   float calculateNumber(int num)
   {
       return (float) num / 2;
   }

   void printNumber(int num)
   {
       cout<<"half of" << num<< "is" <<calculateNumber(num)<<endl;
    }

int main()
{
    printNumber(ReadNumber());
}

problem 8
#include <iostream>
using namespace std;

enum enMark {pass=2 , fail=1};
int readMark ()
{
    int mark;
    cout<<"please enter your mark"<<endl;
    cin>>mark;
    return mark;
}

int calculateMark(int mark)
{
   if (mark>50)
    return enMark::pass;
   else
    return enMark::fail;
}

void printMark(int mark)
{
    if(calculateMark(mark)==enMark::pass)
        cout<<"u passed";
    else
        cout<<"u failed";
}

int main()
{
  printMark(readMark());
}
