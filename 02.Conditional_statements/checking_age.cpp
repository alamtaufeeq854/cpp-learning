// Checking age of a person
#include <iostream>
using namespace std;
int main()
{
    int age;

    cout << "Enter your age here: ";
    cin >> age;

    if (age >= 13 && age <= 19)
        cout << "Teenager" << endl;

    else
        cout << "Not a Teenager";

    return 0;
}