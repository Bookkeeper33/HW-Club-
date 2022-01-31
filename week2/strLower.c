#include <stdio.h>
// два решения
// void strLower(char str[]) {
//     for ( int tmp = *str; tmp != '\0'; str++, tmp = *str ) {
//         if ( tmp >= 'A' && tmp <= 'Z' ) {
//             *str = tmp + 'a' - 'A';
//         }
//     }
// }

void strLower(char str[]) {
    for ( int offset = 'a' - 'A'; *str != '\0'; str++ ) {
        if ( *str >= 'A' && *str <= 'Z' ) {
            *str += offset;
        }
    }
}

int main() {
    char string[10] = "HELLO";

    printf("%s\n", string);

    strLower(string);

    printf("%s\n", string);

    return 0;
}