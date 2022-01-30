#ifndef FINAL_PROJECT_2_ENEMY_H
#define FINAL_PROJECT_2_ENEMY_H

#include "iostream"
using namespace std;


class Opponent{
public:
    virtual void greeting() = 0;
};

// enemy 0
class HappyGay : public Opponent{
public:
    void greeting() override{

        cout << "Happy gay: Hello, dude! Let's play a game!\n";
    }
};

//enemy 1
class SeriousMan : public Opponent {
public:
    void greeting() override{
        cout << "Serious man: Good afternoon. I'm looking forward to our fight.\n";
    }
};

//enemy 2
class AngryMan : public Opponent {
public:
    void greeting() override{
        cout << "Angry man: I'll d..dd...destroy you!";
    }
};

void greeting(Opponent *opponent){
    opponent->greeting();
}

#endif //FINAL_PROJECT_2_ENEMY_H
