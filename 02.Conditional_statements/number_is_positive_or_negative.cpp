// o check whether the number is positive or negative
#include <iostream>
using namespace std;
int main()
{
    int n;

    cout << "Enter your number here: ";
    cin >> n;

    if (n > 0)
        cout << n << " is positive number" << endl;
    else if (n < 0)
        cout << n << " is negative number" << endl;
    else
        cout << n << " is neither positive nor negative" << endl;

    return 0;
}