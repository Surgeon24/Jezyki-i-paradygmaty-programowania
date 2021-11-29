#ifndef LAB_8_02_CAR_H
#define LAB_8_02_CAR_H


#include "iostream"
using namespace std;

class Icar {
public:
    void virtual sitIn() = 0;
    void virtual drive() = 0;
};

class passengerCar : public Icar {
public:
    void sitIn() override {
        cout << "You set to the passenger car\n";
    }
    void drive() override {
        cout << "After several attempts the engine starts\n";
        cout << "You came to your destination point.\n";
    }
};

class sportCar : public Icar {
public:
    void sitIn() override {
        cout << "You set to the sport car\n";
    }
    void drive() override {
        cout << "The roar of the engine excites your blood.\n";
        cout << "You came to your destination point really fast!\n";
    }
};


#endif //LAB_8_02_CAR_H
