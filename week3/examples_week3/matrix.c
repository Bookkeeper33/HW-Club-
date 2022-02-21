#include <stdio.h>

#define SIZE 5

void fill(int matrix[SIZE][SIZE]) {
    for ( int row = 0, counter = 1; row < SIZE; row++ ) {
        for ( int col = 0; col < SIZE; col++ ) {
            matrix[row][col] = counter;
            counter += 1;
        }
    }
}

void print(int matrix[SIZE][SIZE]) {
    int limit = SIZE - 1;

    for ( int row = 0; row < SIZE; row++ ) {
        for ( int col = 0; col < limit; col++ ) {
            printf("%d_", matrix[row][col]);
        }
        printf("%d\n", matrix[row][limit]);
    }
}

int main() {

    int limit = size - 1;
    int mat[size][size];

    fill(mat);
    print(mat);

    // print pointers
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < limit; j++ ) {
            printf("%llu_", &mat[i][j]);
        }
        printf("%llu\n", &mat[i][limit]);
    }


    return 0;
}
