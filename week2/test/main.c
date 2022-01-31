#include <stdio.h>
#include "library.h"

// при компиляции gcc -std=c99 main.c library.o

int main() {
    printf("%d\n", sum(10, 20));


    return 0;
}