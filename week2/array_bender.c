#include <stdio.h>

int getLen(FILE* in) {
    int length;

    fscanf(in, "%d", &length);
    return length;
}

void arrayRead(FILE *in, int array[], int size) {
     for ( int i = 0; i < size; i++ ) {
        fscanf(in, "%d", &array[i]);
    }
}

void arrayWrite(FILE *out, int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < size; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out,"%d\n", array[last]);
}


int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    const int size = getLen(in);
    int array[size];

    arrayRead(in, array, size);
    fclose(in);

    arrayWrite(out, array, size);
    fclose(out);


    return 0;
}