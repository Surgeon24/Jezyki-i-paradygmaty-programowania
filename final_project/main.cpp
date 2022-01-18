#include <iostream>
using namespace std;
#include "game.h"

/*
    This project is a card game. It takes two decks of cards from my_deck.txt and opp_deck.txt
    and gives X random cards to both players. Each card have attack and ability.
    Player with bigger attack - wins.
*/

int main() {
    int input;
    cout << "Welcome to the 'Card game'!\n";
    while (1) {
        cout << "1 - to read the rules\n"
                "2 - to play the game\n"
                "0 - to exit\n";
        cin >> input;
        switch (input) {
            case 1:
                //
                break;
            case 2:
                mainGame();
                break;
            case 0:
                cout << "Good bye!";
                return 0;
                break;
            default:
                //
            break;
        }
    }
}