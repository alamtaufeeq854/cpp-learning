// To find the maximum element in a array
#include <iostream>
using namespace std;
int main()
{
    int arraySize, max;

    cout << "Enter the size of an Array: ";
    cin >> arraySize;

    int A[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cout << i + 1 << ". Enter your element here: ";
        cin >> A[i];
    }

    max = A[0];

    for (int x : A)
    {
        if (x > max)
            max = x;
    }

    cout << "Maximum element from all '" << arraySize << "' elements in a Array are: " << max;

    return 0;
}