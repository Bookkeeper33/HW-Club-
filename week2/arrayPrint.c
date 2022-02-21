#include <stdio.h>

#define SIZE 10

int arrayPrint(FILE *out, int array[], int size) {
    int last = size - 1;
    for ( int i = 0; i < size; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out,"%d\n", array[last]);
}

int main() {
    int arr[SIZE] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    FILE *write = fopen("task.out", "w");

    arrayPrint(write, arr, SIZE);

    fclose(write);

    return 0;
}

