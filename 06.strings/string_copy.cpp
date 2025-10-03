// String copy or replace
#include <iostream>
#include <string.h> // To call strcpy & strncpy function
using namespace std;
int main()
{
    // For strcpy
    cout << "For case 1: " << endl;

    char a[100];

    cout << "Enter Your first string: ";
    cin.get(a, 100);

    cin.ignore();

    char b[100];

    cout << "Enter Your second string: ";
    cin.get(b, 100);

    cin.ignore();

    strcpy(a, b); // 2nd string is copied or replaced to first string

    cout << a << endl;

    // For strncpy
    cout << "For case 2: " << endl;

    char c[100];

    cout << "Enter Your first string: ";
    cin.get(c, 100);

    cin.ignore();

    char d[100];

    cout << "Enter Your second string: ";
    cin.get(d, 100);

    strncpy(c, d, 3); // first 3 char of 2nd string is replaced or copied to first 3 char of 1st string

    cout << c << endl;

    return 0;
}