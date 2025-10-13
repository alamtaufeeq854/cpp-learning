// Static Members Example 03
#include <iostream>
using namespace std;

class Student
{
public:
    int rollNo;
    string name;

    static int admNo;

    Student(string n)
    {
        admNo++;
        rollNo = admNo;
        name = n;
    }

    void display()
    {

        cout << "Student " << name << " have Roll Number " << rollNo << endl;
    }
};
int Student ::admNo = 0;

int main()
{

    Student s1("Taufeeq"), s2("Alam"), s3("Hemant"), s4("Samrat");
    s1.display();
    s3.display();
    cout << "Number of students are " << Student::admNo << endl;

    return 0;
}
