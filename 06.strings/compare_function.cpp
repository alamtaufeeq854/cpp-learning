// To compare strings
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;

    cout << "Enter a Word here ";
    getline(cin, s);

    string p;

    cout << "Enter another Word here ";
    getline(cin, p);

    int num = s.compare(p);

    if (num > 0)
        cout << "The word '" << p << "' appears earlier in dictionary" << endl;

    else if (num < 0)
        cout << "The word '" << s << "' appears earlier in dictionary" << endl;

    else
        cout << "Both words are same !" << endl;

    return 0;
}