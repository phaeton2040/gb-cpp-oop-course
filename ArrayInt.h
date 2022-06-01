#ifndef CPP_OOP_ARRAYINT_H
#define CPP_OOP_ARRAYINT_H

#include "Helpers.h"

class ArrayInt {
private:
    int m_length;
    int* m_data;
public:
    ArrayInt();
    ArrayInt(int length);
    ArrayInt(std::initializer_list<int> list);
    FORCEINLINE ~ArrayInt() { delete m_data; };
    FORCEINLINE int getLength() const { return m_length; }
    FORCEINLINE int& operator[](int index) {
        assert(index >= 0 && index < m_length);
        return m_data[index];
    };
    void Erase();
    void Resize(int newLength);
    void InsertBefore(int value, int index);
    void PushBack(int value);
    int PopBack();
    int PopFront();
    void Sort();
    void Print();
};


#endif //CPP_OOP_ARRAYINT_H
