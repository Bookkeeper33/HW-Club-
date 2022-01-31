#include <stdio.h>

int main() {
	int square;

	scanf("%d", &square);

	if (( square != 0) && (( square & (square - 1)) == 0 )) { //
		printf("yes\n");
	} else {
		printf("no\n");
	}

	return 0;
}
