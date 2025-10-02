// To create 2_Dimensonal Array
#include <iostream>
using namespace std;
int main()
{
    int row, coloumn;

    cout << "Enter the number of rows: ";
    cin >> row;
    cout << "Enter the number of coloumns: ";
    cin >> coloumn;

    int A[row][coloumn], B[row][coloumn], C[row][coloumn];

    // For A
    cout << "For 1st Array !" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            cout << "Enter the element for " << i + 1 << " Row & " << j + 1 << " Coloumn: ";
            cin >> A[i][j];
        }
    }

    // For B
    cout << "For 2nd Array !" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            cout << "Enter the element for " << i + 1 << " Row & " << j + 1 << " Coloumn: ";
            cin >> B[i][j];
        }
    }

    // Resultant C=A+B;
    cout << endl
         << "Resultant Array !" << endl;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < coloumn; j++)
        {
            C[i][j] = A[i][j] + B[i][j];
            cout << C[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}