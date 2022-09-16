#include <iostream>

using namespace std;

int main()
{
   int number,reverseNumber=0,rem;
   cout<<"Enter a number : ";
   cin>>number;
   cout<<"The reverse number of "<<number;
   while(number!=0)
   {
       rem=number%10;
       reverseNumber=reverseNumber*10+rem;
       number=number/10;
   }
   cout<<" is : "<<reverseNumber<<endl;
}
