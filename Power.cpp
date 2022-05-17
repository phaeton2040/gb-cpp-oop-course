//
// Created by User on 17.05.2022.
//

#include "Power.h"
#include "cmath"

Power::Power() :
        Basis(0),
        Exponent(0)
{}

float Power::Calculate() const {
    return std::pow(Basis, Exponent);
}