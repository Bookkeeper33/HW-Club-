#include <stdio.h>

void function(int x) {
    if ( x < 0 ) {
        return;
    }
    printf("%d\n", x);
    function(x-1);
}


void function2(int x) {
    if ( x < 0 ) {
        return;
    }
    function2(x-1);
    printf("%d\n", x);
}


void func(int x) {
    printf("call func(%d)\n", x);
    if ( x < 0 ) {
        printf("exit condition reached!\n");
        return;
    }
    func(x-1);
    printf("finish func(%d)\n", x);
}


int main() {
    int limit;

    scanf("%d", &limit);

    func(limit);

    return 0;
}