//
// Created by Михаил on 09.11.2021.
//

#include "train.h"

Train::Train(int number, string name, int places, string model) : name(name), model(model) {
    *this->number = number;
    *this->places = places;
    person *arr = new person[places];
    for (int i = 0; i < places; i++){
        arr[i].name = "puste";
        arr[i].surname = " ";
    }
    this->array = arr;
}

void Train::printData() const{
    cout << *number <<" Train " << name <<", model " << model << ". Number of places: " << *places << endl;
    for (int i = 0; i < *places; i++){
        cout << i+1 <<": " << this->array[i].name << "  " << this->array[i].surname << endl;
    }
}

void Train::changePerson(int place, string newName, string newSurname) const {
    cout << "\nYou changed person number "<< place << " from: " << this->array[place].name << "  "
    << this->array[place].surname << " to: " << newName << "  " << newSurname << "\n\n";
    this->array[place].name = newName;
    this->array[place].surname = newSurname;
}

const string &Train::getName() const {
    return name;
}

void Train::setName(string newName) {
    cout << "\nYou changed Train's name from: " << this->name <<" to: " << newName << "\n";
    this->name = newName;
}

const string &Train::getModel() const {
    return model;
}

void Train::setModel(string newModel) {
    cout << "\nYou changed Train's model (mark and type) from: " << this->model <<" to: " << newModel << "\n";
    this->model = newModel;
}

int Train::getNumber() {
    return *number;
}

void Train::setNumber(int newNumber) {
    cout << "\nYou changed Train's number from: " << this->number <<" to: " << newNumber << "\n";
    this->number = &newNumber;
}
