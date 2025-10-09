// inline function
#include <iostream>
using namespace std;

class test
{
public:
    void fun1()
    {
        cout << " Inline " << endl;
    }

    void fun2();

    inline void fun3(); // non-inline to inline
};

int main()
{

    test t;

    t.fun1();
    t.fun2();
    t.fun3();

    return 0;
}

void test::fun2()
{
    cout << " Non Inline " << endl;
}

void test::fun3()
{
    cout << " It was non-Inline, but it becomes inline " << endl;
}