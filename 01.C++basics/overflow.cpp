// understanding overflow concepts
#include <iostream>
using namespace std;
int main()
{
    char x = 127;  // maximum value in 1 byte
    char y = -128; // minimum value in 1 byte

    x += 1;
    y -= 1;

    cout << (int)x << endl;
    cout << (int)y << endl;

    return 0;
}