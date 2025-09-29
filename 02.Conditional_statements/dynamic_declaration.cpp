// Understanding the concept of Dynamic Declaration
#include <iostream>
using namespace std;
int main()
{
    int c = 8; // 'c' will remain in memory until the end of main function

    if (true)
    {
        int a = 5;         // 'a' is declared
        cout << a << endl; // 'a' will be deleted after the end of if block
    } // 'a' is deleted
    cout << c << endl; // 'a' is not in the memory now
}