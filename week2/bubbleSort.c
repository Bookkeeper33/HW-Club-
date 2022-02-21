#include <stdio.h>

void printArray(int array[], int size) {
    int last = size - 1;
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

// --------------------------------------------
// Реализация сортировки по неубыванию в классической версии алгоритма выглядит так

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

// Модификация. Реализация модифицированного алгоритма «пузырька» с проверкой на предмет отсортированности.

void bubble(int array[], int size) {
    int last = size - 1;
    int isSorted = 0;

    for ( int i = 0; i < last && !isSorted; i++ ) {
        int limit = last - i;

        isSorted = 1;

        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;

            if ( array[j] < array[next] ) {
                int tmp = array[j];

                array[j] = array[next];
                array[next] = tmp;
                isSorted = 0;
            }
        }
    }
}

int main() {
    int array[10] = {2, 8, 4, 3, 9, 10, 1, 5, 7, 4};
    int size = sizeof(array)/sizeof(int);

    printArray(array, size);
    bubbleSort(array, size);
    printArray(array, size);

    return 0;
}