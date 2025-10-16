// Virtual Destructor
#include <iostream>
using namespace std;

class Base
{
public:
    virtual ~Base()
    {
        cout << "Destructor of Base " << endl;
    }
};

class Derived : public Base
{
public:
    ~Derived()
    {
        cout << "Destructor of Derived " << endl;
    }
};

void fun()
{
    Base *ptr = new Derived();
    delete ptr;
}
int main()
{
    fun();

    return 0;
}