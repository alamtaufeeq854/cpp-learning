#include <iostream>
#include <cmath> // for using power and square root function.
using namespace std;
int main()
{
    int x1, x2, y1, y2;
    float d;

    cout << "Enter X1 here ";
    cin >> x1;
    cout << "Enter X2 here ";
    cin >> x2;

    cout << "Enter Y1 here ";
    cin >> y1;
    cout << "Enter Y2 here ";
    cin >> y2;

    d = sqrt(pow(x2 - x1, 2) + (pow(y2 - y1, 2))); // Distance between points

    cout << "Distance between points are " << d << endl;

    return 0;
}