// Find username in uname
#include <iostream>
using namespace std;

int main()
{
    string uname = "ajay12543@gmail.com";
    int i = uname.find('@');
    uname = uname.substr(0, i);

    cout << "User Name is " << uname << endl;

    string::iterator it;
    for (it = uname.begin(); it != uname.end(); it++)
    {
        if (!((*it >= 65 && *it <= 90) || (*it >= 97 && *it <= 122) || (*it >= '0' && *it <= '9') || (*it == '_')))
        {
            cout << " invalid email " << endl;
            return 0;
        }
    }

    return 0;
}