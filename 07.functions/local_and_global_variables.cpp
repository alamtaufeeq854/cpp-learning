// Local & Global Variables
#include <iostream>
using namespace std;

int g = 10; // Global Variable accesseble to all functions

void display()
{
    int a = 5; // Local Variable only accesseble to the function in which it declared

    a++;
    g++;
    g = g + a;

    cout << g << endl;
}

int main()
{
    g += 2;

    cout << g << endl;

    display();

    return 0;
}