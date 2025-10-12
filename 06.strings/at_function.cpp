// Use of at function
#include <iostream>
#include <string>
using namespace std;
int main()
{
    int num;
    string s;

    cout << "Enter Your string: ";
    getline(cin, s);

    cout << "Enter Index: ";
    cin >> num;

    if (num < 0 || num >= s.length())
    {
        cout << "Index should be Valid ! " << endl;
        return 0;
    }

    else
        cout << "Character at " << num << " is: " << s.at(num) << endl;

    return 0;
}
