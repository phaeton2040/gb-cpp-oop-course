//
// Created by User on 17.05.2022.
//

#ifndef CPP_OOP_STACK_H
#define CPP_OOP_STACK_H


class Stack {
private:
    int Size;
    int Index;
    int Array[];
public:
    Stack(int size);

    void Reset();
    int Pop();
    void Print();

    bool Push(int value);
};


#endif //CPP_OOP_STACK_H
