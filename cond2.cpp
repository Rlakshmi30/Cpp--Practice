#include <iostream>
using namespace std;

int main()
{
    int age, experience, rating;
    float salary;

    cout << "Enter age, experience, performance rating, salary: ";
    cin >> age >> experience >> rating >> salary;

    if (age < 0 || experience < 0 || rating < 1 || rating > 5 || salary < 0)
    {
        cout << "Invalid Input";
    }
    else if (age < 21)
    {
        cout << "Not eligible for bonus or promotion";
    }
    else
    {
        if (experience < 2)
        {
            cout << "No bonus and no promotion";
        }
        else
        {
            if (rating >= 4)
            {
                if (salary <= 50000)
                {
                    cout << "20% bonus and Promotion";
                }
                else
                {
                    cout << "10% bonus and Promotion";
                }
            }
            else if (rating == 3)
            {
                cout << "5% bonus and No promotion";
            }
            else
            {
                cout << "No bonus and No promotion";
            }
        }
    }

    return 0;
}
