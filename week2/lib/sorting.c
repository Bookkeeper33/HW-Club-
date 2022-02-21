#include "sorting.h"

void bubbleSort(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        int limit = last - i;

        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;

            if ( array[j] > array[next] ) {
                int tmp = array[j];

                array[j] = array[next];
                array[next] = tmp;
            }
        }
    }
}

void selectionSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = i;

        for ( int j = i + 1; j < size; j++ ) {
            if ( array[min] > array[j] ) {
                min = j;
            }
        }
        if ( min != i ) {
            int tmp = array[i];

            array[i] = array[min];
            array[min] = tmp;
        }
    }
}

void insertionSort(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        int buffer = array[i];
        int j = i;

        for ( int prev = j - 1; j > 0 && buffer < array[prev]; prev--, j-- ) {
            array[j] = array[prev];
        }
        array[j] = buffer;
    }
}

void printArray(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

