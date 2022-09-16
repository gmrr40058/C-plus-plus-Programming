#include <iostream>

using namespace std;

int main()
{
    int n,i,sum=0;
    cout<<"Please enter how many number you want to sum:";
    cin>>n;
    for(i=1;i<=n;i=i+1)  //You can also put i++ in the place of i=i+1.
    {
        sum+=i;  // sum+=i and sum=sum+i stand for same things.
    }
    cout<<endl<<"The sum is = "<<sum<<endl;
}
