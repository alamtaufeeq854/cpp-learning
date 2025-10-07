// Function Pointer
#include <iostream>
using namespace std;

void maxim(int x, int y, int z)
{
    if (x > y && x > z)
    {
        cout << x;
    }

    else if (y > z)
    {
        cout << y;
    }

    else
    {
        cout << z;
    }
}

int main()
{

    void (*p)(int, int, int);
    p = maxim;
    (*p)(10, 5, 8);

    return 0;
}