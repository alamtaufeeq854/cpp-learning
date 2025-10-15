// Template Classes
#include <iostream>
using namespace std;

template <class T>
class Stack
{
private:
    T *stk;
    int top;
    int size;

public:
    Stack(int z)
    {
        size = z;
        top = -1;
        stk = new T[size];
    }

    void push(T x);
    T pop();
};

template <class T>
void Stack<T>::push(T x)
{
    if (top == size - 1)
        cout << "Stack is Full" << endl;
    else
        stk[++top] = x;
}

template <class T>
T Stack<T>::pop()
{
    if (top == -1)
    {
        cout << "Stack is Empty" << endl;
        return 0; //
    }
    return stk[top--];
}

int main()
{
    Stack<int> s(10);
    s.push(10);
    s.push(23);
    s.push(17);

    cout << "Popped: " << s.pop() << endl;
    cout << "Popped: " << s.pop() << endl;
}
