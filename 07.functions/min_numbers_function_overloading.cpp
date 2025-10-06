// Minimum of numbers by function overloading
#include <iostream>
using namespace std;

int findMinimum(int x, int y, int z) // 1st Function for comparision of 3 integers
{
    if (x < y && x < z)
    {
        return x;
    }

    else if (y < z)
    {
        return y;
    }

    else
    {
        return z;
    }
}

int findMinimum(int x, int y) // 2nd Function for comparision of 2 integers
{

    if (x < y)
    {
        return x;
    }

    else
    {
        return y;
    }
}

float findMinimum(float x, float y) // 3rd Function for comparision of 2 float numbers
{

    if (x < y)
    {
        return x;
    }

    else
    {
        return y;
    }
}

int main()
{
    int num1, num2, num3, result1;
    float floatNumber1, floatNumber2, result2;

    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Again! Enter an integer: ";
    cin >> num2;

    result1 = findMinimum(num1, num2); // 1st Function is called

    cout << "Minimum of first Two integer is: " << result1 << endl;

    cout << "Once Again! Enter an integer: ";
    cin >> num3;

    result1 = findMinimum(num1, num2, num3); // 2nd Function is called & variable 'result' is redefined

    cout << "Minimum of first Three integer is: " << result1 << endl;

    cout << "Enter a float number: ";
    cin >> floatNumber1;

    cout << "Again! Enter a float number: ";
    cin >> floatNumber2;

    result2 = findMinimum(floatNumber1, floatNumber2); // 3rd Function is called

    cout << "Minimum of first two float number is: " << result2 << endl;

    return 0;
}