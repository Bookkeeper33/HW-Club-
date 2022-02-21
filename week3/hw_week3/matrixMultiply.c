#include <stdio.h>

#define SIZE 3

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

void matrixMultiply(int matrix[SIZE][SIZE], int size, int multiplier) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            matrix[col][row] *= multiplier;
        }
    }
}

int main() {
    int matrix[SIZE][SIZE];


    matrixFill(matrix, SIZE);
    matrixPrint(matrix, SIZE);
    printf("-------------------------------\n");
    matrixMultiply(matrix, SIZE, 2);
    matrixPrint(matrix, SIZE);


    return 0;
}