#include <iostream>

using namespace std;

int main()
{
    int i,n,mul=1;
    cout<<"Please enter the last number of the series:";
    cin>>n;
    cout<<endl;
    for(i=1;i<=n;i=i+2)
    {
        mul=mul*i;
        cout<<"*"<<i;
    }
    cout<<" = "<<mul<<endl;
}
