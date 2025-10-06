// String Push back
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;

    cout << "Enter Your string: ";
    getline(cin, a);

    char b;

    cout << "Enter a char to add in last of your string: ";
    cin >> b;

    a.push_back(b); // adds a character at the end of the string

    cout << a << endl;

    return 0;
}