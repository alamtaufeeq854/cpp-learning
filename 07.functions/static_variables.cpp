// Static Variables
#include <iostream>
using namespace std;

void display()
{
    static int s = 0; // Global variable only for the particular function in which it declared
    int a = 0;        // local variable

    s++;
    a++;

    cout << a << " " << s << endl;
}

int main()
{

    display();

    display();

    display();

    display();

    return 0;
}