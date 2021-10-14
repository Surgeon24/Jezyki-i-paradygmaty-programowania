#include <iostream>
using namespace std;

void petla_for(){
    for (int i = 0; i < 5; i++){
        cout << "JiPP2\n";
    }
}

void tablica_2d(){
    int x,y,z;
    cout << "Podaj rozmiar tablicy (x,y): ";
    cin >> x;
    cin >> y;
                                //making array of pointers
    int** tablica = new int* [y];
                                //every pointer will be our new array
    for (int i = 0; i < y; i++){
        tablica[i] = new int[x];
        for(int j = 0; j < x; j++)
            tablica[i][j] = rand() % 10;
    }
    cout << "\nTablica zostala zrobiona!\n";
                                //print array
    for (int i = 0; i < y; i++){
        for(int j = 0; j < x; j++)
            cout << tablica[i][j] << "   ";
        cout << endl;
    }
}


int main()
{
    cout << "Hello, World!\n\n";
    tablica_2d();
    return 0;
}