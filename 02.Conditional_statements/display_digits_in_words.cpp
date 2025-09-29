// Displaying digits in words by using else-if ladder
#include <iostream>
using namespace std;
int main()
{
    int inputDigit;

    cout << "Enter the your digit here: ";
    cin >> inputDigit;

    if (inputDigit == 1)
        cout << "One" << endl;

    else if (inputDigit == 2)
        cout << "Two" << endl;

    else if (inputDigit == 3)
        cout << "Three" << endl;

    else if (inputDigit == 4)
        cout << "Four" << endl;

    else if (inputDigit == 5)
        cout << "Five" << endl;

    else if (inputDigit == 6)
        cout << "Six" << endl;

    else if (inputDigit == 7)
        cout << "Seven" << endl;

    else if (inputDigit == 8)
        cout << "Eight" << endl;

    else if (inputDigit == 9)
        cout << "Nine" << endl;

    else if (inputDigit == 0)
        cout << "Zero" << endl;

    else
        cout << "Invalid Input !";

    return 0;
}