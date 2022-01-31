#include <stdio.h>

#define SIZE 101

void strRot13(char str[]) {
    for ( int tmp = *str; tmp != '\0'; str++, tmp = *str ) {
        if ( tmp >= 'a' && tmp <= 'm' ) {
            *str += 13;
        } else if ( tmp >= 'n' && tmp <= 'z' ) {
            *str -= 13;
        } else if ( tmp >= 'A' && tmp <= 'M' ) {
            *str += 13;
        } else if ( tmp >= 'N' && tmp <= 'Z' ) {
            *str -= 13;
        }
    }
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str[SIZE];
    char *ptr = str;

    for ( int i = 0; fscanf(in, "%c", ptr) == 1 && i < 100; ptr++, i++);
    fclose(in);
    *ptr = '\0';

    strRot13(str);
    fprintf(out, "%s\n", str);
    fclose(out);

    return 0;
}