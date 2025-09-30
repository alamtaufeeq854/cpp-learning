// To calculate sum of digits of a number
#include <iostream>
using namespace std;
int main()
{
    int number, originalNumber, remainder, sum = 0;

    cout << "Enter your number ";
    cin >> number;

    originalNumber = number;

    while (number != 0)
    {
        remainder = number % 10;
        number /= 10;
        sum = sum + remainder;
    }
    cout << "Sum of digits of '" << originalNumber << "' is " << sum << endl;

    return 0;
}