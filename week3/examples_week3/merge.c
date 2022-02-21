#include <stdio.h>

void print(int arr[], int size) {
    int limit = size - 1;

    for ( int i = 0; i < limit; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[limit]);
}

void merge(int array[], int lo, int mid, int hi) {
    int size = hi - lo;
    int buffer[size];

    int i = lo;
    int j = mid;
    int buffIndex = 0;

    for ( ; i < mid && j < hi; buffIndex++ ) {
        if ( array[i] < array[j] ) {
            buffer[buffIndex] = array[i];
            i += 1;
        } else {
            buffer[buffIndex] = array[j];
            j += 1;
        }
    }

    // 1: i = mid, j ??? j < hi
    // 2: j = hi, i ???? i < mid
    for ( ; j < hi; j++, buffIndex++ ) {
        buffer[buffIndex] = array[j];
    }

    for ( ; i < mid; i++, buffIndex++ ) {
        buffer[buffIndex] = array[i];
    }

    for ( int buffIndex = 0; buffIndex < size; buffIndex++, lo ) {
        array[lo] = buffer[buffIndex];
    }
}

void mergeSort(int array[], int lo, int hi) { // 0 - size;
    int mid = (hi + lo) / 2;

    if ( mid <= lo ) {
        return;
    }

    // divide
    mergeSort(array, lo, mid);
    mergeSort(array, mid, hi);
    // merge
    merge(array, lo, mid, hi);

}

int main() {
    int arr[] = {12, 34, 2, 78, 1, -12, 65};

    print(arr, 7);

    return 0;
}
