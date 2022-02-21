#include <stdio.h>

int main() {
	int base, power;
	int square = 1;

	scanf("%d %d", &base, &power);

	for ( int i = 0; i < power; i++ ) {
		printf("%d ", square);
		square *= base;
	}
	printf("%d\n", square);

	return 0;
}
