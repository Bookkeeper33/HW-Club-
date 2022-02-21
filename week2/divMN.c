#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a % b);
}

int main() {
    int min, max, m, n;
    int lcm;
    int multiple;

    scanf("%d %d %d %d", &min, &max, &m, &n);

    lcm = (m * n) / gcd(m, n);
    multiple = min - min % lcm;
    if ( multiple < min ) {
        multiple += lcm;
    }

    for ( ; multiple <= max; multiple += lcm ) {
        printf("%d\n", multiple);
    }

    return 0;
}