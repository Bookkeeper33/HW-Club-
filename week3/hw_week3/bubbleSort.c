#include <stdio.h>

void print(int arr[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[last]);
}

void bubbleSort(int arr[], int size) {
    int last = size - 1;
    int checked = 0;

    for ( int i = 0; i < last && !checked; i++ ) {
        int limit = last - i;

        checked = 1;

        for ( int j = 0; j < limit; j++ ) {
            int next = j + 1;

            if ( arr[j] > arr[next] ) {
                int buff = arr[j];

                arr[j] = arr[next];
                arr[next] = buff;
                checked = 0;
            }
        }
    }
}

int main() {
    int arr[] = { 1, 2, 4, 1, 7, 7, 6, 10, 8, 5 };
    int size = sizeof(arr) / sizeof(int);

    print(arr, size);
    printf("-------------\n");
    bubbleSort(arr, size);
    print(arr, size);

    return 0;
}