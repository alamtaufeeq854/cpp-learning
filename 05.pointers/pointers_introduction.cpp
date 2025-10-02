// Introduction to the pointers
#include <iostream>
using namespace std;
int main()
{

    int num;

    cout << "Enter a number: ";
    cin >> num;

    int *ptr; // Pointer Declaration

    ptr = &num; // Intialization ( pointer 'ptr' having address of data stored in variable 'num')

    cout << *ptr << endl; // Derefrencing (shows the data through address i.e stored in pointer 'ptr')

    cout << &num << endl; // shows the address of data

    cout << ptr << endl; // shows the address of data i.e is stored by variable 'ptr'

    cout << num << endl; // shows the data i.e stored in variable 'num'

    return 0;
}