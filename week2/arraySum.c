#include <stdio.h>


int arraySum(int array[], int size) {
    int sum = 0;

    for ( int i = 0; i < size; i++ ) {
        sum += array[i];
    }

    return sum;
}


int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    printf("%d\n", arraySum(arr, 10));

    return 0;
}

