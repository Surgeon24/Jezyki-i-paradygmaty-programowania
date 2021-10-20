#include <iostream>
#include <limits>
using namespace  std;
int main() {
    int a;
    cout << "Wprowadz numer zadania:  ";
    cin >>a;
    if (a == 1) {
        int a, b, x;
        cout << "Wprowadz a i b:\n";
        cin >> a >> b;
        try {
            x = a / b;
            if (b * x != a)
                throw "Dzielenie jest niemozliwe!";
            cout << x;
        }
        catch (const char *exception) {
            cout << "Error: " << exception;
        }
    }
    //////////////////////////////////////////////////////////////////
    else if (a == 2){
        string a;
        cout << "Wprowadz ciag znakow:\n";
        cin >> a;
        try {
            if (a[0] == '0' || a[0] == '1' || a[0] == '2' || a[0] == '3' || a[0] == '4' || a[0] == '5' || a[0] == '6' || a[0] == '7' || a[0] == '8' || a[0] == '9' || a[0] == '-')
            {
                for (int i = 1; i < a.length(); i++) {
                    if (a[i] != '0' && a[i] != '1' && a[i] != '2' && a[i] != '3' && a[i] != '4' && a[i] != '5' &&
                        a[i] != '6' && a[i] != '7' && a[i] != '8' && a[i] != '9')
                        throw "podany niepoprawny simbol";
                }
            }
            if (a.length() > 10)
                throw "liczba jest zaduza";

            long long x;
            x = stoll(a);
            if (x > 2147483647 || x < -2147483647)
                throw "liczba jest zaduza";

            int answer;
            answer = stoi(a);
            cout << answer;
        }
        catch (const char *exception) {
            cout << "Error: " << exception;
        }
    }
    return 0;
}
