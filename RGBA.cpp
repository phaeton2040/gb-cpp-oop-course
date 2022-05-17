//
// Created by User on 17.05.2022.
//

#include "iostream"
#include "RGBA.h"

using namespace std;

RGBA::RGBA(uint8_t red, uint8_t green, uint8_t blue, uint8_t alpha) :
    m_red(0),
    m_green(0),
    m_blue(0),
    m_alpha(255)
{
    m_red = red;
    m_green = green;
    m_blue = blue;
    m_alpha = alpha;
}

void RGBA::Print() {
    cout << "Red: " << to_string(m_red) << endl;
    cout << "Green: " << to_string(m_green) << endl;
    cout << "Blue: " << to_string(m_blue) << endl;
    cout << "Alpha: " << to_string(m_alpha) << endl;
}
