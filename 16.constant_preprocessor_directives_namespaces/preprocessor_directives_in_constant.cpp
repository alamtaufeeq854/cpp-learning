// Preprocessor Directives in constant
#include <iostream>
using namespace std;

#define e 2.71828 // Preprocessor Directive
#define PI 3.1425 // Preprocessor Directive
#ifndef PI        // if PI is not defined
#define PI 3      // if PI is not defined, then defined this
#endif

int main()
{

    cout << e << endl;
    cout << PI << endl;

    return 0;
}
