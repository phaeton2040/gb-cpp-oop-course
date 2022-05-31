#include "Hand.h"

Hand::Hand() : Cards(vector<Card*>()) {}

void Hand::Add(Card *card) {
    Cards.push_back(card);
}

void Hand::Clear() {
    Cards.clear();
}

int Hand::GetValue() {
    int result = __getValueInternal(Card::CardValues.at(ACE));

    if (result > MAX) {
        result = __getValueInternal(ACE_MIN_VALUE);
    }

    return result;
}

int Hand::__getValueInternal(int aceValue) {
    int result = 0;
    int acesCount = 0;

    for (auto card : Cards) {
        if (card->GetName() == Names::ACE) {
            result += aceValue;
            acesCount++;

            if (acesCount == 2 && Cards.size() == 2) {
                return MAX; // 2 туза - самая старшая комбинация, которая дает 21 очко
            }
        } else {
            result += card->GetValue();
        }
    }

    return result;
}
