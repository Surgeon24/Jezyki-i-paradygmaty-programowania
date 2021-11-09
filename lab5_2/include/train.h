//
// Created by Михаил on 09.11.2021.
//

#ifndef LAB5_2_TRAIN_H
#define LAB5_2_TRAIN_H

#include <iostream>
using namespace std;

struct person{
    string name;
    string surname;
};

class Train {
private:
    //registration number
    int *number = new int;
    //trains name
    string name;
    //number of places
    int *places = new int;
    //model of train
    string model;

public:
    Train(int number, string name, int places, string model);

    /*
    Train(string name);

    void setName(string name);

    double getNumber();

    void setNumber(int number);

    double getPlaces();

    void setPlaces(int places);
    */
    void printData() const;
    /*
    bool operator==(const Train &rhs) const;

    bool operator!=(const Train &rhs) const;

    Train operator+=(const Train &rhs) const;

    Train operator+=(const double &rhs) const;

    const string &getName() const;
    */
};

#endif //LAB5_2_TRAIN_H
