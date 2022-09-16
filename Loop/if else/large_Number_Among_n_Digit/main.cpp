#include <iostream>

using namespace std;

int main()
{
    int number,n,i,large=0;
   cout<<"Please enter how many numbers you want:";
   cin>>n;
   cout<<endl<<"Please enter "<<n<<" numbers:";
   for(i=1;i<=n;i++)
   {
       cin>>number;
       if(large<number)
        large=number;
   }
   cout<<endl<<large<<" is the largest number among "<<n<<" numbers."<<endl;
}
