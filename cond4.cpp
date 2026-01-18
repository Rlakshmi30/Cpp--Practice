#include <iostream>
using namespace std;

int main()
{
    float basic, da, hra, gross, tax = 0;

    cout << "Enter basic salary: ";
    cin >> basic;

    if (basic <= 0)
    {
        cout << "Invalid salary";
        return 0;
    }

    da = 0.40 * basic;
    hra = 0.20 * basic;
    gross = basic + da + hra;

    if (gross >= 30000 && gross <= 50000)
        tax = 0.10 * gross;
    else if (gross > 50000)
        tax = 0.20 * gross;

    cout << "Gross Salary = " << gross << endl;
    cout << "Tax = " << tax << endl;
    cout << "Net Salary = " << gross - tax << endl;

    return 0;
}
