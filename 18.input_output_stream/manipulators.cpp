// Manipulators
#include <iostream>
#include <iomanip> // Needed for setw()
using namespace std;

int main()
{
    cout << dec << 163 << endl; // Decimal output (default): 163
    cout << hex << 163 << endl; // Hexadecimal output: a3
    cout << oct << 163 << endl; // Octal output: 243

    cout << fixed << 125.731 << endl; // Fixed-point notation for floating-point numbers

    cout << setw(10) << "hello" << endl; // setw(10): sets width to 10 (right-aligned by default)

    cout << 10 << " " << 20 << endl;

    return 0;
}
