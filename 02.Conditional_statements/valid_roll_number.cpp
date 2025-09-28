// To check valid or invalid Roll number
#include <iostream>
using namespace std;
int main()
{
    int r;

    cout << "Enter your roll number here: ";
    cin >> r;

    if (r > 0)
        cout << r << " is Valid Roll Number " << endl;
    else
        cout << r << " is Invalid Roll Number " << endl;

    return 0;
}