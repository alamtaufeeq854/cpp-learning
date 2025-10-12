// Use of front function
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string s;

    cout << "Enter Your string: ";
    getline(cin, s);

    cout << "First Character of your string \" " << s << "\" is: " << s.front() << endl;

    return 0;
}
