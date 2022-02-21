#include <stdio.h>

int fib(int n) {
    int prevFib = 0;
    int currentFib = 1;
    int tmp;

    if ( n == 0 ) {
        return 0;
    }

    if ( n == 1 || n == -1 ) {
        return 1;
    }

    if ( n > 1 ) {
        for ( int i = 2; i <= n; i++ ) {
            tmp = prevFib + currentFib;
            prevFib = currentFib;
            currentFib = tmp;
        }
        return currentFib;
    }

    if ( n < -1 ) {
        for ( int i = -2; i >= n; i-- ) {
            tmp = prevFib + currentFib;
            prevFib = currentFib;
            currentFib = tmp;
        }
        
        if ( n % 2 == 0 ) {
            currentFib *= -1;
        }
        return currentFib;
    }
    return 0;
}



int main() {
    int num;

    scanf("%d", &num);

    printf("the fibonnaci : %d\n", fib(num));


    return 0;
}