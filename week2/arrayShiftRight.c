#include <stdio.h>

void arrayShiftRight(int array[], int size) {
    int buffer = array[size-1];
    int last = size - 1;

    for ( ; last > 0; last-- ) {
        array[last] = array[last-1];
    }
    array[0] = buffer;
}


int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array) / sizeof(int);

    printf("%d\n", size);
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
    arrayShiftRight(array, size);

    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }

    return 0;
}
