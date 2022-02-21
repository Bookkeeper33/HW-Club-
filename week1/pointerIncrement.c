#include <stdio.h>

void pointerIncrement(int *value) { // task function 
	*value += 1;
}

int main() {
	int value ;

	scanf("%d", &value);

	pointerIncrement(&value);
	printf("%d\n", value);


    return 0;
}
