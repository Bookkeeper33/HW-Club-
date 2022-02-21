#include <stdio.h>

int intScan(FILE *in) {
    int number;

    fscanf(in, "%d", &number);
    return number;
}


int main() {
    FILE *in = fopen("task.in", "r");

    printf("%d\n", intScan(in));
    fclose(in);

    return 0;
}