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
}

int findmax (int *p_arr, int n){
    int max = 0;
    for (int i = 0; i < n; i++){
        if (p_arr[i] > max)
            max = p_arr[i];
    }
    return max;
}

int main() {
    int a, b, x = 0;
    cout << "wprowadz numer zadania: ";
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
        cout << "\nnajwieksza wartosc: " << findmax(p_arr, n);
    }
    return 0;
}
