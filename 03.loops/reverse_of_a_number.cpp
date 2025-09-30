// To reverse a number
#include <iostream>
using namespace std;
int main()
{
    int num, remainder, reverseNumber = 0;

    cout << "Enter your number ";
    cin >> num;

    while (num != 0)
    {
        remainder = num % 10;
        num /= 10;
        reverseNumber = reverseNumber * 10 + remainder;
    }
    cout << reverseNumber;

    return 0;
}