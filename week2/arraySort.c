#include <stdio.h>

void arraySortInc(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = 0; j < size; j++) {
            if ( array[i] < array[j] ) {
                int buffer = array[i];

                array[i] = array[j];
                array[j] = buffer;
            }
        }
    }
}

void arraySortDec(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = i+1; j < size; j++ ) {
            if ( array[i] < array[j] ) {
                int buffer = array[i];

                array[i] = array[j];
                array[j] = buffer;
            }
        }
    }
}

int main() {
    int array[10] = {2, 3, 1, 4, 5, 8, 7 , 9, 4, 6};
    int size = sizeof(array)/sizeof(int);

    arraySortInc(array, size);

    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");

    arraySortDec(array, size);

    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}