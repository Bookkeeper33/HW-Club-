#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char symbol;
    char offset = 'a' - 'A';

    for ( ; fscanf(in, "%c", &symbol) != EOF; ) {
        if ( symbol >= 'a' && symbol <= 'z' ) {
            symbol -= offset;
        }
        fprintf(out, "%c", symbol);
    }
    fprintf(out, "\n");

    return 0;
}
