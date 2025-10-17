// Lambda Expressions
#include <iostream>
using namespace std;
int main()
{
    []()
    { cout << "Hello" << endl; }();

    [](int x, int y)
    { cout << "sum is " << x + y << endl; }(10, 6);

    int a = [](int x, int y)
    { return x + y; }(10, 6);

    cout << a << endl;

    int b = 10;

    auto f = [&b]()
    { cout << ++b << endl; };

    f();
    b++;
    f();

    return 0;
};