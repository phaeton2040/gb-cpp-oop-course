//
// Created by User on 17.05.2022.
//

#ifndef CPP_OOP_POWER_H
#define CPP_OOP_POWER_H

class Power {
private:
    float Basis;
    float Exponent;

public:
    Power();

    void SetBasis(float value) { Basis = value; };
    void SetExponent(float value) { Exponent = value; };

    float Calculate() const;
    float GetBasis() const { return Basis; };
    float GetExponent() const { return Exponent; };
};

#endif //CPP_OOP_POWER_H
