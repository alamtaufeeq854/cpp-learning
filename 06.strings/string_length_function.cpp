// Length of a string
#include <iostream>
#include <string.h> // To call Length Function
using namespace std;
int main()
{
    char s[100];
    cout << "Enter here: ";
    cin.get(s, 100);

    cout << "Length of your String '" << s << "' is: " << strlen(s) << endl;

    return 0;
}