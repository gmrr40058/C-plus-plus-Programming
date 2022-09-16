#include <iostream>

using namespace std;

int main()
{
   int number1,number2,number3;
   cout<<"Please enter three numbers:";
   cin>>number1>>number2>>number3;
   if(number1>number2 && number1>number3)
   {
       cout<<number1<<" is the largest number."<<endl;
   }
   else if(number2>number1 && number2>number3)
   {
       cout<<number2<<" is the largest number."<<endl;
   }
   else if(number3>number1 && number3>number2)
   {
       cout<<number3<<" is the largest number."<<endl;
   }
   else
    cout<<"Two largest number are same or all number are same."<<endl;
   {

   }
}
