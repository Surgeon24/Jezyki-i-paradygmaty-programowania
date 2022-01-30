#include <iostream>
#include "deck.h"
using namespace std;

void mainGame(){
    //variables
    int input;
    int myScore  = 0;
    int oppScore = 0;
    int *pMyScore = &myScore;
    int *pOppScore = &oppScore;
    Deck my_hand, opp_hand;

    //loading decks
    string path = "my_deck.txt";
    Deck my_deck(path);
    path = "opp_deck.txt";
    Deck opp_deck(path);

    cout <<"\n\n-----------Shuffle--yours--deck----------------\n\n";
    my_deck.newSequence();
    cout <<"\n\n-----------Shuffle--opp's--deck-------------\n\n";
    opp_deck.newSequence();
    cout <<"\n\n-----------Giving--you--starting---cards----------------\n\n";
    my_deck.peakSome(3, my_hand);
    my_hand.printHand();
    /*
    cout <<"\n\n-----------Giving--to---opp--starting---cards-----------\n\n";
    opp_deck.peakSome(3, opp_hand);
    while (myScore != 30 || oppScore != 30) {
        cout << "choose card from your hand to play:\n";
        my_hand.printHand();
        cin >> input;
    }*/
}