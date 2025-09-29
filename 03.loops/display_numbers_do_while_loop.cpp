// Displaying numbers upto 'n' by using do-while loop
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the number here: ";
    cin >> num;

    int i = 1; // intialisation

    do
    {
        cout << i << endl; // process
        i++;
    } while (i <= num); // checking condition

    return 0;
}