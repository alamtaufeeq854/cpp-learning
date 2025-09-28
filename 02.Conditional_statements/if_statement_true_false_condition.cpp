#include <iostream>
using namespace std;
int main()
{
    // 1st condition
    if (true)
        cout << "If statement Always Executed" << endl; // always be true, hence it always shows it
    else
        cout << "Else statement Never Executed" << endl; // will never reached in this condition

    // 2nd condition
    if (false)
        cout << "IF statement Never Executed" << endl; // always be false, hence it never shows it
    else
        cout << "Else statement Always Executed" << endl; // since if-statement is always false, hence it always shows it

    // 3rd condition
    if (0)                                             // 0 will act like a false in it
        cout << "IF statement Never Executed" << endl; // always be false, hence it never shows it
    else
        cout << "Else statement Always Executed" << endl; // since if-statement is always false, hence it always shows it

    // 4th condition
    if (64)                                             // Any integer except '0' act like a true in it
        cout << "If statement Always Executed" << endl; // always be true, hence it always shows it
    else
        cout << "Else statement Never Executed" << endl; // will never reached in this condition

    // 5th condition
    if (-895)                                           // Any integer except '0' act like a true in it
        cout << "If statement Always Executed" << endl; // always be true, hence it always shows it
    else
        cout << "Else statement Never Executed" << endl; // will never reached in this condition

    return 0;
}