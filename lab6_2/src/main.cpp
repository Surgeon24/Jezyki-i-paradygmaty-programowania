#include <iostream>
#include "vector.h"
#include "node.h"

int main() {
    Node n1(0.0f,0.0f);
    Node n2(4.0f,3.0f);
    n1.Node::display();
    n2.Node::display();
    std::cout << pointsDistance(n1, n2);
    return 0;
}
