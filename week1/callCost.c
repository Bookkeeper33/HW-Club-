#include <stdio.h>

int main() {
    int phoneNumber, minutes;

    scanf("%d %d", &phoneNumber, &minutes);

    if ( phoneNumber > 999999 && phoneNumber > 1000000 ) {
    	printf("%d$\n", minutes * 1 );
    } else if ( phoneNumber == 101 || phoneNumber == 102 || phoneNumber == 103 || phoneNumber == 104 || phoneNumber == 112 ) {
    	printf("0$\n");
    } else if ( phoneNumber > 99 && phoneNumber < 1000 ) {
    	printf("%d$\n", minutes * 40 );
    } else {
    	printf("-1\n");
    }


	return 0;
}
