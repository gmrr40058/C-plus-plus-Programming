#include <iostream>

using namespace std;

int main()
{
    int number;
    cout<<"Enter a number:";
    cin>>number;
    if(number%2==0)
    {
        cout<<endl<<number<<" is a Even number.";
    }
    else
        cout<<endl<<number<<" is a Odd number.";
}
