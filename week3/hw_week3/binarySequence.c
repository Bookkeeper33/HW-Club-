#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char symb;;
    int zeroCounter = 0;
    int changesCounter = 0;

    for ( ; fscanf(in, "%c", &symb) == 1; ) {
        if ( symb == '0' ) {
            zeroCounter += 1;
        }
    }

    rewind(in);

    for ( int i = 0; i < zeroCounter && fscanf(in, "%c", &symb) == 1; i++ ) {

        if ( symb == '1' ) {
            changesCounter += 1;
        }
    }
    fprintf(out, "%d\n", changesCounter);
    fclose(in);
    fclose(out);

    return 0;
}