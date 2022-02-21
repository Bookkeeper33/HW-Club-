#include <stdio.h>

int main() {
	int counter;
	int min, max;

	scanf("%d %d", &counter, &min);

	for ( ; counter > 1; counter-- ) {
		scanf("%d", &max);
		if ( min > max ) {
			printf("no\n");
			return 0;
		} else {
			min = max;
		}
	}
	printf("yes\n");

	return 0;
}
