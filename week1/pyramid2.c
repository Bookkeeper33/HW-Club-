#include <stdio.h>

int main() {
    int size;
    int counter = 1;
    
    scanf("%d", &size);
    
    for ( int row = 1; row <= size; row++ ) {
        for ( int column = 1; column < row; column++ ) {
            printf("%d ", counter);
            counter += 1;
        }
        printf("%d\n", counter);
        counter += 1;
    }
    return 0;
}
