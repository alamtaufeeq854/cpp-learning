// Polymorphism on Shapes
#include <iostream>
using namespace std;

class shapes
{
public:
    virtual int area() = 0;
    virtual int perimeter() = 0;
};

class Rectangle : public shapes
{

private:
    int mLength;
    int mBreadth;

public:
    Rectangle(int l, int b) { mLength = l, mBreadth = b; }
    int area() { return mLength * mBreadth; }
    int perimeter() { return 2 * (mLength + mBreadth); }
};

class Circle : public shapes
{

private:
    int radius;

public:
    Circle(int r) { radius = r; }

    int area() { return 3.1425f * radius * radius; }
    int perimeter() { return 2 * 3.1425f * radius; }
};

int main()
{

    shapes *s = new Rectangle(5, 8);

    cout << "Area of Rectangle: " << s->area() << endl;
    cout << "Perimeter of Rectangle: " << s->perimeter() << endl;

    shapes *c = new Circle(7);

    cout << "Area of Circle: " << c->area() << endl;
    cout << "Perimeter of Circle: " << c->perimeter() << endl;

    return 0;
}