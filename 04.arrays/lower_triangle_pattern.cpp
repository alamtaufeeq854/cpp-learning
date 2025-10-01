// To draw of a pattern of lower triangle
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the rows of a triangle: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
    return 0;
}