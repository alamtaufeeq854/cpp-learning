// virtual function example 02
#include <iostream>
using namespace std;

class BasicCar
{
public:
    virtual void start() // virtual function
    {

        cout << "BasicCar Started " << endl;
    }
};

class AdvanceCar : public BasicCar
{
public:
    void start()
    {

        cout << "AdvanceCar Started " << endl;
    }
};

int main()
{

    BasicCar *ptr = new AdvanceCar();

    ptr->start(); // function is overrided due to virtual function

    return 0;
}