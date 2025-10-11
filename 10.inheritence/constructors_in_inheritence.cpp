// Constructor in inheritence
#include <iostream>
using namespace std;

class Base
{
public:
    Base()
    {
        cout << "Non-Parameterised Base " << endl;
    }
    Base(int a)
    {
        cout << "Parameterised Base " << a << endl;
    }
};

class Derived : public Base
{
public:
    Derived()
    {
        cout << "Non-Parameterised Derived " << endl;
    }
    Derived(int b)
    {
        cout << "Parameterised Derived " << b << endl;
    }

    Derived(int b, int c) : Base(b)
    {
        cout << "Parameterised Derived " << c << endl;
    }
};

int main()
{

    Derived d;

    Derived e(5);

    Derived f(9, 3);

    return 0;
}