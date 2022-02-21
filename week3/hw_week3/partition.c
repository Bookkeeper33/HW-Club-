#include <stdio.h>

int partition(int array[], int start, int end) {
    int mid = start + (end - start) / 2;
    int pivot = array[mid];
    int pivotIndex = start;

    array[mid] = array[end];
    array[end] = pivot;

    for ( ; array[pivotIndex] < array[end]; pivotIndex++ );

    for ( int index = pivotIndex + 1; index < end; index++ ) {
        if ( array[index] < array[end] ) {
            pivot = array[index];
            array[index] = array[pivotIndex];
            array[pivotIndex] = pivot;
            pivotIndex += 1;
        }
    }
    pivot = array[pivotIndex];
    array[pivotIndex] = array[end];
    array[end] = pivot;

    return pivotIndex;
}

int main() {
    int array[] = {2, 3, 1, 0, 14, 8};
    int size = sizeof(array) / sizeof(int);

    int pivot = partition(array, 0, size-1);

    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    
    printf("\n%d\n", pivot);


    return 0;
}