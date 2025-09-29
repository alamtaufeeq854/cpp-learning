// To check whether the year is leap year or not
#include <iostream>
using namespace std;
int main()
{
    int yearInput;

    cout << "Enter the year here: ";
    cin >> yearInput;

    if (yearInput % 4 == 0)
    {
        if (yearInput % 100 == 0)
        {
            if (yearInput % 400 == 0)
            {
                cout << yearInput << " is a leap year" << endl;
            }
            else
                cout << yearInput << " is not a leap year" << endl;
        }
        else
            cout << yearInput << " is a leap year" << endl;
    }
    else
        cout << yearInput << " is not a leap year" << endl;

    return 0;
}