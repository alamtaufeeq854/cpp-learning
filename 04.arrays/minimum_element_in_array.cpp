// To find the minimum element in a array
#include <iostream>
using namespace std;
int main()
{
    int arraySize, minElement;

    cout << "Enter your Array size here: ";
    cin >> arraySize;

    int number[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cout << i + 1 << ". Enter an integer: ";
        cin >> number[i];
    }

    minElement = number[0];

    for (int x : number)
    {
        if (x < minElement)
            minElement = x;
    }

    cout << "Minimum element is " << minElement;

    return 0;
}