// Preprocessor Directives for String
#include <iostream>
using namespace std;

#define msg(x) #x

int main()
{

    cout << msg(hello !world) << endl; // Becomes String

    return 0;
}
