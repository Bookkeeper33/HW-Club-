#include <stdio.h>

#define LIMIT 101

int strLenght(char str[]) {
    int lenght = 0;

    for ( ; str[lenght] != '\0'; lenght++ );
    return lenght;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char string[LIMIT];
    int size;

    fscanf(in, "%s", string);
    size = strLenght(string);

    for ( int i = 0, j = size - 1; i < j; i++, j-- ) {
        char copy = string[i];

        string[i] = string[j];
        string[j] = copy;
    }

    fprintf(out, "%s\n", string);
    fclose(out);

    return 0;
}
