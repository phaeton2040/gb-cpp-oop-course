#include "iostream"
#include "limits"
#include "Player.h"

using namespace std;

//  Задание 1
void Task1() {
    string number;

    cout << "Please enter a number: ";
    cin >> number;

    if (number.find_first_not_of("0123456789") != string::npos) {
        cin.clear(_S_badbit);
    }

    while (!cin.good()) {
        cin.clear();
        cin.sync();
//        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "Please enter a number: ";
        cin >> number;

        if (number.find_first_not_of("0123456789") != string::npos) {
            cin.clear(_S_badbit);
        }
    }

    cout << "You entered - " << number << endl;
}

// Задание 2
ostream& endll(ostream &out) {
    out << "\n\n...end of the stream\n";
    out.flush();
    return out;
}

int main() {
    cout << "Hello!" << endll;

    Task1();

    // Задание 3
    auto* p = new Player("James Bond");

    p->IsHitting();

    auto* c = new Card(SPADES, QUEEN);
    cout << *c << endl;

    c->Flip();
    cout << *c;
}