#ifndef CPP_OOP_GENERICPLAYER_H
#define CPP_OOP_GENERICPLAYER_H

#include "string"
#include "Hand.h"

using namespace std;

class GenericPlayer : public Hand {
private:
    string Name;
public:
    explicit GenericPlayer(string n): Name(n) {};

    FORCEINLINE string GetName() const { return Name; }

    // Uncomment this when GenericPlayer will have inherited classes
    //virtual bool IsHitting() = 0;

    virtual bool IsHitting() {};

    bool IsBusted();
    void Bust();
};


#endif //CPP_OOP_GENERICPLAYER_H
