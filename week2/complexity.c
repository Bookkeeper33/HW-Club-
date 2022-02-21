#include <stdio.h>

#define LIMIT 100

void bench1(int limit) {
    int counter = 0;
    for ( int i = 0; i < limit; i++ ) {
        counter += 1;
    }
    printf("bench1(%d) - %d iterations", limit, counter);
}

void bench2(int limit) {
    int counter = 0;
    for ( int i = -limit; i < limit; i++ ) {
        counter += 1;
    }
    printf("bench2(%d) - %d iterations", limit, counter);
}

void bench3(int limit) {
    int counter = 0;
    for ( int i = 0; i < limit; i += 42 ) {
        counter += 1;
    }
    printf("bench4(%d) - %d iterations\n", limit, counter);
}

void bench4(int limit) {
    int counter = 0;
    for ( int i = 0; i < limit % 1987; i++ ) {
        counter += 1;
    }
    printf("bench5(%d) - %d iterations\n", limit, counter);
}

void bench5(int limit) {
    int counter = 0;
    for ( int i = 0; i < 10; i++ ) {
        counter += 1;
    }
    printf("bench5(%d) - %d iterations\n", limit, counter);
}

void bench6(int limit) {
    int counter = 0;
    for ( int i = 0; i < limit; i += limit / 2 ) {
        counter += 1;
    }
    printf("bench6(%d) - %d iterations\n", limit, counter);
}

void bench7(int limit) {
    int counter = 0;
    for ( int i = limit; i > 0; i /= 2 ) {
        counter += 1;
    }
    printf("bench7(%d) - %d iterations\n", limit, counter);
}

void bench8(int limit) {
    int counter = 0;
    for ( int i = 1; i < limit; i *= 2 ) {
        counter += 1;
    }
    printf("bench8(%d) - %d iterations\n", limit, counter);
}

void bench9(int limit) {
    int counter = 0;
    for ( int i = 0; i < limit; i++ ) {
        for ( int j = 0; j < limit; j++ ) {
            counter += 1;
        }
    }
    printf("bench9(%d) - %d iterations\n", limit, counter);
}

void bench10(int limit) {
    int counter = 0;

    for ( int i = 0; i < limit; i++ ) {
        for ( int j = 0; j < i; j++ ) {
            counter += 1;
        }
    }
    printf("bench10(%d) - %d iterations\n", limit, counter);
}

void bench11(int limit) {
    int counter = 0;

    for ( int i = 0; i < limit; i++ ) {
        for ( int j = i; j > 0; j ) {
            counter += 1;
        }
    }
    printf("bench10(%d) - %d iterations\n", limit, counter);
}


void rbench1(int n, int* counter) {
    if ( n == 0 ) {
        *counter++;
        return;
    }
    for ( int i = 0; i < n; i++ ) {
        counter++
    }
    rbench1(n-1, counter);
    *counter++;
}

void rbench2(int n, int* counter) {
    if ( n == 0 ) {
        *counter++;
        return;
    }
    rbench1(n/1, counter);
    *counter++;
}

int main() {
    bench1(LIMIT);
    bench2(LIMIT);
    bench3(LIMIT);
    bench4(LIMIT);
    bench5(LIMIT);

    int counter = 0;
    rbench1(LIMIT, &counter);
    printf("%d counter", counter);

    return 0;
}