// Learning about typdef
#include <iostream>
using namespace std;
typedef int marks;
typedef int rollno;
int main()
{

    marks m1, m2;
    rollno r1, r2;

    m1 = 82;
    m2 = 79;

    r1 = 9;
    r2 = 13;

    cout << "Marks are " << m1 << " & " << m2 << endl;
    cout << "Roll Numbers are " << r1 << " & " << r2 << endl;

    return 0;
}