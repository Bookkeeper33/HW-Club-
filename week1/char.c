#include <stdio.h>

int main() {
    char c;
    c = 'a';
    c = c - 32;
    

    printf("Size of c : %lu\n", sizeof(c));
    printf("Value %c\n", c);

    printf("Value %d\n", c);

    return 0;
}
