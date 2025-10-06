// Power of a number
#include <iostream>
using namespace std;

int power(int m, int n)
{
    int p = 1;

    for (int i = 0; i < n; i++)
    {
        p = p * m;
    }

    return p;
}

int main()
{
    int num1, exponent, result;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Enter the exponent value: ";
    cin >> exponent;

    result = power(num1, exponent); // Function is called

    cout << num1 << " to the power " << exponent << " is: " << result << endl;

    return 0;
}