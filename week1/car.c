#include <stdio.h>

int main() {
    int speed, limit;

    scanf("%d %d", &speed, &limit);

    if ( speed > limit ) {
        printf("violation\n");
    } else {
        printf("ok");
    }

    return 0;
}
