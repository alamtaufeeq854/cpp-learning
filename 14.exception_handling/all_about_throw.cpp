// All About Throw
#include <iostream>
using namespace std;

class MyException : public exception
{
};

float division(float x, float y) throw(float)
{

    if (y == 0)
        throw MyException();

    return x / y;
}

int main()
{
    float num1, num2, result;

    cout << "Enter the First number here: ";
    cin >> num1;

    cout << "Enter the Second number here: ";
    cin >> num2;

    try
    {
        result = division(num1, num2);
        cout << "Division of numbers are " << result << endl;
    }

    catch (MyException e)
    {
        cout << "Division by zero is not possible " << endl;
    }

    return 0;
}