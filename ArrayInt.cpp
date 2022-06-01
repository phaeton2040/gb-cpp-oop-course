#include <algorithm>
#include "cassert"
#include "iostream"
#include "ArrayInt.h"

using namespace std;

ArrayInt::ArrayInt(): m_length(0), m_data(nullptr) {}

ArrayInt::ArrayInt(int length): m_length(length) {
    assert(length >= 0);

    if (length > 0) {
        m_data = new int[length];
    } else {
        m_data = nullptr;
    }
}

// Доработал немного класс с урока, а то че мы, как лохи без нормальной инициализации
ArrayInt::ArrayInt(std::initializer_list<int> list) {
    assert(list.size() >= 0);

    m_length = list.size();
    m_data = new int[m_length];

    auto it = list.begin();
    int c = 0;
    while (it != list.end()) {
        m_data[c] = *it;
        it++;
        c++;
    }
}

void ArrayInt::Erase() {
    delete[] m_data;

    // Здесь нам нужно указать m_data значение nullptr, чтобы на выходе не было висячего указателя
    m_data = nullptr;
    m_length = 0;
}

void ArrayInt::Resize(int newLength) {
    // Если массив уже нужной длины — return
    if (newLength == m_length) {
        return;
    }

    // Если нужно сделать массив пустым — делаем это и затем return
    if (newLength <= 0) {
        Erase();
        return;
    }

    // Теперь знаем, что newLength >0
    // Выделяем новый массив
    int *data = new int[newLength];

    // Затем нужно разобраться с количеством копируемых элементов в новый массив
    // Нужно скопировать столько элементов, сколько их есть в меньшем из массивов
    if (m_length > 0) {
        int elementsToCopy = (newLength > m_length) ? m_length : newLength;

        // Поочередно копируем элементы
        for (int index=0; index < elementsToCopy ; ++index) {
            data[index] = m_data[index];
        }
    }

    // Удаляем старый массив, так как он нам уже не нужен
    delete[] m_data;

    // И используем вместо старого массива новый! Обратите внимание, m_data указывает
    // на тот же адрес, на который указывает наш новый динамически выделенный массив. Поскольку
    // данные были динамически выделенные — они не будут уничтожены, когда выйдут из области видимости
    m_data = data;
    m_length = newLength;
}
void ArrayInt::InsertBefore(int value, int index) {
    // Проверка корректности передаваемого индекса
    assert(index >= 0 && index <= m_length);

    // Создаем новый массив на один элемент больше старого массива
    int* data = new int[m_length+1];

    // Копируем все элементы до index-а
    for (int before=0; before < index; ++before) {
        data[before] = m_data[before];
    }

    // Вставляем новый элемент в новый массив
    data[index] = value;

    // Копируем все значения после вставляемого элемента
    for (int after=index; after < m_length; ++after) {
        data[after+1] = m_data[after];
    }

    // Удаляем старый массив и используем вместо него новый
    delete[] m_data;
    m_data = data;
    ++m_length;
}

void ArrayInt::PushBack(int value) {
    InsertBefore(value, m_length);
}

int ArrayInt::PopBack() {
    int elementToReturn = m_data[m_length - 1];
    Resize(m_length - 1);

    return elementToReturn;
}

int ArrayInt::PopFront() {
    int elementToReturn = m_data[0];

    // Создаем новый массив на один элемент меньше старого массива
    int* data = new int[m_length - 1];
    
    for (int i = 1; i < m_length; i++) {
        data[i - 1] = m_data[i];
    }
    
    m_data = data;
    --m_length;
    
    return elementToReturn;
}

void ArrayInt::Sort() {
    sort(m_data, m_data + m_length);
}

void ArrayInt::Print() {
    if (m_length < 0 || m_data == nullptr) {
        cout << "Array is empty" << endl;
        return;
    }

    cout << "[";
    for (int i = 0; i < m_length; i++) {
        cout << m_data[i];

        if (i < m_length - 1) {
            cout << ", ";
        }
    }

    cout << "]";
}
