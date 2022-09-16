#include <iostream>

using namespace std;

int main()
{
    int n,i,fac=1;
    cout<<"Please enter how many number you want to mul:";
    cin>>n;
    for(i=1;i<=n;i=i+1)  //You can also put i++ in the place of i=i+1.
    {
        fac*=i;  // fac*=i and fac=fac*i stand for same things.
    }
    cout<<endl<<"The factorial of "<<n<<" is = "<<fac<<endl;
}
