#include "iostream"
#include "string"
#include "GenericPlayer.h"
#include "Card.h"

using namespace std;

// Задание 1
template<typename T>
class Pair1 {
private:
    T x1;
    T x2;
public:
    Pair1(T x1, T x2) : x1(x1), x2(x2) {}
    T first() const {
        return x1;
    }

    T second() const {
        return x2;
    }
};

// Задание 2
template<typename T1, typename T2>
class Pair {
private:
    T1 x1;
    T2 x2;
public:
    Pair(T1 x1, T2 x2) :x1(x1), x2(x2) {}
    T1 first() {
        return x1;
    }

    T2 second() {
        return x2;
    }
};

template<typename T>
class StringValuePair : public Pair<string, T> {
public:
    StringValuePair(string s, T x) : Pair<string, T>(s, x) {};
};

int main() {
    // Задание 1
    Pair1<int> p1(1, 2);

    cout << "Pair with 1 type parameter:" << endl;
    cout << "The first value in pair: " << p1.first() << endl;
    cout << "The second value in pair: " << p1.second() << endl;
    cout << endl;

    // Задание 2
    Pair<int, double> p2(45, 2.345);

    cout << "Pair with 2 type parameters:" << endl;
    cout << "The first value in pair: " << p2.first() << endl;
    cout << "The second value in pair: " << p2.second() << endl;
    cout << endl;

    // Задание 3
    StringValuePair<float> p3("PI", 3.14f);

    cout << "StringValuePair:" << endl;
    cout << "The first value in pair: " << p3.first() << endl;
    cout << "The second value in pair: " << p3.second() << endl;
    cout << endl;

    // Задание 4
    GenericPlayer player("James Bond");

    player.Add(new Card(CLUBS, TEN));
    player.Add(new Card(CLUBS, FIVE));
    player.Add(new Card(HEARTS, ACE));
    player.Add(new Card(HEARTS, KING));

    player.Bust();
}