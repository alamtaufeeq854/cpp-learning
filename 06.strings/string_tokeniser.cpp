// String tokeniser
#include <iostream>
#include <string.h>
using namespace std;
int main()
{
    char s[100] = "x=20;y=56;z=89;";

    char *token = strtok(s, "=;");

    while (token != NULL)
    {
        cout << token << endl;
        token = strtok(NULL, "=;");
    }

    return 0;
}