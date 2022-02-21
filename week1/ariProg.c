#include <stdio.h>

int main() {
    int number, step, quantity;
    
    scanf("%d %d %d", &number, &step, &quantity);
    
    for ( int i = 1; i < quantity; i++, number += step ) {
        printf("%d ", number);
    }
    printf("%d\n", number);
    
    return 0;
}
