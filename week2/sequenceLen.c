#include <stdio.h>

#define LIMIT 100

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    int number;
    int counter = 0;

    for ( ; counter < LIMIT && fscanf(in, "%d", &number) == 1; counter++ );
    fprintf(out, "%d\n", counter);

    return 0;
}
