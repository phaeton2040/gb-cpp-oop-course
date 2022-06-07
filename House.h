#ifndef CPP_OOP_HOUSE_H
#define CPP_OOP_HOUSE_H

#include "GenericPlayer.h"

// Задание 4
class House : public GenericPlayer {
public:
    bool IsHitting() override;
    void FlipFirstCard();

    static const int HOUSE_MAX = 16;
};


#endif //CPP_OOP_HOUSE_H
