// Grade of a student
#include <iostream>
using namespace std;

class Student
{

private:
    string name;
    int rollNo;
    int mathMarks;
    int phyMarks;
    int chemMarks;
    float calcAverage;

public:
    Student(string n, int r, int m = 0, int p = 0, int c = 0)
    {

        name = n;
        rollNo = r;
        mathMarks = m;
        phyMarks = p;
        chemMarks = c;
    }

    float average()
    {

        calcAverage = (mathMarks + phyMarks + chemMarks) / 3.0;

        return calcAverage;
    }

    int total()
    {

        return (mathMarks + phyMarks + chemMarks);
    }

    char grade()
    {

        if (calcAverage >= 60)
        {
            return 'A';
        }

        if (calcAverage >= 40 && calcAverage < 60)
        {
            return 'B';
        }

        else
        {
            return 'C';
        }
    }
};

int main()
{

    int r, p, c, m;
    string n;

    cout << "Enter Your Name: ";
    getline(cin, n);

    cout << "Enter Your Roll Number: ";
    cin >> r;

    cout << "Enter Your Marks of Maths: ";
    cin >> m;

    cout << "Enter Your Marks of Physics: ";
    cin >> p;

    cout << "Enter Your Marks of Chemistry: ";
    cin >> c;

    Student s(n, r, m, p, c);

    cout << "Total Marks: " << s.total() << endl;
    cout << "Grade: " << s.grade() << endl;

    return 0;
}