// Constant Qualifier In call by reference
#include <iostream>
using namespace std;

void fun(const int &x, int &y)
{

    cout << x << " " << y << endl;
    //    x++;          // Wrong: cannot modify a const reference
}

int main()
{

    int x = 8, y = 6;

    fun(x, y);

    cout << x << " " << y << endl;

    return 0;
}