#include <iostream>
#include "Train.h"

using namespace std;

int main() {
    Train t1(001, "Mercury", 6, "T200");

    cout << "Initial values" << endl;
    t1.printData();
    t1.changePerson(2, "Mikhail", "Ermolaev");
    t1.printData();
    Train copy = t1;
    copy.setName("Earth");
    copy.getName();
    copy.setModel("T228");
    copy.getModel();
    copy.setNumber(2);
    copy.getNumber();
    copy.printData();
    return 0;
}
