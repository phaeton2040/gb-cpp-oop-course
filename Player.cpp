#include "Player.h"

// Задание 4
bool Player::IsHitting() {
    {
        char input;
        bool inputIsValid;

        cout << "Do you want to take 1 more card? (y/n)" << endl;
        cin >> input;

        inputIsValid = input == 'y' || input == 'n';

        while (!inputIsValid) {
            cin.clear();
            cin.sync();
            cout << "Do you want to take 1 more card?" << endl;
            cin >> input;
            inputIsValid = input == 'y' || input == 'n';
        }

        return input == 'y';
    }
}

void Player::Win() const {
    cout << "Player " << GetName() << " has won!" << endl;
}

void Player::Lose() const {
    cout << "Player " << GetName() << " has lost!" << endl;
}

void Player::Push() const {
    cout << "Player " << GetName() << " has played in draw!" << endl;
}
