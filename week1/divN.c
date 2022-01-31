#include <stdio.h>

int main() {
    int min, max, divisor;
    int multiple;
    
    scanf("%d %d %d", &min, &max, &divisor);
    
    multiple = min - min % divisor;
    if ( min > multiple ) {
        multiple += divisor;
    }
    
    for ( int i = multiple; i <= max; i += divisor ) {
        printf("%d\n", i);
    }
    
    return 0;
}
