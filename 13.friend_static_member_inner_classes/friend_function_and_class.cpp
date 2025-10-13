// Friend Function
#include <iostream>
using namespace std;

class Test
{

private:
    int a;

protected:
    int b;

public:
    int c;

    friend void fun();
};

void fun()
{
    Test t;
    t.a = 5;
    t.b = 6;
    t.c = 4;
}

int main()
{

    return 0;
}