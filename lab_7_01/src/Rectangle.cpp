#include "../include/Rectangle.h"

Rectangle::Rectangle(double a, double b, string name, string colour) : a(a), b(b) {
    this->name = name;
    this->colour = colour;
}

Rectangle::Rectangle(double a, double b): a(a), b(b) {}

double Rectangle::getArea() {
    return a*b;
}

/*
double Rectangle::obwod() {
    return (a+b)*2;
}*/