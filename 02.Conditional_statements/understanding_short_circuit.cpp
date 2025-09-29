// Understanding the concept of short-circuit in conditional statements
#include <iostream>
using namespace std;
int main()
{
    int a = 5, b = 10, c = 6;

    // For '&&'
    if (a > b && ++c > a) // 1st condition is false, hence 2nd condition will never checked i.e. short-circuit
        cout << "Never executed because whole condition becomes false irrespective of 2nd condition due to short-circuit" << endl;

    // For '||'
    if (b > a || ++c < a) // 1st condition is true, hence 2nd condition will never checked i.e. short-circuit
        cout << "Always executed because whole condition becomes true irrespective of 2nd condition due to short-circuit" << endl;

    return 0;
}
