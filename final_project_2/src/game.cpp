#include <iostream>
#include <ctime>
#include <stdlib.h>
#include "../include/deck.h"
#include "windows.h"
using namespace std;

template<typename T>
class SmartP {
public:
    SmartP(T *ptr): ptr(ptr) {}
    ~SmartP(){
        delete ptr;
    }

    T& operator*(){
        return  *ptr;
    }

private:
    T *ptr;

};

void  printScore(SmartP<int> pMyScore, SmartP<int> pOppScore){
    cout << "\n***********************************************************************\n";
    cout << "           Your points    " <<  *pMyScore << "       vs        " << *pOppScore << "    Opponent's points\n";
}


void mainGame(short int gamemode) {
    srand(time(NULL));
    int input;
    int myScore = 0;
    int oppScore = 0;
    SmartP<int> pMyScore = &myScore;
    SmartP<int> pOppScore = &oppScore;
    short int myRound = 0;
    short int oppRound = 0;
    bool oppPass = 0;
    bool iPass = 0;
    short int turn = 1;
                                                //initialize and fill decks
    Deck my_deck(MY_DECK_SIZE);
    Deck opp_deck(OPP_DECK_SIZE);
    Hand my_hand(&my_deck);
    Hand opp_hand(&opp_deck);
    string path = "my_deck.txt";
    my_deck.loadDeck(path);
    path = "opp_deck.txt";
    opp_deck.loadDeck(path);
                                                //shuffle decks
    my_deck.shuffle();
    //my_deck.printDeck();
    opp_deck.shuffle();
    //opp_deck.printDeck();
                                                //giving starting cards
    my_hand.takeFromDeck(3);
    //my_hand.printHand();
    opp_hand.takeFromDeck(3);
    //opp_hand.printHand();
    while (myRound != 2 && oppRound != 2) {
        my_hand.takeFromDeck(1);
        opp_hand.takeFromDeck(1);
        cout << "                                 " << turn << "turn \n\n";
        while (1) {
                                                //my turn

            printScore(pMyScore, pOppScore);
            if (iPass != 1) {
                my_hand.printHand(gamemode);
                cout << "opponent have " << opp_hand.cardsInHand << " cards in his hand\n";
                while (true) {
                    cout << "chose which card to play (to end the turn - print 0) :  ";
                    cin >> input;
                    try {
                        if (!cin >> input){
                            throw 1;
                        }
                    }
                    catch (int a){
                        cout << "\nError! Wrong input.\n";
                        cout << "You lost the game.\n";
                        exit(1);
                    }
                    if (input == 0) {
                        iPass = 1;
                        break;
                    }
                    else if (input <= my_hand.cardsInHand) {
                        my_hand.playCard(input - 1, myScore, oppScore, gamemode);
                        break;
                    }
                    else {
                        cout << "wrong number!\n";
                    }
                }
            }
            //opp's turn
            if (iPass == 1 && myScore < oppScore && oppPass != 1){
                oppPass = 1;
            }
            else if (opp_hand.sum() < (myScore-oppScore)){
                oppPass = 1;
            }
            else if (opp_hand.cardsInHand > 1 && oppPass != 1) {
                oppPass = 0;
            } else if (opp_hand.cardsInHand == 1 && oppPass != 1) {

                oppPass = rand() % 2;
            } else {
                oppPass = 1;
            }

            if (oppPass == 0) {
                cout << "\nOpponent playing a card...\n";
                input = rand() % opp_hand.cardsInHand;
                opp_hand.playCard(input, oppScore, myScore, gamemode);
            } else {
                cout << "\nOpponent passes.\n";
            }
            Sleep(2000);
            if (oppPass && iPass) {
                oppPass = 0;
                iPass = 0;
                cout << "Okay, let's check the results...\n";
                if (myScore > oppScore) {
                    cout << "You win this round. Congrats!\n\n";
                    myRound++;
                } else if (oppScore > myScore) {
                    cout << "You lost this round!\n\n";
                    oppRound++;
                } else {
                    cout << "It's a draw! Both players win!\n\n";
                    oppRound++;
                    myRound++;
                }
                myScore = 0;
                oppScore = 0;
                Sleep(4000);
                break;
            }
        }
        if (myRound == 2 && oppRound != 2) {
            cout << "You win 2 rounds. Victory is yours!";
        }
        else if (oppRound == 2 && myRound != 2) {
            cout << "You lost the game!";
        }
        else if (oppRound == 2 && myRound == 2){
            cout << "Both of you lost 2 rounds. It's a draw!";
        }
        turn ++;
    }
    cout << "\n\n\n\n";
}