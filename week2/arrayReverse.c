#include <stdio.h>

void arrayReverse(int array[], int size) {
    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        int tmp = array[i];

        array[i] = array[j];
        array[j] = tmp;
    }
}


int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(int);

    printf("%d\n", size);
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    arrayReverse(array, size);

    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }

    return 0;
}