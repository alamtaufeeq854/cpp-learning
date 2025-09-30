// To check whether the number is Palindrome or not
#include <iostream>
using namespace std;
int main()
{
    int number, numberClone, remainder, reversedNumber = 0;

    cout << "Enter your number ";
    cin >> number;

    numberClone = number;

    while (number != 0)
    {
        remainder = number % 10;
        number /= 10;
        reversedNumber = reversedNumber * 10 + remainder;
    }

    if (reversedNumber == numberClone)
        cout << reversedNumber << " is a Palindrome";
    else
        cout << numberClone << " is not a Palindrome";

    return 0;
}