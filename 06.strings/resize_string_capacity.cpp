// To resize the capacity of the string
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;

    cout << "Enter  your String: ";
    getline(cin, s);

    cout << "The capacity of your string \"" << s << "\" is: " << s.capacity() << endl;

    int resize;

    cout << "Enter the new capacity-size of your string,it must be multiple of 15, otherwise it will adjust itself: ";
    cin >> resize;

    s.resize(resize);

    cout << "The capacity of your string \"" << s << "\" is adjusted to " << s.capacity() << endl;

    return 0;
}