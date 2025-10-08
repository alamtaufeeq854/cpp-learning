// Reverse Find function
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s, c;

    cout << "Enter Your string: ";
    getline(cin, s);

    cout << "Enter Your string or character to find from reverse: ";
    getline(cin, c);

    s.rfind(c); // To find the index of char or string from reverse

    cout << c << " is Found at index: " << s.rfind(c) << endl;

    return 0;
}