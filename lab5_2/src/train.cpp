//
// Created by Михаил on 09.11.2021.
//

#include "train.h"

Train::Train(int number, string name, int places, string model) : name(name), model(model) {
    *this->number = number;
    *this->places = places;
    person *array = new person[places];
    for (int i = 0; i < places; i++){
        array[i].name = "puste";
    }
}

void Train::printData() const{
    cout << "Train " << name << "  " << *number << ", model " << model << ". Number of places: " << *places << endl;
    for (int i = 0; i < *places; i++){
        //std::cout << array[i];
    }
}

