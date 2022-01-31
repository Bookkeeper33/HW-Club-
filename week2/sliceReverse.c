#include <stdio.h>

void sliceReverse(int array[], int lo, int hi) {
    for ( ; lo < hi; lo++, hi-- ) {
        int buffer = array[lo];

        array[lo] = array[hi];
        array[hi] = buffer;
    }
}

int main() {
    int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(array)/sizeof(int);
    int lo = 0;
    int hi = 4;

    sliceReverse(array, lo, hi);

    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }



    return 0;
}