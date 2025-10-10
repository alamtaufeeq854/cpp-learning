// Find Last of Function
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

    s.find_last_of(c); // To find the index of char & individual characters of string from reverse

    cout << c << " from last found at index: " << s.find_last_of(c) << endl;

    return 0;
}