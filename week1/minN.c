#include <stdio.h>

int main() {
    int sequence;
    int min, number;
    
    scanf("%d %d", &sequence, &min);
    
    for ( ; sequence > 1; sequence-- ) {
        scanf("%d", &number);
        if ( number < min ) {
            min = number;
        }
    }
    printf("%d\n", min);
    
    return 0;
}
