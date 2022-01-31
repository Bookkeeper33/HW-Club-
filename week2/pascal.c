#include <stdio.h>

int binomialCoeff(int n, int k) {
    int result = 1;

    if ( k > n - k) {
        k = n - k;
    }
    // In every iteration update ans as (ans*(n-i))/(i+1) where i is the loop counter.
    for ( int i = 0; i < k; i++ ) {
        result *= (n - i);
        result /= (i + 1);
    }
    return result;
}

void printPascal(int n) {
    for ( int row = 0; row < n; row++ ) {
        int col = 0;

        for ( ; col < row; col++ ) {
            printf("%d ", binomialCoeff(row, col));
        }
        printf("%d\n", binomialCoeff(row, col));
    }
}

int main() {
    int lines;

    scanf("%d", &lines);

    printPascal(lines);

    return 0;
}