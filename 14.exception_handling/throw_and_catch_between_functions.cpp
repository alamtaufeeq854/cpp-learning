// Throw and Catch Between Functions
#include <iostream>
using namespace std;

int division(int x, int y)
{

    if (y == 0)
        throw 1;

    return x / y;
}

int main()
{
    int num1, num2, result;

    cout << "Enter the First number here: ";
    cin >> num1;

    cout << "Enter the Second number here: ";
    cin >> num2;

    try
    {
        result = division(num1, num2);
        cout << "Division of numbers are " << result << endl;
    }

    catch (int e)
    {
        cout << "Division by zero is not possible " << endl;
    }

    return 0;
}