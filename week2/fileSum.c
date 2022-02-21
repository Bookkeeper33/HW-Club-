#include <stdio.h>

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int x;
    int sum = 0;

    for ( ; fscanf(in, "%d", &x) == 1; ) {
        sum += x;
    }
    fprintf(out, "%d\n", sum);
    fclose(in);
    fclose(in);

    return 0;
}