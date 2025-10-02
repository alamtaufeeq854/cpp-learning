// Average of all elements in a Array
#include <iostream>
using namespace std;
int main()
{
    int num;
    float sum = 0, average;

    cout << "Length of an Array ";
    cin >> num;

    float A[num];

    for (int i = 0; i < num; i++)
    {
        cout << "Enter the " << i + 1 << " element of Array: ";
        cin >> A[i];
        sum += A[i];
    }

    average = sum / num;

    cout << "Average of all '" << num << "' elements are: " << average << endl;

    return 0;
}
