// Pass By Address
#include <iostream>
using namespace std;

void swap(int *a, int *b)
{

    int temp;

    temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int num1, num2;

    cout << "Enter an integer: ";
    cin >> num1;

    cout << "Again! Enter an integer: ";
    cin >> num2;

    swap(&num1, &num2);

    cout << "Original variables swapped: " << num1 << " " << num2 << endl; // Original variable also swapped

    return 0;
}