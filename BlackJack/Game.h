#ifndef CPP_OOP_GAME_H
#define CPP_OOP_GAME_H

#include "Player.h"
#include "Pack.h"

class Game {
private:
    Player Player1;
    Player Player2;
    Pack CardsPack;
public:
    void Init();
    void NextRound();
    void CheckWinner();
};


#endif //CPP_OOP_GAME_H
