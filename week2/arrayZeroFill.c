#include <stdio.h>


void arrayZeroFill(int array[], int size) {
	for ( int i = 0; i < size; i++ ) {
		array[i] = 0;
	}
}

int main() {
	int array[10];
	const int last = 10 - 1;

	arrayZeroFill(array, 10);

	for ( int i = 0; i < last; i++ ) {
		printf("%d ", array[i]);
	}
	printf("%d\n", array[last]);

	return 0;
}
