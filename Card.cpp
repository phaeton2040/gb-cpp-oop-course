#include "Card.h"

void Card::Flip() {
    IsFlipped = !IsFlipped;
}

map<Names, int> Card::CardValues{
        {Names::ACE, 11},
        {Names::TWO, 2},
        {Names::THREE, 3},
        {Names::FOUR, 4},
        {Names::FIVE, 5},
        {Names::SIX, 6},
        {Names::SEVEN, 7},
        {Names::EIGHT, 8},
        {Names::NINE, 9},
        {Names::TEN, 10},
        {Names::JACK, 10},
        {Names::QUEEN, 10},
        {Names::KING, 10},
};
