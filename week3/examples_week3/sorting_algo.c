#include <stdio.h>

void printArray(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

void insertSort(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        int j = i;
        for ( ; j > 0 && array[j-1] > array[j]; j-- ) {
            int buff = array[j];

            array[j] = array[j-1];
            array[j-1] = buff;
        }
    }
}

int selectionSort(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = i;

        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[min] ) {
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

void bubbleSort(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        for ( int j = 0; j < size - i; j++ ) {
            if ( array[j] > array[j+1] ) {
                int buff = array[j];

                array[j] = array[j+1];
                array[j+1] = buff;
            }
        }
    }
}

int main() {
    int array1[] = {2,4,1,3,5};
    int array2[] = {1, 5, 2, 8, 4};
    int array3[] = {82, 1, 19, 5, 2};
    int size = sizeof(array1)/sizeof(int);

    bubbleSort(array1, size);
    printArray(array1, size);

    selectionSort(array2, size);
    printArray(array2, size);

    insertSort(array3, size);
    printArray(array3, size);

    return 0;
}
