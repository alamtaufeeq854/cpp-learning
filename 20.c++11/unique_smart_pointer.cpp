// Unique Smart Pointer
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
    unique_ptr<Rectangle> ptr(new Rectangle(10, 5));
    cout << ptr->area() << endl;

    unique_ptr<Rectangle> ptr2;
    //   ptr2=ptr;   //Not possible
    ptr2 = move(ptr); // ptr2 move to ptr
    cout << ptr2->area() << endl;
}