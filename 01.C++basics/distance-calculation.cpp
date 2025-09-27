#include <iostream>
using namespace std;
int main()
{
    float v, u, a, s;
    cout << "Enter final velocity ";
    cin >> v;
    cout << "Enter intial velocity ";
    cin >> u;
    cout << "Enter acceleration ";
    cin >> a;
    s = (v * v - u * u) / 2 * a;
    cout << "Distance covered is " << s << endl;
    return 0;
}