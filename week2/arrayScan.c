#include <stdio.h>

#define SIZE 10

int arrayScan(FILE *in, int array[], int limit) {
    int quantity = 0;

    for ( ; quantity < limit && fscanf(in, "%d", &array[quantity]) == 1; quantity++);
    return quantity;
}

int arrayPrint(int array[], int size) {
    if (size <= 0 ) {
        return 0;
    }
    int last = size - 1;
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}


int main() {
    FILE *in = fopen("task.in", "r");
    int array[100];

    int result = arrayScan(in, array, 10);
    printf("%d\n", result);
    arrayPrint(array, result);

    return 0;
}