#include <stdio.h>

int main() {
    // int input;
    // int source = 23;

    // scanf("%d", &input);

    // if ( input  > source ) {
    //     printf("input is bigger than source(%d)!\n", source);
    // } else if ( input == source ) {
    //     printf("input(%d) is equal to source(%d)\n", input, source);
    // } else {
    //     printf("input is smaller than source(%d)!\n", source);
    // }

    // int wallet;

    // printf("Enter a sum in your wallet: ");
    // scanf("%d", &error_code);

    // if ( wallet <= 0 ) {
    // 	printf("It's better to go and work a little!\n");
    // }  else if ( wallet > 0 && wallet <= 50 ) {
    // 	printf("You have no debts!\n");
    // } else if ( wallet > 50 && wallet <= 500 ) {
    // 	printf("You can have some beer!\n");
    // } else if ( wallet > 500 && wallet <= 2000 ) {
    // 	printf("You can visit some pub!\n");
    // } else if ( wallet > 2000 && wallet <= 1000 ) {
    // 	printf("You can have some rest\n");
    // } else if ( wallet > 1000 && wallet <= 100000 ) {
    // 	printf("You can afford to fly to Egypt\n");
    // } else if ( wallet > 100000 && wallet <= 1000000 ) {
    // 	printf("You can buy a Bike!\n");
    // } else if ( wallet > 1000000 && wallet <= 10000000 ) {
    // 	printf("You can buy a car!\n");
    // } else {
    // 	printf("You have to save your money!\n");
    // }
	int error_code;
    printf("Enter an ErroCode: ");
    scanf("%d", &error_code);

    switch ( error_code ) {
    	case 400: {
        	printf("Page not found\n");
        	break;
    	}
    	case 404: {
    		printf("Page not found\n");
    		break;
    	}
    	default: {
    		printf("it's okay\n");
    	}
    }

    return 0;
}
