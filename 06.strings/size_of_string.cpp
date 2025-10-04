// To Find Size of string, it same as length of string
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;

    cout << "Enter Your String here: ";
    getline(cin, s);

    cout << "Size of your string \"" << s << "\" is: " << s.size() << endl;

    return 0;
}