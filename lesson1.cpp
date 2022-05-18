#include <iostream>
#include "Power.h"
#include "RGBA.h"
#include "Stack.h"

using namespace std;

int main() {
    // Задание 1
    Power P;

    P.SetBasis(10.f);
    P.SetExponent(2.f);

    cout << "10 in power 2 is: " << P.Calculate() << endl;

    // Задание 2
    RGBA Rgba(10, 10, 10, 10);
    Rgba.Print();

    // Задание 3
    Stack S(10);

    S.Push(1);
    S.Push(2);
    S.Push(3);
    S.Push(4);
    S.Push(5);
    S.Push(6);
    S.Push(7);
    S.Push(8);
    S.Push(9);
    S.Push(10);

    // This value shouldn't go to stack
    S.Push(11);
    S.Print();

    cout << "Popped value 1: " << S.Pop() << endl;
    cout << "Popped value 2: " << S.Pop() << endl;
    cout << "Popped value 3: " << S.Pop() << endl;

    cout << "New stack: ";
    S.Print();

    return 0;
}
