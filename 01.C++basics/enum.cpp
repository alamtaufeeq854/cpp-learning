// Learning about enum
#include <iostream>
using namespace std;
int main()
{
    enum day
    {
        mon = 1,
        tue,
        wed,
        thurs,
        fri,
        sat,
        sun
    };

    cout << mon << endl;
    cout << tue << endl;
    cout << wed << endl;
    cout << thurs << endl;
    cout << fri << endl;
    cout << sat << endl;
    cout << sun << endl;

    return 0;
}