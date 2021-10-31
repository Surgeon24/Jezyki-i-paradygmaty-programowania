//
// Created by Михаил on 29.10.2021.
//

#ifndef PROJECT_01_MATRIX_H
#define PROJECT_01_MATRIX_H

namespace matrix {
    void     help ();
    void     inputError();
    double** makeNew (int rows, int columns);
    int**    makeNewInt (int rows, int columns);
    void     printMatrix (double **arr, int rows, int columns);
    void     printMatrix (int **arr, int rows, int columns);
    double** addMatrix (double **arrA, double **arrB, int rows, int columns);
    int**    addMatrix (int **arrA, int **arrB, int rows, int columns);
    double** subtractMatrix (double **arrA, double **arrB, int rows, int columns);
    int**    subtractMatrix(int **arrA, int **arrB, int rows, int columns);
    double** multiplyMatrix (double **arrA, double **arrB, int rows, int columns1, int columns2);
    int**    multiplyMatrix (int **arrA, int **arrB, int rows, int columns1, int columns2);
    double** multiplyByScalar (double **arrA, int rows, int columns, double scalar);
    int**    multiplyByScalar (int **arrA, int rows, int columns, int scalar);
    double** transpozeMatrix (double **arrA, int rows, int columns);
    int**    transpozeMatrix (int **arrA, int rows, int columns);
    double** powerMatrix (double **arrA, int rows, int columns, unsigned power);
    int**    powerMatrix (int **arrA, int rows, int columns, unsigned power);
    double   determinantMatrix (double **arrA, int rows, int columns);
    int      determinantMatrix (int **arrA, int rows, int columns);
    bool     matrixIsDiagonal (double **arr, int rows);
    bool     matrixIsDiagonal (int **arr, int rows);
    void     swap (double *a, double *b);
    void     swap (int *a, int *b);
    double*  sortRow (double *arr, int columns);
    int*     sortRow (int *arr, int columns);
    double** sortRowsInMatrix (double **arr, int rows, int columns);
    int** sortRowsInMatrix (int **arr, int rows, int columns);
}




#endif //PROJECT_01_MATRIX_H
