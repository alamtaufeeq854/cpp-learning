// Linear Search through Function
#include <iostream>
using namespace std;

int fun(int A[], int size, int key)
{
    for (int i = 0; i < size; i++)
    {
        cout << i + 1 << ". Enter an integer: ";
        cin >> A[i];
    }

    for (int i = 0; i < size; i++)
    {
        if (A[i] == key)
        {
            cout << key << " is found at index " << i << endl;
            return 0;
        }
    }
    cout << key << " is not Found !" << endl;
}

int main()
{
    int arraySize, key;

    cout << "Enter Size of your array: ";
    cin >> arraySize;

    int number[arraySize];

    cout << "Enter an element to search: ";
    cin >> key;

    fun(number, arraySize, key);

    return 0;
}
