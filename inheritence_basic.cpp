// Inheritence Basics
#include <iostream>
using namespace std;

class Base
{
public:
    int a;

    void display()
    {
        cout << "Display of Base " << a << endl;
    }
};

class Derived : public Base
{
public:
    void show()
    {
        cout << "Show of Derived " << a << endl;
    }
};

int main()
{

    Derived d;
    d.a = 5;
    d.show();
    d.display();

    return 0;
}