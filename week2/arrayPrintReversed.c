#include <stdio.h>


void arrayPrintReversed(int array[], int size) {
    // int count = size - 1; 
    for ( int i = size - 1; i > 0; i-- ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[0]);
}

int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    
    arrayPrintReversed(arr, 10);

    return 0;
}

