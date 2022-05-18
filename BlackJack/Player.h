#ifndef CPP_OOP_PLAYER_H
#define CPP_OOP_PLAYER_H

#include "string"
#include "vector"
#include "Card.h"

using namespace std;

class Player {
private:
    string Name;
    bool isHuman;
    vector<Card> Cards;
    bool isSettled;
public:
    int GetScore();
    void AddCard();
    void Settle();
};


#endif //CPP_OOP_PLAYER_H
