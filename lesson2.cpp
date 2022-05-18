#include <iostream>
#include "Student.h"
#include "Apple.h"
#include "Banana.h"
#include "GrannySmith.h"

using namespace std;

int main() {
    // Задание 1
    Student st1("John", 20, Male, 80.f, 3);
    Student st2("Kate", 19, Female, 45.f, 2);
    Student st3("Pete", 18, Male, 96.f, 1);

    cout << "Student count: " << Student::GetStudentCount() << endl;

    // Задание 2
    Apple a("Red");
    Banana b;
    GrannySmith c;

    std::cout << "My " << a.GetName() << " is " << a.GetColor() << ".\n";
    std::cout << "My " << b.GetName() << " is " << b.GetColor() << ".\n";
    std::cout << "My " << c.GetName() << " is " << c.GetColor() << ".\n";

    return 0;
}
