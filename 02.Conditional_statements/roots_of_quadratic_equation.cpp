// To find the quadratic equation roots and it's nature
#include <iostream>
#include <cmath> //for using sqrt function
using namespace std;
int main()
{
    int a, b, c;
    float d, r1, r2;

    cout << "Enter the coefficient of X^2: ";
    cin >> a;

    cout << "Enter the coefficient of X: ";
    cin >> b;

    cout << "Enter the constant value of equation: ";
    cin >> c;

    d = (b * b) - (4 * a * c); // d is a discriminant which determines the nature of quadratic equation

    if (d == 0)
    {

        r1 = -b / (2.0 * a);
        cout << "Roots are real and equal which is " << r1 << endl;
    }

    else
    {
        if (d > 0)
        {
            r1 = (-b + sqrt(d)) / (2.0 * a);
            r2 = (-b - sqrt(d)) / (2.0 * a);
            cout << "Roots are real and unequal which is " << r1 << " & " << r2 << endl;
        }

        else
        {
            cout << "Roots are unreal which is imaginary" << endl;
        }
    }
    return 0;
}
