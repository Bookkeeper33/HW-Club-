#include <stdio.h>

int main() {
    int equation;

    scanf("%d", &equation);

    if ( equation < 0 ) {
    	printf("0\n");
    } else if ( equation > 0 ) {
    	printf("2\n");
    } else {
    	printf("1\n");
    }

	return 0;
}
