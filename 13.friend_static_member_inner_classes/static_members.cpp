// Static Members
#include <iostream>
using namespace std;

class Test
{
public:
    int a = 10;

    static int count;

    Test()
    {

        a++;
        count++;
    }

    static int getCount()
    {
        return count;
    }
};
int Test ::count = 0;

int main()
{

    Test t1, t2;
    cout << t1.count << endl;
    cout << t2.count << endl;
    cout << Test::getCount() << endl;

    return 0;
}
