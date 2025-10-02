// Arithemetic Operations on Pointers
#include <iostream>
using namespace std;
int main()
{
    int *p, *q;

    int A[5] = {8, 9, 12, 14, 16};

    p = A;
    q = &A[4];

    cout << *p << endl; // Prints the value at p (A[0] = 8)
    p++;                // move p one step forward : now at A[1]
    cout << *p << endl; // Prints the new value (A[1] = 9)
    p = p + 3;          // move p three steps forward : now at A[4]
    cout << *p << endl; // Prints A[4] = 16
    p--;                // move p one step backward : now at A[3]
    cout << *p << endl; // Prints A[3] = 14

    // Pointer subtraction:
    // q (A[4]) - p (A[3]) = 1
    // Meaning there are 1 element between p and q

    cout << q - p << endl;

    return 0;
}