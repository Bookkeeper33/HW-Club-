#include <stdio.h>

int getLen(FILE *in) {
    int len;

    fscanf(in, "%d", &len);
    return len;
} 

void arrayScan(FILE *in, int array[], int size) {
    for ( int i = 0; i < size && fscanf(in, "%d", &array[i]) == 1; i++ ); 
}

void merge(int array[], int lo, int mid, int hi) {
    int len = hi - lo;
    int buffer[len];
    int i = lo;
    int j = mid;
    int index = 0;

    for ( ; i < mid && j < hi; index++ ) {
        if ( array[i] < array[j] ) {
            buffer[index] = array[i];
            i += 1;
        } else {
            buffer[index] = array[j];
            j += 1;
        }
    }

    for ( ; i < mid; i++, index++ ) {
        buffer[index] = array[i];
    }

    for ( ; j < hi; j++, index++ ) {
        buffer[index] = array[j];
    }

    for ( index = 0; index < len; index++, lo++ ) {
        array[lo] = buffer[index];
    }
}

void mergeSort(int array[], int lo, int hi) {
    int mid = lo + (hi - lo) / 2;

    if ( mid <= lo ) {
        return;
    }
    mergeSort(array, lo, mid);
    mergeSort(array, mid, hi);
    merge(array, lo, mid, hi);
}

void arrayPrint(FILE *out, int array[], int len) {
    int last = len - 1;

    for ( int i = 0; i < last; i++ ) {
        fprintf(out, "%d ", array[i]);
    }
    fprintf(out, "%d\n", array[last]);
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int len = getLen(in);
    int array[len];

    arrayScan(in, array, len);
    fclose(in);

    mergeSort(array, 0, len);
    arrayPrint(out, array, len);
    fclose(out);

    return 0;
}
