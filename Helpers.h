#pragma once

#ifndef CPP_OOP_HELPERS_H
#define CPP_OOP_HELPERS_H
#define FORCEINLINE __attribute__((always_inline))

#include "map"

using namespace std;

enum Suites {
    SPADES, HEARTS, CLUBS, DIAMONDS
};

enum Names {
    TWO, THREE, FOUR, FIVE,
    SIX, SEVEN, EIGHT, NINE, TEN,
    JACK, QUEEN, KING, ACE
};

#endif //CPP_OOP_HELPERS_H
