#include <iostream>

using namespace std;

int main()
{
    int n,i,mul=1;
    cout<<"Please enter how many number you want to mul:";
    cin>>n;
    for(i=1;i<=n;i=i+1)  //You can also put i++ in the place of i=i+1.
    {
        mul*=i;  // mul*=i and mul=mul*i stand for same things.
    }
    cout<<endl<<"The mul is = "<<mul<<endl;
}
