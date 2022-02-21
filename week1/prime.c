#include <stdio.h>

int isPrime(int n) {
    if ( n == 2 ) {
        return 1;
    }
    if ( n % 2 == 0 ) {
        return 0;
    }
    for ( int i = 3; i < n; i += 2 ) {
        if ( n % i == 0 ) {
            return 0;
        }
    }
    return 1;
}

int main() {
    int position, number;
    int counter = 1;
    
    scanf("%d", &position);
    
    if ( position < 1 ) {
        printf("-1\n");
        return 0;
    }
    
    if ( position == 1 ) {
        printf("2\n");
        return 0;
    }
    
    for ( int i = 3; counter <= position; i++ ) {
        if ( isPrime(i) == 1 ) {
            counter += 1;
        }
        if ( isPrime(i) == 1 && counter == position ) {
            number = i;
        }
    }
    printf("%d\n", number);
    
    return 0;
}
