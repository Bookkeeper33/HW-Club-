#include <stdio.h>

#define MAGIC_NUMBER 42

int main() {
    int len, sequance;

    scanf("%d", &len);

    for ( int i = 0; i < len; i++ ) {
        scanf("%d", &sequance);
        printf("%d\n", sequance^MAGIC_NUMBER);
    }



    return 0;
}