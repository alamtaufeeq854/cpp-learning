// Inheritence Basics
#include <iostream>
using namespace std;

// Base class definition
class Base
{
public:
    int a;

    void display() // Member function
    {
        cout << "Display of Base " << a << endl;
    }
};

class Derived : public Base // Derived class inheriting publicly from Base class
{
public:
    void show() // Member function
    {
        cout << "Show of Derived " << a << endl;
    }
};

int main()
{

    Derived d; // Object of Derived class
    d.a = 5;
    d.show();
    d.display();

    return 0;
}