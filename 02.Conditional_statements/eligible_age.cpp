#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "Enter your age ";
    cin >> age;

    if (age < 12 || age > 50) // offer is for a kid or for an old age adult
        cout << "Eligible for an offer" << endl;

    else
        cout << "Not Eligible for an offer" << endl;

    return 0;
}