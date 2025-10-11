// Access Specifiers
#include <iostream>
using namespace std;

class Base
{

private:
    int a;

protected:
    int b;

public:
    int c;

    void fun()
    {
        a = 5; // Private variable can be access inside class
        b = 9; // Protected variable can be access inside class
        c = 6; // Public variable can be access inside class
    }
};

class Derived : public Base
{
public:
    void fun2()
    {
        b = 8; // Protected variable can be access inside child class
        c = 1; // Public variable can be access inside child class
    }
};

int main()
{

    Base x;

    x.c = 7; // Public variable can be access by object

    return 0;
}