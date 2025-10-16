// Reading from a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ifstream ifs;
    ifs.open("my.txt");

    if (!ifs.is_open())
    {
        cout << "File doesn't Exist" << endl;
        return 0;
    }

    string name;
    string rollNo;
    string lastLine;

    ifs >> name >> rollNo >> lastLine;
    cout << name << endl;
    cout << rollNo << endl;
    cout << lastLine << endl;
    ifs.close();
}
