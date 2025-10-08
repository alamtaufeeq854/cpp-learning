// String to character
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;

    cout << "Enter Your string: ";
    getline(cin, s);

    char str[s.length()];

    s.copy(str, s.length()); // string is copied to characters in array

    str[s.length()] = '\0'; // To end string at required place

    cout << "Array becomes: " << str << endl;

    return 0;
}
