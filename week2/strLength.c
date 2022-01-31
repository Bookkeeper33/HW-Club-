#include <stdio.h>

#define SIZE 101

int strLen(char str[]) {
    int length = 0;

    for ( ; str[length] != '\0'; length++ );
    return length;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char string[SIZE];

    fscanf(in, "%s", string);
    fclose(in);
    fprintf(out, "%d\n", strLen(string));
    fclose(out);

    return 0;
}
