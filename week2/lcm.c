#include <stdio.h>

int gcd(int a, int b) {
    if ( b == 0 ) {
        return a;
    }
    return gcd(b, a % b);
}

int lcm(int a, int b) {
    if ( a == b ) {
        return a;
    }
    //Because gcd(a, b) is a divisor of both a and b, it is more efficient to compute the lcm by dividing before multiplying
    return a / gcd(a,b) * b;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int a, b;

    fscanf(in, "%d %d", &a, &b);
    fclose(in);
    fprintf(out, "%d\n", lcm(a,b));
    fclose(out);

    return 0;
}