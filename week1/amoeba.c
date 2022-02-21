#include <stdio.h>

int main() {
	int organism, hours;
	int preOrganism;
	scanf("%d %d", &organism, &hours);

	for ( int i = 1; i <= hours; i++ ) {
		organism *= 2;
		printf("%dh => %d amoeba(s)\n", i, organism);
	}


	return 0;
}
