// Calculating the net salary
#include <iostream>
using namespace std;
int main()
{
    float salary, deduction_percent, allowances_percent, net_salary;

    cout << "Enter your salary amount here: ";
    cin >> salary;

    cout << "Enter the percentage of deduction here: ";
    cin >> deduction_percent;

    cout << "Enter the percentage of allowances here: ";
    cin >> allowances_percent;

    net_salary = salary + ((salary * allowances_percent) / 100) - (salary * deduction_percent / 100);

    cout << "Your net salary is " << net_salary << endl;

    return 0;
}