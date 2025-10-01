// To understand the working of for each loop
#include <iostream>
using namespace std;
int main()
{

    int A[6] = {'A', 'F', 'T', 'H', 'P', 'L'}; // Due to integer data type, the character value converted into ASCII value
    char B[5] = {65, 69, 97, 99, 100};         // Due to character data type, the integer value converted into character value through ASCII value

    // for each loop on Array 'A'
    for (auto x : A)      // auto determines the data type of which is same as Array 'A'
        cout << x << " "; // Copy of element of Array 'A' store in 'x' one by one

    cout << endl;

    // for each loop on Array 'B'
    for (auto x : B)      // auto determines the data type of which is same as Array 'B'
        cout << x << " "; // Copy of element of Array 'B' store in 'x' one by one

    return 0;
}
