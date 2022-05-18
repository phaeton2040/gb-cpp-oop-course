#ifndef CPP_OOP_STUDENT_H
#define CPP_OOP_STUDENT_H

#include "Person.h"

class Student : public Person {
private:
    int Year;
    static int StudentCount;
public:
    Student(string name, int age, enum Gender gender, float Weight, int Year);

    FORCEINLINE int GetYear() const { return Year; }
    FORCEINLINE static int GetStudentCount() { return Student::StudentCount; };
    FORCEINLINE static void SetStudentCount(int count) { Student::StudentCount = count; }
    FORCEINLINE void SetYear(int year) { Year = year; };

    void IncreaseYear();
};


#endif //CPP_OOP_STUDENT_H
