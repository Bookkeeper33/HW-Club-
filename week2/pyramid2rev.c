#include <stdio.h>

int countNumber(int total) {
    int number = 0;

    for ( int i = 1; i <= total; i++ ) {
        for ( int j = 1; j < i; j++ ) {
            number += 1;
        }
        number += 1;
    }
    return number;
}


int main() {
    int total;
    int number;

    scanf("%d", &total);

    number = countNumber(total);

    for ( int rows = total, reversed = number; rows >= 1; rows-- ) {
        reversed -= rows - 1;
        for ( int cols = 1; cols < rows; cols++ ) {
            printf("%d ", reversed);
            reversed += 1;
        }
        printf("%d\n", reversed);
        reversed -= rows;
    }

    return 0;
}
