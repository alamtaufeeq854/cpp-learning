// calculating the grades for student marks
#include <iostream>
using namespace std;
int main()
{
    int marks1, marks2, marks3;
    float totalMarks, avgMarks;

    cout << "Enter the marks of 1st subject: ";
    cin >> marks1;

    cout << "Enter the marks of 2nd subject: ";
    cin >> marks2;

    cout << "Enter the marks of 3rd subject: ";
    cin >> marks3;

    totalMarks = marks1 + marks2 + marks3; // Total Marks of a student

    avgMarks = totalMarks / 3; // Average Marks of a student in 3 subjects

    if (avgMarks >= 60)
        cout << 'A' << endl;

    else
    {
        if (avgMarks >= 35 && avgMarks < 60)
            cout << 'B' << endl;
        else
            cout << 'C' << endl;
    }
    return 0;
}