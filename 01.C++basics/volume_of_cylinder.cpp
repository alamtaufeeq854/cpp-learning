#include <iostream>
using namespace std;
int main()
{
    float r, h, v;

    cout << "Enter Radius ";
    cin >> r;

    cout << "Enter Height ";
    cin >> h;

    v = (3.14 * r * r * h); // volume of cylinder

    cout << "Volume of Cylinder is " << v << endl;

    return 0;
}