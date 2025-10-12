// 3rd Example of base class pointer and derived class object
#include <iostream>
using namespace std;

class BasicCar
{
public:
    void start()
    {

        cout << "starting  BasicCar " << endl;
    }
};

class AdvanceCar : public BasicCar
{
public:
    void playMusic()
    {

        cout << "playing music of AdvanceCar " << endl;
    }
};

int main()
{

    AdvanceCar a;
    BasicCar *b = &a;

    b->start();
    //  b->playMusic;         // "Not Possible"

    // Error

    //  AdvanceCar *a;
    // a = new BasicCar();

    //  a->start();
    //  a->playMusic();

    return 0;
}