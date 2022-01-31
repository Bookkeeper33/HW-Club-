#include <stdio.h>

#define STEP 13

// void strRot13(char str[]) {
//     for ( ; *str != '\0'; str++ ) {

//         if ( *str >= 'A' && *str <= 'Z' && *str + STEP <= 'Z' ) {
//             *str += STEP;
//         } else if ( *str >= 'a' && *str <= 'z' && *str + STEP <= 'z' ) {
//             *str += STEP;
//         } else if ( *str + STEP > 'Z' || *str + STEP > 'z') {
//             *str -= 13;
//         }
//     }
// }

// void strRot13(char str[]) {
//     for ( int i = 0, tmp = str[0]; tmp != '\0'; i++, tmp = str[i] ) {
//         if ( tmp >= 'a' && tmp <= 'm' ) {
//             str[i] += 13;
//         } else if ( tmp > 'm' && tmp <= 'z' ) {
//             str[i] -= 13;
//         } else if ( tmp > 'A' && tmp < 'M') {
//             str[i] += 13;
//         } else if ( tmp > 'M' && tmp <= 'Z') {
//             str[i] -= 13;
//         }
//     }
// }

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
    char string[100] = "yaroslav melnyk SgozZolsv13-=!ds/ sa";

    printf("%s\n", string);

    strRot13(string);

    printf("%s\n",string);

    return 0;
}