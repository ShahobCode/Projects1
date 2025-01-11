#include "matrix.h"
#include <iostream>
#include "tictactoe.h"
using namespace std;
int main() {
    const int rows = 3;
    const int cols = 4;
    double matrix1[100][100];
    double matrix2[100][100];
    double sumMatrix[100][100];
    cout << "Print the matrix's with all elements as 1.000, 2.000, and the last matrix having each element of the previous two matrix's added together: " << endl;
    initialize(matrix1, 1.0, rows, cols);
    initialize(matrix2, 2.0, rows, cols);
    print("MATRIX ONE:", matrix1, rows, cols);
    print("MATRIX TWO:", matrix2, rows, cols);
    add(matrix1, matrix2, sumMatrix, rows, cols);
    print("SUM MATRIX:", sumMatrix, rows, cols);
    cout << endl << endl;
    char board1[][3] = {
        {'O', 'O', 'X'},
        {'X', 'O', 'X'},
        {'O', 'X', 'X'}
    };
    char board2[][3] = {
        {'O', 'X', 'O'},
        {'O', 'O', 'X'},
        {'X', 'X', 'X'}
    };
    char board3[][3] = {
        {'X', 'O', 'O'},
        {'O', 'X', 'O'},
        {'O', 'X', 'X'}
    };
    char board4[][3] = {
        {'O', 'O', 'X'},
        {'O', 'X', 'O'},
        {'X', 'O', 'X'}
    };
    char board5[][3] = {
        {'O', 'X', 'O'},
        {'O', 'X', 'O'},
        {'X', 'O', 'X'}
    };
    cout << "Checking 5 boards to see if there is a winner (1) or no winner (0):" << endl;
    if (isBoardWinner(board1)) {
        cout << "Board 1: " << 1 << endl;
    } else {
        cout << "Board 1: " << 0 << endl;
    }
    if (isBoardWinner(board2)) {
        cout << "Board 2: " << 1 << endl;
    } else {
        cout << "Board 2: " << 0 << endl;
    }
    if (isBoardWinner(board3)) {
        cout << "Board 3: " << 1 << endl;
    } else {
        cout << "Board 3: " << 0 << endl;
    }
    if (isBoardWinner(board4)) {
        cout << "Board 4: " << 1 << endl;
    } else {
        cout << "Board 4: " << 0 << endl;
    }
    if (isBoardWinner(board5)) {
        cout << "Board 5: " << 1 << endl;
    } else {
        cout << "Board 5: " << 0 << endl;
    }
    return 0;
}