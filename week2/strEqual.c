#include <stdio.h>

int strEqual(char str1[], char str2[]) {
    for ( int i = 0; str1[i] == str2[i]; i++ ) {
        if ( str1[i] == '\0' ) {
            return 1;
        }
    }
    return 0;
}
// -------------------
// Решение с указателями
// int strEqual(char str1[], char str2[]) {
//     for ( ; *str1 == *str2 && *str1 != '\0'; str1++, str2++ );
//     return *str1 == *str2;
// }

int main() {
    char str1[10];
    char str2[10];

    scanf("%9s", str1);
    scanf("%9s", str2);

    if ( strEqual(str1, str2) ) {
        printf("%s is equal to %s", str1, str2);
    } else {
        printf("%s is not equal to %s.", str1, str2);
    }

    return 0;
}