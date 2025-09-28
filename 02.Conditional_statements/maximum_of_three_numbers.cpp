// Finding maximum number from the given three numbers by user
#include <iostream>
using namespace std;
int main()
{
    int a, b, c;

    cout << "Enter number ";
    cin >> a;

    cout << "Enter another number ";
    cin >> b;

    cout << "Again! Enter the another number ";
    cin >> c;

    if (a > b && a < c)
        cout << a << " is greatest number" << endl;

    else
    {

        if (b > c)
            cout << b << " is greatest number" << endl;

        else
            cout << c << " is greatest number" << endl;
    }

    return 0;
}