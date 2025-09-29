// Menu driven arithemetic operations
#include <iostream>
using namespace std;
int main()
{

    cout << "1. Add\n"
         << "2. Subtract\n"
         << "3. Multiplication\n"
         << "4. Division\n";

    int optionInput;

    cout << "Choose your option number: ";
    cin >> optionInput;

    int num1, num2;

    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the 2nd number: ";
    cin >> num2;

    switch (optionInput)
    {

    case 1:
        cout << num1 + num2 << endl;
        break;

    case 2:
        cout << num1 - num2 << endl;
        break;

    case 3:
        cout << num1 * num2 << endl;
        break;

    case 4:
        if (num2 == 0)
            cout << "Division by zero is undefined" << endl;
        else
            cout << num1 / num2 << endl;
        break;

    default:
        cout << "Invalid Input !" << endl;
        break;
    }
    return 0;
}