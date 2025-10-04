// Class String
#include <iostream>
#include <string>
using namespace std;
int main()
{
    string str1;

    cout << "Enter a string here, only one word without space: ";
    cin >> str1; // only takes 1st word

    cin.ignore();

    string str2;

    cout << "Enter another string here: ";
    getline(cin, str2); // takes all words

    cout << "For 1st String: " << str1 << endl;
    cout << "For 2nd String: " << str2 << endl;

    return 0;
}