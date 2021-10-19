#include <iostream>
using namespace std;

void printpos (int *p_arr,int n){
    for (int i = 0; i < n; i++){
        if (p_arr[i] > 0)
            cout << p_arr[i] << "  ";
    }
}

int main() {
    int x;
    cout << "Przekazywanie przez wskaznik\n"
            "Prosze podac numer zadania: ";
    cin >> x;
    if (x == 1){
        double a,b;
        cout << "Wprowadz 2 liczby: ";
        cin >> a >> b;
        double *p_a = &a;
        double *p_b = &b;
        cout << ((*p_a) + (*p_b))/2;
    }
    else if (x == 2){
        int n;
        cout << "Wprowadz rozmiar tablicy: ";
        cin >> n;
        int *p_arr = new int[n];
        cout << "Wprowadz wartosci tablicy: ";
        for (int i = 0; i<n; i++)
            cin >> p_arr[i];
        printpos(p_arr,n);
    }
    else if (x == 3){
        int a,b,c,d,e;
        cout << "Wprowadz wartosci dla a,b,c,d,e: ";
        cin >> a >> b >> c >> d >> e;
                                            // tu mam dokonczyc
    }
    return 0;
}
