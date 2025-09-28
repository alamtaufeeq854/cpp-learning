// Division of two numbers
#include <iostream>
using namespace std;
int main()
{
    int a, b;
    float c;

    cout << "Enter a number ";
    cin >> a;

    cout << "Enter a number which divides the 1st number ";
    cin >> b;

    if (b != 0)
    {
        c = (float)a / b;
        cout << "Result is " << c << endl;
    }

    else
        cout << "Division by zero is undefined " << endl;

    return 0;
}