// Addition of Two numbers
#include <iostream>
using namespace std;

float add(float x, float y)
{
    float z = x + y;
    return z;
}

int main()
{
    float num1, num2, result;

    cout << "Enter a number: ";
    cin >> num1;

    cout << "Again ! Enter a number: ";
    cin >> num2;

    result = add(num1, num2); // Function is called

    cout << "Sum of Two numbers is: " << result << endl;

    return 0;
}