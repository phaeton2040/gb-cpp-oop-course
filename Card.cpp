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

string Card::GetSuiteName() const {
    switch (Suite) {
        case CLUBS:
            return "Clubs";
        case HEARTS:
            return "Hearts";
        case DIAMONDS:
            return "Diamonds";
        case SPADES:
            return "Spades";
        default:
            return "Undefined";
    }
}

string Card::GetCardName() const {
    switch (Name) {
        case ACE:
            return "Ace";
        case TWO:
            return "Two";
        case THREE:
            return "Three";
        case FOUR:
            return "Four";
        case FIVE:
            return "Five";
        case SIX:
            return "Six";
        case SEVEN:
            return "Seven";
        case EIGHT:
            return "Eight";
        case NINE:
            return "Nine";
        case TEN:
            return "Ten";
        case JACK:
            return "Jack";
        case QUEEN:
            return "Queen";
        case KING:
            return "King";
    }
}

// Задание 5
ostream &operator<<(ostream &out, const Card &card) {
    if (card.GetIsFlipped()) {
        out << card.GetCardName() << " of " << card.GetSuiteName();
    } else {
        out << "XX";
    }

    return out;
}
