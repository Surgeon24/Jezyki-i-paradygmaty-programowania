//
// Created by Михаил on 29.11.2021.
//

#ifndef LAB_7_01_FIGURE_H
#define LAB_7_01_FIGURE_H

#pragma once
#include <iostream>

using namespace std;

class Figure {
protected:
    string name, colour;
public:
    virtual double getArea() = 0;
};

#endif //LAB_7_01_FIGURE_H
