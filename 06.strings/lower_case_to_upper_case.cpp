// Lower case to upper case
#include <iostream>
using namespace std;
int main()
{
    string str = "wElCoMe";

    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        if (*it >= 97 && *it <= 122)
        {
            *it -= 32;
        }
    }

    cout << str << endl;

    return 0;
}