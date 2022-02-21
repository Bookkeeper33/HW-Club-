#include <stdio.h>

int main() {
    int number;
    int counter = 1;

    scanf("%d", &number);

    if ( number < 0 ) {
        counter += 1;
    }

    for ( number /= 10; number != 0; number /= 10 ) {
        counter += 1;
    }
    printf("%d\n", counter);

    return 0;
}
