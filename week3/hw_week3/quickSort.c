#include <stdio.h>

int getLen(FILE *in) {
    int len;

    fscanf(in, "%d", &len);
    return len;
}

void arrayScan(FILE *in, int array[], int len) {
    for ( int i = 0; i < len && fscanf(in, "%d", &array[i]) == 1; i++ );
}

int partition(int array[], int start, int end) {
    int mid = start + (end - start) / 2;
    int pivot = array[mid];
    int pivotIndex;

    array[mid] = array[end];
    array[end] = pivot;

    for ( pivotIndex = start; array[pivotIndex] < array[end]; pivotIndex++ );

    for ( int index = pivotIndex + 1; index < end; index++ ) {
        if ( array[index] < array[end] ) {
            pivot = array[index];
            array[index] = array[pivotIndex];
            array[pivotIndex] = pivot;

            pivotIndex += 1;
        }
    }

    pivot = array[pivotIndex];
    array[pivotIndex] = array[end];
    array[end] = pivot;

    return pivotIndex;
}

void quickSort(int array[], int start, int end) {
    int index;

    if ( start >= end ) {
        return;
    }
    index = partition(array, start, end);

    quickSort(array, start, index-1);
    quickSort(array, index+1, end);

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

    quickSort(array, 0, len-1);
    arrayPrint(out, array, len);
    fclose(out);
    
    return 0;
}