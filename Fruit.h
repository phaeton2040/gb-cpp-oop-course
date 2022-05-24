#ifndef CPP_OOP_FRUIT_H
#define CPP_OOP_FRUIT_H

#include "string"
#include "Helpers.h"

using namespace std;

class Fruit {
protected:
    string Name;
    string Color;
public:
    FORCEINLINE string GetName() const { return Name; }
    FORCEINLINE string GetColor() const { return Color; }
};


#endif //CPP_OOP_FRUIT_H
