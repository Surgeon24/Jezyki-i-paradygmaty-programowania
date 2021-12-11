#include <iostream>
using namespace std;
int main()
{
    string text;
    cin >> text;

    string::iterator x;
    for (x = text.begin(); x != text.end(); x++) {
        *x = toupper(*x);
        cout << (*x);
    }
    return 0;
}