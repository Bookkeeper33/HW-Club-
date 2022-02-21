#include <stdio.h>


int average1(int a, int b) {
    if ( a + b == 1 || a + b == -1 ) {
        return 0;
    }
    return (a / 2) + (b / 2) + ((a % 2 + b % 2) / 2);
    // return (a & b) + ((a ^ b) >> 1);
}

int average2(int a, int b) {
    if ( a + b == 1 || a + b == -1 ) {
        return 0;
    }
    if ( a % 2 != 0 && b % 2 != 0 && a % 2 == b % 2 ) {
        if ( a < 0 && b < 0 ) {
            return (a / 2) + (b / 2) - 1;
        } else {
            return (a / 2) + (b / 2) + 1;
        }
    }
        return (a / 2) + (b / 2);
}


int main() {
    int a = 5;
    int b = 10;

    printf("%d\n",average1(a,b));
    printf("%d\n",average2(a,b));


    return 0;
}
