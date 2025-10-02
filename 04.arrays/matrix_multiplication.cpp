#include <iostream>
using namespace std;
int main()
{
    int row1, coloumn1, row2, coloumn2;

    // For A
    cout << "Enter the number of rows for 1st Matrix: ";
    cin >> row1;
    cout << "Enter the number of coloumns for 1st Matrix: ";
    cin >> coloumn1;

    int A[row1][coloumn1];

    // For B
    cout << "Enter the number of rows for 2nd Matrix: ";
    cin >> row2;
    cout << "Enter the number of coloumns for 2nd Matrix: ";
    cin >> coloumn2;

    int B[row2][coloumn2];

    if (coloumn1 != row2)
    {
        cout << "Matrix Multiplication of Matrix A to Matrix B is not possible !" << endl;
        return 0;
    }

    // Input A
    cout << "For 1st Matrix !" << endl;
    for (int i = 0; i < row1; i++)
        for (int j = 0; j < coloumn1; j++)
        {
            cout << "Enter the element for " << i + 1 << " Row & " << j + 1 << " Coloumn: ";
            cin >> A[i][j];
        }

    // Input B
    cout << "For 2nd Matrix !" << endl;
    for (int i = 0; i < row2; i++)
        for (int j = 0; j < coloumn2; j++)
        {
            cout << "Enter the element for " << i + 1 << " Row & " << j + 1 << " Coloumn: ";
            cin >> B[i][j];
        }

    int C[row1][coloumn2];

    // Multiply
    cout << endl
         << "Resultant Matrix is: " << endl;
    for (int i = 0; i < row1; i++)
    {
        for (int j = 0; j < coloumn2; j++)
        {
            C[i][j] = 0;
            for (int k = 0; k < coloumn1; k++)
                C[i][j] += A[i][k] * B[k][j];

            cout << C[i][j] << " "; // Resultant Matrix
        }
        cout << endl;
    }

    return 0;
}
