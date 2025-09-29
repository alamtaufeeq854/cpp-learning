// To calculate the discount on the bill amount
#include <iostream>
using namespace std;
int main()
{
    float originalAmount, finalAmount, discountOnAmount = 0;

    cout << "Enter your bill amount: ";
    cin >> originalAmount;

    if (originalAmount >= 500)
        discountOnAmount = originalAmount * 20 / 100.0;

    else if (originalAmount >= 100 && originalAmount < 500)
        discountOnAmount = originalAmount * 10 / 100.0;

    finalAmount = originalAmount - discountOnAmount;

    cout << "Your Original Bill is: " << originalAmount << endl;
    cout << "Your Discount on Bill is: " << discountOnAmount << endl;
    cout << "Your Payable Bill is: " << finalAmount << endl;

    return 0;
}