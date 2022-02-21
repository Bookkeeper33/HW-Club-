#include <stdio.h>

void printArray(int array[], int size) {
    int last = size - 1;
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

// ---------------------------------------------
// Оригинальный алгоритм
void selectionSort1(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = i + 1; j < size; j++ ) {
            if ( array[j] < array[i] ) {
                int tmp = array[i];

                array[i] = array[j];
                array[j] = tmp;
            }
        }
    }
}

void selectionSort2(int array[], int size) {
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

int main() {
    int array[10] = {2, 8, 4, 3, 9, 10, 1, 5, 7, 4};
    int size = sizeof(array)/sizeof(int);

    printArray(array, size);
    selectionSort2(array, size);
    printArray(array, size);

    return 0;
}
