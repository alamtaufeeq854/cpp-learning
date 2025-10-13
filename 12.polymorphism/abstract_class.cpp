// Abstract Class
#include <iostream>
using namespace std;

class Base // Abstract Class
{
public:
    virtual void fun1() = 0; // Pure Virtual Function
    virtual void fun2() = 0; // Pure Virtual Function
};

class Derived : public Base
{
public:
    void fun1()
    {
        cout << "fun1 of Derived " << endl;
    }

    void fun2()
    {
        cout << "fun2 of Derived " << endl;
    }
};

int main()
{

    Base *ptr;
    ptr = new Derived();

    ptr->fun1();
    ptr->fun2();

    return 0;
}