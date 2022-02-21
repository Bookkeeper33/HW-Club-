#include <stdio.h>

#define SIZE 3


void matrixScan(FILE *in, int matrix[SIZE][SIZE], int size) {
    for ( int row = 0; row < size; row++ ) {
        for ( int col = 0; col < size; col++ ) {
            fscanf(in, "%d", &matrix[col][row]);
        }
    }
}

void matrixPrint(FILE *out, int matrix[SIZE][SIZE], int size) {
    int limit = SIZE - 1;
    for ( int row = 0; row < size; row++) {
        for ( int col = 0; col < limit; col++ ) {
            fprintf(out, "%d ", matrix[col][row]);
        }
        fprintf(out, "%d\n", matrix[limit][row]);
    }
}


int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int matrix[SIZE][SIZE];

    matrixScan(in, matrix, SIZE);
    fclose(in);

    matrixPrint(out, matrix, SIZE);
    fclose(out);

    return 0;
}