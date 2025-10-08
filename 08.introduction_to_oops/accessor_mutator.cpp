// Accessor and Mutator
#include <iostream>
using namespace std;

class Rectangle
{
private:
    float mLength;  // Data Hiding
    float mBreadth; // Data Hiding

public:
    void setLength(float l) // Mutator
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

    void setBreadth(float b) // Mutator
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

    float getLength() // Accessor
    {

        return mLength;
    }

    float getBreadth() // Accessor
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

    Rectangle r1;

    r1.setLength(length);
    r1.setBreadth(breadth);

    cout << "Area is " << r1.area() << endl;
    cout << "Perimeter is " << r1.perimeter() << endl;

    return 0;
}