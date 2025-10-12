// virtual function example 01
#include <iostream>
using namespace std;

class Base
{
public:
    virtual void display() // virtual function
    {

        cout << "Display of Base " << endl;
    }
};

class Derived : public Base
{
public:
    void display()
    {

        cout << "Display of Derived " << endl;
    }
};

int main()
{

    Derived d;

    Base *p = &d;

    p->display(); // function is overrided due to virtual function

    return 0;
}