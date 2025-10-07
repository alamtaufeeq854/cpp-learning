// Return By Reference
#include <iostream>
using namespace std;

int &func(int &a)
{

    return a;
}

int main()
{
    int x = 23;

    cout << func(x) << endl; // func(x) is indirectly becomes 'x'

    func(x) = 17; // it means x=39

    cout << func(x) << endl;

    return 0;
}