#include <stdio.h>

int powerOfBase(int base, int n) {
    int result = 1;

    for ( int i = 0; i < n; i++ ) {
        result *= base;
    }
    return result;
}

int main() {
    int decimal, base;
    int maxPower = 1;

    scanf("%d %d", &decimal, &base);

    if ( decimal < 0 ) {
        printf("-");
        decimal *= -1;
    }

    for ( int i = decimal/base; i > 0; i /= base, maxPower++);

    for ( int i = maxPower - 1; i >= 0; i-- ) {
        int power = powerOfBase(base, i);
        int remainder = decimal / power;

        if ( remainder > 9 ) {
            printf("%c", remainder+55);
        } else {
            printf("%d", remainder);
        }
        decimal %= power;
    }
    printf("\n");

    return 0;
}
