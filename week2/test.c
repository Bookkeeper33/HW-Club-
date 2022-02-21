#include <stdio.h>

void arrayPrint(int array[], int size) {
    int last = size - 1;

    for ( int i = 0; i < last; i++ ) {
        printf("%d ", array[i]);
    }
    printf("%d\n", array[last]);
}

void insertSort(int array[], int size) {
    for ( int i = 1; i < size; i++ ) {
        int j = i;
        int tmp = array[i];

        for ( int prev = j - 1; j > 0 && tmp < array[prev]; prev--, j-- ) {
            array[j] = array[prev];
        }
        array[j] = tmp;
    }
}

int binarySearch(int array[], int size, int target) {
    int lo = 0;
    int hi = size - 1;

    for ( ; lo <= hi; ) {
        int mid = lo + (hi - lo) / 2;

        if ( array[mid] == target ) {
            return array[mid];
        }

        if ( array[mid] < target ) {
            lo = mid + 1;
        } else {
            hi = mid - 1;
        }
    }
    return -1;
}

int fibonacciCached(int n) {
    int fib[n];

    fib[0] = 0;
    fib[1] = 1;

    for ( int i = 2; i <= n; i++ ) {
        fib[i] = fib[i - 1] + fib[i - 2];
    }

    return fib[n];
}

int main() {
    int array[] = {1, 5, 10, 15, 12, 11, 3, 2, 4, 7, 8, 6};
    int size = sizeof(array) / sizeof(int);

    arrayPrint(array, size);
    insertSort(array, size);
    arrayPrint(array, size);

    printf("%d\n", binarySearch(array,size, 4));
    printf("fib %d\n", fibonacciCached(3));

    return 0;
}



// int main() {
//     int number;
//     int base;
//     int power = 1;

//     scanf("%d %d", &number, &base);


//     for ( int i = number; i != 0; i /= base ) {
//         power *= base;
//     }

//     for ( ; power != 0 ; power /= base ) {
//         printf("%d", number / power);
//         number %= power;
//     }
//     printf("\n");
   

//     return 0;
// }

