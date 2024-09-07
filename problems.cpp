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


problem 9
#include <iostream>
using namespace std;
  int ReadNumbers(int& num1 , int& num2 , int& num3)
  {
      cout<<"please enter number 1"<<endl;
      cin>>num1;
      cout<<"please enter number 2"<<endl;
      cin>>num2;
      cout<<"please enter number 3"<<endl;
      cin>>num3;
  }

  int CalculateNumber(int num1 , int num2 , int num3)
  {
      return num1 + num2 + num3;
  }
void printNumbers(int total)
{
    cout<<"the sum ="<<total<<endl;
}


int main()
{
    int num1 , num2 , num3 ;
    ReadNumbers(num1 , num2 ,  num3);
    printNumbers(CalculateNumber( num1 ,  num2 ,  num3));
}

problem 10
#include <iostream>
using namespace std;
  int ReadNumbers(int& num1 , int& num2 , int& num3)
  {
      cout<<"please enter number 1"<<endl;
      cin>>num1;
      cout<<"please enter number 2"<<endl;
      cin>>num2;
      cout<<"please enter number 3"<<endl;
      cin>>num3;
  }

  int CalculateNumber(int num1 , int num2 , int num3)
  {
      return num1 + num2 + num3;
  }

  float sumofmark (int num1 , int num2 , int num3)
  {
      return (float)CalculateNumber(num1 , num2 , num3) / 3;
  }
void printNumbers(int total)
{
    cout<<"the sum ="<<total<<endl;
}


int main()
{
    int num1 , num2 , num3 ;
    ReadNumbers(num1 , num2 ,  num3);
    printNumbers(sumofmark( num1 ,  num2 ,  num3));
}

problem 12
#include <iostream>
using namespace std;

int ReadNum(int& num1,int& num2)
{
    cout<<"please enter first number"<<endl;
    cin>>num1;

    cout<<"please enter second number"<<endl;
    cin>>num2;
}

int CheckMaxnum(int num1,int num2)
{
    if(num1>num2)
    return num1;
    else
    return num2;
}

void PrintNum(int max)
{
    cout<<"the max number is"<<" "<<max<<endl;
}

int main()
{
  int num1 , num2;
  ReadNum(num1,num2);
  PrintNum(CheckMaxnum(num1,num2));
}


problem14

#include <iostream>
using namespace std;

int ReadNum(int& num1,int& num2)
{
    cout<<"enter number1"<<endl;
    cin>>num1;

    cout<<"enter num2"<<endl;
    cin>>num2;
}

int swap(int& num1,int& num2)
{ 
    int temp;
    temp=num1;
    num1=num2;
    num2=temp;
}

void PrintNum (int num1,int num2)
{
    cout<<"number1 is"<<num1<<endl;

    cout<<"number2 is"<<num2<<endl;
}


int main()
{
    int num1,num2;
    ReadNum(num1,num2);
    PrintNum(num1,num2);
    swap(num1,num2);
    PrintNum(num1,num2);


}

problem 15
#include <iostream>
using namespace std;

int ReadIt(float &hight, float &width)
{
    cout << "please enter the hight" << endl;
    cin >> hight;

    cout << "please enter the width" << endl;
    cin >> width;
}

int CalculateIt(float hight, float width)
{
    return hight * width;
}

void PrintIt(int Area)
{
    cout << "regtangl area =" << " " << Area << endl;
}

int main()
{
    float hight, width;
    ReadIt(hight, width);
    PrintIt(CalculateIt(hight, width));
}