#include "iostream"
#include "vector"
#include "string"
#include "map"
#include <cassert>
#include "ArrayInt.h"
#include "Hand.h"

using namespace std;

int main() {
    // Задание 1
    ArrayInt arr{5,3,6,12,10,45,23,34,22,13};

    arr.PushBack(5);
    arr.PushBack(15);

    arr.Sort();
    arr.Print();

    cout << endl;
    cout << "Popping the last element: " << arr.PopBack() << endl;

    arr.Print();

    cout << endl;
    cout << "Popping the next last element: " << arr.PopBack() << endl;

    arr.Print();

    cout << endl;
    cout << "Popping the first element: " << arr.PopFront() << endl;

    arr.Print();

    cout << endl;
    cout << "Popping the next first element: " << arr.PopFront() << endl;

    arr.Print();
    // Вывод
    /*
        [3, 5, 5, 6, 10, 12, 13, 15, 22, 23, 34, 45]
        Popping the last element: 45
        [3, 5, 5, 6, 10, 12, 13, 15, 22, 23, 34]
        Popping the next last element: 34
        [3, 5, 5, 6, 10, 12, 13, 15, 22, 23]
        Popping the first element: 3
        [5, 5, 6, 10, 12, 13, 15, 22, 23]
        Popping the next first element: 5
        [5, 6, 10, 12, 13, 15, 22, 23]
     */

    // Задание 2
    vector<int> intVec{1,2,3,3,4,5,5,6,7};
    map<int, int> resultMap = {};

    for(auto i : intVec) {
        if (resultMap.find(i) != resultMap.end()) {
            resultMap.at(i)++;
        } else {
            resultMap.insert({i, 1});
        }
    }

    // В задание присутствует расплывчатая формулировка - "различных"
    // Полагаю, что нужно посчитать, сколько всего элементов без учета повторений,
    // т.е, если в массиве у нас значение типа 1,2,3,3,4,5,5,6,7 ,
    // то ответом будет 7 (1,2,3,4,5,6,7)
    cout << endl;
    cout << "Unique elements count: " << resultMap.size();

    // На случай, если я ошибся, и нужно вывести только те элементы,
    // которые встречаются в массиве (векторе) только один раз
    int trueUniqueElementCounter = 0;
    for (auto const& x : resultMap)
    {
        if (x.second == 1) trueUniqueElementCounter++;
    }

    cout << endl;
    cout << "Elements with single appearance count: " << trueUniqueElementCounter;

    // Задание 3
    Hand hand;

    // Добавляем 2 карты без туза и считаем очки.
    hand.Add(new Card(Suites::CLUBS, Names::KING));
    hand.Add(new Card(Suites::DIAMONDS, Names::EIGHT));

    cout << endl;
    cout << "Hand's current value: " << hand.GetValue();

    hand.Clear();

    cout << endl;
    cout << "Hand's current value: " << hand.GetValue();

    // Добавляем 3 карты с одним тузом
    hand.Add(new Card(Suites::CLUBS, Names::KING));
    hand.Add(new Card(Suites::DIAMONDS, Names::EIGHT));
    hand.Add(new Card(Suites::HEARTS, Names::ACE));

    cout << endl;
    cout << "Hand's current value: " << hand.GetValue();

    hand.Clear();

    hand.Add(new Card(Suites::DIAMONDS, Names::NINE));
    hand.Add(new Card(Suites::HEARTS, Names::ACE));

    cout << endl;
    cout << "Hand's current value: " << hand.GetValue();

    hand.Clear();

    hand.Add(new Card(Suites::DIAMONDS, Names::ACE));
    hand.Add(new Card(Suites::HEARTS, Names::ACE));

    cout << endl;
    cout << "Hand's current value: " << hand.GetValue();

    /*
        Hand's current value: 18
        Hand's current value: 0
        Hand's current value: 19
        Hand's current value: 20
        Hand's current value: 21
     */
}