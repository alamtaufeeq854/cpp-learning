// Binary Search in a sorted order Array
#include <iostream>
using namespace std;
int main()
{
    int mid, lower, higher, key, arraySize;

    cout << "Enter your array size: ";
    cin >> arraySize;

    int number[arraySize];

    cout << "Please ! Enter the element in Sorted Order only" << endl;

    for (int i = 0; i < arraySize; i++)
    {
        cout << i + 1 << ". Enter the element: ";
        cin >> number[i];
    }

    cout << "Enter the element to search: ";
    cin >> key;

    lower = 0;
    higher = arraySize - 1;

    while (lower <= higher)
    {
        mid = (lower + higher) / 2;
        if (number[mid] == key)
        {
            cout << key << " is found at index " << mid << endl;
            return 0;
        }
        else if (key < number[mid])
            higher = mid - 1;

        else if (key > number[mid])
            lower = mid + 1;
    }

    cout << "Element not found ! " << endl;

    return 0;
}