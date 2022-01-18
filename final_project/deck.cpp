#include <iostream>
#include <fstream>
#include "deck.h"
#include <ctime>

Deck::Deck() {
    amount_of_cards = 0;
    node *head = new node;
    first_card = head;
}

Deck::Deck(std::string path) {
    //trying to open file
    std::ifstream fin;
    fin.open(path);
    if (!fin.is_open()){
        std::cout << "Error! File can't be opened.\n";
    }
    else{
        //creating deck
        int i;
        amount_of_cards = 0;
        node *head = new node;
        first_card = head;
        node *ptr = head;
        ptr->next = head;
        std::string str;
        while(fin) {
            if (fin.eof()){
                break;
            }
            amount_of_cards ++;
            card *tmp = new card;
            getline(fin, str);
            tmp->name = str;
            getline(fin, str);
            i = stoi(str);
            tmp->attack = i;
            getline(fin, str);
            i = stoi(str);
            tmp->ability = i;
            if (ptr->next == nullptr){
                node *tmpN = new node;
                ptr->next = tmpN;
                ptr = ptr->next;
            }
            ptr->dCard = *tmp;
            ptr->next = nullptr;
        }
        ptr = head;
        //print all deck
        /*while (ptr != nullptr){
            ptr->dCard.printCard();
            ptr = ptr->next;
        }*/
    }

    fin.close();
}

void Deck::newSequence(){
    srand(time(NULL));
    int cardToShuffle;
    int cardBeenShuffled = 0;
    int cardsLeft = this->amount_of_cards;
    node *ptr = this->first_card;
    node *placeToPut;
    while (cardsLeft != 1){
        cardToShuffle = rand() % (cardsLeft-1) + cardBeenShuffled;
        while(cardToShuffle != 0){
            ptr = ptr->next;
            cardToShuffle --;
        }
        placeToPut = ptr->next;
        ptr->next = ptr->next->next;
        if (cardBeenShuffled == 0){
            placeToPut->next = this->first_card;
            this->first_card = placeToPut;
        }
        else {
            ptr = this->first_card;
            for (int i = 1; i < cardBeenShuffled; i++){
                ptr = ptr->next;
            }
            placeToPut->next = ptr->next;
            ptr->next = placeToPut;
        }
        cardBeenShuffled ++;
        cardsLeft --;
        ptr = this->first_card;


    }
    std::cout << "shuffled deck: \n\n";
    while (ptr != nullptr){
        ptr->dCard.printCard();
        ptr = ptr->next;
    }
}

void Deck::peakSome(int number, Deck hand){
    node *tmp;
    node *tmp2;
    for (int i = 0; i < number; i++){
        if (i == 0) {
            tmp = this->first_card;
            this->first_card = this->first_card->next;
            hand.first_card = tmp;
            std::cout << tmp<<"\n\n\n\n";

        }
        else {
            tmp2 = this->first_card;
            this->first_card = this->first_card->next;
            tmp->next = tmp2;
            tmp = tmp->next;
            tmp->next = nullptr;
        }
    }
    tmp = hand.first_card;
    while (tmp != nullptr){
        tmp->dCard.printCard();
            tmp = tmp->next;
    }
}

void Deck::printHand(){
    node *ptr = this->first_card;
    while(ptr != nullptr){
        ptr->dCard.printCard();
        ptr = ptr->next;
    }
}
void Deck::playCard(int number, int pMyScore, int pOppScore){
    if(number == 1){
        pMyScore += this->first_card->dCard.attack;
        //makeAbility(this->first_card->dCard.ability);
        this->first_card = this->first_card->next;
    }
    node *ptr = this->first_card;
    for (int i = 1; i < number; i++){
        ptr = ptr->next;
    }

}