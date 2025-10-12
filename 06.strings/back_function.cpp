// Use of back function
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;

    cout << "Enter Your string: ";
    getline(cin, s);

    cout << "Last Character of your string \" " << s << "\" is: " << s.back() << endl;

    return 0;
}
