#include <stdio.h>

#define  SIZE 3

void matrixFill(int matrix[SIZE][SIZE], int size) {
    int counter = 1;

    for ( int row = 0; row < size; row ++ ) {
        for ( int col = 0; col < size; col++ ) {
            matrix[col][row] = counter;
            counter++;
        }
    }
}

void matrixPrint(int matrix[SIZE][SIZE], int size) {
    int last = size - 1;

    for ( int row = 0; row < size; row ++ ) {
        int col = 0;

        for ( ; col < last; col++ ) {
            printf("%2d ", matrix[col][row]);
        }
        printf("%2d\n", matrix[col][row]);
    }
}

void matrixDecrement(int matrix[SIZE][SIZE], int decrement[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int column = 0; column < size; column++ ) {
            matrix[row][column] -= decrement[row][column];
        }
    }
}



int main() {
    int matrix[SIZE][SIZE];
    int matrixInc[SIZE][SIZE] = { {2, 2, 2}, { 3, 3, 3}, {5, 5, 5}};

    matrixFill(matrix, SIZE);
    matrixPrint(matrix, SIZE);
    printf("-----------\n");
    matrixPrint(matrixInc, SIZE);
    printf("-----------\n");
    matrixDecrement(matrix, matrixInc, SIZE);
    matrixPrint(matrix, SIZE);

    return 0;
}