//
// Created by filip on 11/14/21.
//

#ifndef LAB6_4_NODE_H
#define LAB6_4_NODE_H


class Node {
    friend double pointsDistance(Node a, Node b);
private:
    double x, y;

public:
    Node();
    Node(double x, double y);

    void display();

    void updateValue(double x, double y);
};

double pointsDistance(Node a, Node b);


#endif //LAB6_4_NODE_H