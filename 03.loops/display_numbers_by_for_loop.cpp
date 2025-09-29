// Displaying numbers upto 'n' by using for loop
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the number here: ";
    cin >> num;

    for (int i = 1; i <= num; i++) // initialisation, checking condition, increment by 1
    {
        cout << i << endl; // process
    }

    return 0;
}