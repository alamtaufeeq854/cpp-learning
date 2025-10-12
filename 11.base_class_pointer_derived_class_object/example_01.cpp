// 1st Example of base class pointer and derived class object
#include <iostream>
using namespace std;

class Base
{
public:
    void fun1()
    {

        cout << "fun1 of Base " << endl;
    }
};

class Derived : public Base
{
public:
    void fun2()
    {

        cout << "fun2 of Derived " << endl;
    }
};

int main()
{

    Base *p;
    p = new Derived();

    p->fun1();
    //  p->fun2;         // "Not Possible"

    // Error

    //  Derived *q;
    // q = new Base();

    //  q->fun1();
    //  q->fun2();

    return 0;
}