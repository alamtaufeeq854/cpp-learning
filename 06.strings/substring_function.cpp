// Substring function
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s, c;

    cout << "Enter Your string: ";
    getline(cin, s);

    cout << "String \"" << s << "\" After applying substr function becomes: " << s.substr(3, 2) << endl;

    return 0;
}