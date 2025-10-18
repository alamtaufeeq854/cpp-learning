// Employee Class
#include <iostream>
using namespace std;

class Employee
{
private:
    int mEmployeeId;
    string mName;

public:
    Employee(int eid, string n)
    {
        mEmployeeId = eid;
        mName = n;
    }

    string getName() { return mName; }
};

class FullTimeEmployee : public Employee
{
private:
    int mSalary;

public:
    FullTimeEmployee(int eid, string n, int sal) : Employee(eid, n)
    {
        mSalary = sal;
    }

    int getSalary() { return mSalary; }
};

class PartTimeEmployee : public Employee
{
private:
    int mWages;

public:
    PartTimeEmployee(int eid, string n, int wage) : Employee(eid, n)
    {
        mWages = wage;
    }

    int getWages() { return mWages; }
};

int main()
{
    PartTimeEmployee p1(1, "rohan", 5000);
    FullTimeEmployee p2(2, "wasim", 15000);

    cout << "Name is " << p1.getName() << " and wage is " << p1.getWages() << endl;
    cout << "Name is " << p2.getName() << " and salary is " << p2.getSalary() << endl;

    return 0;
}