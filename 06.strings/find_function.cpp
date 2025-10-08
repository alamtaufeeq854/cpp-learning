// Find function
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s, c;

    cout << "Enter Your string: ";
    getline(cin, s);

    cout << "Enter Your string or character to find: ";
    getline(cin, c);

    s.find(c); // To find the index of char or string

    cout << c << " is Found at index: " << s.find(c) << endl;

    return 0;
}
