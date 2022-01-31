#include <stdio.h>

#define LIMIT 100

int arraySearch(int array[], int size, int needle) {
    for ( int i = 0; i < size; i++ ) {
        if ( array[i] == needle ) {
            return i;
        }
    }
    return -1;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int needle;
    int size = 0;
    int array[LIMIT];

    fscanf(in, "%d", &needle);

    for ( int i = 0; i < LIMIT && fscanf(in, "%d", &array[i]) == 1; i++, size++);
    printf("%d\n", size);
    fclose(in);

    fprintf(out, "%d\n", arraySearch(array, size, needle));
    fclose(out);

    return 0;
}
