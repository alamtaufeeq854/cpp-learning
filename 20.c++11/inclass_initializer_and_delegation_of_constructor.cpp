// Inclass initializer and delegation of constructor
#include <iostream>
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

    Rectangle() : Rectangle(1, 1) {}
};
int main()
{
    return 0;
}