// To check whether the number is prime number or not
#include <iostream>
using namespace std;
int main()
{
    int num, count = 0;

    cout << "Enter your number here: ";
    cin >> num;

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
            count++;
    }

    if (count == 2)
        cout << num << " is Prime number" << endl;
    else
        cout << num << " is not a Prime number" << endl;

    return 0;
}