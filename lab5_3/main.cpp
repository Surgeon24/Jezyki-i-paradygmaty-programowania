#include <iostream>
using namespace std;

int main() {
    std::cout << "Hello, World!" << std::endl;
    int cVal = 314;
    int *const p = &cVal;

    *p = 628;

    int cVal2 = 666;
    cout << cVal;
    //p = &cVal2;
    return 0;
}
