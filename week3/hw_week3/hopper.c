#include <stdio.h>

#define MAX_CELLS 100

unsigned long long countCells(int maxJump, int cell) {
    unsigned long long ways[MAX_CELLS];

    for ( int i = 0; i < maxJump; i++ ) {
        ways[i] = 1 << i;
    }

    for ( int j = maxJump; j < cell; j++ ) {
        ways[j] = 0;

        for ( int k = j - maxJump; k < j; k++ ) {
            ways[j] += ways[k];
        }
    }

    return ways[cell-1];
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int maxJump, cell;
    
    fscanf(in, "%d %d", &maxJump, &cell);
    fclose(in);
    
    fprintf(out, "%llu\n", countCells(maxJump, cell));
    fclose(out);
    
    return 0;
}


