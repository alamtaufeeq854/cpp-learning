//  STL by using Set
#include <iostream>
#include <set>
using namespace std;

int main()
{
    set<int> s = {2, 4, 6, 8, 10};
    s.insert(20);
    s.insert(30);
    set<int>::iterator itr;
    cout << "Using Iterator" << endl;

    for (itr = s.begin(); itr != s.end(); itr++)
        cout << *itr << endl;
    cout << "Using For Each Loop" << endl;

    for (int x : s)
        cout << x << endl;

    return 0;
}
