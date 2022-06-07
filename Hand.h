#ifndef CPP_OOP_HAND_H
#define CPP_OOP_HAND_H

#include "vector"
#include "Card.h"

class Hand {
private:
    std::vector<Card*> Cards;
    int __getValueInternal(int aceValue);
public:
    Hand();
    void Add(Card *card);
    void Clear();
    int GetValue();

    FORCEINLINE std::vector<Card*> GetCards() const { return Cards; }

    static const int MAX = 21;
    static const int ACE_MIN_VALUE = 1;
};


#endif //CPP_OOP_HAND_H
