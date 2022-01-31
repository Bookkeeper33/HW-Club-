#include <stdio.h>

void arraySliceShiftRight(int array[], int start, int end) {
    if ( start < end ) {
        int buffer = array[end];

        for ( ; end > start; end-- ) {
            array[end] = array[end-1];
        }
        array[start] = buffer;
    }

}


int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array)/sizeof(int);
    int start = 0;
    int end = 4;

    arraySliceShiftRight(array, start, end);

    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}