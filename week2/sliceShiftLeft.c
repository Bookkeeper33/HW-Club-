#include <stdio.h>

void sliceShiftLeft(int array[], int start, int end) {
    if ( start < end ) {
        int buffer = array[start];

        for ( int i = start; i < end; i++ ) {
            array[i] = array[i+1];
        }
        array[end] = buffer;
    }
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array)/sizeof(int);
    int start = 0;
    int end = 4;

    sliceShiftLeft(array, start, end);

    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }

    return 0;
}