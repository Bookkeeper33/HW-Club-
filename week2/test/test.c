// gcc -std=c99 main.c array.c - компиляция
// gcc test.c -std=c99 array.o - компилируем основной файл и линкуем его с скомпилированной библиотечкой

#include <stdio.h>

#include "array.h"

#define MAX_SIZE 100

int main() {
    FILE* in = fopen("task.in", "r");
    FILE* out = fopen("task.out", "w");
    int array[MAX_SIZE];
    int size;

    size = arrayScan(in, array, MAX_SIZE);
    fclose(in);

    arrayReverse(array, size);
    arrayPrint(out, array, size);
    fclose(out);

    return 0;
}