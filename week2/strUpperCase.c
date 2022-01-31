#include <stdio.h>

#define SIZE 100
// первый способ перевести строку в UPPERcase
void strUpper(char str[]) {
    int i = 0;
    for( ; str[i] != '\0'; i++) {
        if ( str[i] >= 'a' && str[i] <= 'z') {
            str[i] = str[i] - 32;
        }
    }
}

// // второй способ перевести строку в UPPERcase
// void strUpperCase(char str[]) {
//     for ( ; *str != '\0'; str++ ) {
//         if ( *str >= 'a' && *str <= 'z' ) {
//             *str -= 32;
//         }
//     }
// }


int main() {
    char string[100] = "hello my name is yaroslav";

    // scanf("%s", string);

    strUpper(string);

    printf("%s\n", string);

    return 0;
}