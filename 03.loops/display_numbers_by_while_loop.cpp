// Displaying numbers upto 'n' by using while loop
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the number here: ";
    cin >> num;

    int i = 1; // intialisation

    while (i <= num) // checking condition
    {
        cout << i << endl; // process
        i++;               // increment by 1
    }

    return 0;
}