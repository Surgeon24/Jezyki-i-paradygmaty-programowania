//
// Created by Михаил on 29.11.2021.
//

#ifndef LAB_7_01_RECTANGLE_H
#define LAB_7_01_RECTANGLE_H

#pragma once
#include "Figure.h"

class Rectangle: public Figure {
private:
    double a, b;
public:
    Rectangle(double a, double b, string name, string colour);
    Rectangle(double a, double b);
    double getArea();
    //double obwod();
};

#endif //LAB_7_01_RECTANGLE_H
