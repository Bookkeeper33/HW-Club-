#include <stdio.h>

void print(int arr[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", arr[i]);
    }
    printf("%d\n", arr[last]);
}

void insertSort(int array[], int len) {
    for ( int i = 1; i < len; i++ ) {
        int j = i;
        int buffer = array[i];
        
        for ( int prev = j - 1; j > 0 && buffer < array[prev]; j--, prev-- ) {
            array[j] = array[prev];
        }
        array[j] = buffer;
    }
}
        
int main() {
    int arr[] = { 1, 2, 4, 1, 7, 7, 6, 10, 8, 5 };
    int size = sizeof(arr) / sizeof(int);

    print(arr, size);
    printf("-------------\n");
    insertSort(arr, size);
    print(arr, size);

    return 0;
}