// Palindrome
#include <iostream>
using namespace std;
int main()
{
    string str = "madam";
    string rev = "";

    int len = str.length();
    rev.resize(len);

    for (int i = 0, j = len - 1; i < len; i++, j--)
    {
        rev[j] = str[i];
    }

    string::iterator itt;
    for (itt = str.begin(); itt != str.end(); itt++)
    {
        if (*itt >= 97 && *itt <= 122)
        {
            *itt -= 32;
        }
    }

    string::iterator it;
    for (it = rev.begin(); it != rev.end(); it++)
    {
        if (*it >= 97 && *it <= 122)
        {
            *it -= 32;
        }
    }

    if (rev.compare(str) == 0)
        cout << "Palindrome " << endl;

    else
        cout << "NOT a Palindrome " << endl;

    return 0;
}