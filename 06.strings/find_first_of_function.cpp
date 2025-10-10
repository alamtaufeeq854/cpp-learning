// Find First of Function
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s, c;

    cout << "Enter Your string: ";
    getline(cin, s);

    cout << "Enter Your string or character to find from string: ";
    getline(cin, c);

    s.find_first_of(c); // To find the index of char & individual characters of string.

    cout << c << " is firstly found at index: " << s.find_first_of(c) << endl;

    return 0;
}