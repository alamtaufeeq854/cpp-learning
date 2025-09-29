// Infinite Loop
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the number here: ";
    cin >> num;

    // infinite loop
    for (;;)
    {
        cout << num << endl; // process
    }

    return 0;
}