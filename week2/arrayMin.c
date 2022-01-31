#include <stdio.h>

int arrayMin(int array[], int size) {
    int min = array[0];
    for ( int i = 1; i < size; i++ ) {
        if ( array[i] < min ) {
            min = array[i];
        }
    }
    return min;
}




int main() {
    int arr[10] = {25, 40, 80, 5, 24, 95, 1, 89, 10, 99};

    printf("%d\n", arrayMin(arr, 10));

    return 0;
}
