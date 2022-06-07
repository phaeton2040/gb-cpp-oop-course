#ifndef CPP_OOP_GENERICPLAYER_H
#define CPP_OOP_GENERICPLAYER_H

#include <utility>

#include "string"
#include "Hand.h"

using namespace std;

class GenericPlayer : public Hand {
private:
    string Name;
public:
    explicit GenericPlayer(string n): Name(std::move(n)) {};

    FORCEINLINE string GetName() const { return Name; }

    virtual bool IsHitting() = 0;

    bool IsBusted();
    void Bust();
};


#endif //CPP_OOP_GENERICPLAYER_H
