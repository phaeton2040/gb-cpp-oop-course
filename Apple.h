#ifndef CPP_OOP_APPLE_H
#define CPP_OOP_APPLE_H

#include "string"
#include "Helpers.h"
#include "Fruit.h"

using namespace std;

class Apple : public Fruit {
public:
    explicit Apple(string color);
};


#endif //CPP_OOP_APPLE_H
