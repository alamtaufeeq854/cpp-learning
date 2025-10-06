// String Replace
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a;

    cout << "Enter Your first string: ";
    getline(cin, a);

    string b;

    cout << "Enter Your second string: ";
    getline(cin, b);

    a.replace(3, 4, b); // 2nd string replaced the 4 char of first string from index 3 of first string

    cout << a << endl;

    return 0;
}