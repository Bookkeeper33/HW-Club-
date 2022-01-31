#include <stdio.h>

int factorial(int n) {
    if ( n <= 1 ) {
        if ( n < 0 ) {
            return -1;
        }
        return 1;
    }
    return n * factorial(n - 1);
}


int main() {
    int fact;
    int number;

    scanf("%d", &fact);

    number = factorial(fact);

    printf("%d\n", number);

    return 0;
}