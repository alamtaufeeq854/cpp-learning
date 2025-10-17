// shared Smart Pointer
#include <iostream>
#include <memory>
using namespace std;
class Rectangle
{
public:
    float length;
    float breadth;

    Rectangle(int l, int b)
    {
        length = l;
        breadth = b;
    }

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
    shared_ptr<Rectangle> ptr(new Rectangle(10, 5));
    cout << ptr->area() << endl;

    shared_ptr<Rectangle> ptr2;
    ptr2 = ptr; // ptr is copied to ptr2
    cout << ptr->area() << endl;
    cout << ptr2->area() << endl;

    return 0;
}