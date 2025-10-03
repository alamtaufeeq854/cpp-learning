// reading and writing string
#include <iostream>
using namespace std;
int main()
{
    char s[50];

    cout << "Enter single word name Name: ";
    cin >> s; // exit after space
    cout << s << endl;

    cin.ignore(); // clear leftover '\n' from previous input

    char q[50];

    cout << "Enter Full Name: ";
    cin.getline(q, 50); // doesn't exit after space
    cout << q << endl;

    char p[50];

    cout << "Enter Another full Name: ";
    cin.get(p, 50); // doesn't exit after space
    cout << p << endl;

    cin.ignore(); // clear leftover '\n' from previous input necessary after 'get'

    char r[50];

    cout << "Enter Another full Name: ";
    cin.get(r, 50); // doesn't exit after space
    cout << r << endl;

    return 0;
}
