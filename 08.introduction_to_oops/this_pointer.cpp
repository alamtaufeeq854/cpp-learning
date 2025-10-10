// This Pointer
#include <iostream>
using namespace std;

class Rectangle
{
private:
    float mLength;
    float mBreadth;

public:
    Rectangle(float l = 0, float b = 0)
    {

        setLength(l);
        setBreadth(b);
    }

    void setLength(float mLength)
    {

        if (mLength >= 0)
        {
            this->mLength = mLength; //  This pointer
        }
        else
        {
            mLength = 0;
        }
    }

    void setBreadth(float mBreadth)
    {

        if (mBreadth >= 0)
        {
            this->mBreadth = mBreadth; //  This pointer
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

    Rectangle(Rectangle &r)
    {

        mLength = r.mLength;
        mBreadth = r.mBreadth;
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
    Rectangle r(r1);

    cout << "Area is " << r.area() << endl;
    cout << "Perimeter is " << r.perimeter() << endl;

    return 0;
}