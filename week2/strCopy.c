#include <stdio.h>

void strCopy(char target[], char source[]) {
    int index = 0;

    for ( ; source[index] != '\0'; index++ ) {
        target[index] = source[index];
    }
    target[index] = '\0';
}




int main() {
    char str1[11] = "ABCDEFGHIJ";
    char str2[12];

    strCopy(str2, str1);

    printf("%s\n", str2);

    return 0;
}