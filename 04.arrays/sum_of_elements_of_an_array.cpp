// To find the sum of elements of an Array
#include <iostream>
using namespace std;
int main()
{
    int arrayLimit, sum = 0;

    cout << "Enter the size of your Array: ";
    cin >> arrayLimit;

    int A[arrayLimit];

    for (int i = 0; i < arrayLimit; i++)
    {
        cout << i + 1 << ". Enter the element: ";
        cin >> A[i];
    }

    for (int i = 0; i < arrayLimit; i++)
    {
        sum += A[i];
    }

    cout << "Sum of all '" << arrayLimit << "' element is: " << sum;

    return 0;
}