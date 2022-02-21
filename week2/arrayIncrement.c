#include <stdio.h>


void arrayIncrement(int array[], int size, int increment) {
	for ( int i = 0; i < size; i++ ) {
		array[i] += increment;
	}
}

int main() {
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int increment;
	const int size = 10 - 1;

	scanf("%d", &increment);

	for ( int i = 0; i < size; i++ ) {
		printf("%d ", array[i]);
	}
	printf("%d\n", array[9]);

	arrayIncrement(array, size, increment);

	for ( int i = 0; i < size; i++ ) {
		printf("%d ", array[i]);
	}
	

	return 0;
}
