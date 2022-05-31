#ifndef CPP_OOP_CARD_H
#define CPP_OOP_CARD_H
#include "Helpers.h"

class Card {
private:
    enum Suites Suite;
    enum Names Name;
    int Value;
    bool IsFlipped;
public:
    Card(Suites s, Names n) : Suite(s), Name(n), IsFlipped(false) {
        Value = Card::CardValues.at(Name);
    }

    FORCEINLINE int GetValue() const { return Value; }
    FORCEINLINE int GetName() const { return Name; }
    FORCEINLINE int GetSuite() const { return Suite; }

    void Flip();

    static map<Names, int> CardValues;
};


#endif //CPP_OOP_CARD_H
