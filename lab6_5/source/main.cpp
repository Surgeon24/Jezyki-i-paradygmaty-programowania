#include <iostream>
#include "vector.h"

int main() {
    Vector v1(1,1), v2(5,10);
    v2.Vector::print();
    Vector v3 = v1 + v2;
    v3 = v1.operator+(v2);
    v3.Vector::print();

    v1.Vector::porownywanie(v2);
}
