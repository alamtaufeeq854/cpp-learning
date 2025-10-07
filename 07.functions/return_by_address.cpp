// Return By Address
#include <iostream>
using namespace std;

int *func()
{
    int *p = new int[5];

    for (int i = 0; i < 5; i++)
    {
        p[i] = 5 * i;
    }

    return p;
}

int main()
{
    int *q = func();

    for (int i = 0; i < 5; i++)
        cout << q[i] << endl;

    return 0;
}