// To Check empty string
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;

    cout << "Enter  your String: ";
    getline(cin, s);

    if (s.empty())
        cout << "Your string is empty" << endl;

    else
        cout << "Your string is \"" << s << "\"" << endl;

    return 0;
}