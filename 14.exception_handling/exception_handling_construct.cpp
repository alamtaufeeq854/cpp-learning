// Exception Handling Construct
#include <iostream>
using namespace std;
int main()
{
    int num1, num2, result;

    cout << "Enter the First number here: ";
    cin >> num1;

    cout << "Enter the Second number here: ";
    cin >> num2;

    try
    {
        if (num2 == 0)
            throw 1;

        result = num1 / num2;
        cout << "Division of numbers are " << result << endl;
    }

    catch (int e)
    {
        cout << "Division by zero is not possible " << endl;
    }
}