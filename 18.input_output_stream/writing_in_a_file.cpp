// Writing in a file
#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream ofs("my.txt", ios::trunc); // File of name my.txt will be created
    ofs << "Tarun" << endl;
    ofs << "23" << endl;
    ofs << "THE END !" << endl;

    ofs.close(); // file closed
}