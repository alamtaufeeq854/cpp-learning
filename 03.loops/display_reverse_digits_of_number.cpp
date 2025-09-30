// Displaying digits of a number in reverse order
#include <iostream>
using namespace std;
int main()
{
    int num, remainder;

    cout << "Enter your number here: ";
    cin >> num;

    while (num != 0)
    {
        remainder = num % 10;
        num /= 10;
        cout << remainder;
    }
    cout << endl;

    return 0;
}