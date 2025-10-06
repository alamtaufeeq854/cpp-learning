// Function Overloading
#include <iostream>
using namespace std;

int add(int x, int y, int z) // 1st Function for addition of 3 integers
{
    int k = x + y + z;
    return k;
}

int add(int x, int y) // 2nd Function for addition of 2 integers
{
    int z = x + y;
    return z;
}

float add(float x, float y) // 3rd Function for addition of 2 float numbers
{
    float z = x + y;
    return z;
}

int main()
{
    int num1, num2, num3, result1;
    float floatNumber1, floatNumber2, result2;

    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Again! Enter an integer: ";
    cin >> num2;

    result1 = add(num1, num2); // 2nd Function is called

    cout << "Sum of first Two integer is: " << result1 << endl;

    cout << "Once Again! Enter an integer: ";
    cin >> num3;

    result1 = add(num1, num2, num3); // 1st Function is called & variable 'result1' is redefined

    cout << "Sum of first Three integer is: " << result1 << endl;

    cout << "Enter a float number: ";
    cin >> floatNumber1;

    cout << "Again! Enter a float number: ";
    cin >> floatNumber2;

    result2 = add(floatNumber1, floatNumber2); // 3rd Function is called

    cout << "Sum of first two float number is: " << result2 << endl;

    return 0;
}