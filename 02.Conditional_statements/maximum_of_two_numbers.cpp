// Finding the maximum of two numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b;

    cout << "Enter a number ";
    cin >> a;

    cout << "Enter another number ";
    cin >> b;

    if (a > b)
    {
        cout << a << " is maximum" << endl;
    }

    else if (b > a)
    {
        cout << b << " is maximum" << endl;
    }

    else
        cout << "Both numbers are equal" << endl;

    return 0;
}