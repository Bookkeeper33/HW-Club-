#include <stdio.h>

int main() {
    int power;

    scanf("%d", &power);

    if ( power > 0 && (power & (power - 1)) == 0 ) {
        printf("yes\n");
    } else {
        printf("no\n");
    }

    return 0;
}
