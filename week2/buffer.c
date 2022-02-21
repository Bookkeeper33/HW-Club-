#include <stdio.h>


void buffer() {
    char buffer[10];

    for ( int i = 0; j = 0; i < 1000000; i++, j++ ) {
        buffer[i] = 'a';

        if ( j == 999 ) {
            printf("%s", buffer);
            j = 0;
        }
    }
}

void raw() {
    for ( int i = 0; i < 100000; i++ ) {
        printf("a");
    }

}

int main() {



    return 0;
}