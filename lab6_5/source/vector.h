
#ifndef LAB6_5_VECTOR_H
#define LAB6_5_VECTOR_H

#include "math.h"

class Vector {
private:
    double x, y;

public:
    Vector() {};

    Vector(double x, double y) : x(x), y(y) {}

    double length() {
        return sqrt(x * x + y * y);
    }
    // +
    Vector operator+(const Vector &rhs) const {
        return {x + rhs.x, y + rhs.y};
    }

    Vector &operator+=(const Vector &rhs) {
        this->x = this->x + rhs.x;
        this->y = this->y + rhs.y;
        return *this;
    }
    // -
    Vector operator-(const Vector &rhs) const {
        return {x - rhs.x, y - rhs.y};
    }

    Vector &operator-=(const Vector &rhs) {
        this->x = this->x - rhs.x;
        this->y = this->y - rhs.y;
        return *this;
    }
    // wektor przeciwny
    Vector przeciwny() const {
        return {0, 0};
    }
    //iloczyn skalarny
    double iloczyn(const Vector v1, const Vector v2) {
        return (v1.x * v2.x + v1.y * v2.y);
    }
    //mnozenie przez skalar
    Vector operator*(double z) const {
        return {x * z, y * z};
    }
    //porownywanie wektorow
    void porownywanie(Vector v2) {
        if(length() > v2.length())
            std::cout << "pierwszy vector jest wiekszy";
        else if (length() < v2.length())
            std::cout << "drugi vector jest wiekszy";
        else
            std::cout << "vectory sa rowne";
    }

    void print(){
        std::cout << "x = " << x << ", y = " << y << std::endl;
    }
};

#endif //LAB6_5_VECTOR_H
