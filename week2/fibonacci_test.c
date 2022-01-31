#include <stdio.h>


int fibonacci_loops(int n) {
    int first = 0, second = 1;
    int result = first + second;

    if ( n == 0 ) {
        return first;
    }
    if ( n == 1 ) {
        return second;
    }
    if ( n == 2 ) {
        return result;
    }

    for ( int i = 2; i < n; i++ ) {
        first = second;
        second = result;

        result = first + second;
    }
    return result;
}

int fibonacci(int n, int* counter) {
    if ( n == 0 ) {
        *counter += 1;
        return 0;
    }
    if ( n <= 2 ) {
        *counter += 1;
        return 1;
    }

    return fibonacci(n-1, counter) + fibonacci(n-2, counter);
    *counter += 1;
}


int main() {
    for ( int i = 0; i <= 46; i++) {
        // int counter = 0;
        // int result = fibonacci(i, &counter);

        // printf("result:%d, calls count: %d\n", result, counter);

        printf("result:%d\n", fibonacci_loops(i));
    }

    return 0;
}