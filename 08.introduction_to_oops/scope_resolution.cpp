// Scope Resolution
#include <iostream>
using namespace std;

class Rectangle
{
private:
    float mLength;
    float mBreadth;

public:
    Rectangle(float l = 0, float b = 0);
    void setLength(float l);
    void setBreadth(float b);
    Rectangle(Rectangle &r);
    float area();
    float perimeter();
    float getLength() { return mLength; }
    float getBreadth() { return mBreadth; }
    bool isSquare(); // Enquiry Constructor
    ~Rectangle();    // Destructor
};

int main()
{
    float length, breadth;

    cout << "Enter your length of rectangle: ";
    cin >> length;

    cout << "Enter your breadth of rectangle: ";
    cin >> breadth;

    Rectangle r1(length, breadth);
    Rectangle r(r1);

    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;

    if (r1.isSquare())
    {
        cout << "Rectangle is a square " << endl;
    }

    return 0;
}

Rectangle::Rectangle(float l, float b)
{
    setLength(l);
    setBreadth(b);
}

void Rectangle::setLength(float l)
{

    if (l >= 0)
    {
        mLength = l;
    }
    else
    {
        mLength = 0;
    }
}

void Rectangle::setBreadth(float b)
{

    if (b >= 0)
    {
        mBreadth = b;
    }
    else
    {

        mBreadth = 0;
    }
}

Rectangle::Rectangle(Rectangle &r) // Copy constructor
{
    mLength = r.mLength;
    mBreadth = r.mBreadth;
}

float Rectangle::area()
{
    return mLength * mBreadth;
}

float Rectangle::perimeter()
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
