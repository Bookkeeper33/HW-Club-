#include <stdio.h>

int main() {
    int limit;
    int min, max;
    
    scanf("%d %d", &limit, &max);
    
    for ( ; limit > 1; limit-- ) {
        scanf("%d", &min);
        if ( min > max ) {
            max = min;
        }
    }
    printf("%d\n", max);
    
    return 0;
}
