// To check whether the number is perfect number or not
#include <iostream>
using namespace std;
int main()
{
    int num, sum = 0;

    cout << "Enter your number here: ";
    cin >> num;

    for (int i = 1; i < num; i++)
    {

        if (num % i == 0)
            sum += i;
    }
    if (sum == num)
        cout << num << " is a Perfect number" << endl;
    else
        cout << num << " is not a Perfect number" << endl;

    return 0;
}