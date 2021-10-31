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

    if (command == "addMatrix"){
        int rows, columns;
        std::cout << "Print number of rows and columns: ";
        std::cin >> rows >> columns;
        double **arrA = matrix::makeNew(rows, columns);
        double **arrB = matrix::makeNew(rows, columns);
        arrA = matrix::addMatrix(arrA, arrB, rows, columns);
        matrix::printMatrix(arrA, rows, columns);
    }
    else if (command == "subtractMatrix"){
        int rows, columns;
        std::cout << "Print number of rows and columns: ";
        std::cin >> rows >> columns;
        double **arrA = matrix::makeNew(rows, columns);
        double **arrB = matrix::makeNew(rows, columns);
        arrA = matrix::subtractMatrix(arrA, arrB, rows, columns);
        matrix::printMatrix(arrA, rows, columns);
    }
    else if (command == "multiplyMatrix") {
        int rows, columns1, columns2;
        std::cout << "Print number of rows, columns 1st matrix and columns 2nd matrix: ";
        std::cin >> rows >> columns1 >> columns2;
        double **arrA = matrix::makeNew(rows, columns1);
        double **arrB = matrix::makeNew(columns1, columns2);
        double **arrC = matrix::makeNew(rows, columns2);
        arrC = matrix::multiplyMatrix(arrA, arrB, rows, columns1, columns2);
        matrix::printMatrix(arrC, rows, columns2);
    }
    else if (command == "multiplyByScalar"){
        int rows, columns;
        double scalar;
        std::cout << "Print number of rows, columns and scalar: ";
        std::cin >> rows >> columns;
        std::cin >> scalar;
        double **arrA = matrix::makeNew(rows, columns);
        arrA = matrix::multiplyByScalar(arrA, rows, columns, scalar);
        matrix::printMatrix(arrA, rows, columns);
    }
    else if (command == "transpozeMatrix"){
        int rows, columns;
        std::cout << "Print number of rows and columns: ";
        std::cin >> rows >> columns;
        double **arrA = matrix::makeNew(rows, columns);
        double **arrB = matrix::makeNew(columns, rows);
        arrB = matrix::transpozeMatrix(arrA, rows, columns);
        matrix::printMatrix(arrB, columns, rows);
    }
    else if (command == "powerMatrix"){
        int rows;
        unsigned power;
        std::cout << "Print number of rows and columns (1 number) and power: ";
        std::cin >> rows >> power;
        double **arrA = matrix::makeNew(rows, rows);
        arrA = matrix::powerMatrix(arrA, rows, rows, power);
        matrix::printMatrix(arrA, rows, rows);
    }
    else if (command == "determinantMatrix"){
        int rows;
        double det;
        std::cout << "Print number of rows and columns (1 number): ";
        std::cin >> rows;
        double **arrA = matrix::makeNew(rows, rows);
        det = matrix::determinantMatrix(arrA, rows, rows);
        std::cout << det;
    }
    else if (command == "matrixIsDiagonal"){
        int rows;
        std::cout << "Print number of rows and columns (1 number): ";
        std::cin >> rows;
        double **arrA = matrix::makeNew(rows, rows);
        std::cout << matrix::matrixIsDiagonal(arrA,rows);
    }
    else if (command == "swap"){
        double a,b;
        double *pa, *pb;
        std::cout << "Print numbers that you want to swap: ";
        std::cin >> a >> b;
        matrix::swap(&a, &b);
        std::cout << "a " << a << ", b " << b;
    }
    else if (command == "sortRow"){
        int columns;
        std::cout << "Print number of columns: ";
        std::cin >> columns;
        std::cout << "fill array:\n";
        double *arr = new double [columns];
        for (int i = 0; i < columns; i++){
            std::cin >> arr[i];
        }
        arr = matrix::sortRow(arr, columns);
        for (int i = 0; i < columns; i++){
            std::cout << arr[i] << " ";
        }
    }
    else if (command == "sortRowsInMatrix"){
        int rows, columns;
        std::cout << "Print number of rows and columns: ";
        std::cin >> rows >> columns;
        double **arr = matrix::makeNew(rows, columns);
        arr = matrix::sortRowsInMatrix(arr, rows, columns);
        std::cout << "Result of sort: \n";
        matrix::printMatrix (arr, rows, columns);
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
