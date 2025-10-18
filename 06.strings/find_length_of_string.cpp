// Find Length of string
#include <iostream>
using namespace std;
int main()
{
    string str = "welcome";

    int count = 0;
    string::iterator it;
    for (it = str.begin(); it != str.end(); it++)
    {
        count++;
    }

    cout << "Length of string is " << count << endl;

    return 0;
}