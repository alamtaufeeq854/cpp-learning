// To erase your string
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;

    cout << "Enter  your String: ";
    getline(cin, s);

    s.erase(); // to erase out entire string, same as clear()

    cout << "Your string is erased now, and length of your string becomes: " << s.length() << endl;

    return 0;
}