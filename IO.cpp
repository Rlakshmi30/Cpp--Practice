#include <iostream>
#include <string>
using namespace std;
int main()
{
    int x, y, z;
    int sum;
    // string s;
    string str;
    cout << "Enter a String: ";
    getline(cin, str);
    // cin >> s;
    cout << "Enter Three Integer: ";
    cin >> x >> y >> z;
    cout << "The value of X is: " << x << ", Y is: " << y << " and Z is: " << z << endl;
    sum = x + y + z;
    cout << "The Sum is: " << sum << endl;
    // cout << s;
    cout << "The Word is: " << str;

    return 0;
}
