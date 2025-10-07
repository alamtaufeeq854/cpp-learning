// Scoping Rule
#include <iostream>
using namespace std;

int x = 10; // Global Variable accesseble to all functions

void display()
{
    int x = 20; // Local Variable

    {
        int x = 30; // Local Variable within the block only and terminates after the end of block

        cout << x << endl; // Local Variable to the nearest scope i.e. x = 30
    }

    cout << x << endl; // Local Variable to the nearest scope i.e. x = 20

    cout << ::x << endl; // Global Variable acesseble through scope resolution
}

int main()
{

    display();

    return 0;
}