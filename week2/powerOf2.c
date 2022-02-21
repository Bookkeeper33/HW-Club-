#include <stdio.h>

int powerOf2(int exponent) {
    return 1 << exponent;
}

int main() {
    int exponent;

    scanf("%d", &exponent);

    printf("2^%d is %d\n", exponent, powerOf2(exponent));

    return 0;
}