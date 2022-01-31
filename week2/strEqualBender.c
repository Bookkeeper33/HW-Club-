#include <stdio.h>

#define SIZE 101
// -------------------
// Решение с указателями
// int strEqual(char str1[], char str2[]) {
//     for ( ; *str1 == *str2 && *str1 != '\0'; str1++, str2++ );
//     return *str1 == *str2;
// }

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ )
        if ( str1[i] == '\0') {
            return 1;
        }
    return 0;
}

int main() {
    FILE *in = fopen("task.in", "r");
    FILE *out = fopen("task.out", "w");
    char str1[SIZE];
    char str2[SIZE];

    fscanf(in, "%100s %100s", str1, str2);
    fclose(in);

    if ( strEqual(str1, str2) ) {
        fprintf(out, "yes\n");
    } else {
        fprintf(out, "no\n");
    }
    fclose(out);

    return 0;
}
