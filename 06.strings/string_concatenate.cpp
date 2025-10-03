// String Concatenate
#include <iostream>
#include <string.h> // To call concatenate function
using namespace std;
int main()
{
    // For strcat
    cout << "For case 1: " << endl;

    char s[100];

    cout << "Enter Your first string: ";
    cin.get(s, 100);

    cin.ignore();

    char p[100];

    cout << "Enter Your second string: ";
    cin.get(p, 100);

    cin.ignore();

    strcat(s, p); // 2nd string is added to first string

    cout << s << endl;

    // For strncat
    cout << "For case 2: " << endl;

    char q[100];

    cout << "Enter Your first string: ";
    cin.get(q, 100);

    cin.ignore();

    char r[100];

    cout << "Enter Your second string: ";
    cin.get(r, 100);

    strncat(q, r, 3); // 3 char of 2nd string is added to first string

    cout << q << endl;
}