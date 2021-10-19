#include <iostream>
#include <cstdlib>
#include "math.h"
using namespace std;
//pole kwadrata
double pole(double a){
    return a*a;
}
//pole prostokonta
double pole(double a, double b){
    return a*b;
}
//pole trojkata
double pole(double a, double b, double alfa){
    return 1./2.*a*b*sin(alfa);
}

int main(int argc, char *argv[]) {
    cout << "Program, ktory liczy pole figury\n"
            "[a] - kwadrat\n"
            "[a][b] - prostokat\n"
            "[a][b][alfa] - trojkat\n";
    if (argc == 2) {
        double x = atof(argv[1]);
        cout << "Pole = " << pole(x);
    }
    if (argc == 3) {
        double x = atof(argv[1]);
        double y = atof(argv[2]);
        cout << "Pole = " << pole(x, y);
    }
    if (argc == 4) {
        double x = atof(argv[1]);
        double y = atof(argv[2]);
        double z = atof(argv[3]);
        cout << "Pole = " << pole(x, y, z);
    }
    return 0;
}
