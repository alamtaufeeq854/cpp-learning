// To Find Length of string
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;

    cout << "Enter Your String here: ";
    getline(cin, s);

    cout << "Length of your string \"" << s << "\" is: " << s.length() << endl;

    return 0;
}