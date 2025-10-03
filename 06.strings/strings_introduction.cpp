// Introduction to the Strings
#include <iostream>
using namespace std;
int main()
{

    char s[10] = "Hello"; // string with size  10
    cout << s << endl;
    char p[] = "Hello"; // string with size  exact size of string including null character
    cout << p << endl;
    char q[6] = {'H', 'e', 'l', 'l', 'o', '\0'}; //   '\0' is a null character which makes the array a string otherwise it will be an array
    cout << q << endl;                           // string
    char r[] = {'H', 'e', 'l', 'l', 'o'};        //   '\0' is a null character which makes the array a string otherwise it will be an array
    cout << r << endl;                           // Array
    char K[6] = {72, 101, 108, 108, 111, 0};     //   '0' is a null character in ASCII which makes the array a string otherwise it will be an array
    cout << K << endl;                           // string
    char m[6] = {72, 101, 108, 108, 111};        //   '0' is a null character in ASCII which makes the array a string otherwise it will be an array
    cout << m << endl;                           // Array

    return 0;
}