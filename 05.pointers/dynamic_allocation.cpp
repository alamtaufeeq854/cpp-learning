// To understand the dynamic allocation in pointers
#include <iostream>
using namespace std;
int main()
{
    int *p, size;

    cout << "Enter the size of Array: ";
    cin >> size;

    p = new int[size]; // A pointer is created in Heap.

    for (int i = 0; i < size; i++)
    {
        cout << "Enter the " << i + 1 << " element here: ";
        cin >> p[i];
    }

    delete[] p;  // pointer deleted
    p = nullptr; // pointer reset

    return 0;
}