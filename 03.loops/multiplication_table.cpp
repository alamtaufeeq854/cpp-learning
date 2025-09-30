// To display multiplication table
#include <iostream>
using namespace std;
int main()
{
    int tableNumber;

    cout << "Enter your number here: ";
    cin >> tableNumber;

    for (int i = 1; i <= 10; i++)
    {
        cout << tableNumber << " X " << i << " = " << tableNumber * i << endl;
    }
    return 0;
}