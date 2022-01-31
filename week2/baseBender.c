#include <stdio.h>

int powerOfN(int base, int n) {
    int highestDivider = 1;

    for ( int i = 0; i < n; i++ ) {
        highestDivider *= base;
    }
    return highestDivider;
}

int main() {
    int number;
    int base;
    int maxDivision = 0;

    scanf("%d %d", &number, &base);

    for ( int i = number; i > 0; i /= base, maxDivision++);

    for ( int i = maxDivision - 1; i >= 0; i-- ) {
        int maxPower = powerOfN(base, i);

        printf("%d", number/maxPower);
        number %= maxPower;
    }
    printf("\n");

    return 0;
}
