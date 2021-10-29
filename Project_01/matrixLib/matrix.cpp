#include "matrix.h"

#include <iostream>

void matrix::say_hello(){
    std::cout << "Hello, world";
}

double** matrix::makeNew(int rows, int columns) {
    std::cout << "Generate matrix:\n";
    double **arr = new double* [rows];
    for (int i = 0; i < rows; i++){
        arr[i] = new double[columns];
    }
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            std::cin >> arr[i][j];
        }
    }
    std::cout << "You generated:\n";
    matrix::printMatrix(arr, rows, columns);
    return arr;
}

void matrix::printMatrix (double **arr, int rows, int columns){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            std::cout << arr[i][j] << "  ";
        }
        std::cout << std::endl;
    }
}

void matrix::addMatrix(double **arrA, double **arrB, int rows, int columns) {
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            arrA[i][j] += arrB[i][j];
        }
    }
    matrix::printMatrix(arrA, rows, columns);
}

void matrix::subtractMatrix(double **arrA, double **arrB, int rows, int columns) {
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            arrA[i][j] -= arrB[i][j];
        }
    }
    matrix::printMatrix(arrA, rows, columns);
}

void matrix::multiplyMatrix(double **arrA, double **arrB, int rows, int columns1, int columns2) {
    double **arrC = new double* [rows];
    for (int i = 0; i < rows; i++){
        arrC[i] = new double[columns2];
    }

    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns2; j++){
            arrC[i][j] = 0;
        }
    }

    for (int i = 0; i < rows; i++){
        for (int q = 0; q < columns2; q++) {
            for (int j = 0; j < columns1; j++) {
                arrC[i][q] += arrA[i][j] * arrB[j][q];
            }
        }
    }

    matrix::printMatrix(arrC, rows, columns2);
}