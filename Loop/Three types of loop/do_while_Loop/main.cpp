#include <iostream>

using namespace std;

int main()
{
    int n,i=1,sum=0;
    cout<<"Please enter how many number you want to sum:";
    cin>>n;
     do
    {
        sum+=i;  // sum+=i and sum=sum+i stand for same things.
        i=i+1;   //You can also put i++ in the place of i=i+1.
    }while(i<=n);
    cout<<endl<<"The sum is = "<<sum<<endl;
}
