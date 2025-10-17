// use of auto
#include <iostream>
using namespace std;

float fun()
{
    return 5.256;
}

int main()
{
    auto x = 2 * 8.89 + 'A'; // Automatically decide the type of data store in variable
    cout << x << endl;

    auto y = fun(); // Automatically identify the type of data which is given by fun() that will store in variable
    cout << y << endl;

    decltype(y) z = x + y; // data type of 'x' will be same as data type of 'y'
    cout << z << endl;

    return 0;
}