#include "../include/Circle.h"

Circle::Circle(double r, string name, string colour): r(r) {
    this->name = name;
    this->colour = colour;
}

Circle::Circle(double r): r(r) {}

double Circle::getArea() {
    return 3.14 * r * r;
}

/*
double Circle::obwod() {
    return 2 * 3.14 * r;
}*/