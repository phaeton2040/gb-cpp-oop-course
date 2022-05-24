#include "Student.h"

int Student::StudentCount = 0;

Student::Student(string name, int age, enum Gender gender, float weight, int year) {
    Name = name;
    Age = age;
    Gender = gender;
    Weight = weight;
    Year = year;
    Student::StudentCount++;
}

void Student::IncreaseYear() {
    Year++;
}
