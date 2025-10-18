// Iterator
#include <iostream>
using namespace std;
int main()
{
    string str = "hello";

    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        cout << *it;
    }

    cout << endl;

    for (it = str.begin(); it != str.end(); it++)
    {
        *it -= 32; // Changes it to upper case
        cout << *it;
    }

    return 0;
};