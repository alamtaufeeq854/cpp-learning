// Inner Class
#include <iostream>
using namespace std;

class Outer
{
public:
    void display()
    {
        i.fun();
    }

    class Inner
    {
    public:
        void fun()
        {
            cout << " Inner Class " << endl;
        }
    };
    Inner i;
};

int main()
{

    Outer d;
    d.display();

    Outer::Inner i;

    i.fun();

    return 0;
}