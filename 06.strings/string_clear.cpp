// To Clear your string
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;

    cout << "Enter  your String: ";
    getline(cin, s);

    s.clear(); // to clear out entire string

    cout << "Your string is cleared now, and length of your string becomes: " << s.length() << endl;

    return 0;
}