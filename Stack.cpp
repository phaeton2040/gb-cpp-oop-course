//
// Created by User on 17.05.2022.
//

#include "iostream"
#include "Stack.h"

using namespace std;

Stack::Stack(int size) {
    Size = size;
    Reset();
}

void Stack::Reset() {
    for(int i = 0; i < Size; i++) {
        Array[i] = 0;
    }

    Index = 0;
}

int Stack::Pop() {
    Index--;
    return Array[Index];
}

void Stack::Print() {
    cout << "(";

    for(int i = 0; i < Index; i++) {
        cout << to_string(Array[i]);

        if (i < Index - 1) {
            cout << ", ";
        }
    }

    cout << ")" << endl;
}

bool Stack::Push(int value) {
    if (Index <= (Size - 1)) {
        Array[Index] = value;
        Index++;

        return true;
    } else {
        return false;
    }
}
