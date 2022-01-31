#include <stdio.h>


int arrayMax(int array[], int size) {
    int max = array[0];

    for ( int i = 1; i < size; i++ ) {
        if ( array[i] > max ) {
            max = array[i];
        }
    }
    return max;
}



int main() {
    int arr[10] = {25, 40, 80, 30, 24, 95, 76, 89, 10, 99};

    printf("%d\n", arrayMax(arr, 10));

    return 0;
}

