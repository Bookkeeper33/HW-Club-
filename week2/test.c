#include <stdio.h>

void bubbleSort(int array[], int size) {
    int last = size - 1;
    int isSorted = 0;

    for ( int i = 0; i < last && !isSorted; i++ ) {
        int limit = last - i;

        isSorted = 1;

        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;

            if ( array[j] > array[next] ) {
                int buffer = array[j];

                array[j] = array[next];
                array[next] = buffer;
                isSorted = 0;
            }
        }
    }
}

void printArray(int array[], int size) {
    for ( int i = 0; i < size; i++ ) {
        printf("%d ", array[i]);
    }
    printf("\n");
}

int main() {
    int arr[] = {2, 9, 19, 8 , 1, 243, 4, 8};
    int size = sizeof(arr) / sizeof(int);


    bubbleSort(arr, size);
    printArray(arr, size);

    return 0;
}
