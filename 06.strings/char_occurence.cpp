// character occurence
#include <iostream>
#include <string.h> // To call strchr & strrchr function
using namespace std;
int main()
{
    // For strchr
    cout << "For case 1: " << endl;

    char s[100];

    cout << "Enter here: ";
    cin.get(s, 100);

    cin.ignore();

    char p;

    cout << "Enter a character here Again so, we could find from 1st input: ";
    cin >> p;

    cout << "After Looking from forward, the word will be: " << strchr(s, p) << endl;
    cin.ignore();

    // For strrchr
    cout << "For case 2: " << endl;

    char q[100];

    cout << "Enter here: ";
    cin.get(q, 100);

    cin.ignore();

    char r;

    cout << "Enter a character here Again ! so, we could find word from 3rd input ";
    cin >> r;

    cout << "After Looking from reverse, the word will be: " << strrchr(q, r) << endl;

    return 0;
}