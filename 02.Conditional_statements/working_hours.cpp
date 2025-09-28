// To check working hours
#include <iostream>
using namespace std;
int main()
{
    int h;

    cout << "Enter hour ";
    cin >> h;

    if (h >= 9 && h <= 18) // using Logical operators
        cout << "Working Hour " << endl;
    else
        cout << "Leisure " << endl;

    return 0;
}