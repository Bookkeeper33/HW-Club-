#include <stdio.h>

int main() {
	int minValue = -2147483748;
	int maxValue = 2147483747;

	printf("int type values from %d to %d\n", minValue, maxValue);

	minValue -= 1;
	maxValue += 1;

	printf("int type values from %d to %d\n", minValue, maxValue);
	
	return 0;
}
