// To check whether the number is armstrong number or not
// Applicable for 3 digit number only
#include <iostream>
using namespace std;
int main()
{
    int num, remainder, sumOfDigits = 0;

    cout << "Enter your number: ";
    cin >> num;

    int reference = num;

    while (num != 0)
    {
        remainder = num % 10;
        num /= 10;
        sumOfDigits += (remainder * remainder * remainder);
    }
    if (sumOfDigits == reference)
        cout << reference << " is a Armstrong Number" << endl;
    else
        cout << reference << " is not a Armstrong Number" << endl;

    return 0;
}