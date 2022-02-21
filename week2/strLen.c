#include <stdio.h>

int strLen(char str[]) {
    int length = 0;

    for ( ; str[length] != '\0'; length++ );
    return length;
}


int main() {
    char string[] = "meow";

    printf("String length is %d\n",strLen(string));

    return 0;
}
