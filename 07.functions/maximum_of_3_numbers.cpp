// Maximum of Two numbers
#include <iostream>
using namespace std;

int maxim(int x, int y, int z)
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
    int num1, num2, num3, maxNumber;

    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Again ! Enter an integer: ";
    cin >> num2;

    cout << "Once Again ! Enter an integer: ";
    cin >> num3;

    maxNumber = maxim(num1, num2, num3); // Function is called

    cout << "Maximum of three numbers is: " << maxNumber << endl;

    return 0;
}