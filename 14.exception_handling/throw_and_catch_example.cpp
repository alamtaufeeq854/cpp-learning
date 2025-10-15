// Example of Throw and Catch
#include <iostream>
using namespace std;

class StackOverflow : public exception
{
};
class StackUnderflow : public exception
{
};

class Stack
{
private:
    int *stk;
    int top;
    int size;

public:
    Stack(int sz = 1)
    {
        top = -1;
        size = sz;
        stk = new int[size];
    }

    void push(int x)
    {
        if (top == size - 1)
            throw StackOverflow();
        top++;
        stk[top] = x;
    }

    int pop()
    {
        if (top == -1)
            throw StackUnderflow();
        return stk[top--];
    }
};

int main()
{

    Stack s(5);
    try
    {
        s.push(8);
        s.push(7);
        s.push(6);
        s.push(1);
        s.push(9);
    }

    catch (StackOverflow)
    {
        cout << " StackOverflow" << endl;
    }

    catch (StackUnderflow)
    {
        cout << " StackUnderflow" << endl;
    }

    return 0;
}