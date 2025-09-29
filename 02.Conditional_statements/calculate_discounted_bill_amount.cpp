// Calculating the amount to pay after the discount
#include <iostream>
using namespace std;
int main()
{
    int amount;
    float discountedAmount; // Amount after the discount

    cout << "Enter the amount you have to pay: ";
    cin >> amount;

    if (amount > 5000)
    {
        discountedAmount = (amount) - (20 * amount) / 100.0; // 20% discount on the bill
        cout << "You have to pay: " << discountedAmount << endl;
    }

    else
    {
        if (amount >= 2000 && amount < 5000)
        {
            discountedAmount = (amount) - (10 * amount) / 100.0; // 10% discount on the bill
            cout << "You have to pay: " << discountedAmount << endl;
        }

        else
        {
            discountedAmount = (amount) - (5 * amount) / 100.0; // 5% discount on the bill
            cout << "You have to pay: " << discountedAmount << endl;
        }
    }
    return 0;
}