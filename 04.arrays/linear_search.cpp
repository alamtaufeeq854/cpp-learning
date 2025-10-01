// Linear Search in a Array
#include <iostream>
using namespace std;
int main()
{
    int arraySize, key;

    cout << "Enter Size of your array: ";
    cin >> arraySize;

    int number[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cout << i + 1 << ". Enter an integer: ";
        cin >> number[i];
    }

    cout << "Enter an element to search: ";
    cin >> key;

    int i = -1;

    for (int x : number)
    {
        i++;
        if (key == x)
        {
            cout << key << " is found at index " << i << endl;
            return 0;
        }
    }
    cout << key << " is not Found !" << endl;

    return 0;
}