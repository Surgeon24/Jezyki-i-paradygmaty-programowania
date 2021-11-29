#ifndef LAB_8_1_HUMAN_H
#define LAB_8_1_HUMAN_H

#include "iostream"
using namespace std;

class human {
private:
    string name;
    bool driverLicense;
public:
    human(string name, bool driverLicense): name(name), driverLicense(driverLicense){}
    void drive(Icar &car){
        if (driverLicense) {
            cout << "You start to drive a passenger car";
            car.drive();
        }
        else
            cout << "You don't have a driver license!";
    }
    void sitInCar(Icar &car){
        car.sitIn();
    }
};

#endif //LAB_8_1_HUMAN_H
