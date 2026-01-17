#include <iostream>
#include <string>
using namespace std;

int main()
{
    char ch;
    int x, y, z;
    int sum;
    string str;

    cout << "Enter a String: " << endl;
    getline(cin, str);

    cout << "Enter Three Integer: ";
    cin >> x >> y >> z;

    cout << "Enter a character: ";
    cin >> ch;

    cout << "The value of X is: " << x
         << ", Y is: " << y
         << " and Z is: " << z << endl;

    sum = x + y + z;
    cout << "The Sum is: " << sum << endl;

    cout << "The Word is: " << str << endl;
    cout << "The character is: " << ch << endl;

    return 0;
}
