#include <stdio.h>

#define SIZE 4

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

void matrixRotate270(int target[SIZE][SIZE], int source[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int column = 0; column < size; column++ ) {
            int newCol = size - column - 1;
            
            target[row][newCol] = source[column][row];
        }
    }
}

int main() {
    int matrix[SIZE][SIZE];
    int rotated[SIZE][SIZE];

    matrixFill(matrix, SIZE);

    matrixPrint(matrix, SIZE);
    printf("----------\n");
    matrixRotate270(rotated, matrix, SIZE);
    matrixPrint(rotated, SIZE);

    return 0;
}