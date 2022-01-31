#include <stdio.h>

int main() {
    int number, max;
    
    scanf("%d %d", &number, &max);
    
    if ( number % 2 != 0 ) {
        number += 1;
    }
    if ( max % 2 != 0 ) {
        max -= 1;
    }
    
    for ( ; number < max; number += 2 ) {
        printf("%d ", number);
    }
    printf("%d\n", max);
    
    return 0;
}
