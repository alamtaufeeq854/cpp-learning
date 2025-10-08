// Constructor
#include <iostream>
using namespace std;

class Rectangle
{
private:
    float mLength;
    float mBreadth;

public:
    Rectangle(float l = 0, float b = 0) // constructor
    {

        setLength(l);
        setBreadth(b);
    }

    void setLength(float l)
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

    void setBreadth(float b)
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

    float getLength()
    {

        return mLength;
    }

    float getBreadth()
    {

        return mBreadth;
    }

    float area()
    {
        return mLength * mBreadth;
    }

    float perimeter()
    {
        return 2 * (mLength + mBreadth);
    }
};

int main()
{
    float length, breadth;

    cout << "Enter your length of rectangle: ";
    cin >> length;

    cout << "Enter your breadth of rectangle: ";
    cin >> breadth;

    Rectangle r1(length, breadth);

    cout << "Area is " << r1.area() << endl;
    cout << "Perimeter is " << r1.perimeter() << endl;

    return 0;
}