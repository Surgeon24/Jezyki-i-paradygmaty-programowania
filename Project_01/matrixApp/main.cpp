#include <iostream>
#include <string>
#include <sstream>
#include "../matrixLib/matrix.h"

int main(int argc, char *argv[]) {
    std::string command;
    std::stringstream ss;
    ss << argv[1];
    ss >> command;
    int type_of_array;
    std::cout << "Welcome to 'Matrix'.\nPrint 1 to work with integers or print 2 to work with doubles\n";
    std::cin >> type_of_array;
    if (std::cin.fail()){
        matrix::inputError();
        return 0;
    }
    if (command == "addMatrix"){
        int rows, columns;
        std::cout << "Print number of rows and columns: ";
        std::cin >> rows >> columns;
        if (std::cin.fail()){
            matrix::inputError();
            return 0;
        }
        if (type_of_array == 1){
            int **arrA = matrix::makeNewInt(rows, columns);
            int **arrB = matrix::makeNewInt(rows, columns);
            arrA = matrix::addMatrix(arrA, arrB, rows, columns);
            std::cout << std::endl;
            matrix::printMatrix(arrA, rows, columns);
        }
        else if (type_of_array == 2) {
            double **arrA = matrix::makeNew(rows, columns);
            double **arrB = matrix::makeNew(rows, columns);
            arrA = matrix::addMatrix(arrA, arrB, rows, columns);
            std::cout << std::endl;
            matrix::printMatrix(arrA, rows, columns);
        }
    }

    else if (command == "subtractMatrix"){
        int rows, columns;
        std::cout << "Print number of rows and columns: ";
        std::cin >> rows >> columns;
        if (std::cin.fail()){
            matrix::inputError();
            return 0;
        }
        if (type_of_array == 1){
            int **arrA = matrix::makeNewInt(rows, columns);
            int **arrB = matrix::makeNewInt(rows, columns);
            arrA = matrix::subtractMatrix(arrA, arrB, rows, columns);
            matrix::printMatrix(arrA, rows, columns);
        }
        else if (type_of_array == 2) {
            double **arrA = matrix::makeNew(rows, columns);
            double **arrB = matrix::makeNew(rows, columns);
            arrA = matrix::subtractMatrix(arrA, arrB, rows, columns);
            matrix::printMatrix(arrA, rows, columns);
        }
    }

    else if (command == "multiplyMatrix") {
        int rows, columns1, columns2;
        std::cout << "Print number of rows, columns 1st matrix and columns 2nd matrix: ";
        std::cin >> rows >> columns1 >> columns2;
        if (std::cin.fail()){
            matrix::inputError();
            return 0;
        }
        if (type_of_array == 1){
            int **arrA = matrix::makeNewInt(rows, columns1);
            int **arrB = matrix::makeNewInt(columns1, columns2);
            int **arrC = matrix::makeNewInt(rows, columns2);
            arrC = matrix::multiplyMatrix(arrA, arrB, rows, columns1, columns2);
            matrix::printMatrix(arrC, rows, columns2);
        }
        else if (type_of_array == 2) {
            double **arrA = matrix::makeNew(rows, columns1);
            double **arrB = matrix::makeNew(columns1, columns2);
            double **arrC = matrix::makeNew(rows, columns2);
            arrC = matrix::multiplyMatrix(arrA, arrB, rows, columns1, columns2);
            matrix::printMatrix(arrC, rows, columns2);
        }
    }

    else if (command == "multiplyByScalar"){
        int rows, columns;
        std::cout << "Print number of rows, columns and scalar: ";
        std::cin >> rows >> columns;
        if (std::cin.fail()){
            matrix::inputError();
            return 0;
        }
        if (type_of_array == 1){
            int scalar;
            std::cin >> scalar;
            int **arrA = matrix::makeNewInt(rows, columns);
            arrA = matrix::multiplyByScalar(arrA, rows, columns, scalar);
            matrix::printMatrix(arrA, rows, columns);
        }
        else if (type_of_array == 2) {
            double scalar;
            std::cin >> scalar;
            double **arrA = matrix::makeNew(rows, columns);
            arrA = matrix::multiplyByScalar(arrA, rows, columns, scalar);
            matrix::printMatrix(arrA, rows, columns);
        }
    }

    else if (command == "transpozeMatrix"){
        int rows, columns;
        std::cout << "Print number of rows and columns: ";
        std::cin >> rows >> columns;
        if (std::cin.fail()){
            matrix::inputError();
            return 0;
        }
        if (type_of_array == 1){
            int **arrA = matrix::makeNewInt(rows, columns);
            int **arrB = matrix::makeNewInt(columns, rows);
            arrB = matrix::transpozeMatrix(arrA, rows, columns);
            matrix::printMatrix(arrB, columns, rows);
        }
        else if (type_of_array == 2) {
            double **arrA = matrix::makeNew(rows, columns);
            double **arrB = matrix::makeNew(columns, rows);
            arrB = matrix::transpozeMatrix(arrA, rows, columns);
            matrix::printMatrix(arrB, columns, rows);
        }
    }

    else if (command == "powerMatrix"){
        int rows;
        unsigned power = (int) argv[2];
        std::cout << "Print number of rows and columns (1 number): ";
        std::cin >> rows;
        if (std::cin.fail()){
            matrix::inputError();
            return 0;
        }
        if (type_of_array == 1){
            int **arrA = matrix::makeNewInt(rows, rows);
            arrA = matrix::powerMatrix(arrA, rows, rows, power);
            matrix::printMatrix(arrA, rows, rows);
        }
        else if (type_of_array == 2) {
            double **arrA = matrix::makeNew(rows, rows);
            arrA = matrix::powerMatrix(arrA, rows, rows, power);
            matrix::printMatrix(arrA, rows, rows);
        }
    }

    else if (command == "determinantMatrix"){
        int rows;
        std::cout << "Print number of rows and columns (1 number): ";
        std::cin >> rows;
        if (std::cin.fail()){
            matrix::inputError();
            return 0;
        }
        if (type_of_array == 1){
            int det;
            int **arrA = matrix::makeNewInt(rows, rows);
            det = matrix::determinantMatrix(arrA, rows, rows);
            std::cout << det;
        }
        else if (type_of_array == 2) {
            double det;
            double **arrA = matrix::makeNew(rows, rows);
            det = matrix::determinantMatrix(arrA, rows, rows);
            std::cout << det;
        }
    }

    else if (command == "matrixIsDiagonal"){
        int rows;
        std::cout << "Print number of rows and columns (1 number): ";
        std::cin >> rows;
        if (std::cin.fail()){
            matrix::inputError();
            return 0;
        }
        if (type_of_array == 1){
            int **arrA = matrix::makeNewInt(rows, rows);
            std::cout << matrix::matrixIsDiagonal(arrA,rows);
        }
        else if (type_of_array == 2) {
            double **arrA = matrix::makeNew(rows, rows);
            std::cout << matrix::matrixIsDiagonal(arrA, rows);
        }
    }
    else if (command == "swap"){
        if (type_of_array == 1){
            int a,b;
            int *pa, *pb;
            std::cout << "Print numbers that you want to swap: ";
            std::cin >> a >> b;
            if (std::cin.fail()){
                matrix::inputError();
                return 0;
            }
            matrix::swap(&a, &b);
            std::cout << "a " << a << ", b " << b;
        }
        else if (type_of_array == 2) {
            double a, b;
            double *pa, *pb;
            std::cout << "Print numbers that you want to swap: ";
            std::cin >> a >> b;
            if (std::cin.fail()){
                matrix::inputError();
                return 0;
            }
            matrix::swap(&a, &b);
            std::cout << "a " << a << ", b " << b;
        }
    }

    else if (command == "sortRow"){
        int columns;
        std::cout << "Print number of columns: ";
        std::cin >> columns;
        std::cout << "fill array:\n";
        if (type_of_array == 1){
            int *arr = new int [columns];
            for (int i = 0; i < columns; i++){
                std::cin >> arr[i];
                if (std::cin.fail()){
                    matrix::inputError();
                    return 0;
                }
            }
            arr = matrix::sortRow(arr, columns);
            for (int i = 0; i < columns; i++){
                std::cout << arr[i] << " ";
            }
        }
        else if (type_of_array == 2) {
            double *arr = new double[columns];
            for (int i = 0; i < columns; i++) {
                std::cin >> arr[i];
                if (std::cin.fail()){
                    matrix::inputError();
                    return 0;
                }
            }
            arr = matrix::sortRow(arr, columns);
            for (int i = 0; i < columns; i++) {
                std::cout << arr[i] << " ";
            }
        }
    }

    else if (command == "sortRowsInMatrix"){
        int rows, columns;
        std::cout << "Print number of rows and columns: ";
        std::cin >> rows >> columns;
        if (std::cin.fail()){
            matrix::inputError();
            return 0;
        }
        if (type_of_array == 1){
            int **arr = matrix::makeNewInt(rows, columns);
            arr = matrix::sortRowsInMatrix(arr, rows, columns);
            std::cout << "Result of sort: \n";
            matrix::printMatrix (arr, rows, columns);
        }
        else if (type_of_array == 2) {
            double **arr = matrix::makeNew(rows, columns);
            arr = matrix::sortRowsInMatrix(arr, rows, columns);
            std::cout << "Result of sort: \n";
            matrix::printMatrix(arr, rows, columns);
        }
    }
    else if (command == "help"){
        std::cout << "You printed help.\n";
        matrix::help();
    }
    else {
        std::cout << "Undefined command. Print 'help' to print all commands.\n\n";
        matrix::help();
    }
    return 0;
}
