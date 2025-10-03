// Understanding about reference
#include <iostream>
using namespace std;
int main()
{
    int x = 23;
    int &y = x; // 'y' is nothing but nickname or alias of 'x' (reference)

    cout << &x << endl; // address of 'x'
    cout << &y << endl; // address of 'y'
    cout << x << endl;  // data stored in 'x'
    cout << y << endl;  // data stored in 'y' which is same as 'x'
    x++;                // x = 24
    y++;                // y = x = 25

    cout << x << endl; // data stored in 'x'
    cout << y << endl; // data stored in 'y' which is same as 'x'

    return 0;
}