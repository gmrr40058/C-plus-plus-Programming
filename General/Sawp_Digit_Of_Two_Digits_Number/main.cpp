#include <iostream>

using namespace std;

int main()
{
    int number,first,second;
    cout<<"Enter the number : ";
    cin>>number;
    cout<<"Before swapping digit the number is : "<<number<<endl;
    first=number%10;
    second=number/10;
    cout<<"After swapping digit the number is : "<<first<<second<<endl;
}
