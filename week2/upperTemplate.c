#include <stdio.h>

// task.in content: abc123ABC!opop&#123!alphaBRAVO
// expected task.out content: ABC123ABC!OPOP&#123!ALPHABRAVO
#define UPPERCASE 32
int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char symbol;


    for ( ; fscanf(in, "%c", &symbol) != EOF ; ) {
        if ( symbol >= 'a' && symbol <= 'z') {
            fprintf(out, "%c", symbol-UPPERCASE);
        } else {
            fprintf(out, "%c", symbol);
        }
    }

    fclose(in);
    fclose(out);

    return 0;
}