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
#include <sstream>

void manual(){
    cout << "Simple calculatur\n"
            "simpleCalc [nazwa dzialania]\n"
            "\n"
            "Dzialania:\n"
            "add [a] [b]\n"
            "    Dodawanie dwoch liczb ([a] i [b]) calkowitych.\n"
            "subtract [a] [b]\n"
            "    Odejmowanie od liczby [a] liczby [b].\n"
            "volume [a] [b] [c] [h]"
            "   obliczanie objetosci graniastoslupa prostego o podstawie trapezu\n"
            "   [a] i [b] - podstawa trapezu, [c] - bok trapezu, [h] - wysokosc graniastoslupa\n";
}

int main (int argc, char *argv[]) {
    for(int i = 0; i < argc ; ++i) {
        cout << argv[i] <<endl;
    }
    string a = argv[1];

    if (a == "add") {
        int my1, my2;
        stringstream convert1(argv[2]);
        convert1 >> my1;
        stringstream convert2(argv[3]);
        convert2 >> my2;
        cout << "add: " << my1 << " + " << my2 << " = " << my1 + my2;
    }
    else if (a == "subtract") {
        int my1, my2;
        stringstream convert1(argv[2]);
        convert1 >> my1;
        stringstream convert2(argv[3]);
        convert2 >> my2;
        cout << "subtract: " << my1 - my2;
    }
    else if (a == "volume"){
        cout << "volume: ";
        int my1, my2, my3, my4;
        stringstream convert1(argv[2]);
        convert1 >> my1;
        stringstream convert2(argv[3]);
        convert2 >> my2;
        stringstream convert3(argv[4]);
        convert3 >> my3;
        stringstream convert4(argv[5]);
        convert4 >> my4;
        cout << (my1+my2) * sqrt(my3*my3 - (my2-my1)*(my2-my1)/4) / 2 * my4;
    }
    else if (a == "help"){
        manual();
    }
    else {
        cout << "wystapil blad!\n";
        manual();
    }

    return 0;
}



/*
int main(int argc, char *argv[])
{
    cout << "Hello, World!\n\n";

    return 0;
}*/