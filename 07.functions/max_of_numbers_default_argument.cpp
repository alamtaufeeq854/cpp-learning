// Maximum of numbers by default arguments
#include <iostream>
using namespace std;

int maxim(int x = 0, int y = 0, int z = 0)
{
    if (x > y && x > z)
    {
        return x;
    }

    else if (y > z)
    {
        return y;
    }

    else
    {
        return z;
    }
}

int main()
{
    int num1, num2, num3;

    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Again ! Enter an integer: ";
    cin >> num2;

    cout << "Once Again ! Enter an integer: ";
    cin >> num3;

    cout << "Maximum of two numbers is: " << maxim(num1, num2) << endl;

    cout << "Maximum of three numbers is: " << maxim(num1, num2, num3) << endl;

    return 0;
}