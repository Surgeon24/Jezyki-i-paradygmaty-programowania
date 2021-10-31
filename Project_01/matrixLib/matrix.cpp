#include "matrix.h"
#include <iostream>
#include "math.h"

void matrix::help(){
    std::cout << "Commands: \n";
    std::cout << "addMatrix          - dodawanie dwoch macierzy\n"
                 "subtractMatrix     - odejmowanie dwoch macierzy\n"
                 "multiplyMatrix     - mnozenie dwoch macierzy\n"
                 "multiplyByScalar   - mnozenie przez skalar\n"
                 "transpozeMatrix    - transponowanie macierzy\n"
                 "powerMatrix  x     - potegowanie macierzy, gdzie x - wartosc potegi\n"
                 "determinantMatrix  - wyznacznik macierzy\n"
                 "matrixIsDiagonal   - sprawdzanie, czy macierz jest diagonalna \n"
                 "swap               - zamiana dwoch wartosci miejscami\n"
                 "sortRow            - sortowanie rosnace tablicy za pomoca sortowania bombelkowego\n"
                 "sortRowsInMatrix   - sortowanie rosnace wszystkich wierszy w macierzy\n";
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

double** matrix::addMatrix(double **arrA, double **arrB, int rows, int columns) {
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            arrA[i][j] += arrB[i][j];
        }
    }
    return arrA;
}

double** matrix::subtractMatrix(double **arrA, double **arrB, int rows, int columns) {
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            arrA[i][j] -= arrB[i][j];
        }
    }
    return arrA;
}

double** matrix::multiplyMatrix(double **arrA, double **arrB, int rows, int columns1, int columns2) {
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
    return arrC;
}

double** matrix::multiplyByScalar (double **arrA, int rows, int columns, double scalar){
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            arrA[i][j] *= scalar;
        }
    }
    return arrA;
}

double** matrix::transpozeMatrix (double **arrA, int rows, int columns){
    double **arrB = new double* [columns];
    for (int i = 0; i < columns; i++){
        arrB[i] = new double[rows];
    }

    for (int i = 0; i < columns; i++){
        for (int j = 0; j < rows; j++){
            arrB[i][j] = arrA[j][i];
        }
    }
    return arrB;
}

double** matrix::powerMatrix (double **arrA, int rows, int columns, unsigned power){
    for (int i = 1; i < power; i++){
        arrA = matrix::multiplyMatrix (arrA, arrA, rows, columns, columns);
    }
    return arrA;
}

double matrix::determinantMatrix (double **arrA, int rows, int rows2){
    double det = 0;
    double answer;
    if (rows == 1) {
        det = arrA[0][0];
        return det;
    }
    rows2 --;
    for (int j = 0; j < rows; j++){
        double **arrB = new double* [rows2];
        for (int i = 0; i < rows2; i++){
            arrB[i] = new double[rows2];
        }
        for (int x = 0; x < rows2; x++){
            for (int y = 0; y < rows2; y++){
                if (x<j)
                    arrB[x][y] = arrA[x][y+1];
                else if (x >= j)
                    arrB[x][y] = arrA[x+1][y+1];
            }
        }
        det += (arrA[j][0] * pow(-1, j)) * determinantMatrix(arrB, rows2, rows2);
        for (int i = 0; i < rows2; i++){
            delete[] arrB[i];
        }
    }
    return det;
}

bool matrix::matrixIsDiagonal(double **arr, int rows){
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < rows; j++)
            if ((i != j) && (arr[i][j] != 0))
                return false;
    return true;
}

void matrix::swap (double *a, double *b){
    double c;
    c = *a;
    *a = *b;
    *b = c;
}

double* matrix::sortRow (double *arr, int columns){
    for (int i = 0; i < columns; i++){
        for (int j = i+1; j < columns; j++){
            if (arr[i] > arr[j])
                std::swap(arr[i],arr[j]);
        }
    }
    return arr;
}

double** matrix::sortRowsInMatrix (double **arr, int rows, int columns){
    double *tmp = new double [columns];
    for (int i = 0; i < rows; i++){
        for (int j = 0; j < columns; j++){
            tmp[j] = arr[i][j];
        }
        tmp = matrix::sortRow(tmp, columns);
        for (int j = 0; j < columns; j++){
            arr[i][j] = tmp[j];
        }
    }
    return arr;
}