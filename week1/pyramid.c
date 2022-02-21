#include <stdio.h>

int main() {
    int total, rows, cols;
    
    scanf("%d %d %d", &total, &rows, &cols);
    
    if ( rows < cols ) {
        rows = cols;
    }
    for ( rows += 1, cols += 1; rows <= total; rows++ ) {
        for ( int col = cols; col < rows; col++ ) {
            printf("%d ", col);
        }
        printf("%d\n", rows);
    }
    
    return 0;
}
