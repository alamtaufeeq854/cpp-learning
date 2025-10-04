// String to integers & Float
#include <iostream>
#include <string.h> // To call strtol & strtof function
using namespace std;
int main()
{
    char s[100];

    cout << "Enter an integer: ";
    cin.getline(s, 100);

    char a[100];

    cout << "Enter a float: ";
    cin.getline(a, 100);

    cout << "The first String ''" << s << "'' in integer form is " << strtol(s, NULL, 10) << endl; // string to integer, 10 represents decimal system
    cout << "The second String ''" << a << "'' in float form is " << strtof(a, NULL) << endl;      // string to float

    return 0;
}