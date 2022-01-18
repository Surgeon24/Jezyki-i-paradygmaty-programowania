//
// Created by Михаил on 12.12.2021.
//

#ifndef FINAL_PROJECT_DECK_H
#define FINAL_PROJECT_DECK_H

struct card {
    std::string name;
    int attack;
    int ability;
    std::string abilityDescription(int id){
        if(id == 1)
            return "none";
        if(id == 2)
            return "medic";
    }
    void printCard(){
        std::cout << name << "\nattack: " << attack << "\nability: " << abilityDescription(ability) << "\n\n";
    }
};

struct node {
    card dCard;
    node *next;
};

class Deck{
private:
    int amount_of_cards;
    node *first_card;
public:
    Deck();
    //making a deck from file
    Deck(std::string path);
    //shuffling all deck
    void newSequence();
    //
    void peakSome(int number, Deck hand);
    //
    void printHand();
    //
    void playCard(int number, int pMyScore, int pOppScore);
};

#endif //FINAL_PROJECT_DECK_H
