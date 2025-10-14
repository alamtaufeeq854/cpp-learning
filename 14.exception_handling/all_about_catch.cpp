// All About Catch
#include <iostream>
using namespace std;

class MyException1
{
};

class MyException2 : public MyException1
{
};

int main()
{

    try
    {
        throw 't';
    }

    catch (int e)
    {
        cout << "Catch Int" << endl;
    }

    catch (float e)
    {
        cout << "Catch float" << endl;
    }

    catch (double e)
    {
        cout << "Catch double" << endl;
    }

    catch (char e)
    {
        cout << "Catch char" << endl;
    }

    catch (MyException2 e)
    {
        cout << "Catch Child class" << endl;
    }

    catch (MyException1 e)
    {
        cout << "Catch Parent class" << endl;
    }

    catch (...)
    {
        cout << "Catch All ! " << endl;
    }

    return 0;
}