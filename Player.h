#ifndef CPP_OOP_PLAYER_H
#define CPP_OOP_PLAYER_H

#include "iostream"
#include "GenericPlayer.h"

using namespace std;

// Задание 4
class Player : public GenericPlayer {
public:
    explicit Player(string name) : GenericPlayer(move(name)) {}
    // Если метод сделать virtual..const, то класс считается абстрактным.
    // Сделаю метод виртуальным, когда у класса появятся наследники.
    bool IsHitting() override;

//    virtual bool IsHitting() const;

    void Win() const;
    void Lose() const;
    void Push() const;
};


#endif //CPP_OOP_PLAYER_H
