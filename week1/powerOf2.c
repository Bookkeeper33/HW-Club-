#include <stdio.h>

int main() {
    int power;
    int square = 1;
    
    scanf("%d", &power);
    for ( int i = 0; i < power; i++ ) { // в условия цикла также можно добавить square *= 2
        printf("%d ", square);
        square *= 2;
    }
    printf("%d\n", square);
    
    return 0;
}
