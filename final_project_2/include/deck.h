#ifndef FINAL_PROJECT_2_DECK_H
#define FINAL_PROJECT_2_DECK_H
using namespace std;
const int MY_DECK_SIZE = 9;
const int OPP_DECK_SIZE = 11;
const int HAND_SIZE = 9;

class Card{
public:
    string name;
    int attack;
    int ability;
};

class CardAdvanced : public Card {
protected:
    string cost;
};

class Deck {
public:
    int size;
    Card *deck;
    int cardsInDeck = 0;

    Deck (int s){
        deck = new Card[s];
        size = s;
    }
    void loadDeck(string path);
    void shuffle();
    void printDeck();

    ~Deck(){
        delete[] deck;
    }
};

class Hand {
public:
    Card *hand;
    Deck *deck;
    int cardsInHand = 0;

    Hand (Deck *d){
        deck = d;
        hand = new Card[HAND_SIZE];
        for (int i = 0; i < HAND_SIZE; i++){
            hand[i].name = " ";
            hand[i].attack = 0;
            hand[i].ability = 0;
        }
    }
    void takeFromDeck(int number);
    void printHand(short int gamemode);
    void playCard(int number, int &player, int &enemy, short int gamemode);
    int sum();
    ~Hand(){
        delete[] hand;
    }
};


#endif //FINAL_PROJECT_2_DECK_H
