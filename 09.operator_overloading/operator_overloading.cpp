// Operator Overloading
#include <iostream>
using namespace std;

class complex
{

public:
    int real;
    int img;

    complex operator+(complex c)
    {

        complex temp;

        temp.real = real + c.real;
        temp.img = img + c.img;

        return temp;
    }
};

int main()
{

    complex c1, c2, c3;

    c1.real = 5, c1.img = 9;
    c2.real = 8, c2.img = 7;

    c3 = c1 + c2;

    cout << c3.real << " + " << c3.img << "i" << endl;

    return 0;
}