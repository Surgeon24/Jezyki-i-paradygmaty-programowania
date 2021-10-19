#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

int random (int a, int b){
    srand(time(NULL));
    return rand() % (b-a) + a;
}

void fillarr (int *p_arr, int n){
    for (int i = 0; i < n; i++){
        p_arr[i] = rand() % 100 + 1;
    }
}

void printarr (int *p_arr, int n){
    for (int i = 0; i < n; i++){
        cout << p_arr[i] << "  ";
    }
    cout << endl;
}

int findmax (int *p_arr, int n){
    int max = 0;
    for (int i = 0; i < n; i++){
        if (p_arr[i] > max)
            max = p_arr[i];
    }
    return max;
}

void reversearr (int *p_arr, int n){
    for (int i = 0; i < n/2; i++){
        swap(p_arr[i],p_arr[n-1-i]);
    }
}

int main() {
    int a, b, x = 0;
    cout << "Funkcja przyjmujaca tablice i dokonujaca na niej obliczen\n"
            "wprowadz numer zadania: ";
    cin >> x;

    if (x == 1) {
        cin >> a >> b;
        cout << random(a, b);
    }

    else if (x == 2){
        int n;
        cout << "podaj rozmiar tablicy: ";
        cin >> n;
        int *p_arr = new int[n];
        fillarr(p_arr, n);
        printarr(p_arr, n);
        cout << "najwieksza wartosc: " << findmax(p_arr, n);
    }
    else if (x == 3){
        int n;
        cout << "podaj rozmiar tablicy: ";
        cin >> n;
        int *p_arr = new int[n];
        cout << "wypelnij tablice: \n";
        for (int i = 0; i < n; i++){
            cin >> p_arr[i];
        }
        reversearr (p_arr, n);
        printarr(p_arr, n);
    }
    return 0;
}
