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

//////////////////////////////////////////////////////////////////////////////////
#include "math.h"
int main (int argc, char *argv[]) {
    for(int i = 0; i < argc ; ++i) {
        cout << argv[i] <<endl;
    }
    string a = argv[1];
    int x = (int)argv[2];
    int y = (int)argv[3];
    int z = (int)argv[4];
    int h = (int)argv[5];

    if (a == "add")
        cout << "add: " << x + y;
    else if (a == "subtract")
        cout << "subtract: " << x - y;
    else if (a == "volume"){
        cout << "volume";
        x = (x+y) * sqrt(z*z - (y-x)*(y-x)/4) / 2 * h;
        cout << x;
    }
    else if (a == "help"){
        cout << "help";
    }
    else {
        cout << "wystapil blad";
    }

    return 0;
}



/*
int main(int argc, char *argv[])
{
    cout << "Hello, World!\n\n";

    return 0;
}*/