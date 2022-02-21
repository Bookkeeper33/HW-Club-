#include <stdio.h>

#define SIZE 3

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

void matrixCopy(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            target[row][col] = source[row][col];
        }
    }
}

int main() {
    int matrix[SIZE][SIZE] = { {1, 2, 3}, {5, 7, 8}, {10, 20, 30}};
    int matrixCp[SIZE][SIZE];

    matrixPrint(matrix, SIZE);
    printf("----------\n");
    matrixCopy(matrixCp, matrix, SIZE);
    matrixPrint(matrixCp, SIZE);

    return 0;
}