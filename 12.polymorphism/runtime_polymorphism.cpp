// Runtime Polymorphism
#include <iostream>
using namespace std;

class Car
{
public:
    virtual void start() = 0; // Pure virtual function
};

class Innova : public Car
{
public:
    void start()
    {

        cout << "Innova Started " << endl;
    }
};

class Swift : public Car
{
public:
    void start()
    {

        cout << "Swift Started " << endl;
    }
};

int main()
{

    Car *ptr = new Innova();
    ptr->start(); // function is overrided due to virtual function

    ptr = new Swift();
    ptr->start();

    return 0;
}