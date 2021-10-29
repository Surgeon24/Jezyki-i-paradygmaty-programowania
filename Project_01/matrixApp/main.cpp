#include <iostream>

#include "../matrixLib/matrix.h"

int main() {
    std::string command;
    std::cout << "Welcome to 'Matrix'.\nPrint name of the operation. To show all operations print 'help'\n";
    std::cin >> command;
    if (command == "addMatrix"){
        int rows, columns;
        std::cout << "Print number of rows and columns: ";
        std::cin >> rows >> columns;
        double **arrA = matrix::makeNew(rows, columns);
        double **arrB = matrix::makeNew(rows, columns);
        matrix::addMatrix(arrA, arrB, rows, columns);
    }
    else if (command == "subtractMatrix"){
        int rows, columns;
        std::cout << "Print number of rows and columns: ";
        std::cin >> rows >> columns;
        double **arrA = matrix::makeNew(rows, columns);
        double **arrB = matrix::makeNew(rows, columns);
        matrix::subtractMatrix(arrA, arrB, rows, columns);
    }
    else if (command == "multiplyMatrix"){
        int rows, columns1, columns2;
        std::cout << "Print number of rows, columns 1st matrix and columns 2nd matrix: ";
        std::cin >> rows >> columns1 >> columns2;
        double **arrA = matrix::makeNew(rows, columns1);
        double **arrB = matrix::makeNew(columns1, columns2);
        matrix::multiplyMatrix(arrA, arrB, rows, columns1, columns2);
    }
    else if (command == "multiplyByScalar"){

    }
    else if (command == "help"){
        std::cout << "You printed help.\n";
        matrix::say_hello();
    }
    else {
        std::cout << "Undefined command. Print 'help' to print all commands.";
    }
    return 0;
}
