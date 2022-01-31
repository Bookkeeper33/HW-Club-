#include <stdio.h>

int main() {
	int x = 10;
	int y = 42;
	int z = 0;    

	z = x;
	printf("0 => %d\n", z);

	z = x + y;
	printf("%d + %d = %d\n", x, y, z);

	z = x - y;
	printf("%d - %d = %d\n", x, y, z);

	z = x * y;
	printf("%d * %d = %d\n", x, y, z);

	z = x / y;
	printf("%d / %d = %d\n", x, y, z);

	z = x % y;
	printf("%d %% %d = %d\n", x, y, z);
	printf("-------------------------\n");

    z += x;
    printf("%d\n", z);
    
    z -= y;
    printf("%d\n", z);
    
    z *= x;
    printf("%d\n", z);
    
    z /= x;    
    printf("%d\n", z);

    z %= x;
    printf("%d\n", z);
    printf("-------------------------\n");


    printf("x --> %d\n", x);
    printf("++x --> %d\n", ++x);
    printf("x++ -> %d\n", x++);
    printf("x-- -> %d\n", x--);
    printf("x -> %d\n", x);

// 10

    printf("%d\n", ++x); //11 11
    printf("%d\n", x--); //11 10
    printf("%d\n", --x); //9  9
    printf("%d\n", x++); //9  10

	return 0;
}
