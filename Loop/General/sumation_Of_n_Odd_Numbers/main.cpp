#include <iostream>

using namespace std;

int main()
{
    int i,n,sum=0;
    cout<<"Please enter the last odd number of the series:";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i=i+2)
    {
        sum=sum+i;
        cout<<"+"<<i;
    }
    cout<<" = "<<sum<<endl;
}
