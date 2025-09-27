// To find simple intrest
#include <iostream>
using namespace std;
int main()
{
    float p, r, t, SI;

    cout << "Enter Principal Amount ";
    cin >> p;
    cout << "Enter Rate Of Intrest in % ";
    cin >> r;
    cout << "Enter Time Period In Year ";
    cin >> t;

    SI = (p * r * t) / 100;
    cout << "Simple Intrest is " << SI << endl;
    return 0;
}