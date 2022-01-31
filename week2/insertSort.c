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
void insertSort1(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        for ( int j = i, prev = j - 1; j > 0 && array[j] < array[prev]; j--, prev-- ) {
            int temp = array[j];

            array[j] = array[prev];
            array[prev] = temp;
        }
    }
}

// Модифицированный алгоритм Insert Sort
void insertSort2(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        int j = i;
        int tmp = array[i];

        for ( int prev = j - 1; j > 0 && tmp < array[prev]; j--, prev-- ) {
            array[j] = array[prev];
        }
        array[j] = tmp;
    }
}


int main() {
    int array[10] = {2, 8, 4, 3, 9, 10, 1, 5, 7, 4};
    int size = sizeof(array)/sizeof(int);

    printArray(array, size);
    insertSort1(array, size);
    printArray(array, size);

    return 0;
}
