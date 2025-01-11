//
// Created by Shahob Shahmirzadi on 12/9/2024.
//

#ifndef MATRIX_H
#define MATRIX_H
#include <string>
using namespace std;

const int maxRows = 100;
const int maxCols = 100;
void initialize(double matrix[maxRows][maxCols], double value, int rows, int cols);
void add(const double matrixA[maxRows][maxCols], const double matrixB[maxRows][maxCols], double result[maxRows][maxCols], int rows, int cols);
void print(const string& outputTitle, const double matrix[maxRows][maxCols], int rows, int cols);

#endif //MATRIX_H
