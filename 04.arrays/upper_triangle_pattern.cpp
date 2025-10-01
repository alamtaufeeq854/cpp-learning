// To draw of a pattern of upper triangle
#include <iostream>
using namespace std;
int main()
{
    int num;

    cout << "Enter the number of rows of a triangle: ";
    cin >> num;

    for (int i = 0; i < num; i++)
    {
        for (int j = 0; j < num; j++)
        {
            if (j < i)
                cout << " ";
            else
                cout << "*";
        }
        cout << endl;
    }
    return 0;
}