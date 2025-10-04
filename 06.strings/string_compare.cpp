// To compare strings
#include <iostream>
#include <string.h> // To call strcmp function
using namespace std;
int main()
{

    char s[100];

    cout << "Enter a Word here ";
    cin.getline(s, 100);

    char p[100];

    cout << "Enter another Word here ";
    cin.getline(p, 100);

    int num = strcmp(s, p);

    if (num > 0)
        cout << "The word '" << p << "' appears earlier in dictionary" << endl;

    else if (num < 0)
        cout << "The word '" << s << "' appears earlier in dictionary" << endl;

    else
        cout << "Both words are same !" << endl;

    return 0;
}