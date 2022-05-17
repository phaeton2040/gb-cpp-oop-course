//
// Created by User on 17.05.2022.
//

#ifndef CPP_OOP_RGBA_H
#define CPP_OOP_RGBA_H

#include "cstdint"

using namespace std;

class RGBA {
private:
    uint8_t m_red;
    uint8_t m_green;
    uint8_t m_blue;
    uint8_t m_alpha;
public:
    RGBA(uint8_t red,
         uint8_t green,
         uint8_t blue,
         uint8_t alpha);

    void Print();
};

#endif //CPP_OOP_RGBA_H
