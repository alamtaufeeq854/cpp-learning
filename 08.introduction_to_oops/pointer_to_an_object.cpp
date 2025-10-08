// Pointer to an object
#include <iostream>
using namespace std;

class Rectangle
{
public:
    float length;
    float breadth;

    float area()
    {
        return length * breadth;
    }

    float perimeter()
    {
        return 2 * (length + breadth);
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
    Rectangle *ptr;

    ptr = &r1;

    ptr->length = length;
    ptr->breadth = breadth;

    cout << "Area is " << ptr->area() << endl;
    cout << "Perimeter is " << ptr->perimeter() << endl;

    return 0;
}
