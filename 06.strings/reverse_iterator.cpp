//  Reverse Iterator
#include <iostream>
using namespace std;
int main()
{
    string str = "hello";

    string::reverse_iterator it;

    for (it = str.rbegin(); it != str.rend(); it++)
    {
        cout << *it;
    }

    return 0;
}