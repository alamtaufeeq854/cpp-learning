// To know the maximum size of your string
#include <iostream>
#include <string>
using namespace std;
int main()
{

    string s;

    cout << "Enter  your String: ";
    getline(cin, s);

    cout << "The Maximum size of your string \"" << s << "\" could be: " << s.max_size() << endl;

    return 0;
}