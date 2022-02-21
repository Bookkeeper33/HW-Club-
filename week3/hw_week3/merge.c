#include <stdio.h>

void merge(int array[], int lo, int mid, int hi) {
    int buff[hi-lo];
    int i = lo;
    int j = mid;
    int index = lo;

    for ( ; i < mid && j < hi; index++ ) {
        if ( array[i] < array[j] ) {
            buff[index] = array[i];
            i += 1;
        } else {
            buff[index] = array[j];
            j += 1;
        }
    }

    for ( ; i < mid; index++, i++ ) {
        buff[index] = array[i];
    }

    for ( ; j < hi; index++, j++ ) {
        buff[index] = array[j];
    }

    for ( index = lo; index < hi; index++ ) {
        array[index] = buff[index];
    }
}

    

void print(int arr[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[last]);
}


int main() {
    int arr[] = { 3, 3, 13, 14, 15, 16, 17, 17, 18, 19, 19, 20, 1, 2, 2, 4, 5, 6, 7, 8};
    int size = sizeof(arr) / sizeof(int);

    merge(arr, 0, 12, size);

    print(arr, size);

    return 0;
}