#include "House.h"

// Задание 4
bool House::IsHitting() {
    return GetValue() < HOUSE_MAX;
}

void House::FlipFirstCard() {
    auto* card = GetCards().at(0);
    card->Flip();
}
