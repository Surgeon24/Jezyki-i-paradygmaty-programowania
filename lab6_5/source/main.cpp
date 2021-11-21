#include <iostream>
#include "vector.h"

int main() {
    Imaginary_v v1(2,1), v2(3,-2);
    Imaginary_v v3 = v1 + v2;
    v3.Imaginary_v::print();
    std::cout << v1.length() << "\n";
    std::cout << v2.length() << "\n";
    v1.Imaginary_v::porownywanie(v2);
}
