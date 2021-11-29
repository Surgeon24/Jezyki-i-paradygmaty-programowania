#ifndef LAB_8_02_HUMAN_H
#define LAB_8_02_HUMAN_H

#include "iostream"
using namespace std;

class human {
private:
    string name;
    bool driverLicense;
public:
    human(string name, bool driverLicense): name(name), driverLicense(driverLicense){}
    void drive(Icar &car){
        cout << name << " tries to drive...\n";
        if (driverLicense) {
            car.drive();
        }
        else
            cout << name <<", You don't have a driver license!\n";
    }
    void sitInCar(Icar &car){
        cout << name << " tries to sit in the car...\n";
        car.sitIn();
    }
};


#endif //LAB_8_02_HUMAN_H
