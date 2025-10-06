// String Pop back
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;

    cout << "Enter Your string: ";
    getline(cin, s);

    s.pop_back(); // removes a character at the end of the string

    cout << s << endl;

    return 0;
}