// To Find Capacity of String
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;

    cout << "Enter Your String here: ";
    getline(cin, s); // capacity of string is bigger than or equal to size of string

    cout << "Capacity of your string \"" << s << "\" is: " << s.capacity() << endl;

    return 0;
}