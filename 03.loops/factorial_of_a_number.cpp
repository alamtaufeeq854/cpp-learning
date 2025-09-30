// Factorial of a number
#include <iostream>
using namespace std;
int main()
{
    int inputLimit, fact = 1;

    cout << "Enter your number here: ";
    cin >> inputLimit;

    if (inputLimit > 0)
    {
        for (int i = 1; i <= inputLimit; i++)
        {
            fact = fact * i;
        }
        cout << "Factorial of " << inputLimit << " is " << fact << endl;
    }

    else if (inputLimit == 0)
        cout << "Factorial of " << inputLimit << " is " << fact << endl;

    else
        cout << "Factorial of " << inputLimit << " is undefined" << endl;

    return 0;
}
