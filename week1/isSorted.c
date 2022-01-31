#include <stdio.h>

int main() {
    int a, b, c, d, e;
    
    scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
    
    if ( e < d || b < a ) {
        printf("no\n");
    } else {
        printf("yes\n");
    }
    
    return 0;
}
