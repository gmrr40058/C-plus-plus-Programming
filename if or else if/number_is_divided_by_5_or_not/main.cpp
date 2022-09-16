#include <iostream>

using namespace std;

int main()
{
   int number;
    cout<<"Please enter the number:";
    cin>>number;
   if(number%5==0)
   {
       cout<<endl<<number<<" is divided by by 5."<<endl;
   }
   else
    cout<<endl<<number<<" is not divided by 5."<<endl;
}
