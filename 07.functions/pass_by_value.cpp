// Pass By Value
#include <iostream>
using namespace std;

int swap(int a, int b)
{
    cout << "Before swapping " << a << " " << b << endl;
    int temp;

    temp = a;
    a = b;
    b = temp;

    cout << "After swapping " << a << " " << b << endl;
}

int main()
{
    int num1, num2;

    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Again! Enter an integer: ";
    cin >> num2;

    swap(num1, num2);

    cout << "Original variables " << num1 << " " << num2 << endl; // Original variable doesn't swap

    return 0;
}