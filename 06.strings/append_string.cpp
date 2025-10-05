// String Append
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;

    cout << "Enter Your first string: ";
    getline(cin, s);

    string p;

    cout << "Enter Your second string: ";
    getline(cin, p);

    s.append(p); // 2nd string is added to first string

    cout << s << endl;

    return 0;
}