// 2nd Example of base class pointer and derived class object
#include <iostream>
using namespace std;

class Rectangle
{
public:
    void area()
    {

        cout << "area of Rectangle " << endl;
    }
};

class Cuboid : public Rectangle
{
public:
    void volume()
    {

        cout << "volume of Cuboid " << endl;
    }
};

int main()
{

    Cuboid c;
    Rectangle *r = &c;

    r->area();
    //  r->volume;         // "Not Possible"

    // Error

    //  Cuboid *c;
    // c = new Rectangle();

    //  c->area();
    //  c->volume();

    return 0;
}