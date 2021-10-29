//
// Created by Михаил on 29.10.2021.
//

#ifndef PROJECT_01_MATRIX_H
#define PROJECT_01_MATRIX_H

namespace matrix {
    void say_hello ();
    double** makeNew (int rows, int columns);
    void printMatrix (double **arr, int rows, int columns);
    void addMatrix (double **arrA, double **arrB, int rows, int columns);
    void subtractMatrix (double **arrA, double **arrB, int rows, int columns);
    void multiplyMatrix (double **arrA, double **arrB, int rows, int columns1, int columns2);
}




#endif //PROJECT_01_MATRIX_H
