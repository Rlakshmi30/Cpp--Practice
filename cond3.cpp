#include <iostream>
using namespace std;

int main()
{
    int units;
    float bill = 0;

    cout << "Enter units: ";
    cin >> units;

    if (units < 0)
    {
        cout << "Invalid input";
    }
    else if (units <= 100)
    {
        bill = units * 1;
    }
    else if (units <= 200)
    {
        bill = 100 * 1 + (units - 100) * 2;
    }
    else if (units <= 300)
    {
        bill = 100 * 1 + 100 * 2 + (units - 200) * 3;
    }
    else
    {
        bill = 100 * 1 + 100 * 2 + 100 * 3 + (units - 300) * 5;
    }

    if (bill > 1000)
        bill += bill * 0.10;

    if (bill < 100)
        bill = 100;

    cout << "Total Bill = ₹" << bill;
    return 0;
}
