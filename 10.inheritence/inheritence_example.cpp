// Inheritence Example
#include <iostream>
using namespace std;

class Rectangle
{

private:
    int mLength;
    int mBreadth;

public:
    Rectangle(int l = 0, int b = 0);
    void setLength(int l);
    void setBreadth(int b);
    int getLength() { return mLength; }
    int getBreadth() { return mBreadth; }
    int area();
    int perimeter();
    bool isSquare();
    ~Rectangle();
};
class Cuboid : public Rectangle
{

private:
    int mHeight;

public:
    Cuboid(int l = 0, int b = 0, int h = 0)
    {
        setLength(l);
        setBreadth(b);
        mHeight = h;
    }
    int volume()
    {
        return area() * mHeight;
    }
};

int main()
{

    Cuboid c(5, 9, 3);
    cout << "Volume is " << c.volume() << endl;

    return 0;
}

Rectangle::Rectangle(int l, int b)
{
    setLength(l);
    setBreadth(b);
}
void Rectangle::setLength(int l)
{
    if (l < 0)
    {
        mLength = 0;
    }
    else
    {
        mLength = l;
    }
}
void Rectangle::setBreadth(int b)
{
    if (b < 0)
    {
        mBreadth = 0;
    }
    else
    {
        mBreadth = b;
    }
}
int Rectangle::area()
{
    return mLength * mBreadth;
}
int Rectangle::perimeter()
{
    return 2 * (mLength + mBreadth);
}
bool Rectangle::isSquare()
{
    return mLength == mBreadth;
}
Rectangle::~Rectangle()
{
    cout << "Rectangle is destroyed " << endl;
}
