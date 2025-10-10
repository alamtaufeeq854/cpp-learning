// Insertion Operator Overloading
#include <iostream>
using namespace std;

class complex
{
private:
    int real;
    int img;

public:
    complex(int r = 0, int i = 0)
    {

        real = r;
        img = i;
    }

    friend ostream &operator<<(ostream &out, complex &c);
};

ostream &operator<<(ostream &out, complex &c)
{

    out << c.real << " + " << c.img << "i" << endl;
}

int main()
{

    complex c1(8, 6);

    cout << c1 << endl;

    return 0;
}