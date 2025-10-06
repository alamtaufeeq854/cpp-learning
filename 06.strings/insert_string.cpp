// String Insert
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

    a.insert(3, b); // 2nd string is added to first string from index 3 of first string

    cout << a << endl;

    return 0;
}