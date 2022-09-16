#include<iostream>

using namespace std;

int main()
{
    int firstNumber, secondNumber;

    cout << "Enter the first numbers to be swapped : ";
    cin >> firstNumber;
    cout << "Enter the second numbers to be swapped : ";
    cin>> secondNumber;
    cout << "The two numbers before swapping are :" << endl;
    cout << "Value of first number : " << firstNumber << endl;
    cout << "Value of second number : " << secondNumber << endl;
    secondNumber = firstNumber + secondNumber;
    firstNumber = secondNumber - firstNumber;
    secondNumber = secondNumber - firstNumber;
    cout << "The two numbers after swapping become:" << endl;
    cout << "Value of first number : " << firstNumber << endl;
    cout << "Value of second number : " << secondNumber << endl;
}
