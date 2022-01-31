#include "library.h"
#include <stdio.h>
// добавлять -с при компиляции библиотеки

int sum(int a, int b) {
    return a + b;
}

int increment(int a) {
    return a + 1;
}

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}