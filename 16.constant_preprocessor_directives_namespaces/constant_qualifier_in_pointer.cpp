// Constant Qualifier In Pointer
#include <iostream>
using namespace std;

int main()
{

    const int NUM1 = 17;
    int num2 = 45, num3 = 89;

    //        int *ptr = &NUM1;        // Wrong
    int const *PTR1 = &NUM1;
    PTR1 = &num2;

    //    ++*PTR1;        // wrong

    int *const PTR2 = &num2;

    //    *PTR2 = &num3;  // wrong

    return 0;
}
