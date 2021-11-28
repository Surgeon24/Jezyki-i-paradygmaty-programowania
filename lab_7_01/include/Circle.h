//
// Created by Михаил on 29.11.2021.
//

#ifndef LAB_7_01_CIRCLE_H
#define LAB_7_01_CIRCLE_H

#pragma once
#include "Figure.h"

class Circle: public Figure {
private:
    double r;
public:
    Circle(double r, string name, string colour);
    Circle(double r);
    double getArea();
    //double obwod();
};

#endif //LAB_7_01_CIRCLE_H
