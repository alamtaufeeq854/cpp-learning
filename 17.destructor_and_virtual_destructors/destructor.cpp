// Destructor
#include <iostream>
using namespace std;

class First
{
    int *p;

public:
    First()
    {
        p = new int[10];
        cout << "Constructor of First" << endl;
    }

    ~First()
    {
        delete[] p;
        cout << "Destructor of First" << endl;
    }
};

void fun_First()
{
    First *p = new First();
    delete p; // In dynamic memory destructor can't be called automatically
}

class Second
{
    int *q;

public:
    Second()
    {
        q = new int[10];
        cout << "Constructor of Second" << endl;
    }

    ~Second()
    {
        delete[] q;
        cout << "Destructor of Second" << endl;
    }
};

void fun_Second()
{
    Second *q = new Second();
    // Destructor is not called because the object is not deleted
}

int main()
{
    fun_First();
    fun_Second();

    return 0;
}
