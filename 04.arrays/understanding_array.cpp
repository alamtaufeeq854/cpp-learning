// Understanding about Arrays
#include <iostream>
using namespace std;
int main()
{
    int A[5] = {23, 39, 4, 17, 10}; // size of Array is 5
    int B[5] = {87, 56, 54};        // Rest of the elements becomes zero

    // Acessesing the elements of an Array 'A'

    for (int i = 0; i < 5; i++)
    {
        cout << A[i] << " ";
    }

    cout
        << endl;
    int i = 0;

    // Acessesing the elements of an Array 'B'

    while (i != 5)
    {
        cout << B[i] << " ";
        i++;
    }

    return 0;
}