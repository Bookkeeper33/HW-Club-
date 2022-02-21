#include <stdio.h>

int getLen(FILE *in) {
    int length;

    fscanf(in, "%d", &length);
    return length;
}

void arrayAbs(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] < 0 ) {
            array[i] *= -1;
        }
    }
}

void arrayRead(FILE *in, int array[], int size) {
    for ( int i = 0; i < size && fscanf(in, "%d", &array[i]) == 1; i++ );
}

void arrayWrite(FILE *out, int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int size = getLen(in);
    int array[size];

    arrayRead(in, array, size);
    arrayAbs(array, size);
    arrayWrite(out, array, size);

    return 0;
}

