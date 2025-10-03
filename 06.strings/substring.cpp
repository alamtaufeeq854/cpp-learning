// Finding Substring
#include <iostream>
#include <string.h> // To call strstr function
using namespace std;
int main()
{
    char x[100];

    cout << "Enter Your string: ";
    cin.get(x, 100);

    cin.ignore();

    char z[100];

    cout << "Enter the substring, you have to find word from there: ";
    cin.get(z, 100);

    if (strstr(x, z) != NULL)
        cout << "Your full word is: " << strstr(x, z) << endl;
    else
        cout << "Not Found !" << endl;

    return 0;
}
