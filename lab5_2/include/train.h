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
    //array of people
    person *array;
public:
    Train(int number, string name, int places, string model);

    const string &getName() const;

    void setName(string newName);

    const string &getModel() const;

    void setModel(string newModel);

    int getNumber();

    void setNumber(int number);
    /*
    double getPlaces();

    void setPlaces(int places);
    */
    void printData() const;

    void changePerson(int place, string newName, string newSurname) const;
    /*
    bool operator==(const Train &rhs) const;

    bool operator!=(const Train &rhs) const;

    Train operator+=(const Train &rhs) const;

    Train operator+=(const double &rhs) const;

    const string &getName() const;
    */

    Train(Train &Train){
        *number = *Train.number;
        name = Train.name;
        *places = *Train.places;
        model = Train.model;
        array = Train.array;
    }
};

#endif //LAB5_2_TRAIN_H
