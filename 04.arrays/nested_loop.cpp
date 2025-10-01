// To understand about nested loop & 2D Array
#include <iostream>
using namespace std;
int main()
{
    // using Nested Loop
    for (int i = 1; i <= 6; i++)
    {
        for (int j = 1; j <= 6; j++)
        {
            cout << "(" << i << "," << j << ") ";
        }
        cout << endl;
    }
    return 0;
}