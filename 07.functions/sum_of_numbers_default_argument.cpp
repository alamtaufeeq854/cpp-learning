// Addition upto 3 numbers by default argument
#include <iostream>
using namespace std;

float add(float x = 0, float y = 0, float z = 0) // default argument
{
    float k = x + y + z;
    return k;
}

int main()
{
    float num1, num2, num3;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Again ! Enter a number: ";
    cin >> num2;

    cout << "Once Again ! Enter a number: ";
    cin >> num3;

    cout << "Sum of Two number is: " << add(num1, num2) << endl;
    cout << "Sum of Three number is: " << add(num1, num2, num3) << endl;

    return 0;
}