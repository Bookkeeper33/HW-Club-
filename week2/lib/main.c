#include <stdio.h>
#include "sorting.h"

int main() {
    int array[] = {4, 2, 1, 8, 3, 5, 7, 6};
    int size = sizeof(array) / sizeof(int);

    selectionSort(array, size);
    printArray(array, size);

    return 0;
}
