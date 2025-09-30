// For finding the GCD (HCF) of two numbers
#include <iostream>
using namespace std;
int main()
{
    int num1, num2;

    cout << "Enter number: ";
    cin >> num1;

    cout << "Enter another number: ";
    cin >> num2;

    while (num1 != num2)
    {
        if (num1 > num2)
            num1 -= num2;
        else
            num2 -= num1;
    }

    cout << "GCD is " << num1 << endl;
    return 0;
}