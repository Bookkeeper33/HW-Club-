#include <stdio.h>

int main() {
    int number;
    
    scanf("%d", &number);
    
    for ( int i = number / 2; i > 1; i-- ) {
        if ( number % i == 0 ) {
            printf("%d\n", i);
            return 0;
        }
    }
    printf("0\n");
    
    return 0;
}
