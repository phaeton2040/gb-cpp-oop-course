#ifndef CPP_OOP_PERSON_H
#define CPP_OOP_PERSON_H
#include "string"
#include "Helpers.h"

using namespace std;

class Person {
protected:
    string Name;
    int Age;
    Gender Gender;
    float Weight;
public:
    // Getters
    FORCEINLINE string GetName() const { return Name; }
    FORCEINLINE int GetAge() const { return Age; }
    FORCEINLINE enum Gender GetGender() const { return Gender; }
    FORCEINLINE float GetWeight() const { return Weight; }

    // Setters
    FORCEINLINE void SetName(string& name) { Name = name; }
    FORCEINLINE void SetAge(int age) { Age = age; }
    FORCEINLINE void SetGender(enum Gender gender) { Gender = gender; }
    FORCEINLINE void SetWeight(float weight) { Weight = weight; }
};


#endif //CPP_OOP_PERSON_H
