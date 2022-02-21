#include <stdio.h>

void sortArr(int arr[], int size) {
    for ( int i = 0; i < size; i++ ) {
        for ( int j = i + 1; j < size; j++ ) {
            if ( arr[i] > arr[j] ) {
                int buff = arr[i];

                arr[i] = arr[j];
                arr[j] = buff; 
            }
        }
    }
}

int arrayUnique(int array[], int size) {
    int len = 0;
    sortArr(array, size);

    for ( int i = 0; i < size; i++ ) {
        if ( array[i] != array[i+1] ) {
            array[len] = array[i];
            len += 1;
        }
    }

    return len;
}

void print(int arr[], int size) {
    int last = size - 1;

    printf("array = ");
    for ( int i = 0; i < last; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[last]);
    printf("len = %d\n", size);
}

int main() {
    int arr[] = {1, 1, 2, 2, 5, 5, 5, 4, 4, 8, 8, 2, 2};
    int size = sizeof(arr) / sizeof(int);

    int newSize = arrayUnique(arr,size);
    print(arr, newSize);

    return 0;
}