// To display digits in words from a number
#include <iostream>
using namespace std;

int main()
{
    int number, remainder1, remainder2, reversedNumber = 0;

    cout << "Enter your number: ";
    cin >> number;

    while (number != 0)
    {
        remainder1 = number % 10;
        number /= 10;
        reversedNumber = reversedNumber * 10 + remainder1;
    }

    while (reversedNumber != 0)
    {
        remainder2 = reversedNumber % 10;
        reversedNumber /= 10;

        switch (remainder2)
        {

        case 1:
            cout << "One" << endl;
            break;

        case 2:
            cout << "Two" << endl;
            break;

        case 3:
            cout << "Three" << endl;
            break;

        case 4:
            cout << "Four" << endl;
            break;

        case 5:
            cout << "Five" << endl;
            break;

        case 6:
            cout << "Six" << endl;
            break;

        case 7:
            cout << "Seven" << endl;
            break;

        case 8:
            cout << "Eight" << endl;
            break;

        case 9:
            cout << "Nine" << endl;
            break;

        case 0:
            cout << "Zero" << endl;
            break;

        default:
            cout << "Invalid Input !" << endl;
            break;
        }
    }
    return 0;
}