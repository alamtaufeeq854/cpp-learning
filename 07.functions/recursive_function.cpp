// Recursive Function
#include <iostream>
using namespace std;

void fun(int n)
{
    if (n > 0)
    {
        fun(n - 1); // Recursive Function
        cout << n << endl;
    }
}

int main()
{
    int num1;

    cout << "Enter a number: ";
    cin >> num1;

    fun(num1);

    return 0;
}