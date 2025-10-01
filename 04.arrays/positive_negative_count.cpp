// To find number of positive & negative numbers in a Array
#include <iostream>
using namespace std;
int main()
{
    int pcount = 0, ncount = 0, arraySize;

    cout << "Enter your array size: ";
    cin >> arraySize;

    int numbers[arraySize];

    for (int i = 0; i < arraySize; i++)
    {
        cout << i + 1 << ". Enter the integer: ";
        cin >> numbers[i];
    }

    for (int x : numbers)
    {
        if (x > 0)
            pcount++;
        else if (x < 0)
            ncount++;
    }

    cout << "Total Positive Numbers are: " << pcount << endl;
    cout << "Total Negative Numbers are: " << ncount << endl;

    return 0;
}