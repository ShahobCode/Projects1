//
// Created by Shahob Shahmirzadi on 12/9/2024.
//

#include <iostream>
#include <iomanip>
#include "matrix.h"
#include <string>
using namespace std;

void initialize (double matrix[maxRows][maxCols], double value, int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            matrix[i][j] = value;
        }
    }
}
void add(const double matrixA[maxRows][maxCols], const double matrixB[maxRows][maxCols], double result[maxRows][maxCols], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = matrixA[i][j] + matrixB[i][j];
        }
    }
}
void print(const string& outputTitle, const double matrix[maxRows][maxCols], int rows, int cols) {
    cout << outputTitle << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cout <<  setw(10) << fixed << setprecision(3) << matrix[i][j];
        }
        cout << endl;
    }
    cout << endl;
}