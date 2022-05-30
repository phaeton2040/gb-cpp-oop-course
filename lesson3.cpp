#include <iostream>
#include "cmath"
#include <map>

using namespace std;

// Task 1
class Figure {
public:
    virtual float Area() = 0;
};

class Parallelogram : public Figure {
public:
    Parallelogram(float a, float b, float alpha) : Figure() {
        Alpha = alpha > 180 ? 360 - alpha : alpha;
        SideA = a;
        SideB = b;
    }
    /**
     * The first side of the parallelogram
     */
    float SideA;

    /**
     * The second side of the parallelogram
     */
    float SideB;

    /**
     * The angle between SideA and SideB
     */
    float Alpha;

    float Area() override {
        return SideA * SideB * sin(Alpha * M_PI / 180);
    }
};

class Circle : public Figure {
public:
    explicit Circle(float r) : Figure() {
        Radius = r;
    }

    /**
     * Radius of the circle
     */
    float Radius;

    float Area() override {
        return M_PI * Radius * Radius;
    }
};

class Square: public Parallelogram {
public:
    explicit Square(float s) : Parallelogram(s, s, 90) {}
};

class Rectangle: public Parallelogram {
public:
    Rectangle(float a, float b) : Parallelogram(a, b, 90) {}
};

class Rhombus: public Parallelogram {
public:
    Rhombus(float a, float alpha) : Parallelogram(a, a, alpha) {}
};

// Task 2
class Car {
public:
    string Company;
    string Model;

    Car(string c, string m) {
        Company = c;
        Model = m;
        cout << "Base Car" << endl;
    }
};

class PassengerCar : virtual public Car {
public:
    PassengerCar(string c, string m) : Car(c, m) {
        cout << "Passenger Car" << endl;
    }
};

class Bus : virtual public Car {
public:
    Bus(string c, string m) : Car(c, m) {
        cout << "Bus" << endl;
    }
};

class Minivan : public PassengerCar, public Bus {
public:
    Minivan(string c, string m) : PassengerCar(c, m), Bus(c, m), Car(c, m) {
        cout << "Minivan" << endl;
    }
};


//Task 3
class Fraction {
public:
    int Numerator;
    int Denominator;

    Fraction();
    Fraction(int num, int den) : Numerator(num), Denominator(den) {
        if (den == 0) {
            throw invalid_argument("Denominator can't be zero!");
        }
    }

    Fraction operator+(Fraction &other) const {
        Fraction result(
                Numerator * other.Denominator + other.Numerator * Denominator,
                Denominator * other.Denominator
                );

        result.Simplify();
        return result;
    }

    Fraction operator-(Fraction &other) const {
        Fraction result(
                Numerator * other.Denominator - other.Numerator * Denominator,
                Denominator * other.Denominator
                );
        result.Simplify();
        return result;
    }

    Fraction operator*(Fraction &other) const {
        Fraction result(
                Numerator * other.Numerator,
                Denominator * other.Denominator
                );
        result.Simplify();

        return result;
    }

    Fraction operator/(Fraction &other) const {
        if (other.Numerator == 0) {
            throw invalid_argument("Division invalid!");
        }

        Fraction result(
                    Numerator * other.Denominator,
                    Denominator * other.Numerator
                );
        result.Simplify();

        return result;
    }

    /*
     * 2/3 , 3/4 => 8/12 , 9/12
     */
    bool operator<(Fraction &other) {
        int thisNumerator = Numerator * other.Denominator;
        int otherNumerator = Denominator * other.Numerator;

        return thisNumerator < otherNumerator;
    }

    bool operator>(Fraction &other) {
        return other < *this;
    }

    bool operator==(Fraction &other) {
        int thisNumerator = Numerator * other.Denominator;
        int otherNumerator = Denominator * other.Numerator;

        return thisNumerator == otherNumerator;
    }

    bool operator!=(Fraction &other) {
        return !(*this == other);
    }

    string ToString() {
        return to_string(Numerator) + "/" + to_string(Denominator);
    }

    void Simplify() {
        int m, n, r;

        n = fabs(Denominator);
        m = fabs(Numerator);

        r = m % n;
        while (r) //Ищем наибольший общий делитель
        {
            m=n;
            n=r;
            r = m % n;
        }
        Denominator /= n; // Упрощаем дробь
        Numerator /= n;

        if (Denominator < 0)
        {
            Denominator = -Denominator;
            Numerator = -Numerator;
        }
    }
};

//Task 4
enum Suites {
    SPADES, HEARTS, CLUBS, DIAMONDS
};

enum Names {
    TWO, THREE, FOUR, FIVE,
    SIX, SEVEN, EIGHT, NINE, TEN,
    JACK, QUEEN, KING, ACE
};

map<Names, int> CardValues {
        {Names::ACE, 1},
        {Names::TWO, 2},
        {Names::THREE, 3},
        {Names::FOUR, 4},
        {Names::FIVE, 5},
        {Names::SIX, 6},
        {Names::SEVEN, 7},
        {Names::EIGHT, 8},
        {Names::NINE, 9},
        {Names::TEN, 10},
        {Names::JACK, 10},
        {Names::QUEEN, 10},
        {Names::KING, 10},
};

class Card {
public:
    Card(Suites s, Names n) : Suite(s), Name(n), IsFlipped(false) {
        Value = CardValues.at(Name);
    }

    enum Suites Suite;
    enum Names Name;
    int Value;
    bool IsFlipped;

    void Flip() {
        IsFlipped = !IsFlipped;
    }
};

int main() {
    // Task 1
    Parallelogram par(1, 3, 30);
    Figure &fig = par;

    Circle circle(5);
    Figure &fig2 = circle;

    Square square(6);
    Figure &fig3 = square;

    Rectangle rectangle(2, 3);
    Figure &fig4 = rectangle;

    Rhombus rhombus(5, 30);
    Figure &fig5 = rhombus;

    cout << "Area of the parallelogram is: " << fig.Area() << endl;
    cout << "Area of the circle is: " << fig2.Area() << endl;
    cout << "Area of the square is: " << fig3.Area() << endl;
    cout << "Area of the rectangle is: " << fig4.Area() << endl;
    cout << "Area of the rhombus is: " << fig5.Area() << endl;

    //Task 2
    Minivan minivan("VW", "Tiguan");
    /*
      Output:
        Base Car
        Passenger Car
        Bus
        Minivan
     */

    //Task 3
    Fraction fraction1(2, 3);
    Fraction fraction2(3, 4);
    Fraction fraction3(2, 5);
    Fraction fraction4(1, 5);
    Fraction fraction5(1, 5);

    cout << "2/3 + 3/4 = " << (fraction1 + fraction2).ToString() << endl;
    cout << "2/3 - 3/4 = " << (fraction1 - fraction2).ToString() << endl;
    cout << "2/5 + 1/5 = " << (fraction3 + fraction4).ToString() << endl;
    cout << "2/3 * 3/4 = " << (fraction1 * fraction2).ToString() << endl;
    cout << "2/3 / 3/4 = " << (fraction1 / fraction2).ToString() << endl;

    string lessCompResult = fraction1 < fraction2 ? "True" : "False";
    cout << "2/3 < 3/4 = " << lessCompResult  << endl;

    string greaterCompResult = fraction1 > fraction2 ? "True" : "False";
    cout << "2/3 > 3/4 = " << greaterCompResult  << endl;

    string equalityCompResult = fraction1 == fraction2 ? "True" : "False";
    cout << "2/3 == 3/4 = " << equalityCompResult  << endl;

    string notEqualityCompResult = fraction1 != fraction2 ? "True" : "False";
    cout << "2/3 != 3/4 = " << notEqualityCompResult  << endl;

    string equalityResult = fraction4 == fraction5 ? "True" : "False";
    cout << "1/5 == 1/5 = " << equalityResult  << endl;

    //Task 4
    Card c(CLUBS, ACE);
    c.Flip();
}