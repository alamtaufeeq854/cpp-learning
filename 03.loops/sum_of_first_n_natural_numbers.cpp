// To display sum of first n natural number
#include <iostream>
using namespace std;
int main()
{
    int i = 1, sum = 0, inputLimit;

    cout << "Enter your number: ";
    cin >> inputLimit;

    while (i <= inputLimit)
    {
        sum += i; // continuosly adding upto inputLimit
        i++;
    }

    cout << "Sum of first " << inputLimit << " natural number is " << sum;

    return 0;
}