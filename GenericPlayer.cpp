#include "iostream"
#include "string"
#include "GenericPlayer.h"

bool GenericPlayer::IsBusted() {
    return GetValue() > MAX;
}

void GenericPlayer::Bust() {
 string bustResult = IsBusted() ? " is busted" : " is not busted";

 cout << "Player " << GetName() << bustResult;
}
