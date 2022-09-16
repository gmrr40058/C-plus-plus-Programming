#include <iostream>

using namespace std;

int main()
{
   int year;
   cout<<"Enter a year:";
   cin>>year;
   if((year%400==0)||((year%4==0)&&(year%100!=0)))
   {
       cout<<endl<<year<<" is a leap year.";
   }
   else
    cout<<endl<<year<<" is not a leap year.";
}
