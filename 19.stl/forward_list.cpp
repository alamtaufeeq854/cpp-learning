//  STL by using forward list
#include <iostream>
#include <forward_list>
using namespace std;

int main()
{
    forward_list<int> fl = {2, 4, 6, 8, 10};
    fl.push_front(20);
    fl.push_front(30);
    forward_list<int>::iterator itr;
    cout << "Using Iterator" << endl;

    for (itr = fl.begin(); itr != fl.end(); itr++)
        cout << ++*itr << endl;
    cout << "Using For Each Loop" << endl;

    for (int x : fl)
        cout << x << endl;

    return 0;
}
