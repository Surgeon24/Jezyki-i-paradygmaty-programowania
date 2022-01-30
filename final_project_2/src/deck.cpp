#include <iostream>
#include <fstream>
#include <ctime>
#include "../include/deck.h"


void Deck::loadDeck(string path){
    //trying to open file
    std::ifstream fin;
    fin.open(path);
    if (!fin.is_open()){
        std::cout << "Error! File can't be opened.\n";
    }
    else {
        std::string str;
        while (fin) {
            if (fin.eof()) {
                break;
            }
            for (int i = 0; i < size; i++){
                getline(fin, str);
                deck[i].name = str;
                getline(fin, str);
                deck[i].attack = stoi(str);
                getline(fin, str);
                deck[i].ability = stoi(str);
                cardsInDeck ++;
            }
        }
    }
}

template <typename C>
void swap(C *x, C *y){
    C tmp;
    tmp.ability = x->ability;
    tmp.attack = x->attack;
    tmp.name = x->name;
    x->ability = y->ability;
    x->attack = y->attack;
    x->name = y->name;
    y->ability = tmp.ability;
    y->attack = tmp.attack;
    y->name = tmp.name;
}

void Deck::shuffle(){
    srand(time(NULL));
    int x,y;
    for (int i = 0; i < (rand() % size); i++){
        x = rand() % size;
        y = rand() % size;
        swap(deck[x], deck[y]);
    }
}

void Deck::printDeck(){
    //
    for (int i = 0; i < size; i++) {
        if (deck[i].ability == 1) {
            cout << " " << i + 1 << ") " << deck[i].name << ", with " << deck[i].attack << " attack" << "\n";
        } else if (deck[i].ability == 2) {
            cout << " " << i + 1 << ") " << deck[i].name << ", with " << deck[i].attack
                 << " attack and huge morality!" << "\n";
        } else if (deck[i].ability == 3) {
            cout << " " << i + 1 << ") " << deck[i].name << ", with " << deck[i].attack
                 << " attack and incredible fury!" << "\n";
        }
    }
}



void Hand::takeFromDeck(int number) {
    for (int i = 0; i < number; i++){
        hand[cardsInHand].name = deck->deck[deck->cardsInDeck - 1].name;
        hand[cardsInHand].attack = deck->deck[deck->cardsInDeck - 1].attack;
        hand[cardsInHand].ability = deck->deck[deck->cardsInDeck - 1].ability;
        cardsInHand ++;
        deck->cardsInDeck --;
    }
}

void Hand::printHand(short int gamemode){
    if (cardsInHand == 0){
        cout << "\nyour hand is empty.\n\n";
    }
    else {

        cout << "\nYour cards:\n";
        cout << "-----------------------------------------------------------------------\n";
        for (int i = 0; i < cardsInHand; i++) {
            if (gamemode == 1){
                cout << " " << i + 1 << ") " << hand[i].name << ", with " << hand[i].attack << " attack" << "\n";
            }
            else {
                if (hand[i].ability == 1) {
                    cout << " " << i + 1 << ") " << hand[i].name << ", with " << hand[i].attack << " attack" << "\n";
                } else if (hand[i].ability == 2) {
                    cout << " " << i + 1 << ") " << hand[i].name << ", with " << hand[i].attack
                         << " attack and huge morality!" << "\n";
                } else if (hand[i].ability == 3) {
                    cout << " " << i + 1 << ") " << hand[i].name << ", with " << hand[i].attack
                         << " attack and incredible fury!" << "\n";
                }
            }
        }
        cout << "-----------------------------------------------------------------------\n";
    }
}

void Hand::playCard(int number, int &player, int &enemy, short int gamemode) {
    player += hand[number].attack;
    if (gamemode == 1){
        cout << hand[number].name << " with " << hand[number].attack << " attack\n";
    }
    else {
        if (hand[number].ability == 1) {
            cout << hand[number].name << " with " << hand[number].attack << " attack\n";
        } else if (hand[number].ability == 2) {
            cout << hand[number].name << " with " << hand[number].attack << " attack\n";
            cout << "Also, his morality increase x2 all points of his score!\n";
            player = player * 2;
        } else if (hand[number].ability == 3) {
            cout << hand[number].name << " with " << hand[number].attack << " attack\n";
            cout << "Also, his fury decrease x2 all points of enemy's score!\n";
            if (enemy % 2 == 1) {
                enemy++;
            }
            enemy = enemy / 2;
        }
    }
    if (number == (cardsInHand - 1)){
        hand[number].name = " ";
        hand[number].attack = 0;
        hand[number].ability = 0;
    }
    else {
        hand[number].name = hand[cardsInHand-1].name;
        hand[number].attack = hand[cardsInHand-1].attack;
        hand[number].ability = hand[cardsInHand-1].ability;
        hand[cardsInHand-1].name = " ";
        hand[cardsInHand-1].attack = 0;
        hand[cardsInHand-1].ability = 0;
    }
    cardsInHand --;
}

int Hand::sum(){
    int counter = 0;
    for (int i = 0; i < this->cardsInHand; i++){
        counter += this->hand[i].attack;
    }
    return counter;
}