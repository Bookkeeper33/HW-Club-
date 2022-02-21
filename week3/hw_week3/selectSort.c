#include <stdio.h>

void print(int arr[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[last]);
}

void selectSort(int arr[], int size) {
    for ( int i = 0; i < size; i++ ) {
        int min = i;

        for ( int j = i + 1; j < size; j++ ) {
            if ( arr[min] > arr[j] ) {
                min = j;
            }
        }

        if ( min != i ) {
            int buff = arr[i];

            arr[i] = arr[min];
            arr[min] = buff;
        }
    }
}

int main() {
    int arr[] = { 1, 2, 4, 1, 7, 7, 6, 10, 8, 5 };
    int size = sizeof(arr) / sizeof(int);

    print(arr, size);
    printf("-------------\n");
    selectSort(arr, size);
    print(arr, size);

    return 0;
}