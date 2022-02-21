#include <stdio.h>

int main() {
    char symbol = 'a';
    int offset = 'a' - 'A';

    printf("%c\n", symbol - offset);

    for ( char i = 'a'; i <= 'z'; i++ ) {
        printf("%c", i - offset);
    }
    printf("\n");

    for ( char i = 'A'; i <= 'Z'; i++ ) {
        printf("%c", i + offset);
    }
    printf("\n");
    // printf("char %lu\n", sizeof(char)*8);

    // printf("short int:%lu\n", sizeof(short int)*8); // 0 .. 65535 диапазон значений
    // printf("int:%lu\n", sizeof(int)*8); // 0.. 2**32 - 1
    // printf("long:%lu\n", sizeof(long long)*8); // 0.. 2**64 - 1

    return 0;
}