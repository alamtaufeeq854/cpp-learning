// String swapping
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

    s.swap(p); // 2nd string replaced to first string

    cout << "First String: " << s << endl;
    cout << "Second String: " << p << endl;

    return 0;
}
