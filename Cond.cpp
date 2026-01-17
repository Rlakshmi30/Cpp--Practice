#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout << "Enter Age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "ADULT" << endl;
    }
    else
    {
        cout << "NOT AN ADULT : MINOR" << endl;
    }
    int marks;
    cout << "Enter Marks: ";
    cin >> marks;
    if (marks < 25)
    {
        cout << "Grade : F\n";
    }
    // else if (marks >= 25 && marks <= 44)
    else if (marks <= 44)
    {
        cout << "Grade : E\n";
    }
    // else if (marks >= 45 && marks <= 49)
    else if (marks <= 49)
    {
        cout << "Grade : D\n";
    }
    // else if (marks >= 50 && marks <= 59)
    else if (marks <= 59)
    {
        cout << "Grade : C\n";
    }
    // else if (marks >= 60 && marks <= 79)
    else if (marks <= 79)
    {
        cout << "Grade : B\n";
    }
    // else if (marks >= 80 && marks <= 100)
    else if (marks <= 100)
    {
        cout << "Grade :A\n";
    }
    else
    {
        cout << "Invalid Input";
    }
    int reqAge;
    cout << "Enter Age: ";
    cin >> reqAge;
    if (reqAge < 18)
    {
        cout << "Not Eligible for Job, ";
    }
    else if (reqAge <= 57)
    {
        cout << "Eligible for Job.";
        if (reqAge >= 54)
        {
            cout << "but retirement soon.";
        }
    }
    /*else if (reqAge <= 57)
    {
         cout << "Eligible for Job but retirement soon.";
    }*/
    else
    {
        cout << "Retirement Time.";
    }
}