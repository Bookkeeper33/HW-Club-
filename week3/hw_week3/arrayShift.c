#include <stdio.h>

void arrayShift(int array[], int size, int shift) {
    int move;

    if ( shift < 0 ) {
        shift = size + shift % size;
    } else {
        shift %= size;
    }
    
    move = size - shift;

    if ( shift < move ) {
        int buffer[shift];

        for ( int i = move, j = 0; i < size; i++, j++ ) {
            buffer[j] = array[i];
        }

        for ( int i = move - 1, j = size - 1; j >= shift; i--, j-- ) {
            array[j] = array[i];
        }

        for ( int i = 0; i < shift; i++ ) {
            array[i] = buffer[i];
        }
    } else {
        int buffer[move];
        
        for ( int i = 0; i < move; i++ ) {
            buffer[i] = array[i];
        }

        for ( int i = 0, j = move; j < size; i++, j++ ) {
            array[i] = array[j];
        }

        for ( int i = 0, j = shift; j < size; i++, j++ ) {
            array[j] = buffer[i];
        }
    }
}

void print(int arr[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[last]);
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20};
                // 1, 2, 3, 4, 5, 6,

                // 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20

                // 7, 8, 9, 10, 11, 12, 13, 14, 15, 16, 17, 18, 19, 20, 

    int size = sizeof(arr) / sizeof(int);

    print(arr, size);
    arrayShift(arr, size, 26);
    print(arr, size);

    return 0;
}