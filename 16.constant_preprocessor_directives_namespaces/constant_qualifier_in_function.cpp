// Constant Qualifier In Function
#include <iostream>
using namespace std;

class Demo
{

public:
    int x = 17;

    void display() const
    {
        //        x++;         // can't modify

        cout << x << endl;
    }
};

int main()
{
    Demo d;
    d.display();

    return 0;
}