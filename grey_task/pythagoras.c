#include <stdio.h>

int main() {
    int x1, x2, y1, y2;
    int diff;
    scanf("%d %d %d %d", &x1, &x2, &y1, &y2);

    for ( int i = y1; i <= y2; i++ ) {
        diff += 1;
    }

    printf("     |");

    for ( int i = y1; i <= y2; i++ ) {
        printf(" %3d ", i);
    }

    printf("\n");
    printf(" ----+");
    diff *= 5;
    for ( int k = 0; k < diff-1; k++ ) {
        printf("-");
    }
    printf("\n");

    for ( int i = x1; i <= x2; i++ ) {
        printf(" %3d |", i);
        for ( int j = y1; j <= y2; j++ ) {
            printf(" %3d ", i * j);
        }
        printf("\n");
    }

    return 0;
}

