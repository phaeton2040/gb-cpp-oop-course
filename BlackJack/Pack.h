#ifndef CPP_OOP_PACK_H
#define CPP_OOP_PACK_H

#include "vector"
#include "Card.h"

using namespace std;

// A class for keeping a 52 cards pack to simulate real game randomness
class Pack {
private:
    int Size;
    int Index;
    vector<Card> Cards;
public:
    Pack(int size);

    void Initialize();
    int Pop();
    bool Push(int value);
};


#endif //CPP_OOP_PACK_H
